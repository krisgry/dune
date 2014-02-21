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

namespace Monitors
{
  namespace UAV
  {
    namespace Communications
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Heartbeat timeout.
        float hrtbeat_tout;
        //! Timeout if executing plan
        float mission_tout;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Time of last heartbeat.
        double m_hrtbeat_last;
        //! True if executing plan
        bool m_in_mission;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_hrtbeat_last(0),
          m_in_mission(false)
        {
          param("Heartbeat Timeout", m_args.hrtbeat_tout)
          .units(Units::Second)
          .defaultValue("5.0")
          .description("Heartbeat Timeout");

          param("In Mission Timeout", m_args.mission_tout)
          .units(Units::Second)
          .defaultValue("10.0")
          .description("Timeout if executing plan");

          bind<IMC::Heartbeat>(this);
          bind<IMC::PlanControlState>(this);
        }

        void
        onResourceInitialization(void)
        {
          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          m_hrtbeat_last = Clock::get();
        }

        void
        consume(const IMC::Heartbeat* msg)
        {
          if (msg->getSource() == getSystemId())
            return;

          m_hrtbeat_last = Clock::get();
        }

        void
        consume(const IMC::PlanControlState* msg)
        {
          m_in_mission = (msg->state & IMC::PlanControlState::PCS_EXECUTING) != 0;
        }

        void
        task(void)
        {
          double now = Clock::get();

          if ((now > (m_hrtbeat_last + m_args.mission_tout) &&  m_in_mission) ||
              (now > (m_hrtbeat_last + m_args.hrtbeat_tout) && !m_in_mission))
            setEntityState(IMC::EntityState::ESTA_FAULT, Status::CODE_COM_ERROR);
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      };
    }
  }
}

DUNE_TASK
