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
// Author: João Fortuna                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace UAV
  {
    //! This task monitors a correct takeoff
    //! or landing in order to update the
    //! system's current medium.
    //!
    //! @author João Fortuna
    namespace Takeoff
    {
      using DUNE_NAMESPACES;

      //! Takeoff method specifier
      enum Takeoff
      {
        //! Takeoff on wheels
        TKOFF_ROLLING = 0,
        //! Catapult or hand launch
        TKOFF_CATAPULT = 1,
        //! For rotorcraft types (quad, hexa, etc)
        TKOFF_VERTICAL = 2,
        //! When dropped from another aircraft
        TKOFF_DROP = 3
      };

      //! %Task arguments.
      struct Arguments
      {
        //! Air Speed threshold.
        float airspeed_threshold;
        //! Takeoff Type.
        std::string type;
      };

      //! %Medium task.
      struct Task: public DUNE::Tasks::Periodic
      {
        //! Vehicle Medium.
        IMC::VehicleMedium m_vm;
        //! Initialization timer.
        Time::Counter<float> m_init;
        //! Vehicle airspeed.
        float m_airspeed;
        //! Task arguments.
        Arguments m_args;
        //! Aircraft Type
        Takeoff m_tkoff_method;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_airspeed(0),
          m_tkoff_method(TKOFF_CATAPULT)
        {
          param("Air Speed Threshold", m_args.airspeed_threshold)
          .units(Units::Meter)
          .defaultValue("12.0")
          .description("Minimum air speed necessary to consider a vehicle in air");

          param("Takeoff Method", m_args.type)
          .defaultValue("LAUNCH")
          .values("ROLLING, LAUNCH, VERTICAL, DROP")
          .description("Method of takeoff");

          // Register consumers.
          bind<IMC::EstimatedState>(this);
          bind<IMC::IndicatedSpeed>(this);
          bind<IMC::VehicleMedium>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (m_args.type == "ROLLING")
            m_tkoff_method = TKOFF_ROLLING;
          else if (m_args.type == "CATAPULT")
            m_tkoff_method = TKOFF_CATAPULT;
          else if (m_args.type == "VERTICAL")
            m_tkoff_method = TKOFF_VERTICAL;
          else if (m_args.type == "DROP")
            m_tkoff_method = TKOFF_DROP;
          else
            err(DTR("Unrecognized Takeoff method"));
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
        }

        void
        consume(const IMC::VehicleMedium* msg)
        {
        }

        void
        consume(const IMC::IndicatedSpeed* msg)
        {
          m_airspeed = msg->value;
        }

        void
        task(void)
        {
          // Wait to stabilize at beginning.
          if (!m_init.overflow())
            return;

          // Initialization.
          if (getEntityState() == IMC::EntityState::ESTA_BOOT)
          {
            if (m_airspeed < m_args.airspeed_threshold)
              m_vm.medium = IMC::VehicleMedium::VM_GROUND;
            else
              m_vm.medium = IMC::VehicleMedium::VM_AIR;

            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            dispatch(m_vm);

            return;
          }

          // Task state machine.
          switch (m_vm.medium)
          {
            case IMC::VehicleMedium::VM_AIR:
              if (m_airspeed < m_args.airspeed_threshold)
                m_vm.medium = IMC::VehicleMedium::VM_GROUND;
              break;
            case IMC::VehicleMedium::VM_GROUND:
              if (m_airspeed > m_args.airspeed_threshold && m_args.type == "UAV")
                m_vm.medium = IMC::VehicleMedium::VM_AIR;
              break;
          }
        }
      };
    }
  }
}

DUNE_TASK
