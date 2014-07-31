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
#include <vector>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>

namespace Transports
{
  namespace MAVLink
  {
    using DUNE_NAMESPACES;

    //! APM Type specifier
    enum APM_Vehicle {
      //! Unset or unknown vehicle type
      VEHICLE_UNKNOWN = 0,
      //! Fixed wing types
      VEHICLE_FIXEDWING,
      //! Copter types (quad, hexa, etc)
      VEHICLE_COPTER
    };

    struct RadioChannel
    {
      //! PWM range
      int pwm_min;
      int pwm_max;
      //! Value range
      float val_max;
      float val_min;
    };

    //! %Task arguments.
    struct Arguments
    {
      //! Communications timeout
      uint8_t comm_timeout;
      //! TCP Port
      uint16_t TCP_port;
      //! TCP Address
      Address TCP_addr;
      //! Telemetry Rate
      uint8_t trate;
      //! GPS is uBlox
      bool ublox;
      //! Loitering tolerance
      int ltolerance;
      //! Has Power Module
      bool pwrm;
      //! WP seconds before reach
      int secs;
      //! Use APM's Waypoint tracker instead of DUNE's
      bool ardu_tracker;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Arduino packet handling
      typedef void (Task::* PktHandler)(const mavlink_message_t* msg);
      typedef std::map<int, PktHandler> PktHandlerMap;
      PktHandlerMap m_mlh;
      double m_last_pkt_time;
      uint8_t m_buf[512];
      //! Estimated state message.
      IMC::EstimatedState m_estate;
      //! GPS Fix message
      IMC::GpsFix m_fix;
      //! Path Control State
      IMC::PathControlState m_pcs;
      //! DesiredPath message
      IMC::DesiredPath m_dpath;
      //! Reference Lat and Lon and Hei to measure displacement
      fp64_t ref_lat, ref_lon;
      fp32_t ref_hei;
      //! TCP socket
      TCPSocket* m_TCP_sock;
      Address m_TCP_addr;
      uint16_t m_TCP_port;
      //! System ID
      uint8_t m_sysid;
      //! Last received position
      double m_lat, m_lon;
      float m_alt;
      //! External control
      bool m_external;
      //! Critical WP
      bool m_critical;
      //! Bitfield of enabled control loops.
      uint32_t m_cloops;
      //! Parser Variables
      mavlink_message_t m_msg;
      int m_desired_radius;
      int m_gnd_speed;
      int m_mode;
      bool m_changing_wp;
      bool m_error_missing, m_esta_ext;
      //! Setup rate hack
      bool m_has_setup_rate;
      //! Vehicle is on ground
      bool m_ground;
      //! Desired control
      float m_droll, m_dclimb, m_dspeed;
      //! Type of system to be controlled
      APM_Vehicle m_vehicle_type;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        ref_lat(0.0),
        ref_lon(0.0),
        ref_hei(0.0),
        m_sysid(1),
        m_lat(0.0),
        m_lon(0.0),
        m_alt(0.0),
        m_external(true),
        m_critical(false),
        m_cloops(0),
        m_desired_radius(0),
        m_gnd_speed(0),
        m_mode(0),
        m_changing_wp(false),
        m_error_missing(false),
        m_esta_ext(false),
        m_has_setup_rate(false),
        m_ground(true),
        m_droll(0),
        m_dclimb(0),
        m_dspeed(20),
        m_vehicle_type(VEHICLE_UNKNOWN)
      {
        param("Communications Timeout", m_args.comm_timeout)
        .minimumValue("1")
        .maximumValue("60")
        .defaultValue("10")
        .units(Units::Second)
        .description("Ardupilot communications timeout");

        param("Ardupilot Tracker", m_args.ardu_tracker)
        .defaultValue("false")
        .description("Use Ardupilot's waypoint tracker");

        param("TCP - Port", m_args.TCP_port)
        .defaultValue("5760")
        .description("Port for connection to Ardupilot");

        param("TCP - Address", m_args.TCP_addr)
        .defaultValue("127.0.0.1")
        .description("Address for connection to Ardupilot");

        param("Telemetry Rate", m_args.trate)
        .defaultValue("10")
        .units(Units::Hertz)
        .description("Telemetry output rate from Ardupilot");

        param("uBlox GPS", m_args.ublox)
        .defaultValue("false")
        .description("The installed GPS is uBlox");

        param("Loitering tolerance", m_args.ltolerance)
        .defaultValue("10")
        .units(Units::Meter)
        .description("Distance to consider loitering (radius + tolerance)");

        param("Power Module", m_args.pwrm)
        .defaultValue("true")
        .description("There is a Power Module installed");

        param("Seconds before Waypoint", m_args.secs)
        .defaultValue("4")
        .units(Units::Second)
        .description("Seconds before actually reaching Waypoint that it is considered as reached");

        // Setup packet handlers
        // IMPORTANT: set up function to handle each type of MAVLINK packet here
        m_mlh[MAVLINK_MSG_ID_ATTITUDE] = &Task::handleAttitudePacket;
        m_mlh[MAVLINK_MSG_ID_GLOBAL_POSITION_INT] = &Task::handlePositionPacket;
        m_mlh[MAVLINK_MSG_ID_HWSTATUS] = &Task::handleHWStatusPacket;
        m_mlh[MAVLINK_MSG_ID_SCALED_PRESSURE] = &Task::handleScaledPressurePacket;
        m_mlh[MAVLINK_MSG_ID_GPS_RAW_INT] = &Task::handleRawGPSPacket;
        m_mlh[MAVLINK_MSG_ID_WIND] = &Task::handleWindPacket;
        m_mlh[MAVLINK_MSG_ID_COMMAND_ACK] = &Task::handleCmdAckPacket;
        m_mlh[MAVLINK_MSG_ID_MISSION_ACK] = &Task::handleMissionAckPacket;
        m_mlh[MAVLINK_MSG_ID_MISSION_CURRENT] = &Task::handleMissionCurrentPacket;
        m_mlh[MAVLINK_MSG_ID_STATUSTEXT] = &Task::handleStatusTextPacket;
        m_mlh[MAVLINK_MSG_ID_HEARTBEAT] = &Task::handleHeartbeatPacket;
        m_mlh[MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT] = &Task::handleNavControllerPacket;
        m_mlh[MAVLINK_MSG_ID_MISSION_ITEM] = &Task::handleMissionItemPacket;
        m_mlh[MAVLINK_MSG_ID_SYS_STATUS] = &Task::handleSystemStatusPacket;
        m_mlh[MAVLINK_MSG_ID_VFR_HUD] = &Task::handleHUDPacket;
        m_mlh[MAVLINK_MSG_ID_SYSTEM_TIME] = &Task::handleSystemTimePacket;
        m_mlh[MAVLINK_MSG_ID_PARAM_VALUE] = &Task::handleParamValuePacket;
        m_mlh[MAVLINK_MSG_ID_RAW_IMU] = &Task::handleIMU;


        // Setup processing of IMC messages
        bind<DesiredPath>(this);
        bind<DesiredRoll>(this);
        bind<DesiredZ>(this);
        bind<DesiredVerticalRate>(this);
        bind<DesiredSpeed>(this);
        bind<ControlLoops>(this);

        // Misc. initialization
        m_last_pkt_time = 0; // time of last packet from Ardupilot
        m_estate.clear();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_TCP_sock);
      }

