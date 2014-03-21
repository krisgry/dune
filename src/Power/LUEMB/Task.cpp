//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Filipe Ferreira                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Power
{
  namespace LUEMB
  {
    using DUNE_NAMESPACES;

    //! Packet identifiers.
    enum PacketIds
    {
      //! State.
      PKT_ID_STATE    = 1,
      //! Actuation command.
      PKT_ID_ACTUATE  = 2
    };

    //! Actuation commands.
    enum ActuateCommands
    {
      LED_RED          = 0,
      LED_GREEN        = 1,
      WIFI_BOARD       = 2,
      UBIQUITI_CAMERA  = 3,
      CO2_SENSOR       = 4,
      SPARE12          = 5,
      CANON_CAMERA     = 6,
      FLIR_CAMERA      = 7,
      SPARE5           = 8,
      AXIS_CAMERA      = 9,
      //! Total number of commands
      ACT_TOTAL        = 10
    };

    //! Voltages in the state array
    enum StateVoltages
    {
      //! Input Voltage
      SV_IV,
      //! 5V
      SV_5,
      //! 12V
      SV_12,
      //! 48V
      SV_48,
      //! Number of voltages
      SV_TOTAL
    };

    //! Currents in the state array
    enum StateCurrents
    {
      //! Input Current
      SV_IC,
      //! 5V Current
      SV_I5,
      //! 12V Current
      SV_I12,
      //! 48V Current
      SV_I48,
      //! Total number of currents
      SC_TOTAL
    };


    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Watchdog timeout.
      double wdog_tout;
    };

    //! UART baud rate.
    static const unsigned c_baud_rate = 115200;
    //! Amount of seconds to wait before restarting task.
    static const unsigned c_restart_delay = 1;
    //! Size in bytes of the board's state
    static const unsigned c_state_size = 16;
    //! Labels for states voltages
    const char* c_voltage_labels[] =
    {
      "InputV", "5V", "12V", "48V"
    };
    //! Labels for state currents
    const char* c_current_labels[] =
    {
      "InputC", "I5", "I12", "I48"
    };
    //! Voltages index in for each measure in the received buffer
    const uint8_t c_voltage_idx[] =
    {
      0, 2, 4, 6
    };
    //! Currents index in for each measure in the received buffer
    const uint8_t c_current_idx[] =
    {
      1, 3, 5, 7
    };

    //! Action names for each actuation command
    const std::string c_action_names[] =
    {
      "Led Red", "Led Green", "Wifi Board", "Ubiquiti Camera",
      "CO2 Sensor", "Spare12", "Canon Camera", "Flir Camera", "Spare5", "Axis Camera"
    };
    //! Action types for each actuation command
    const std::string c_action_types[] =
    {
      "Button", "Button", "Button", "Button", "Button",
      "Button", "Button", "Button", "Button", "Button"
    };

    struct Task: public Tasks::Task
    {
      //! Control UART.
      SerialPort* m_uart;
      //! Control Interface.
      UCTK::Interface* m_ctl;
      //! Current.
      IMC::Current m_current[SC_TOTAL];
      //! Voltage.
      IMC::Voltage m_voltage[SV_TOTAL];
      //! Watchdog.
      Counter<double> m_wdog;
      //! Set of remote actions
      IMC::RemoteActionsRequest m_actions;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)

      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the Board");

        param("Watchdog Timeout", m_args.wdog_tout)
        .units(Units::Second)
        .defaultValue("2.0")
        .minimumValue("1.0")
        .description("Watchdog timeout");

        bind<IMC::PowerChannelControl>(this);
      }

      ~Task(void)
      {}
      
      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < SV_TOTAL; ++i)
        {
          std::string vlabel = String::str("%s - %s", getEntityLabel(),
                                           c_voltage_labels[i]);
          m_voltage[i].setSourceEntity(reserveEntity(vlabel));
        }

        for (unsigned i = 0; i < SC_TOTAL; ++i)
        {
          std::string clabel = String::str("%s - %s", getEntityLabel(),
                                           c_current_labels[i]);
          m_current[i].setSourceEntity(reserveEntity(clabel));
        }
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_wdog.setTop(m_args.wdog_tout);
      }

      //! Acquire resources
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, c_baud_rate);
          m_ctl = new UCTK::Interface(m_uart);

          UCTK::FirmwareInfo info = m_ctl->getFirmwareInfo();
          if (info.isDevelopment())
            war(DTR("device is using unstable firmware"));
          else
            inf(DTR("firmware version %u.%u.%u"), info.major,
                info.minor, info.patch);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), c_restart_delay);
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_ctl);
        Memory::clear(m_uart);
      }

      //! Dispatch raw board state
      //! @return true if successfully dispatched state
      bool
      dispatchState(void)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_STATE);

        if (!m_ctl->sendFrame(frame))
          return false;

        if (frame.getPayloadSize() != c_state_size)
          return false;

        for (unsigned i = 0; i < SV_TOTAL; i++)
        {
          uint16_t value;
          frame.get(value, c_voltage_idx[i] * sizeof(uint16_t));
          m_voltage[i].value = value / 1000.0;
          dispatch(m_voltage[i]);
        }

        for (unsigned i = 0; i < SC_TOTAL; i++)
        {
          uint16_t value;
          frame.get(value, c_current_idx[i] * sizeof(uint16_t));
          m_current[i].value = value / 1000.0;
          dispatch(m_current[i]);
        }

        return true;
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(Status::getString(Status::CODE_COM_ERROR), c_restart_delay);
          }
          else
          {
            if (dispatchState())
            {
              m_wdog.reset();
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
