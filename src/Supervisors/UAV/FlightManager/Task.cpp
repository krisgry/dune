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
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx)
        {
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


          bind<IMC::PlanControlState>(this);
          bind<IMC::VehicleMedium>(this);
          bind<IMC::EntityState>(this);
//          bind<IMC::IndicatedSpeed>(this);
//          bind<IMC::GpsFix>(this);
//          bind<IMC::EstimatedState>(this);
//          bind<IMC::IdleManeuver>(this);
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
        }

        void
        consume(const IMC::VehicleMedium* v_medium)
        {
        }


        void
        consume(const IMC::PlanControlState* msg)
        {
        }


        void
        consume(const IMC::EntityState* msg)
        {
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