      void
      onResourceAcquisition(void)
      {
        m_TCP_addr = m_args.TCP_addr;
        m_TCP_port = m_args.TCP_port;
        openConnection();
      }

      void
      onParameterUpdate(void)
      {
      }

      void
      openConnection(void)
      {
        try
        {
          m_TCP_sock = new TCPSocket;
          m_TCP_sock->connect(m_TCP_addr, m_TCP_port);
          setupRate(m_args.trate);
          inf(DTR("Ardupilot interface initialized"));
        }
        catch (...)
        {
          m_TCP_sock = 0;
          war(DTR("Connection failed, retrying..."));
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
        }
      }

      void
      setupRate(uint8_t rate)
      {
        uint8_t buf[512];
        mavlink_message_t* msg = new mavlink_message_t;

        mavlink_msg_request_data_stream_pack(255, 0, msg,
            m_sysid,
            0,
            MAV_DATA_STREAM_EXTRA1,
            rate,
            1);

        uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);
        spew("ATTITUDE Stream setup to %d Hertz", rate);

        mavlink_msg_request_data_stream_pack(255, 0, msg,
            m_sysid,
            0,
            MAV_DATA_STREAM_EXTRA2,
            rate,
            1);

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);
        spew("VFR Stream setup to %d Hertz", rate);

