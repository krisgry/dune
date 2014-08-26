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
// Author: Joao Fortuna                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <queue>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace UAV
  {
    namespace FlightManager
    {
      using DUNE_NAMESPACES;

      //! Aircraft Type specifier
      enum Aircraft
      {
        //! Unset or unknown vehicle type
        ACFT_UNKNOWN = 0,
        //! Fixed-wing types
        ACFT_FIXEDWING = 1,
        //! Rotorcraft types (quad, hexa, etc)
        ACFT_ROTOR = 2,
        //! Lighter-than-air (blimp, balloon, etc)
        ACFT_AEROSTAT = 3
      };

      //! %Task arguments.
      struct Arguments
      {
        //! Default Altitude
        float alt;
        //! Default Speed
        float speed;
        //! LoiterHere (default) radius
        float lradius;
        //! Loitering tolerance
        int ltolerance;
        //! Lost comms plan name
        std::string plan;
        //! Type of aircraft
        Aircraft acft_type;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Task arguments.
        Arguments m_args;
        //! Current position
        double m_lat, m_lon;
        float m_hei;
        //! Vehicle medium
        bool m_airborne;
        //! Important entities
        unsigned m_comms, m_takeoff, m_land;
        //! Vehicle is doing Lost Comms plans
        bool m_in_lc;
        //! Current autonomy level
        unsigned m_autonomy;
        //! Current desired path
        IMC::DesiredPath m_dpath;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_lat(0),
          m_lon(0),
          m_hei(0),
          m_airborne(false),
          m_comms(UINT_MAX),
          m_takeoff(UINT_MAX),
          m_land(UINT_MAX),
          m_in_lc(false),
          m_autonomy(0)

        {
          param("Aircraft Type", m_args.acft_type)
          .defaultValue("Fixed-wing")
          .values("Fixed-wing, Rotor, Aerostat")
          .description("Type of aircraft being controlled");

          param("Default altitude", m_args.alt)
          .defaultValue("200.0")
          .units(Units::Meter)
          .description("Altitude to be used if desired Z has no units");

          param("Default speed", m_args.speed)
          .defaultValue("18.0")
          .units(Units::MeterPerSecond)
          .description("Speed to be used if desired speed is not specified");

          param("Default loiter radius", m_args.lradius)
          .defaultValue("-150.0")
          .units(Units::Meter)
          .description("Loiter radius used in LoiterHere (idle)");

          param("Loitering tolerance", m_args.ltolerance)
          .defaultValue("10")
          .units(Units::Meter)
          .description("Distance to consider loitering (radius + tolerance)");

          param("Lost Comms Plan", m_args.plan)
          .defaultValue("lost_comms")
          .description("Plan to be executed in case of Lost Communications");


          bind<IMC::PlanControlState>(this);
          bind<IMC::VehicleMedium>(this);
          bind<IMC::EntityState>(this);
//          bind<IMC::IndicatedSpeed>(this);
//          bind<IMC::GpsFix>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::IdleManeuver>(this);
          bind<IMC::AutopilotMode>(this);
          bind<IMC::DesiredPath>(this);
        }

        void
        onResourceInitialization(void)
        {
          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        void
        onEntityResolution(void)
        {
          try
          {
            m_comms = resolveEntity("Communications");
          }
          catch (...)
          {
            m_comms = UINT_MAX;
          }

          try
          {
            m_takeoff = resolveEntity("Takeoff Monitor");
          }
          catch (...)
          {
            m_takeoff = UINT_MAX;
          }

          try
          {
            m_land = resolveEntity("Landing Monitor");
          }
          catch (...)
          {
            m_land = UINT_MAX;
          }
        }

        void
        consume(const IMC::VehicleMedium* msg)
        {
          if (msg->medium == IMC::VehicleMedium::VM_AIR)
            m_airborne = true;
          else
            m_airborne = false;

          (void) msg;
        }

        void
        consume(const IMC::AutopilotMode* msg)
        {
          m_autonomy = msg->autonomy;

          (void) msg;
        }

        void
        consume(const IMC::DesiredPath* msg)
        {
          m_dpath = *msg;
          (void) msg;

          if (m_autonomy != IMC::AutopilotMode::AL_AUTO)
            return;

          if (!m_airborne)
            m_dpath.flags |= IMC::DesiredPath::FL_TAKEOFF;

          dispatch(m_dpath);
        }

        void
        consume(const IMC::PlanControlState* msg)
        {
          // Check if already running Lost Comms plan
          if (!msg->plan_id.compare(m_args.plan))
          {
            m_in_lc = true;
          }
          else
            m_in_lc = false;
        }


        void
        consume(const IMC::EntityState* msg)
        {
          // Run Lost Comms plan if Communications monitor
          // in in FAULT state and if Lost Comms plan
          // is not running yet
          if (msg->getSourceEntity() == m_comms &&
              msg->state == IMC::EntityState::ESTA_FAULT &&
              !m_in_lc)
          {
            IMC::PlanControl p_control;
            p_control.plan_id = m_args.plan;
            p_control.op = IMC::PlanControl::PC_START;
            p_control.type = IMC::PlanControl::PC_REQUEST;
            p_control.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;

            dispatch(p_control);
          }
          (void) msg;
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          // Save current position
          m_lat = msg->lat;
          m_lon = msg->lon;
          m_hei = msg->height;

          WGS84::displace(msg->x, msg->y, msg->z, &m_lat, &m_lon, &m_hei);
        }

        void
        consume(const IMC::IdleManeuver* msg)
        {
          (void) msg;

          // Start loiter on current position if IdleManeuver is received
          // Should be used for fixed-wing only
          if (m_args.acft_type != ACFT_FIXEDWING)
            return;

          IMC::ControlLoops cloops;
          cloops.enable = IMC::ControlLoops::CL_ENABLE;
          cloops.mask = IMC::CL_PATH;

          dispatch(cloops);

          IMC::DesiredPath dpath;

          dpath.lradius = std::abs(m_args.lradius);
          dpath.flags = IMC::DesiredPath::FL_LOITER_CURR;
          dpath.flags |= (m_args.lradius < 0 ? IMC::DesiredPath::FL_CCLOCKW : 0);

          dpath.speed = m_args.speed;
          dpath.speed_units = IMC::SUNITS_METERS_PS;

          dispatch(dpath);
        }

        void
        task(void)
        {

        }
      };
    }
  }
}

DUNE_TASK
