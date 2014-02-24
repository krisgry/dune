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

      //! Takeoff stage specifier
      enum TakeoffStage
      {
        //! Waiting for takeoff request
        GROUND = 0,
        //! Takeoff requested, waiting for launch
        PRELAUNCH = 1,
        //! Launch conditions were met,
        //! if kept then we are flying
        LAUNCH = 2,
        //! Takeoff successful
        FLYING = 3
      };


      //! %Task arguments.
      struct Arguments
      {
        //! Air Speed threshold.
        float airspeed_threshold;
        //! Acceleration threshold.
        float acc_threshold;
        //! Takeoff Altitude threshold.
        float tkoff_alt_threshold;
        //! Flying Altitude threshold.
        float flying_alt_threshold;
        //! Takeoff Type.
        std::string type;
        //! Takeoff timer
        float timer;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Launch timer.
        Time::Counter<float> m_timer;
        //! Task arguments.
        Arguments m_args;
        //! Takeoff Type
        Takeoff m_tkoff_method;
        //! Takeoff state machine stage
        TakeoffStage m_tkoff_stage;
        //! Vehicle airspeed.
        float m_airspeed;
        //! Takeoff requested
        bool m_tkoff_req;
        //! Is on ground
        bool m_ground;
        //! Ground height.
        float m_gnd_hei;
        //! Vehicle altitude above ground.
        float m_alt;
        //! Vehicle longitudinal acceleration.
        double m_acc;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_tkoff_method(TKOFF_CATAPULT),
          m_tkoff_stage(GROUND),
          m_airspeed(0),
          m_tkoff_req(false),
          m_ground(true),
          m_gnd_hei(0),
          m_alt(0),
          m_acc(0)
        {
          param("Takeoff Altitude Threshold", m_args.tkoff_alt_threshold)
          .units(Units::Meter)
          .defaultValue("10.0")
          .description("Minimum altitude necessary to consider a vehicle has been launched");

          param("Flying Altitude Threshold", m_args.flying_alt_threshold)
          .units(Units::Meter)
          .defaultValue("50.0")
          .description("Minimum altitude necessary to consider a vehicle flying");

          param("Air Speed Threshold", m_args.airspeed_threshold)
          .units(Units::MeterPerSecond)
          .defaultValue("12.0")
          .description("Minimum air speed necessary to consider a vehicle in air");

          param("Acceleration Threshold", m_args.acc_threshold)
          .units(Units::MeterPerSquareSecond)
          .defaultValue("1.0")
          .description("Minimum acceleration necessary to consider a good catapult/hand launch");

          param("Launch Timer", m_args.timer)
          .units(Units::Second)
          .defaultValue("12.0")
          .description("Minimum time in launch stage necessary to consider a vehicle flying");

          param("Takeoff Method", m_args.type)
          .defaultValue("CATAPULT")
          .values("ROLLING, CATAPULT, VERTICAL, DROP")
          .description("Method of takeoff");

          // Register consumers.
          bind<IMC::EstimatedState>(this);
          bind<IMC::IndicatedSpeed>(this);
          bind<IMC::VehicleMedium>(this);
          bind<IMC::DesiredPath>(this);
          bind<IMC::Acceleration>(this);
        }

        void
        onResourceInitialization(void)
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

          m_timer.setTop(m_args.timer);
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (m_tkoff_stage == GROUND)
          {
            m_gnd_hei = msg->height - msg->z;
            m_alt = 0;
          }
          else
          {
            float hei = msg->height - msg->z;
            m_alt = hei - m_gnd_hei;
          }
        }

        void
        consume(const IMC::VehicleMedium* msg)
        {
          m_ground = (msg->medium == VehicleMedium::VM_GROUND);
        }

        void
        consume(const IMC::Acceleration* msg)
        {
          m_acc = msg->x;
        }

        void
        consume(const IMC::DesiredPath* msg)
        {
//          TODO: Add Takeoff and Land flags to DesiredPath
//          m_tkoff_req = (msg->flags && DesiredPath::FL_TAKEOFF);
        }

        void
        consume(const IMC::IndicatedSpeed* msg)
        {
          m_airspeed = msg->value;
        }

        void
        onMain(void)
        {
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

          while (!stopping())
          {
            //! State machine
            if (m_tkoff_method == TKOFF_ROLLING)
            {
              switch (m_tkoff_stage)
              {
                case GROUND:
                  if (m_tkoff_req)
                    m_tkoff_stage = PRELAUNCH;
                  m_tkoff_req = false;
                  break;
                case PRELAUNCH:
                  if (m_airspeed > 1.1 * m_args.airspeed_threshold)
                  {
                    m_tkoff_stage = LAUNCH;
                    m_timer.reset();
                  }
                  break;
                case LAUNCH:
                  if (m_airspeed < 0.95 * m_args.airspeed_threshold)
                    m_tkoff_stage = PRELAUNCH;
                  else if ((m_timer.overflow() && m_alt > m_args.tkoff_alt_threshold) ||
                           m_alt > m_args.flying_alt_threshold)
                    m_tkoff_stage = FLYING;

                  break;
                case FLYING:
                  setEntityState(IMC::EntityState::ESTA_NORMAL, "Flying");
                  break;
              }
            }
            else if (m_tkoff_method == TKOFF_CATAPULT)
            {
              switch (m_tkoff_stage)
              {
                case GROUND:
                  if (m_tkoff_req)
                    m_tkoff_stage = PRELAUNCH;
                  m_tkoff_req = false;
                  break;
                case PRELAUNCH:
                  if (m_acc > m_args.acc_threshold ||
                      m_airspeed > 1.1 * m_args.airspeed_threshold)
                  {
                    m_tkoff_stage = LAUNCH;
                    m_timer.reset();
                  }
                  break;
                case LAUNCH:
                  if (m_airspeed < 0.95 * m_args.airspeed_threshold)
                    m_tkoff_stage = PRELAUNCH;
                  else if ((m_timer.overflow() && m_alt > m_args.tkoff_alt_threshold) ||
                           m_alt > m_args.flying_alt_threshold)
                    m_tkoff_stage = FLYING;

                  break;
                case FLYING:
                  setEntityState(IMC::EntityState::ESTA_NORMAL, "Flying");
                  break;
              }
            }

            waitForMessages(1.0);
          }
        }
      };
    }
  }
}

DUNE_TASK