        mavlink_msg_request_data_stream_pack(255, 0, msg,
            m_sysid,
            0,
            MAV_DATA_STREAM_POSITION,
            rate,
            1);

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);
        spew("POSITION Stream setup to %d Hertz", rate);

        mavlink_msg_request_data_stream_pack(255, 0, msg,
            m_sysid,
            0,
            MAV_DATA_STREAM_EXTENDED_STATUS,
            (int)(rate/5),
            1);

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);
        spew("STATUS Stream setup to %d Hertz", (int)(rate/5));

        mavlink_msg_request_data_stream_pack(255, 0, msg,
            m_sysid,
            0,
            MAV_DATA_STREAM_EXTRA3,
            1,
            1);

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);
        spew("AHRS-HWSTATUS-WIND Stream setup to 1 Hertz");

        mavlink_msg_request_data_stream_pack(255, 0, msg,
            m_sysid,
            0,
            MAV_DATA_STREAM_RAW_SENSORS,
            rate,
            1);

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);
        spew("SENSORS Stream setup to %d Hertz", rate);

        mavlink_msg_request_data_stream_pack(255, 0, msg,
            m_sysid,
            0,
            MAV_DATA_STREAM_RC_CHANNELS,
            1,
            0);

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);
        spew("RC Stream disabled");
      }

      void
      info(uint32_t was, uint32_t is, uint32_t loop, const char* desc)
      {
        was &= loop;
        is &= loop;

        if (was && !is)
          debug("%s - deactivating", desc);
        else if (!was && is)
          debug("%s - activating", desc);
      }

      void
      consume(const IMC::ControlLoops* cloops)
      {
        uint32_t prev = m_cloops;

        if (cloops->enable)
        {
          m_cloops |= cloops->mask;
          if ((!m_args.ardu_tracker) && (cloops->mask & IMC::CL_PATH))
          {
            debug("Ardupilot tracker is NOT enabled");
            m_cloops &= ~IMC::CL_PATH;
          }

          if (!(m_args.ardu_tracker) && (cloops->mask & IMC::CL_ROLL))
            onParameterUpdate();
        }
        else
        {
          m_cloops &= ~cloops->mask;

          if ((cloops->mask & IMC::CL_ROLL) && !m_ground)
          {
            mavlink_message_t* msg = new mavlink_message_t;
            uint8_t buf[512];

            //! Disabling RC override
            mavlink_msg_rc_channels_override_pack(255, 0, msg,
                1,
                1,
                0, //! RC Channel 1 (roll)
                0, //! RC Channel 2 (vertical rate)
                0, //! RC Channel 3 (speed)
                0, //! RC Channel 4 (rudder)
                0, //! RC Channel 5 (not used)
                0, //! RC Channel 6 (not used)
                0, //! RC Channel 7 (not used)
                0);//! RC Channel 8 (mode)
            uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
            sendData(buf, n);

            sendCommandPacket(MAV_CMD_NAV_LOITER_UNLIM);
            inf(DTR("Loiter"));
          }
        }

        info(prev, m_cloops, IMC::CL_SPEED, "speed control");
        info(prev, m_cloops, IMC::CL_ALTITUDE, "altitude control");
        info(prev, m_cloops, IMC::CL_VERTICAL_RATE, "vertical rate control");
        info(prev, m_cloops, IMC::CL_ROLL, "bank control");
        info(prev, m_cloops, IMC::CL_YAW, "heading control");
        info(prev, m_cloops, IMC::CL_PATH, "path control");
      }

      //! Messages for FBWB control (using DUNE's controllers)
      void
      activateFBW(void)
      {
        uint8_t buf[512];
        mavlink_message_t* msg = new mavlink_message_t;

        mavlink_msg_set_mode_pack(255, 0, msg,
            m_sysid,
            1,
            6); //!FBWB

        uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);
      }

      void
      consume(const IMC::DesiredRoll* d_roll)
      {
        if(m_external || m_critical || m_ground)
          return;

        if (!(m_cloops & IMC::CL_ROLL))
        {
          debug("bank control is NOT active");
          return;
        }

        m_droll = Angles::degrees(d_roll->value);
//TODO: Receive RC params automatically from APM via MAVLink
//        int pwm_roll = map2PWM(m_args.rc1.pwm_min, m_args.rc1.pwm_max,
//                               m_args.rc1.val_min, m_args.rc1.val_max,
//                               m_droll);
//
//        int pwm_climb = map2PWM(m_args.rc2.pwm_min, m_args.rc2.pwm_max,
//                                m_args.rc2.val_min, m_args.rc2.val_max,
//                                -m_dclimb);
//
//        int pwm_speed = map2PWM(m_args.rc3.pwm_min, m_args.rc3.pwm_max,
//                                m_args.rc3.val_min, m_args.rc3.val_max,
//                                m_dspeed);
//
//        debug("V1: %f, V2: %f, V3: %f", m_droll, m_dclimb, m_dspeed);
//        debug("RC1: %d, RC2: %d, RC3: %d", pwm_roll, pwm_climb, pwm_speed);
//
//        uint8_t buf[512];
//
//        mavlink_message_t* msg = new mavlink_message_t;
//        mavlink_msg_rc_channels_override_pack(255, 0, msg,
//            1,
//            1,
//            pwm_roll, //! RC Channel 1 (roll)
//        pwm_climb, //! RC Channel 2 (vertical rate)
//        pwm_speed, //! RC Channel 3 (speed)
//        0, //! RC Channel 4 (not used)
//        0, //! RC Channel 5 (not used)
//        0, //! RC Channel 6 (not used)
//        0, //! RC Channel 7 (not used)
//        0);//! RC Channel 8 (not used)
//
//        uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
//        sendData(buf, n);
      }

      void
      consume(const IMC::DesiredZ* d_z)
      {
        if (!(m_cloops & IMC::CL_ALTITUDE))
        {
          debug("altitude control is NOT active");
          return;
        }

        (void) d_z;
      }

      void
      consume(const IMC::DesiredVerticalRate* d_vr)
      {
        if (!(m_cloops & IMC::CL_VERTICAL_RATE))
        {
          debug("vertical rate control is NOT active");
          return;
        }

        m_dclimb = d_vr->value;
      }

      void
      consume(const IMC::DesiredSpeed* d_speed)
      {
        if (!(m_cloops & IMC::CL_SPEED))
        {
          inf(DTR("speed control is NOT active"));
          return;
        }

        m_dspeed = d_speed->value;
      }

      //! Converts value in range min_value:max_value to a value_pwm in range min_pwm:max_pwm
      int
      map2PWM(int min_pwm, int max_pwm, float min_value, float max_value, float value)
      {
        int value_pwm = (int) ((max_pwm - min_pwm) * (value - min_value) / (max_value - min_value)) + min_pwm;
        return trimValue(value_pwm, min_pwm, max_pwm);
      }

      //! Message for GUIDED/AUTO control (using Ardupilot's controllers)
      void
      consume(const IMC::DesiredPath* path)
      {
        uint8_t buf[512];

        mavlink_message_t* msg = new mavlink_message_t;

        mavlink_msg_param_set_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            "TRIM_ARSPD_CM", //! Parameter name
            (int)(path->speed * 100), //! Parameter value
            MAV_PARAM_TYPE_INT16); //! Parameter type

        int n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        mavlink_msg_param_set_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            "WP_LOITER_RAD", //! Parameter name
            path->flags & DesiredPath::FL_CCLOCKW ? (-1 * path->lradius) : (path->lradius), //! Parameter value
            MAV_PARAM_TYPE_INT16); //! Parameter type

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        m_desired_radius = (uint16_t) path->lradius;

        mavlink_msg_mission_count_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            3); //! size of Mission

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        mavlink_msg_mission_write_partial_list_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            1, //! start_index Start index, 0 by default and smaller / equal to the largest index of the current onboard list
            1); //! end_index End index, equal or greater than start index

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        float alt = path->end_z;

        //! Destination
        mavlink_msg_mission_item_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            1, //! seq Sequence
            MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
            MAV_CMD_NAV_LOITER_UNLIM, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
            2, //! current false:0, true:1
            0, //! autocontinue to next wp
            0, //! Not used
            0, //! Not used
            path->flags & DesiredPath::FL_CCLOCKW ? -1 : 0, //! If <0, then CCW loiter
            0, //! Not used
            (float)Angles::degrees(path->end_lat), //! x PARAM5 / local: x position, global: latitude
            (float)Angles::degrees(path->end_lon), //! y PARAM6 / y position: global: longitude
            alt);//! z PARAM7 / z position: global: altitude

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        m_changing_wp = true;

        m_pcs.start_lat = Angles::radians(m_lat);
        m_pcs.start_lon = Angles::radians(m_lon);
        m_pcs.start_z = m_alt;
        m_pcs.start_z_units = IMC::Z_HEIGHT;

        m_pcs.end_lat = path->end_lat;
        m_pcs.end_lon = path->end_lon;
        m_pcs.end_z = alt;
        m_pcs.end_z_units = IMC::Z_HEIGHT;
        m_pcs.flags = PathControlState::FL_3DTRACK | PathControlState::FL_CCLOCKW;
        m_pcs.flags &= path->flags;
        m_pcs.lradius = path->lradius;

        dispatch(m_pcs);

        debug("Waypoint packet sent to Ardupilot");
      }

      void
      takeoff(const IMC::DesiredPath* dpath)
      {
        uint8_t buf[512];
        int seq = 1;

        mavlink_message_t* msg = new mavlink_message_t;

        mavlink_msg_param_set_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            "WP_LOITER_RAD", //! Parameter name
            dpath->flags & DesiredPath::FL_CCLOCKW ? (-1 * dpath->lradius) : (dpath->lradius), //! Parameter value
            MAV_PARAM_TYPE_INT16); //! Parameter type

        uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        mavlink_msg_mission_count_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            4); //! size of Mission

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        mavlink_msg_mission_write_partial_list_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            seq, //! start_index Start index, 0 by default and smaller / equal to the largest index of the current onboard list
            seq+2); //! end_index End index, equal or greater than start index

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        //! Current position
        mavlink_msg_mission_item_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            seq++, //! seq Sequence
            MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
            MAV_CMD_NAV_TAKEOFF, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
            1, //! current false:0, true:1
            1, //! autocontinue autocontinue to next wp
            5, //! Pitch
            0, //! Altitude
            0, //! Not used
            0, //! Not used
            0, //! x PARAM5 / local: x position, global: latitude
            0, //! y PARAM6 / y position: global: longitude
            m_alt + 10);//! z PARAM7 / z position: global: altitude

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        //! Desired speed
        mavlink_msg_mission_item_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            seq++, //! seq Sequence
            MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
            MAV_CMD_DO_CHANGE_SPEED, //! command The scheduled action for the MISSION. see MAV_CMD in common.xml MAVLink specs
            0, //! current false:0, true:1
            1, //! autocontinue autocontinue to next wp
            0, //! Speed type (0=Airspeed, 1=Ground Speed)
            (float)(dpath->speed_units == IMC::SUNITS_METERS_PS ? dpath->speed : -1), //! Speed  (m/s, -1 indicates no change)
            (float)(dpath->speed_units == IMC::SUNITS_PERCENTAGE ? dpath->speed : -1), //! Throttle  ( Percent, -1 indicates no change)
            0, //! Not used
            0, //! Not used
            0, //! Not used
            0);//! Not used

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        //! Destination
        mavlink_msg_mission_item_pack(255, 0, msg,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            seq++, //! seq Sequence
            MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
            (dpath->lradius ? MAV_CMD_NAV_LOITER_UNLIM : MAV_CMD_NAV_WAYPOINT), //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
            0, //! current false:0, true:1
            0, //! autocontinue autocontinue to next wp
            0, //! Not used
            0, //! Not used
            0, //! Not used
            0, //! Not used
            (float)Angles::degrees(dpath->end_lat), //! x PARAM5 / local: x position, global: latitude
            (float)Angles::degrees(dpath->end_lon), //! y PARAM6 / y position: global: longitude
            (float)(dpath->end_z));//! z PARAM7 / z position: global: altitude

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_AUTO_DISARMED);

        mavlink_msg_mission_set_current_pack(255, 0, msg,
            m_sysid,
            0,
            1);

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        m_pcs.start_lat = Angles::radians(m_lat);
        m_pcs.start_lon = Angles::radians(m_lon);
        m_pcs.start_z = m_alt;
        m_pcs.start_z_units = IMC::Z_HEIGHT;

        m_pcs.end_lat = dpath->end_lat;
        m_pcs.end_lon = dpath->end_lon;

        float alt = dpath->end_z;

        m_pcs.end_z = alt;
        m_pcs.end_z_units = IMC::Z_HEIGHT;
        m_pcs.flags = PathControlState::FL_3DTRACK | PathControlState::FL_CCLOCKW;
        m_pcs.flags &= dpath->flags;
        m_pcs.lradius = dpath->lradius;

        dispatch(m_pcs);

        debug(DTR("Waypoint packet sent to Ardupilot"));
      }

      void
      sendCommandPacket(uint16_t cmd, float arg1=0, float arg2=0, float arg3=0, float arg4=0, float arg5=0, float arg6=0, float arg7=0)
      {
        uint8_t buf[512];

        mavlink_message_t msg;

        trace("%0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f", arg1, arg2, arg3, arg4, arg5, arg6, arg7);

        mavlink_msg_command_long_pack(255, 0, &msg, m_sysid, 0, cmd, 0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);

        uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
        sendData(buf, n);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          // Handle data
          if (m_TCP_sock)
          {
            handleArdupilotData();
          }
          else
          {
            Time::Delay::wait(0.5);
            openConnection();
          }

          if (!m_error_missing)
          {
            if (m_external)
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, "External Control");
              m_esta_ext = true;
            }
            else
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              m_esta_ext = false;
            }
          }

          // Handle IMC messages from bus
          consumeMessages();
        }
      }

      bool
      poll(double timeout)
      {
        if (m_TCP_sock != NULL)
          return Poll::poll(*m_TCP_sock, timeout);

        return false;
      }

      int
      sendData(uint8_t* bfr, int size)
      {
        if (m_TCP_sock)
        {
          trace("Sending something");
          return m_TCP_sock->write((char*)bfr, size);
        }
        return 0;
      }

      int
      receiveData(uint8_t* buf, size_t blen)
      {
        if (m_TCP_sock)
        {
          try
          {
            return m_TCP_sock->read(buf, blen);
          }
          catch (std::runtime_error& e)
          {
            err("%s", e.what());
            war(DTR("Connection lost, retrying..."));
            Memory::clear(m_TCP_sock);

            m_TCP_sock = new Network::TCPSocket;
            m_TCP_sock->connect(m_TCP_addr, m_TCP_port);
            return 0;
          }
        }
        return 0;
      }

      void
      handleArdupilotData(void)
      {
        mavlink_status_t status;

        double now = Clock::get();

        while (poll(0.01))
        {
          int n = receiveData(m_buf, sizeof(m_buf));

          if (n < 0)
          {
            debug("Receive error");
            break;
          }


          for (int i = 0; i < n; i++)
          {
            int rv = mavlink_parse_char(MAVLINK_COMM_0, m_buf[i], &m_msg, &status);
            if (status.packet_rx_drop_count)
            {
              switch(status.parse_state)
              {
                case MAVLINK_PARSE_STATE_IDLE:
                  spew("failed at state IDLE");
                  break;
                case MAVLINK_PARSE_STATE_GOT_STX:
                  spew("failed at state GOT_STX");
                  break;
                case MAVLINK_PARSE_STATE_GOT_LENGTH:
                  spew("failed at state GOT_LENGTH");
                  break;
                case MAVLINK_PARSE_STATE_GOT_SYSID:
                  spew("failed at state GOT_SYSID");
                  break;
                case MAVLINK_PARSE_STATE_GOT_COMPID:
                  spew("failed at state GOT_COMPID");
                  break;
                case MAVLINK_PARSE_STATE_GOT_MSGID:
                  spew("failed at state GOT_MSGID");
                  break;
                case MAVLINK_PARSE_STATE_GOT_PAYLOAD:
                  spew("failed at state GOT_PAYLOAD");
                  break;
                case MAVLINK_PARSE_STATE_GOT_CRC1:
                  spew("failed at state GOT_CRC1");
                  break;
                default:
                  spew("failed OTHER");
              }
            }
            if (rv)
            {
              PktHandler h = m_mlh[m_msg.msgid];

              if (!h)
              {
                trace("No handler for packet with ID: %d", m_msg.msgid);
                continue;  // Ignore this packet (no handler for it)
              }

              // Call handler
              (this->*h)(&m_msg);
              m_sysid = m_msg.sysid;

              m_last_pkt_time = now;
            }
          }
        }

        if (now - m_last_pkt_time >= m_args.comm_timeout)
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
          m_error_missing = true;
        }
        else
          m_error_missing = false;
      }

      void
      handleAttitudePacket(const mavlink_message_t* msg)
      {
        mavlink_attitude_t att;

        mavlink_msg_attitude_decode(msg, &att);
        m_estate.phi = att.roll;
        m_estate.theta = att.pitch;
        m_estate.psi = att.yaw;
        m_estate.p = att.rollspeed;
        m_estate.q = att.pitchspeed;
        m_estate.r = att.yawspeed;
      }

      void
      handlePositionPacket(const mavlink_message_t* msg)
      {
        mavlink_global_position_int_t gp;
        mavlink_msg_global_position_int_decode(msg, &gp);

        double lat = Angles::radians((double)gp.lat * 1e-07);
        double lon = Angles::radians((double)gp.lon * 1e-07);
        float hei = (float)gp.alt * 1e-03;

        m_lat = (double)gp.lat * 1e-07;
        m_lon = (double)gp.lon * 1e-07;
        m_alt = (float)gp.alt * 1e-03;

        double distance_to_ref = WGS84::distance(ref_lat,ref_lon,ref_hei,
            lat,lon,hei);

        if (distance_to_ref>1000)
        {
          m_estate.lat = lat;
          m_estate.lon = lon;
          m_estate.height = hei;

          m_estate.x = 0;
          m_estate.y = 0;
          m_estate.z = 0;

          ref_lat = lat;
          ref_lon = lon;
          ref_hei = hei;
        }
        else
        {
          WGS84::displacement(ref_lat, ref_lon, ref_hei,
              lat, lon, hei,
              &m_estate.x, &m_estate.y, &m_estate.z);

          m_estate.lat = ref_lat;
          m_estate.lon = ref_lon;
          m_estate.height = ref_hei;
        }

        m_estate.vx = 1e-02 * gp.vx;
        m_estate.vy = 1e-02 * gp.vy;
        m_estate.vz = -1e-02 * gp.vz;

        // Note: the following will yield body-fixed *ground* velocity
        // Maybe this can be fixed w/IAS readings (anyway not too important)
        BodyFixedFrame::toBodyFrame(m_estate.phi, m_estate.theta, m_estate.psi,
            m_estate.vx, m_estate.vy, m_estate.vz,
            &m_estate.u, &m_estate.v, &m_estate.w);

        m_estate.depth = -1;
        m_estate.alt = -1;

        dispatch(m_estate);
      }

      void
      handleHWStatusPacket(const mavlink_message_t* msg)
      {
        if (m_args.pwrm)
        {
          (void) msg;
          return;
        }

        IMC::Voltage volt;

        mavlink_hwstatus_t hw_status;

        mavlink_msg_hwstatus_decode(msg, &hw_status);

        volt.value = 0.001 * hw_status.Vcc;

        dispatch(volt);
      }

      void
      handleSystemStatusPacket(const mavlink_message_t* msg)
      {
        if (!m_args.pwrm)
        {
          (void) msg;
          return;
        }

        //! Battery messages
        IMC::Voltage volt;
        IMC::Current curr;
        IMC::FuelLevel fuel;

        mavlink_sys_status_t sys_status;

        mavlink_msg_sys_status_decode(msg, &sys_status);

        volt.value = 0.001 * (float)sys_status.voltage_battery;
        curr.value = 0.01 * (float)sys_status.current_battery;
        fuel.value = (float)sys_status.battery_remaining;

        dispatch(volt);
        dispatch(curr);
        dispatch(fuel);
      }

      void
      handleScaledPressurePacket(const mavlink_message_t* msg)
      {
        mavlink_scaled_pressure_t sc_press;

        mavlink_msg_scaled_pressure_decode(msg, &sc_press);

        //! Pressure message
        IMC::Pressure pressure;
        //! Temperature message
        IMC::Temperature temp;

        pressure.value = sc_press.press_abs;
        temp.value = 0.01 * sc_press.temperature;

        dispatch(pressure);
        dispatch(temp);
      }

      void
      handleRawGPSPacket(const mavlink_message_t* msg)
      {
        mavlink_gps_raw_int_t gps_raw;

        mavlink_msg_gps_raw_int_decode(msg, &gps_raw);

        m_fix.cog = Angles::radians((double)gps_raw.cog * 0.01);
        m_fix.sog = (float)gps_raw.vel * 0.01;
        m_fix.hdop = (float)gps_raw.eph * 0.01;
        m_fix.vdop = (float)gps_raw.epv * 0.01;
        m_fix.lat = Angles::radians((double)gps_raw.lat * 1e-07);
        m_fix.lon = Angles::radians((double)gps_raw.lon * 1e-07);
        m_fix.height = (double)gps_raw.alt * 0.001;
        m_fix.satellites = gps_raw.satellites_visible;

        m_fix.validity = 0;
        if (gps_raw.fix_type>1)
          m_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
        if (m_fix.utc_year>2012)
          m_fix.validity |= (IMC::GpsFix::GFV_VALID_TIME | IMC::GpsFix::GFV_VALID_DATE);
      }

      void
      handleWindPacket(const mavlink_message_t* msg)
      {
        mavlink_wind_t wind;

        mavlink_msg_wind_decode(msg, &wind);

        //! Wind message
        IMC::EstimatedStreamVelocity stream;

        double wind_dir_rad = wind.direction * Math::c_pi / 180;

        stream.x = std::cos(wind_dir_rad) * wind.speed;
        stream.y = std::sin(wind_dir_rad) * wind.speed;
        stream.z = wind.speed_z;

        dispatch(stream);
      }

      void
      handleCmdAckPacket(const mavlink_message_t* msg)
      {
        mavlink_command_ack_t cmd_ack;

        mavlink_msg_command_ack_decode(msg, &cmd_ack);
        debug("Command %d was received, result is %d", cmd_ack.command, cmd_ack.result);
        m_changing_wp = false;
      }

      void
      handleMissionAckPacket(const mavlink_message_t* msg)
      {
        mavlink_mission_ack_t miss_ack;

        mavlink_msg_mission_ack_decode(msg, &miss_ack);
        debug("Mission was received, result is %d", miss_ack.type);
        m_changing_wp = false;
      }

      void
      handleMissionCurrentPacket(const mavlink_message_t* msg)
      {
        mavlink_mission_current_t miss_curr;

        mavlink_msg_mission_current_decode(msg, &miss_curr);
        trace("Current mission item: %d", miss_curr.seq);

        uint8_t buf[512];

        mavlink_message_t* msg_out = new mavlink_message_t;

        mavlink_msg_mission_request_pack(255, 0, msg_out,
            m_sysid, //! target_system System ID
            0, //! target_component Component ID
            miss_curr.seq); //! Mission item to request

        uint16_t n = mavlink_msg_to_send_buffer(buf, msg_out);
        sendData(buf, n);
      }

      void
      handleStatusTextPacket(const mavlink_message_t* msg)
      {
        mavlink_statustext_t stat_tex;
        mavlink_msg_statustext_decode(msg, &stat_tex);
        debug("Status: %s", stat_tex.text);
      }

      void
      handleHeartbeatPacket(const mavlink_message_t* msg)
      {
        if(!m_has_setup_rate)
        {
          m_has_setup_rate = true;
          setupRate(m_args.trate);
          debug("Rates setup second time.");
        }

        bool was_ext = m_external;

        mavlink_heartbeat_t hbt;
        mavlink_msg_heartbeat_decode(msg, &hbt);

        // Update vehicle type if applicable
        if (m_vehicle_type == VEHICLE_UNKNOWN)
        {
          MAV_TYPE mav_type = static_cast<MAV_TYPE>(hbt.type);
          switch (mav_type)
          {
            default:
              err(DTR("Controlling an unknown vehicle type."));
              break;
            case MAV_TYPE_FIXED_WING:
              m_vehicle_type = VEHICLE_FIXEDWING;
              debug("Controlling a fixed-wing vehicle.");
              break;
            case MAV_TYPE_QUADROTOR:
            case MAV_TYPE_HEXAROTOR:
            case MAV_TYPE_OCTOROTOR:
            case MAV_TYPE_TRICOPTER:
              m_vehicle_type = VEHICLE_COPTER;
              debug("Controlling a multicopter.");
              break;
          }
        }


        m_mode = hbt.custom_mode;
        if (m_vehicle_type == VEHICLE_COPTER)
        {
          switch(m_mode)
          {
            default:
              m_external = true;
              break;
            case 3:
              trace("AUTO");
              m_external = false;
              break;
            case 5:
              trace("LOITER");
              m_external = false;
              break;
            case 14:
              trace("DUNE");
              m_external = false;
              break;
            case 4:
              trace("GUIDED");
              m_external = false;
              break;
          }
        }
        else
        {
          switch(m_mode)
          {
            default:
              m_external = true;
              break;
            case 10:
              trace("AUTO");
              if (m_external)
              {
                m_external = false;
                if (m_dpath.end_lat)
                  receive(&m_dpath);
              }
              break;
            case 12:
              trace("LOITER");
              m_external = false;
              break;
            case 6:
              trace("FBWB");
              m_external = false;
              break;
            case 15:
              trace("GUIDED");
              m_external = false;
              break;
          }
        }

        if(was_ext != m_external)
        {
          IMC::ControlLoops cloops;

          if(m_external)
          {
            cloops.enable = IMC::ControlLoops::CL_ENABLE;
            cloops.mask = IMC::CL_EXTERNAL;
          }
          else
          {
            cloops.enable = IMC::ControlLoops::CL_DISABLE;
            cloops.mask = IMC::CL_EXTERNAL;
          }

          dispatch(cloops);
        }
      }

      void
      handleNavControllerPacket(const mavlink_message_t* msg)
      {
        if (!m_args.ardu_tracker)
          return;

        mavlink_nav_controller_output_t nav_out;
        mavlink_msg_nav_controller_output_decode(msg, &nav_out);
        debug("WP Dist: %d", nav_out.wp_dist);
        IMC::DesiredRoll d_roll;
        IMC::DesiredPitch d_pitch;
        IMC::DesiredHeading d_head;

        d_roll.value = Angles::radians(nav_out.nav_roll);
        d_pitch.value = Angles::radians(nav_out.nav_pitch);
        d_head.value = Angles::radians(nav_out.nav_bearing);

        if ((nav_out.wp_dist <= m_desired_radius + m_args.ltolerance)
            && (nav_out.wp_dist >= m_desired_radius - m_args.ltolerance)
            && (m_mode == 15))
        {
          m_pcs.flags |= PathControlState::FL_LOITERING;
        }

        if (!m_changing_wp
            && (nav_out.wp_dist <= m_desired_radius + m_args.secs * m_gnd_speed)
            && (nav_out.wp_dist >= m_desired_radius - m_args.secs * m_gnd_speed)
            && (m_mode == 15))
        {
          m_pcs.flags |= PathControlState::FL_NEAR;
        }

        dispatch(m_pcs);
        dispatch(d_roll);
        dispatch(d_pitch);
        dispatch(d_head);
      }

      void
      handleMissionItemPacket(const mavlink_message_t* msg)
      {
        mavlink_mission_item_t miss_item;
        mavlink_msg_mission_item_decode(msg, &miss_item);
        trace("Mission type: %d", miss_item.command);

        switch(miss_item.command)
        {
          default:
            m_critical = false;
            break;
          case MAV_CMD_NAV_TAKEOFF:
            m_critical = true;
            break;
          case MAV_CMD_NAV_LAND:
            m_critical = true;
            break;
        }
      }

      void
      handleHUDPacket(const mavlink_message_t* msg)
      {
        mavlink_vfr_hud_t vfr_hud;
        mavlink_msg_vfr_hud_decode(msg, &vfr_hud);

        IMC::IndicatedSpeed ias;
        IMC::TrueSpeed gs;


        ias.value = (fp64_t)vfr_hud.airspeed;
        gs.value = (fp64_t)vfr_hud.groundspeed;
        m_gnd_speed = (int)vfr_hud.groundspeed;

        dispatch(ias);
        dispatch(gs);
      }

      void
      handleSystemTimePacket(const mavlink_message_t* msg)
      {
        mavlink_system_time_t sys_time;
        mavlink_msg_system_time_decode(msg, &sys_time);

        time_t t = sys_time.time_unix_usec / 1000000;
        struct tm* utc;
        utc = gmtime(&t);

        m_fix.utc_time = utc->tm_hour * 3600 + utc->tm_min * 60 + utc->tm_sec + (sys_time.time_unix_usec % 1000000) * 1e-6;
        m_fix.utc_year = utc->tm_year + 1900;
        m_fix.utc_month = utc->tm_mon +1;
        m_fix.utc_day = utc->tm_mday;

        if (m_fix.utc_year>2014)
          m_fix.validity |= (IMC::GpsFix::GFV_VALID_TIME | IMC::GpsFix::GFV_VALID_DATE);

        dispatch(m_fix);
      }

      void
      handleParamValuePacket(const mavlink_message_t* msg)
      {
        mavlink_param_value_t param_value;
        mavlink_msg_param_value_decode(msg, &param_value);
      }

      void
      handleIMU(const mavlink_message_t* msg)
      {
        mavlink_raw_imu_t imu;
        mavlink_msg_raw_imu_decode(msg, &imu);

        IMC::Acceleration acc;
        //! Units in IMU packet are mili-g,
        //! converting to m/s/s
        acc.x = imu.xacc * Math::c_gravity * 0.001;
        acc.y = imu.yacc * Math::c_gravity * 0.001;
        acc.z = imu.zacc * Math::c_gravity * 0.001;

        dispatch(acc);
      }
    };
  }
}

DUNE_TASK
