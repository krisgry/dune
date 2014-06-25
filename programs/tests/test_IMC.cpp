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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.6004198723193892);
    msg.setSource(5538U);
    msg.setSourceEntity(197U);
    msg.setDestination(17690U);
    msg.setDestinationEntity(79U);
    msg.state = 215U;
    msg.flags = 250U;
    msg.description.assign("XSSHNJKUWJPWVCCCWOKZAFVMRUOWDMMARZYOYHNCQSFRFIIWXZZTJSRIDRMXCIQWBOAJLRLXULBLSQANFMHXTXTGJYBVLCIMOKBHPIPEKTVATGXTFGCMYCPLNNUBMQQOFQVGZQBMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.050985580122520635);
    msg.setSource(11601U);
    msg.setSourceEntity(244U);
    msg.setDestination(25929U);
    msg.setDestinationEntity(65U);
    msg.state = 113U;
    msg.flags = 233U;
    msg.description.assign("OQLHTWWSFACWXIFDITYUIFZBYLTUEEJQFRAOAKSHZXZPFCAQJYCYXUVYUSRRNMLJDCNJQSYPORLJDSEHXJKNJGKYWVKKRMNWDOBTTKBDXCVTHCIHHSDXUICZNABNLQQNGGYDNAGBWCRGIGSXPOMMAWXFIFDZZAXBJIOIWPVUOVGHSMRWGNGUBHBKEDLWYHKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.2705390878436471);
    msg.setSource(55527U);
    msg.setSourceEntity(227U);
    msg.setDestination(22768U);
    msg.setDestinationEntity(254U);
    msg.state = 43U;
    msg.flags = 17U;
    msg.description.assign("RIRKXADJLFVREZUDZODMTENPPXSMVMETZGDAZQWVPZUUXBOQXWICLBNCPQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.6907746440179614);
    msg.setSource(28380U);
    msg.setSourceEntity(151U);
    msg.setDestination(45601U);
    msg.setDestinationEntity(130U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.03844199026754869);
    msg.setSource(40335U);
    msg.setSourceEntity(220U);
    msg.setDestination(8373U);
    msg.setDestinationEntity(39U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.3219131935188849);
    msg.setSource(26627U);
    msg.setSourceEntity(249U);
    msg.setDestination(7170U);
    msg.setDestinationEntity(143U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.33700739715099093);
    msg.setSource(18647U);
    msg.setSourceEntity(34U);
    msg.setDestination(58936U);
    msg.setDestinationEntity(92U);
    msg.id = 158U;
    msg.label.assign("NFSMXEANBXGWEOUTQUMVGLTCNEHFIHZYQPFRIJITHJUMCZYZUMWMBWHXFLICSZPTHWBFRBDVUWPJLDKGHJQSYGBDDOMVMIZCTWAISQ");
    msg.component.assign("WKXKQZIJOJVVLUPKGXKYFLSIGQCWZTJWOVOXSELCZHFVSVBLFPEAOCAKSOMCPIPYQUQUALQOSANJCPHMUFGRJYWKPWRRTTFYLUCETMDYKQTTLNAWQEBBFIRSZYGWBQGKVHJBFYFJPTUWDMZLIEADBGIAXIQDNUWDVOKMRXSIMRTGONSFDTPNIHDZJNXHEYVKBOBEJZZEWXPVMQZMNNXSHDEHAEXAMUYTGYSHCNCCRMZIOGVAHGBUXDRLL");
    msg.act_time = 35993U;
    msg.deact_time = 65047U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.6295611378091993);
    msg.setSource(63555U);
    msg.setSourceEntity(90U);
    msg.setDestination(19063U);
    msg.setDestinationEntity(76U);
    msg.id = 28U;
    msg.label.assign("TUUEREKEWMLZXQVBAFUTDNCWPLVYNPMFTQUVLCPNGSTEAXIHEQXBQGPAXHNQRQIYUILOWVQYMKFYB");
    msg.component.assign("MTDQMIPTGVZRNOWUSIXGIEZQNFUJSKQAAAYEKLFXLQVSHPQEHFHNQIKMFAGDJTMOKLUPRXXEITOLBGWPZJBJLAJK");
    msg.act_time = 17923U;
    msg.deact_time = 37637U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.7364129611045578);
    msg.setSource(50374U);
    msg.setSourceEntity(16U);
    msg.setDestination(47816U);
    msg.setDestinationEntity(31U);
    msg.id = 118U;
    msg.label.assign("FOOXGBQIFP");
    msg.component.assign("BAXTMKSZEELGAMKVRDDLNTEJRXVIUADONOORKKIB");
    msg.act_time = 64640U;
    msg.deact_time = 17065U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.12007062417515013);
    msg.setSource(9335U);
    msg.setSourceEntity(65U);
    msg.setDestination(63166U);
    msg.setDestinationEntity(123U);
    msg.id = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.6080978126336112);
    msg.setSource(57074U);
    msg.setSourceEntity(127U);
    msg.setDestination(19138U);
    msg.setDestinationEntity(32U);
    msg.id = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.28269006699000243);
    msg.setSource(30019U);
    msg.setSourceEntity(90U);
    msg.setDestination(3914U);
    msg.setDestinationEntity(16U);
    msg.id = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.8408832642978724);
    msg.setSource(20092U);
    msg.setSourceEntity(5U);
    msg.setDestination(45944U);
    msg.setDestinationEntity(17U);
    msg.op = 20U;
    msg.list.assign("RPGHACMSDMTQGTLFPVBOKGTTSZVXWTWLAMRGVUWVYUBCUMNACKBPNLJVAWOEZKVIEVCKUNCU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.7981237544486308);
    msg.setSource(396U);
    msg.setSourceEntity(143U);
    msg.setDestination(3902U);
    msg.setDestinationEntity(167U);
    msg.op = 94U;
    msg.list.assign("LMTRGWXSTMOLLBAHZTCEXNDPHDNLBFJMYTAHCFGGRUCVUSLNNSVCLWQWFKVFDOCSTPGGGVGEXYJKYWKLMXQGEELNCAMDABCHBOWPAWNSTILZSZXOADLUDXIQJPKSMKSTEVIAYBFQZPCNKBPRFUXBVZNUHJOPMKUBKRBNJXJODMQWWWOGUOZYJVAHUZMERQXYIVZEEHYYRUWHYTPYQFAHRMGZIRPDIVQRRQFTTIIKSPECOJKIJBNDEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.19688896171501147);
    msg.setSource(32306U);
    msg.setSourceEntity(84U);
    msg.setDestination(42847U);
    msg.setDestinationEntity(45U);
    msg.op = 116U;
    msg.list.assign("KWTBCMLRUBZRDYZXXMPVOHXXOIAFQWRPGKLLAFQMEEYPXTTYYPEULCHZOQFFQWHJIXKNDSLHLMEHLJJZWGSDQIFKCJJBUQRFMUTYKEEHHBORVNTTGCOMVDXFZIAPJBLYARGEVDNLZKXSTRUOJAFPDYPCHBNYVCRYONLWDRWSSOOUXSIAGHAGEXQITAKYKNVFOSANSJQTWSDPEKBVIUUMBFZNUPMQMDIVZJIWGPBUWSEAVGCQIDJKBNCVGNZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.5618042171158251);
    msg.setSource(40128U);
    msg.setSourceEntity(107U);
    msg.setDestination(36869U);
    msg.setDestinationEntity(221U);
    msg.op = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.17334560847840397);
    msg.setSource(58733U);
    msg.setSourceEntity(0U);
    msg.setDestination(3383U);
    msg.setDestinationEntity(122U);
    msg.op = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.961579999675449);
    msg.setSource(44547U);
    msg.setSourceEntity(50U);
    msg.setDestination(61558U);
    msg.setDestinationEntity(120U);
    msg.op = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.04254805521657823);
    msg.setSource(61577U);
    msg.setSourceEntity(185U);
    msg.setDestination(44655U);
    msg.setDestinationEntity(180U);
    msg.value = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.009449700055198629);
    msg.setSource(42244U);
    msg.setSourceEntity(57U);
    msg.setDestination(49436U);
    msg.setDestinationEntity(42U);
    msg.value = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.021344337369643918);
    msg.setSource(23103U);
    msg.setSourceEntity(199U);
    msg.setDestination(30872U);
    msg.setDestinationEntity(175U);
    msg.value = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.0172137670592174);
    msg.setSource(2300U);
    msg.setSourceEntity(247U);
    msg.setDestination(25795U);
    msg.setDestinationEntity(235U);
    msg.consumer.assign("JUSGYSWCIQSJTJCRAIGAFGQLHJICVXR");
    msg.message_id = 28603U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.9349168112847178);
    msg.setSource(11026U);
    msg.setSourceEntity(223U);
    msg.setDestination(42292U);
    msg.setDestinationEntity(222U);
    msg.consumer.assign("FZJUPZGZSKIOLPMABEIPRNXYYCTYKLLVSSYEDSHHEVTJCHAK");
    msg.message_id = 26128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.4895882124499026);
    msg.setSource(42103U);
    msg.setSourceEntity(22U);
    msg.setDestination(5470U);
    msg.setDestinationEntity(140U);
    msg.consumer.assign("OVBLZYSBECZCSNLIRAWRBBRZQGELSEOZVJHDYRWOTQFWILVIAZGOZKTQFNRMSXYJLKKSRIDTUCB");
    msg.message_id = 15796U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.8394927713602953);
    msg.setSource(58466U);
    msg.setSourceEntity(3U);
    msg.setDestination(21040U);
    msg.setDestinationEntity(106U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.666944979861398);
    msg.setSource(24769U);
    msg.setSourceEntity(36U);
    msg.setDestination(27402U);
    msg.setDestinationEntity(236U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.488018639725707);
    msg.setSource(21435U);
    msg.setSourceEntity(145U);
    msg.setDestination(38976U);
    msg.setDestinationEntity(250U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.1901797045837078);
    msg.setSource(36491U);
    msg.setSourceEntity(121U);
    msg.setDestination(37311U);
    msg.setDestinationEntity(58U);
    msg.section.assign("TOPTKCGNJFALAYXIEYHQSYWWOQWACXEWCGBBHWVHINNOKRZXWDCS");
    msg.param.assign("BDPQRVKBTQUARCMCOFIWWXNTWMKQFGOELHGZIMUDHRFURSZSLKOYYDNSIBRRNUIMZHUIMCZOJAWGOVZRLUGJPKAGJEZDVKXNSGTOTEXPM");
    msg.value.assign("MGOPTUBVMUYRAHZDTIJERDRWNCJVJMKRBLHAUXZEUSFLSSYDJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.5723912316006761);
    msg.setSource(41818U);
    msg.setSourceEntity(98U);
    msg.setDestination(23328U);
    msg.setDestinationEntity(132U);
    msg.section.assign("ZGEXDQRUQVMIYOJF");
    msg.param.assign("NOTOOGHEJGBYCHDVFORQXQTPJLPGYHTANWUZLHLBQYEPPLWIONKPFIQWOGKMJFJCGVFFDTXQBCAUPZVPCLMMVAWBZKMJZNBXISBDVYDADLTUXNLADVDRWLEMKZVUSYDGEKXHUULASIFJZYQCEQGHGZZMRWYJWQTRXYNKDGXUIXEOQPW");
    msg.value.assign("SRXNQMJXXKVSCJCHALIGMEFJIONNFXBFSAREEOCZCWJFNLKERQIKXNMIPVWSPBXUFVZUHENFOGYVMOCAZLTUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.4623695816164386);
    msg.setSource(32000U);
    msg.setSourceEntity(237U);
    msg.setDestination(27519U);
    msg.setDestinationEntity(129U);
    msg.section.assign("UJNIZTBQGCTSJLNQRVWMKAUJEFTTJFDYS");
    msg.param.assign("DONAFLDEPDSIMWIKTKHMCLRHWISWFJWUFORHYFDQYCJBTTCKNOPZVUJQDAXAADAYZYHDDXHQVHMEOGCAJJEXGRXTCXJZOGUFTWNERNYMNNGBVWZEIEXZBULZUKMERZOVYZLNSMVHOHAKVWSUSTMLKLYKFVVHJPKFXFAWCPOQTEQCIPGTCATMBBJNOTLPGVPLSBSXSCUYNIIHYKUZPGCPIFRWQPRBSQGXVDQIQE");
    msg.value.assign("OFWTUNUQXPSCWSWG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.6951480564553294);
    msg.setSource(24070U);
    msg.setSourceEntity(11U);
    msg.setDestination(14117U);
    msg.setDestinationEntity(94U);
    msg.op = 4U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("AJFWAUTGJGHZLWLHQBSWVIUVYAWKNWRNYFLSUYDPMK");
    tmp_msg_0.param.assign("UUQQFZWHGWPOEPTPBIZGBGLVQNJFCYCVTFNDUBWNRIIDKECCYEKGCJ");
    tmp_msg_0.value.assign("TFUIKSVXIUUYLREFRKCILJQQQMFMMDVEASVSOLRCWXAKICMENNBKPXDJZXHEXKGZYYNIHZTXQXFFQGCLHJHENBKKELOUBAVWZUBSQPCFUXTPCCBJGDANMHAHLIDNHIEUVYQRCTFYZOAKEPJMLJWYUZBGRWOXPNVDVPNSORZVYRYJXPTSLGTZJTOADFHJGTPPEJNRWQDIEMOTSZDORKOHSBUWKWG");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.7840536755042073);
    msg.setSource(25369U);
    msg.setSourceEntity(143U);
    msg.setDestination(1191U);
    msg.setDestinationEntity(166U);
    msg.op = 61U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("NHDSSNMAWGMBEAGBMJIJCAZGHTTBHZLAJIPKHLFPPORMDEKFLQMVKRPMRWDBQWIMYESVRNRCIXRLKYMNGXUXWJMAZHEWTQHRSGNBJSINCTVUXTVMBQTCOUVCIDLFEORSCXZLUHUDDPBPDFSWYUFUEEAJGYOQKFHHNAXBFKV");
    tmp_msg_0.param.assign("KUOKXYNUBAMWMKUPDSYMYJBEYVLUCNZDZIPLQFIBCTSGVWVCWBHGTJLDEQPPOXDWJOBCHIUEAMJYBRVLIFBKFTUXATTWPHGUFRRJRAWDQSJJHOZGGTN");
    tmp_msg_0.value.assign("BZVWRJCJQZQSHGRCJFMMIDZDPADLAVZOJWYVLNXIRIEBNVYPWLACBCTYNUFNUNAMPGUFRWHTSYRKGURPPUHSEMICVNUIGYVDBKOWTHRCMCQEFPPAESZO");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.6975961007105752);
    msg.setSource(3972U);
    msg.setSourceEntity(252U);
    msg.setDestination(5057U);
    msg.setDestinationEntity(33U);
    msg.op = 171U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("UOTDCMUMGWHFULSDVZXGBLPJRDQFSATOKZRXCWHSKIYQYERHSMDYPWKRXDDVWIVRNTFNODOXBZYVICZIGYMEVORLXZXWUYEMAWJXZFUQPIBRJHAGVVQISUSOUZEHHTQAWIEABMELLIUPXWOJKPLKQBNSLNUQTPOJSFRMWBVAJSOVKXYLJGBYTCDPLHFRGBBPCMAICBMNTTONJNXGEGSAQNK");
    tmp_msg_0.param.assign("RKHBJMZALFVTWJMIPZFYHXJLSSAREOTGUEXFUSGPYQKLCKZHANKQORYPOLKYFPUXUSLPVZDJOBDNEKVMCUMSITUPAHBLTMTYCAVCRDBDWDVSGTSNRPNDCAXCGQUZHGJFWTYNREBJDFUONMCHGJLGLOISHQVIAGOPZMYMYKRQNBXUCEWQZQWOIVDGFJOOQWYFTDUNSEXBPXJHITMIIKARENHV");
    tmp_msg_0.value.assign("OZQUVVLTMYZSDERUCGCRPOXIXFUYZIKMBQIHIJCQVLVTFSZSLHZYJSGEKJVLDUUJYORCZTFAQQVMNZGNZLNQWXMDGCTEABCYHUJRPMOMGUKLKW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.07410697864857763);
    msg.setSource(40846U);
    msg.setSourceEntity(199U);
    msg.setDestination(54544U);
    msg.setDestinationEntity(111U);
    msg.op = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.05687992619303417);
    msg.setSource(39691U);
    msg.setSourceEntity(56U);
    msg.setDestination(60503U);
    msg.setDestinationEntity(67U);
    msg.op = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.9040669434492951);
    msg.setSource(41266U);
    msg.setSourceEntity(77U);
    msg.setDestination(42995U);
    msg.setDestinationEntity(107U);
    msg.op = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.9687917240882196);
    msg.setSource(50607U);
    msg.setSourceEntity(143U);
    msg.setDestination(26929U);
    msg.setDestinationEntity(249U);
    msg.total_steps = 22U;
    msg.step_number = 138U;
    msg.step.assign("QEQYNMUIXNYVOGRCQQXHNEZRAUSBWPGOKEFWXTJZCIEYG");
    msg.flags = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.4699126542708434);
    msg.setSource(22534U);
    msg.setSourceEntity(142U);
    msg.setDestination(5349U);
    msg.setDestinationEntity(22U);
    msg.total_steps = 151U;
    msg.step_number = 12U;
    msg.step.assign("DGZNWYYSLNHSZNGVQTVWFPLEHLFOYFCWWKZMBEMQG");
    msg.flags = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.6327724342157158);
    msg.setSource(22684U);
    msg.setSourceEntity(125U);
    msg.setDestination(48283U);
    msg.setDestinationEntity(123U);
    msg.total_steps = 209U;
    msg.step_number = 228U;
    msg.step.assign("WJVULYOTCOHBDGWOLNSAOIRXSRDJFXTAHZBWLZYNUFOSHTKKRPNIOZWAXXAICLXPZEBDJPFXPATZUNQBFEBEKZTYSALMHLUDQEDSKYYGCC");
    msg.flags = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.3327134528910347);
    msg.setSource(16547U);
    msg.setSourceEntity(2U);
    msg.setDestination(17599U);
    msg.setDestinationEntity(57U);
    msg.state = 122U;
    msg.error.assign("NVYVPZKZKZJTSXUCIWTKKFGQFENEQGKUBNRXLSDGMSZUMEYXHIMFORMMACRBNADXTTNPEKCVYRCBUEIGHSOMIYBFVAVMQWFIBLHESHQUWNALYPPGSNODPDBAWHLGERCNIQJHCHTNPVODEADUESVTZGVOZOQJYJIHPSLFQVZAYPKWJSGXTAYNUWCDWXRXJWFBGGBHFCRKWOIDKRUWXQQUAMJBBZJPFPKYZULISXRF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.22986264225734743);
    msg.setSource(40045U);
    msg.setSourceEntity(194U);
    msg.setDestination(31138U);
    msg.setDestinationEntity(223U);
    msg.state = 47U;
    msg.error.assign("GVAWXBPJWDRMMRIUDJDZNMSGGDQXOLACGZLTVDAAKEIFYHWXPQCHTAXLESNPXMYBKIVRQGEPGYYJQUJUBNJHNBPFYIHWMTTVUYPSQRSOATOHPJYNHQAUOZMHQSFXRSQLKSBLHPSODSEVKLPHTCTQDCUGZMBZEFEWMRWOIKKJIBLOIZTVMX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.3083344058154004);
    msg.setSource(46270U);
    msg.setSourceEntity(206U);
    msg.setDestination(14056U);
    msg.setDestinationEntity(87U);
    msg.state = 119U;
    msg.error.assign("ACIZMHIDSXZSFFZCPNBCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.7509536064499716);
    msg.setSource(34856U);
    msg.setSourceEntity(121U);
    msg.setDestination(37505U);
    msg.setDestinationEntity(142U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.5097776337552852);
    msg.setSource(47214U);
    msg.setSourceEntity(19U);
    msg.setDestination(2428U);
    msg.setDestinationEntity(225U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.7689515033307274);
    msg.setSource(37579U);
    msg.setSourceEntity(117U);
    msg.setDestination(54600U);
    msg.setDestinationEntity(144U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.3459387872920955);
    msg.setSource(26602U);
    msg.setSourceEntity(40U);
    msg.setDestination(61277U);
    msg.setDestinationEntity(5U);
    msg.op = 202U;
    msg.speed_min = 0.699508653556965;
    msg.speed_max = 0.491444096131326;
    msg.long_accel = 0.9529175887238888;
    msg.alt_max_msl = 0.003386074747168122;
    msg.dive_fraction_max = 0.20848357528634032;
    msg.climb_fraction_max = 0.2380206813740382;
    msg.bank_max = 0.33376811683196084;
    msg.p_max = 0.013979189975265927;
    msg.pitch_min = 0.8747504777043534;
    msg.pitch_max = 0.9741030495903138;
    msg.q_max = 0.5926633561829536;
    msg.g_min = 0.7064421976944679;
    msg.g_max = 0.4287935033556809;
    msg.g_lat_max = 0.17632379634752504;
    msg.rpm_min = 0.3864634216423597;
    msg.rpm_max = 0.5029481937303942;
    msg.rpm_rate_max = 0.16196700367065897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.02154670122288671);
    msg.setSource(202U);
    msg.setSourceEntity(25U);
    msg.setDestination(13486U);
    msg.setDestinationEntity(22U);
    msg.op = 236U;
    msg.speed_min = 0.368475655731356;
    msg.speed_max = 0.08938349128367029;
    msg.long_accel = 0.5674421222959762;
    msg.alt_max_msl = 0.6201254895614823;
    msg.dive_fraction_max = 0.21846169158907602;
    msg.climb_fraction_max = 0.961460240627382;
    msg.bank_max = 0.6067347355683148;
    msg.p_max = 0.21449304582827733;
    msg.pitch_min = 0.8932088786669;
    msg.pitch_max = 0.803308554923605;
    msg.q_max = 0.6218388929012405;
    msg.g_min = 0.10617245304684753;
    msg.g_max = 0.9161212953436686;
    msg.g_lat_max = 0.9529189485609323;
    msg.rpm_min = 0.6061676912332409;
    msg.rpm_max = 0.7934060829837599;
    msg.rpm_rate_max = 0.19511275408116557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.10744145473941158);
    msg.setSource(14176U);
    msg.setSourceEntity(85U);
    msg.setDestination(10229U);
    msg.setDestinationEntity(141U);
    msg.op = 68U;
    msg.speed_min = 0.8765368868234329;
    msg.speed_max = 0.18355625862091896;
    msg.long_accel = 0.9437910693642333;
    msg.alt_max_msl = 0.8510710061498392;
    msg.dive_fraction_max = 0.6456053351069694;
    msg.climb_fraction_max = 0.14417522464857946;
    msg.bank_max = 0.5463698082940417;
    msg.p_max = 0.6551882879472585;
    msg.pitch_min = 0.4103636185771071;
    msg.pitch_max = 0.551290732988283;
    msg.q_max = 0.8964510089353275;
    msg.g_min = 0.7427852633749996;
    msg.g_max = 0.46107223141543485;
    msg.g_lat_max = 0.9274842516099696;
    msg.rpm_min = 0.5338933471951951;
    msg.rpm_max = 0.7623254398559658;
    msg.rpm_rate_max = 0.45193670542133413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.33802063665373905);
    msg.setSource(16907U);
    msg.setSourceEntity(8U);
    msg.setDestination(63277U);
    msg.setDestinationEntity(143U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.6793394529797845);
    msg.setSource(9798U);
    msg.setSourceEntity(209U);
    msg.setDestination(60238U);
    msg.setDestinationEntity(201U);
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("NRQOPCYYCKVIVMBLWDEOJAHKEFYFWKMGMBNMQUSWJEBXQNWWVWONSPLBDCYYVUKFJT");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.5499189543990392);
    msg.setSource(45536U);
    msg.setSourceEntity(214U);
    msg.setDestination(56128U);
    msg.setDestinationEntity(14U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.5915373566559702);
    msg.setSource(21152U);
    msg.setSourceEntity(242U);
    msg.setDestination(59860U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.1405398500198547;
    msg.lon = 0.0785617390177531;
    msg.height = 0.5053266817520027;
    msg.x = 0.5668168292502755;
    msg.y = 0.6753759584670228;
    msg.z = 0.2592070910881058;
    msg.phi = 0.3645030665147382;
    msg.theta = 0.059227435205849055;
    msg.psi = 0.9487484692360458;
    msg.u = 0.4753620170489894;
    msg.v = 0.17392859042094755;
    msg.w = 0.994186092104321;
    msg.p = 0.4665858381523902;
    msg.q = 0.6625217828359315;
    msg.r = 0.4083103266740541;
    msg.svx = 0.9724509774211776;
    msg.svy = 0.9191278451889418;
    msg.svz = 0.27491029648292553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.43715443823945643);
    msg.setSource(2842U);
    msg.setSourceEntity(116U);
    msg.setDestination(3249U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.24973019436543664;
    msg.lon = 0.5102610724566281;
    msg.height = 0.7877388028929323;
    msg.x = 0.8755667562416352;
    msg.y = 0.43488702654168965;
    msg.z = 0.39489524487053174;
    msg.phi = 0.5628990298771847;
    msg.theta = 0.9024447569763309;
    msg.psi = 0.741396859921165;
    msg.u = 0.3663925414760296;
    msg.v = 0.14736918544736166;
    msg.w = 0.5089969896915855;
    msg.p = 0.5973343893707553;
    msg.q = 0.8740868181336316;
    msg.r = 0.44005241147057683;
    msg.svx = 0.084550784483303;
    msg.svy = 0.9293680258844953;
    msg.svz = 0.4874151104101049;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.8612816527723021);
    msg.setSource(37217U);
    msg.setSourceEntity(151U);
    msg.setDestination(30654U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.8934193272706666;
    msg.lon = 0.5919262291502109;
    msg.height = 0.5179233554495972;
    msg.x = 0.8984874812393167;
    msg.y = 0.387337301337083;
    msg.z = 0.7483580457787445;
    msg.phi = 0.49423560059761373;
    msg.theta = 0.9230696867831691;
    msg.psi = 0.8937923694345173;
    msg.u = 0.6057451493051998;
    msg.v = 0.4605543158847475;
    msg.w = 0.06798496278125787;
    msg.p = 0.8943566469202587;
    msg.q = 0.29535961545605005;
    msg.r = 0.0007690627207623812;
    msg.svx = 0.11223945901573573;
    msg.svy = 0.9089987538948522;
    msg.svz = 0.6033131839091136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.16065768417544468);
    msg.setSource(64045U);
    msg.setSourceEntity(119U);
    msg.setDestination(45955U);
    msg.setDestinationEntity(186U);
    msg.op = 217U;
    msg.entities.assign("MERNDDTMQUUFHWTWEYLACNOLKOZWLHTGUPUQSEVCZHEJWRFNILLBZDJIHDBPDAZLEVFKMDKCAOWSOGECHSLYPGGEAOTLVURAKKRHGFXCRBGUIKOXSBHSFCIXDPSOZYZYJKYIKAWIVNQLO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.29731214127966243);
    msg.setSource(49237U);
    msg.setSourceEntity(254U);
    msg.setDestination(53375U);
    msg.setDestinationEntity(247U);
    msg.op = 127U;
    msg.entities.assign("NGFDVTGKSVSGMXBTJHWYTIWNVWZBGDPWPZUTIRFNFYDNCOVEKMMPUOKGUMEYSZLCKFNCQUMNLNAPXEVOUMREUZWTFJSCVDRYQIQJYHZWXYXDGUFKBIMZXGIUBFTAPSHPCTWOFKAEEIGLSESMRHJLXJJVWHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.6510656018643012);
    msg.setSource(40898U);
    msg.setSourceEntity(190U);
    msg.setDestination(36448U);
    msg.setDestinationEntity(178U);
    msg.op = 98U;
    msg.entities.assign("HQDUOUBROXGRGAPPLJMKRYSSZIBGEQSLJBQLDHCDILZTUPZCMAOPONICBJFRUEWNOAPYMKWJTTFQPDDSVCAMVIYYIFEGWSPVAXNQOXXJZSUMXWSEAYDHVFGXITWBDKKBSNDLUWOLXFRVFDJVCHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.2848828927917436);
    msg.setSource(11153U);
    msg.setSourceEntity(196U);
    msg.setDestination(1385U);
    msg.setDestinationEntity(180U);
    msg.type = 114U;
    msg.speed = 16923U;
    const char tmp_msg_0[] = {29, -98, -6, -13, 91, -98, 13, 24, 109, 78, -3, 77, 11, 80, 41, 95, -25, -79, 121, -13, -63, 116, -62, 51, 117, -104, 58, -96, 110, 45, -86, -15, 34, 16, -31, -117, -81, -61, -73, 87, -1, 77, -66, -57, -30, -91, -1, -15, -101, -9, 50, -29, -65, -30, 121, 26, -108, -67, -23, -14, -27, 56, -43, 125, -84, 63, -54, 102, 126, -87, -87, 45, 19, -23, 24, -14, 38, 80, 118, 54, 42, 58, -75, 27, 118, -58, -15, -21, 22, -105, 101, 30, 122, -93, -88, -115, -81, -75, -26, 98, 108, 6, -14, -126, 99, -9, -44, 3, -67, 101, -96, 95, -21, -17, -110, -19, -127, -20, -94, -119, -112, -113, 30, 101, -53, 99, 49, 83, 106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.6192436862251314);
    msg.setSource(63455U);
    msg.setSourceEntity(243U);
    msg.setDestination(55806U);
    msg.setDestinationEntity(117U);
    msg.type = 95U;
    msg.speed = 44862U;
    const char tmp_msg_0[] = {-73, -80, -115, 61, 107, -39, 42, -60, -44, -33, -60, 111, 90, -83, -88, -11, 37, -108, 34, -128, 11, -107, -45, -30, 6, 105, 100, 124, -17, -92, -99, 9, 109, 23, 21, 113, 44, 31, -74, -68, -74, -95, 38, -127, 113, 80, -117, -83, -19, 103, -41, -110, -126, 50, 26, -50, 27, -98, 101, 66, -97, 87, 109, 5, -92, 118, 68, -50, 0, -16, 29, 12, -119, -20, -51, -70, 100, -80, -17, 105, -70, -101, 118, 29, 0, -20, -38, -115, 15, -17, -102, 32, -54, -77, 66, 45, -81, -117, -125, 38, 59, 39, -109, -62, -17, 89, -8, 42, -34, -117, 96, 92};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.5843537853472984);
    msg.setSource(30196U);
    msg.setSourceEntity(164U);
    msg.setDestination(40879U);
    msg.setDestinationEntity(129U);
    msg.type = 192U;
    msg.speed = 51988U;
    const char tmp_msg_0[] = {-63, -95, -92, 36, 84, -27, -98, -80, 49, -67, -16, 116, -115, 78, -29, -7, 87, -117, -63, 95, -101, -57, -118, -79, 126, 103, -4, -52, -31, 6, -104, -106, -58, -21, -3, 15, 52, -108, -123, -62, -48, -50, -79, 25, -70, 4, -9, 79, 48, -45, 55, 83, 28, 12, -76, -1, -69, 58, -114, 83, 115, 70, -33, -77, -68, 34, 61, 101, -34, -61, 70, 69, 56, 78, -23, -1, -107, 68, -4, -125, 69, -99, 92, -70, 57, 100, 68, 81, -68, 58, -32, 20, 93, -12, -7, -53, 29, 33, 80, 26, -52, -59, -70, -28, -17, 91, -74, -118, 6, -118, 22, -104, 53, 14, -13, -84, 116, 56, -64, -7, 22, -22, -72, -91, -63, 113, -72, 73, 22, 25, 81, -30, -28, -73, -6, 72, 31, -54, -73, -85, 101, -121, 126, 86, -54, -123, 10, 55, -32, -27, 61, 78, 67, 42, 114, -122, 78, -41, 118, -113, -125, -23, 73, -64, 68, 101, 54, 102, 23, 24, -78, 110, 124, -102, -112, -25, 45, -66, -88, -118, 112, -94, 81, -50, 83, -96, 116, 113, 4, 39, 106, -19, 58, 16, 50, 117, -125, -101, 111};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.002093402905127051);
    msg.setSource(38336U);
    msg.setSourceEntity(227U);
    msg.setDestination(14499U);
    msg.setDestinationEntity(223U);
    msg.op = 137U;
    msg.tas2acc_pgain = 0.04051152144358172;
    msg.bank2p_pgain = 0.22705089577493598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.19567553672533566);
    msg.setSource(292U);
    msg.setSourceEntity(158U);
    msg.setDestination(4043U);
    msg.setDestinationEntity(37U);
    msg.op = 86U;
    msg.tas2acc_pgain = 0.7016168230488782;
    msg.bank2p_pgain = 0.8102678040326119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.8453420210116542);
    msg.setSource(44181U);
    msg.setSourceEntity(131U);
    msg.setDestination(8414U);
    msg.setDestinationEntity(178U);
    msg.op = 242U;
    msg.tas2acc_pgain = 0.5214226914014843;
    msg.bank2p_pgain = 0.7983187576318601;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.34455445246711514);
    msg.setSource(31858U);
    msg.setSourceEntity(93U);
    msg.setDestination(10628U);
    msg.setDestinationEntity(239U);
    msg.available = 2056500502U;
    msg.value = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.212556805053846);
    msg.setSource(656U);
    msg.setSourceEntity(226U);
    msg.setDestination(55435U);
    msg.setDestinationEntity(98U);
    msg.available = 2964584352U;
    msg.value = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.17941381329921902);
    msg.setSource(31499U);
    msg.setSourceEntity(76U);
    msg.setDestination(20341U);
    msg.setDestinationEntity(233U);
    msg.available = 559896271U;
    msg.value = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.19254445880790916);
    msg.setSource(49732U);
    msg.setSourceEntity(214U);
    msg.setDestination(54263U);
    msg.setDestinationEntity(107U);
    msg.op = 26U;
    msg.snapshot.assign("UMKPHEQYHKXHOMGJMDLGPFKMXUOUOWYTWIBAIVGCHBZSVBROVJWADCLYQSPRGOYYPQSNPFGEZXXXJILLHCLMXBBMPWCPGSEIXARVRVZGZMJWCULJNFZNPNSDWTKE");
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("PRDWUNCMQGMFGNIAVDDWOJWZTEKSSXHAEKSHBNXATNMRTUOLNKJYHFBCWNDHOZGURYUTWSJMGIJQFZYFFVBKZTXISUQKGSVYHAHIJZBVZMICKRIVTALOPKRGFTPJ");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.447953902549178);
    msg.setSource(44794U);
    msg.setSourceEntity(76U);
    msg.setDestination(46362U);
    msg.setDestinationEntity(148U);
    msg.op = 55U;
    msg.snapshot.assign("OJMBZTXQDPVVFHAAAFZOIAADYJOFYRAKJENHODKUSLBYKTILGRDBDARTCVLTOJTZZOUGBKPCJBXQFPSPBSIGNBYOILLRZBUNB");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 17429U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.09406595230115078);
    msg.setSource(24496U);
    msg.setSourceEntity(40U);
    msg.setDestination(61881U);
    msg.setDestinationEntity(198U);
    msg.op = 190U;
    msg.snapshot.assign("MVVXINODQBEQESTWYGKFFXZZOULJPOGBHFMBB");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8318728453207787;
    tmp_msg_0.beam_height = 0.7421396731584197;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.2621355574301014);
    msg.setSource(38302U);
    msg.setSourceEntity(73U);
    msg.setDestination(58184U);
    msg.setDestinationEntity(143U);
    msg.op = 110U;
    msg.name.assign("QLOEHHSMNUBKHXMDZUWSCQTNPDIMCPLDMXIGBVXLAFRBOIRTGVCNGXZVTPZPKOTKTMXQJNSHRRJLEAWEDNYRUUGPIKWBPAWWMUPQFTWFOLFXDOJSYEGMXIKOAVBTHBCGFTLNYYOVLHDQQGYUUCPUEJISFEVKZJZBSAFJSKWPRQLECZDKUXZNFQMERVQOFNNWYIKRKIWJZGYMYEGJAIACAVOITDBVHAGTXDMNPOCYHQRZWCXBRSJHJLLDSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.3529540889233128);
    msg.setSource(31953U);
    msg.setSourceEntity(151U);
    msg.setDestination(26201U);
    msg.setDestinationEntity(128U);
    msg.op = 185U;
    msg.name.assign("ZETQVLPWERYJTDMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.5542263549001621);
    msg.setSource(3169U);
    msg.setSourceEntity(147U);
    msg.setDestination(7276U);
    msg.setDestinationEntity(11U);
    msg.op = 169U;
    msg.name.assign("EHECCSHHAYNUDOBXMIALHPMJTLUXPZRDDFBEDPFFZWXMIWVTXTKBNPTNAGDAIYUWYROLZYGMTNZCZWBGTKKEIQQZJFEBVACEMYMJKWCOLLJVGUFJKBJMUKSTYIPHYMUANWZGVLFRGIJRKLDORCPOFRCVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.6018158273167804);
    msg.setSource(18442U);
    msg.setSourceEntity(221U);
    msg.setDestination(32440U);
    msg.setDestinationEntity(127U);
    msg.type = 71U;
    msg.htime = 0.022353289105750074;
    msg.context.assign("QAEATDFPGCNQASPVWYNFMDWHSJHTHXADIMYVKPLULLBIAHIRGUHYQOOKZVRFXVRQQUSLSIRGDIGJKPQOZVGXKFVRCUYBFIZCLTIRDHXRCVPZDKWRFSYZZJGOXTCWNBNSHPIXWKDUEMFETLMUWJFKUH");
    msg.text.assign("ACXFFJFDIQFZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.7902839344069263);
    msg.setSource(37523U);
    msg.setSourceEntity(94U);
    msg.setDestination(64107U);
    msg.setDestinationEntity(96U);
    msg.type = 181U;
    msg.htime = 0.22609869898021284;
    msg.context.assign("AQKDKYGUMUPVDLYRIKVEPHKYCGWQYERLFPRYCZSROGBQTEHDGFZRFRHUXYNWQNZBRXVKJEIMISDFNFMFMNDCZLOHPBIUYHEGMVZSTJJOILQFBECOAPWJENEQOJHAXUPUIDZCZOVHROXQVLGBIXGJMKTANSVVABSESOGTBXTKATWWICZVFPWTUMHSDVWWMNGABQTWXHJTQAYGLBMPF");
    msg.text.assign("DMFFTETNEHPHOUOCJSBCGOLDZYXVSKLVMUJAPPDMSXDDHOGGQQRFWXNDZEBVWKSODLCNKFBXKVRGWLRCSDWKBAYKJUSNAXEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.5120499456114552);
    msg.setSource(5008U);
    msg.setSourceEntity(6U);
    msg.setDestination(50381U);
    msg.setDestinationEntity(28U);
    msg.type = 234U;
    msg.htime = 0.20137268612161974;
    msg.context.assign("SARIHDNHETBWEJQKZTKITOTXSBQVZDGYHXLHYYWEOIKVDSXVDXLPRTSNCDVMMUSPTFEAWSIAFHFVECQLNJUMSYKKAVLFHRCUPABMSJZIOAPGLROZDJQQZFU");
    msg.text.assign("GOAHILNUHYESBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.5106615488945582);
    msg.setSource(60034U);
    msg.setSourceEntity(41U);
    msg.setDestination(32607U);
    msg.setDestinationEntity(139U);
    msg.command = 222U;
    msg.htime = 0.35227552569433274;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 79U;
    tmp_msg_0.htime = 0.019733508202752992;
    tmp_msg_0.context.assign("MMETVICQBJGYKHPMQLDGSOKLIRTALBTAOXHDJBTSCFKRAOMOOUJFHZREHQPPGJDQVMJCIDZHYCZWHNLMRBKSPFKBGBFWQGQBDOVYTNSEWLKRZWUFEJUAACZVGMGYKTHNSKRTZCRPNLDIVGFAQAQCXLZJKUYGONSJXDUUKSXNDWWFXLQPEAUILOJTZALSWEFIHNPMPDIIBENWUCXGRWJIMRHUCZXYAVOYE");
    tmp_msg_0.text.assign("DBFDYBTZVRINECHSOLMQGPDOTKDNFIEXTMWHGBCTLCEFTXPVJBVAYFUFRWKNQWPMDELSZLYSSRXRRVMZZKEAEGRLSFQAAOGWECGNOJJFVDJRPMMBOQUHCKOIHIVVHTLWZSEXOKXHDYWAACQULCAPGJQMTGTW");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.4786445735433217);
    msg.setSource(19926U);
    msg.setSourceEntity(153U);
    msg.setDestination(38831U);
    msg.setDestinationEntity(39U);
    msg.command = 36U;
    msg.htime = 0.7383767230750249;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 74U;
    tmp_msg_0.htime = 0.8295972489206765;
    tmp_msg_0.context.assign("VMVDNBALVHDZKMOFOOAETOCEFUIWRQCVIZFFBOTHNBMXHVSVBYHVLYJUBUEXHDXQKUWWWQKWCKYVSDRGSTQMGRRFUXDVGQRZTDYQHYKGNXJF");
    tmp_msg_0.text.assign("OEDDEOFVBDRXTUGJTDWQHMRLYSFUSGMGVCVLZWISVZAHKAJXUXMTJZKQXGSZMQSDYMVEGMYIVPRTLKOOGLHLNTQNGAXDCCPDMHCWTLAWWJXNMBCENIATUSFOPEPKUUYOLFPLQRUTISLCQBB");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.5015146356847968);
    msg.setSource(36986U);
    msg.setSourceEntity(147U);
    msg.setDestination(31493U);
    msg.setDestinationEntity(127U);
    msg.command = 14U;
    msg.htime = 0.316966320478003;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.009907842430918912);
    msg.setSource(32419U);
    msg.setSourceEntity(181U);
    msg.setDestination(35287U);
    msg.setDestinationEntity(165U);
    msg.op = 191U;
    msg.file.assign("EPERRMHZTXPFANXNBMGWEFMCUUTWFUVDTUXVKTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.13586677371817268);
    msg.setSource(36444U);
    msg.setSourceEntity(193U);
    msg.setDestination(1224U);
    msg.setDestinationEntity(4U);
    msg.op = 242U;
    msg.file.assign("FIWGHSWFABOPWPDVBCBBXBCTZYNQDCAVDARHFIORVNNEENYXLCONTNLXZPXUCJQOMWWZEXPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.4331652513407137);
    msg.setSource(55815U);
    msg.setSourceEntity(133U);
    msg.setDestination(2223U);
    msg.setDestinationEntity(204U);
    msg.op = 138U;
    msg.file.assign("LQZMPCIJYFLFIRALGWLRZAEVPQHGBTHCPTNXEZPRCRBCAAJOOKTDZBETEVFGRWHOFXEFAIPLGDLHYYKQINUQCHNVGMDCDWBAJYICHUUVESJFYKBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.491075225215607);
    msg.setSource(38266U);
    msg.setSourceEntity(235U);
    msg.setDestination(42372U);
    msg.setDestinationEntity(144U);
    msg.op = 108U;
    msg.clock = 0.7864850718580617;
    msg.tz = -46;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.9016347999831077);
    msg.setSource(31174U);
    msg.setSourceEntity(233U);
    msg.setDestination(55402U);
    msg.setDestinationEntity(101U);
    msg.op = 172U;
    msg.clock = 0.09677056929288252;
    msg.tz = 36;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.05156640176766303);
    msg.setSource(58519U);
    msg.setSourceEntity(138U);
    msg.setDestination(28020U);
    msg.setDestinationEntity(210U);
    msg.op = 70U;
    msg.clock = 0.9823925392611323;
    msg.tz = -93;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.2890038226547731);
    msg.setSource(42303U);
    msg.setSourceEntity(172U);
    msg.setDestination(34688U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.11269438327545578);
    msg.setSource(46822U);
    msg.setSourceEntity(9U);
    msg.setDestination(58134U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.14110138643353798);
    msg.setSource(3491U);
    msg.setSourceEntity(104U);
    msg.setDestination(53295U);
    msg.setDestinationEntity(216U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.0698324353176526);
    msg.setSource(12806U);
    msg.setSourceEntity(42U);
    msg.setDestination(23767U);
    msg.setDestinationEntity(221U);
    msg.sys_name.assign("PUBZLGFFMFSJNIYVJZXTXMUVSSZEUEBNIHGACNQNIJDWXEZJKYWYFOOKAUOHDKQJNCBPYAADGSBFPIKGDIZYZ");
    msg.sys_type = 87U;
    msg.owner = 40558U;
    msg.lat = 0.33954897605413137;
    msg.lon = 0.7361842397068757;
    msg.height = 0.8763991079987555;
    msg.services.assign("ELZVYTBEWSRNDSKJYMSLLYJAQAVF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.5137113776040295);
    msg.setSource(54442U);
    msg.setSourceEntity(167U);
    msg.setDestination(43983U);
    msg.setDestinationEntity(224U);
    msg.sys_name.assign("PAYXOJDVFGSZDZXWWIBYVWPLHHUZAKLAWDLOPUNONOEAHJKQMKVWR");
    msg.sys_type = 210U;
    msg.owner = 52925U;
    msg.lat = 0.21313347659494586;
    msg.lon = 0.17052193588342646;
    msg.height = 0.8866436710859678;
    msg.services.assign("GDHNHLNEFJKRTYNSSQTLLDFRFANSLGXZWIGNVHWUEJDHVMVCADTOBBITRLSXPYIBJCUNIAWCWEAOFRKPGUVPCXYMXZGYUAEXMTQGPUKPDOAHGSQBKCFMJSDRBJKEQKLSDOLZGIQVCERSYBONTYVVWUMFHPTOZGTOPQLXMACFWTUQPUXKFOXDDIEETPJZIBKJZYHDGCMEWVKO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.5242109351715868);
    msg.setSource(21971U);
    msg.setSourceEntity(136U);
    msg.setDestination(17373U);
    msg.setDestinationEntity(115U);
    msg.sys_name.assign("ZIWEDOSQJKMKFNOUUAKSOIZMQSIIBLDYTDSMFLTJOMLGXYDWOGRKKOGFXPZSVWRQJURFXABRRZYSETBYFECTZJNIRHWAVCUXVHHASJYHTEGNNVRONXUXGTLLNUQSGAVKRSBVPALUIWWEZMKAJSNGMEDZCMZWVCTDYEHJBLBBLQPDFHPCVXLMDPNMHHHIZPQXJDLCQTCHJGYEQNWGPCDTKCFIKUCTIQFPIQWFBPXMFKAYYBJEENORUAOVOWUYVZ");
    msg.sys_type = 239U;
    msg.owner = 40552U;
    msg.lat = 0.9753817656508758;
    msg.lon = 0.8232837394992425;
    msg.height = 0.48005831168097846;
    msg.services.assign("RMACYRQEPLKHJADISZMMFGOGMXVBCDYIIQSVYPMITTKTENWNYMDNSHJWWOIFXGTSLQWQGZXDALCYINXQWOQYETLRVTIFADXAGAVNLMFLBTAZRUFSNPVKBOJHKWBOEMPFBXJNVVHRJNBPOQOAVITDSHWYOXDLZJZJZAUZPBPNTKPRXCEHNSOUGDRPUGIHCXVVJSXUKC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.604006444155297);
    msg.setSource(14050U);
    msg.setSourceEntity(210U);
    msg.setDestination(14682U);
    msg.setDestinationEntity(35U);
    msg.service.assign("YOEQXQOLXUBCIKFVAAEWPZDGAKJIXXEZGMKYPMLDSNYPSPCXCQTKIAFQVVEOWSQRFVHDHSCORFOMZMJRDHERAPNDPDZWVDYLBVMHSTTWBUBULZIHXVHGJNGMGONNABUEYVSORNBFNBWPZJVRBXJKNBQWIRTQVCLSXCRRNIUCGQIKTDSGQFZJFECGHOHEOFIKULG");
    msg.service_type = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.2233677993938833);
    msg.setSource(535U);
    msg.setSourceEntity(65U);
    msg.setDestination(64649U);
    msg.setDestinationEntity(149U);
    msg.service.assign("QLATKNWNJYPILMBKMELRXAZXBZKPYURVMIYWIHAXDNAVEOECLSOTTHMDHJUBDLVFMLEKEPSVLFTRGUBNAVLZZFJGQDOJWFGGYRAMCRMXGQWRDUPUMBBKQFCZSNHDMJZVWYFEZEPKQGWITHPQHEGOBXUTYIZQWSKNUFRSNJVSVBCODRPCSTCGKWSNXIYTLRUSKYGVQICUFKSJHZYNCXA");
    msg.service_type = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.2549314201974515);
    msg.setSource(20077U);
    msg.setSourceEntity(41U);
    msg.setDestination(43749U);
    msg.setDestinationEntity(104U);
    msg.service.assign("GYPMMLKIFLIBXPYLGHPCQQZSALAZCUMGNUQYYOSJXMNHCDEXCKXIBNPVSGFMHRXDDNHZJAPXOHTUZQJRBDAWVEFLONBRZAMBB");
    msg.service_type = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.4340472894863927);
    msg.setSource(26678U);
    msg.setSourceEntity(87U);
    msg.setDestination(34660U);
    msg.setDestinationEntity(40U);
    msg.value = 0.5085126463932731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.9852590819837881);
    msg.setSource(7632U);
    msg.setSourceEntity(102U);
    msg.setDestination(30339U);
    msg.setDestinationEntity(97U);
    msg.value = 0.5394886915372715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.1107507263685813);
    msg.setSource(57516U);
    msg.setSourceEntity(192U);
    msg.setDestination(8384U);
    msg.setDestinationEntity(142U);
    msg.value = 0.6889510580923522;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.7846386631714075);
    msg.setSource(43134U);
    msg.setSourceEntity(68U);
    msg.setDestination(11762U);
    msg.setDestinationEntity(46U);
    msg.value = 0.8348568390786423;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.1372118822786954);
    msg.setSource(50835U);
    msg.setSourceEntity(66U);
    msg.setDestination(20674U);
    msg.setDestinationEntity(240U);
    msg.value = 0.8365527386288287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.8014047950517679);
    msg.setSource(57998U);
    msg.setSourceEntity(148U);
    msg.setDestination(10401U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6236188562133457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.9115565706844422);
    msg.setSource(1648U);
    msg.setSourceEntity(195U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(154U);
    msg.value = 0.004138298912479854;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.635512569424495);
    msg.setSource(8958U);
    msg.setSourceEntity(88U);
    msg.setDestination(63500U);
    msg.setDestinationEntity(220U);
    msg.value = 0.06413353481315776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.15859181612287276);
    msg.setSource(51365U);
    msg.setSourceEntity(120U);
    msg.setDestination(23891U);
    msg.setDestinationEntity(222U);
    msg.value = 0.5178398694564041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.053595184230515236);
    msg.setSource(12241U);
    msg.setSourceEntity(161U);
    msg.setDestination(23878U);
    msg.setDestinationEntity(154U);
    msg.number.assign("KUGPDSJVRMIJEBAGBHHQETBJSEOGHVMATSJUYKORMOEEF");
    msg.timeout = 45914U;
    msg.contents.assign("FPXKIYUOBUQHADBTACHQLWMWROQGHCEZGI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.5320767230179506);
    msg.setSource(56328U);
    msg.setSourceEntity(227U);
    msg.setDestination(18307U);
    msg.setDestinationEntity(144U);
    msg.number.assign("BPYFKUZUTWOTOSTUBWEORPEBZZVLW");
    msg.timeout = 5113U;
    msg.contents.assign("ZFOYTIPAKOGPSDPSRWECWYXMZECZIJTNJSPVOYORAAJIZNJHMPIXBNCDDWGONYREKLTLOLTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.8053613650399858);
    msg.setSource(25491U);
    msg.setSourceEntity(39U);
    msg.setDestination(40124U);
    msg.setDestinationEntity(5U);
    msg.number.assign("IXXPVDJLIMNCZNEDGMEFJRPSBVQOJKXKTCUTQARWCJEZESWGOWZPBCTXKKMWXQTYCQBZCFWLTVXDDBMCPMEZWAIRRDVJBAKQUGTBQLZXAJNORQMUBIBAFRLFMLYDKGNGMWHPGEJQRVQYKUHRONASBDK");
    msg.timeout = 54019U;
    msg.contents.assign("LPRCQWSERSNLVOZKDYDMTPFSSALOXRUWTBGJEUEBCNWNYYAOMNRWSLEIQCNJVYFZHVCIJMFLZIGVPWKQFRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.6289692415907117);
    msg.setSource(60439U);
    msg.setSourceEntity(248U);
    msg.setDestination(34899U);
    msg.setDestinationEntity(147U);
    msg.seq = 4200223787U;
    msg.destination.assign("PKLRNJTYPWLSHEMWVSAZLAUIIJRLPKJUKAQZITVCKLCMYODMRROCDYUWYWYVMKWYNDVXJHRSIMSZOHBKHHBHLOWXWBAFNDPJKZTPIPSCQRAOOBMIXGFFNFZYNV");
    msg.timeout = 46565U;
    const char tmp_msg_0[] = {16, -108, -114, 68, 18, 10, 105, -41, -100, -105, 83, 104, -107, 18, 56, 7, -10, -13, 33, -76, 99, -13, -53, 80, -88, 6, -92, -2, 97, -61, -7, 33, 43, 107, 88, 52, 68, 112};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.14343857017376405);
    msg.setSource(24860U);
    msg.setSourceEntity(129U);
    msg.setDestination(62984U);
    msg.setDestinationEntity(169U);
    msg.seq = 4011574617U;
    msg.destination.assign("GPGYNSCCJSITEJLKQWRRILIETJSGXLESUZLJWONUDELUKRYBYNCUAMZMVCYTZXFBUAQBCGBDLURKFMKREFRUFSVALZTERGDAMVWZHCDUZTZEEBFCQIYXCMPWKSWUDYNJMXQKBCNHS");
    msg.timeout = 39607U;
    const char tmp_msg_0[] = {-10, 62, -38, 112, 59, 0, 42, -77, 52, -28, -112, 72, 76, 95, -58};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.9468984630740629);
    msg.setSource(43043U);
    msg.setSourceEntity(198U);
    msg.setDestination(5868U);
    msg.setDestinationEntity(217U);
    msg.seq = 2211274384U;
    msg.destination.assign("QCWTHZZKWRFJDXPIIZWQPUAJSGYHKQPFRWGQELIOBBSYIKJRUYQZXYQVNGYMVCPPJQPADDPOPQGOQYDRHDPMLXEFMERBLDMNZEJUVTBIGOWHOVBHJVZUQYSUANGRZVPOCMDYSNKOSFLTCOOXCMFJVDCFMLUSZHIAJZFMDNFDBIFLIATNTBKSLXGXTFJXAUJEESAHWAKUNNWWKXMMYLX");
    msg.timeout = 40186U;
    const char tmp_msg_0[] = {-96, 97, 80, 27, 8, -40, 11, 13, -2, 102, -1, 106, -14, 48, 2, 100, 34, -19, -113, -25, -12, -68, 53, -82, -34, 72, -31, 41, -94, 70, -32, 22, 97, -14, -25, 102, 124, 101, 126, 21, 52, 16, 49, 70, -98, 74, 59, 28, -106, -30, -74, -92, 92, -70, 29, 6};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.7353934341592598);
    msg.setSource(4122U);
    msg.setSourceEntity(20U);
    msg.setDestination(65414U);
    msg.setDestinationEntity(139U);
    msg.source.assign("BXTRKTEFLOOOMPNYFYJGBAAJEZGIGYWVCUTLDCPARYHNXYSHISCUZKLIQCNCWFBYQOMXQEZPKHOSLWJGXUWMXHMTVDZFSZYFGQBNRSXLQHHRHWHGTICSTPLKJDLCEGMYQBDNJLARVLABIBJVLETXZASKFFTRWVDJDEIUKZRNOPUGPFEPWQOQVCHAEHWDMXPADVIFSXGTNZAVJONEGJBMZNRSVKIOMTYPDIVNICMRQ");
    const char tmp_msg_0[] = {28, -56, 72, 24, 47, -18, 32, -23, 16, -20, -73, 107, -79, 81, 72, 37, -128, -49, 84, 125, -99, 69, -15, 6, 22, -89, -21, 37, -25, -63, -88, -27, -30, -47, 119, -13, 81, -16, -13, 126, 19, -53, -58, 25, 81, 82, -28, -5, 118, -125, 81, 29, -83, 76, -8, -45, -101, -60, 19, -127, -118, -6, 81, 17, 11, -51, 104, -17, -30, -11, 103, -89, -90, -5, 28, 51, -26, -112, -22, -79, -79, 82, -96};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.8246912277693761);
    msg.setSource(43639U);
    msg.setSourceEntity(221U);
    msg.setDestination(34882U);
    msg.setDestinationEntity(46U);
    msg.source.assign("QHSNQTBJUZKHGCCVMBNYKGDUHPPPOUAKWVBLDFBVZZDLWMVHRHHAXDMEIIOQTNNQYXOHOPCGXLKCABJWWXQLRAEJRSSTLMUREUWVRPWKDJPCFUECMOGSJSZHLU");
    const char tmp_msg_0[] = {69, 39, 40, 6, -35, 62, 33, 64, -112, 71, -107, -96, -15, -81, 62, -76, -10, -85, -76, 108, 116, -4, -92, 44, 80, 126, 107, -57, 126, 41, -72, -49, 27, -86, 49, 0, 119, -4, 111, 42, 13, -114, -26, -51, 125, -128, 122, 122, -90, -122, -69, 81, -1, -33, -3, 69, -30, 56, -53, 103, 101, 125, -62, -118, -120, 39, 77, -101, 34, -39, 118, -125, 38, 52, 48, -68, -115, -94, -124, -66, -41, 16, 86, -119, 6, 4, -27, 11, -20, -63, 22, 10, 122, -120, -85, 11, 0, -116, 85, -100, 102, 49, -113, 35, -50, -60, 83, -23, -96, 36, -37, 104, -69, 21, 83, -80, -63, -75, -83, -27, -17, -108, -28, 40, 39, -43, 66, -118, -75, -45, -71, 81, -70, -110, 19, 42, -40, -49, 43, 98, -108, -35, 31, -108, -42, -4, 59, -92, -117, 17, 79, 95, -123, 115, 15, -100, -1, 66, -46, -11, 82, -87, -86, -55, -80, -103, 62, -61, 64, -85, -21, -68, 50, 14, -46, 19, -70, 71, -48, 91, 51, -14, -96, -62, -43, -7, -31, -64, 81, 0, 29, 39, 40, -24, 12, -43, 44, -50, 32, 40, -70, 124, -45, -115};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.03394778130564846);
    msg.setSource(52006U);
    msg.setSourceEntity(21U);
    msg.setDestination(26526U);
    msg.setDestinationEntity(108U);
    msg.source.assign("BMDNAKITOF");
    const char tmp_msg_0[] = {-13, -53, -22, -13, -22, 12, 91, 113, -107, 39, 86, 0, 120, -112, -124, 117, -99, 65, -98, 49, -110, -22, -118, -97, 50, -66, -127, 99, 28, 85, -40, 116, -8, 106, -19, 87, -83, -1, 46, -55, -20, 18, -103, -23, -4, -52, -61, -91, 50, 53, -22, 74, 26, 102, -56, 26, -55, -10, -67, 46, -45, 75, -89, 99, 30, 105, -104, -6, -106, 14, 103, 99, -38, -122, 104, -32, -93, 103, -74, 90, 75, -125, 16, 55, 59, 118, -115, 92, 27, -33, 16, -8, 96, -36, -65, 122, 16, 93, 63, 43, -52, -121, 77, -78, 63, -28, -111, 29, 51, 46, -4, 7, 19, -34, 49, -9, -83, 65, -26, 123, 28, -49, 53, -8, 21, -46, -10, 46, 121, -69, 117, 39, -110, 106, 117, -40, -16, -10, -48, -104, -36, -113, 44, -127, -31, -116, -80, 75, 85, -123, 100, 82, -10, -1, 70, -2, 41, 12, 63, -77, 83, 97, -104, -30, -87, 73, 79, -110, -8, 59, -100, -117, -119, -93, 79, -72, 47, 47, -30, -102, 25, 84, 102, 118, -14, 82, -80, -71, -24, 104, 64, -128, -104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.8848349883895322);
    msg.setSource(26624U);
    msg.setSourceEntity(131U);
    msg.setDestination(57276U);
    msg.setDestinationEntity(182U);
    msg.seq = 374001107U;
    msg.state = 10U;
    msg.error.assign("FQEHELOJQXXKWVUWEYYQPYITXHRYLJQECHKZJWVBXLDCKDCFJLTARUPYDGSCKFODIFBQQOTZQGCUYKNABNVUZAIVZSKGPSOFVXIHLDIAMVNRJGNVAGTWMBDPFIATPLFTW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.9264546784949822);
    msg.setSource(24719U);
    msg.setSourceEntity(106U);
    msg.setDestination(10141U);
    msg.setDestinationEntity(20U);
    msg.seq = 468595258U;
    msg.state = 3U;
    msg.error.assign("BWMMIPMUTGCFFLNKEKGVEPYYKLHSVTDMSTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.5542623355081218);
    msg.setSource(19258U);
    msg.setSourceEntity(38U);
    msg.setDestination(17786U);
    msg.setDestinationEntity(69U);
    msg.seq = 208947714U;
    msg.state = 184U;
    msg.error.assign("IJCODYPUTIOFTHQCVWLYNXWQPRSWSMFAAEJENXEQOSFIRDZYVSFSFUJWCXDRVMDHYAERTJVIREBUYHRIMCQHXZONBRHXZZDTWQVXBBVUPSHXNMFKGQOVBGRSYCKEKPOEWULSJDLGTKGZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.12540131113843722);
    msg.setSource(63874U);
    msg.setSourceEntity(195U);
    msg.setDestination(52471U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("BVVZHHGXJVGKIHIQL");
    msg.text.assign("YZGKMZIAFWZIQGXCUORAAEAGYTWUPSXBVDUAOSNSVDBEBSXFTQQEGNJLRAZPEDWTUNRPCDDTJWNMHKJECHDOCMEYJCOHRNXTXBLJIBHIPXOYFZIVQRERXEZFPIFBZXFDRWGKHPNMALJHIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.12969663238352158);
    msg.setSource(14949U);
    msg.setSourceEntity(117U);
    msg.setDestination(33251U);
    msg.setDestinationEntity(26U);
    msg.origin.assign("CARMBKOVYHJHUXV");
    msg.text.assign("OMCVNTQFBLUDJYQEWNDYEOIFCAERJTZZPHGGJZCUOXYYMJRCOBTUIWGSFVXXUBXHJGSADBNFBPKSCPRCAAWYGAGSLRIJTITALKKCIDPWLDJBTZWTYQFWVQDUQVYSKFSIILHUPRUULHKGOZFMYRRPXXPEZZNJCEOVWHXKXBDKMVQKTUMWZAOYEMWJNRLNXAQMMORSZIHVIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.7492641681843902);
    msg.setSource(47527U);
    msg.setSourceEntity(10U);
    msg.setDestination(22450U);
    msg.setDestinationEntity(57U);
    msg.origin.assign("EQCCUNXWURUBMQWKPOOLTWRMXIAFZYKDDIYFSDVHKJOQODCLKSB");
    msg.text.assign("NHKSEACYWSCELRPBOLBTEKPPHAAUSIFQYVCSNQQDSRFOHXOUHHXMTQCFFRTMGZSAOOFUWBIXMBDCOODGXYKHYJYMWIHXCEMQSTZUAJVDTGPYRJSVPRXNTHXKGTEVBGGYDFDVHXUDOJLCARLZNXDQBJWOGBZZMBIEKRJMEUQJZTHVUBWLNWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.3302985071060883);
    msg.setSource(33349U);
    msg.setSourceEntity(160U);
    msg.setDestination(57010U);
    msg.setDestinationEntity(228U);
    msg.origin.assign("SPICQTPOUFUGMDYZJZKHBOMUGXAZSSYV");
    msg.htime = 0.42350509584384;
    msg.lat = 0.6011496887029862;
    msg.lon = 0.9327112734483952;
    const char tmp_msg_0[] = {-106, -115, -19, -4, -109, -112, -125, -44, -29, -20, 0, 31, 110, -68, 11, -59, -16, -118, 78, 106, 43, -60, -78, 100, -112, 6, -2, 47, -57, -67, 31, -109, -87, 82, 54, 116, -128, 9, 108, 39, -43, -9, -4, 39, 24, -106, 44, 33, -9, 125, 22, -128, 118, -3, -54, 76, -72, 31, 86, -110, -49, 49, 89, -66, 77, 30, -73, 32, -41, 57, 25, -109, -112, 46, 71, 19, 4, 126, -9, 18, -95, 5, -100, -106, 60, 67, -103, 96, 21, 82, -90, 97, -32, -6, -38, -11, 2, -107, 39, 7, 85, -99, -125, -97, 116, -72, 0, 78, 58, 109, 64, -121, 9, -12, 88, 59, -34, 114, 21, 78, -51, 32, -69, -45, 46, -63, -64, 120, -56, 24, -20, 108, -125, 8, 97, 58, 100, 19, -5, 7, -127, 57, 66, 5, -123, 85, -62, -74, -112, -11, 41, 4, -115, -107, 98, 109, -24, -16, 32, -31, -109, -73, -110, -125, -108, 54, 30, -101, 90, 36, 34, 111, -115, -62, 49, 22, 84, 37, 29, -94, -42, -63, 104, -67, 103, -9, -63, -42, -72, -15, -114, -30, -64, -78, 107, -120, -99, -119, 99, 92, 75, -11, 13, -57, -64, 103, -48, 3, 42, -86, -54, 71, 38, -4, -29, 25, 117, -103, -31, -47, 39, 36, 88, -48, 63, 4, -35, 14, -110, -17, -58, 107, -105, 21, -90, -128, 76, -52, 26, 6, 19, 64, -30, -81, -2, -119, -12, 4, 7, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.4250678979424739);
    msg.setSource(31738U);
    msg.setSourceEntity(145U);
    msg.setDestination(52203U);
    msg.setDestinationEntity(111U);
    msg.origin.assign("GQBRBYREYOGGAUWOCOILMEJDCMDIQGRJPKKHFGVHPPXNPJMCFUPQDSVYSQNKFPRSOHWBZJBHWZQAANYLDAACGZKFEUNMTALOYFROCSQDIQGUYBWIULJTYGTGEBXHBDABKCFVEWANVKECMXZRCVVVDKTMILXJPFHIVRZILTXJONKPJNMQOTNXYJHSXSUFWU");
    msg.htime = 0.1828998300148964;
    msg.lat = 0.5496008497658154;
    msg.lon = 0.5219151043826622;
    const char tmp_msg_0[] = {125, 69, 88, 14, -63, -104, -108, 21, 93, -91, 15, 58, -14, 65, -110, -28, 13, -117, 74, 94, -13, -82, 4, -63, -48, 7, -13, 55, -91, -8, 28, -15, -7, 121, 67, 109, -123, 113, 126, -126, 73, -105, -6, 4, 16, -30, -14, -68, -31, -60, 95, 69, -69, -99, -70, 53, 31, -126, -44, -51, -24, 13, 15, -88, -93, 115, -41, -48, -74, 54, 25, 3, 66, -65, 14, -67, 30, 16, -96, 19, -90, -45, -9, 59, -107, 96, -44, -49, 39, 27, -59, -39, -9, 96, 102, -44, -89, 61, -99, -100, -58, -60, 43, -93, -71, 25, 21, -8, -113, -40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.3143551499135546);
    msg.setSource(22709U);
    msg.setSourceEntity(42U);
    msg.setDestination(19423U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("ERZBRYAKNRQPRBECYVLQBBWCJRUNEHAPHKNXOGWLIYLXMMDONKJIMYHYFHZTVURQGZYCAAPSKACSNUXBZNDUTZGZMRRACNAVXIBXAMITHDWCDTEDSFDGFTFUTUKVHOQUHEQPHBVGDWPMKIRFJJSSPWCESTFVTUKQGXDVEQMKWJO");
    msg.htime = 0.057544075689590524;
    msg.lat = 0.03512519066919051;
    msg.lon = 0.7419774544499695;
    const char tmp_msg_0[] = {74, 125, 75, 54, -14, 97, -54, 64, -93, -6, -1, -36, 49, -3, 27, 89, 17, -2, 58, 89, -57, 108, -74, 99, 123, -61, 90, 126, -76, -63, 60, 105, -1, -83, -72, 110, 124, -88, 40, -73, 125, 112, 101, -96, -48, -80, -112, -126, 68, -93, 38, 14, 95, 110, -40, 2, -2, 30, -25, 34, -100, -127, -13, 86, -120, -75, 103, 18, 14, 25, -93, -59, 117, -23, -120, 91, 67, 101, -34, 62, 122, 70, -116, -82, 60, 32, 115, 125, 71, -85, 39, 0, -92, 103, 27, -125, -38, -38, -77, 41, -126, -56, -30, 83, 29, -82, -118, -39, 122, 53, -72, -127, -26, -62, 74, 42, 125, 69, 44, 69, -64, 57, -67, -91, -28, 17, -22, -104, 6, -42, 5, -34, 85, -40, -85, 108, 57, -99, 17, 125, -39, 114, 64, 66, 35, 116, -3, -104, 101, 46, -77, -84, -89, -63, 79, -9, -67, -35, 46, 81, -91, 108, -108, 86, 7, 20, 66, -92, -57, -118, 92, -127, 76, 21, 70, 81, -39, -40, 51, -46, -111, -58, -79, 90, -43, 38, -86, -16, -21, -95, 37, 105, -115, 112, -95, -79, 13, 117, -84, -105, -114, -35, 4, -72, -16, -109, 98, -48, -76, -90, -30, -35, -82, -71, 89, 99, 95, -30, 105, -114, -79, 25, 75, 32, -121, 116};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.14998207349674764);
    msg.setSource(674U);
    msg.setSourceEntity(47U);
    msg.setDestination(29089U);
    msg.setDestinationEntity(198U);
    msg.req_id = 62612U;
    msg.ttl = 22868U;
    msg.destination.assign("FBZDTZLONGAECRXRJZCFMEEKQYNVYLFCVAWIHGR");
    const char tmp_msg_0[] = {-51, 3, -62, -56, 29, -62, -32, -58, -58, -59, 90, -93, -115, -82, -62, 115, -78, -103, 8, -37, -43, -16, 110, -111, -8, -50, -27, -18, 30, -83, 83, 38, -90, -27, 105, -13, 12, -52, 96, -103, -110, 39, -110, -125, -58, -56, -108, 81, 74, -34, 126, -66, 102, 88, 88, -65, 98, -36, -36, 31, -68, 75, 52, -94, 101, -45, -90, 46, 57, -22, -100, 31, 50, -64, -2, 19, -120, -28, -63, -25, -14, -11, -52, 95, -70, -77, 87, 71, -95, 47, -66, -1, 59, -99, -57, 85, -25, -87, 90, -66, -102, 99, 99, -25, -59, 109, -70, -17, -4, 73, 20, -36, -120, -25, -119, -27, -126, 39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.17864686223557802);
    msg.setSource(60012U);
    msg.setSourceEntity(76U);
    msg.setDestination(21831U);
    msg.setDestinationEntity(107U);
    msg.req_id = 63505U;
    msg.ttl = 13231U;
    msg.destination.assign("AVRNEZXMWFWXHGRPDVRNOXFMAPPTKZAOFOFVJWMGUJ");
    const char tmp_msg_0[] = {-46, 48, 40, 104, -111, 61, -30, 2, -117, -66, 36, 53, -10, 50, 111, -88, -18, 88, -97, 55, 67, -47, -109, -102, 68, 92, -83, -2, -104, 86, 82, 60, 18, -113, -11, -22, -86, -119, -84, 106, 0, 17, -107, 23, 87, -80, 71, -87, 102, -70, -82, 23, 68, 123, -5, 95, 43, -95, 41, -101, -126, -38, -61, 60, 80, -69, -102, -46, 86, -90, 120, 80, 24, -39, 1, 12, 51, 77, 38, -120, -98, 90, 5, -30, -90, 121, 38, 52, -33, 105, 67, -75, -56, 19, 99, -88, 65, 116, -100, -112, -104, -58, 60, -112, 6, -105, 76, 42, 78, 19, 40, -109, 23, -4, 37, -113, 28, 59, 92, 35, -128, 55, 16, -84, 6, 41, 70, 15, 90, -88, 22, 124, -114, 1, -2, 65, 38, -90, -93, 121, 68, 63, 16, -26, -22, 82, -117, 84, 99, -10, -54, 126, 76, 12, 80, 25, -98, -31, 16, 55, 32, 84, 92, -42, -60, 45, 63, 104, 37, -31, 19, -98, -75, 72, -103, -52, 24, -32, -1, -31, 62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.8577161067860631);
    msg.setSource(5988U);
    msg.setSourceEntity(223U);
    msg.setDestination(53795U);
    msg.setDestinationEntity(146U);
    msg.req_id = 19413U;
    msg.ttl = 32216U;
    msg.destination.assign("FPZIIYIDNVDRPFEZFLHGSHZROVANOVDJBFJKKKKNBLCQIXKNWUMCDDXPXFTSFWWPUXEUHJYRVLHSCMOJAEIOEOFWOGGTTQXCQSSCKNGYCMTBXJJLURQZKUYCXBRRCBNYCMJAVQHZYMJSHQWHWAGPMGYATBZPNSGQPYZAVTLAHUBZYNLPWKSQHSNKDAPJBUVNEIXFRZMRXTZOCLF");
    const char tmp_msg_0[] = {-49, 125, -6, -63, -56, 73, 74, 62, 9, 10, 100, 77, -127, 54, -76, -123, -49, -28, 42, 9, -87, 51, 67, -66, -33, 10, 22, 92, -8, -67, -70, 43, -62, -59, 114, -18, 25, -102, 114, -88, 28, 7, -89, -15, 3, -93, -51, 50, -3, -97, 65, -55, 36, 45, -10, 65, -7, 53, 50, -126, 70, 116, 73, 1, -113, -105, -81, 99, 31, -88, -122, -76, 59, -96, 14, -40, 15, -70, -25, -21, -15, -104, 118, -55, -23, -97, 93, 64, -127, -37, -83, -123, 80, -64, -85, -25, -113};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.9060728890707683);
    msg.setSource(35920U);
    msg.setSourceEntity(46U);
    msg.setDestination(45396U);
    msg.setDestinationEntity(236U);
    msg.req_id = 50887U;
    msg.status = 86U;
    msg.text.assign("EAMHWDGFXQKLTVIPNBSVTWPFJHLLWNLRRJWGKMJSMRICPVHLNAGRQNOXEAUKHBGYJTANKRFDENZSXJVYPORRNEGKWHKMEVCXJOPSJUYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.9852270940263332);
    msg.setSource(26462U);
    msg.setSourceEntity(37U);
    msg.setDestination(34126U);
    msg.setDestinationEntity(166U);
    msg.req_id = 57527U;
    msg.status = 57U;
    msg.text.assign("ZBFCCVDZULNOQVSIGQYUSXVCCMUDAFSVWUPTXHZHMFEOIKCKIMNQZBPTLGTTMRJOMHXJXXCZBQHFZPDTBMLBZTXWAEYKAVARDYUXFHARGEDNBEDSTEANCNAYAJFOZLVHQECSGXDXEVTJROJYQKJSELRWCDUIDEPRIVFIIJSLYGBREHNYQSIWNMGSIWQPWBWZNJVPLBLHMFNTTGJHYAKCLOWDJNOPVFPZMUUKOKKYYRSROPWH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.9158408266461282);
    msg.setSource(40049U);
    msg.setSourceEntity(93U);
    msg.setDestination(64718U);
    msg.setDestinationEntity(32U);
    msg.req_id = 57909U;
    msg.status = 202U;
    msg.text.assign("YDCGKTYPQUVJRZOWRSZKCDUIOBPXGPGTMXFYBNBZOAUWILWSJYLMVNKUUOCFFQXZVUEICWAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.47011870514455334);
    msg.setSource(41102U);
    msg.setSourceEntity(134U);
    msg.setDestination(36160U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("VKKWTWOGKNMPTXUSTBCHPLQWAHQZAAPEPLCXUTFWZUPSNVMFFKKAKDVCJHSJLVIJOCDRXJKLWWEBBRQURMZSXELURIDLFUGPXYYTQEJVDNIFNHREDYSJEEWKICYLZKEQXTAJVBQTXSBRHLHMXDFOZIPGHUVMEYNMABYHIZGDUOCZOUNBCGGPXRFZPQTLAZAUTROASTOOOGBEAVCKRFIPMHIGWXGSNQVWJMJILYDMCBBQFDYV");
    msg.links = 1661123933U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.39854409905968813);
    msg.setSource(6431U);
    msg.setSourceEntity(208U);
    msg.setDestination(63572U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("FJEBXCBDQCFCILNAJTOFXTZGYUVCWOTRWMSSMKXBEXBTGFLMMLWHJNSVXROLHYYPTKDNHGQPIQEIANZFHOBBQDDSCDOQZSYAISPOSNGNGUURYOW");
    msg.links = 1254478178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.0538548529496381);
    msg.setSource(6945U);
    msg.setSourceEntity(99U);
    msg.setDestination(9470U);
    msg.setDestinationEntity(105U);
    msg.group_name.assign("WMLKRTLRHYQNAIXQNCLXSZUMITGPQNJBTPEJHFUKSYBLIJGCEHHPFUYDMAVHAXZPGBTTOBHIFMKWXRPTKZRMLUTFRVZCXLREPIOONDDBXFIJCHAGMTVIUNAPWMAHSWZQRGRNUFYWOFWCXBSVWXUCVYPKILEQWYQRTUKOJJQZNDSQGIAADSPWIAS");
    msg.links = 2724605833U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.7862872179537732);
    msg.setSource(2395U);
    msg.setSourceEntity(155U);
    msg.setDestination(59799U);
    msg.setDestinationEntity(48U);
    msg.groupname.assign("OBSSDLEEGKHQNRKWADONPHBFNDXYXYRAFCXXKMNCPBYVTFZTZZMGSTUWGSYAPYPJITGUCU");
    msg.action = 130U;
    msg.grouplist.assign("GYUMOVQQHFRMOKCAYZITSKCFADWNTOHHKVXVAPLMDUQNSQBIKXVTIWOOJBPSEZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.40584868858342527);
    msg.setSource(14121U);
    msg.setSourceEntity(72U);
    msg.setDestination(50283U);
    msg.setDestinationEntity(87U);
    msg.groupname.assign("BLNUGQXJNRAVYLVUFTOIEUPPEBAEMTNTDSBXKMJWZDWBDOEBNGVGFNMEAXZRPHKMCUAFCYFSYRLBARKIQHNURSYVKXWNHLXHUGKWYFUCJDOFVZMGIFHQPXPQMMIZJGHFLTYNVGQHECDIKHCFCWPICTO");
    msg.action = 112U;
    msg.grouplist.assign("VQYCGTSNSLLWWRNIDSNFZXYICNRPKIVTVOPSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.10491489188630154);
    msg.setSource(63967U);
    msg.setSourceEntity(208U);
    msg.setDestination(42239U);
    msg.setDestinationEntity(214U);
    msg.groupname.assign("MMNPGZEDFITGCUWPKZLJMVFAOCKWWYAFXWKHICKNTWVTLVFEUZYUKMXVCPPQAJRQKWAAPULVTBWRXSFEEVIXDFTEOJLLDYAYNXVXGDHBOICHVHGOLBTRRQHSCMD");
    msg.action = 73U;
    msg.grouplist.assign("DZWUEXEFYSDOOMZMHKBUFWUYPHWPIDZILDIRTTDSRWLYJVCRJMPWVQAJERKUJSGIGNEBTUXXSPQHBMRVHZKMQJAAIHMTMOOTTRYLJVBZZQJFBFKSXGHPRLZNYCGCSMMDGOGYXRHETUJS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.44785536777780666);
    msg.setSource(62132U);
    msg.setSourceEntity(245U);
    msg.setDestination(52013U);
    msg.setDestinationEntity(72U);
    msg.id = 119U;
    msg.range = 0.14777801545136549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.9202765378186688);
    msg.setSource(64176U);
    msg.setSourceEntity(200U);
    msg.setDestination(28265U);
    msg.setDestinationEntity(165U);
    msg.id = 159U;
    msg.range = 0.15656146162665507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.592403845896684);
    msg.setSource(17789U);
    msg.setSourceEntity(7U);
    msg.setDestination(63373U);
    msg.setDestinationEntity(48U);
    msg.id = 173U;
    msg.range = 0.5150911062756776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.42534278591676145);
    msg.setSource(59567U);
    msg.setSourceEntity(226U);
    msg.setDestination(53410U);
    msg.setDestinationEntity(161U);
    msg.tx = 209U;
    msg.channel = 115U;
    msg.timer = 55335U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.3991284492616817);
    msg.setSource(1364U);
    msg.setSourceEntity(153U);
    msg.setDestination(44005U);
    msg.setDestinationEntity(43U);
    msg.tx = 247U;
    msg.channel = 186U;
    msg.timer = 20013U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.2247044947832132);
    msg.setSource(30055U);
    msg.setSourceEntity(197U);
    msg.setDestination(34155U);
    msg.setDestinationEntity(230U);
    msg.tx = 26U;
    msg.channel = 193U;
    msg.timer = 56048U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.4609363527096785);
    msg.setSource(40459U);
    msg.setSourceEntity(90U);
    msg.setDestination(21717U);
    msg.setDestinationEntity(193U);
    msg.beacon.assign("ZMQGESGCWRHRGUVACHWJTCYWADCKXGZASWHKIILJLJUKYOHTCRMXBBXMKSLTDQSZFURAELECDDQXPXDWSJPQSNZBYPHKOITFNBJYMZDFEDKASZWFPBCFNWELDVSAJFAVQNXFGJMRFQLIPXIRSEQAUZDKPTCWHZRVIIQOFHEMIOTLBYNATH");
    msg.lat = 0.24613016766053086;
    msg.lon = 0.4221442054247605;
    msg.depth = 0.04109011645226135;
    msg.query_channel = 121U;
    msg.reply_channel = 194U;
    msg.transponder_delay = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.8209378189508503);
    msg.setSource(32710U);
    msg.setSourceEntity(198U);
    msg.setDestination(35159U);
    msg.setDestinationEntity(100U);
    msg.beacon.assign("DKBCNDVMBYSXQLKSHSSGYYPVPSWFOZQJTYBQOKGKOFRXPUTPXLDYAJIKOUGJIJNURANIATAZHSQFILMBXHAKFFOKFFYPRCBSCVXWDGTUQMHQGYYHXFDTIZIT");
    msg.lat = 0.5521444211652853;
    msg.lon = 0.5771306120450724;
    msg.depth = 0.887671096574598;
    msg.query_channel = 79U;
    msg.reply_channel = 42U;
    msg.transponder_delay = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.2787515247622807);
    msg.setSource(38204U);
    msg.setSourceEntity(77U);
    msg.setDestination(281U);
    msg.setDestinationEntity(215U);
    msg.beacon.assign("WODJGGCNAPPJTJOGQRKXMXHTHTLSSEGDQKONHRYWMBGHXQJNTVPWLYHPHHRLOXTFBDYSQIETWBLIASACTRJWMUMUEDTYBJSCIKLQNKVJKQYCZZRSSIVOLFKTWZRVBVBXCAZUUKMDFCBSQEICPNGYXDMMFOCLZNUPYMZETUEBURS");
    msg.lat = 0.5663431876662313;
    msg.lon = 0.019184391537692136;
    msg.depth = 0.37706234611710654;
    msg.query_channel = 96U;
    msg.reply_channel = 248U;
    msg.transponder_delay = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.21938862808073334);
    msg.setSource(31362U);
    msg.setSourceEntity(195U);
    msg.setDestination(39868U);
    msg.setDestinationEntity(215U);
    msg.op = 94U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FFTRVFMRPJFABLMVSYQQKHDEQHGBNAAUYDREDFYOOXSGOCNRXSJJWZIJPRXHEAQUPOFMZQLIZIIPLCXBQCVIOUBAFUGLNVWCXCVTAQWPETGHXRKRCKVCZMUHKVQAECBNHHMWGHSNWIXZPNSIZGTIESQMJRJXUKDVPKUYCTNWDDEHGWWSFXTPKLHDDWUBZYZTLYEOMLTDBICBSKJSJLGWNYUJNRKGGYMVBITFBYDNEMPVMQYA");
    tmp_msg_0.lat = 0.5893830574727182;
    tmp_msg_0.lon = 0.5101732085760997;
    tmp_msg_0.depth = 0.9952226611012988;
    tmp_msg_0.query_channel = 22U;
    tmp_msg_0.reply_channel = 39U;
    tmp_msg_0.transponder_delay = 131U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.9121598083956821);
    msg.setSource(51591U);
    msg.setSourceEntity(176U);
    msg.setDestination(65511U);
    msg.setDestinationEntity(7U);
    msg.op = 239U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OIUKRPQDWSKWPFAWEVMXJAQVUZBZRLKWTVYZXWQQNEYXNULVNBCSJXLDFOVJMNBKUADQYPEORLCDCFCMBCNOUWHAKFEJPVUTXRYTOCADGSQMSWCGOSIJLFKUGZAEOBHWXGZMJSKFGCJQIXPIRYSGNABRHOPCE");
    tmp_msg_0.lat = 0.7310707417383122;
    tmp_msg_0.lon = 0.9191852398455869;
    tmp_msg_0.depth = 0.1527349131168666;
    tmp_msg_0.query_channel = 212U;
    tmp_msg_0.reply_channel = 219U;
    tmp_msg_0.transponder_delay = 189U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.3891797622600349);
    msg.setSource(40653U);
    msg.setSourceEntity(42U);
    msg.setDestination(38456U);
    msg.setDestinationEntity(60U);
    msg.op = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.6634503722986848);
    msg.setSource(41506U);
    msg.setSourceEntity(173U);
    msg.setDestination(11214U);
    msg.setDestinationEntity(184U);
    msg.address = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.5337326922731442);
    msg.setSource(25874U);
    msg.setSourceEntity(199U);
    msg.setDestination(34800U);
    msg.setDestinationEntity(12U);
    msg.address = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.3993970061291755);
    msg.setSource(45591U);
    msg.setSourceEntity(199U);
    msg.setDestination(63873U);
    msg.setDestinationEntity(15U);
    msg.address = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.9995354068073615);
    msg.setSource(12123U);
    msg.setSourceEntity(176U);
    msg.setDestination(28416U);
    msg.setDestinationEntity(99U);
    msg.address = 192U;
    msg.status = 204U;
    msg.range = 0.3733240031892272;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.6097501893306603);
    msg.setSource(52383U);
    msg.setSourceEntity(233U);
    msg.setDestination(16585U);
    msg.setDestinationEntity(138U);
    msg.address = 127U;
    msg.status = 236U;
    msg.range = 0.7726553821588577;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.325770407307134);
    msg.setSource(62694U);
    msg.setSourceEntity(17U);
    msg.setDestination(4594U);
    msg.setDestinationEntity(96U);
    msg.address = 127U;
    msg.status = 235U;
    msg.range = 0.38578204295456453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.9633824097861926);
    msg.setSource(17332U);
    msg.setSourceEntity(122U);
    msg.setDestination(36623U);
    msg.setDestinationEntity(123U);
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("RCVHDFMGTONLBSLRYKVEIWSFWTUUQPSGPBJPUZIVVYQXONATKZGGUJZEFMTBLHEPDOCWIVHDTIAWQZCYTOMCNHSKOPCQZAAIBAMEYZIZPJWFUXSBESNRRRANSLHDKAGXVXGRDQXHUBNTVMMEYSJFHKKINCLBWYGVUKLZSHUBEMDTVTWXYNVQCWLDAPOUIOIJHLQSFEXTOCWROLXRZRNIGQAPHK");
    tmp_msg_0.links = 748466490U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.34624648991523455);
    msg.setSource(59636U);
    msg.setSourceEntity(208U);
    msg.setDestination(37601U);
    msg.setDestinationEntity(168U);
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 192U;
    tmp_msg_0.system.assign("YPNQQPMYGGPICRAVAFFKLDWHGIJLTEOWCYTBVMOEMTKQJZTZHMUNZCOZLVXUW");
    tmp_msg_0.range = 0.9444303066438517;
    IMC::EmergencyControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 52U;
    tmp_tmp_msg_0_0.plan_id.assign("DQVQBBARRRQSJUYDCWEPWUDQVDBOBIAAMR");
    tmp_tmp_msg_0_0.comm_level = 158U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.11586141921066317);
    msg.setSource(25933U);
    msg.setSourceEntity(164U);
    msg.setDestination(41603U);
    msg.setDestinationEntity(91U);
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 40328U;
    tmp_msg_0.name.assign("YZCJYNNOYWFQXPHXNZBPTOALAFGWWWXQCGJOGXONQPXSSXEBBCRXFVDAVKHPTZMZTKVXORFMSQLEBBVVBQGSPMIVRHWEHIPDWKTSDVASKPWGTIHGHASWHFTZMFCJAFLAJEROXUIYMVTMQBTWYTGDQLQJDZKB");
    tmp_msg_0.custom.assign("FDKABASWLEUGFEBEDTSMXCGKAPJMSKAULODKKGSOMSGLYNIOAMUOGSVMIFOYJPXSXWRBKFJVPDRZTYCUJFBYHARFVKDHDOZZBCOAMUINVWYEWKUGXBJLTNZBQRRAYRCTJIRQEQNLAMIHWPXOTSJLYFPNJBQCNNQXBUPIZJXTDBWLOLQHMCKUZKWTCPNESUTJDRPEUNIEVV");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.9217662635859506);
    msg.setSource(4961U);
    msg.setSourceEntity(2U);
    msg.setDestination(21408U);
    msg.setDestinationEntity(250U);
    msg.enable = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.3074697061469036);
    msg.setSource(14358U);
    msg.setSourceEntity(238U);
    msg.setDestination(34763U);
    msg.setDestinationEntity(12U);
    msg.enable = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.9677654109749604);
    msg.setSource(1173U);
    msg.setSourceEntity(165U);
    msg.setDestination(21710U);
    msg.setDestinationEntity(88U);
    msg.enable = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.17215454118353102);
    msg.setSource(3481U);
    msg.setSourceEntity(67U);
    msg.setDestination(47895U);
    msg.setDestinationEntity(223U);
    msg.summary = 71U;
    msg.level = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.6846611012087858);
    msg.setSource(41862U);
    msg.setSourceEntity(115U);
    msg.setDestination(45675U);
    msg.setDestinationEntity(75U);
    msg.summary = 90U;
    msg.level = 201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.29496374667960057);
    msg.setSource(40978U);
    msg.setSourceEntity(239U);
    msg.setDestination(10543U);
    msg.setDestinationEntity(57U);
    msg.summary = 116U;
    msg.level = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.1563217226400736);
    msg.setSource(34262U);
    msg.setSourceEntity(202U);
    msg.setDestination(39011U);
    msg.setDestinationEntity(30U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.21142395369750167);
    msg.setSource(60397U);
    msg.setSourceEntity(114U);
    msg.setDestination(7590U);
    msg.setDestinationEntity(146U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.1510139999648693);
    msg.setSource(64661U);
    msg.setSourceEntity(18U);
    msg.setDestination(12063U);
    msg.setDestinationEntity(62U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.9336708057327959);
    msg.setSource(50077U);
    msg.setSourceEntity(9U);
    msg.setDestination(51751U);
    msg.setDestinationEntity(152U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.05515903985014148);
    msg.setSource(21558U);
    msg.setSourceEntity(177U);
    msg.setDestination(17517U);
    msg.setDestinationEntity(29U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.7068062751873364);
    msg.setSource(22994U);
    msg.setSourceEntity(20U);
    msg.setDestination(47696U);
    msg.setDestinationEntity(129U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.8302537057945297);
    msg.setSource(16222U);
    msg.setSourceEntity(72U);
    msg.setDestination(1354U);
    msg.setDestinationEntity(64U);
    msg.op = 20U;
    msg.system.assign("SNXLSQDZFKWHQZRDQIUBVPTYGAMFWJPGHKPERMZCUULGFYCKOPYBFWRIHJPLSCTPJRNUSMITCKPEMOBJAROJQMVRMEKWWWJZHGQSWCXDNOGRXAEVI");
    msg.range = 0.19012398008009868;
    IMC::QueryEntityState tmp_msg_0;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.04660497369810068);
    msg.setSource(61069U);
    msg.setSourceEntity(227U);
    msg.setDestination(6691U);
    msg.setDestinationEntity(233U);
    msg.op = 96U;
    msg.system.assign("XSFBZLMUMMOLKMRPGDNRFNDAWGWKZFZWUSLVIKIAXHONHUCDTRKCPYKYXVQFYYJGHGGRSTHGBRZBFUCIS");
    msg.range = 0.9230949256768743;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4336038223753673;
    tmp_msg_0.y = 0.866606228785626;
    tmp_msg_0.z = 0.5267218015914369;
    tmp_msg_0.phi = 0.6773457826774052;
    tmp_msg_0.theta = 0.8218089311925095;
    tmp_msg_0.psi = 0.737291082046163;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.02555080492882722);
    msg.setSource(1244U);
    msg.setSourceEntity(108U);
    msg.setDestination(36942U);
    msg.setDestinationEntity(189U);
    msg.op = 99U;
    msg.system.assign("ISZMKFTJTJFFRCCBVEKNMZOQKFQYOPNTBSWODBYZARVRVPCMOVIGWDYDGQJHOJEGGWZXUVOFGWLAMLLQZMVWKUAFRGHMQNNCWVUCHPBXLTSPITSRKTXXYDHDTYNTOKIQBVXNZWNISRHSKVUGZPHEDQWRYXAUUUYYPEGWAXQJBLIWMAKEDLBNMSKCQQPGIFFNCVFNXJEHARXORCCEACTJUDSLPYDAJK");
    msg.range = 0.010552241410304752;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("KTKIEZHAHQPDLKPUSMQQUMXBSOMRIJUHMCXYDKEKVWMEBCIMDZSKJHHQ");
    tmp_msg_0.text.assign("NBPUOTWXIQYDDSREVZFANNWMCTZZNJZYPULOEUTXXKVGWLEUIIYSQJXVNBDUIRWOXWDFAV");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.4651433526593183);
    msg.setSource(12847U);
    msg.setSourceEntity(64U);
    msg.setDestination(3106U);
    msg.setDestinationEntity(53U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.3176984284583414);
    msg.setSource(20888U);
    msg.setSourceEntity(82U);
    msg.setDestination(18354U);
    msg.setDestinationEntity(249U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.6018111203797243);
    msg.setSource(64962U);
    msg.setSourceEntity(65U);
    msg.setDestination(58609U);
    msg.setDestinationEntity(109U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.9360251251223451);
    msg.setSource(6715U);
    msg.setSourceEntity(68U);
    msg.setDestination(12742U);
    msg.setDestinationEntity(148U);
    msg.list.assign("QJCZLFYOZPMLBSVKGQXYMYERFANNVDSYAOLWWSUCRIPTMDSOPATFGUOSHCLSNQIKUHWKBQJJYKPFFCRMMKTQNFSMNWCWJZBCXEITHHBORVLVBNRPGSVCRJFWAJVHMIHOIXFZGBDZGWYUDLWPEPHCNRGJDTIDKMTHECEXYSTDYEXAQQOXTDKZPAZZLUVRNXEOYWQKBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.8434560677124723);
    msg.setSource(12094U);
    msg.setSourceEntity(137U);
    msg.setDestination(16368U);
    msg.setDestinationEntity(69U);
    msg.list.assign("NSLBAOVTHVCSRIWMXDIFQZXYNZUBSPFHPRJQCVPTMYJVWBLERCJUNZBEEJERGUOLOYTOWXOKGQOXBQHGJBCYBMGLAZNSXKYFFKRRUHTTUHVLFWZZQHGUJOEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.7490027961401748);
    msg.setSource(42488U);
    msg.setSourceEntity(7U);
    msg.setDestination(13689U);
    msg.setDestinationEntity(118U);
    msg.list.assign("JSONLEADTNIGYHXBAGXYMKIMZFPCARFBWPUUKMIHFBXKSQLUTZXIZXZCMURADWHRHQKANJJPAVMPHCRHKCXWIUQTQAYUXORDSFZZKAWEVKWIXAOLXMUEGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.9993955005661047);
    msg.setSource(4557U);
    msg.setSourceEntity(248U);
    msg.setDestination(17986U);
    msg.setDestinationEntity(36U);
    msg.value = 7234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.4339208540409678);
    msg.setSource(46121U);
    msg.setSourceEntity(21U);
    msg.setDestination(6522U);
    msg.setDestinationEntity(211U);
    msg.value = -24595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.38021157565041097);
    msg.setSource(28650U);
    msg.setSourceEntity(214U);
    msg.setDestination(5774U);
    msg.setDestinationEntity(129U);
    msg.value = 1269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.4322021804207419);
    msg.setSource(22462U);
    msg.setSourceEntity(31U);
    msg.setDestination(61457U);
    msg.setDestinationEntity(186U);
    msg.value = 0.4309789134413572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.6377040649831917);
    msg.setSource(65240U);
    msg.setSourceEntity(1U);
    msg.setDestination(55711U);
    msg.setDestinationEntity(197U);
    msg.value = 0.928015269904267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.9877736501508314);
    msg.setSource(6425U);
    msg.setSourceEntity(67U);
    msg.setDestination(36099U);
    msg.setDestinationEntity(14U);
    msg.value = 0.3252740055050639;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.46350923561311586);
    msg.setSource(8689U);
    msg.setSourceEntity(4U);
    msg.setDestination(53957U);
    msg.setDestinationEntity(66U);
    msg.value = 0.26813654721173763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.8355886011545915);
    msg.setSource(31922U);
    msg.setSourceEntity(30U);
    msg.setDestination(38425U);
    msg.setDestinationEntity(196U);
    msg.value = 0.3720130341444965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.9649113178588266);
    msg.setSource(65490U);
    msg.setSourceEntity(162U);
    msg.setDestination(16307U);
    msg.setDestinationEntity(113U);
    msg.value = 0.9907738959117417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.06647069574681452);
    msg.setSource(28795U);
    msg.setSourceEntity(177U);
    msg.setDestination(45570U);
    msg.setDestinationEntity(68U);
    msg.validity = 53513U;
    msg.type = 146U;
    msg.utc_year = 46158U;
    msg.utc_month = 180U;
    msg.utc_day = 25U;
    msg.utc_time = 0.0782827764555124;
    msg.lat = 0.30155282077374723;
    msg.lon = 0.47601480511912997;
    msg.height = 0.16895436736197855;
    msg.satellites = 219U;
    msg.cog = 0.5330173112074462;
    msg.sog = 0.51451429375312;
    msg.hdop = 0.394412894908438;
    msg.vdop = 0.47322140377175137;
    msg.hacc = 0.6996193288944343;
    msg.vacc = 0.5862252348358569;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.7377573335179466);
    msg.setSource(48978U);
    msg.setSourceEntity(120U);
    msg.setDestination(64566U);
    msg.setDestinationEntity(194U);
    msg.validity = 18154U;
    msg.type = 67U;
    msg.utc_year = 14720U;
    msg.utc_month = 43U;
    msg.utc_day = 249U;
    msg.utc_time = 0.515982727432287;
    msg.lat = 0.4377347037156294;
    msg.lon = 0.6415172419538886;
    msg.height = 0.3281231552517967;
    msg.satellites = 204U;
    msg.cog = 0.7946514367819976;
    msg.sog = 0.054516036252523103;
    msg.hdop = 0.28066588366652245;
    msg.vdop = 0.18743269081456626;
    msg.hacc = 0.25073770836948595;
    msg.vacc = 0.5351103910849231;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.5575758826807091);
    msg.setSource(50602U);
    msg.setSourceEntity(225U);
    msg.setDestination(63166U);
    msg.setDestinationEntity(228U);
    msg.validity = 47651U;
    msg.type = 133U;
    msg.utc_year = 56954U;
    msg.utc_month = 157U;
    msg.utc_day = 42U;
    msg.utc_time = 0.7625071621991842;
    msg.lat = 0.9610084255079802;
    msg.lon = 0.6195853030840269;
    msg.height = 0.7736927353048653;
    msg.satellites = 202U;
    msg.cog = 0.9563446350338914;
    msg.sog = 0.7862050718897079;
    msg.hdop = 0.09182313509890527;
    msg.vdop = 0.8586258641691903;
    msg.hacc = 0.6854591082793877;
    msg.vacc = 0.4444130987651843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.61024915182657);
    msg.setSource(44114U);
    msg.setSourceEntity(93U);
    msg.setDestination(6329U);
    msg.setDestinationEntity(229U);
    msg.time = 0.03461940611474312;
    msg.phi = 0.6202668163165599;
    msg.theta = 0.47894420424844075;
    msg.psi = 0.25496213590939487;
    msg.psi_magnetic = 0.660979402530025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.9459872843129831);
    msg.setSource(52729U);
    msg.setSourceEntity(108U);
    msg.setDestination(19550U);
    msg.setDestinationEntity(8U);
    msg.time = 0.47126705762543775;
    msg.phi = 0.48397584043060116;
    msg.theta = 0.6236805725160681;
    msg.psi = 0.24551520641179858;
    msg.psi_magnetic = 0.2830615567400121;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.7887094906767063);
    msg.setSource(43854U);
    msg.setSourceEntity(248U);
    msg.setDestination(23868U);
    msg.setDestinationEntity(231U);
    msg.time = 0.4755030198354997;
    msg.phi = 0.47948405003460604;
    msg.theta = 0.2305693502013919;
    msg.psi = 0.19532514861365358;
    msg.psi_magnetic = 0.27652129696699357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.48198460756302275);
    msg.setSource(18494U);
    msg.setSourceEntity(8U);
    msg.setDestination(35973U);
    msg.setDestinationEntity(185U);
    msg.time = 0.8139720773928657;
    msg.x = 0.11667098203321069;
    msg.y = 0.930156684978677;
    msg.z = 0.3904352964718041;
    msg.timestep = 0.8591737352361192;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.6310703155114277);
    msg.setSource(38519U);
    msg.setSourceEntity(70U);
    msg.setDestination(36412U);
    msg.setDestinationEntity(118U);
    msg.time = 0.790428483169422;
    msg.x = 0.33073988384105646;
    msg.y = 0.591508472372181;
    msg.z = 0.004897734495365902;
    msg.timestep = 0.36544464888988615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.31560672096907283);
    msg.setSource(40308U);
    msg.setSourceEntity(31U);
    msg.setDestination(45563U);
    msg.setDestinationEntity(210U);
    msg.time = 0.5630548292520683;
    msg.x = 0.4350634653910227;
    msg.y = 0.6145184506640372;
    msg.z = 0.12733251208825958;
    msg.timestep = 0.42030115715434035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.5593303784263235);
    msg.setSource(52552U);
    msg.setSourceEntity(89U);
    msg.setDestination(32435U);
    msg.setDestinationEntity(192U);
    msg.time = 0.5452235796804177;
    msg.x = 0.4260679799164302;
    msg.y = 0.4077065459930608;
    msg.z = 0.7515552891445992;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.06016874133126682);
    msg.setSource(3515U);
    msg.setSourceEntity(245U);
    msg.setDestination(5337U);
    msg.setDestinationEntity(185U);
    msg.time = 0.32184605053525184;
    msg.x = 0.36913293938126046;
    msg.y = 0.6852188162705521;
    msg.z = 0.34951833825224454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.5388756823381093);
    msg.setSource(48050U);
    msg.setSourceEntity(91U);
    msg.setDestination(38266U);
    msg.setDestinationEntity(54U);
    msg.time = 0.48063782100898744;
    msg.x = 0.9668202742676393;
    msg.y = 0.8645640360245325;
    msg.z = 0.7798651363429203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.5339692179036459);
    msg.setSource(13703U);
    msg.setSourceEntity(140U);
    msg.setDestination(23298U);
    msg.setDestinationEntity(27U);
    msg.time = 0.703311300642991;
    msg.x = 0.17357237940196724;
    msg.y = 0.7046708785061756;
    msg.z = 0.9828482468426382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.16751885777184428);
    msg.setSource(62092U);
    msg.setSourceEntity(188U);
    msg.setDestination(56290U);
    msg.setDestinationEntity(50U);
    msg.time = 0.6068518149209505;
    msg.x = 0.5511529351546345;
    msg.y = 0.20705987638430468;
    msg.z = 0.3023720984607584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.9793477959740723);
    msg.setSource(64136U);
    msg.setSourceEntity(117U);
    msg.setDestination(29478U);
    msg.setDestinationEntity(208U);
    msg.time = 0.8785974353349385;
    msg.x = 0.357499709966284;
    msg.y = 0.5329591467441865;
    msg.z = 0.6214100103507062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.8513096601638367);
    msg.setSource(19242U);
    msg.setSourceEntity(79U);
    msg.setDestination(48132U);
    msg.setDestinationEntity(249U);
    msg.time = 0.44505447556198596;
    msg.x = 0.7332775304011697;
    msg.y = 0.7477136643303464;
    msg.z = 0.05473017059385066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.006252280478513561);
    msg.setSource(4278U);
    msg.setSourceEntity(78U);
    msg.setDestination(57382U);
    msg.setDestinationEntity(33U);
    msg.time = 0.24877463199707672;
    msg.x = 0.8917675484850712;
    msg.y = 0.4942549766803397;
    msg.z = 0.310261167790957;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.3600898158771888);
    msg.setSource(23673U);
    msg.setSourceEntity(214U);
    msg.setDestination(37765U);
    msg.setDestinationEntity(113U);
    msg.time = 0.3227490852604875;
    msg.x = 0.2901527760725995;
    msg.y = 0.29157054148023964;
    msg.z = 0.3202637025691132;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.2124694673001989);
    msg.setSource(2148U);
    msg.setSourceEntity(227U);
    msg.setDestination(61123U);
    msg.setDestinationEntity(183U);
    msg.validity = 143U;
    msg.x = 0.5808092308942022;
    msg.y = 0.3715515891185246;
    msg.z = 0.48156969401081395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.05068379923365007);
    msg.setSource(16634U);
    msg.setSourceEntity(147U);
    msg.setDestination(45501U);
    msg.setDestinationEntity(68U);
    msg.validity = 142U;
    msg.x = 0.9171775098709399;
    msg.y = 0.2618656650822624;
    msg.z = 0.9367345261152087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.8041878029983078);
    msg.setSource(33552U);
    msg.setSourceEntity(64U);
    msg.setDestination(25422U);
    msg.setDestinationEntity(43U);
    msg.validity = 126U;
    msg.x = 0.7700513371687538;
    msg.y = 0.8916309911645928;
    msg.z = 0.3150730371986378;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.09920416050306247);
    msg.setSource(60862U);
    msg.setSourceEntity(135U);
    msg.setDestination(14807U);
    msg.setDestinationEntity(65U);
    msg.validity = 158U;
    msg.x = 0.6982636693584158;
    msg.y = 0.650558160017874;
    msg.z = 0.4991550183019009;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.19292561507902495);
    msg.setSource(6685U);
    msg.setSourceEntity(193U);
    msg.setDestination(42835U);
    msg.setDestinationEntity(71U);
    msg.validity = 202U;
    msg.x = 0.32007125927727065;
    msg.y = 0.015139517457252838;
    msg.z = 0.9930507340329203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.25629403822870755);
    msg.setSource(24075U);
    msg.setSourceEntity(60U);
    msg.setDestination(41661U);
    msg.setDestinationEntity(207U);
    msg.validity = 246U;
    msg.x = 0.6664271048624586;
    msg.y = 0.8087700568089459;
    msg.z = 0.9705778738681966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.6240018283026477);
    msg.setSource(2775U);
    msg.setSourceEntity(239U);
    msg.setDestination(53768U);
    msg.setDestinationEntity(218U);
    msg.time = 0.942276691167952;
    msg.x = 0.4731307583231049;
    msg.y = 0.9759933360394738;
    msg.z = 0.600403899981682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.9947250906979797);
    msg.setSource(3892U);
    msg.setSourceEntity(197U);
    msg.setDestination(3992U);
    msg.setDestinationEntity(172U);
    msg.time = 0.6468615445808472;
    msg.x = 0.6185775468278472;
    msg.y = 0.8768536684643561;
    msg.z = 0.009020577540301389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.26498915812537027);
    msg.setSource(59834U);
    msg.setSourceEntity(228U);
    msg.setDestination(15422U);
    msg.setDestinationEntity(240U);
    msg.time = 0.5131168725475993;
    msg.x = 0.07245026534297017;
    msg.y = 0.6082383005873198;
    msg.z = 0.7671507997515301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.7456073173336981);
    msg.setSource(52730U);
    msg.setSourceEntity(73U);
    msg.setDestination(58643U);
    msg.setDestinationEntity(219U);
    msg.validity = 213U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6233871790765095;
    tmp_msg_0.y = 0.3801962944302857;
    tmp_msg_0.z = 0.21174957657866467;
    tmp_msg_0.phi = 0.11392538606362068;
    tmp_msg_0.theta = 0.10747901875237431;
    tmp_msg_0.psi = 0.3311709434281058;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.19330039655634823;
    tmp_msg_1.beam_height = 0.28202929690448497;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8544415306399101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.1626955528430506);
    msg.setSource(46711U);
    msg.setSourceEntity(184U);
    msg.setDestination(48998U);
    msg.setDestinationEntity(170U);
    msg.validity = 26U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7068120599081904;
    tmp_msg_0.y = 0.2200336250509759;
    tmp_msg_0.z = 0.8207401854936394;
    tmp_msg_0.phi = 0.3428270975215755;
    tmp_msg_0.theta = 0.03526700864045418;
    tmp_msg_0.psi = 0.43316621719392245;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7250311601128225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.21011683304038642);
    msg.setSource(37035U);
    msg.setSourceEntity(179U);
    msg.setDestination(45255U);
    msg.setDestinationEntity(119U);
    msg.validity = 99U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6599535560418892;
    tmp_msg_0.y = 0.25261223257419785;
    tmp_msg_0.z = 0.7427299701375789;
    tmp_msg_0.phi = 0.91632385523769;
    tmp_msg_0.theta = 0.776589611090018;
    tmp_msg_0.psi = 0.6604059661193693;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.774680421940209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.37515853070042204);
    msg.setSource(54814U);
    msg.setSourceEntity(114U);
    msg.setDestination(56181U);
    msg.setDestinationEntity(113U);
    msg.value = 0.4135284663965957;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.4314606215758946);
    msg.setSource(51787U);
    msg.setSourceEntity(254U);
    msg.setDestination(47239U);
    msg.setDestinationEntity(253U);
    msg.value = 0.4732749982466192;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.863247956009209);
    msg.setSource(4002U);
    msg.setSourceEntity(102U);
    msg.setDestination(11734U);
    msg.setDestinationEntity(78U);
    msg.value = 0.405355717270772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.8008455860732461);
    msg.setSource(18612U);
    msg.setSourceEntity(94U);
    msg.setDestination(31061U);
    msg.setDestinationEntity(79U);
    msg.value = 0.312889389499416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.6075026545155815);
    msg.setSource(47798U);
    msg.setSourceEntity(51U);
    msg.setDestination(7667U);
    msg.setDestinationEntity(211U);
    msg.value = 0.049522761273240956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.7855712734750568);
    msg.setSource(7360U);
    msg.setSourceEntity(168U);
    msg.setDestination(29344U);
    msg.setDestinationEntity(194U);
    msg.value = 0.48413914095315724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.9073291297074116);
    msg.setSource(1605U);
    msg.setSourceEntity(74U);
    msg.setDestination(41883U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5721285007085231;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.814386955993187);
    msg.setSource(45601U);
    msg.setSourceEntity(112U);
    msg.setDestination(28105U);
    msg.setDestinationEntity(2U);
    msg.value = 0.5172263494961906;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.42116324696805507);
    msg.setSource(42428U);
    msg.setSourceEntity(153U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(135U);
    msg.value = 0.9302525137527353;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.866108310461239);
    msg.setSource(64065U);
    msg.setSourceEntity(159U);
    msg.setDestination(55064U);
    msg.setDestinationEntity(121U);
    msg.value = 0.06522420627850856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.7154406288209277);
    msg.setSource(58322U);
    msg.setSourceEntity(235U);
    msg.setDestination(13763U);
    msg.setDestinationEntity(133U);
    msg.value = 0.7817809744074267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.17737391367098765);
    msg.setSource(59437U);
    msg.setSourceEntity(184U);
    msg.setDestination(58668U);
    msg.setDestinationEntity(43U);
    msg.value = 0.7413295400362283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.7955743145189602);
    msg.setSource(31351U);
    msg.setSourceEntity(254U);
    msg.setDestination(42176U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5700021875429854;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.22680701136428627);
    msg.setSource(49452U);
    msg.setSourceEntity(220U);
    msg.setDestination(39186U);
    msg.setDestinationEntity(235U);
    msg.value = 0.5641162196310258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.018165416936100964);
    msg.setSource(64424U);
    msg.setSourceEntity(57U);
    msg.setDestination(37134U);
    msg.setDestinationEntity(35U);
    msg.value = 0.6460995976885403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.8429456389318791);
    msg.setSource(57480U);
    msg.setSourceEntity(214U);
    msg.setDestination(22694U);
    msg.setDestinationEntity(24U);
    msg.value = 0.12261818897913379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.42493498474854396);
    msg.setSource(466U);
    msg.setSourceEntity(229U);
    msg.setDestination(52595U);
    msg.setDestinationEntity(87U);
    msg.value = 0.3825760107962717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.8550229822723763);
    msg.setSource(15471U);
    msg.setSourceEntity(49U);
    msg.setDestination(51836U);
    msg.setDestinationEntity(51U);
    msg.value = 0.895615882464783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.13639006802182851);
    msg.setSource(57028U);
    msg.setSourceEntity(168U);
    msg.setDestination(20612U);
    msg.setDestinationEntity(221U);
    msg.value = 0.014269223851763435;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.13249959563808478);
    msg.setSource(59363U);
    msg.setSourceEntity(28U);
    msg.setDestination(5822U);
    msg.setDestinationEntity(94U);
    msg.value = 0.6716789573377526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.8762114979135884);
    msg.setSource(23629U);
    msg.setSourceEntity(115U);
    msg.setDestination(27402U);
    msg.setDestinationEntity(38U);
    msg.value = 0.25872320629697454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.5086035672915777);
    msg.setSource(51386U);
    msg.setSourceEntity(64U);
    msg.setDestination(4141U);
    msg.setDestinationEntity(13U);
    msg.value = 0.5822569631454235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.3910624374739615);
    msg.setSource(13345U);
    msg.setSourceEntity(70U);
    msg.setDestination(42869U);
    msg.setDestinationEntity(180U);
    msg.value = 0.4321368731217089;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.5429094237119981);
    msg.setSource(45250U);
    msg.setSourceEntity(53U);
    msg.setDestination(27104U);
    msg.setDestinationEntity(47U);
    msg.value = 0.2765038282829624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.6569671068009012);
    msg.setSource(55368U);
    msg.setSourceEntity(78U);
    msg.setDestination(5173U);
    msg.setDestinationEntity(200U);
    msg.direction = 0.8343645882846373;
    msg.speed = 0.16309366718512297;
    msg.turbulence = 0.502917394814244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.9824317461995223);
    msg.setSource(35746U);
    msg.setSourceEntity(66U);
    msg.setDestination(3644U);
    msg.setDestinationEntity(31U);
    msg.direction = 0.1814054485302301;
    msg.speed = 0.6649098596847951;
    msg.turbulence = 0.37418981505115334;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.02171128242923659);
    msg.setSource(29779U);
    msg.setSourceEntity(66U);
    msg.setDestination(33003U);
    msg.setDestinationEntity(111U);
    msg.direction = 0.6520492739039644;
    msg.speed = 0.6545178130029958;
    msg.turbulence = 0.5090989097222961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.39347760090752726);
    msg.setSource(61332U);
    msg.setSourceEntity(5U);
    msg.setDestination(23618U);
    msg.setDestinationEntity(196U);
    msg.value = 0.3895926345852917;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.2859953220099498);
    msg.setSource(37290U);
    msg.setSourceEntity(185U);
    msg.setDestination(47018U);
    msg.setDestinationEntity(92U);
    msg.value = 0.02855678899789582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.41996914199320934);
    msg.setSource(14439U);
    msg.setSourceEntity(220U);
    msg.setDestination(60783U);
    msg.setDestinationEntity(142U);
    msg.value = 0.7926032603249118;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.3102022203241327);
    msg.setSource(61204U);
    msg.setSourceEntity(49U);
    msg.setDestination(10988U);
    msg.setDestinationEntity(122U);
    msg.value.assign("TMJYOYXYTEMTGFDPOWRINDIXULYWMXUQEVZZJKWSNMUCIYWYILXVZVTXKBBCHQJHVUOBHGPPQRSNCIBCVPRTSREFLZTZKDFYCMKVSQCRGURFMPXKXWINHHLZTXDWAEKBALVPRYZESTRAPVNFVLUOEEDFQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.7706085881018019);
    msg.setSource(61409U);
    msg.setSourceEntity(149U);
    msg.setDestination(4790U);
    msg.setDestinationEntity(188U);
    msg.value.assign("QXIXEVZGCVRAZTNFNMLODQKPYFQDOZNARGNT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.24366741896971178);
    msg.setSource(26562U);
    msg.setSourceEntity(225U);
    msg.setDestination(54038U);
    msg.setDestinationEntity(62U);
    msg.value.assign("FTBAOQERVUEOUSODOYZMDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.7566276857276089);
    msg.setSource(43846U);
    msg.setSourceEntity(8U);
    msg.setDestination(25084U);
    msg.setDestinationEntity(154U);
    const char tmp_msg_0[] = {-73, 64, 54, -64, -125, 20, 26, -33, 123, -8, 30, 91, -39, 12, -50, -76, 76, -82, 5, -97, -14, -40, 22, 81, 87, 15, -45, 117, -90, 18, 117, 84, -102, 83, 38, 98, -8, -114, -112, -38, -123, -65, 73, 10, 48, -89, -114, 16, -31, 83, 100, 31, -7, -115, 71, 59, -46, -65, -84, -34, -44, -53, -58, 126, 86, 126, 61, 100, -7, 16, 13, -57, -25, 62, 66, 125, -121, 56, 38, 50, 37, 57, 19, -46, 35, -120, 73, -73, 80, -37, -4, 64, -126, -109, -92, 60, -96, -21, 88, -91, -124, 74, 47, -94, 109, -73, 58, -121, -50, 62, 114, 41, 104, -48, 121, 73, -54, 1, -17, 45};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.3645841709612643);
    msg.setSource(27908U);
    msg.setSourceEntity(134U);
    msg.setDestination(36932U);
    msg.setDestinationEntity(110U);
    const char tmp_msg_0[] = {-66, 62, -1, 7, -125, -127, 26, 109, -28, 36, 24, 34, -15, 118, -105, 93, 5, 35, 24, 100, 10, -54, -107, -42, 77, 90, 49, 6, 122, -10, 44, 4, -67, -21, -75, -103, -48, 13, 70, 58, -39, 114, 74, 65, 72, 87, -99, -67, -80, 55, -47, -119, 25, -21, 2, -50, -64, 7, -78, -24, 59, 70, 19, -93, 115, -93, 13, 119, 88, 108, 39, -68, -102, 86, -71, -87, -69, 90, -115, -5, 78, -88, -5, -99, 6, 60, -46, 109, 39, 11, -71, -8, 22, 94, 69, -22, 126, -41, 54, 98, -109, -111, -125, -124, -42, 18, -27, 74, 101, 105, -122, 56, 125, -56, 29, -116, -8, 114, -128, -123, 99, 125, -63, 14, 122, -109, 0, 17, 116, 53, 126, -107, 77, 126, -116, -4, -47, 6};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.4163212721642696);
    msg.setSource(29321U);
    msg.setSourceEntity(56U);
    msg.setDestination(48232U);
    msg.setDestinationEntity(147U);
    const char tmp_msg_0[] = {91, 81, -100, 126, -9, 86, -104, -47, 37, 68, -121, -65, 65, -107, 68, 83, -100, 4, -97, 79, 39, 29, -67, 67, 13, -110, -104, -90, 44, 102, 41, -37, 29, -12, 9, -91, 20, -80, -114, 0, 46, 18, -81, -41, 71, 66, -108, -2, -22, -21, -112, 14, -110, 7, 87, 9, -106, 115, -21, 27, 5, -56, 77, -4, 105, 2, 40, 20, 47, -12, 12, -95, -39, 99, 60, 79, -41, -12, 80, 108, 114, -83, -33, -114, -50, 74, 90, -73, 0, 107, -82, -12, 7, 61, -35, 67, 37, -18, -49, 38, -104, -2, 78, 51, 50, 109};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.7981069964480096);
    msg.setSource(53224U);
    msg.setSourceEntity(30U);
    msg.setDestination(37680U);
    msg.setDestinationEntity(47U);
    msg.frequency = 337602667U;
    msg.min_range = 39847U;
    msg.max_range = 13334U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.45629153828211366);
    msg.setSource(64701U);
    msg.setSourceEntity(198U);
    msg.setDestination(53192U);
    msg.setDestinationEntity(169U);
    msg.frequency = 2819909734U;
    msg.min_range = 52656U;
    msg.max_range = 45797U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.11729153250808333);
    msg.setSource(51076U);
    msg.setSourceEntity(222U);
    msg.setDestination(24930U);
    msg.setDestinationEntity(124U);
    msg.frequency = 3024729631U;
    msg.min_range = 19134U;
    msg.max_range = 5400U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.2682011471877097);
    msg.setSource(20145U);
    msg.setSourceEntity(245U);
    msg.setDestination(2940U);
    msg.setDestinationEntity(228U);
    msg.type = 73U;
    msg.frequency = 1988618951U;
    msg.min_range = 8639U;
    msg.max_range = 53449U;
    msg.bits_per_point = 207U;
    msg.scale_factor = 0.4967303597783258;
    const char tmp_msg_0[] = {-93, -106, -31, 14, -89, -71, 108, -80, 96, 101, 126, -40, 73, -32, 104, 75, -90, 50, 58, -115, -55, -52, 67, 111, -65, -34, 78, 18, -111, 21, -114, -85, -31, -9, 105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.9503778522849695);
    msg.setSource(37641U);
    msg.setSourceEntity(167U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(149U);
    msg.type = 254U;
    msg.frequency = 3039774807U;
    msg.min_range = 24159U;
    msg.max_range = 65017U;
    msg.bits_per_point = 127U;
    msg.scale_factor = 0.9645985144918401;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.03600641720165909;
    tmp_msg_0.beam_height = 0.08267364205941674;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {29, -53, 114, 99, -104, -5, -5, 33, -16, -109, 80, -77, 40, 111, -13, 77, 52, 98, 120, -67, 44, -60, -87, -25, -10, 69, -84, -119, 125, 74, 42, 94, -50, -38, 19, 75};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.42177841271651584);
    msg.setSource(40789U);
    msg.setSourceEntity(73U);
    msg.setDestination(23578U);
    msg.setDestinationEntity(136U);
    msg.type = 165U;
    msg.frequency = 1267298726U;
    msg.min_range = 46242U;
    msg.max_range = 52132U;
    msg.bits_per_point = 241U;
    msg.scale_factor = 0.37125167692423644;
    const char tmp_msg_0[] = {78, -31, 58, 72, 31, 85, -43, -97, -44, -27, 97, -121, -126, 6, 52, 57, 95, 25, -106, 92, -114, 68, 108, -89, 87, -110, 54, -85, 109, -62, -109, 113, 111, -101, 17, 35, 38, 105, -37, -5, -40, -22, -126, 18, 11, 26, -51, 45, -114, 51, 87, 33, -12, -54, 48, -43, 100};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.8068632980248556);
    msg.setSource(26937U);
    msg.setSourceEntity(132U);
    msg.setDestination(26878U);
    msg.setDestinationEntity(250U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.11313913630000827);
    msg.setSource(28230U);
    msg.setSourceEntity(250U);
    msg.setDestination(65342U);
    msg.setDestinationEntity(120U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.03613213657875136);
    msg.setSource(26897U);
    msg.setSourceEntity(207U);
    msg.setDestination(48749U);
    msg.setDestinationEntity(51U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.8915005216793495);
    msg.setSource(52555U);
    msg.setSourceEntity(72U);
    msg.setDestination(43140U);
    msg.setDestinationEntity(236U);
    msg.op = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.4125399180799657);
    msg.setSource(30596U);
    msg.setSourceEntity(97U);
    msg.setDestination(23245U);
    msg.setDestinationEntity(192U);
    msg.op = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.4146652947649848);
    msg.setSource(26572U);
    msg.setSourceEntity(106U);
    msg.setDestination(25703U);
    msg.setDestinationEntity(115U);
    msg.op = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.755454163297884);
    msg.setSource(7287U);
    msg.setSourceEntity(180U);
    msg.setDestination(61280U);
    msg.setDestinationEntity(150U);
    msg.value = 0.8745224378923623;
    msg.confidence = 0.6671891238190694;
    msg.opmodes.assign("JBRDZRVNTOCNQYXYMFIJUTKPNCRBEYUGHJPYUYDTSJXJYDCUFOBOOKLSSFYAMVBDTPNGNMSOSNGIMEEOMLTQWOWCLRABPETNCURPGWXPUDQFMFRKHDJLAWIAAHWPQZFBEVMVAQZQGBVOJPKUYQLQEXJHMRXIXEIBSITTZHVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.5088315506831823);
    msg.setSource(28149U);
    msg.setSourceEntity(142U);
    msg.setDestination(59415U);
    msg.setDestinationEntity(231U);
    msg.value = 0.07275558187678488;
    msg.confidence = 0.7768473133228514;
    msg.opmodes.assign("OMHSJTLPFEQPQYRBCCQBBRTBVREZLIJHLENUURWNEKSCCKXTIPZMVWQLDEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.5673354110866223);
    msg.setSource(51855U);
    msg.setSourceEntity(203U);
    msg.setDestination(54278U);
    msg.setDestinationEntity(42U);
    msg.value = 0.2809831924073741;
    msg.confidence = 0.8459319330161013;
    msg.opmodes.assign("DNRHCWKLFTONAVTYMMBBDTXKRTYTRJFBMCPWIUQQQPXYRLYWQFPSZTUOUIYJIWKEAYRM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.5799507075945078);
    msg.setSource(13226U);
    msg.setSourceEntity(55U);
    msg.setDestination(16743U);
    msg.setDestinationEntity(178U);
    msg.itow = 3842420290U;
    msg.lat = 0.45044119499478696;
    msg.lon = 0.48667942975390643;
    msg.height_ell = 0.057015557129544536;
    msg.height_sea = 0.9350434050404883;
    msg.hacc = 0.46035457336161545;
    msg.vacc = 0.37164034059660356;
    msg.vel_n = 0.6512473693995329;
    msg.vel_e = 0.21525938793193033;
    msg.vel_d = 0.11651839706645173;
    msg.speed = 0.7012542780728893;
    msg.gspeed = 0.07471649312506212;
    msg.heading = 0.2732293236840905;
    msg.sacc = 0.10166760409290543;
    msg.cacc = 0.14052439804997685;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.31965593522922386);
    msg.setSource(36244U);
    msg.setSourceEntity(31U);
    msg.setDestination(64752U);
    msg.setDestinationEntity(43U);
    msg.itow = 4112363563U;
    msg.lat = 0.8972423262798672;
    msg.lon = 0.04385015671012171;
    msg.height_ell = 0.4719862077455267;
    msg.height_sea = 0.5330307407182009;
    msg.hacc = 0.1533962928632555;
    msg.vacc = 0.37359046056656875;
    msg.vel_n = 0.594512253630852;
    msg.vel_e = 0.6366391470884812;
    msg.vel_d = 0.5264267607799397;
    msg.speed = 0.769381260226665;
    msg.gspeed = 0.6866109375498448;
    msg.heading = 0.09057693720540838;
    msg.sacc = 0.7025953080491575;
    msg.cacc = 0.8346072672870656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.8422323035947127);
    msg.setSource(12806U);
    msg.setSourceEntity(2U);
    msg.setDestination(60230U);
    msg.setDestinationEntity(44U);
    msg.itow = 1132189748U;
    msg.lat = 0.32205426361505607;
    msg.lon = 0.6333576498231419;
    msg.height_ell = 0.9556209265244008;
    msg.height_sea = 0.4095251988651065;
    msg.hacc = 0.04934041138369527;
    msg.vacc = 0.9605654063860052;
    msg.vel_n = 0.21551377030845897;
    msg.vel_e = 0.16301528008486077;
    msg.vel_d = 0.5948677240034171;
    msg.speed = 0.35075592028461744;
    msg.gspeed = 0.2649503205440641;
    msg.heading = 0.5458411917329961;
    msg.sacc = 0.21037327653985216;
    msg.cacc = 0.43560441018838425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.17541425192962135);
    msg.setSource(23039U);
    msg.setSourceEntity(240U);
    msg.setDestination(8203U);
    msg.setDestinationEntity(233U);
    msg.id = 127U;
    msg.value = 0.3114407039577233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.9400356073852133);
    msg.setSource(32375U);
    msg.setSourceEntity(53U);
    msg.setDestination(35035U);
    msg.setDestinationEntity(56U);
    msg.id = 155U;
    msg.value = 0.2660428008581719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.18220829782349568);
    msg.setSource(34816U);
    msg.setSourceEntity(0U);
    msg.setDestination(50027U);
    msg.setDestinationEntity(44U);
    msg.id = 170U;
    msg.value = 0.09841498762536427;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.7634653182832287);
    msg.setSource(13926U);
    msg.setSourceEntity(159U);
    msg.setDestination(10201U);
    msg.setDestinationEntity(45U);
    msg.x = 0.8367284919378071;
    msg.y = 0.5416872349353954;
    msg.z = 0.8906297782068933;
    msg.phi = 0.07610768651837307;
    msg.theta = 0.8297705774558718;
    msg.psi = 0.31627373993702335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.33220569435326164);
    msg.setSource(34433U);
    msg.setSourceEntity(107U);
    msg.setDestination(3147U);
    msg.setDestinationEntity(190U);
    msg.x = 0.450844559129449;
    msg.y = 0.6458817757344079;
    msg.z = 0.12248983037247718;
    msg.phi = 0.12477348881307426;
    msg.theta = 0.7749864640000166;
    msg.psi = 0.19654679161672017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.5828272566769253);
    msg.setSource(48568U);
    msg.setSourceEntity(98U);
    msg.setDestination(36502U);
    msg.setDestinationEntity(173U);
    msg.x = 0.03329905177874415;
    msg.y = 0.029002463051118088;
    msg.z = 0.9062148146675879;
    msg.phi = 0.8376586113373747;
    msg.theta = 0.15115911027557882;
    msg.psi = 0.40533897626802373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.2935289949613268);
    msg.setSource(16251U);
    msg.setSourceEntity(198U);
    msg.setDestination(37490U);
    msg.setDestinationEntity(83U);
    msg.beam_width = 0.7846193829421366;
    msg.beam_height = 0.6717194139978557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.3953481963297135);
    msg.setSource(35195U);
    msg.setSourceEntity(241U);
    msg.setDestination(23261U);
    msg.setDestinationEntity(136U);
    msg.beam_width = 0.17447174923999076;
    msg.beam_height = 0.9810837653016646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.8793732446229373);
    msg.setSource(47929U);
    msg.setSourceEntity(49U);
    msg.setDestination(32444U);
    msg.setDestinationEntity(205U);
    msg.beam_width = 0.8560292858747315;
    msg.beam_height = 0.7347433148539546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.20818448094500908);
    msg.setSource(17021U);
    msg.setSourceEntity(93U);
    msg.setDestination(47008U);
    msg.setDestinationEntity(79U);
    msg.sane = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.5580881014813255);
    msg.setSource(52577U);
    msg.setSourceEntity(71U);
    msg.setDestination(45980U);
    msg.setDestinationEntity(205U);
    msg.sane = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.18038168223086926);
    msg.setSource(30941U);
    msg.setSourceEntity(109U);
    msg.setDestination(29616U);
    msg.setDestinationEntity(36U);
    msg.sane = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.22939892634712444);
    msg.setSource(232U);
    msg.setSourceEntity(163U);
    msg.setDestination(10305U);
    msg.setDestinationEntity(243U);
    msg.id = 230U;
    msg.zoom = 187U;
    msg.action = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.9709483999982349);
    msg.setSource(59294U);
    msg.setSourceEntity(99U);
    msg.setDestination(64292U);
    msg.setDestinationEntity(87U);
    msg.id = 105U;
    msg.zoom = 148U;
    msg.action = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.22797199736126394);
    msg.setSource(50642U);
    msg.setSourceEntity(89U);
    msg.setDestination(21240U);
    msg.setDestinationEntity(205U);
    msg.id = 178U;
    msg.zoom = 174U;
    msg.action = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.18894845216864953);
    msg.setSource(34831U);
    msg.setSourceEntity(150U);
    msg.setDestination(39615U);
    msg.setDestinationEntity(69U);
    msg.id = 32U;
    msg.value = 0.6412163593142232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.2431397358072953);
    msg.setSource(46866U);
    msg.setSourceEntity(201U);
    msg.setDestination(10131U);
    msg.setDestinationEntity(207U);
    msg.id = 182U;
    msg.value = 0.27874494219145696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.45538380208444296);
    msg.setSource(44487U);
    msg.setSourceEntity(210U);
    msg.setDestination(27106U);
    msg.setDestinationEntity(227U);
    msg.id = 168U;
    msg.value = 0.6858639047777583;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.6343087824051863);
    msg.setSource(31378U);
    msg.setSourceEntity(42U);
    msg.setDestination(61586U);
    msg.setDestinationEntity(100U);
    msg.id = 0U;
    msg.value = 0.8082004239698538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.06793395870147168);
    msg.setSource(61358U);
    msg.setSourceEntity(19U);
    msg.setDestination(20003U);
    msg.setDestinationEntity(250U);
    msg.id = 143U;
    msg.value = 0.19455179345451756;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.5317697428494826);
    msg.setSource(32113U);
    msg.setSourceEntity(108U);
    msg.setDestination(2423U);
    msg.setDestinationEntity(226U);
    msg.id = 0U;
    msg.value = 0.796678427410391;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.6338594914220549);
    msg.setSource(35530U);
    msg.setSourceEntity(10U);
    msg.setDestination(16831U);
    msg.setDestinationEntity(176U);
    msg.id = 45U;
    msg.angle = 0.1764106872824347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.24952834261155632);
    msg.setSource(35937U);
    msg.setSourceEntity(85U);
    msg.setDestination(25990U);
    msg.setDestinationEntity(63U);
    msg.id = 208U;
    msg.angle = 0.7538273273125611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.4045728052097509);
    msg.setSource(44102U);
    msg.setSourceEntity(125U);
    msg.setDestination(12481U);
    msg.setDestinationEntity(232U);
    msg.id = 77U;
    msg.angle = 0.43565483211778355;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.15053603073454613);
    msg.setSource(51586U);
    msg.setSourceEntity(223U);
    msg.setDestination(58019U);
    msg.setDestinationEntity(70U);
    msg.op = 141U;
    msg.actions.assign("STWJCCFAGQFPLHUXLXWMOJWZILJHCEFVPHXTTVMVNQQBPHAVOFBAHXUWIKJDYGAUPWSJOBCLQGZXSUKQDFSVAYJOSEUNRSAZBKSHBINQRDVLZRPBZZRSCTCHODYFGUTIHYJBMYGRDVWUAE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.3323175896416394);
    msg.setSource(19863U);
    msg.setSourceEntity(8U);
    msg.setDestination(43843U);
    msg.setDestinationEntity(137U);
    msg.op = 3U;
    msg.actions.assign("YORSNIXJAANXNVYWOMVZDCXOBNRXGAQPPWAEPZSQPPWVUAWZJKTINAKQKBXZBQVLDTUELACBBIDQPMBJNIHVNWLUKGTQIRUGFKOYDPIMLENJHREXMRGMAWKJFWYEFERKRJIUXAGJZCI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.4607750095559301);
    msg.setSource(41464U);
    msg.setSourceEntity(82U);
    msg.setDestination(64243U);
    msg.setDestinationEntity(110U);
    msg.op = 118U;
    msg.actions.assign("SSBMWNHCTAQBFCAQXOJRSWMSLDDKELQZJBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.2695543406276756);
    msg.setSource(15528U);
    msg.setSourceEntity(141U);
    msg.setDestination(22479U);
    msg.setDestinationEntity(153U);
    msg.actions.assign("HGKWLYDWIERYIYKXMTRRMCPUORSTKCBNKOBTONDBUNVJJGQTDJEPTHLGWWYDJAFCUIQQODAJVTOHXNLIMDSHMUJMXEGDHKBQAFLTZAIOOFYHNYVZCFXUSULJGAC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.3332094617839174);
    msg.setSource(46496U);
    msg.setSourceEntity(243U);
    msg.setDestination(20406U);
    msg.setDestinationEntity(150U);
    msg.actions.assign("GPMFQXRKGNCVTNLFVGUWDURMVNFTHIHRJNAEDWGMKZHOYUEYIAIUYLUNSSQWPDXSCULPHOEAFYKONFRZIGBFOOUUMMYGALTWYCQCNBQHZYXMOBKSVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.7996097944407008);
    msg.setSource(37181U);
    msg.setSourceEntity(104U);
    msg.setDestination(35325U);
    msg.setDestinationEntity(222U);
    msg.actions.assign("XIQAWKJFMODBMKCZJDXYWPHYYNJVHFKLGWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.4860307838490172);
    msg.setSource(53165U);
    msg.setSourceEntity(22U);
    msg.setDestination(37378U);
    msg.setDestinationEntity(156U);
    msg.button = 122U;
    msg.value = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.4209351527044338);
    msg.setSource(33891U);
    msg.setSourceEntity(222U);
    msg.setDestination(58959U);
    msg.setDestinationEntity(14U);
    msg.button = 35U;
    msg.value = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.7091241351945219);
    msg.setSource(25692U);
    msg.setSourceEntity(234U);
    msg.setDestination(37666U);
    msg.setDestinationEntity(225U);
    msg.button = 223U;
    msg.value = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.12793890669791164);
    msg.setSource(49028U);
    msg.setSourceEntity(64U);
    msg.setDestination(15133U);
    msg.setDestinationEntity(151U);
    msg.op = 157U;
    msg.text.assign("SGPDHLCPINJEUCFUCQKEPNMOLVGKNIFRNXTNCZDRUZKTKBIWZQNJWCPGMBOBCDTQUQEKWKLIXUXDYDYOFDGHCUXQTHLSXCDHESATUKSAOWRFIHWWUOMHZMRKATNYIAEODUAUDXLMRERZIVBZTGOQVRFRPGBHGVLACVOSJWKRWMISJYTMXMLPZNRPYJGFOLFQNVJAHJGBVDSZIQSTHTFZFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.8518186016994039);
    msg.setSource(20620U);
    msg.setSourceEntity(2U);
    msg.setDestination(62528U);
    msg.setDestinationEntity(194U);
    msg.op = 106U;
    msg.text.assign("NOGZLXRKMBCJGSHLKQRWSEFXBFBDZFVMYOLCMNOVHYMPUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.06249765636642002);
    msg.setSource(24756U);
    msg.setSourceEntity(31U);
    msg.setDestination(44275U);
    msg.setDestinationEntity(147U);
    msg.op = 131U;
    msg.text.assign("UHPLEWBYFLKSXTGQKVNPSOWGMCURZMIVPYVGZGLJGTLUXZXUEQYJRADXTOQUNPZQJWOFSZZZIAMBNBRIAGFHBPKIXAAQPEFVRLTHIOHRDZCNVIWQSDDMTXEMARFJTOTLJXSYBNLASROJHRYKKJJUWSCKJHJEUGMCFYUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.40130391278579547);
    msg.setSource(63162U);
    msg.setSourceEntity(101U);
    msg.setDestination(47637U);
    msg.setDestinationEntity(28U);
    msg.op = 5U;
    msg.time_remain = 0.16861536714335623;
    msg.sched_time = 0.035135702476609354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.9395029010561361);
    msg.setSource(365U);
    msg.setSourceEntity(192U);
    msg.setDestination(47298U);
    msg.setDestinationEntity(88U);
    msg.op = 47U;
    msg.time_remain = 0.27745472037227303;
    msg.sched_time = 0.07246265438903532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.6293886900655905);
    msg.setSource(35780U);
    msg.setSourceEntity(16U);
    msg.setDestination(2215U);
    msg.setDestinationEntity(105U);
    msg.op = 161U;
    msg.time_remain = 0.6252110862389127;
    msg.sched_time = 0.14379449899519092;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.7941620145902873);
    msg.setSource(40366U);
    msg.setSourceEntity(204U);
    msg.setDestination(9896U);
    msg.setDestinationEntity(132U);
    msg.name.assign("YRNZNLZLJREIIRBOZGJEPPVEUZTQDVBRIBHKNCSFDDOTOIXWQRPHIOEUYXTYNOJWYVRQUMMDAQARHXCNVHVGGTJGABPKKEGWCEZOKTPFAHIKAUTITSPDXFJCHAXAIUBHLXFZUNPMQSFCKFHOCJYVJBIFUSXYIYADMEYYFLPMNNDWLSWPOUZLBBVD");
    msg.op = 49U;
    msg.sched_time = 0.676828053741915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.29823726708694964);
    msg.setSource(41438U);
    msg.setSourceEntity(129U);
    msg.setDestination(60753U);
    msg.setDestinationEntity(230U);
    msg.name.assign("WLIUEGMPSTBKGNISCDQJUULFCKZBQLZWGQSUNKZRPPPETVXRIFA");
    msg.op = 244U;
    msg.sched_time = 0.29464396116099667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.13187177735335465);
    msg.setSource(16888U);
    msg.setSourceEntity(21U);
    msg.setDestination(34674U);
    msg.setDestinationEntity(152U);
    msg.name.assign("SPTWRMDFMODQIUOOCMLPBRNYBNFWBTKSHJAYLSIFPYQSUEZIGHJFEDIKXQGKQUBXCETNLJWXACGEITOAJRPSHXUFHVLFFFDXVBVXZKNTUBPXMXEQPGNLIVQWYNGHJODTYTPMKCPEDLNCPLZRCVRSSRIQRARWJHCYTMABAUXKDUJHZQJAMCDLZLUSJIHMGRVNFNBYMJVNWKUMUEKWBKTTESDGECPQOEOWAVHYZAZOBACXVFGIGDRWWK");
    msg.op = 58U;
    msg.sched_time = 0.6713457830167266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.030074109158382822);
    msg.setSource(40734U);
    msg.setSourceEntity(123U);
    msg.setDestination(57636U);
    msg.setDestinationEntity(87U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.693700943004084);
    msg.setSource(12880U);
    msg.setSourceEntity(183U);
    msg.setDestination(53074U);
    msg.setDestinationEntity(209U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.6968622226778837);
    msg.setSource(41084U);
    msg.setSourceEntity(146U);
    msg.setDestination(60329U);
    msg.setDestinationEntity(103U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.8542393415530732);
    msg.setSource(47873U);
    msg.setSourceEntity(78U);
    msg.setDestination(53523U);
    msg.setDestinationEntity(239U);
    msg.name.assign("GKRFZWVYUOCTMPSVFSDYAPJASXCGASTHZAJVLBHXADRFTSXHHJUNORB");
    msg.state = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.3406020977993477);
    msg.setSource(25129U);
    msg.setSourceEntity(99U);
    msg.setDestination(38877U);
    msg.setDestinationEntity(210U);
    msg.name.assign("MZRMTIKIRCFQRCESMUOLYWSWPLBYPQFICJHAMSQKCSVCZADRDBDUKAO");
    msg.state = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.8555967752429933);
    msg.setSource(54131U);
    msg.setSourceEntity(183U);
    msg.setDestination(4091U);
    msg.setDestinationEntity(224U);
    msg.name.assign("ZFQRHNKNAJQJERSUIXEJKMVWOIPTJMBMSXOLDZXJVBMSRVRXQAVEYHMXFRULWDEMBYGREQWSIEPCBCKUQZIZIDUJYTKXITDOIAPWDFRLPXWWNAUHZFGUKCBTUTBGDKOWWFPFVNLVZGSTQPPTUMYBHARGLQSHVROGEP");
    msg.state = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.5755710984275909);
    msg.setSource(4614U);
    msg.setSourceEntity(108U);
    msg.setDestination(30744U);
    msg.setDestinationEntity(132U);
    msg.name.assign("IGPMHZDUJPKTNGVFAYSSWRUASEITMKWPCPGPCZFIVFEIACHZISEGYPMTQRYXKXWJCYLJECTIBXUYKDNUQMZAQNHOXETBQQNSLGRRTRFEVHLWOKLLHIQCGZIDUHJTOXWFVPY");
    msg.value = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.6262689923839456);
    msg.setSource(61723U);
    msg.setSourceEntity(157U);
    msg.setDestination(27223U);
    msg.setDestinationEntity(127U);
    msg.name.assign("UZHEHHTPGTNSVQYLXFRGROTFMLJPDKAIQUMAOVUGYQYQWGNQGFRSPFWVORTDKGBKXBDGDUARUIKKCLFZQYSXVOIFRZSXGUYJBJVCRDLKNKOQIIMTLABQOZP");
    msg.value = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.07950969504630634);
    msg.setSource(17416U);
    msg.setSourceEntity(175U);
    msg.setDestination(65312U);
    msg.setDestinationEntity(202U);
    msg.name.assign("ZGBEWNQVNANZPPEWCQZOVQISKFLJDLRDRQYKIYLZJYIAGNJH");
    msg.value = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.018031270829238055);
    msg.setSource(51548U);
    msg.setSourceEntity(178U);
    msg.setDestination(37852U);
    msg.setDestinationEntity(164U);
    msg.name.assign("CRAZNXGUPFIXZJAKUUELVHRDKWZMUOKAMEYBBZEYQLGTYCRAJNHCOCKQXIOUKYFPPXWDTVBVSEUFNPXHQVZFWNFGJWXCDPTYIEBHRWMIOCLHZYXHYLVTOEZMDLCNDQKJXRSYKDEVIHZYFDVBTMQGOIAMPVWKBEARJVIQCSVOGQMSUGGLSFQUUJNRPNREFNSTSALOWLRZBMACPIMROJPTJXTHWYIMBHIKAEUJCXWGSASJWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.4334504658252081);
    msg.setSource(218U);
    msg.setSourceEntity(212U);
    msg.setDestination(42079U);
    msg.setDestinationEntity(68U);
    msg.name.assign("PGXCUZDSDBSNBHVQJEGFRHIDLCKSJIVMPGPXLUDQNABOCURZSQWMBZOPCDYAIHBAUKXJEWIILUVRLTUFKMJHZHGLBEXMJYYZXNBQETCXFJKHPTTBVCFZMTX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.7625239531337582);
    msg.setSource(63430U);
    msg.setSourceEntity(197U);
    msg.setDestination(33550U);
    msg.setDestinationEntity(199U);
    msg.name.assign("ERBCXSIHHQIALTBFPNTTMVTYPZOOVNOXVCBBUKWWAXCFWFWAQMHLQZWC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.2489360934368754);
    msg.setSource(55165U);
    msg.setSourceEntity(222U);
    msg.setDestination(34380U);
    msg.setDestinationEntity(53U);
    msg.name.assign("BXUIDZLIFFTCORRFJXWZFTHFUCLNRABFRHDLUWISLCQQVVKGNKZMEBEPEKIVPTFJURTMVYYSWMOTCNXKBZCIDMXSLYAONBQOWSNAKSAGCTWDBDCJCNGDOGUGKQPHPVZTSOKWJYAXHXAUQZYSGMRJRDWMFTHHEUBNMVEXASIQYBBHPLYUJPXIMSIJGVIQCDXEHLOJEZZIYNZFRUMVNQRCRKEVHOOP");
    msg.value = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.863533695700505);
    msg.setSource(9765U);
    msg.setSourceEntity(123U);
    msg.setDestination(52653U);
    msg.setDestinationEntity(213U);
    msg.name.assign("VYEDZMOTHYYLRGSWJUSUUYWU");
    msg.value = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.8645326881588618);
    msg.setSource(916U);
    msg.setSourceEntity(211U);
    msg.setDestination(13823U);
    msg.setDestinationEntity(202U);
    msg.name.assign("BPGSHKFXQMUKVDHWHNARLJJOZIBWBPCUBZQADWNHXFZSDFAUSFCRTQQGXGUDATMTTIAYZVCHTFBSMPVYJKHAMLNNRJNOVJXPYYLWMGPJTBCXPGSVXRUBMAIKOWXEUSGBLNEOVOFSRZKRPYVFIDERHLFYWIXIZOMSOHQCYNNOPESPLQIYLDVKKORQGITSGDGCDXEAEYCWQLBZQJATFRWJKMWAGZULKELUDUHMETNIYV");
    msg.value = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.41579925511884885);
    msg.setSource(61973U);
    msg.setSourceEntity(200U);
    msg.setDestination(65229U);
    msg.setDestinationEntity(128U);
    msg.id = 103U;
    msg.period = 3403114599U;
    msg.duty_cycle = 2117755302U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.04358026916956226);
    msg.setSource(48451U);
    msg.setSourceEntity(189U);
    msg.setDestination(54514U);
    msg.setDestinationEntity(150U);
    msg.id = 253U;
    msg.period = 3938655891U;
    msg.duty_cycle = 3897901261U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.5949440547258972);
    msg.setSource(49969U);
    msg.setSourceEntity(169U);
    msg.setDestination(10007U);
    msg.setDestinationEntity(70U);
    msg.id = 105U;
    msg.period = 3794709376U;
    msg.duty_cycle = 2963904984U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.04458758603696644);
    msg.setSource(9400U);
    msg.setSourceEntity(242U);
    msg.setDestination(58188U);
    msg.setDestinationEntity(111U);
    msg.id = 40U;
    msg.period = 224277186U;
    msg.duty_cycle = 1142418607U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.1157230234631691);
    msg.setSource(55208U);
    msg.setSourceEntity(198U);
    msg.setDestination(1988U);
    msg.setDestinationEntity(238U);
    msg.id = 69U;
    msg.period = 781815043U;
    msg.duty_cycle = 199666541U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.34626950065790385);
    msg.setSource(44299U);
    msg.setSourceEntity(166U);
    msg.setDestination(60625U);
    msg.setDestinationEntity(21U);
    msg.id = 21U;
    msg.period = 792371352U;
    msg.duty_cycle = 2008092546U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.7470529811833441);
    msg.setSource(52169U);
    msg.setSourceEntity(91U);
    msg.setDestination(48870U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.5768437638030236;
    msg.lon = 0.9652253646783812;
    msg.height = 0.5044495654955834;
    msg.x = 0.06603677085574766;
    msg.y = 0.6292532250022331;
    msg.z = 0.5408463562090854;
    msg.phi = 0.055413337746803015;
    msg.theta = 0.8338096145794265;
    msg.psi = 0.77139514197897;
    msg.u = 0.9449205259734803;
    msg.v = 0.8889992202972906;
    msg.w = 0.4356357775238411;
    msg.vx = 0.3982032599271008;
    msg.vy = 0.057641916683371486;
    msg.vz = 0.41323524166685965;
    msg.p = 0.506377658440903;
    msg.q = 0.47362349867203246;
    msg.r = 0.7996773820271218;
    msg.depth = 0.9994969651441866;
    msg.alt = 0.3408476741538039;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.12800781893088953);
    msg.setSource(43644U);
    msg.setSourceEntity(208U);
    msg.setDestination(23183U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.11183907472076438;
    msg.lon = 0.43393240154487833;
    msg.height = 0.974061226322749;
    msg.x = 0.8504673234832701;
    msg.y = 0.881578023076152;
    msg.z = 0.29702375714835894;
    msg.phi = 0.7570465590126197;
    msg.theta = 0.07715999895500847;
    msg.psi = 0.44892193756469523;
    msg.u = 0.075501463127702;
    msg.v = 0.11607030764652926;
    msg.w = 0.5142489651488407;
    msg.vx = 0.37574337459007146;
    msg.vy = 0.8834167632382947;
    msg.vz = 0.22007205475238345;
    msg.p = 0.7177438653801659;
    msg.q = 0.9371854503641593;
    msg.r = 0.1929541792822197;
    msg.depth = 0.6686401090316916;
    msg.alt = 0.13775646870309866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.23329449636342692);
    msg.setSource(55770U);
    msg.setSourceEntity(166U);
    msg.setDestination(8473U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.6962751664053075;
    msg.lon = 0.04487871690223155;
    msg.height = 0.7059518437747391;
    msg.x = 0.6660434285117786;
    msg.y = 0.616775168383025;
    msg.z = 0.9399537907815704;
    msg.phi = 0.058878964957450486;
    msg.theta = 0.594506293516857;
    msg.psi = 0.24685826765410324;
    msg.u = 0.3532842069253802;
    msg.v = 0.6767108818709627;
    msg.w = 0.6859419674646899;
    msg.vx = 0.35901210957637586;
    msg.vy = 0.9056126724908563;
    msg.vz = 0.907280428610705;
    msg.p = 0.023859556898417678;
    msg.q = 0.970339244489663;
    msg.r = 0.19519170674779263;
    msg.depth = 0.2037566457309593;
    msg.alt = 0.8424744940294665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.028525211012978557);
    msg.setSource(25844U);
    msg.setSourceEntity(115U);
    msg.setDestination(821U);
    msg.setDestinationEntity(94U);
    msg.x = 0.5500099399346563;
    msg.y = 0.1284113942085383;
    msg.z = 0.3002665240524851;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.11669379892389109);
    msg.setSource(42105U);
    msg.setSourceEntity(200U);
    msg.setDestination(41803U);
    msg.setDestinationEntity(148U);
    msg.x = 0.6181165868939835;
    msg.y = 0.921081981746579;
    msg.z = 0.9472244527305341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.20193087282304378);
    msg.setSource(4603U);
    msg.setSourceEntity(203U);
    msg.setDestination(33968U);
    msg.setDestinationEntity(80U);
    msg.x = 0.021611414967075193;
    msg.y = 0.45828951179065935;
    msg.z = 0.3759370412653815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.143160098293861);
    msg.setSource(12434U);
    msg.setSourceEntity(185U);
    msg.setDestination(34804U);
    msg.setDestinationEntity(159U);
    msg.value = 0.14221823058595984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.4060754839246177);
    msg.setSource(58663U);
    msg.setSourceEntity(241U);
    msg.setDestination(20438U);
    msg.setDestinationEntity(8U);
    msg.value = 0.928894469275326;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.8377518645718262);
    msg.setSource(56332U);
    msg.setSourceEntity(215U);
    msg.setDestination(58674U);
    msg.setDestinationEntity(117U);
    msg.value = 0.23880916058833612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.09698874855827089);
    msg.setSource(9896U);
    msg.setSourceEntity(249U);
    msg.setDestination(11704U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8239202956395665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.24615753568117738);
    msg.setSource(39461U);
    msg.setSourceEntity(31U);
    msg.setDestination(51621U);
    msg.setDestinationEntity(126U);
    msg.value = 0.25299076014987343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.7416307528303089);
    msg.setSource(39564U);
    msg.setSourceEntity(157U);
    msg.setDestination(61285U);
    msg.setDestinationEntity(71U);
    msg.value = 0.88693649079938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.041114588847288136);
    msg.setSource(32666U);
    msg.setSourceEntity(88U);
    msg.setDestination(61802U);
    msg.setDestinationEntity(23U);
    msg.x = 0.683652686501677;
    msg.y = 0.10458854426965114;
    msg.z = 0.5324495926728294;
    msg.phi = 0.3641029413685074;
    msg.theta = 0.9198989387455424;
    msg.psi = 0.9071220279098485;
    msg.p = 0.8027784513928105;
    msg.q = 0.5329233729607306;
    msg.r = 0.29615834787363904;
    msg.u = 0.5339936325173802;
    msg.v = 0.09149681197275217;
    msg.w = 0.3478120453366289;
    msg.bias_psi = 0.7668609320349278;
    msg.bias_r = 0.15826237875985683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.11473107669256888);
    msg.setSource(31059U);
    msg.setSourceEntity(216U);
    msg.setDestination(23998U);
    msg.setDestinationEntity(24U);
    msg.x = 0.9039286212582374;
    msg.y = 0.5765361120464327;
    msg.z = 0.9480112284695881;
    msg.phi = 0.7357424542529818;
    msg.theta = 0.4758212323606025;
    msg.psi = 0.4788897481830381;
    msg.p = 0.6279836881184044;
    msg.q = 0.7624336961797311;
    msg.r = 0.16910275314841494;
    msg.u = 0.4277679032736388;
    msg.v = 0.15853297132436384;
    msg.w = 0.13031613385175678;
    msg.bias_psi = 0.16053302457504903;
    msg.bias_r = 0.7655010700344972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.7037970139186963);
    msg.setSource(47542U);
    msg.setSourceEntity(67U);
    msg.setDestination(58075U);
    msg.setDestinationEntity(140U);
    msg.x = 0.9168998576277881;
    msg.y = 0.14465956414519543;
    msg.z = 0.10728717783631747;
    msg.phi = 0.077171402206485;
    msg.theta = 0.8087559737652342;
    msg.psi = 0.9190399529469999;
    msg.p = 0.3136930417358339;
    msg.q = 0.897784927795592;
    msg.r = 0.014893416872782894;
    msg.u = 0.3360326931586032;
    msg.v = 0.9726471894931918;
    msg.w = 0.9816853885895783;
    msg.bias_psi = 0.7258219101202941;
    msg.bias_r = 0.794960046692387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.22664379193951156);
    msg.setSource(45754U);
    msg.setSourceEntity(143U);
    msg.setDestination(16264U);
    msg.setDestinationEntity(151U);
    msg.bias_psi = 0.42308804410178924;
    msg.bias_r = 0.9166226214775441;
    msg.cog = 0.56614242287234;
    msg.cyaw = 0.037749770626287926;
    msg.lbl_rej_level = 0.5365560519447194;
    msg.gps_rej_level = 0.4007059473224862;
    msg.custom_x = 0.8943417677146208;
    msg.custom_y = 0.7722516383494697;
    msg.custom_z = 0.6088132891429486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.41637876066772406);
    msg.setSource(22640U);
    msg.setSourceEntity(45U);
    msg.setDestination(39658U);
    msg.setDestinationEntity(35U);
    msg.bias_psi = 0.6094575443050987;
    msg.bias_r = 0.07141367408120125;
    msg.cog = 0.8155340273545801;
    msg.cyaw = 0.8601434978515824;
    msg.lbl_rej_level = 0.7882100823388134;
    msg.gps_rej_level = 0.5293877710037455;
    msg.custom_x = 0.40185387231298186;
    msg.custom_y = 0.6682031769567243;
    msg.custom_z = 0.9869791034270741;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.738442770080993);
    msg.setSource(11091U);
    msg.setSourceEntity(146U);
    msg.setDestination(34603U);
    msg.setDestinationEntity(173U);
    msg.bias_psi = 0.39749490937054066;
    msg.bias_r = 0.5234219950586543;
    msg.cog = 0.5219708096306586;
    msg.cyaw = 0.22380153275565062;
    msg.lbl_rej_level = 0.31750535710631933;
    msg.gps_rej_level = 0.6292232676492238;
    msg.custom_x = 0.12321717379403752;
    msg.custom_y = 0.9161296486087955;
    msg.custom_z = 0.22396626682119358;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.9529319107362539);
    msg.setSource(41891U);
    msg.setSourceEntity(249U);
    msg.setDestination(35966U);
    msg.setDestinationEntity(127U);
    msg.utc_time = 0.28254458915707814;
    msg.reason = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.4684839640615388);
    msg.setSource(54000U);
    msg.setSourceEntity(138U);
    msg.setDestination(12763U);
    msg.setDestinationEntity(14U);
    msg.utc_time = 0.9968738407237037;
    msg.reason = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.5663366965286579);
    msg.setSource(44878U);
    msg.setSourceEntity(11U);
    msg.setDestination(26466U);
    msg.setDestinationEntity(217U);
    msg.utc_time = 0.5863232742484035;
    msg.reason = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.8846646327819507);
    msg.setSource(32390U);
    msg.setSourceEntity(11U);
    msg.setDestination(49339U);
    msg.setDestinationEntity(11U);
    msg.id = 119U;
    msg.range = 0.5373620604261908;
    msg.acceptance = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.7782020999288203);
    msg.setSource(21489U);
    msg.setSourceEntity(6U);
    msg.setDestination(50781U);
    msg.setDestinationEntity(215U);
    msg.id = 46U;
    msg.range = 0.9492677839616898;
    msg.acceptance = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.6578389522720067);
    msg.setSource(36082U);
    msg.setSourceEntity(182U);
    msg.setDestination(12215U);
    msg.setDestinationEntity(168U);
    msg.id = 112U;
    msg.range = 0.6110933830622571;
    msg.acceptance = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.3450498436110553);
    msg.setSource(61410U);
    msg.setSourceEntity(234U);
    msg.setDestination(5192U);
    msg.setDestinationEntity(121U);
    msg.type = 153U;
    msg.reason = 74U;
    msg.value = 0.06903066535417901;
    msg.timestep = 0.3757989406580179;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.9759931480591503);
    msg.setSource(8037U);
    msg.setSourceEntity(2U);
    msg.setDestination(11923U);
    msg.setDestinationEntity(26U);
    msg.type = 252U;
    msg.reason = 75U;
    msg.value = 0.9160043060954781;
    msg.timestep = 0.17061388676095546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.8800961113675418);
    msg.setSource(49658U);
    msg.setSourceEntity(231U);
    msg.setDestination(62900U);
    msg.setDestinationEntity(61U);
    msg.type = 182U;
    msg.reason = 197U;
    msg.value = 0.28934569800977217;
    msg.timestep = 0.6944892781465001;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.24905707566948065);
    msg.setSource(44227U);
    msg.setSourceEntity(193U);
    msg.setDestination(11677U);
    msg.setDestinationEntity(10U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.8239762147164583);
    msg.setSource(63610U);
    msg.setSourceEntity(36U);
    msg.setDestination(48958U);
    msg.setDestinationEntity(29U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.3654598262283081);
    msg.setSource(50469U);
    msg.setSourceEntity(104U);
    msg.setDestination(39040U);
    msg.setDestinationEntity(69U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.4045329061631219);
    msg.setSource(55070U);
    msg.setSourceEntity(65U);
    msg.setDestination(25574U);
    msg.setDestinationEntity(2U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NUZGZSCETGQKLVLQXSBWEAGQNTAMCZCDJCIVOTRGTEPXRRKNXROKUQLQYSNBVBAWAOPUKBRPYPIHFHJNGBHOEMQQJIJGKOXAOQSEJUCGZRDLPJIMCJJSFCFVHZQMPBSPRUSVZHWRWUNELLIHWXRWYKIOEDANBFMLDEOPNIFXAZVHSSTDMGYXYAGIKLVZDMTNDCMJOVFADDLTXHYFPIKEWYEWLCYVKMBW");
    tmp_msg_0.lat = 0.4140986107985084;
    tmp_msg_0.lon = 0.7295942783973884;
    tmp_msg_0.depth = 0.1845454946897146;
    tmp_msg_0.query_channel = 164U;
    tmp_msg_0.reply_channel = 66U;
    tmp_msg_0.transponder_delay = 252U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9733708435263733;
    msg.y = 0.6034808402097532;
    msg.var_x = 0.7986599403172007;
    msg.var_y = 0.720927115901519;
    msg.distance = 0.5537301584811517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.5662473161326559);
    msg.setSource(56411U);
    msg.setSourceEntity(90U);
    msg.setDestination(49950U);
    msg.setDestinationEntity(111U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XKWSFWALNUOVPYPKZYZDWGGGVGKISNASASICJPJTUWYSUQLXRLAHHTRKAEGQAVNUJKNCNKIEVTOKNRFVEZBLMXZERBHUJGETZXXUQDOGLLLLDCYLSJQSZHNAFMRGVGNPHTHDWERXXRZDUFUXCJKUAFEREOFTYYYTQMQFWQMMXDSSWHMVOVTLXAIZZMUVOAOTJCSBIEDRPJHKQPIBMFBIQOCFY");
    tmp_msg_0.lat = 0.3910743340951438;
    tmp_msg_0.lon = 0.8610820198422846;
    tmp_msg_0.depth = 0.4277991569393249;
    tmp_msg_0.query_channel = 93U;
    tmp_msg_0.reply_channel = 205U;
    tmp_msg_0.transponder_delay = 89U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.21442912428666627;
    msg.y = 0.8562642665062757;
    msg.var_x = 0.03886536821299058;
    msg.var_y = 0.39769786086076675;
    msg.distance = 0.3635065470329709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.5207568876448516);
    msg.setSource(33675U);
    msg.setSourceEntity(131U);
    msg.setDestination(5683U);
    msg.setDestinationEntity(226U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NKLRGTFCGQCEOZCZDQRDJAWFYYFTZYQZWOQSUJKIAEVXUJWHVIIRMYQVEPLKFGOTZPTLBREHBVEMQCOJOJNPKAECAIMMCHTVFEBJSVXAWJXTMBIQGIFNPEVPRSYFPDSLFOGHKHSMLIYBUNIPSK");
    tmp_msg_0.lat = 0.8190139011541007;
    tmp_msg_0.lon = 0.21889754028200759;
    tmp_msg_0.depth = 0.21505004143977247;
    tmp_msg_0.query_channel = 219U;
    tmp_msg_0.reply_channel = 204U;
    tmp_msg_0.transponder_delay = 165U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.09463661517207078;
    msg.y = 0.9610867757349768;
    msg.var_x = 0.8893189679183551;
    msg.var_y = 0.6767235210934595;
    msg.distance = 0.9247960945730478;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.09599303768446577);
    msg.setSource(57516U);
    msg.setSourceEntity(231U);
    msg.setDestination(57369U);
    msg.setDestinationEntity(137U);
    msg.state = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.012851244129670536);
    msg.setSource(11848U);
    msg.setSourceEntity(205U);
    msg.setDestination(28199U);
    msg.setDestinationEntity(100U);
    msg.state = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.5850812983050467);
    msg.setSource(60236U);
    msg.setSourceEntity(231U);
    msg.setDestination(50850U);
    msg.setDestinationEntity(178U);
    msg.state = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.32128385196740794);
    msg.setSource(8601U);
    msg.setSourceEntity(179U);
    msg.setDestination(25914U);
    msg.setDestinationEntity(224U);
    msg.x = 0.6918396774913774;
    msg.y = 0.8298480715353205;
    msg.z = 0.9438539051208209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.7425455085713937);
    msg.setSource(9461U);
    msg.setSourceEntity(98U);
    msg.setDestination(64961U);
    msg.setDestinationEntity(248U);
    msg.x = 0.4680330410170995;
    msg.y = 0.3340552807416176;
    msg.z = 0.6504676388663732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.09657380253156844);
    msg.setSource(45148U);
    msg.setSourceEntity(195U);
    msg.setDestination(18615U);
    msg.setDestinationEntity(231U);
    msg.x = 0.37601488556161067;
    msg.y = 0.2530094240720343;
    msg.z = 0.1278057645374937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.9897108099181079);
    msg.setSource(46038U);
    msg.setSourceEntity(125U);
    msg.setDestination(21141U);
    msg.setDestinationEntity(48U);
    msg.value = 0.05693296562398842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.571104904079488);
    msg.setSource(28080U);
    msg.setSourceEntity(226U);
    msg.setDestination(53307U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7998258019570162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.3431102530532021);
    msg.setSource(37486U);
    msg.setSourceEntity(178U);
    msg.setDestination(38677U);
    msg.setDestinationEntity(214U);
    msg.value = 0.3142432514754927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.9476737403156686);
    msg.setSource(18485U);
    msg.setSourceEntity(249U);
    msg.setDestination(65064U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7018289545454633;
    msg.z_units = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.6378757290549103);
    msg.setSource(6900U);
    msg.setSourceEntity(65U);
    msg.setDestination(18724U);
    msg.setDestinationEntity(120U);
    msg.value = 0.03512580198774662;
    msg.z_units = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.6739577014942268);
    msg.setSource(63052U);
    msg.setSourceEntity(251U);
    msg.setDestination(32785U);
    msg.setDestinationEntity(117U);
    msg.value = 0.039189678574411024;
    msg.z_units = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.25834653941601093);
    msg.setSource(63422U);
    msg.setSourceEntity(105U);
    msg.setDestination(56285U);
    msg.setDestinationEntity(172U);
    msg.value = 0.26686017298586173;
    msg.speed_units = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.30860180608348375);
    msg.setSource(39108U);
    msg.setSourceEntity(171U);
    msg.setDestination(33843U);
    msg.setDestinationEntity(249U);
    msg.value = 0.6054972685220145;
    msg.speed_units = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.21972089317188281);
    msg.setSource(42394U);
    msg.setSourceEntity(106U);
    msg.setDestination(25656U);
    msg.setDestinationEntity(130U);
    msg.value = 0.18429936931748225;
    msg.speed_units = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.49251896713038557);
    msg.setSource(16294U);
    msg.setSourceEntity(248U);
    msg.setDestination(24316U);
    msg.setDestinationEntity(178U);
    msg.value = 0.41847342526665454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.4504407831553996);
    msg.setSource(35047U);
    msg.setSourceEntity(43U);
    msg.setDestination(63971U);
    msg.setDestinationEntity(153U);
    msg.value = 0.5575323684676274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.4280716169911457);
    msg.setSource(60427U);
    msg.setSourceEntity(116U);
    msg.setDestination(21449U);
    msg.setDestinationEntity(164U);
    msg.value = 0.8439219052915587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.8484306962814442);
    msg.setSource(3993U);
    msg.setSourceEntity(209U);
    msg.setDestination(55542U);
    msg.setDestinationEntity(148U);
    msg.value = 0.8387755404601441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.34392042732693706);
    msg.setSource(41198U);
    msg.setSourceEntity(228U);
    msg.setDestination(60047U);
    msg.setDestinationEntity(12U);
    msg.value = 0.10920074358772902;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.7834899305243469);
    msg.setSource(14116U);
    msg.setSourceEntity(55U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(165U);
    msg.value = 0.4999735970901099;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.08202802665055553);
    msg.setSource(47386U);
    msg.setSourceEntity(96U);
    msg.setDestination(14035U);
    msg.setDestinationEntity(53U);
    msg.value = 0.3830473579704772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.8604345383142978);
    msg.setSource(45017U);
    msg.setSourceEntity(76U);
    msg.setDestination(44287U);
    msg.setDestinationEntity(219U);
    msg.value = 0.5354830205951301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.24961170165575475);
    msg.setSource(55677U);
    msg.setSourceEntity(192U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(30U);
    msg.value = 0.34770974747464534;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.5978148414880096);
    msg.setSource(65452U);
    msg.setSourceEntity(198U);
    msg.setDestination(28550U);
    msg.setDestinationEntity(144U);
    msg.start_lat = 0.35457187097719023;
    msg.start_lon = 0.6791058610457313;
    msg.start_z = 0.6385287052924763;
    msg.start_z_units = 168U;
    msg.end_lat = 0.9588381015660927;
    msg.end_lon = 0.5062327942448904;
    msg.end_z = 0.6299146436721382;
    msg.end_z_units = 247U;
    msg.speed = 0.5948988734644591;
    msg.speed_units = 15U;
    msg.lradius = 0.46126888055974347;
    msg.flags = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.18119499218826052);
    msg.setSource(13049U);
    msg.setSourceEntity(79U);
    msg.setDestination(33227U);
    msg.setDestinationEntity(233U);
    msg.start_lat = 0.6152866686820913;
    msg.start_lon = 0.9623415886238317;
    msg.start_z = 0.35697736459484863;
    msg.start_z_units = 213U;
    msg.end_lat = 0.002010038083462118;
    msg.end_lon = 0.732250773217171;
    msg.end_z = 0.11112142020556559;
    msg.end_z_units = 5U;
    msg.speed = 0.7929714367207269;
    msg.speed_units = 31U;
    msg.lradius = 0.651739242914113;
    msg.flags = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.12780620170571144);
    msg.setSource(59506U);
    msg.setSourceEntity(159U);
    msg.setDestination(35758U);
    msg.setDestinationEntity(239U);
    msg.start_lat = 0.07070906527078225;
    msg.start_lon = 0.993323831123448;
    msg.start_z = 0.7132006633662217;
    msg.start_z_units = 108U;
    msg.end_lat = 0.3132053754688029;
    msg.end_lon = 0.3928195578319885;
    msg.end_z = 0.4255810034270534;
    msg.end_z_units = 89U;
    msg.speed = 0.6582657223047862;
    msg.speed_units = 212U;
    msg.lradius = 0.21533804866187478;
    msg.flags = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.4186650418687793);
    msg.setSource(12681U);
    msg.setSourceEntity(192U);
    msg.setDestination(3565U);
    msg.setDestinationEntity(117U);
    msg.x = 0.38982946280073705;
    msg.y = 0.034528555081167145;
    msg.z = 0.006257334254832658;
    msg.k = 0.3459948793278407;
    msg.m = 0.2280567930448696;
    msg.n = 0.3689834885403307;
    msg.flags = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.5852082507247367);
    msg.setSource(23971U);
    msg.setSourceEntity(71U);
    msg.setDestination(46468U);
    msg.setDestinationEntity(44U);
    msg.x = 0.37017030206128687;
    msg.y = 0.437726554605554;
    msg.z = 0.4662580904138617;
    msg.k = 0.15189981680292763;
    msg.m = 0.9021912934605922;
    msg.n = 0.22556997972794735;
    msg.flags = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.8467316939570348);
    msg.setSource(54961U);
    msg.setSourceEntity(122U);
    msg.setDestination(46823U);
    msg.setDestinationEntity(86U);
    msg.x = 0.50945623556545;
    msg.y = 0.9708040447446714;
    msg.z = 0.12562839054827468;
    msg.k = 0.34280499075175686;
    msg.m = 0.8014727463986656;
    msg.n = 0.2933057752764783;
    msg.flags = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.20059973551319865);
    msg.setSource(61704U);
    msg.setSourceEntity(71U);
    msg.setDestination(59979U);
    msg.setDestinationEntity(189U);
    msg.value = 0.47919126171785975;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.3827269990817639);
    msg.setSource(4740U);
    msg.setSourceEntity(227U);
    msg.setDestination(26565U);
    msg.setDestinationEntity(64U);
    msg.value = 0.10022720623239867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.4363386836508324);
    msg.setSource(35851U);
    msg.setSourceEntity(204U);
    msg.setDestination(33537U);
    msg.setDestinationEntity(165U);
    msg.value = 0.5224493814493818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.11254247811008611);
    msg.setSource(31878U);
    msg.setSourceEntity(134U);
    msg.setDestination(41331U);
    msg.setDestinationEntity(100U);
    msg.u = 0.5573698973825849;
    msg.v = 0.7599632769582126;
    msg.w = 0.5787627544304574;
    msg.p = 0.6683702160398226;
    msg.q = 0.6132591398714273;
    msg.r = 0.2946311929316521;
    msg.flags = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.5733095544200066);
    msg.setSource(25712U);
    msg.setSourceEntity(148U);
    msg.setDestination(39070U);
    msg.setDestinationEntity(186U);
    msg.u = 0.9750953343315751;
    msg.v = 0.31634057993239295;
    msg.w = 0.4585992902319965;
    msg.p = 0.4801631594895269;
    msg.q = 0.769227995763685;
    msg.r = 0.4858640419467183;
    msg.flags = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.49099356530148697);
    msg.setSource(36549U);
    msg.setSourceEntity(101U);
    msg.setDestination(60835U);
    msg.setDestinationEntity(216U);
    msg.u = 0.620213326567748;
    msg.v = 0.3757419034475332;
    msg.w = 0.5401515504100648;
    msg.p = 0.15980770542068812;
    msg.q = 0.6107711154755465;
    msg.r = 0.41396946339255214;
    msg.flags = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.06406266272513494);
    msg.setSource(53297U);
    msg.setSourceEntity(162U);
    msg.setDestination(55998U);
    msg.setDestinationEntity(176U);
    msg.start_lat = 0.2135289285392421;
    msg.start_lon = 0.8758217151019272;
    msg.start_z = 0.09630687875181776;
    msg.start_z_units = 127U;
    msg.end_lat = 0.5930125514281138;
    msg.end_lon = 0.33757840031654984;
    msg.end_z = 0.2462086037342497;
    msg.end_z_units = 242U;
    msg.lradius = 0.6352489472912677;
    msg.flags = 65U;
    msg.x = 0.4437585056886778;
    msg.y = 0.7966591982420594;
    msg.z = 0.01153470890018915;
    msg.vx = 0.9813790435191111;
    msg.vy = 0.9699329012172753;
    msg.vz = 0.9656328787707056;
    msg.course_error = 0.7514186107126984;
    msg.eta = 40358U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.12601575715238367);
    msg.setSource(43556U);
    msg.setSourceEntity(120U);
    msg.setDestination(41182U);
    msg.setDestinationEntity(23U);
    msg.start_lat = 0.5814357208455725;
    msg.start_lon = 0.7181058846899585;
    msg.start_z = 0.872019645760004;
    msg.start_z_units = 142U;
    msg.end_lat = 0.8775553435581046;
    msg.end_lon = 0.08936008785822891;
    msg.end_z = 0.8124970784908015;
    msg.end_z_units = 124U;
    msg.lradius = 0.1345614778187909;
    msg.flags = 165U;
    msg.x = 0.21781593007729083;
    msg.y = 0.5862956627725631;
    msg.z = 0.3403498881318413;
    msg.vx = 0.03260567407157944;
    msg.vy = 0.39477551214137374;
    msg.vz = 0.9490143028612524;
    msg.course_error = 0.3822021137176653;
    msg.eta = 12420U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.2580269403527464);
    msg.setSource(50229U);
    msg.setSourceEntity(91U);
    msg.setDestination(22483U);
    msg.setDestinationEntity(110U);
    msg.start_lat = 0.9222317940731046;
    msg.start_lon = 0.6542690671721635;
    msg.start_z = 0.8468812816078027;
    msg.start_z_units = 215U;
    msg.end_lat = 0.2794473826478596;
    msg.end_lon = 0.9055134518975946;
    msg.end_z = 0.433770234724685;
    msg.end_z_units = 131U;
    msg.lradius = 0.4578694305139188;
    msg.flags = 96U;
    msg.x = 0.7142977412391543;
    msg.y = 0.748571645707855;
    msg.z = 0.9970988917481175;
    msg.vx = 0.7619549131689254;
    msg.vy = 0.32536143009697105;
    msg.vz = 0.4445554760344419;
    msg.course_error = 0.6482315780028378;
    msg.eta = 60137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.10521160734735313);
    msg.setSource(61331U);
    msg.setSourceEntity(240U);
    msg.setDestination(29798U);
    msg.setDestinationEntity(104U);
    msg.k = 0.324050605120888;
    msg.m = 0.45417959534226504;
    msg.n = 0.4028713138858748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.05147673310331702);
    msg.setSource(52775U);
    msg.setSourceEntity(26U);
    msg.setDestination(26764U);
    msg.setDestinationEntity(25U);
    msg.k = 0.06365262327354804;
    msg.m = 0.8001978085564458;
    msg.n = 0.6802056427526926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.4450952793802009);
    msg.setSource(45952U);
    msg.setSourceEntity(24U);
    msg.setDestination(16715U);
    msg.setDestinationEntity(159U);
    msg.k = 0.7592652723764889;
    msg.m = 0.02681867278796146;
    msg.n = 0.7826696882598552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.7312328623777826);
    msg.setSource(17120U);
    msg.setSourceEntity(24U);
    msg.setDestination(41573U);
    msg.setDestinationEntity(55U);
    msg.p = 0.2256074571114024;
    msg.i = 0.8751774304540494;
    msg.d = 0.9916404447257459;
    msg.a = 0.7605323085324501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.07302832679140647);
    msg.setSource(59211U);
    msg.setSourceEntity(244U);
    msg.setDestination(40727U);
    msg.setDestinationEntity(53U);
    msg.p = 0.87028305162447;
    msg.i = 0.6772889471653174;
    msg.d = 0.7665502364507216;
    msg.a = 0.9574569127406964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.42096849139564074);
    msg.setSource(48011U);
    msg.setSourceEntity(220U);
    msg.setDestination(28156U);
    msg.setDestinationEntity(107U);
    msg.p = 0.3692761548036323;
    msg.i = 0.9917132064284598;
    msg.d = 0.19162901698000767;
    msg.a = 0.14437047378774126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.047822735533808336);
    msg.setSource(2353U);
    msg.setSourceEntity(119U);
    msg.setDestination(36978U);
    msg.setDestinationEntity(151U);
    msg.op = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.40292705269462226);
    msg.setSource(43155U);
    msg.setSourceEntity(194U);
    msg.setDestination(4551U);
    msg.setDestinationEntity(160U);
    msg.op = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.6648053875225042);
    msg.setSource(18171U);
    msg.setSourceEntity(64U);
    msg.setDestination(52115U);
    msg.setDestinationEntity(136U);
    msg.op = 143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.6786915126789334);
    msg.setSource(13672U);
    msg.setSourceEntity(140U);
    msg.setDestination(9933U);
    msg.setDestinationEntity(140U);
    msg.timeout = 2206U;
    msg.lat = 0.9552927996126199;
    msg.lon = 0.7873307296180206;
    msg.z = 0.08544232723213396;
    msg.z_units = 37U;
    msg.speed = 0.29524506845140197;
    msg.speed_units = 153U;
    msg.roll = 0.13285401024558618;
    msg.pitch = 0.49508561478189717;
    msg.yaw = 0.41016506196848335;
    msg.custom.assign("WSPCKVGYEKXJZPCOUKHGWRJYDQUCOPZCLBBRDVFTPQGRDSHQZHMJUQSCTKWGXVOYLTKSYLEULZQRXXASVEKMJVMGBJOHQEZXFSKAMRTJQSSZVINJOYJNADYCCDFGIDTBGDEWAZQNRWIAHVPLULTRFTUIPXCAXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.6423521116447335);
    msg.setSource(615U);
    msg.setSourceEntity(4U);
    msg.setDestination(65456U);
    msg.setDestinationEntity(52U);
    msg.timeout = 32251U;
    msg.lat = 0.984712976013229;
    msg.lon = 0.997226568146248;
    msg.z = 0.676021021977614;
    msg.z_units = 230U;
    msg.speed = 0.38669983175388056;
    msg.speed_units = 31U;
    msg.roll = 0.9737615420011517;
    msg.pitch = 0.8029389736025921;
    msg.yaw = 0.17481485285313847;
    msg.custom.assign("PFDLFCEIDTAJKAFZBUKUPYMFSZXKKQMFUWMBWZMXORQRWDEBNXSPIIHGYABPXRJQMHVJQRTARDMIEYLJOETOIYOQCDUBTIDSPGUBKVHEPBMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.6416577115384879);
    msg.setSource(39443U);
    msg.setSourceEntity(217U);
    msg.setDestination(6158U);
    msg.setDestinationEntity(253U);
    msg.timeout = 36322U;
    msg.lat = 0.21801918929163233;
    msg.lon = 0.4434877667287763;
    msg.z = 0.8260324191515938;
    msg.z_units = 152U;
    msg.speed = 0.9371718447648446;
    msg.speed_units = 76U;
    msg.roll = 0.3609414118624519;
    msg.pitch = 0.9093491892177654;
    msg.yaw = 0.14797737046661485;
    msg.custom.assign("LNBTCXPPLVRKEZKAUJSTNHMLYMSLMXGTJQHKKRVOYSSIGEVQYUEYLLROYMFEDQFAWVFWCFWREANYQHWVOHQVCDXNZBIGJPTIXRCRZSKYRFGPSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.21615292761340366);
    msg.setSource(34424U);
    msg.setSourceEntity(14U);
    msg.setDestination(56692U);
    msg.setDestinationEntity(82U);
    msg.timeout = 6719U;
    msg.lat = 0.6142122560218032;
    msg.lon = 0.13937442777062525;
    msg.z = 0.6755213256628435;
    msg.z_units = 178U;
    msg.speed = 0.21063309192703772;
    msg.speed_units = 2U;
    msg.duration = 35536U;
    msg.radius = 0.8994250244810498;
    msg.flags = 226U;
    msg.custom.assign("WRWQUNPREGKTZKRIGJONDBRKEBLCMVAVYCIADGJNZYLCNUMQFETGHVKTEORITKELRMCVATXYJOOPNCMKIMPTPOVEOJDBWWUZAIPTJUFCAZHDEPPFEJCUHTUYUEMWIZGWWGDYMKHICDWLPWLBSTXQDHOBQJYBLRQNBAJSVNYMJOQDXVAXCRXAYUZSLVSLJDMWVGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.7173833999415922);
    msg.setSource(19439U);
    msg.setSourceEntity(207U);
    msg.setDestination(59881U);
    msg.setDestinationEntity(80U);
    msg.timeout = 10140U;
    msg.lat = 0.212755830435028;
    msg.lon = 0.9410887034198565;
    msg.z = 0.28197662986566707;
    msg.z_units = 66U;
    msg.speed = 0.7358213716143833;
    msg.speed_units = 153U;
    msg.duration = 32010U;
    msg.radius = 0.5385528347511179;
    msg.flags = 172U;
    msg.custom.assign("YZSFAYXEWFPVXFVVGAVGLEBXCSFUJHDRCKULMLPVQMIKSGKBWDOANIBDMGMJRNSEQLWIYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.9933715308775124);
    msg.setSource(36222U);
    msg.setSourceEntity(25U);
    msg.setDestination(56978U);
    msg.setDestinationEntity(161U);
    msg.timeout = 54410U;
    msg.lat = 0.6909646711297093;
    msg.lon = 0.8427159341184535;
    msg.z = 0.2921286728192325;
    msg.z_units = 32U;
    msg.speed = 0.8100729688449818;
    msg.speed_units = 186U;
    msg.duration = 13105U;
    msg.radius = 0.9710932855025519;
    msg.flags = 201U;
    msg.custom.assign("JNDCUQJWLQXOVDMPDFHMRVTQOWGUGFJLCCLZKKSRWDZYPUSEFIOVGUHWLOMKLCFYXSTRIREKWNKOLVEMKVQUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.06210805994875923);
    msg.setSource(40933U);
    msg.setSourceEntity(109U);
    msg.setDestination(50855U);
    msg.setDestinationEntity(120U);
    msg.custom.assign("GYLJWFEQVXBUNXAISJAYSDHXRTFNMTLEBVKWUPPGGVHZQXFBHOKMBIUSCRZMENZNFQSXRJJAWGXEIHKPVNUHIFMAOTSCVMOAUPJDQHOEBKJNOFAIZPOFJXRKNFAICKEDUZQPAYTBESURNDQBTZPQBTYOMLIJPWYGCYLGXDPZSALKXKRLQJWHEEDWLZVNIDMRLDHXMSNTJGIURPTOHOWBWVLCRYCEQCYMAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.9638455915227345);
    msg.setSource(2602U);
    msg.setSourceEntity(28U);
    msg.setDestination(28927U);
    msg.setDestinationEntity(25U);
    msg.custom.assign("INXNBLHOLBHAUORSKBBVQCAMLZDLSNRUHCZVTMLCKAOVTREREUTYEGGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.034382731065636274);
    msg.setSource(59404U);
    msg.setSourceEntity(18U);
    msg.setDestination(31162U);
    msg.setDestinationEntity(140U);
    msg.custom.assign("AOAFXSAFAUVMHKFZLPIEVZJLXJJAEJULRBMLSAECFIRQIJSBKYCCSIDEKOTGQYIVKTXROCGKHYUNTPZFPXBSWYXSVSIMHMVCRPCZGIMZQCKCWVUEZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.9338775241320263);
    msg.setSource(65453U);
    msg.setSourceEntity(103U);
    msg.setDestination(35300U);
    msg.setDestinationEntity(195U);
    msg.timeout = 37603U;
    msg.lat = 0.34181067183020597;
    msg.lon = 0.46615480452295066;
    msg.z = 0.27122329259985767;
    msg.z_units = 104U;
    msg.duration = 30812U;
    msg.speed = 0.861773832761033;
    msg.speed_units = 70U;
    msg.type = 229U;
    msg.radius = 0.09070637642985002;
    msg.length = 0.4808763408013438;
    msg.bearing = 0.5755332505373135;
    msg.direction = 180U;
    msg.custom.assign("KUWYNCNHEHJVKKOFNIZRPGTCHBDTMDSSAXKLFBSWKQVTISBZAAWGVVYRUPQFMXAUWZXDJHMOMBWUYFCBQQDXCAIOYLBNAMRSNYRELKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.2827836705946103);
    msg.setSource(17655U);
    msg.setSourceEntity(207U);
    msg.setDestination(30675U);
    msg.setDestinationEntity(87U);
    msg.timeout = 41437U;
    msg.lat = 0.47838429430924634;
    msg.lon = 0.04037662752277982;
    msg.z = 0.5205161464268682;
    msg.z_units = 221U;
    msg.duration = 26216U;
    msg.speed = 0.2685853430266306;
    msg.speed_units = 63U;
    msg.type = 156U;
    msg.radius = 0.645462950342782;
    msg.length = 0.3839055691725769;
    msg.bearing = 0.6094728471519205;
    msg.direction = 206U;
    msg.custom.assign("LRMRZMYYGVITRRGTGSOVKYXJWVQJPHOONIQNPIXUZPJUFXKYOJSCQLIPOEHNASPMCOUOWDVUTWKWRDNWYXAKHLNYOTMFFJMNILZHIKSVLBBFEHTNREZAZYFGASTWDBXGEUQCPABCHBQZNJTMZFUHBTQRVGEAXDJFEVKULUHHODXCZJSYHQBWQBSADAEGDRQKEGRWICOXCITMDEYZGJLFFKZBPPCMIVTXRUYPXCANWQKMVVL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.19710198607034402);
    msg.setSource(1320U);
    msg.setSourceEntity(97U);
    msg.setDestination(61021U);
    msg.setDestinationEntity(53U);
    msg.timeout = 42308U;
    msg.lat = 0.04069212362262331;
    msg.lon = 0.6886676009704754;
    msg.z = 0.7715123765750309;
    msg.z_units = 84U;
    msg.duration = 37581U;
    msg.speed = 0.1771878660956221;
    msg.speed_units = 232U;
    msg.type = 51U;
    msg.radius = 0.4736870990226022;
    msg.length = 0.1280579279678975;
    msg.bearing = 0.24882134577796167;
    msg.direction = 96U;
    msg.custom.assign("QCWNVJTNNWEZMPNJFYCFDDORYLYALYZOMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.17715900036943832);
    msg.setSource(62073U);
    msg.setSourceEntity(116U);
    msg.setDestination(58356U);
    msg.setDestinationEntity(155U);
    msg.duration = 7904U;
    msg.custom.assign("FOOGULRUPSMIIXKGQBOYFSRTNYDVOZVJAPRKCQLKSWKPJIWMCVGRXBGHGSZPMFRHFBEAEQZCOADVWLWWZLHSXHUTLOHNXMXZYBJMZOGOEBICVZIVSUNZAYMWHFGNFXDLFSHZNXRDYCJIGUKMKVWIQYTKFPBACVYELDQVLEMEPBMWQVEWIIIWQPSUTNQUZFLHGTGJTYAQFRDUCBANTKNLRJJTPHKCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.9282739791649645);
    msg.setSource(30602U);
    msg.setSourceEntity(240U);
    msg.setDestination(49712U);
    msg.setDestinationEntity(228U);
    msg.duration = 35286U;
    msg.custom.assign("MYYYDDJHTJEWHDRGEDFDKLOROLBQQFNFDGUWVBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.9702839250933649);
    msg.setSource(34551U);
    msg.setSourceEntity(216U);
    msg.setDestination(33291U);
    msg.setDestinationEntity(72U);
    msg.duration = 16592U;
    msg.custom.assign("EZKBBHMSNHFEOZCXCRTJJXRRWVPOKNQMUOMAZNIXCBIUNUGSNWRFZYHXBHMYGJSVAAQHQTGGKYZKTRYESSIBDELZVYEJWCTKPJTJNIXIXADMBRJQODRWOWYAPUDIOXPSCKBQDTLNXQYZYPLVWFETZEJPCQDHLKOGVENNPARTWMIJRPMVFQHHUXGHCWKTLLVFMVOUNUQFMIVWSRGQACAEBPZLIMBLTALADUGSOYPHGSBKYZFOJIFDFWCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.8113987471896714);
    msg.setSource(26464U);
    msg.setSourceEntity(12U);
    msg.setDestination(50677U);
    msg.setDestinationEntity(35U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.445641620316951;
    msg.control.set(tmp_msg_0);
    msg.duration = 3719U;
    msg.custom.assign("UNPPURPAKMARMFWCAOVMBQWFLWNZDSZZWFSHVOGQIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.6333413641621524);
    msg.setSource(40921U);
    msg.setSourceEntity(224U);
    msg.setDestination(34867U);
    msg.setDestinationEntity(121U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.07410387677075181;
    msg.control.set(tmp_msg_0);
    msg.duration = 5974U;
    msg.custom.assign("FHKVMNRTYJAHLGBLPBCHAYAUXTXPMPGXSWXQUTNAVDNGOILQELFHSRUKMTTNGBGVZUPJOYCETNGYKGQUPGNJTXRPLSQRUIAQJYAOYCOINLHTRODSVHHMWHEXWSXFDZKJDNNXIQKHCEBMNYQRDOPAVTY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.6825918578406501);
    msg.setSource(19047U);
    msg.setSourceEntity(70U);
    msg.setDestination(18691U);
    msg.setDestinationEntity(139U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7200886474052886;
    tmp_msg_0.speed_units = 248U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11848U;
    msg.custom.assign("APNNCUSXXKMOCAMHHELJNHGZEDWIGBIYCKRFEUQLRQRHMUSVYZZVDRKBIAEMDCPQDOCPDVNBJZBTEOHVNVBOKLPVQIUUXREGMDQTSFLJZVYAKRKXJTLWLUPAWIRXCHMYNWDJUFWFGSLQUCCSIJGIYNRTEXCWTTFJMYZOIYJAIWRKVWDTKOZFPVGPUTJBZNBNAJPTUSOEAKQYYMHXALHERMQNOSXFEOWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.2824933647155202);
    msg.setSource(20722U);
    msg.setSourceEntity(237U);
    msg.setDestination(46070U);
    msg.setDestinationEntity(99U);
    msg.timeout = 54118U;
    msg.lat = 0.8960447253540235;
    msg.lon = 0.8934660683318393;
    msg.z = 0.8084720598830286;
    msg.z_units = 99U;
    msg.speed = 0.47512561502413286;
    msg.speed_units = 54U;
    msg.bearing = 0.18297660103058333;
    msg.cross_angle = 0.7502192686117828;
    msg.width = 0.5116891905739518;
    msg.length = 0.17760986198782203;
    msg.hstep = 0.06266231761055407;
    msg.coff = 204U;
    msg.alternation = 164U;
    msg.flags = 209U;
    msg.custom.assign("FSFFJCIKANPKIAHRBMTRVLZUWUPAVBOZWUKFBPWWIOVPONYYGPGFXTAGSKCHNPJSSCWYUHFLNBJKDTAZXOGTMONODMBEDQRUQWZVOZVJAWFLAGQUQMXMXIVFBSYRUDLUKCRPDZVZLIMLMBTWANHENCUOEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.30490415531363924);
    msg.setSource(23646U);
    msg.setSourceEntity(217U);
    msg.setDestination(8344U);
    msg.setDestinationEntity(169U);
    msg.timeout = 39566U;
    msg.lat = 0.5858872106878296;
    msg.lon = 0.5857617726607917;
    msg.z = 0.13597543524513012;
    msg.z_units = 145U;
    msg.speed = 0.2133927541742361;
    msg.speed_units = 247U;
    msg.bearing = 0.8104794190314251;
    msg.cross_angle = 0.14881423767246682;
    msg.width = 0.17592317078090636;
    msg.length = 0.4219369489317878;
    msg.hstep = 0.4056603687522907;
    msg.coff = 58U;
    msg.alternation = 171U;
    msg.flags = 31U;
    msg.custom.assign("OBPVJASSFNIRLRDGYJFPTETEKLXDPHYDMKMZELXUHWBAEWODMKQCSWJZCXUQFZZIVCDWIQXCPWYWXDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.9219909996064651);
    msg.setSource(16337U);
    msg.setSourceEntity(149U);
    msg.setDestination(53777U);
    msg.setDestinationEntity(88U);
    msg.timeout = 54294U;
    msg.lat = 0.36208522867277293;
    msg.lon = 0.5091483142861855;
    msg.z = 0.7798318484688834;
    msg.z_units = 239U;
    msg.speed = 0.28367087380143263;
    msg.speed_units = 210U;
    msg.bearing = 0.2575850045724043;
    msg.cross_angle = 0.36437064509587136;
    msg.width = 0.2740911017832548;
    msg.length = 0.7768862576657662;
    msg.hstep = 0.9295301450652136;
    msg.coff = 79U;
    msg.alternation = 179U;
    msg.flags = 124U;
    msg.custom.assign("WGNZMAJWEVAKGADBROMLQUFEVMXWAPEOLZGHTAUDGGOLUDFOAPZLQKTPSQQBXF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.6334808979646663);
    msg.setSource(2063U);
    msg.setSourceEntity(174U);
    msg.setDestination(54854U);
    msg.setDestinationEntity(197U);
    msg.timeout = 7432U;
    msg.lat = 0.9941510833403506;
    msg.lon = 0.4993728295389246;
    msg.z = 0.3137160926912127;
    msg.z_units = 160U;
    msg.speed = 0.1938347701628994;
    msg.speed_units = 193U;
    msg.custom.assign("CLVJGQXPOPOSREEPBLXNMGZNFWBVLZDPMSUVEFFQCBWJQHIQCHYXUXVAVSBM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.5580608891923807);
    msg.setSource(48498U);
    msg.setSourceEntity(33U);
    msg.setDestination(17060U);
    msg.setDestinationEntity(174U);
    msg.timeout = 37627U;
    msg.lat = 0.25343227111499744;
    msg.lon = 0.021804280980630808;
    msg.z = 0.3628119574677554;
    msg.z_units = 149U;
    msg.speed = 0.6147889071401014;
    msg.speed_units = 152U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.42630499845400327;
    tmp_msg_0.y = 0.03122097588401196;
    tmp_msg_0.z = 0.22424708253244774;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OSZCICHAXHYMIMWYPCYLFHMPDZYCEWOKWDESGIVLPDFXCIWBELOMBKUVIKHVPNBWWSXLTUHMNXUXMUQMPTJQCGIVEGQRFAWCFGSFOYKRJEYBRZPNHMKQCNLOIYARUGSHDMAUOQRYCRADJKQSNUSRSBKQEZKHABTSCLEMVDZENLOLBTUIIGQOQHYBVKLHTNFTFGXWDNQBTRZUPJFDDTPAAYWJWVGNZZRGUOJTXLTVKEVSFPFEVPOGJXIADZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.5049206426453581);
    msg.setSource(16640U);
    msg.setSourceEntity(138U);
    msg.setDestination(33996U);
    msg.setDestinationEntity(231U);
    msg.timeout = 50942U;
    msg.lat = 0.09794011807159264;
    msg.lon = 0.7793946335505074;
    msg.z = 0.4819463971986053;
    msg.z_units = 148U;
    msg.speed = 0.9477988120979768;
    msg.speed_units = 172U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5315906109579926;
    tmp_msg_0.y = 0.5629996486382849;
    tmp_msg_0.z = 0.5599486591851456;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RJJOATGHCFYGVTFRWEEBZOVCJMULQZKLVSITZTUBBZEAJXHWUOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.36047474037489147);
    msg.setSource(31589U);
    msg.setSourceEntity(67U);
    msg.setDestination(60124U);
    msg.setDestinationEntity(16U);
    msg.x = 0.23098798312477264;
    msg.y = 0.12878398094775212;
    msg.z = 0.9607990650297855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.1925298662432352);
    msg.setSource(34696U);
    msg.setSourceEntity(81U);
    msg.setDestination(9082U);
    msg.setDestinationEntity(235U);
    msg.x = 0.8938735816400589;
    msg.y = 0.9620167954573116;
    msg.z = 0.38983858640458313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.9610650920870671);
    msg.setSource(64712U);
    msg.setSourceEntity(223U);
    msg.setDestination(58331U);
    msg.setDestinationEntity(106U);
    msg.x = 0.5880309681695098;
    msg.y = 0.45499059961251453;
    msg.z = 0.07473901188397725;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.407869682614159);
    msg.setSource(15383U);
    msg.setSourceEntity(18U);
    msg.setDestination(30285U);
    msg.setDestinationEntity(172U);
    msg.timeout = 22754U;
    msg.lat = 0.10581938545768643;
    msg.lon = 0.6617982076459801;
    msg.z = 0.22524447385338908;
    msg.z_units = 189U;
    msg.amplitude = 0.03342662294687637;
    msg.pitch = 0.5889292926939965;
    msg.speed = 0.2829073256624016;
    msg.speed_units = 93U;
    msg.custom.assign("OXXSRNHVBGYQLCOYPWRIKEMYCLQMBRSJUGAAHRHPWDIKCCEOPTAMXXRMRGNKSOUWFGESWATGQIJGTEFDTVNKENNQOTTWYWJDJBLPEHDFFFRDV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.8658020019527571);
    msg.setSource(62050U);
    msg.setSourceEntity(122U);
    msg.setDestination(31977U);
    msg.setDestinationEntity(249U);
    msg.timeout = 57362U;
    msg.lat = 0.3351809244416679;
    msg.lon = 0.2678352130249697;
    msg.z = 0.00032169377899826657;
    msg.z_units = 210U;
    msg.amplitude = 0.797320665923956;
    msg.pitch = 0.11447461354465827;
    msg.speed = 0.11012923964345178;
    msg.speed_units = 124U;
    msg.custom.assign("QWWFUNOTYDAMNKHBCGHKXTYADYMREPGSBVZXLNFWYIZVFESVBXCJSYIJWIUTOMVQLL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.2763431882255809);
    msg.setSource(36670U);
    msg.setSourceEntity(176U);
    msg.setDestination(64963U);
    msg.setDestinationEntity(50U);
    msg.timeout = 44265U;
    msg.lat = 0.1834204440867797;
    msg.lon = 0.20249135075039337;
    msg.z = 0.5227358335051936;
    msg.z_units = 224U;
    msg.amplitude = 0.03898862486568777;
    msg.pitch = 0.8765529417049998;
    msg.speed = 0.14423658705056175;
    msg.speed_units = 47U;
    msg.custom.assign("VYLXCNIUNTHLVRXZEBAYFQKJPDKEQJJZHUWXYFMYZZPCUQKTZKJSXGVWZTAHOAIGERMFJQFPOSHBCCEKBLQVKGDSPVMIEBVDZXDJVTCSHLAYANSIWTOLQFRFSPBWJYVNTYTRXQXUOFMDIPUPEJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.876479158194456);
    msg.setSource(20615U);
    msg.setSourceEntity(161U);
    msg.setDestination(53662U);
    msg.setDestinationEntity(146U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.14906645243618144);
    msg.setSource(24263U);
    msg.setSourceEntity(140U);
    msg.setDestination(18016U);
    msg.setDestinationEntity(31U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.7991058598683234);
    msg.setSource(13501U);
    msg.setSourceEntity(194U);
    msg.setDestination(62901U);
    msg.setDestinationEntity(80U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.27154872465002033);
    msg.setSource(39369U);
    msg.setSourceEntity(75U);
    msg.setDestination(22616U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.38091681721838566;
    msg.lon = 0.4437595398506158;
    msg.z = 0.4906142691663825;
    msg.z_units = 251U;
    msg.radius = 0.7018173738911077;
    msg.duration = 53314U;
    msg.speed = 0.0676802197448858;
    msg.speed_units = 27U;
    msg.custom.assign("VUDXNHHLXRPAOHYYOUTODNLTFZFXMMQZYQCGHESXEZSYYXEHGBKFDHPEDRLUUTBHWFNQVBNCSDFJGXPEFVQABPASRENCAHMQJMHOGYIZGMJVCYQANTGFNGDVQQGKWLOCLTKTIRMJMCEDWWLVJXVRUHCUILWSROZKUXFTENJWNASJKKVWQWESQZAGLSDMPAFZIIRZOKWRCTWOVPJGAIBLKUBUUNECCXZYAPMDJYVZRPSTDBTMPISIJBIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.22210823579359107);
    msg.setSource(61250U);
    msg.setSourceEntity(100U);
    msg.setDestination(3045U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.5932541398610138;
    msg.lon = 0.9295962600639993;
    msg.z = 0.8063031236236404;
    msg.z_units = 21U;
    msg.radius = 0.589457735953631;
    msg.duration = 62837U;
    msg.speed = 0.9840728978799783;
    msg.speed_units = 147U;
    msg.custom.assign("ZXXIVFABNCXGLGHGVMZVUKFLCOEAOHTAOVJSZQGKSPDKZHJFSXEKEOQYPRIZHHUPQGTALWNWJPKNUNPUXWMWOOINYQISLVNJZYOEAHBEBNBKBSGPAVCFJVWHSDCDWFMUKKFMMCDZVYUTRXDREXRLFYQRRRMWMAJJOLVAJTTUNGPUIRFGUODANTTOQJTSIQFHCIYYJMBIIQXRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.2897807795485777);
    msg.setSource(48179U);
    msg.setSourceEntity(185U);
    msg.setDestination(51246U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.2025607252580427;
    msg.lon = 0.6931232193948127;
    msg.z = 0.005227609133698463;
    msg.z_units = 77U;
    msg.radius = 0.5442183295801509;
    msg.duration = 53178U;
    msg.speed = 0.42480045195162075;
    msg.speed_units = 70U;
    msg.custom.assign("OTGFAPGKHSUFNXOBCJCXRMONMHISDKAIBFQMSMNXGQRQTWETFVVZHEYNKQZLVUMNRPNKPLCYQZAKULEFHCXJLDPGKVCYONWWLZPVCHGADBUUIVEWWDOIJTLYOSOXWQIJITCPAJIWQEYYTSXLIFGGVTQBRFDBZUNSTLUKUECZAQMEUMDYMGFIRCWBBPSJBPJHGMEOMXADRVJQRZOJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.7888106062357887);
    msg.setSource(52205U);
    msg.setSourceEntity(50U);
    msg.setDestination(12061U);
    msg.setDestinationEntity(73U);
    msg.timeout = 14532U;
    msg.flags = 201U;
    msg.lat = 0.8768974517715783;
    msg.lon = 0.16895830665610534;
    msg.start_z = 0.016202173869118264;
    msg.start_z_units = 90U;
    msg.end_z = 0.6615807012229621;
    msg.end_z_units = 102U;
    msg.radius = 0.5668539852117876;
    msg.speed = 0.8177749027438901;
    msg.speed_units = 10U;
    msg.custom.assign("OLQHAOAUCGNXVCUQQZNSCQDMVXOBJKQAQGKAYTXFIYERCGMZVMJBXOAIJLUJFSITPOTYMBVWNKFCZMGTYGXJRELKUEHJFQRBBCSBIHWIHIPLPSKEJIWDGNSOHUHVDRMJEYRRLWWDDMMDSZEYLUBJRQTNTRPWCZANZJKXAVYXPIPLNEICAOTUHABIMPWHYHWGWSAUPNONPZVVZXSEYTHLDPNXMBZYDKDFZWFVSLUEGRGTKFKOFOUCTBF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.6700495654582171);
    msg.setSource(8752U);
    msg.setSourceEntity(243U);
    msg.setDestination(28789U);
    msg.setDestinationEntity(169U);
    msg.timeout = 52035U;
    msg.flags = 155U;
    msg.lat = 0.5030395801970482;
    msg.lon = 0.4269337112847499;
    msg.start_z = 0.7446608413979188;
    msg.start_z_units = 213U;
    msg.end_z = 0.8660080018748539;
    msg.end_z_units = 55U;
    msg.radius = 0.25593112460363887;
    msg.speed = 0.7691341675797074;
    msg.speed_units = 96U;
    msg.custom.assign("OTHGHVFUZGMFWTUDWMJVFAHOIEDUTHVDYQVWDWUMDPTGPKIPYPSJNDAKKQOLFJZERFJZZLQJGWUVWCIUXOQJQNJNSFBABXLIURURDVITHSOAOLFCWTNRBYXVZZCOCMUMYDALNLPDGNQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.46528338461227314);
    msg.setSource(48873U);
    msg.setSourceEntity(3U);
    msg.setDestination(861U);
    msg.setDestinationEntity(165U);
    msg.timeout = 1608U;
    msg.flags = 65U;
    msg.lat = 0.8663258096602303;
    msg.lon = 0.3792915992229364;
    msg.start_z = 0.5148390982245286;
    msg.start_z_units = 86U;
    msg.end_z = 0.36413482158441046;
    msg.end_z_units = 38U;
    msg.radius = 0.24732622461863263;
    msg.speed = 0.5259671701968603;
    msg.speed_units = 179U;
    msg.custom.assign("AOSQKJBGVGCWJXRYLFWOHGLWAITXUHHGIUFHDBZDDYHEVQUCRTIJSVSLQLEPSVQOBUQFNOEGNXBXSCBZQVOBEVELEJRYXMAYTTINIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.24948579825478012);
    msg.setSource(58701U);
    msg.setSourceEntity(112U);
    msg.setDestination(15618U);
    msg.setDestinationEntity(203U);
    msg.timeout = 60697U;
    msg.lat = 0.3945570790731008;
    msg.lon = 0.2935891687901395;
    msg.z = 0.519771526196909;
    msg.z_units = 85U;
    msg.speed = 0.8371150323035541;
    msg.speed_units = 214U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9408883116748543;
    tmp_msg_0.y = 0.8327109224806098;
    tmp_msg_0.z = 0.23849259591449834;
    tmp_msg_0.t = 0.6233539742867076;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AMHYIGDGCKEUQJGSVWYURYEAUUONTQSGMVNOKHPDXBDNXLOSCVADRFZZTWLRVPELWPBTXHJQQLQNDXLRYAYCJKEJMDRMAEBKUEMJWQINNAPBJUPGDSGPDSYKRKMFMAUXNZBPEGFBXBAUWMUXJZYIPZFFFOLDROVTKVQFWTXVWERVZFKBCNQCFGSYMCIECNITIWWKLTRHGRIZSIONJAXOTHSHLZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.32050447758857714);
    msg.setSource(24095U);
    msg.setSourceEntity(113U);
    msg.setDestination(1230U);
    msg.setDestinationEntity(8U);
    msg.timeout = 11270U;
    msg.lat = 0.10380039745711589;
    msg.lon = 0.439609904088312;
    msg.z = 0.987903783640887;
    msg.z_units = 44U;
    msg.speed = 0.7880373749464438;
    msg.speed_units = 10U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8129213770817759;
    tmp_msg_0.y = 0.3758368116341865;
    tmp_msg_0.z = 0.9262098175872164;
    tmp_msg_0.t = 0.016644882913955605;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PSIEABWBUFZCVTVFFLTAZWHAQYCDRWBPLPDTCXPQJYDZHTXSFLXLIPKREXJGCJWMYTQSNMZGOWIRNIYIBACJPCXHRJTWRCYETBKQWDNAVLOEJZNYEUHNBVAKBDRFKKGVBEMCUOSSFUXZIPPHUDGJRGXMTHJANARGANINHSTQEZVONSKGFDMLXLMOCUXOWGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.8806592831445459);
    msg.setSource(38435U);
    msg.setSourceEntity(192U);
    msg.setDestination(24817U);
    msg.setDestinationEntity(29U);
    msg.timeout = 30285U;
    msg.lat = 0.8719193326648128;
    msg.lon = 0.6961896247739133;
    msg.z = 0.7781562405316595;
    msg.z_units = 17U;
    msg.speed = 0.4717631296692215;
    msg.speed_units = 162U;
    msg.custom.assign("VIKHDJLRZTDBZJOOTGEQSTTAZJMQZFQJDWGOIUCNKMRZMUOFHGNHSHQNWTPWBDIPRXEKLSNVBMOHNWYXZFJBEIGDMUMYURABZMVNAQXCWEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.002520604430092277);
    msg.setSource(14032U);
    msg.setSourceEntity(176U);
    msg.setDestination(34U);
    msg.setDestinationEntity(37U);
    msg.x = 0.20078392571557757;
    msg.y = 0.5785797516907474;
    msg.z = 0.516555201387361;
    msg.t = 0.13534692399555215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.1691372827008415);
    msg.setSource(20224U);
    msg.setSourceEntity(186U);
    msg.setDestination(49104U);
    msg.setDestinationEntity(206U);
    msg.x = 0.4554444807105915;
    msg.y = 0.8842851136560206;
    msg.z = 0.4820405651921368;
    msg.t = 0.7092817006089618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.5588593350131973);
    msg.setSource(33867U);
    msg.setSourceEntity(2U);
    msg.setDestination(9599U);
    msg.setDestinationEntity(105U);
    msg.x = 0.6778503401323599;
    msg.y = 0.7880132837889697;
    msg.z = 0.28789579902822005;
    msg.t = 0.9991536073298922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.19646183659327665);
    msg.setSource(10334U);
    msg.setSourceEntity(205U);
    msg.setDestination(15913U);
    msg.setDestinationEntity(55U);
    msg.timeout = 11361U;
    msg.name.assign("TQAUWNOCXAYQRGVBCTQOWHXMRMXQJHJGVUKYNSKRRFYHNIJZKOXPWTNKZYDEQIPZTZYNVEFUJMZCNNTVJLHDQFAHPPITPFFBGAHVRHBUOIGHOFLJGJBMXLVZDOVGMBSRDYKRDQZKPLWLKJZUQKEXKBDHUSZHMIEARWJSLVOLSIFPEDYSOANPFDIC");
    msg.custom.assign("PZDBQKJHDXZYPYTSQNSYKYFTBLNBQONVCNXIHTHQWMBQDVIKWJKSUXMWEFWILKVBLNSNJVRQAYLGGMHFSPOWFEUIGHMCCCHRGDMEQDZJEVOHTKZVGXTBMRERBWAUVSEQGTHBAWZVGJWILREDLMFCTDLBSJYKBYPXRFOWCCYEUKJAPFHLRKXUREO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.43897318548689557);
    msg.setSource(29986U);
    msg.setSourceEntity(121U);
    msg.setDestination(4420U);
    msg.setDestinationEntity(172U);
    msg.timeout = 45079U;
    msg.name.assign("CQEEQMSUPIWQNENUKSMOTZPYDCDNKMHSLPRAANPQIVMSUXLMPVPXMARJERKQOMYJDQRJBYCEAYHKPUXEZSCXWLXRJDBFAXXFCGNHTNKH");
    msg.custom.assign("NXOJUVECVPZQDWGZHKYBYDAMLOURTFJBRBGTLENDTFAOVKQDISQZUZXNRXFZECWMLTSLBEVESNWGZLBKGEVQULXCVZCBDGAWIFQVNGJJHQKQFEVWRYQISDUYBTAOKEC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.38821466900486734);
    msg.setSource(23548U);
    msg.setSourceEntity(188U);
    msg.setDestination(32150U);
    msg.setDestinationEntity(14U);
    msg.timeout = 28342U;
    msg.name.assign("YTYYOACHPGXWBXJQIVGRWNZSYQMTHLQVVOEMQASZXQVSWUHISSPPBFUQTESEUALXKPNAKFCMUBRCLGLLYFYWWRBHHECGDEVLLNPPUBZNJMJGTNRRVWREPVHVSALSVEOQENOOUQUJBMDYXIPDCOKARJFGZXFUKGOFZNDCJWZRXKZBIKTIHWNHDILMEZMSKN");
    msg.custom.assign("OXXJWPDPGGBHIQNKETAWEQEFAQHNNSRXQTASBSDMOYCPOPFWDVUDYAOZRDZQKOQUQBDAZKZSINFKKTSGLMTGNZRBOXXISTMBQLCJCVRPAZYUSYTLHCJUGXGVZYHROTCJREFYHKVRKKRWIPFWQYMPEDYBIAUXHBIXMPZIJUGMMZPNHXKOVLEGVAFITLELSKZOCICNFBWHFYBC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.045661375956183914);
    msg.setSource(62934U);
    msg.setSourceEntity(203U);
    msg.setDestination(12415U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.7449911331926683;
    msg.lon = 0.6424264381630976;
    msg.z = 0.6646465109472017;
    msg.z_units = 59U;
    msg.speed = 0.5748158888646898;
    msg.speed_units = 251U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8869418073469354;
    tmp_msg_0.y = 0.13703770370399349;
    tmp_msg_0.z = 0.5955693842153313;
    tmp_msg_0.t = 0.37595370072597445;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 65223U;
    tmp_msg_1.off_x = 0.8713081513137342;
    tmp_msg_1.off_y = 0.7023466824392691;
    tmp_msg_1.off_z = 0.1969227517627402;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6097206583392062;
    msg.custom.assign("GLFGBYVWEORIWRQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.26187804537020665);
    msg.setSource(9995U);
    msg.setSourceEntity(88U);
    msg.setDestination(24752U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.855879203060613;
    msg.lon = 0.9897267246966924;
    msg.z = 0.8552347865013001;
    msg.z_units = 124U;
    msg.speed = 0.14573288068615387;
    msg.speed_units = 161U;
    msg.start_time = 0.6034974092596093;
    msg.custom.assign("CLEGKNBXCUGTTDEWWBDYSPPZKRZHWNJRDQIBNCDMOQLPAZXJQNMIYIPKPNJFLHJVNMZWSTIQKYGLVUSFFCTTXKAHHZMIOAOCEYKCYLPEVLWMVNCZMVUBDXGOASERVEQYOZXOWQJXJLFXWPRNTVQSGGTSPWIGUFMAUUMOMMNAXRYHTSBSKIVSIFTCFKRQBLETDBNUDXIGWAUAKLZCDQGHXWAHDZUBJKBREAHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.8457168246983173);
    msg.setSource(53271U);
    msg.setSourceEntity(82U);
    msg.setDestination(59081U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.06137589859772463;
    msg.lon = 0.6153663754160076;
    msg.z = 0.6414807493584758;
    msg.z_units = 24U;
    msg.speed = 0.6822606134942623;
    msg.speed_units = 4U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6460636505121407;
    tmp_msg_0.y = 0.293112510067964;
    tmp_msg_0.z = 0.9321008203422474;
    tmp_msg_0.t = 0.8247980467363428;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6946316061493931;
    msg.custom.assign("FEHVZXQGKMGJITJUTBBUKWSUIEUDMRBIQHABKJNN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.14359515048509008);
    msg.setSource(4389U);
    msg.setSourceEntity(18U);
    msg.setDestination(52152U);
    msg.setDestinationEntity(26U);
    msg.vid = 62516U;
    msg.off_x = 0.3155142259583943;
    msg.off_y = 0.887361217398602;
    msg.off_z = 0.9192495797355377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.9928856395683398);
    msg.setSource(48491U);
    msg.setSourceEntity(4U);
    msg.setDestination(19727U);
    msg.setDestinationEntity(236U);
    msg.vid = 19369U;
    msg.off_x = 0.38028744099929823;
    msg.off_y = 0.06761768337853402;
    msg.off_z = 0.30121136908481794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.08171677193676663);
    msg.setSource(21548U);
    msg.setSourceEntity(77U);
    msg.setDestination(13656U);
    msg.setDestinationEntity(245U);
    msg.vid = 36850U;
    msg.off_x = 0.7713578737061596;
    msg.off_y = 0.568398496294773;
    msg.off_z = 0.12254372174987649;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.01078975571820917);
    msg.setSource(38713U);
    msg.setSourceEntity(152U);
    msg.setDestination(9606U);
    msg.setDestinationEntity(115U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.4848416161919997);
    msg.setSource(54975U);
    msg.setSourceEntity(46U);
    msg.setDestination(48227U);
    msg.setDestinationEntity(210U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.16796763865313102);
    msg.setSource(31595U);
    msg.setSourceEntity(17U);
    msg.setDestination(47169U);
    msg.setDestinationEntity(208U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.7225900915097572);
    msg.setSource(55714U);
    msg.setSourceEntity(24U);
    msg.setDestination(52466U);
    msg.setDestinationEntity(44U);
    msg.mid = 64744U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.25887800401659844);
    msg.setSource(5095U);
    msg.setSourceEntity(98U);
    msg.setDestination(43889U);
    msg.setDestinationEntity(119U);
    msg.mid = 30081U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.3681063063046972);
    msg.setSource(31056U);
    msg.setSourceEntity(242U);
    msg.setDestination(5243U);
    msg.setDestinationEntity(184U);
    msg.mid = 3406U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.6456620982737036);
    msg.setSource(4558U);
    msg.setSourceEntity(205U);
    msg.setDestination(10086U);
    msg.setDestinationEntity(79U);
    msg.state = 246U;
    msg.eta = 51892U;
    msg.info.assign("DELXUPAEWUZJFGKMJQQQYORLPOWZZHFMSPJTKPGCYBWREKHCBYRBXFRZJYXTKALOVUABWZKZCTQMYPIIHERHJDRDDWQOAB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.669411898794956);
    msg.setSource(11581U);
    msg.setSourceEntity(139U);
    msg.setDestination(2770U);
    msg.setDestinationEntity(130U);
    msg.state = 61U;
    msg.eta = 7270U;
    msg.info.assign("FUZIYFWOEKCMQJFGITLNIDDMLXARPJUPMISTCBDNJXQUEJSSRGMMNHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.9034899611398924);
    msg.setSource(1701U);
    msg.setSourceEntity(190U);
    msg.setDestination(55058U);
    msg.setDestinationEntity(100U);
    msg.state = 114U;
    msg.eta = 57248U;
    msg.info.assign("MWCVSZWMTEFFMLVOKVMFHNRLLPTCZLRH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.7166929659286125);
    msg.setSource(53005U);
    msg.setSourceEntity(111U);
    msg.setDestination(48771U);
    msg.setDestinationEntity(157U);
    msg.system = 52588U;
    msg.duration = 59303U;
    msg.speed = 0.2143421509471929;
    msg.speed_units = 48U;
    msg.x = 0.47585265843501934;
    msg.y = 0.8923230859605974;
    msg.z = 0.27126996078373355;
    msg.z_units = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.3264821283396301);
    msg.setSource(32207U);
    msg.setSourceEntity(127U);
    msg.setDestination(13855U);
    msg.setDestinationEntity(55U);
    msg.system = 48645U;
    msg.duration = 31148U;
    msg.speed = 0.9724802105750898;
    msg.speed_units = 24U;
    msg.x = 0.12248808896616825;
    msg.y = 0.1502626012542082;
    msg.z = 0.4749487227668876;
    msg.z_units = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.1691013543588994);
    msg.setSource(34507U);
    msg.setSourceEntity(186U);
    msg.setDestination(63419U);
    msg.setDestinationEntity(67U);
    msg.system = 63530U;
    msg.duration = 39035U;
    msg.speed = 0.8203205549844762;
    msg.speed_units = 107U;
    msg.x = 0.049503398013413746;
    msg.y = 0.5200087724277843;
    msg.z = 0.6982614890604679;
    msg.z_units = 127U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.06832564541912856);
    msg.setSource(41853U);
    msg.setSourceEntity(161U);
    msg.setDestination(38820U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.4477556771756125;
    msg.lon = 0.9402420038964396;
    msg.speed = 0.7329041039239155;
    msg.speed_units = 201U;
    msg.duration = 60306U;
    msg.sys_a = 10849U;
    msg.sys_b = 42167U;
    msg.move_threshold = 0.47072557778598156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.2724886842224894);
    msg.setSource(9569U);
    msg.setSourceEntity(143U);
    msg.setDestination(27993U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.2772765411134481;
    msg.lon = 0.14478995288268026;
    msg.speed = 0.13464970190583359;
    msg.speed_units = 10U;
    msg.duration = 3331U;
    msg.sys_a = 37675U;
    msg.sys_b = 5150U;
    msg.move_threshold = 0.5888949861480512;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.9683870093773085);
    msg.setSource(5451U);
    msg.setSourceEntity(173U);
    msg.setDestination(1252U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.4106923694715575;
    msg.lon = 0.19625562641526217;
    msg.speed = 0.9791295031577972;
    msg.speed_units = 2U;
    msg.duration = 28802U;
    msg.sys_a = 12167U;
    msg.sys_b = 11390U;
    msg.move_threshold = 0.439271744052524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.7880620562229768);
    msg.setSource(37135U);
    msg.setSourceEntity(12U);
    msg.setDestination(3324U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.13227861694859866;
    msg.lon = 0.787151854472448;
    msg.z = 0.8041653040028615;
    msg.z_units = 50U;
    msg.speed = 0.3776551973140998;
    msg.speed_units = 37U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.11521239646418513;
    tmp_msg_0.lon = 0.6328850066032049;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LBBHSYXJPZUFXGIRDNJYEJXMMPVKXVKUAXWYLRAIBXUTHCBHTGBTXNMZAQGZRKQTQJPWBCPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.8892318133339918);
    msg.setSource(40114U);
    msg.setSourceEntity(112U);
    msg.setDestination(51861U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.3913425909638155;
    msg.lon = 0.8626820157543544;
    msg.z = 0.7087603042690472;
    msg.z_units = 187U;
    msg.speed = 0.7283002971657478;
    msg.speed_units = 200U;
    msg.custom.assign("HGNNVAPNHIDFJNDWFLDNTGCWDTRRWVTVITAYERXOIELDRAGIYFJKJYLWNKMWZYJXVGRQVMMRACABMPYUXTFHVLZOXPBGGEWNWOLYHUSZQCSFJTZEUMYNUYHMBZVJOQEWEUQAWXYQCPDIFKTBCKMFOTBSPFBLPSARPZPOLQGYEDIBTCSDXHKCHHOIBKUOVUOZSZHLZLCUAGEDGQLHJSDUIRWUZBRMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.003676894613788395);
    msg.setSource(57296U);
    msg.setSourceEntity(165U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.45017358372791094;
    msg.lon = 0.5390990145698462;
    msg.z = 0.4082424835314309;
    msg.z_units = 227U;
    msg.speed = 0.15773937448369757;
    msg.speed_units = 199U;
    msg.custom.assign("EKZPBYTATSTFTSMRUIIUAOGMXJEIRXGQNVJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.613218104164203);
    msg.setSource(28335U);
    msg.setSourceEntity(89U);
    msg.setDestination(45070U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.7045114132318306;
    msg.lon = 0.7855132285976131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.7523051905508579);
    msg.setSource(15627U);
    msg.setSourceEntity(62U);
    msg.setDestination(5548U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.21239699713647997;
    msg.lon = 0.9659256823817584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.019608868730711326);
    msg.setSource(11115U);
    msg.setSourceEntity(100U);
    msg.setDestination(51955U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.8553143024475826;
    msg.lon = 0.4443187616052039;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.9594312467359811);
    msg.setSource(62325U);
    msg.setSourceEntity(9U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(2U);
    msg.timeout = 54452U;
    msg.lat = 0.8175799469831098;
    msg.lon = 0.8848684408533596;
    msg.z = 0.9296600163868566;
    msg.z_units = 70U;
    msg.pitch = 0.8077178612546132;
    msg.amplitude = 0.4486637869751463;
    msg.duration = 42427U;
    msg.speed = 0.38274150601420187;
    msg.speed_units = 158U;
    msg.radius = 0.6689667278147748;
    msg.direction = 51U;
    msg.custom.assign("DISRRHCMWCEPPJKCSLXBXEXBZYCJLJLXEKUODGHOKTHVORJSPXZCBANJNCIIATN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.6492626621587765);
    msg.setSource(23235U);
    msg.setSourceEntity(223U);
    msg.setDestination(29568U);
    msg.setDestinationEntity(69U);
    msg.timeout = 61557U;
    msg.lat = 0.6424654255511634;
    msg.lon = 0.4976976269719363;
    msg.z = 0.1355024810132046;
    msg.z_units = 249U;
    msg.pitch = 0.537415230983522;
    msg.amplitude = 0.4915440375771569;
    msg.duration = 18370U;
    msg.speed = 0.3509964393978465;
    msg.speed_units = 89U;
    msg.radius = 0.13231712062768408;
    msg.direction = 213U;
    msg.custom.assign("PZTXVAGXTUXJMEKITN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.8373303027108303);
    msg.setSource(52381U);
    msg.setSourceEntity(227U);
    msg.setDestination(9874U);
    msg.setDestinationEntity(173U);
    msg.timeout = 11210U;
    msg.lat = 0.4133286166904918;
    msg.lon = 0.3475773220672985;
    msg.z = 0.13123549173173255;
    msg.z_units = 178U;
    msg.pitch = 0.6170494005085636;
    msg.amplitude = 0.1881753067624523;
    msg.duration = 16133U;
    msg.speed = 0.21207716128353615;
    msg.speed_units = 7U;
    msg.radius = 0.9593450015070798;
    msg.direction = 110U;
    msg.custom.assign("WYGVZONHJEPNSOHCDXFHUXCDQSUVSMVWFDZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.8951533649691749);
    msg.setSource(58016U);
    msg.setSourceEntity(124U);
    msg.setDestination(5439U);
    msg.setDestinationEntity(222U);
    msg.formation_name.assign("ZUNPNLUAGECABLKXVVEZSJRCWEZVPJOXBWRNJKIWNHIOJVURTKQMBKFZHFCMCSYAHXYVIMIWLGYRZEOLPJGBUQYIQSTACVBALQOXWSTPJOPZVCGUABTKYMRABNZGHVIKT");
    msg.reference_frame = 16U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12138U;
    tmp_msg_0.off_x = 0.5237430968404455;
    tmp_msg_0.off_y = 0.5628710712344519;
    tmp_msg_0.off_z = 0.9325626520856175;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LPBINZDLFKVMFAYTRDPRLAHIOHQMDUESXKORJHYIHSGBSCSYCUCESLUNFCEZNETDBTTWLQYOSATEYDM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.29483807312134525);
    msg.setSource(6040U);
    msg.setSourceEntity(94U);
    msg.setDestination(8619U);
    msg.setDestinationEntity(22U);
    msg.formation_name.assign("YJWSVDQAVEZFAXBSZKQYJSMSMWYPTVXURFKPOWWKXTYBECHOJGSQDUBASIWHFNROUXZSWSBYYGFRJCWKNATFN");
    msg.reference_frame = 42U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6117U;
    tmp_msg_0.off_x = 0.3648544299874188;
    tmp_msg_0.off_y = 0.5017984775500699;
    tmp_msg_0.off_z = 0.5472596182797399;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BHYOGYLDPETPFYIDTYKBVECGABCOMFBACJFASPRBNVXHHUCSDTOIGIBAJHZDESFUOKYVEPIMLXETQVGR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.3938098946592735);
    msg.setSource(44353U);
    msg.setSourceEntity(60U);
    msg.setDestination(60106U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("NSPUTTMXDXTNVMKICHUFDUWWTFEVPZGKPILAHDOWOQXHFZYGAZUTAVBJBELBVYTNEHSLZLBYWWSGJBSNGJQQPIADUMQXJPTDMZGSCOLALNDROVZTEINQUEWCUHMPGJRRJJBGPVBKOKYOVPAFNRDYDSXILKAWQWRWEFHHQRHBKZMYMLIC");
    msg.reference_frame = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56324U;
    tmp_msg_0.off_x = 0.2268727539753348;
    tmp_msg_0.off_y = 0.5467071937133449;
    tmp_msg_0.off_z = 0.9264960634065447;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DPKYJHTHTFIYHHAGORDBBSZELTMWDZBMXRJCRXLSVQZJCEQCLSZDROEBWXLVZFLVVMMNHRAWJLYHFKUEMWUNFAUNCRBPF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.549776985360141);
    msg.setSource(10269U);
    msg.setSourceEntity(58U);
    msg.setDestination(59615U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("TIGUVEXRGJJYXLDOWEYWZUTNMSMANZYUBEMFGYABUJQVRXYMFMESFUOCWUHMOQDABEEVYTONSYKDQKUTXIQYOTAGLRPIDNDFXEDIJWECNVIOCZOKXWFICPNLAVKSTKOBPSFAVHQSVOMBQJUNE");
    msg.formation_name.assign("SZDZGAIRWVXDGJBDMUOATZGMMBUBIKVYIHAYXVSCXHRIPUIKIVDMBDQRAFHLBPQSXZMALJWOWERVQEEVQUPHJIGLROJEWKUUB");
    msg.plan_id.assign("YTGZHGOIAKSPTKPQRGNGFSWYDLCMNODQXHAAUULUPSMVVNRXFGISRWDLBZGKNLYWMWBZEAULMXTCKJSJGJDWHZVYTSWIHSTTTQKCVQCEYEOVQIEHFLHKXRXOIRFHZTRJIAJNTBQIQSVDWBOAIXFPYAKFFZDZOJVEFMHYCAUEC");
    msg.description.assign("LOIEVOSKZJVXLCFTGSDFEPMYXJIYMEFYGYPMRBMHKKWGCFPMFBVKRGGXVBKCQBYUTDTEEEQZLEAUDYAVFZBSBHTGBQJBTARIGFJAVCZKJAQXWHULPVHAQGFUBNSXOVWQMLLORWPSTUKOLDSZARURSPGQMNRTJLHGNDTTDXZPOIHNWSUESIUYNHMQ");
    msg.leader_speed = 0.17948838748063534;
    msg.leader_bank_lim = 0.037058523947616995;
    msg.pos_sim_err_lim = 0.524593283597836;
    msg.pos_sim_err_wrn = 0.42685053849205645;
    msg.pos_sim_err_timeout = 12958U;
    msg.converg_max = 0.020209100423901005;
    msg.converg_timeout = 40467U;
    msg.comms_timeout = 54907U;
    msg.turb_lim = 0.7058801544177062;
    msg.custom.assign("FGUSGYWBDWZJPNRCWDPCHUWZUZFRGSKHZMVYGYIUDEOFKIJTVZQVJXOIPLJUSGOWRAAJK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.2537410561176068);
    msg.setSource(27639U);
    msg.setSourceEntity(91U);
    msg.setDestination(22012U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("WPQYBCJMTQTQDLBZHXGALJSEMIUSZIKOGIAGBFLJHAZKGAKTMEHCHQGDXGFHAPCUYUMCEZXIKIIBRRQODJPVNAOOWUZSZQYIJWDMEDAYNKJERXPVWFWNFCEPZKULHLUFVFVEOVRLOTSCSUBDNXPZUWDGCMNTKVXLPLQCONQU");
    msg.formation_name.assign("EAUHYTWTGMYFDLENRXCZOBOTUWRYMEGYCYKUNPDSDFNIHPYRDOZVMPWHDSRROVUGDMZ");
    msg.plan_id.assign("WRQLXTEZSGURPTWKEXNWFDTWGVGGXQIMSEIOEFVLHOOFNLGKBAIUTGQEBNRAWGPNNVMTRLSFPZHIWRNXHDYJFSYBMWIUJBYYBIBTSYCLYSDCAJXKEFHGRKCFYKJFHCARIVAFDJMQCXZDDNNJRMQKXHRAWUBDBUOCIIXKFXMGCHOCQJUXLDMYYOUMBQVMPCVANQYDWJPPUKLOUJRHTWLEPPULZSSAZQPPTKZOJAHOILZOEZKECATSEZQVVBMV");
    msg.description.assign("WCUQEJGKYSZAGKROCIBAXMIUCSRQDEZXVKDMYZLANDTKSNAYWHFOGVSTLVHAGHYMUATIEFPKWXDJRYBJUCFZIMKOJAYPBOHIYOZILNPLNSXYVCIDQLPOPGRQFTXHNFLWDVNAGMRRNXEYZKJTWIRIQZTBEPLSPLJBJFUZUHHGOERKBQTXSZVJMAGGSEDWMVOKNUQQEHPCJDVTCBNXMXFPGROPKBFTBNWV");
    msg.leader_speed = 0.4420682657851015;
    msg.leader_bank_lim = 0.5706605244094949;
    msg.pos_sim_err_lim = 0.08385207489268898;
    msg.pos_sim_err_wrn = 0.17957018752553433;
    msg.pos_sim_err_timeout = 22950U;
    msg.converg_max = 0.0712021124227823;
    msg.converg_timeout = 5882U;
    msg.comms_timeout = 13631U;
    msg.turb_lim = 0.3217504969106175;
    msg.custom.assign("LYTYEAAAVJWRRPOWEYAGOFURHPCXZZCEHOVAHIRJFEVHIJUMHDSDQXVWZOPVZUZUBQCWMFCIHQNOCJDHBUWBGRGDORCFPVLLUATNJTMSSIWSNVBKAKAISKAYBDBEMXDRIQPGLSGYPJUQIYQZULNATBJNRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.12580416842787667);
    msg.setSource(34029U);
    msg.setSourceEntity(91U);
    msg.setDestination(30490U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("QPWLWZZFLDT");
    msg.formation_name.assign("NSQUSXOCIOLDPWPVDMGOYRRVPDGQJIJLHVWVVSDSNHQFRNLXOLUUCESNLHIZSQHQMRBBGBAAARCEOZYEGZPYKISLUDTNIJFPAGZTBWAQEKWFKUMFQRMUVNTKXDOGFWNTBQUDXWYXWGCJUTVBDGPICCACXZVMUKHETPJNKPLBWBEKMSSNYDJVEHRLRMGJACJYCXKXFIINVEAAMCPQEOOZJJLYZQDXB");
    msg.plan_id.assign("RVZPXWMHRQEWDCMZUILXXZHWJHVFNUVBHNWGVYRONYMHPRCIFTICZGGLNFTQARGMLTWUDQUPCXKEBESYNXWUXVZIYDQJYEMBPSDXLELZNLCMARGTDRZPSTKKTFTWXVPFBHJDKSIWABQOBTPFAFMIASJKPZEYHZIQEAQ");
    msg.description.assign("CERZRVQXDICHNTSSAECBPZYAKTLMZXBOFVDWXPVRVZCKEDFTJNEQIYMYFDJPTKBSEQCWBVDJWLKRQPWLR");
    msg.leader_speed = 0.40939818855090304;
    msg.leader_bank_lim = 0.9369400713302619;
    msg.pos_sim_err_lim = 0.37831506923519875;
    msg.pos_sim_err_wrn = 0.8029295084465545;
    msg.pos_sim_err_timeout = 41574U;
    msg.converg_max = 0.7175799536013178;
    msg.converg_timeout = 11027U;
    msg.comms_timeout = 38591U;
    msg.turb_lim = 0.11999060304425668;
    msg.custom.assign("OCCYGMFGJDGXUFZRIAOEHJUNBGSHKLOKVZQTBNQQJZHKXJYZLKTSIVCRDHUBALHXFIEXGWVDCVFMJBAOMMKBAZCTLXXRWBSSEUMTIQFRZIQMJCVNCUQNNIKDMVKHQPGYZUXUYFGCGBSAJYOVRRRDEHGOEKLSWTRCEUFZLVSDWOHGQKRAAAZWIIHQISFEONEDXPKTPBLYHNPWNXXWLITPANRCEMYWBVPLWJMOUYSDNYTTASUEQPBFLOYD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.5946951694379431);
    msg.setSource(921U);
    msg.setSourceEntity(78U);
    msg.setDestination(45476U);
    msg.setDestinationEntity(36U);
    msg.control_src = 65419U;
    msg.control_ent = 252U;
    msg.timeout = 0.6737950712647919;
    msg.loiter_radius = 0.022440733431328685;
    msg.altitude_interval = 0.7795674480034622;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.48316326515311514);
    msg.setSource(60774U);
    msg.setSourceEntity(32U);
    msg.setDestination(54495U);
    msg.setDestinationEntity(227U);
    msg.control_src = 10417U;
    msg.control_ent = 203U;
    msg.timeout = 0.037855554229247024;
    msg.loiter_radius = 0.48949871012430124;
    msg.altitude_interval = 0.6209774323609668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.7848522053816174);
    msg.setSource(48719U);
    msg.setSourceEntity(58U);
    msg.setDestination(12123U);
    msg.setDestinationEntity(110U);
    msg.control_src = 48120U;
    msg.control_ent = 108U;
    msg.timeout = 0.6355719233894124;
    msg.loiter_radius = 0.9755650166730181;
    msg.altitude_interval = 0.9169679313902505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.6968557551686505);
    msg.setSource(17516U);
    msg.setSourceEntity(42U);
    msg.setDestination(48472U);
    msg.setDestinationEntity(131U);
    msg.flags = 216U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3265800567576014;
    tmp_msg_0.speed_units = 162U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9298432845677688;
    tmp_msg_1.z_units = 131U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.000621851176677124;
    msg.lon = 0.4982815019403847;
    msg.radius = 0.4345657161462765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.7396632994155817);
    msg.setSource(58810U);
    msg.setSourceEntity(207U);
    msg.setDestination(20948U);
    msg.setDestinationEntity(128U);
    msg.flags = 214U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.14788103823917476;
    tmp_msg_0.speed_units = 251U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9298053746200851;
    tmp_msg_1.z_units = 165U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.007363388982396968;
    msg.lon = 0.9790664640146909;
    msg.radius = 0.7466045745944432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.07033299524692893);
    msg.setSource(41831U);
    msg.setSourceEntity(90U);
    msg.setDestination(47962U);
    msg.setDestinationEntity(226U);
    msg.flags = 58U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8292427307908296;
    tmp_msg_0.speed_units = 127U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7395079677779058;
    tmp_msg_1.z_units = 29U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.49840246618211237;
    msg.lon = 0.29063959637096115;
    msg.radius = 0.014515838180658491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.9244814832615466);
    msg.setSource(18630U);
    msg.setSourceEntity(65U);
    msg.setDestination(32786U);
    msg.setDestinationEntity(94U);
    msg.control_src = 3231U;
    msg.control_ent = 30U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 246U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.35339981057099357;
    tmp_tmp_msg_0_0.speed_units = 216U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7105722727662601;
    tmp_tmp_msg_0_1.z_units = 110U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9615363739600223;
    tmp_msg_0.lon = 0.6820150549901893;
    tmp_msg_0.radius = 0.9689836432790094;
    msg.reference.set(tmp_msg_0);
    msg.state = 238U;
    msg.proximity = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.38808914490484836);
    msg.setSource(5690U);
    msg.setSourceEntity(43U);
    msg.setDestination(6537U);
    msg.setDestinationEntity(60U);
    msg.control_src = 22062U;
    msg.control_ent = 37U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 65U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.029286899954333756;
    tmp_tmp_msg_0_0.speed_units = 177U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9358773421919546;
    tmp_tmp_msg_0_1.z_units = 197U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9920051045998695;
    tmp_msg_0.lon = 0.623802162794785;
    tmp_msg_0.radius = 0.835025553822121;
    msg.reference.set(tmp_msg_0);
    msg.state = 8U;
    msg.proximity = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.8266932967802902);
    msg.setSource(52170U);
    msg.setSourceEntity(120U);
    msg.setDestination(51543U);
    msg.setDestinationEntity(229U);
    msg.control_src = 54388U;
    msg.control_ent = 113U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 168U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6115842760216399;
    tmp_tmp_msg_0_0.speed_units = 143U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.19119198901676226;
    tmp_tmp_msg_0_1.z_units = 12U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6919403536228371;
    tmp_msg_0.lon = 0.10639188910881092;
    tmp_msg_0.radius = 0.4581189678630657;
    msg.reference.set(tmp_msg_0);
    msg.state = 46U;
    msg.proximity = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.5685101501712754);
    msg.setSource(49040U);
    msg.setSourceEntity(64U);
    msg.setDestination(57783U);
    msg.setDestinationEntity(103U);
    msg.op_mode = 43U;
    msg.error_count = 232U;
    msg.error_ents.assign("CKIVPPFZOJPXRGBWXPAECDLKUCASGTSHTYXMIHIDBFQOBXZYSYEILSNQWJSORYJRYUREXMKNMVUVNUMTFNGLVGVSGRQQXJYYMGXTHFFMY");
    msg.maneuver_type = 63936U;
    msg.maneuver_stime = 0.3848076239181373;
    msg.maneuver_eta = 47776U;
    msg.control_loops = 1762428361U;
    msg.flags = 147U;
    msg.last_error.assign("OHCZTSPFPMEZCYLWPPCGZRFDCCJAVIAQEHTGPYQGINJYPMYSIULBGXLCOTPXGPHGJHIITRRIZDEASKBODKGNDYJSKJDDNVEWBWUNARKBEWFIVRSVKYJMQFGZHXFWOBIXFWSULXGDOVWTRZKVKCMBRONYXVQBEHRJSQCRXL");
    msg.last_error_time = 0.8791533135640072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.3710706850334924);
    msg.setSource(54208U);
    msg.setSourceEntity(246U);
    msg.setDestination(998U);
    msg.setDestinationEntity(88U);
    msg.op_mode = 10U;
    msg.error_count = 237U;
    msg.error_ents.assign("RDVKKLLCQJWEQWZFGAZXIKELNTTHVKBMUWRENMPEWYKLXQPYKGFCHEPFIOTKHUXINBLNJALDSQRXPHPEQUWBPCISUQVQCYEM");
    msg.maneuver_type = 24996U;
    msg.maneuver_stime = 0.11294606305764676;
    msg.maneuver_eta = 10146U;
    msg.control_loops = 794353736U;
    msg.flags = 201U;
    msg.last_error.assign("KKKUHWFSMQADVTXCPBBCWTDYNUMNTUNAXDGKDJQZWOXOVKAVQPMOIOABEJNJRYQDVKTOOWWPVFAEJZWISDBVFGRNDLNPBUBPQEIUSLWDIELRVUIMCYTSURIZHSFNTVFFAXG");
    msg.last_error_time = 0.6106465938486958;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.439817142908574);
    msg.setSource(2055U);
    msg.setSourceEntity(172U);
    msg.setDestination(1773U);
    msg.setDestinationEntity(175U);
    msg.op_mode = 13U;
    msg.error_count = 119U;
    msg.error_ents.assign("RRBYNCQGHKEZVVWKLOCSPLGBNYODUISFFJHCLZXSFLMMHRLCPYTQBHSPPNITKOEIDLBAQSXPNGIFAKCZFJNAG");
    msg.maneuver_type = 36022U;
    msg.maneuver_stime = 0.8470569903794207;
    msg.maneuver_eta = 29887U;
    msg.control_loops = 1191781934U;
    msg.flags = 165U;
    msg.last_error.assign("HJAQBHBRGPPYHZNRARVVKSIJPZQEDMWKRRCTUCWWZZQTMEAVLFFWRZQVNFJIKBNCNZQKQIFBTTNQGWFKRE");
    msg.last_error_time = 0.35746632184288496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.11332541525109563);
    msg.setSource(1210U);
    msg.setSourceEntity(119U);
    msg.setDestination(21401U);
    msg.setDestinationEntity(23U);
    msg.type = 230U;
    msg.request_id = 45151U;
    msg.command = 122U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 18765U;
    tmp_msg_0.lat = 0.2806455076837011;
    tmp_msg_0.lon = 0.2587765644775688;
    tmp_msg_0.z = 0.32850563676854594;
    tmp_msg_0.z_units = 18U;
    tmp_msg_0.amplitude = 0.6686737795889105;
    tmp_msg_0.pitch = 0.4402052936131159;
    tmp_msg_0.speed = 0.18664336689163696;
    tmp_msg_0.speed_units = 156U;
    tmp_msg_0.custom.assign("OWBHRYEDZORNZOLHNEGEJGMVKBWTFMPKEUHPULVWTYSEXBQNGQVFIDCHZWFYLLOQXEQPPMVNVAXFURDYLNGGBVGANSYMJSSUCXRFNVSZIOIHRDLEG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47357U;
    msg.info.assign("ZOMTXTHBKREQTQSJWRBCQESVMOVXZPOJOYGVEMLKRVLSOIWGLAYBPCHFTJGWOAQEHZRLKNUWINXWWAZAIZGNEHXEKUOTQZUPELNKNPRXTSJDCSFHJAEGZASIPYIHNAGDQVYUCLDFTMUVPHRSJBRJYNMLHCMCMBKBZGXBUSSXTFHRWCIUOFDUGBAXNIVMPYGCAXZIQGFVBFDJQWBJREXUYUEKIQDFNHZFONDLQKKPYRDMID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.20264856960872923);
    msg.setSource(8904U);
    msg.setSourceEntity(41U);
    msg.setDestination(64913U);
    msg.setDestinationEntity(124U);
    msg.type = 108U;
    msg.request_id = 62375U;
    msg.command = 193U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.5013203945947583;
    tmp_msg_0.lon = 0.37250618987919903;
    tmp_msg_0.z = 0.11906329163999452;
    tmp_msg_0.z_units = 79U;
    tmp_msg_0.speed = 0.23810576702042874;
    tmp_msg_0.speed_units = 6U;
    tmp_msg_0.custom.assign("PFKKUYXQNUDFPOEOMKBSWLQCFAGWERVNWLMYCEXTZEWGNPPMGZRVMQLBWHQQRURXBKDCCSLDYDQJIVXPHHBHJYKTOTKVRJMEAYXJAZMVWRXDTECDCGUHGVAYMIUXJDBTJBDATAFPAKIMESHPTZFPRLBVSMIANSOLDAHWUEZLGOGKTOWGZKOYUNCCRIBT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39959U;
    msg.info.assign("OWDFGADHHEZBYMSWARPAMOTPDTTABJMSWSZTICPNNTPIGPYUXFZIPHYNQQJDVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.20328279706739338);
    msg.setSource(13644U);
    msg.setSourceEntity(95U);
    msg.setDestination(60743U);
    msg.setDestinationEntity(75U);
    msg.type = 43U;
    msg.request_id = 20135U;
    msg.command = 135U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 6946U;
    tmp_msg_0.lat = 0.9876414727984402;
    tmp_msg_0.lon = 0.9138422304917301;
    tmp_msg_0.z = 0.1544665221313033;
    tmp_msg_0.z_units = 193U;
    tmp_msg_0.speed = 0.8633327599561352;
    tmp_msg_0.speed_units = 40U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.5790542167556365;
    tmp_tmp_msg_0_0.y = 0.7504054863154849;
    tmp_tmp_msg_0_0.z = 0.29274815638205387;
    tmp_tmp_msg_0_0.t = 0.11289480340453106;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("SBCZMFHCWLJMTZUVWUHUAAQFTNDRXDYANLZNAJBZGSYCAETJPDZXRKEEZHROLHFBMGIKUNLBTFYZJQURXQDRSBPSBDTMEVGASMYFFGVVMZXTPHOVKCWNKGTBWWUNWO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62796U;
    msg.info.assign("SFFSUYFFXJGLYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.4120268597983343);
    msg.setSource(11919U);
    msg.setSourceEntity(27U);
    msg.setDestination(61840U);
    msg.setDestinationEntity(161U);
    msg.command = 230U;
    msg.entities.assign("QDLNZFWIMGJGCEARMTZFSOLFZHPCHKXYCVPZDWOCUMIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.010834608151118585);
    msg.setSource(35U);
    msg.setSourceEntity(25U);
    msg.setDestination(20593U);
    msg.setDestinationEntity(192U);
    msg.command = 194U;
    msg.entities.assign("FLZMEUYLAWVTYERYWDLOQHPSZUMRDCXQIUBVQSFVKYNITKXPWECPAZPOIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.4326468402210458);
    msg.setSource(33878U);
    msg.setSourceEntity(79U);
    msg.setDestination(55523U);
    msg.setDestinationEntity(1U);
    msg.command = 143U;
    msg.entities.assign("BCQYSHJUVGTSJOHUSQTPMAFLZNVLMRQUDOAWFEZKUDFSTPLFGTFYHUEIXMMCMGEETWGQBCPPCOMFARTOIPZYDYVFRSXGBSONAPBJUQIQIWBWXIYKPYZIEXKCZFKESWSTVNBWOAYNYHORQZMXTGRBXXJGWZZUDVQNXLIKGEHWOCDKJPZXVQSRUINDQOLLJHLVNHRAIPRVKRNMCODNZFVKEBNCGALJJKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.09254859111753044);
    msg.setSource(25734U);
    msg.setSourceEntity(33U);
    msg.setDestination(61407U);
    msg.setDestinationEntity(156U);
    msg.mcount = 244U;
    msg.mnames.assign("RKIJFEARSDFYWFMCOCMZMWVSSHFIXBUUOIJLSDCJASEEGJNYFGLXKCINDRXRCKQOANQPRIMTUKMUUTQZOWXWHNEZBPPLVPLDYHAPQTQZQZXUEB");
    msg.ecount = 101U;
    msg.enames.assign("UVVKAQYLTSJRFQZGHGSPJBICDITOUKYAKSOQPCNRCJDZUTWJXIPPETKDVUUQFVHNEQSIPBHNIIXKXDDWWCRUAWGYXLTNMAVHMDYXMOF");
    msg.ccount = 129U;
    msg.cnames.assign("JVYLTCEGIKBKWANDFSSSQGUAUAQUBVZXIONXHPCJOGKSOZUHHUNZLDVCPRPXAGIRARDFDVJLNJE");
    msg.last_error.assign("EBOGEZZHFPYQMDAUWSKPWAHYVEGDPCISWZLAJPFUJDYZXOMSLJZYNJDFRZCYDBFSUNIUKHHRQRHILUGNBECBOCKTKVQZKEEQNCQNTOBAGJVSVR");
    msg.last_error_time = 0.506391894956332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.5165047220948984);
    msg.setSource(36301U);
    msg.setSourceEntity(19U);
    msg.setDestination(22324U);
    msg.setDestinationEntity(18U);
    msg.mcount = 48U;
    msg.mnames.assign("IMKLBTBXJZPBXMURWBFHYELTMECADHWLCXXDJYMVRDHNEDYSGQAIBIGOHWARYGNTQHKBUJOVBQTLELGHUKTZVZAIWQLCDHJWAGFVKNZTWYOVRHVCGNASVMYKXISEGSKJWCFSKFTUONSMQVWDXOFAMUZCPRIRLNUULSDDMRKYQJPSCLSYVENJZKLEEPFXMNBQTCWPYPGOGEBQJRZPV");
    msg.ecount = 116U;
    msg.enames.assign("XQJAFOIWCEGMYCYLYVHGWZIHZWWNQDTXIJRTRORDLGALXKAMUCFBJQKSUEWUFHKAPSVSOJUWPKIUGTTRBYDCUMOFSKHDRSEHGZSQJAPVTTXDGKZWSEEZMINNMNROXRFEAXSPNDUDTMHLVJBJYRBAAZHLQZBCOFGYBOLGTFPPPKIUZOLIXVYMUZFXVAXNNLJMBJHQFRQHVSETIEVARYNHDIMWCLCFVXWK");
    msg.ccount = 123U;
    msg.cnames.assign("XLQSOMMTFYRSNCUNWCWBKDKPFLJFDBUCCUOMGVOBTCNDDIBFYRTLYPSTVWIWNOTZIPWZLUANBXJRHZEHZJTERXQTATOVASKAKPPEGJVHDHCUZYKRLBFQDSFDFICWMXIVONAORKNQWGEKSZXGNVHLKUJIKMHMIOFTXDHPJFBESBS");
    msg.last_error.assign("HALMQMUMXPGYBNZEYJSCCCBEDPTNRLRKCPSKEUBOVKKSRRDGDXOTOEKHJBQFOQOKTZYFXNJAIMSSYTSEHGPGNJBLJWFEOXRKCHMKKDOPIXICTXPYONXLFMUMAISZ");
    msg.last_error_time = 0.6161420128293472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.3682651896116643);
    msg.setSource(10168U);
    msg.setSourceEntity(77U);
    msg.setDestination(28829U);
    msg.setDestinationEntity(121U);
    msg.mcount = 191U;
    msg.mnames.assign("HYZLTJPOKRJ");
    msg.ecount = 26U;
    msg.enames.assign("POMNPBIZNGHEVNLZFDQAERXWYCYEQIWTSUBDJYXBJRBOCXKQKOAAFNKYSSSVHRDVOLVIFGCMKASWZWDMBRNXHDWOEMIPUXWUCGOEDTLICLCEQGFBF");
    msg.ccount = 214U;
    msg.cnames.assign("GPNWSCXLJIWIPENNMXICGSTLMSQGZ");
    msg.last_error.assign("WRUHBSJXQWKVWWAKIBDUOCFMQZTOGYQKDTRXDTXYNNPDRVYNLPCOMUIHPEWTAFCTAJOFTGHWHNAJPTQQMZEOXHXHVRPFPJUKDSKRSEBGSMQRFGCBLDMPMZ");
    msg.last_error_time = 0.44655387916309786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.7227128372837066);
    msg.setSource(29496U);
    msg.setSourceEntity(111U);
    msg.setDestination(25685U);
    msg.setDestinationEntity(236U);
    msg.mask = 105U;
    msg.max_depth = 0.046405540054207495;
    msg.min_altitude = 0.6830405964002587;
    msg.max_altitude = 0.5824994035893508;
    msg.min_speed = 0.44314629382677784;
    msg.max_speed = 0.38640518351086095;
    msg.max_vrate = 0.45695352184249227;
    msg.lat = 0.13112950980398375;
    msg.lon = 0.07197742334035306;
    msg.orientation = 0.18600390406293954;
    msg.width = 0.6263450117626277;
    msg.length = 0.10332217248288045;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.17733150974610778);
    msg.setSource(56097U);
    msg.setSourceEntity(79U);
    msg.setDestination(9474U);
    msg.setDestinationEntity(175U);
    msg.mask = 5U;
    msg.max_depth = 0.41898007102633283;
    msg.min_altitude = 0.9415705139940277;
    msg.max_altitude = 0.744020581296193;
    msg.min_speed = 0.2671156417116668;
    msg.max_speed = 0.6994226964311151;
    msg.max_vrate = 0.5795610893887645;
    msg.lat = 0.2787976512005014;
    msg.lon = 0.4933410119395445;
    msg.orientation = 0.1038090751510885;
    msg.width = 0.25438479063126884;
    msg.length = 0.5382404357531484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.907097661802906);
    msg.setSource(52761U);
    msg.setSourceEntity(42U);
    msg.setDestination(15574U);
    msg.setDestinationEntity(95U);
    msg.mask = 203U;
    msg.max_depth = 0.09971682960180694;
    msg.min_altitude = 0.05139687455829234;
    msg.max_altitude = 0.7304333917714214;
    msg.min_speed = 0.06229560412877422;
    msg.max_speed = 0.08992732126443526;
    msg.max_vrate = 0.18555102774008714;
    msg.lat = 0.7116840631920137;
    msg.lon = 0.48173061402701756;
    msg.orientation = 0.5259883685124312;
    msg.width = 0.7468626846943895;
    msg.length = 0.4641864436919887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.9597836171479254);
    msg.setSource(39774U);
    msg.setSourceEntity(121U);
    msg.setDestination(28938U);
    msg.setDestinationEntity(227U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.19746029558935618);
    msg.setSource(8315U);
    msg.setSourceEntity(79U);
    msg.setDestination(24709U);
    msg.setDestinationEntity(155U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.8345091590401785);
    msg.setSource(3725U);
    msg.setSourceEntity(195U);
    msg.setDestination(17094U);
    msg.setDestinationEntity(73U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.39811174279443806);
    msg.setSource(63887U);
    msg.setSourceEntity(254U);
    msg.setDestination(43238U);
    msg.setDestinationEntity(111U);
    msg.duration = 65227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.2386295822286768);
    msg.setSource(23846U);
    msg.setSourceEntity(66U);
    msg.setDestination(11709U);
    msg.setDestinationEntity(129U);
    msg.duration = 39189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.19158065241506983);
    msg.setSource(61884U);
    msg.setSourceEntity(169U);
    msg.setDestination(44411U);
    msg.setDestinationEntity(32U);
    msg.duration = 4989U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.9996722010992756);
    msg.setSource(47533U);
    msg.setSourceEntity(237U);
    msg.setDestination(15596U);
    msg.setDestinationEntity(253U);
    msg.enable = 44U;
    msg.mask = 2422016005U;
    msg.scope_ref = 1545140643U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.23120739746913066);
    msg.setSource(22626U);
    msg.setSourceEntity(66U);
    msg.setDestination(14427U);
    msg.setDestinationEntity(2U);
    msg.enable = 11U;
    msg.mask = 1686875944U;
    msg.scope_ref = 1542926521U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.6215962418707361);
    msg.setSource(33314U);
    msg.setSourceEntity(69U);
    msg.setDestination(2005U);
    msg.setDestinationEntity(238U);
    msg.enable = 194U;
    msg.mask = 3820887627U;
    msg.scope_ref = 2141259855U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.7095888050924585);
    msg.setSource(51433U);
    msg.setSourceEntity(127U);
    msg.setDestination(60091U);
    msg.setDestinationEntity(138U);
    msg.medium = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.6934461933266554);
    msg.setSource(21945U);
    msg.setSourceEntity(190U);
    msg.setDestination(50553U);
    msg.setDestinationEntity(154U);
    msg.medium = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.35317431925763576);
    msg.setSource(6715U);
    msg.setSourceEntity(25U);
    msg.setDestination(41260U);
    msg.setDestinationEntity(111U);
    msg.medium = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.1972490244545021);
    msg.setSource(2605U);
    msg.setSourceEntity(113U);
    msg.setDestination(1204U);
    msg.setDestinationEntity(143U);
    msg.value = 0.5733082586541235;
    msg.type = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.7431357464464146);
    msg.setSource(63281U);
    msg.setSourceEntity(66U);
    msg.setDestination(65441U);
    msg.setDestinationEntity(181U);
    msg.value = 0.2757927590557565;
    msg.type = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.28389639012138457);
    msg.setSource(40579U);
    msg.setSourceEntity(155U);
    msg.setDestination(57239U);
    msg.setDestinationEntity(19U);
    msg.value = 0.9065285505796363;
    msg.type = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.34121943278782985);
    msg.setSource(25085U);
    msg.setSourceEntity(162U);
    msg.setDestination(4929U);
    msg.setDestinationEntity(121U);
    msg.possimerr = 0.3758867668177539;
    msg.converg = 0.9584718467492682;
    msg.turbulence = 0.20709479862103986;
    msg.possimmon = 47U;
    msg.commmon = 36U;
    msg.convergmon = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.17716378254150444);
    msg.setSource(22179U);
    msg.setSourceEntity(61U);
    msg.setDestination(42027U);
    msg.setDestinationEntity(115U);
    msg.possimerr = 0.5611570204693591;
    msg.converg = 0.9606428211237545;
    msg.turbulence = 0.8688621183412776;
    msg.possimmon = 137U;
    msg.commmon = 174U;
    msg.convergmon = 121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.35503290674543464);
    msg.setSource(35103U);
    msg.setSourceEntity(61U);
    msg.setDestination(7006U);
    msg.setDestinationEntity(203U);
    msg.possimerr = 0.3800330787361885;
    msg.converg = 0.5392618951454514;
    msg.turbulence = 0.269887839876096;
    msg.possimmon = 197U;
    msg.commmon = 63U;
    msg.convergmon = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.13792764735764196);
    msg.setSource(1873U);
    msg.setSourceEntity(100U);
    msg.setDestination(7766U);
    msg.setDestinationEntity(6U);
    msg.autonomy = 167U;
    msg.mode.assign("UICRTWQXOYBJFDQJMBAXLKWTXNYOTBLWGSHPQPZEVRAHKVLTMJDNMXZHVFIMBUJWOLFROPKKDNIITQUZIYQBSRCICXTTWHPFJGFYLSLDWNCJPZLRMKRASFEMKOUCIPXVBQPKHZWGAPKCWOJAUXASCNYBGFQYCJEHRRNYSWASNDOCOGUNMLSYQGEOEWUABRIDEABTLQMCFTYZIKBOUVHKYPQZLHRDVVJINVEEXVPFJHUTHEXSGDUZSMG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.8553663309988107);
    msg.setSource(59058U);
    msg.setSourceEntity(156U);
    msg.setDestination(7816U);
    msg.setDestinationEntity(184U);
    msg.autonomy = 181U;
    msg.mode.assign("IZPVZLNFNCKRXWKNPDPRLRCOIMPVOEOJFSEZRWUJYERNKQGUW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.9059966012750291);
    msg.setSource(48388U);
    msg.setSourceEntity(42U);
    msg.setDestination(22354U);
    msg.setDestinationEntity(153U);
    msg.autonomy = 22U;
    msg.mode.assign("AGRSTEWVRVIALDQJHTNFVLSTZFSTETRBDLOCJURYCBJYVKOWQRSZLOUUIMRXMRHMXDYSCJTAKQXPGKJGAGJNCHKEYKGDRYKUWCLOZZPROPQUQYPDHQSUVSMSVIDHWGMJUXVKUWGUGYTPMLBSWNYFQFNPIZLWDBAJVEFPMAPWCIFQXNWAITOEABNFNPPRWXACOJXCHEANQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.11290017441074529);
    msg.setSource(2138U);
    msg.setSourceEntity(104U);
    msg.setDestination(19710U);
    msg.setDestinationEntity(225U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.9217362420619301);
    msg.setSource(18139U);
    msg.setSourceEntity(183U);
    msg.setDestination(31057U);
    msg.setDestinationEntity(171U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.8972516967145151);
    msg.setSource(1717U);
    msg.setSourceEntity(140U);
    msg.setDestination(5964U);
    msg.setDestinationEntity(51U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.7099430689908067);
    msg.setSource(43254U);
    msg.setSourceEntity(113U);
    msg.setDestination(14286U);
    msg.setDestinationEntity(188U);
    msg.plan_id.assign("XFWQKEVTCYHPVRTJHUSSKZUIPMQCUGSYPJHFGIHVXXZFILALNUNIDRNINVDFELECORZAHBJDUAYNIDVAPTUSGDPROMZKQOUODWZQMRYNXQQWNKQGCABYEYPTLJBPWRYUANOITMFEFCYBZAGDCTVHRBAIXARTMKHLWGFKAJMLTZLMXBPLIOKEGFLE");
    msg.description.assign("ACGLJBCONDZFKVUYMFRYBHCKVZCPNNSVPPKBUWJPUSTQMWSXIZHLLRNAMUMBKVYWNZLOCUAOKDDPMQCSRTGTCNNGOUIVDJAOYGRHLJEOXXVWQYAGRNFGBADNXTYTIQYFCXXSDQEBSBLSQYGUMQVLAGILEPREWOTQIKCWKHFTKZJSZXWMJVTJJVWVQIZMMXAZRGBDZDWJPERBFHPEEIHXKMYTHAI");
    msg.vnamespace.assign("ZZGSWGHUBPYOBUFCFVILGYJPXABFLOSSTAREPIFBPGPWZBHVXFUJQYQBTDSCJYWSUJKCFNODMPYUAQJNKOGKTGHXVAZDNTG");
    msg.start_man_id.assign("TJVWKPCIASBEDVKONTIAFYFZMBXAXLPOHCSECENKMWRTWQJBSXEAXJQVPMKRWJNLNFVOIRFPYAYDBMXDMWGOOUNIUPHONNONJPDJSKZSSNECAZSCXKQNBDIOVQZGHYCZQLRWFRKVALHRFQHQMIPCKZKUTQBIYIDZUFWZBEYULRTRBIHHPEXXEAVTJTTSUPJSXZCKFOCD");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BEHKFRKYXVGEORSGXNCGEWZZUZKUJONCGQEERHJNENJTSQQNFJMMLXDSJMOFOWTHUFHBCCQHUFBVSCAODNDKXGTPPWWPPBT");
    tmp_msg_0.dest_man.assign("RTPEMXILRPUAABQZRKMENECYANEUKLCOUOXSMOSGZDHYYSGLOOKMSNHOGVCQDBIEAETQTFNKIRVIVPNYFQCWVHHXDIUWJQVSJVMGDZWQYRXDKMZJKFSLNCULZICJXRBGWVGDVBAFCZCPSVQDKGFLYXTZURTPJKTGELDBRHZAUMBYB");
    tmp_msg_0.conditions.assign("EFSOMFRLEJXQHGKEZHRRURTTMRBFRQGBVFBDPCAWIVLWGGYDJTADZDLBIXHNPOLWDNKYVISVWGHOCZBCWWUUMASJDFPOAQPTRSQHZZDWMXIXKJCQXPMXGEFACCIAZMBVYGYVKKOJVGVHPFQINDLUGYWMTIPLBHSEKLZXFBQOSBSKEVITZXYFJKZKYNCCSEOPLJKJMRWNNXMTWAQLOSJCJNHHUNRTIFIUUGQDDYHNTAXOUYUBNEZECSO");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("JQHNVCWSYRVUSGBXCGTEWPJDTTBWDMDIHYAUROOCZYELZROXVGXUNMZVJQJGKQEUPBKSPNIVCGEFAKLKWMTWZHGMFWFYRFVUCBHPOKLMMHALBQXTQXPHBLDTSKEQRHLODMKEJPSICVATURHSVAXGWANMCUCQPCGJNUGCZAZSFZTIDEBNAZHMTIDWSLIENIYFNKOBXRFXDXINLDNJTIGYUBOYJHQWRPVEFOJQ");
    tmp_tmp_msg_0_0.dest_man.assign("FOKSHXVFDVKQHIKTWNPUEHLEFYAGTCHJFJPTVQZLSONFJQNPECMGWUKTZGLTTRLFZJSQBSNCZWPCVZWQHIPOGWQTNIATAKNIAMRATYRFPSMVIFUIGVMDEQCDUAP");
    tmp_tmp_msg_0_0.conditions.assign("CCCSJTDASIIVFWCHYFPBUVJVMRMHUWLCELGAKTONZHXHFRHEXCTTAKGEDZDNBABXZRRSMDJVQNEHDBERJTUPOIBSGVVUMFGQZWBAMPXTXWPKEOYIO");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::VehicleMedium tmp_msg_1;
    tmp_msg_1.medium = 135U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DevCalibrationState tmp_msg_2;
    tmp_msg_2.total_steps = 175U;
    tmp_msg_2.step_number = 100U;
    tmp_msg_2.step.assign("WWJZCXJYKNOOESUJNTGNOUSSREYUCRKLPIHUGDMCIWRZJDXQFVRXCNGDQYUWGPOLAZHSKVRLTLLIQMOAZBSGWCTTEMKODMWXJRMQHVQRUAPUQLGIACXVUYNXTGVYMKETTAIFEFEJKFXHGRJAPNINBI");
    tmp_msg_2.flags = 169U;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.6401610005172234);
    msg.setSource(51466U);
    msg.setSourceEntity(35U);
    msg.setDestination(24969U);
    msg.setDestinationEntity(49U);
    msg.plan_id.assign("KSCTXHZDGBOAGXNDERTKLCKUUGMNJZDSQNTNEQYUUVSRPIJYJVPSHXBVKKVBC");
    msg.description.assign("RDCUXMPOADVHGOEDWMKNPIVYACYQVJZOZMROWFBVHYUYQFRRIZSZISNTRLWGJOXBAYEQLDSAXCMQKABEFACARWXPHBPUQNTEYCVUCWYSLFHWSJUSPJBTNKKHKFUMOBTLVBJIIDDGRWQNXLNWYEGQRLXLXVKEIJGTZBNFYOGPKOGIJCTPEWEUBNJNDTZZIQKESGDCUAZCGIZATFDUMOUHSPKVNHVFDSXBJGRQQMAMHTVWCRMIZKPP");
    msg.vnamespace.assign("XNSAMHOYGWZQLZHTUYIDFCMUKTCQQEUNVFXKOSZQPHVMHQCBXHDNQBWKRKEAVFFZCSOENHLFRJUOIDNE");
    msg.start_man_id.assign("JLCIKQGWISPTKMHJNXXWWFMGHMEKTRNVCWDKOGXYESRLPROJCVIRQVDUWWPUENECBJMELH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RMCXCUVMHWPOCUSPBGUIDMVIIQSNYLXFBSTYXWRCILRVCEGDMZTQBALCXOQLDZGYVEVRIJADXKLASFFWVGHEFHUFQYMRCAMJRWBTAHAPHJOFNDTKLXXVMGKENEKRUNDDTHYVNBXOHPJXCYYZJYSYWALIAODBRECOBJFNHZUKGWZHNTPJPRYVLZBKUPG");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 32039U;
    tmp_tmp_msg_0_0.lat = 0.9713210512969284;
    tmp_tmp_msg_0_0.lon = 0.49053157212439313;
    tmp_tmp_msg_0_0.z = 0.4732713818605273;
    tmp_tmp_msg_0_0.z_units = 88U;
    tmp_tmp_msg_0_0.speed = 0.054205483131810506;
    tmp_tmp_msg_0_0.speed_units = 10U;
    tmp_tmp_msg_0_0.custom.assign("MWURZOCKTASPLNPEYINDOCQNDGYBNQULMZUWEMZKTYSCQLBTHYGRQUQFDNTOYEXFDHFAIWCTBVLIAKMGJQJKTPSPVFRKXBIKPLNJQEHLCSNLBXWHZAZVVHZIFLMGMVQOWFCTLUGKGUXBBVPAWPFRIDXWAHEIASVNR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SetLedBrightness tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("GCRWZIYCRYJYTHQBDMMOQBLVIVGIKXFNAAWLPBNWZKYJYIGDDUKCFCYXKZQEBSRUCBTZRZSGFNMIYHQNQQSXUEJOSJPGCUHWFPTPEJSKYQEMODTBAEMNVFKVYCZJLVGTJQMXCDIEPWSXEUWAOBOZUHIJXDSOAHRIHWQMLVBTLUPXLLOFWKIFNVOOSDRKVECAOJNUFTSNRDZ");
    tmp_tmp_msg_0_1.value = 82U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("NZWUJBHWGXTXVORTSYTAVKCBANQZZRLGPFYBPZUGMJFFRMCUBEOCLBQMAXERSVWGAHXNIIHHSHYOVHXVKZBGFRQGQRHQJNIIOTMYNZVMQEBEJBJGUIPWMTAVZIULWFDQJSUVSSPLE");
    tmp_msg_1.dest_man.assign("IYSNOJOHMDOKCVVVALROLGKERMSNALFTDAVTBYZEIRJUZJOKXXUXDSQPWJJLZWZNTCKSTTCEKWYOAMFSBEQVFEWPFZQRABGVRHMJEHAUAA");
    tmp_msg_1.conditions.assign("QEFCYNHLZYEBSENDSQITKCNPSPFYXVFIPZQWTBHWMAJRUNNINUPAKJWCHGDGCGPXAZRAOKVRZLSBPWVEUARSFPMAIXVBUXMHMMVRKIIMEROZQUPYTNLTYYYNTMTOHF");
    msg.transitions.push_back(tmp_msg_1);
    IMC::LoggingControl tmp_msg_2;
    tmp_msg_2.op = 0U;
    tmp_msg_2.name.assign("XORRIWSSLFMJVZYZFGRUJSOLUHQDKKGYHPEBXFWDYTJMSYQGBDREJXTIOBVHINBQUVSZFPP");
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.8248595003015221);
    msg.setSource(6023U);
    msg.setSourceEntity(48U);
    msg.setDestination(50806U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("NNWCEFODLQBKTZDJOPDRSNSTJVZIITBFXQWCRVFQUPATJPYTTHUWMEIBGXTMAAKNDHXXBQWBBGRIZMMGCSROQEKOEFGICSZYBSMYXISNVWOJRDCGXLHVOMCVRLDQXUNLXDWYVMJUSOKPJCKJPYRZVYNSZYUFFHCNPGQXSNWVLCGZLBHIOGLU");
    msg.description.assign("HRNBYHJSJKTPHYCWOMTAJ");
    msg.vnamespace.assign("FLXKBQJHNZKFAZUFHQULSX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BZDCJGPRWELMDQRHZUUQGXIPJBSEKLGYYMJAGLJNATNHASFCAKWWVIEGEOCYOCPNMGCJGORDLZRSYFNMAIKWGPWNIPQYTZSITRWBUGRAHHKTNUBJHRIQETGQQNECAQYVKPUORUPDKDLVDAOCXTBXXLPRHJSOPJZHWJZFIYVUBKTBZFKXQCUKLFDLWXBHOFHXUXNTVLFEZIZDOICDEUSLYMWTVKPOSTVFVMXRZVVBDCBSSFYYNXEMSQMI");
    tmp_msg_0.value.assign("LGIEFBBWLXOLQVYSJXOBGMPAVEGQWGEZUFASBEIVRFHRPOXCUERAZGMFYXQOIMXPJMHSUVGLMJACZALDRYPHHKIOTTZBOBSQTHYMNMWNCNNEVU");
    tmp_msg_0.type = 110U;
    tmp_msg_0.access = 114U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RXKPANFSKTTTPLJQQIQMWLWSLQFHHNSPOOTSGKJDDPHWGTRAUFODCTCSPFALLSDVGIEEHBEFNRXGWDBZZRLPEBRVOHGJBHPQAXMVAPVWDFBCXIWMYJMOOEZCZIYCYZF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("XZWOBNJEWWJPFLFAOLFCIN");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 60046U;
    tmp_tmp_msg_1_0.lat = 0.41132986132577987;
    tmp_tmp_msg_1_0.lon = 0.6893878704636069;
    tmp_tmp_msg_1_0.z = 0.511994905170895;
    tmp_tmp_msg_1_0.z_units = 176U;
    tmp_tmp_msg_1_0.speed = 0.3166113504149045;
    tmp_tmp_msg_1_0.speed_units = 91U;
    tmp_tmp_msg_1_0.roll = 0.07651905880061871;
    tmp_tmp_msg_1_0.pitch = 0.04522362555897996;
    tmp_tmp_msg_1_0.yaw = 0.4750018004391984;
    tmp_tmp_msg_1_0.custom.assign("ZBOKRLXYNGBQIKDDZBIUVDCJWRTWZHPCAQQISUNGHLYCSCT");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredPath tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.start_lat = 0.5005641435195438;
    tmp_tmp_msg_1_1.start_lon = 0.9263811981263953;
    tmp_tmp_msg_1_1.start_z = 0.0433667582084305;
    tmp_tmp_msg_1_1.start_z_units = 110U;
    tmp_tmp_msg_1_1.end_lat = 0.497650467762074;
    tmp_tmp_msg_1_1.end_lon = 0.1778091394737864;
    tmp_tmp_msg_1_1.end_z = 0.2833956473934869;
    tmp_tmp_msg_1_1.end_z_units = 203U;
    tmp_tmp_msg_1_1.speed = 0.7286088970556505;
    tmp_tmp_msg_1_1.speed_units = 104U;
    tmp_tmp_msg_1_1.lradius = 0.3575156833401558;
    tmp_tmp_msg_1_1.flags = 72U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::Parameter tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.section.assign("IFHUDQXJWGVDMVMIRMABVWPIZRONWPLNFGFCSOXXAUPHNNPPFCCZYPTYNRDVJRQAMYKSTWVVLAZCKPAZYGTAYMLZRNUQOBKITBPGMOJLWSJSGHRKQZEGBUALTBSDEKKDVLQSJFIZJOYWIOMEPFNBNYDFGRIXHZFHHYSNUOCEEAWEUH");
    tmp_tmp_msg_1_2.param.assign("BHRMUICXLLUYEXBXOONAGZVTBURCPZKXJWBEYHQNCFDDKTMYSGRPHZGFKVEKKRNZI");
    tmp_tmp_msg_1_2.value.assign("QGPXAHIAIYDJRBEWRPBXLJXDANOLWMKYJNINNYVFDCEQUDPVJ");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("PINBWJCVSCFPMMHDDGVTPGGYDTNOJFXCRBUSRUJTYEROQYXSMWMVXDQBTCFIBZIXPJNKWLTALGMEWWTZYKVWICJPMCVLXHXUSBWQAPQIFHKWOUUBIQLTCSSUAVEHGOYXEBSRKTNEIFZPZALAMGEVFPADZKQXFNHKUJSGBEYHVDBJYGVDJFWAHNZXQMWOJERRUZLLCMSIOHKRHZLFOKRRDOKQALKERS");
    tmp_msg_2.dest_man.assign("NKELXOSMGERSQWBLTJFNCSFVVRPKTLLPENUGEZTJWQVVKSTOSBBIVWEGIYIJAIAUQRRNGMRKAOWQGCYOPNAAPZGQNWCTAMCWLVTQZXNILIUUVCDEJLLBHDZJXPXINPTRFKMYDBYCMAFZKAIOYVHJSVHUSHOMIYZZXBCDFBYRQJDFUPXHBWEFKOXHSXCFHKSXAMHGHYGH");
    tmp_msg_2.conditions.assign("RXVCGIPXYJBQEBWSXARCGOIQNKCUISUCEITYVWZDMOYNRWCUDTEZBWQOHKGQQFKRJIOLJRFEKJMGMLXZKJOSRDRAGFELSKCOPBUWEAEAYVPHDA");
    IMC::VehicleState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.op_mode = 70U;
    tmp_tmp_msg_2_0.error_count = 69U;
    tmp_tmp_msg_2_0.error_ents.assign("MUAEVVWJZNJWGCRXCLLBZWMPVOPXHQXYOWOUCEQWXJZ");
    tmp_tmp_msg_2_0.maneuver_type = 3054U;
    tmp_tmp_msg_2_0.maneuver_stime = 0.01189338168091647;
    tmp_tmp_msg_2_0.maneuver_eta = 65304U;
    tmp_tmp_msg_2_0.control_loops = 1765138900U;
    tmp_tmp_msg_2_0.flags = 168U;
    tmp_tmp_msg_2_0.last_error.assign("AMVKFBCNUSFOMKMKCWJKXPFQTFCEMKDLTIRPENZOZDXOCXRUOJWBIILOJJTCWEBUVVTTQBFRVQEKDMZQJGGJFREILDLKPFCRWZWWHRNSNBCZWKGIPOUGFTKJBXAPLTZX");
    tmp_tmp_msg_2_0.last_error_time = 0.3507637051731707;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.5551093260722045);
    msg.setSource(32045U);
    msg.setSourceEntity(11U);
    msg.setDestination(13347U);
    msg.setDestinationEntity(133U);
    msg.maneuver_id.assign("OHPWRQVSMFNTQPFQRYBWFOLZGMDHNODBNOUYSDEDUVBBWXMHQQPNQBSCAJELEGOJIARHI");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 15772U;
    tmp_msg_0.lat = 0.9125402173053482;
    tmp_msg_0.lon = 0.2670224906820845;
    tmp_msg_0.z = 0.06730970113417434;
    tmp_msg_0.z_units = 210U;
    tmp_msg_0.speed = 0.8565940863755733;
    tmp_msg_0.speed_units = 86U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.9742732608741222;
    tmp_tmp_msg_0_0.y = 0.3127279926822798;
    tmp_tmp_msg_0_0.z = 0.5051298333313043;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("CGULTTLYQBEHMAQEKAVGZRMJAWEOVFYCYKWYAQXBKPMPATJOSWMGNXKBCSDTVYSZRSNTKLLZVHBAAPOXZJVMPDKVOLNCISGCRXAGTHPFRAZHMOXQFEOBYQJTUZXIPIPWFKZDIIDCPWRVDHGNKXWOELGEUTFDCIICNIURQGHUKVKLSZXSWAFUJYPJHMLJWLFJFQ");
    msg.data.set(tmp_msg_0);
    IMC::AllocatedControlTorques tmp_msg_1;
    tmp_msg_1.k = 0.9224129613921743;
    tmp_msg_1.m = 0.6632419510697767;
    tmp_msg_1.n = 0.020565463578453347;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.25327047160275395);
    msg.setSource(29186U);
    msg.setSourceEntity(83U);
    msg.setDestination(37242U);
    msg.setDestinationEntity(150U);
    msg.maneuver_id.assign("LPBDJVYJGTIBEIASYZWQQUANNBXQFHLUKHAMKPGAARVNPPMWRNGZMDKGXKSYIZIGCFHOBSXOQQRDHOMTMUFQOKCRHTGMYSIMFUEXVSANPFRPBEUWRTHNXTOZWNJSUNTLVDWJ");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("HQUVFKDTSVFWXYKPHUXBEHFEHPREFCMDPTABTRFJLIRRIZFBDCRKUNUNLDMKANMABVGCONXMAUVBBXIUUPZUKFLOLZXOIEGYGHZCZJNYYTGLRBGZLWMHDVIBYKNWMICGEQEP");
    tmp_msg_0.reference_frame = 49U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 52542U;
    tmp_tmp_msg_0_0.off_x = 0.3159866140368164;
    tmp_tmp_msg_0_0.off_y = 0.759207291437797;
    tmp_tmp_msg_0_0.off_z = 0.9162734562732301;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FHJGPOHNCTXXLFWVXROTQBEYTNIWVDBNIEHZLJPWKKSSBCQTROWYXKYFXRGQNEGPMXKJLSELGZHGTUJTGRVCKHTYPMASTMIYRIMOFPUZBMNOVVBOFDVPUNECDAYLILWZEKQFVSXLACFAQMHZYWJNLXUQVDMVKWDINULAAZOQCOPUSAQFWZKWHACNQPERJSCKJQZBPWFYJAGZEBOASBFMDRHBDJMVYYTMGSUKPJHDLIBIIRRDNCGEE");
    msg.data.set(tmp_msg_0);
    IMC::UamTxStatus tmp_msg_1;
    tmp_msg_1.seq = 39530U;
    tmp_msg_1.value = 181U;
    tmp_msg_1.error.assign("YVRLGLIACOXFGZQVVQUBHFTVHHKKEZSRLXGNNUPJXLPSHFSJTUOWKAQKBZIGMRJCNLXLVOLUWJMCPEDGZJUQJDQEZMERPNTSFMJKWQNDKLEUGYEXZEVOWDXPABATENZXNDOSRPWAXRMXYMAKNOWZAIYFKTCIWHWEQGHPTVCYFDGFCTDDEBTORFOOVUUPHRYFRSBIZSHQOBQKHYCPWPLAIIMHSWGCXUBANJBCIIKBFLABVMNCGQUTZDJY");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AcousticPingReply tmp_msg_2;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.5410292524044462);
    msg.setSource(54932U);
    msg.setSourceEntity(156U);
    msg.setDestination(52610U);
    msg.setDestinationEntity(136U);
    msg.maneuver_id.assign("KWVQBLMCZZJIJLFERYROQVAENBCCVDZWMCUVHNXAHHLFRC");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("OCUGXUNEQOECXJSTMUYVHGSBHRDTTHMADWLYUFSKGZMKFFNRMYTXGMRUVBHZRJKMNPWEQTFILOEVIOWWFEXAAIZFECDZASFJOSBE");
    msg.data.set(tmp_msg_0);
    IMC::Elevator tmp_msg_1;
    tmp_msg_1.timeout = 48048U;
    tmp_msg_1.flags = 117U;
    tmp_msg_1.lat = 0.5022429012437138;
    tmp_msg_1.lon = 0.2713516096811319;
    tmp_msg_1.start_z = 0.024519379232652683;
    tmp_msg_1.start_z_units = 40U;
    tmp_msg_1.end_z = 0.9281976973254209;
    tmp_msg_1.end_z_units = 232U;
    tmp_msg_1.radius = 0.8670360605596968;
    tmp_msg_1.speed = 0.532381310855267;
    tmp_msg_1.speed_units = 213U;
    tmp_msg_1.custom.assign("YVQLNMXFTXADWCWPTNSTTRZLOKDIZBGPPHHCRJHDTNXGHRKZYBHFMDVTSFLXAAFTIBNGHKISCSCNTEGXGAEVEJASHOOPDMUWGXMUBXDIQOUYYQPINWPCSSLBPKKWEDCGMYFQRDCJAXRKWKSZAINUEYHXUQVKJYQJAKZGRLZWYFTOHIIGSAFVBQSZULMEUBRYGVFWBXPIRQZUMQNUFKQC");
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.7290319537160719);
    msg.setSource(27409U);
    msg.setSourceEntity(140U);
    msg.setDestination(4575U);
    msg.setDestinationEntity(18U);
    msg.source_man.assign("AOCOQOAHHWLUADJTVQBEZGNJDIHPYZVJLPUWMQSRTRTHKULCRKMAUOXULDMZKNNALNHNH");
    msg.dest_man.assign("LDQQDWETKTKKOMJSZIOPIVADPPWLQRHUWFNLFUYZLNMUCMADOILEXXKXTJPEWOSHZIACBFVTGQWSXJJRYWBQDURNRXSJXGMNAYBXDVIXNQGLHZGWEZZDBDRYTQUVIRKXEFTNHKYERGECVBLDIOYHFIAYLJMRPJFTNCNOPQSTZSZZQAPGECBAPBG");
    msg.conditions.assign("HZHAMRBDBKFSOXOPVDFHCHBEQEOXJOXESLTGPEMRXYTHUVCMWSMJYDWUNMPBTYWRNXMXGEIDVUSPZQNTAFUOUBKUCOLRSUSATQDD");
    IMC::LblDetection tmp_msg_0;
    tmp_msg_0.tx = 146U;
    tmp_msg_0.channel = 232U;
    tmp_msg_0.timer = 6721U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.8071751524229159);
    msg.setSource(52500U);
    msg.setSourceEntity(174U);
    msg.setDestination(59458U);
    msg.setDestinationEntity(218U);
    msg.source_man.assign("VQMPZIFMIMNQAXKXSKEJTIXMELVNTVXIYWUPMHOJWLFWBCQECUZGGBNNRLXKJYEDBDVZFZCBSHGVMONJHOIRATFNSZIRLGDPKPDJWGAFWNCFXMOSRTSTUQUPOZQYLDDCHZWSLNOPUCUOYMKHYBYJBGWFAVSTGRALXKOQARMWEOLALWIQCCKUJQDEKSSJIKZBBYQGCRWRHFEHYRPZGXHVYEDBZNPHACITXGRFVFPSDTYLO");
    msg.dest_man.assign("ESBKNXPCUTCVPMMAKWHOVNTBRJVZDDRKFQKQCFYOTKMHKQAMIWDYJFMBTUDEWXLEGJVSPQHZIATTHBFEEMCLONILRRBALMVWYHLAOEUPHGKZMUWRJDJMNQWGZDVZCYSIFTNZSPLXXTYKZLNQNDAQGZGGDFGXFGUNCPFYCIPFBHASXXZRSQJLCWJSCYOIIJEMKJUREAXBIWVRYUTYWBJPAOLAOURPUGOB");
    msg.conditions.assign("CWMTLMUIOVKSBETBYUOHSZMDEXICNNANRGXOHCJGAXKJHGQJRFEJKFYOJCKZKDVLSKQDLYWZODMARIMDPWHNTBIFVHWKPYNXNZXFCZVBFBGYRWJWFEFSNPPCUYVIDDMQPORGDUXKLAGCUZASONILQBIQLZQTCQTAFMNTDHLEZSLZAFCYCEODUJLGQIBUSWTTUXYXORAGPPFJIOQVBZYERBGPISMREVSLYKJBVKPEMTNAAH");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 31426U;
    tmp_msg_0.lat = 0.43192027838949043;
    tmp_msg_0.lon = 0.205551323416586;
    tmp_msg_0.z = 0.7448820727067578;
    tmp_msg_0.z_units = 53U;
    tmp_msg_0.speed = 0.9991293368990048;
    tmp_msg_0.speed_units = 154U;
    tmp_msg_0.custom.assign("CHDRNTLEAQJIZVIBEMMBECDCABNLPZNODBCEWGVCNFKYWHKMFGDAPRVAHZIFTLWRHLSABWLFXIQWVVSAYRCBYBUKIGITZTKUNLFPBRSJQOGOTGYDZQWMU");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.9289516017097873);
    msg.setSource(35849U);
    msg.setSourceEntity(196U);
    msg.setDestination(28619U);
    msg.setDestinationEntity(25U);
    msg.source_man.assign("EBKYLPBWDTWVWODMPXBLIYRVQLSCNMRKYLZUSTSNPHOHBIJVIGYMMKTPBXJPQRWKZCNEPOOILBXWUGTIWCUAIKGPDPHJTMFHGZZENUQQOYVBQAUJRVOJWSVBMSCFUHTMTIVGLDWERVJEOVCFTLFANENTSRHFMBRHYJXJQL");
    msg.dest_man.assign("EZNPRVZZTUNHETY");
    msg.conditions.assign("PRPONVHGOQYGKQGZFSJPNLYXVHTMBDFLAUWZMQTEARWWZCMVHRBHMOQVLYDUWUHTP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.8689963659902629);
    msg.setSource(10563U);
    msg.setSourceEntity(136U);
    msg.setDestination(18516U);
    msg.setDestinationEntity(180U);
    msg.command = 56U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZEFCSRDNZNUOETJMPPZVXUGSXPULNVUMVVPHZTGQVLTBRDCQPPXRRQZLBJMLYSKFHXGHWSWJBDWEYEHWBIHOVLJDCXOCMQOEQFYIIIFCACHGRKRQMAKFIUWPDUKYPRZGNVKMJSBWXXZYDEGCYJDTKORGSHOLFAALFTWFTEFJTFWOIEUZMRBSITIDSLUNOUPZBAJNYEEVKCDXYHMLCYQALCJZKKR");
    tmp_msg_0.description.assign("XTONYYWDBEUPEEPDODTLNBXDWQEHONUVCOGIBSLHEYMKWGGRZLFUSCKWFWPNDZXRNNMRWYUCSHKZSZRJNKFXGEHDCRPLIKJOCSZXVAECYFRSMUVZIPPBMARLVHCTSOPNJKCZZZXTR");
    tmp_msg_0.vnamespace.assign("OIAWQLSRADVMSIUSQIVYJOFUVUIYLLHIIVMBJPLWTZMHXRRNKXIOQZNKHFRKYLDZOXXSHHOIKAAACTM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SFJMSPEXNUZBHPAOZBBPWGDKCVBSGOINQYHVHZTPBDFQMAULAUDARJJKSWGRSTJBTXMJEHXHEEQVABNJIEFKZTBOKGQIVHDYAMVMWWFHCFTUGNSVCLNCNVXQKWWCVXCHFYMPFFXIKDISTWYIILRCZCUTSLNAOBUVRBLXDIZEMZRNQKHLMWUWXYQGJWDJPGCYPRJYISMONNKRGAQ");
    tmp_tmp_msg_0_0.value.assign("OSWDARAHQSYSPJZXKSKEXNWBXFZIGMPEXPYALVTXXHOXRYTBPJBQLLTVKOQZAPMBJLHCSYPEVIZLMUIWEGSXDOZOLXFJUKAOWKAGNQWMRDNVJAFCHNUSJJTPKVEBZKRCYIQCMRFNCSNNTUYZRGCAEEZDVQMJEHMEIKCOGKJFAYTIIGQBIMPHHUUGNFFSUPFOCTGKDWIHYP");
    tmp_tmp_msg_0_0.type = 150U;
    tmp_tmp_msg_0_0.access = 47U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("AHRYYKRSJKHAOMPOASQWLYFQDXMGSBQBTCNICNELIHNBOYKDBCEYDRZFDTEJGINAJCPRKTTXAJNSGAFVVAMEGMLWZIKUU");
    IMC::MessagePart tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.uid = 220U;
    tmp_tmp_msg_0_1.frag_number = 236U;
    tmp_tmp_msg_0_1.num_frags = 104U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {57, 109, 120, -15, -88, 58, -93, 118, 22, -4, -45, -11, 67, -27, 87, -3, -101, -2, 24, -54, 31, 24, 23, -81, 51, -127, -50, -128, 96, -44, -62, -20, 101, 16, 122, -65, 43, -59, -3, -53, -116, 41, -23, -31, 96, -25, -58, -8, -5, -90, -31, -116, 34, 104, 62, -111, 99, -41, 39, -66, -119, -28, -103, -9, 72, -68, -97, 92, 11, -83, -74, 44, -20, 49, 109, 64, 20, 80, -108, 6, 116, 76, 103, 30, 99, 17, -92, -68, -102, 95, -39, -52, 58, 55, -116, -93, -5, -49, 120, 26, 107, 106, -48, -127, 80, 104, 80, -19, 80, 52, 124, -61, -97, -4, -93, 53, -37, -117, 123, -49, -14, 68, -49, -82, 36, 88, -79, 96, 102, -28, -28, 46, -41, 95, -102, -6, -24, 107, 49, -115, -65, -25, -126, -100, 5, 82, 87, -63, -77, -58, 111, 55, -66, -82, 93, 8, 126, -83, -104, -61, -106, -102, 28, 6, 94, -12, -56, 88, -115, 85, 60, 65, -51, 59, -107, 82, 36, -85, -3, 20, 52, -7, -120, -68, 102, 56, 64, 62, -69, 17, -39, -91, 90, 120, 100, -28, -57, -48, 75, 3, -61, 104, 96, 7, 68, -109, 52, -12};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DevCalibrationControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 187U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.3014357041783331);
    msg.setSource(39323U);
    msg.setSourceEntity(29U);
    msg.setDestination(3480U);
    msg.setDestinationEntity(70U);
    msg.command = 3U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EQZMZBBKIOVEWRZZHXHGINILUHLWPJHFSWQDWEQIUGCVAJXQPCJZIXGSBRRUHOVGYJPZOMDMTRGKKGOQNJBANDPEUXOFL");
    tmp_msg_0.description.assign("PVLBWTWAUSOODOVRFMGUWMRPOTMILULWWANDHTDLVUOBHFQEHYJOUSZUFNVCFQEFAMQVLLXMJWHJJBOHSYCNKVTUSCJERSZVBGYNXJMFMPIEWEHILVSXFGDNWFMCARKEOLBGDEQAXHCCXZTPIAKTEYYRTDHONKUPDWSNZUQIQJRCGCIVXAKEKPDQRAIXGKYCQOBYPIPMBWGTZKCTBRNKZ");
    tmp_msg_0.vnamespace.assign("CKUZITDNJMYRDAHHWGYCJWOXSPNBTDPMUWPOWTNYNDFSWJBJSSKRBXVSURCQTVTZLPEZKQACANPDJHLLZSNLIPLV");
    tmp_msg_0.start_man_id.assign("ENXXKAFPONREPZJWNSPLDTMBFTPJADYUZYWPFHTSHQUQLLJZKHCHVIFGYRIHDGBGUXUWQSDALVQOSGSCRMMNJRWFGUDCFVCKCCIZVZXLRCHPCBQYMIPVOZEZNTJETPMNZJLCGFZALYSXEMPMNBRGKUGRUIXEHLYPBLEYVIXOTWMNMLEQSOXYAGWEFOUXKVBKBVBSAAZTQQYRADKQTBORNWKDQMOSAYAVIVERXDWHICKINWUKTDFHJD");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("YABMKGSSFCNNPCNNXDRGGKRMLUSLVDMOVJVQHVJWXJ");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7060579323413576;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7660671307007045;
    tmp_tmp_tmp_msg_0_0_0.z = 0.050357897404228136;
    tmp_tmp_tmp_msg_0_0_0.z_units = 115U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.9354020722614358;
    tmp_tmp_tmp_msg_0_0_0.duration = 6323U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.45311123586215696;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 219U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("VMSTBPUNOUIKFRXYEOLLWIZMSVQVYYQIKIPXOYENSJHXVAICWHJTXATLNCSYIAIPTWZFICGXTSEQUSMCJYLBXDWXVUTZTSZBNJUGLWBMKVDAROABZKCPKQDDXRKQGT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanDBInformation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("RZDLRDSTYVOYUVBDNACTTGHXXZISRZTPYWUGXKGPGAJQFMYIAIMANUUYMAJFIKJSVSRINWEGVPJYWWRYSOLUCEMFLDBCXMJBOOHWPNKQVUCLBNFHBZSWOZLJTGFUWBPWINMNRCAHVEIUOGXCPXZBDWNQQCRHVKHVVTNCHDIQQXPBK");
    tmp_tmp_tmp_msg_0_0_1.plan_size = 28302U;
    tmp_tmp_tmp_msg_0_0_1.change_time = 0.8983481437953696;
    tmp_tmp_tmp_msg_0_0_1.change_sid = 25006U;
    tmp_tmp_tmp_msg_0_0_1.change_sname.assign("UZXLGOVWTKYNFZISDTZTBFYRSIPVTCENMGKVBAVJUBFRDSODFHADBAWAXGCFJPEPYPUUJDICOFWPDTQJNHQCZSCIHLLVNDOTNZLKMBERMKNJRQSKIGUWRXULEAKIQFNOSTGNMYQRXNFPSYYAKPCQBMJ");
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {-8, 109, -116, -105, 28, 113, -99, -27, 0, -46, 77, 35, -74, 19, -78, 122, -103, -107, -30, 107, -18, 23, -23, -42, 77, 86, 36, -128, -43, 112, 23, -118, -89, -32, -122, -51, 99, 123, -38, 10, -85, 106, -105, 100, 94, -126, 63};
    tmp_tmp_tmp_msg_0_0_1.md5.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VJRBPFCTRSEUAZGMHQLWWXYGOQLKPUNGOVLHZUCYQBDGKISJPORUYRIXSRENUGYNWRBLUDSRSNBEKMERPCFEXCCAISATDIYHNNXNWXKCZZLZZSEGIZSVWKNFDEFSAKOCEXKDTQFTFWKOVBYIMVTXLFHJLBIBAUZJJGHJGTXRJPE");
    tmp_tmp_msg_0_1.dest_man.assign("CLFZLBDKCJKCNYXFUPOABIEZNGRMNGTWIUJMAKSKWJJMCYWWMRBZVPHJRWQIQVFSHTBYOPBMQZETOUNTMKAGDTOCARRWIPKRHMUCCLEWPSLHDEEGSFCRHFSGYUGUDNBWRIYVTAMEBAUUZXSQFLBXLWPVHYQIJXXOLIYSAVKZVLQDKCCZHTYQGJSDIRXWDAXKAJXAPEPLZYZHBO");
    tmp_tmp_msg_0_1.conditions.assign("APXLETSPVKGTZHTBPWTCTDSYVJXAPRFFGHOMQUMJTPGPSGODBYZCOMBRAWMUKIHRHOIXRYPINQFBRIYUAZRYDKHLKVHWLFRCOKGSBTKEAMDQQPTGM");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("TZNPQHETHOGOJYJIHMNTFUHKECWCSUXUDMOVNGFBWZFRBRVHHKYWWADJHDQVLFIASNW");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("NLWDNNRMQJOROZMXEPUPJJWVCLEDSIBXIYTTQSNPALJEOCMLMMVXKABJAHQGWNIPNRFEOUKRRCIEWVLFG");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("WBQCZIUKVKWZKAAJCTDOCSJBAQPNGVQCPFDBAJKDLOPDQCOHTGTJMBJXYEOOTZNPLHYMJMZHGDKNRQUTPIAVZSXSEXNGYZCLSDWBJNJEEMFXZFNBHLKXALWQKEWLQHAMC");
    tmp_tmp_tmp_msg_0_1_0.description.assign("MGOIRCOKJJNJDYTHUVGHHOZQKAHNLKSPDLCKLRVNIKETBZCLFSZQNRECDVMSTMUKNUHPXKBDVRFFCBQAOHOSXCBRZUXGUANQPWXQ");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.08082885435250886;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.717657424620343;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.16844996191333828;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.2878331634765966;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 30702U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.8904619356710903;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 55714U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 14338U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.24819851076911248;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("HGSDFNUAFEXFYSEKILVXMMJPRABNKTQDEQZDMDVIOLUTBNGGHRAPRMTKCUGVZWCAZJFDWNZANFZKZGWGBYEOLQOVWTJQYEKCJMUZYYCCLFXPIIDRLRFPUPCNDWKPINZHTTQMCELGEMHOGOLFLYPRODQSXWA");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryPowerChannelState tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.2470429244992498);
    msg.setSource(951U);
    msg.setSourceEntity(202U);
    msg.setDestination(34035U);
    msg.setDestinationEntity(253U);
    msg.command = 42U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CIXGSBESCNJKJWSHNYWUXBIMGMZZCVBRARODBAPUTMULXXJLJFUJSDEPPLRLGTCJHSIVFQ");
    tmp_msg_0.description.assign("FCROYHKQEBEKOJSDAZOCBKXRNKCCGNPZIKQZBTQJHDMMHADINHBTWWQAPSHVYGUFXCUEPTSYQLOJEUAUJP");
    tmp_msg_0.vnamespace.assign("ZPNDBEKMUUSWHYOLQEOQVOLHBFFGZAVBJJCELMVIYNEZOGIDAIRPGFFDCKBT");
    tmp_msg_0.start_man_id.assign("KBRGTPHLKUVNTZQAKOQLBSLWUIREHSTWXPVJGMYVZTBFXCDOEGDTOWILWLDOMWCPWVIDXBUICDTBBSVXCNQIDUJRCPWLPEEUABKPZJYYNUGTMNDDMIFFXTCVGHYPQOL");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TYUOSCZAAFGUELXPWCCJPHNFGNOCMQKOGOEBQARXBQBCMQGIRCQZETTRNXNZLRKPYJJAAZINPIULZVESKEKAYWKOXSJDUWUPAGHMAQTQMGDJVGXUPGYZFFXPSERRCNXWHDZLILNWYFIVVTDQTJHBLBBR");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 52911U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("UKBQWXOWTGYBMAVNOAODSLCUKGCBIQSRUQVOAHNUCORMNGXZPIBOPTELPIIMWLJJJZGDPUSTRMVXRNJHNYTXWMXFRSNQJHTXTHBZWVLIZOMNTRUDEWRBFABHBYEMYSLQECFSAGFYADNXZSXBJQEHSLIYIWAUIQXZVKBJILWQHOFGCKJDJEOHKACKFUFYRSAFVZYLKPFKGUZCUGEPFGTTDYC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AllocatedControlTorques tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.k = 0.8006274683385624;
    tmp_tmp_tmp_msg_0_0_1.m = 0.9886640220601978;
    tmp_tmp_tmp_msg_0_0_1.n = 0.5988631055161912;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("KYZTIUBUKPDHNGNXPRTLGHEQNZUACMQIVCXBWQJRH");
    tmp_tmp_msg_0_1.dest_man.assign("WXLNUEAZOZZJMVRMSYJOHXFKEVZOXVYPNJQROIQMQMTXBQILUCRVHWHJCAQCBXVCXRQZAYOLLCWGMHXDQFDGEZFPQKKTFDNM");
    tmp_tmp_msg_0_1.conditions.assign("VMMHLIDIVKDTODOLZY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Announce tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sys_name.assign("LPJBLUMPROAOXSNLIEHDVQOFPAWWHYXOYUUXEKJRZABJZJIQHVKDAZYMCHGUOJPFAQIGKUYWTSTVFHDKHDEWOZZEFHNLXMOOZSFHEEALLDFNDAANVXCFIDDNUGMGRVLIRTVGGORZCBSKXBVBPIMWVJFPNUUTBPMDRORBXCAYZJBXITHVAKQWBLMNSY");
    tmp_tmp_msg_0_2.sys_type = 98U;
    tmp_tmp_msg_0_2.owner = 22282U;
    tmp_tmp_msg_0_2.lat = 0.9824659861925253;
    tmp_tmp_msg_0_2.lon = 0.8255974893714041;
    tmp_tmp_msg_0_2.height = 0.799828221440458;
    tmp_tmp_msg_0_2.services.assign("AGEQVDWDFVJQRDXRHIIFM");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::UamRxFrame tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sys_src.assign("TNBIPKLIRSDYKWNZTESOUQVOSWZRHNGTVUEPEYPSBCCBDUENKBQCJOAOJSORHSUNHQXSRURKFWGWYCRMJAHZUKDLZNIVBJOAXHFKGBDDMLWBFYOHZJT");
    tmp_tmp_msg_0_3.sys_dst.assign("AEEMMYWSDFXHPVJSNEYFATKDGFUIIRAAASBVDHCZBPORJFTEFKCCJUTHLKEBQMYGGALLRYUYLOIWZTOFQSNBHJUYQCPUZQRNKEEOXNPWEHKOENLNTQITTFBWACZR");
    tmp_tmp_msg_0_3.flags = 115U;
    const char tmp_tmp_tmp_msg_0_3_0[] = {7, 91, -89, -116, 10, -11, 29, -112, -51, -121, 93, -28, -39, -77, -101, -98, -28, -75, -54, -90, 123, -94, -75, -45, 109, 62, 114, -36, -122, -12, 64, 21, -65, -2, 92, 103, -14, 5, -72, 83, -90, -119, -8, 113, -49, 76, -99, 105, 25, 28, -105, -69, 101, 117, 49, -69, -14, 56, 36, 62, -5, -82, -112, 114, -12, 97, 46, 126, -121, -75, 34, -38, -16, -99, 21, -96, 4, -97, -66, -74, 5, -88, 1, 91, 33, -126, -82, 24, -68, -108, 8, -49, 45, -122, 47, 20, -67, 11, -37, -74, -26, -112, -116, 3, 80, 25, 121, 14, -110, -16, -117, 125, -111, -9, -118, -25, 43, -49, -102, 120, 36, 94, 89, 34, -95, -113, 51, -75, -79, 5, 116, 86, 9, -40, 104, -13, 70, -40, -34, -62, 21, -108, -33, -4, 89, 83, 26, -109, -69, -113, -88, 5, -5, 115, 67, 27, -49, 54, 51, -119, -121};
    tmp_tmp_msg_0_3.data.assign(tmp_tmp_tmp_msg_0_3_0, tmp_tmp_tmp_msg_0_3_0 + sizeof(tmp_tmp_tmp_msg_0_3_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.8349180315300262);
    msg.setSource(57487U);
    msg.setSourceEntity(197U);
    msg.setDestination(23974U);
    msg.setDestinationEntity(21U);
    msg.state = 127U;
    msg.plan_id.assign("CYOREJERIOORMWSHDUIKBUKTGGJHEZBXULZXGVXCNHCGHLJTBYZNQPHJNRUKMCWVIRQGKJZNNXLGYVEOEUCYQULWFANKAAWEOERHSLODVWYDXHXBWAAXGPIXAIMMYWATNHJSMBZDDCGWDLVFZSGGSJQUCDXQLSVIQFOSLKDETSWTIPSFRPNMJZPMIJAZTKUTNKCPHLFKHBZKMQFWBMCEBDFPYFYVIOQQRYVRP");
    msg.comm_level = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.5356050738599218);
    msg.setSource(35800U);
    msg.setSourceEntity(52U);
    msg.setDestination(6804U);
    msg.setDestinationEntity(196U);
    msg.state = 6U;
    msg.plan_id.assign("HXOBQGVOPVBGXYIUYFFVXBCDERPJPXBPQAIOZWYREKLNFSGSATTDZNSHNZWVDHIUTFXFSTOXTQDCCPPGLASFWTSMEMLMJBEDIYXCYVBAJHUFCQQFZIZZTJONHEJMGKQDOKRLJLKWRUFEPJNZQDWEVQLDONSVURIAMTBAHEY");
    msg.comm_level = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.15684010966145456);
    msg.setSource(32358U);
    msg.setSourceEntity(99U);
    msg.setDestination(10268U);
    msg.setDestinationEntity(169U);
    msg.state = 240U;
    msg.plan_id.assign("ZPYAQTNHHSXTDABHJTBQVIWRLODOGELKHRMUYVMHBSGBGBFWSSKUNUKWYSYCQNHXNPEMLNZEEPYXIUFLYJYVAFGDQZORUDXBTXIWICRKPHVIHNEK");
    msg.comm_level = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.5595419301186384);
    msg.setSource(5231U);
    msg.setSourceEntity(174U);
    msg.setDestination(24744U);
    msg.setDestinationEntity(188U);
    msg.type = 93U;
    msg.op = 119U;
    msg.request_id = 29376U;
    msg.plan_id.assign("PYEIMYJERYGCYSKNHKFDURWLTGSDVRUUCTXNGGQRVMXVHADRZOHYBOOBFKXCCSELNFJWQKHQXNYZQMPZMABOZWAFMKUANVHF");
    IMC::AcousticMessage tmp_msg_0;
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 23045U;
    tmp_tmp_msg_0_0.lat = 0.45654215669101017;
    tmp_tmp_msg_0_0.lon = 0.6128540035677099;
    tmp_tmp_msg_0_0.z = 0.11717349347328321;
    tmp_tmp_msg_0_0.z_units = 32U;
    tmp_tmp_msg_0_0.pitch = 0.002687120424880951;
    tmp_tmp_msg_0_0.amplitude = 0.03660515763232197;
    tmp_tmp_msg_0_0.duration = 33944U;
    tmp_tmp_msg_0_0.speed = 0.4816781775633797;
    tmp_tmp_msg_0_0.speed_units = 246U;
    tmp_tmp_msg_0_0.radius = 0.6061524788430344;
    tmp_tmp_msg_0_0.direction = 3U;
    tmp_tmp_msg_0_0.custom.assign("KOYNIEBORRQQBPXTUUKAONVLOYQVSWPCAECIWCLHGXDGSLMCPPHAWMIDKOBXXXYNRDZJCQAJKBAFOGLVTTDVGXKZQZUHTODXHSVEDEADQXBRSYJMCBJAWHFJJYVGKSPJMHUIFEJWNRWVLPNEMHIZRUXCNBGTMHFDEDVRGNFJWYN");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HGCKBKYPXWMGMKVWEKAACVJCMUNICJGDBOOBKVGZAUILJBIRESTFWNYJYRNLAVZSQXDQNPCVONDQCWPBDTHALHTHZEOSRMZHYXAWXYBVNMKAFXMFCPFGXECAJUGMRRIBDMFIWZZVEARGRLCQTHSHWNEHRTENLIQFIJUQUJHIPRDOELBZNQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.12628917351442648);
    msg.setSource(11042U);
    msg.setSourceEntity(149U);
    msg.setDestination(55650U);
    msg.setDestinationEntity(212U);
    msg.type = 146U;
    msg.op = 150U;
    msg.request_id = 4913U;
    msg.plan_id.assign("KQOASLFCIQJLIVLRJXMTRWENYKZJUYAYZQTEMFAHSRAATPOUTESVBCCGPQBTFSZYVXPQYAGAEJNDLXBKRZSCLWFNEURYMXVIGUHBCXCJERGTDOOXSQBOFNWXUDLBIZQYYQZBKDWIFJGSWWMBVIXEDLRORRU");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.3002552569011748;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UMCTRKICMCXYATYPAWNBYBZTVEZQQDNQNWLFFBGVJAZFKAWXPJJHFTDEQABKFXBAXRIMKPVEGUDPMPOAXVIASWBDJUFSUFLNJVCTSEPVJGLHQSQTURFSWNYEKGKFJPCYGLFJORLKHMSMZBCUGOHLODEXQTYXDZQMGYGOWMCEDRVEMHUUNSZWRLWLJKDPWDRKUVZTZHSHVEPNXEOQNVTJRIBYBGHRUADYLLSOCNNIIWBZMRHXOPCOQTIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.04556272279023332);
    msg.setSource(14620U);
    msg.setSourceEntity(225U);
    msg.setDestination(37873U);
    msg.setDestinationEntity(185U);
    msg.type = 86U;
    msg.op = 63U;
    msg.request_id = 55970U;
    msg.plan_id.assign("PORBCJNJLAMWNJTLNMBXGBGCNIKRYBKLGUZGLAHZFVXEZJILYJMWKOQEIQDORIGQXUYAFDTASWOVXVGVEVHPC");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 155U;
    tmp_msg_0.frequency = 577611861U;
    tmp_msg_0.min_range = 1945U;
    tmp_msg_0.max_range = 20860U;
    tmp_msg_0.bits_per_point = 44U;
    tmp_msg_0.scale_factor = 0.5927612743649727;
    const char tmp_tmp_msg_0_0[] = {96, -50, 44, -64, 80, 6, 41, -101, -31, -107, 75, 17, -50, 8, -31, 20, 98, -21, 47, -36, 88, 116, 117, 46};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OINYXJPPAERFXBTEITUSVYAXTFQWSJHOYXBLOVCVEMGAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.15426759086965092);
    msg.setSource(52444U);
    msg.setSourceEntity(235U);
    msg.setDestination(18544U);
    msg.setDestinationEntity(162U);
    msg.plan_count = 37706U;
    msg.plan_size = 1961564595U;
    msg.change_time = 0.0615241920120676;
    msg.change_sid = 42687U;
    msg.change_sname.assign("NGWZEORMEILJLDAMUULIIKYIWPOFNYUDPADJGLXZCSAAMTAUWKOKMBYHBXMSYMFIRDRAJPHYEGFWSWIFFPTXRXLYEOZQKFSTTTZULQAGLXTHEKUESCQDQWVMGNYXJJNXWCJRRURDCLZWMKVJCGVGNPKVY");
    const char tmp_msg_0[] = {-128, -95, -82, -54, 120, 84, 50, -120, 9, 123, -41, -45, -123, -51, -27, 116, -106, -70, 13, -58, 9, -99, -83, -113, -48, -12, 100, -82, -25, -30, -21, 15, -50, 82, 115, 11, -98, -68, 36, 40, 14, -120, -48, -20, 106, 17, -1, -25, 103, 57, -96, -106, -97, -44, -4, -65, 55, -118, -11, 110, -18, -58, -42, 97, 10, -15, -80, -101, -87, -66, -102, -34, 86, 124, -2, 25, 70, -4, 43, 64, 43, -4, -18, -42, 38, 86, -29, 124, 43, -101, 93, 87, -81, -19, 72, 18, -50, 38, 91, -17, 105, 21, 11, -1, 14, -20, 10, -116, -122, 117, 1, 101, -53, -15, -53, -115, -30, -120, -122, 113, 82, -68, -100, 73, 119, 92};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BDMJDQQSLSJZDTIDBVKSCXZXOYHENWHXMESVRMHCUTOFRIYZTLQBXFQQNMWNXPVLHPVWJKWAPK");
    tmp_msg_1.plan_size = 12138U;
    tmp_msg_1.change_time = 0.20928012081884173;
    tmp_msg_1.change_sid = 30191U;
    tmp_msg_1.change_sname.assign("YGDLMFDMWGOQXNHFWYYKCPBZWSJOFTLJXCYQBDHMVMAUNLJKOIYDWJGTMNEPK");
    const char tmp_tmp_msg_1_0[] = {-38, -62, 1, -56, 26, -8, 105, 76, 2, 125, -55, 121, -43, 123, 12, -74, -61, 47, 54, 46, 126, -21, 17, -116, 8, 31, 91, 26, 8, 117, 48, -6, 58, 105, 104, 44, 122, 9, -122, -28, -107, 80, -82, 64, 33, -63, -74, -113, -93, 120, 123, -69, -19, 91, -5, -62, 110, 70, 125, -46, -5, -20, 9, -8, -36, -63, -58, -114, -42, -38, 5, 65, -103, 63, -56, -127, -42, 59, 49, 117, -90, -7, -55, -14, 56, 103, 11, 4, -50, 90, -11, 34, 76, -113, -37, -123, -87, 90, 91, -42, 115, 19, -29, -28, 68, 8, -69, -84, 48, -20, -56, 30, 44, 100, -50, -37, -112, -66, -84, 120, 120, -108, 37, 85, 77, -28, 33, 124, -46, 116, -117, 122, -70, 122, -66, -75, -57, -123, -114, -127, 81, -94, 26, 38, 122, -16, 63, -56, -7, -23, 37, -30, 82, 58, -119, 51, 102, 36, 58, 42, -9, 119, -96, 2, 112, 40, 117, 62, -126, -98, 14, 37, 21, -53, -13, -22, -93, -128, 95, -49, -19, -3, -68, 47, 77, -85, 94, -65, 94, -30, -100, 6, 53, 7, 87, -88, -69, -10, -73, 50, 115, -42, -20, 77, -30, -28, 124, -116, 55, 92, -31, -123, -110, 113, 110, 94, -19, 98, -113, 89, 3, -104, -49, -112, -122, 15, 114, 113, 14, -83, 94, 8, -14, -5, -21, 97, 32, 48, -51, -41, -82, -47, -57, -111};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.8181011363524255);
    msg.setSource(4755U);
    msg.setSourceEntity(231U);
    msg.setDestination(36197U);
    msg.setDestinationEntity(4U);
    msg.plan_count = 53932U;
    msg.plan_size = 606600447U;
    msg.change_time = 0.7499242587085568;
    msg.change_sid = 12037U;
    msg.change_sname.assign("RHFJKBALVTIWOPNVQHTNLYDXNAONQPTOXGTO");
    const char tmp_msg_0[] = {28, -95, 2, -31, 108, 101, 62, -104, -20, -104, 98, -100, 113, -120, -97, -29, 94, -14, 9, -123, -68, -112, -103, 72, -30, -110, 41, 113, 32, 61, 3, 72, -36, 33, -123, -122, -11, 22, -19, -13, -95, -4, -35, -23, 121, 78, 26, -32, -7, -97, 117, 67, -109, -93, 53, 19, -2, -82, -96, -82, 19, 1, 95, -80, 12, -100, 62, 124, -109, 98, -79, -105, 83, 95, -96, 95, 119, -98, 125, -21, 71, -79, -44, -122, 106, -101, -1, 29, 124, 53, 23, -11, 124, 49, 58, -46, 10, 72, -42, -88, -101, 1, -1, -93, -77, 74, 36, -92, 84, 117, 16, 116, -44, 55, 119, 85, -6, 49, -43, -39, 106, 70, -6, 95, 27};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FMRDQKHZBTLGOCSKQXJTRDNCYEGST");
    tmp_msg_1.plan_size = 52090U;
    tmp_msg_1.change_time = 0.3707225733135575;
    tmp_msg_1.change_sid = 60476U;
    tmp_msg_1.change_sname.assign("YZRZTAXDUTKXBMPBOAMEVUKBGSKSJMY");
    const char tmp_tmp_msg_1_0[] = {-27, -69, -30, -78, 71, 53, 78, -41, -97, -118, -72, 38, 110, 26, 75, -110, -2, 50, -102, -13, -121, 66, 99, 83, 90, -49, 16, 86, 61, -112, 33, 24, 66, 112, -100, -115, 54, 36, 52, -38, -35, -24, -126, 18, 104, -3, 27, 77, -62, -16, 79, 94, -30, -2, 118, -84, -102, 72, 51, 99, 82, 67, 59, 19, 102, 112, -122, -95, -16, 64, -86, 19, 37, 38, -16, 106, -94, 97, -5, 18, 29, 103, -112, -36, 5, 104, 42, 31, -23, -36, 1, 40, 9, 15, -88, 115, -69, 35, 69, 75, 5, -94, 28, -115, -107, 125, 72, 48, 88, -25, -13, -20, -32, -66, -77, 94, 48, -70, 25, 77, -34, 120, -79, 120, 117, -56, 39, -86, 116, -106, 84, -77, 55, -78, -61, -61, 116, 90, 106, 41, -51, 108, -118, 39, -97, -73, 36, 85, -78, 100, -80, 32, -100, -63, -66, 103, -65, -71, 29, -69, 110, -47, -18, 84, -14, -52, -10, 65, 22, 6, 36, 120, 91, -13, 4, -58, 122, -77, 36, 19, 80, 37, 126, 72, 72, -59, -111, 65, -96, -88, 64, 70, -13, 66, 48, 7, 19, -22, -13, 48, -87, 42, -92, -32, 104};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.041297732311216806);
    msg.setSource(22524U);
    msg.setSourceEntity(174U);
    msg.setDestination(59583U);
    msg.setDestinationEntity(10U);
    msg.plan_count = 61868U;
    msg.plan_size = 706670516U;
    msg.change_time = 0.6798335217326457;
    msg.change_sid = 44780U;
    msg.change_sname.assign("QTDWEMUTSLZTHCKNKSKCJYOZXUDILNIHDZARABYMONWBOHFAYUKMFMXVGYEYLIBEXH");
    const char tmp_msg_0[] = {-112, -37, -60, 45, -45, -49, -122, -16, -61, -100, 51, -94, 89, -56, 46, -34, -28, -99, 68, 38, -58, 53, -114, 59, -20, 116, 120, -127, -30, 48, -116, 86, 35, -16, -35, -82, 17, 70, 10, -17, 121, 100, -121, 117, -94, -69, -18, 126, -58, -73, 120, 21, -72};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VYWJFOWCBORRWXMVKTTKGENQECKIWPZYALSQFMNTB");
    tmp_msg_1.plan_size = 10669U;
    tmp_msg_1.change_time = 0.326990097623151;
    tmp_msg_1.change_sid = 26407U;
    tmp_msg_1.change_sname.assign("VANQTPPAERIZAURFSZEGEJJFDRTKZIOQLXPNGTKPOFLDGKKHFHBIBVWDFHJXXDJEFUJFDCCNRLDMHHTSY");
    const char tmp_tmp_msg_1_0[] = {-106, 28, 38, 47, 61, -115, 91, -120, 12, 31, 40, 88, 32, 73, -22, -27, 74, -73, 8, -65, 62, -49, 7, 113, -32, 15, 73, -71, 83, 85, -92, 69, 14, -59, -73, 49, -84, 121, -15, 122, 57, -87, -89, -83, 95, 89, -124, 123, 80, -30, 84, -92, 40, 6, -115, 124, -107, -73, -10, -121, 89, -59, -97, -114, -88, 21, -42, 24, 106, 106, -65, 91, 32, 27, 56, 28, 53, 45, -35, -110, -115, 20, -97, -100, 65, 49, -1, -68, 78, 100, -29, -31, -120, -55, -32, 97, -36, -15, -112, 126, -12, -85, -70, -42, 58, -68, 30, 91, -88, 96, -61, -81, 99, -94, 22, 30, -29, -43, 37, -9, 77, -23, -36, -93, 33, 53, -2, 75, 69, -44, 20, -58, -99, 35, 16, -83, 118, -47, -91, -68, -8, -58, -107, -104, 35, -42, 113, 16, -30, -33, -18, -72, -26, 118, -73, 5, 10, -76, 94, 87, 3, 47, 99, -29, -82, 78, 34, -96, -26, 5, -91, 106, 15, -91, -16, -72, 78, 94, 59, -2, 73, 110, 63, 81, -24, -106, -70, 94, -96, -38, 109, 46, 98, -107, -56, -47, -37, 108, -102, 107, -16, 56, -128, -107, 2, 56, 86, -33, 53, 123, -78};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.5301868465026072);
    msg.setSource(10471U);
    msg.setSourceEntity(73U);
    msg.setDestination(8281U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("RFDVPGXZNLXBUFFIMJRGQUVOLTKQCDPJYEERBQKCUKQHUZHJWDGAAKEWLEHCOHNBRXWDYGKHVGPXCANDMPMGNNTPMBOFTSHWDONRONMWMOYJXCDZBPISJPTXSUHOBOKYZQEITZYVUZGWZNQFCGDSJIRKSNQBIJRQTWZYVSACSHNMPLELFRXYPOFJZREVGQKIAVLHYCIUSULFTPBMVBUFIEWTCXRZ");
    msg.plan_size = 13813U;
    msg.change_time = 0.31329208407505804;
    msg.change_sid = 31114U;
    msg.change_sname.assign("DNGGQRQBTVDSOJVXAXSGZWBQIBRKPZZGIHZNINHSKCDHMWYAIPUUEVSQHOLHXRGTFPQVGUMRSOWQULZJANBUKNBILNLTZCKKWVQEFTPPWMVJKDWHFCGAMBCLJHALZEILOBWPOJWAXJCBYYRMNTXYCKEMY");
    const char tmp_msg_0[] = {-14, -18, -84, 118, 32, -124, -6, 86, 91, -41, -82, -8, 28, 74, 123, -107, -117, 95, 79, 108, 46, -58, 117, 125, 84, -18, -83, -119, 92, -55, 67, -69, 97, 109, 57, -6, 82, 86, 27, 42, -42, 109, 24, 24, 4, -6, 38, -117, 39, 14, -16, -58, -58, -86, -78, -12, 123, 48, -41, 66, 26, 41, -75, 48, -9, -37, 91, 119, -71, -114, 126, -22, -47, -4, -46, 67, 17, 100, -30, 91, 75, -24, 63, 4, 49, -123, 121, 17, 91, -73, -46, 54, 124, 66, -79, -85, -46, 35, 48, -113, -126, 21, 115, -66, 61, -4, -62, -38, 20, -63, -24, 65, 117, 69, -31, -75, 93, -31, 14, 51, 21, 45, 43, 68, 3, 3, -67, 87, -36, -104, -110, 14, 44, 23, -96, -72, 116, -108, 58, 38, -74, 125, 19, 76, 84, 107, -60, -35, 120, -14, -21, 65, -63, -34, 40, -52, 78, 18, 9, 65, 82, -67, -9, 111, 114, -64, -30, 94, -1, -63, -111, 61, 97, -37, -58, -40, -18, -27, -58, -123, -77, 18, -123, 8, 16, 79, -42, -25, -35, 76, 32, 124, -33, -51, 74, 67, 0, 72, -11, -20, -37, 61, -28, 83, 37, -127, -120, -116, -91, -102, -59, -91, -7, 125, 121, 76, -26, 85, -98, -11, -70, -66, -93, -20, 74, -19, -7, 123, -45, 90, 107, -11, 45, 12, 29, -74, -36, 107, 117, 60, -32, 115, 89, 8, -83, -43, 47, 18, 77, -83};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.43977546807428436);
    msg.setSource(45227U);
    msg.setSourceEntity(226U);
    msg.setDestination(51309U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("DCNRTOWKSYMEUTKUYHCEEOJWXEIOR");
    msg.plan_size = 17284U;
    msg.change_time = 0.19974150297416005;
    msg.change_sid = 52424U;
    msg.change_sname.assign("VMAZQNMNGYVHYFPWKUMQQFPPFOTAKGFZNRJKMBBIGRXENVMYPANRKECQFBXOLWLOFGJSRYTPUCENHGGAORSTDAXYFJLMOSKSKHRQYLCLMJDDRLRIMTZBWQADNNJAFEUGMIQWZPCDFIVOIAEVEBWDOLVYXNYWSPPHGHOUHKAIHXJUWCOWPOXWKLTVJXHJXTCDDMCEZTZXLGVSKBERDCCIBIKFBPJUEZQZSSE");
    const char tmp_msg_0[] = {110, 60, 116, -89, 32, 67, 88, 24, -62, 95, -112, 42, 55, -122, -77, -51, 89, -12, 40, 8, -45, -18, 7, -123, -37, 76, -24, -36, 20, 62, -103, 96, -110, 31, 77, 47, -54, -34, 87, 24, 18, -108, -127, -93, -94, 109, 98, -41, -34, -64, -48, -18, -117, 13, 16, -124, -20, -24, -34, -94, 104, 65, -13, -27, 57, 119, 39, -89, 115, 63, 47, -54, -120, 53, -128, -120, 39, -84, 119, -76, 86, -79, 68, -74, -95, -68, 112, -77, 96, 39, -39, 90, 117, 22, -48, -118, 126, -45, 67, 104, -71, 112, -35, 90, -72, -87, 110, 59, 93, 74, -60, 63, 63, -121, 25, -41, -18, 46, 42, -13, 51, 120, -64, 36, 118, 50, 24, 34, 103, -26, -104, -80, 82, -44, 104, -97, -119, 97, -70, 74, -98, -94, -75, 98, -110, 2, -110, -105, -3, -50, -29, 5, 91, -39, -62, 20, 3, -47, -39, -50, 59, 123, -70, -121, 97, -42, -115, 28, 60, 4, -76, 60, 3, 95, 81, 75, 78, -101, 64, -24, 11, 12, -62, 5, 32, 51, -108, -122, -116, -99, 114, -110, -18, -42, -29, 25, -106, 27, -61, -39, -66, -61, 19, -99, 56, -32, -51, -123, -112, -118, -62, -94, 125, 26, 78, -125, 13, 48, 52, -48, 70, -58, -103, -48, 122, -68, 26, 54, -61, 80, -18, -127, -12, -89, 81, 10, 91, -44, 67, 27, 98, -123, -42, 118, 4, 36, 116, -62, -23, 17, 40};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.008984793343193243);
    msg.setSource(29807U);
    msg.setSourceEntity(12U);
    msg.setDestination(10953U);
    msg.setDestinationEntity(108U);
    msg.plan_id.assign("BIHCXIZNUGQFZPJXSHUPWFGQCNAYLMDLOTKOMDTIELDXJHAHSZCCLNYW");
    msg.plan_size = 5482U;
    msg.change_time = 0.3741494450054942;
    msg.change_sid = 48531U;
    msg.change_sname.assign("PYETVMYITXYCIBTNNVSKSAOXNGQPKNGFHOPLXBBUWWVRNPFZSFYUZXVDEQEMSXVAZHDWOTEMSRXOILHEIIHLGQIUCOKDJOXZ");
    const char tmp_msg_0[] = {-27, -1, 64, 33, 10, 37, 101, -97, 95, 45, 60, 55, 90, 95, 110, 83, -89, 104, 88, 55, -10, -87, -56, 10, 62, -71, -126, -109, 19, -116, 3, -50, -49, 112, -65, 99, -108, -3, -23, 107, 53, -47, -123, -1, 123, 90, -106, -113, -92, 54, 90, -66, 16, -46, 13, -104, 60, -112, -109, 28, 109, 11, -79, 126, -84, 126, -107, 118, 37, -108, -25, -88, -20, 109, 7, 67, -86, 83, -15, -93, -40, -65, -77, 108, 66, 41, -63, -64, 2, 72, -47, 21, 81, 66, -112, -27, 48, -82, -119, 15, -117, -107, 110, -104, -97, -126, -86, -26, -7, -7, -8, -36, -125, -48, 34, -113, 87, -98, -33, 94, -128, -48, 116, -19, -119, 97, 52, 116, 0, 25, 118, 108, 100, -120, -124, 66, 53, -111, -19, 75, -107, 114, -21, -65, 98, -91, -31, 27, -88, -30, -37, 72, -63, -48, 96, 19, 116, -78, -44, -12, -50, 38, -45, 13, -17, 106, -12, 44, 27, 31, 17, 123, -128, -111, -120, -44, -94, -17, 48, 29, -118, -45, -18, -79, 62, -26, -47, 64, 58, -20, 114, 123, -36, 98, 58, -91, -120, -122, 65, -53, -99, 85, -54, -28, 16, -125, -43, -46, 94, 98, -126, -31, 63, 85, 61, 22, -17, 126, -69, 57, -65, -121, -67, 64, 109, 109, 98, -69, -18, 43, -24};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.28024238041706806);
    msg.setSource(52877U);
    msg.setSourceEntity(230U);
    msg.setDestination(62252U);
    msg.setDestinationEntity(246U);
    msg.type = 46U;
    msg.op = 60U;
    msg.request_id = 50350U;
    msg.plan_id.assign("KBTQZDQLZYWCOZULAKAIRWOGWSPHOIBLFNCHDYXUBZRWGWVDLRHEHRFRPAMFGUDETJNVWNVUNBMKQCPENZOUEHVQGLIMVYCJAJNTLTHIODZFSJBFKKDGIYTOWLLQFABMFRSMCHGJUXAMSDYEBTYTECXSJPRXQTPXLIENCQEHEPNGGUTBPKUCOMNSVZOFGXMOYMFPPKWJYXQBIHREWRVBSWAXCSY");
    msg.flags = 12705U;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 14U;
    tmp_msg_0.plan_id.assign("GUWKQUNCEZTYFDXXNOTLPDAIUYV");
    tmp_msg_0.comm_level = 236U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AYAZNQIEPBHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.21176459245668033);
    msg.setSource(27521U);
    msg.setSourceEntity(101U);
    msg.setDestination(35509U);
    msg.setDestinationEntity(109U);
    msg.type = 72U;
    msg.op = 45U;
    msg.request_id = 18798U;
    msg.plan_id.assign("JYVNJHMSUUZIWBPHLOJKCUKGZICVAGDHFNFPAT");
    msg.flags = 22838U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 33476U;
    tmp_msg_0.lat = 0.1937663793427299;
    tmp_msg_0.lon = 0.7422642311997086;
    tmp_msg_0.z = 0.6985971295411532;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.speed = 0.6017267068513766;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.duration = 39173U;
    tmp_msg_0.radius = 0.043823819415731546;
    tmp_msg_0.flags = 251U;
    tmp_msg_0.custom.assign("IBKKCHMJPKVVDWZTUEXADRPYMYAQJEFKIYRXNRCRSPNQTREMNHOVNHASLIUVPQWJJSLMSPWQBMUGBYMZDJDSKXLEQVVCWIDDHHGQVORTGEVGUIZXZCZAJQPBIRAZMUSRREWATFPPNLBMQCFOFNLHKOIQTJZZGWYS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ONJKYVGDAILBMKVCYWBRROJUFYWFGDPVEXIEVNEMMHYPTWNBRYKXZSPNEGCBIISFCJBBDKVZHOASRCJMIKCNQRP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.8890060885672284);
    msg.setSource(60942U);
    msg.setSourceEntity(110U);
    msg.setDestination(29772U);
    msg.setDestinationEntity(203U);
    msg.type = 123U;
    msg.op = 23U;
    msg.request_id = 54632U;
    msg.plan_id.assign("BIYGCGBXKWHDWHIEOQMKGLTWUGTALSMRRIAJNYALH");
    msg.flags = 37995U;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.5137305682162717;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KUIAVVSLQKGUZRJLEXVSENODOMEBKILRGQWYBJTMZRRNKDEIAJNGUATDLZJKUFMRXKREYSOPZUTKAHFFEINAMNXGZVQMHZWACYJMPSNGCKIGQYSVLBVBHFLFWFUEPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.9228391889303559);
    msg.setSource(30473U);
    msg.setSourceEntity(28U);
    msg.setDestination(16543U);
    msg.setDestinationEntity(1U);
    msg.state = 202U;
    msg.plan_id.assign("PPEBHEXCAGQZPHLAPXQLRWCQKTQSMEHHACTMDZDYTOLJLFVGSSOYGJVNEFCIDTXUKHURXXAIIVHEOGISUFTRPMLVEBRIOHYUSSJHKVGJIKBMKMJWKXWZGXLZJIPNXPMYDUBVPBSPDGQBUOWDBLQDWOJCEAQNSDKQNHACZPTZNCFMVGM");
    msg.plan_eta = -974894812;
    msg.plan_progress = 0.8474668087196042;
    msg.man_id.assign("IJRDPNXZHWLMHMHOPXXYWCWERJICFNEEUQCDDPFBP");
    msg.man_type = 57333U;
    msg.man_eta = 567129855;
    msg.last_outcome = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.5415103009310809);
    msg.setSource(12830U);
    msg.setSourceEntity(134U);
    msg.setDestination(58499U);
    msg.setDestinationEntity(126U);
    msg.state = 144U;
    msg.plan_id.assign("KDAYDCGAQUEKSDXPZACTSYQROWTHZNGKMQPNVAGCFFBHEKQRYGZRVOOYUJRJKMSABUUPBPSWMXMCZZSDJHNXWEXGTVPUNDXYJCPRFXMLZSGQDUMEHNQLHIAI");
    msg.plan_eta = 1398790361;
    msg.plan_progress = 0.9464125212762791;
    msg.man_id.assign("TQVJRQSQRHCZPSMEECVBNPNWLVBQFFKQJKUYXLUQINIHXEMSDOEVIQUATNFOGWVIBYMCPUHJCWSXAAHDZJFMERQHKDBYMZIAFLPLWJDBGKTPKKBYGCOFSSCKDOIGTIRZYWXORWJDAIDFAVLTXEPMPXESOAHKOVNSUTLNCNL");
    msg.man_type = 63137U;
    msg.man_eta = 853557776;
    msg.last_outcome = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.7847386286389801);
    msg.setSource(21075U);
    msg.setSourceEntity(186U);
    msg.setDestination(21477U);
    msg.setDestinationEntity(135U);
    msg.state = 42U;
    msg.plan_id.assign("TEISYWDPUJQGYAWKQSZCLOVBQUATGLHPSWREPBRBCASNFMPDDTMHKXLMBONPXITOWTBXIQALAHYWKUYDITVTPVBSHJVUNZDZUHGFGGCGNPEAPUXVHLXQGCMGJXODQRHDOMAWOFIZEHQILEDCUXFCRFNCTSEPWFJOKYJXK");
    msg.plan_eta = 1828700291;
    msg.plan_progress = 0.4777017467610889;
    msg.man_id.assign("HEVJDPKWNPVASAZSYHKBKMZWPUGYEIWMVDTLKGIWQFXUELBPECRQDXEWAKMPITGRRGCFAZNTUDHORTAMUXVNQGZKXYRLOGPJHXIFTUHCBRKICGBZBTIFSOETYFIAWUIHFZJXNENOOLVRTDOEQDDXUQFBOAQOSLDJMYZIGYCMJUPXOTHQONJHMMBPNRQXWNBDAEAMYCLMYJQPRLZGSAFUWWNNSWVSLHSG");
    msg.man_type = 30086U;
    msg.man_eta = 1327446152;
    msg.last_outcome = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.3200279664136325);
    msg.setSource(15212U);
    msg.setSourceEntity(15U);
    msg.setDestination(56251U);
    msg.setDestinationEntity(66U);
    msg.name.assign("QZMNWZOPBEXBOPGHKRDZBBIRCWHUUSTLKMZAKTBPRKBXHZZQFWRRYUHYEJOIDUTBLUACFUVRVGDUWAJFSMSGAYOVKLAGDMRHBQJATWPHPFLIXVZVQMYAVFMOYXETOWNPNYDICVVFNXGXRHNJCVCNBOGSD");
    msg.value.assign("CYHTYDCHLNHBOADNYPGUMKSNAPXEFAXFNAQBTBRPIJDRMDOUEXCWZOUVBBYISWXPCDBXOLPHVEIVNYAJJLAXOPIQTMFNJTKQUHZGZZMJWLIUVKRVTLBTMOPZWFBYJZPQE");
    msg.type = 119U;
    msg.access = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.8045114805544049);
    msg.setSource(31326U);
    msg.setSourceEntity(251U);
    msg.setDestination(50065U);
    msg.setDestinationEntity(148U);
    msg.name.assign("CJTUGVUAXAJLGZYLLASFKKXAOSPOVBBOSKNSYMEINYEXCMKDLTBQJMTBPCJKFWEFQIZMPMPRGEDGAVJHMMINSPYFRZWWJISGFYUELRDMARQWOTDWGWHWUUQKNVQV");
    msg.value.assign("TRHZSZCXJRTWMSVVBCLNHGVETZWVJALLSWFUAWQYEJJLPSEAOPXFMOMLUDLBTWNCKECKACFKMDNVBUOOIYSNWOQKMFFJHXRDYVSHXIVAEFGPSTDUKLSUXLGPYCRKQWNFJNGBAYOXDOMRYPRNDQADNKGZRXIMEYXHHMQOFPCTZGXJDGES");
    msg.type = 127U;
    msg.access = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.8521821539742214);
    msg.setSource(23421U);
    msg.setSourceEntity(227U);
    msg.setDestination(7155U);
    msg.setDestinationEntity(65U);
    msg.name.assign("MYBFXXKOHKDHTDJTSETEXLFTKMMFVPAEAGYNYHRVNNHCZLJRYJPBKRCRMZQHIELFW");
    msg.value.assign("YNRQLGDGVZXOSWIOUZJJUCFWAPFYGEDPCKTUIOHUPQVPNVOQJVMSBGMZRZYBVYXMPRYGVSJAX");
    msg.type = 230U;
    msg.access = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.9612536198115531);
    msg.setSource(46903U);
    msg.setSourceEntity(168U);
    msg.setDestination(7574U);
    msg.setDestinationEntity(240U);
    msg.cmd = 5U;
    msg.op = 152U;
    msg.plan_id.assign("YGNRJXQXEOZTUIQTKHNVBWVPJGWGHYFEWLHGLCFBJABXXDAZMCMBXCBOHDJRNRAJOGUQMDZAPDSWPMZUPBTAHFKTUJQYLSRAHFNHPVFOTFWBWSUVWVCMDOEWRVXOYKPLSPIYNCGDOBALRUZNCYTOISWMEYZJHADZJXKOGLGIGBEEKCQIPPQNFQRLUKDSUMYZFTIJISRSACBDMTWGZUKLIFQYPNEDKVEOXMXUCVMLATYVHQETFZREIKSJQCRXHL");
    msg.params.assign("TYBLOQEVJBOORXHFFNWCQMHBRCMLKHKEAHKYQDPSEETLOHGVDGIZZHIDUYIDTWEZLLONPVRNCIOVDMHSVAEOPNDVRZKMXIHXLCMZSLPAPKDZUZUFAQCZPPMMKRBGYYWGVMFUSZQXRUQSNNWRAJSAJFOUFXARENUXFWOCYGPQGKHUXXQBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.020313446605412455);
    msg.setSource(60933U);
    msg.setSourceEntity(134U);
    msg.setDestination(16122U);
    msg.setDestinationEntity(37U);
    msg.cmd = 194U;
    msg.op = 51U;
    msg.plan_id.assign("BDNIJKZVBTHNGGRONWI");
    msg.params.assign("LLQMVLTXAQKZKVVGLNJLTHKNNKWPQOCUBWDYFAOUHBQHINCMDSCPUTPZNUYVTEKCWZXWJEHLFROGCFMQTUISZGDLVNQEJMPLGYCAZHDPAZLXJWDORSPPLAHWWIUIECUDCTBVTQIBKJFMUBOEAANRBMFGDMGEEISEKPFDXEYHYSYURBRAOTMXXOOWJNOSTNHQSKZGRKVZRUJBYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.021500029439898705);
    msg.setSource(25447U);
    msg.setSourceEntity(149U);
    msg.setDestination(17299U);
    msg.setDestinationEntity(78U);
    msg.cmd = 252U;
    msg.op = 64U;
    msg.plan_id.assign("GWDUYMBXMQMHNBEKGXEDBGUCNZAZMITBVHJJPRCREGULIZHFQTFVWVOCXGLWOFXYKILQKFWCBXPPVUDNQRJLXPBYWLCFKYMFATPBHSDEHFRGNFSLNUAOBMMJSAZLSOQVMSKLRJPSHEKRDJIVNTTJWUROKYFZVZSWUQQILOTAWKLMHCIECQQYKVBDYGSCTIXASNXAPYZXROMDOHGUAZDOEZRNHEVDZYRTJSPNTWCXBEEPKPJNUUGADQIGT");
    msg.params.assign("JVMXWMCUFEOTNEBUXURWVKAGDQZWDNMMCGDDFSOTTICSLBHHYJZWBKMCENIYSQPZLSPPXUGWQUFBKNHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.2913837499584878);
    msg.setSource(21087U);
    msg.setSourceEntity(245U);
    msg.setDestination(17077U);
    msg.setDestinationEntity(35U);
    msg.group_name.assign("SILFDMQJURAXOWPUVMTYKDNXBSVPQZRYPMABMOBUYMCLTRIZDBZFCNHJUXZKZCLUUSLNCWVTNVRNKHWRENLIHHLIRETOAA");
    msg.op = 98U;
    msg.lat = 0.4241457714833994;
    msg.lon = 0.4027069295293094;
    msg.height = 0.37021845747464477;
    msg.x = 0.32012129039099557;
    msg.y = 0.2083757766989569;
    msg.z = 0.9440065636468915;
    msg.phi = 0.8694181223625906;
    msg.theta = 0.7118011982204556;
    msg.psi = 0.3454091860079268;
    msg.vx = 0.14643827335800452;
    msg.vy = 0.07162709362123099;
    msg.vz = 0.21025184290399557;
    msg.p = 0.6110593902434078;
    msg.q = 0.4364851781358914;
    msg.r = 0.19439034896045393;
    msg.svx = 0.19267688184358067;
    msg.svy = 0.1379556989931484;
    msg.svz = 0.35852904408709285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.023577847957936826);
    msg.setSource(41982U);
    msg.setSourceEntity(131U);
    msg.setDestination(40047U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("SFHOCYTLXYWMFBATWXXRIGPUXEUZPMF");
    msg.op = 21U;
    msg.lat = 0.08325316640901703;
    msg.lon = 0.40276476208257417;
    msg.height = 0.2117796113530681;
    msg.x = 0.8489885951280147;
    msg.y = 0.5538878786264538;
    msg.z = 0.8934116807323275;
    msg.phi = 0.5097768905623522;
    msg.theta = 0.5595293605623233;
    msg.psi = 0.49505067947035675;
    msg.vx = 0.8429272666404326;
    msg.vy = 0.2180179970710785;
    msg.vz = 0.15036492402692614;
    msg.p = 0.15052802337567028;
    msg.q = 0.6926671670455253;
    msg.r = 0.9204024312309019;
    msg.svx = 0.5711218117924807;
    msg.svy = 0.358131850527746;
    msg.svz = 0.48698322897339064;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.6057705212546712);
    msg.setSource(13907U);
    msg.setSourceEntity(221U);
    msg.setDestination(36046U);
    msg.setDestinationEntity(24U);
    msg.group_name.assign("XCBAUSMIFWHIZDQRNJKJIPMALVSXTMIFLNQQITXAKZWWYNASUWNYLYKQCGUPIOJPCCHFUCOPPXQMBDJPDTAUZERKOQPRTUORQBUWOIWBJEMLVLWKDJMJEGMCMFNL");
    msg.op = 23U;
    msg.lat = 0.7315069686271124;
    msg.lon = 0.43957962344525037;
    msg.height = 0.3207978639359559;
    msg.x = 0.7023462270303795;
    msg.y = 0.22872615457361167;
    msg.z = 0.6791019988232078;
    msg.phi = 0.3412614037023105;
    msg.theta = 0.5747821429109246;
    msg.psi = 0.893349964470674;
    msg.vx = 0.16768187675826396;
    msg.vy = 0.5972858588350706;
    msg.vz = 0.5755403648281251;
    msg.p = 0.33989152291272784;
    msg.q = 0.8667749013214933;
    msg.r = 0.8648612339798891;
    msg.svx = 0.38489504781499584;
    msg.svy = 0.862665314519502;
    msg.svz = 0.43381914537508337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.1457234177988601);
    msg.setSource(17052U);
    msg.setSourceEntity(92U);
    msg.setDestination(14876U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.6099657094782555;
    msg.lon = 0.07743027802456093;
    msg.depth = 0.2145740854389716;
    msg.roll = 0.827055873906341;
    msg.pitch = 0.08394973725145927;
    msg.yaw = 0.10679032773002772;
    msg.rcp_time = 0.4124682823347283;
    msg.sid.assign("URAAVOXGKMV");
    msg.s_type = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.4363894280097528);
    msg.setSource(37551U);
    msg.setSourceEntity(199U);
    msg.setDestination(25109U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.1333013837172473;
    msg.lon = 0.5357430947624418;
    msg.depth = 0.7608596112496706;
    msg.roll = 0.2690812417964822;
    msg.pitch = 0.22826384049865966;
    msg.yaw = 0.7026135825781309;
    msg.rcp_time = 0.3107897527227117;
    msg.sid.assign("IMLDHYHMQMLAARCAOYZDSAQJJFPPGFLSJXONCZVLUWGTJABWDUBSIYEGIWWDZLUYGFBNGVITYIYCMPTEREQZJEXXNETJHMFEZIQYKVOJVKRLXVFRMLFFETBQSEKUNNLCVKUBJSRWONCTCVKRYGBNWHBWFCZMQFSPPQXQXNMFBGNOZTDKDXAHEZDGVZJVWHMIQISMOPGCPAOV");
    msg.s_type = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.5759409832445403);
    msg.setSource(12302U);
    msg.setSourceEntity(205U);
    msg.setDestination(20684U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.4542370707940848;
    msg.lon = 0.5896276892711668;
    msg.depth = 0.29360635301416604;
    msg.roll = 0.6727314596170079;
    msg.pitch = 0.31483704645760624;
    msg.yaw = 0.9661550966351763;
    msg.rcp_time = 0.9090733992077547;
    msg.sid.assign("TNYDQASUWOTRPWJGAJXXHNAKQMRLLVRGJCYRVZWIIFHTOBIQPWMEYGJIZNKXNUFWNMFEJKRHZLGQBVMODVJBEYGBUQBSTKBXQBCERMEOSILDTJEWFYWGTITZAZEQCQPHRVMMGFIMYSULHDODXVKCSAZHJOFBCFCBRHCDPSDPPYXDKLVZSBOJSUYZCXSHKZGIQPLDRTAIGFAOU");
    msg.s_type = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.40867226248853683);
    msg.setSource(9309U);
    msg.setSourceEntity(144U);
    msg.setDestination(43272U);
    msg.setDestinationEntity(50U);
    msg.id.assign("WPEVJXXVYBCBUNKDDSWGAWQGRPXFAURQCFUTUVPID");
    msg.sensor_class.assign("KBXGAOIKRZRBTMWVCMEKJWYRMEFSSIIPLFNBMDZMYBHRAAACOXQNBNFGFVDPXOTYAFCZNZRPAUTUICNONSLGJWOHILUMQKSNPIHLEHVYOTWMPDRLLSQZCSRJYFCXEWSBXWGGOQQXKQWNDHYHIEDFAALSJRBTE");
    msg.lat = 0.9299845437388541;
    msg.lon = 0.24626796110631555;
    msg.alt = 0.7911996549824715;
    msg.heading = 0.9079161623433754;
    msg.data.assign("WYJLFSMADQXDXLIJLWINYCYOEBHIPAKWWEKIXERHVMKYUIMEMTKVJZHANGGKDFTDJPARKCCMEGCOGINKKFUJOLOJVRLRZGBFQRQSJTZSAWAPZMNACHDBDSFXKZXTWZQOLZUCJFBTHUYZCNKVMDXPPGBUIPESVLHBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.08578379677678494);
    msg.setSource(45180U);
    msg.setSourceEntity(75U);
    msg.setDestination(45027U);
    msg.setDestinationEntity(56U);
    msg.id.assign("TJORIQEBVLFRUFKSYMVOIXTZMGJHFN");
    msg.sensor_class.assign("VISPVOWHGMNVLCCKMTFGEAOGFWZAVYZKDQMEJCF");
    msg.lat = 0.382619719704573;
    msg.lon = 0.30593043878754267;
    msg.alt = 0.6570202213169151;
    msg.heading = 0.5818801974311142;
    msg.data.assign("UUEVJCCIXVRIWIHERUBWJKJNNWYUAFXLDUASVZSIFXQLLFBHUBLTFTFVCYXNMOXIZYONERXZIQEBYPPRNHVYRWOHIABFTZKSJSPQQHZTHDTVZODFTMEDQKVCDCWQGLNHKULHXEMMLXJLDPGAWNGJCAZQSOYSYPAFASIAOKGVRMNTBMJRURTTRZZKPDGUWCQYAMHYDEIBSGGNUVMTEWIXNCJLGWJSZQDEOBGBSRWMGMYCLPPOBEKQPAHVCOJPFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.19799568029268688);
    msg.setSource(2308U);
    msg.setSourceEntity(8U);
    msg.setDestination(8621U);
    msg.setDestinationEntity(107U);
    msg.id.assign("DAPFWWSPENPBAJGCMWRBVJWXGRM");
    msg.sensor_class.assign("IOTKJYMGPNJVHWJMHWDXBLUAAEBFXKVIWEWEZRAPHAGEHVVYYIDCCAPMNJQIJUZL");
    msg.lat = 0.5760398465214877;
    msg.lon = 0.43123917075805673;
    msg.alt = 0.6618774435352232;
    msg.heading = 0.4912974372999336;
    msg.data.assign("WZBBNLUTCRXWIDSDGGNLUERVMRKETJHIAWJLCEJCDOAHBRNMZSSXRXM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.27710421652834416);
    msg.setSource(39690U);
    msg.setSourceEntity(41U);
    msg.setDestination(5562U);
    msg.setDestinationEntity(138U);
    msg.id.assign("CDERZGCYANAFDOTUAF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IFUOIVXJNNMOUUOSMNYKQWVGTWGWJZSSCAEPXQRFUAIRGBOSCGBTWHHYMTCAWGDIMXVDZBZOEUHVFIYFNACPFAKWJINQYSNIZUQBQAEOPPIQNLXXKDKDDFOBSDUDYXLUPHKHZEBCB");
    tmp_msg_0.feature_type = 198U;
    tmp_msg_0.rgb_red = 206U;
    tmp_msg_0.rgb_green = 254U;
    tmp_msg_0.rgb_blue = 106U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.25786334314681747;
    tmp_tmp_msg_0_0.lon = 0.169390950812234;
    tmp_tmp_msg_0_0.alt = 0.010630295313858507;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.1467256749635324);
    msg.setSource(51378U);
    msg.setSourceEntity(48U);
    msg.setDestination(40508U);
    msg.setDestinationEntity(23U);
    msg.id.assign("BCLZEMFCXIYQFPWMJCIXYXIQTKMSMHVZOZNZOXNAIOJZAGNPDPXPXIILLDIRBZOJABLWKGSCYFJKKQUKUPGYVXNPSVCRDRDWTAHENUHSTEASQHMNJIOHEGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.9006228085615178);
    msg.setSource(25340U);
    msg.setSourceEntity(242U);
    msg.setDestination(39654U);
    msg.setDestinationEntity(80U);
    msg.id.assign("AOVKXADVRNXPJHMRURDTSXGFDSYUKAEJLHXWGKTBWWCKULSZNJYJEQGPWQPNCFXDYUGTANAGFYVXQHZWWIIXYACELZJQGEBOIRVKSPGLUMKFBITSNEHMVSOQTNJFYCVTANXOGECOBIQSJUBKOUEYRAPVZFIBMDMBHIM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PPMEPLISHCMNDLTJEWNGOMKAVARDBZXEKJNZKFCYLEUQFTRSILCUHUTAXOAMIDYAFHFTQKZEJKELLXDYSFSCJGNHVNNMDBQUXSQZRZDRITFJ");
    tmp_msg_0.feature_type = 235U;
    tmp_msg_0.rgb_red = 138U;
    tmp_msg_0.rgb_green = 88U;
    tmp_msg_0.rgb_blue = 42U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.01942501603087632);
    msg.setSource(35843U);
    msg.setSourceEntity(56U);
    msg.setDestination(28211U);
    msg.setDestinationEntity(200U);
    msg.id.assign("CZUYAYAACDFLGEPAUSHNGHIJLLOQIKVIZIYWBKRGODIPPWKNTDEIMYIKJFPECCKTUXDOIICTKJNLCWKYUTEQZXCBZXPMLXFXDQSQQBWNVFSQDBMZXCNFESTUUXEHN");
    msg.feature_type = 24U;
    msg.rgb_red = 62U;
    msg.rgb_green = 102U;
    msg.rgb_blue = 236U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.18270266781197786;
    tmp_msg_0.lon = 0.08991026987091244;
    tmp_msg_0.alt = 0.4783069418223729;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.28175112664572466);
    msg.setSource(26247U);
    msg.setSourceEntity(40U);
    msg.setDestination(38684U);
    msg.setDestinationEntity(98U);
    msg.id.assign("BPORYHLXJVMAIPZHSKKWMLUXAJFTNINRVNDXKCRGKEHDGZOXKZPLFXMAGIYFQVPWUTKUQMPIQVCHTUKNUONQRBPLPWSVFXGSBEVBTSERWUFTQTDANEIHOMBBFWRL");
    msg.feature_type = 176U;
    msg.rgb_red = 238U;
    msg.rgb_green = 75U;
    msg.rgb_blue = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.8389377108941372);
    msg.setSource(60888U);
    msg.setSourceEntity(207U);
    msg.setDestination(35689U);
    msg.setDestinationEntity(151U);
    msg.id.assign("VZVOSCKLDBEEZPFPRGSEDMBB");
    msg.feature_type = 24U;
    msg.rgb_red = 22U;
    msg.rgb_green = 145U;
    msg.rgb_blue = 144U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5726721284380679;
    tmp_msg_0.lon = 0.08576381749788509;
    tmp_msg_0.alt = 0.2951225875030178;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.11972370536690435);
    msg.setSource(1470U);
    msg.setSourceEntity(49U);
    msg.setDestination(51270U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.8213119150319174;
    msg.lon = 0.8787464039292334;
    msg.alt = 0.18693857419411963;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.5218947211604924);
    msg.setSource(62613U);
    msg.setSourceEntity(75U);
    msg.setDestination(49384U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.8990388235949651;
    msg.lon = 0.4610498644365546;
    msg.alt = 0.9491569680141229;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.6222308317879663);
    msg.setSource(58180U);
    msg.setSourceEntity(106U);
    msg.setDestination(45976U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.9287810661426108;
    msg.lon = 0.3856902134689;
    msg.alt = 0.6430445859683792;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.45334901515639026);
    msg.setSource(60227U);
    msg.setSourceEntity(151U);
    msg.setDestination(56509U);
    msg.setDestinationEntity(140U);
    msg.type = 138U;
    msg.id.assign("IBJOHEBZDEZPRNZPBBBKIPGSZDMCQEASAEBIYWJIUIDTLDWNAYWHPKHLYYVZOMLSVQCTUMISOAXUOSGLMXQNVONKNRQVZAFIYVWAXCIQRPWIDWLGOPTTUCCUGOKLERWMVMYHJXCWRNHCQLZGFAEDLXAYKKHDKGTT");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 178U;
    tmp_msg_0.error.assign("TKLEWDBHRAXLNQZNOANRQWLRGSQJBZXBUWBZOUMGEKWAXKDGQPPZPTDRCLRRAEKUITWJMRNFVEYQFCGHFSECIVYEUDSXGPIBIJPLI");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.03758179047698473);
    msg.setSource(1864U);
    msg.setSourceEntity(71U);
    msg.setDestination(58185U);
    msg.setDestinationEntity(101U);
    msg.type = 178U;
    msg.id.assign("RUCQXEGNHPXWRJCFBSGYPIGLADBHQNQNANIUYGMLZVDMCSSAEXBHEKWGYKLFZZRAEUZMOJQSXUVYINDMJYFFUXWKXWHLJKLLEEMMNHBGLQEBOYBURFRBTKNRFWGQPTBCHCPVONKV");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 16U;
    tmp_msg_0.goal_id.assign("AQGXEGXHFLFBTJCHCQTKMEJBPNSOGKWIVREXFUUHAYOWMIFBPBCGYZRZGFJSDJFIAQYFXGQOTNUILDJNLETLCAUVRPSIMCSQVMBYKDRSITSYUEOULLJTAPKKEYDZEHFJRDCUSPEAKRQNHHZSXAJZGOPXWKMHOAZLMHVWINNRCKVLNVVCBUEWNPSYYJHZGGL");
    tmp_msg_0.goal_xml.assign("DLECOHXILYRRMRHTQLHIZSORFCSKJYUEYHZLAWQYLSVSNOMTFYCEVTEDWILWXOVDMXCYZCFAWSXYXCEBKZTWEMAILBIPWKLZGRINRWLQFAJHDFXQNVBQVOWFVVTVTQIESAFSKGNIARHXYSBJCAKFMBNQJTPYUDKVAPAJGOMHMXFMJMUZXDOPQGNVDUUWPFDPZGSCDGHUBYKTZEPNTCMTNGBJUJWIUCOKJQEG");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.4437660009698111);
    msg.setSource(8409U);
    msg.setSourceEntity(98U);
    msg.setDestination(4427U);
    msg.setDestinationEntity(155U);
    msg.type = 231U;
    msg.id.assign("ZIDEXUSUYKTOQAHJJOBKVAOLQVQGLEPITOCBYZLOCCKWMLZDRLJEHADQDWSEGGXSMRFGDHIWXBKOKJRRAMQIVBXHDVBGOSZOMLFBQSPMKNLTCTGXPJXREQJCYVSWTOVAXZNUSBDIWPLJRFYCCFRDIYNNUKHAUNMFFSVNTVCXTEJ");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 29700U;
    tmp_msg_0.duration = 27365U;
    tmp_msg_0.speed = 0.14229626023572362;
    tmp_msg_0.speed_units = 100U;
    tmp_msg_0.x = 0.716152657483539;
    tmp_msg_0.y = 0.2944408052778752;
    tmp_msg_0.z = 0.7552449425961887;
    tmp_msg_0.z_units = 81U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.14925946039626647);
    msg.setSource(12214U);
    msg.setSourceEntity(173U);
    msg.setDestination(33102U);
    msg.setDestinationEntity(216U);
    msg.localname.assign("RYADVRLMNXZHHXUPSVOUKPGABRUWFAPFCXZXLUNWKDLINNHDJKNQRVFOPFJLHIERDLMABTHXBPIOQUVJSELYQUZIMRPKHMUXPQRURDEBVBNYFQETGHCHSFAMZZYTEYYGMFZNSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.14640296492182647);
    msg.setSource(62514U);
    msg.setSourceEntity(157U);
    msg.setDestination(38526U);
    msg.setDestinationEntity(166U);
    msg.localname.assign("AADRJGIETBDCPADUZBHJLSQYWJOTPSGAYVXFBQAWKSXLMLUVXIKAEJXECXLBNJDHJNFAHKDNPUCCERIBTXMQYKMFWPNDLMQZWOOYITCPPAYOGTEUMWHVFDRGJAFKPGSQHHOBY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CPTKBXRHUOXDPDYBMAGJENNOEMPHHRVALZTJTBWLVOWWJGHQTVXOEGFYLYLIFBGMLAWWKOOQCKWUYXMEIJHXPRFTALFIMNUNJTBFXDEJBNUQ");
    tmp_msg_0.sys_type = 202U;
    tmp_msg_0.owner = 25547U;
    tmp_msg_0.lat = 0.9459552610138656;
    tmp_msg_0.lon = 0.10033937416335725;
    tmp_msg_0.height = 0.683605838775078;
    tmp_msg_0.services.assign("KNNRQLXGKMUPEYIWNQBMTKULLZRYKZVAHOEBZIUUVOMHSLALUNXAQOGRSBRBWDYQNCOSBBRVEVNEJDYFLOXZLQMKZRIJTAFCTQKTIACWHTZZDMGIUYCDISBZHFJBWSFPVEXHFXPYTSTNAOTTQHPOHDFEBGUCYOPDQKJUROGGDCZMEEJXVRWFWQNXXDKYRKHMACSWAEWVMNGIC");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.6660345782449271);
    msg.setSource(53396U);
    msg.setSourceEntity(184U);
    msg.setDestination(17259U);
    msg.setDestinationEntity(121U);
    msg.localname.assign("PREIAGOHENQQMICBVBGQJIRYNJMYTAPTUUINKWXSWYILIFWJOFVYSCMUDDISKRLEFDBOCGVTLFNDVXBUGLXOAXAQAZTXNLPCJKMAVPGQNDLEGZCQMHYCKPJTTXGBJXFHMWWZZSHQYIMAWHJTPPYHZSUKQYVTDUGIALFBFKVUJYFOCBRDUAMZFMHRTLGLWNOVOZLEOWKHKEZBOKYDNXWDCTJSBEPSHMEXOKBCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.027103138783479364);
    msg.setSource(54090U);
    msg.setSourceEntity(157U);
    msg.setDestination(57367U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("WSNIDNGDMLFWVLRGXCJSKFSBOHGKOTXDNJPMIMBVEIUFACJILDUXHXLGYWYCULQIAZAQHXMZGVYOOEMHYWNQAVILKHAXXHTARCZYNUZWNYAOTFPHRQWTCKFBUVEPOMQEEBWBYUBEQCDPLZGPCLYCVQKIKZEMQJTFPRTBFVSNUFDEJIWJBZPQUDPRSLXWNKGQAURBARVYKOIKDZETHPMAFMGB");
    msg.predicate.assign("GJUDVLJZSHNJBAEZIUUHKTZIJVWKNEYCTPLVNGFDRELZOWIXNMOXPYDJDDXHLBOBMLFJACQYQBTSYPSJGIGELZMAYJSBDTXWZZVAIRUWFAXWFVDSEEVROTCGBHWTEKFCQYUYPRZEQHKQLCBOMEAZFVECCGQGWOIKHSUHTUQ");
    msg.attributes.assign("PDQSHVSYUIJGWAJSQEVBCHLNFOZFTGLFPNEPRBEDFVTEQADTXIHZZRKVUCBPJYUOXZWWSSTXTOGUSSQGMQLEQROLPBCZUIYJJKRTXDHDFMTWWHRCZWHXTRLYYGEAMXVFZIYXXBFOSWCFKKNOKOGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.5800447458926786);
    msg.setSource(40113U);
    msg.setSourceEntity(229U);
    msg.setDestination(53999U);
    msg.setDestinationEntity(5U);
    msg.timeline.assign("QBUHSNXCOTRCAQLFIDTIZEUIAIGMZZXZWRBFKT");
    msg.predicate.assign("ZMQMDBCGLPAAJZBBVFRLDGTERYSBNVMHXKPBVMGWSZOFCVBRXOXLLYRSTQCJXYZDXGLUUDQIQWYFRDHDFKYNJBMWEVILEZPOFBMGUDJAALABSIZTDCFNLNIOSOGEJZLYVWIJQWSGISTTYSPETCIYCFGRVXWJWUYOQBKRHNHO");
    msg.attributes.assign("TIEIQKVGGTWEEDBORPJAIBPUUSBOZJMHVNYMMMWWVNNEBLQWNZXJCLGRQLFSOHCWQSBILQQHSXADJBVRXBVDGRZIVWILGCMRJKFSQCFEMYKGUASTPRZAHLXGCIYVPAGNLVAEQDWDRIKOJOYSVCJLLKFPKSKIPUKXPJURUYNTUZYYUMFONOHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.9799311821997418);
    msg.setSource(24663U);
    msg.setSourceEntity(217U);
    msg.setDestination(44513U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("GHNCHQPIWTFELPLJTJMGPWKCYCBAUXMVWLBHBKSLUIMHORAMFVJCGKDELCSVHGVOFHYZSXJQUDTNKJOVESQZVXUVPRCNLRPQZZFXUUWMNOYQKHDISATXKWHRUNCIAOMNEULQTNIJRORPZDYIWEMKGL");
    msg.predicate.assign("DBGOJSDTVGTUUVNWMJFEOCYQLKUBMIRQXYZBSHLLPIDORYPDXISNELOKRWFZEDDVHZAXWGHNCCCCWJKEEZZHSFGPHIOLDPXJTZMSSXAAEIYQWTZBRKCTGWKPHWAMTOPNFQMPPAKCFWYCFUXBBDBVVUREMJHSLUKMBCUFOVEJDDUJLKUMRPHCMGBNSFWTNXQVNZTGERNQJMVIAYYVLSZFIKGNLQTIAKSLNXRJVJXAOGETZRFYHAQXYYOOUQGPB");
    msg.attributes.assign("GACRPYDERAWQGNFJVCRGOFLFSYLFRINPLDOBGLZURSKEWPEEXEMCFHLPDOCHZZIDOUAQXRMHYRAOBBGRLFGBXSTMRBJIAUTWNHUUQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.3840124747919028);
    msg.setSource(17826U);
    msg.setSourceEntity(247U);
    msg.setDestination(62941U);
    msg.setDestinationEntity(75U);
    msg.command = 167U;
    msg.goal_id.assign("WICBJQTYVQKEGEWTUUCUHXZREQPELFONKLUNQNPYKIVCUWAMCUMICHPUSRONJPLSBLXQVEDRWMNXEEJOGOVLTQOBPFKTIGFAPSZHAZXAYXHWGADAKZGFNGVIYDZIAZGPBMJWGRCKNJUBHDHRKXQEZNWYFELRTXYFXC");
    msg.goal_xml.assign("AFSTAZHIPUVKSDJHQLBIUCJEGSRQVPMTBXIZUPKEVKYKAXLQYXOEERLBGWXCOVRQFKAFFUNOOURSOFSRQZBOIBDUPALXAGRMIDIRDVCHLPOSYZAMNIPHDMPGBSKWJECYHZNFGHBJYVWLUGWHMCZREDMXCDYWNHBKTZIVILHMXPTJFMICKHOGJLNMJNFTLFEQFOXWKYJAAANQNWTPYTZQTSUTCUXSXOJWQDSELKVVBPNVGEJWUMDGNBQYTRGCY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.8193143701909504);
    msg.setSource(47316U);
    msg.setSourceEntity(157U);
    msg.setDestination(49150U);
    msg.setDestinationEntity(182U);
    msg.command = 17U;
    msg.goal_id.assign("BJGSIZZMWKTCIUATJESKXKCJQNSHMPHPPGRPTGOVUGRCVAFNAKIPFYBECREUOVYQJBLJXCDDWMANAFAKEBMIHLDXMOQJYKETWPHOODQHVIECMNNFCRDUFLOQLKPQRPVFUNWSATZMKCZMBNLGNRVSYEGYBABZMHGIARYIXZJXXNSRCGCFXT");
    msg.goal_xml.assign("ONCHUUWZQLFUGGBPMTQNLUDVBBLSCYQZPCEJDRVVRNZDSDQWRUECLHXVTZXMGEPIMAMFDAYHWBVFRAQJEOSPSNJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.14203786038871802);
    msg.setSource(53967U);
    msg.setSourceEntity(235U);
    msg.setDestination(45469U);
    msg.setDestinationEntity(97U);
    msg.command = 30U;
    msg.goal_id.assign("XYPWSAISWPLNINYTUHNNHRZGEOJBTYUEARTTODLFKVMOZWKIDLYJCEEZUXXKBHMDWIXTTXMIWCJAKMJOGVRPZFMYVGXLQKMWCCCFUDBJBZITEHLBFUCHGUWFUBAYRNPBSZRWNIHNK");
    msg.goal_xml.assign("YGRDCXKJFYAEMCYCYANLDJUGUWPHSMJIJTLPQTMPLJDSIOMXHFDOBWSOGRFLZOTJNMSZIEKPSFZSRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.8834871941759721);
    msg.setSource(3038U);
    msg.setSourceEntity(185U);
    msg.setDestination(28250U);
    msg.setDestinationEntity(127U);
    msg.op = 212U;
    msg.goal_id.assign("ZWGQODETBSMHVRJEYPNAGMNMEBIVCVJEADQSOXEYBYGIXVRZQOUOUNVOXUKMKXSPKBWZPXJDMFEINSFBJIPRAVHIXJHOYINPJWZNSLWBLAZIMVNUGRJTHTYTGXUNCHDIZOUBCHDDGMOLPWUGFQCCQWEPXRTLWKVADYCNGNWWZQYBRFQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FYANBMOYCUTZXVSBNMLRQNAWZCMHWXSQEYTJKBGKUTNTPHNMNQGBXHUGGOLMDPLHRVF");
    tmp_msg_0.predicate.assign("ABTWSAGAQEERPYXCRXQKLPITNMWBCSACXMJNEAYNCDDFETMKRBLDJLPHTMBDTGKPYQWRMIFWCUJICKENOJIULGJASPZGNTCGWBUNKHITXFABVBBQGEFFFSSCSOLZXSGPVTZJWSOYRXUDCEMGPVOFFNMFYZDOHLSVYJQEIWDAJOONVUUHRYYTOMYFTXUNIHZUMZKAIHGQPUALWEQCOPSXHDWIJKRLBXQGNXHUKIVZZRDZHLKVLPBWYQVVJV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LQAVLDJVFDLGMIYVPEPVGEJDWOUZLPJGYPENIKFLLKITMEOSJBRZGGKSBUYSEUTFHKHYFCZNRYYIZOOUXZSTKJWMUXRWWBHVQYMNEHQUPMKARXUHJZYVDSRHNTGIDNGATOUEQFLHXCQDMIGJPTACTAPWBHNFDKFVAFEWZBGVYQXSBDOYQBOXPZBKPCXHQA");
    tmp_tmp_msg_0_0.attr_type = 241U;
    tmp_tmp_msg_0_0.min.assign("XNEUVWFQKPEXOCBQLYGBBFGSAYRPRXOXCYOM");
    tmp_tmp_msg_0_0.max.assign("QZGVFZBUWYZRBNLMVJZLFGIQTWRUYHUNJEXSULBFQTAVCLFNKSWHFZATNTGRDRYFYPMVTZIJOHDSKTXWONMITBFRKFEBNDAPMHZBYIWAHOWLXKGQCTXDEWYZVXBJCCGBOEZKPVXIEIPJKMSEIPHKYMSYFLWJNVGNELQVSBSGDTKDJSXXVUDOEORQKPTJFCHOKOMRYEPXDCAURNDDWGLMRXAACGQLQEUQOPJHJWPAMMUICAAOUVYBLIZUHSHN");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.8762359671687108);
    msg.setSource(5181U);
    msg.setSourceEntity(78U);
    msg.setDestination(57690U);
    msg.setDestinationEntity(204U);
    msg.op = 225U;
    msg.goal_id.assign("ZHHYKPCTMNRDCDGBRSCKIITICOKBDUARRONUGVVZLZBSYREGCLUWDVQCEUMIJLXLNEEOJKPBINOPZAQYMCPDTNTWEMJFKURIOCJCXHKTLBAORYYMQFUWMHAJLZEGTLBAFAYWTAVHNWSWFDQSOHNGNOEIBWPYH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OMWPZXVCOPSXPUHFXBUAGAWNQDKLTMYAZYGPYHKGSJGQVNLVCYDNPCMGOHDHCVYNREKSNTJMHOEKNIFUKQAERBPWMKQFQXJUMUCLYPAWQXDJILWWLVRRFSCMCHDPZWUNBRPVIRSVNMFBSRQBIOTJXTZIEIUFTDRVCYZKCMWVOEVHEBEEBIOWYANJXXGRCXAHJTGNDFPTSASXEKQLLSGGKAJWRMIJTUHJBFTIHZZDSOQUZQD");
    tmp_msg_0.predicate.assign("RKQLJOVWFWRZGFQKGALUSHTUFIZGMGESNERPLQULMINDCSDLPCYUZFJPJCYBETIAXMMPECEQSNNQJMFTELYBZHRPTWTNGJKXKMQBEKFKRPVODUOZLYHJVAQOAWOVTBEJCAHIIPTRQOYNUTRPGDOU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DMJIHPZRMSFOLGKNARBEVWLPZGTAFONBLGSOXWCCOYWPOIUYDIZZKHJTULCQPIXHPYFWRSONQPKTMAVPUALVJGHDQOIYWTSCELRKKHGUEQQNJTWPRDTUZEHDIAWXOAUHJSSRDJJDGMTUEHFXCPKCFEYAVBWRSYQZGNUWKDMQSVFYBXECNCIJFZEZUEVTIBBHQVQAGBCJXXQBTZYUZRMKOGADDMLLYGH");
    tmp_tmp_msg_0_0.attr_type = 32U;
    tmp_tmp_msg_0_0.min.assign("MVMSVNYGGAPNBTQBEJURBYXTVQNBXEECQOMLAOUIXAFPEGQCJETDCQRHGZKWIKBFUTYNIOVRLOVAEOEBNVGZUTBAVRCXSDDGSRSJSHWDXYKFPWOQEGXCLERNPIUWLTNJUZBLSWAGFHZAIJHOPQHFDOKKRVSIBMFUHPJCYCFPNPJCKIWZLDKFKXMKQUULSVYXPHTDGMXNFTRJTXGZSMOBDFLZIRMYYSQAHWCTMHIWEZHLQRJ");
    tmp_tmp_msg_0_0.max.assign("VNXLXDWFACULYCHTOMMJWTBLBKTCVMUYMRUXVRZAEXFSIKQMJBUJKFRSGQNCLGUKZTHJSZKXKAHJNSNSDFECVVGMQLDIPJEUPDUVUEEAWSOYPIGDRKGZZTIMIZWCPTHJETGJONWONHHDYBYJKEALIBAWLWSCBPWXXDPYLOXKYYLBFAQORPACGTZFSARIMYFVDNHRGIHKESOFTNQQRFNVONBZPQGFC");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.5186006506256717);
    msg.setSource(15670U);
    msg.setSourceEntity(232U);
    msg.setDestination(54585U);
    msg.setDestinationEntity(182U);
    msg.op = 139U;
    msg.goal_id.assign("YRBQSGUGYRUNTKVSQAKAOQQQMSYGNKPEBSGWNUWJQTRCPKRWSBITOASXCGUVXJFIZDPIUIDINDADJGFKKDVVJDBRZQQASGETMPBMUFCAYRDBEOICXFFLITSMZZNYWWULYVFYBLFWQVYJNRLWHCNHDSOOVSEHJTPFMORLILJUZUAKBHVWTXJXPWMXPLIBMFP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BDFFAZQWEJRWSPRIYNTTJIAOHZKCKBXAODGYIGUIDCPRVSANOWJQVYBVKYEHCWNIZSJTQSLOSSTEXBXJLGKDPVMARO");
    tmp_msg_0.predicate.assign("BQJYQIKHAZJISILMRNJMMBQPQMWDSFBXIJZOXWWCZDKPEKRLDJNOREBWHUVCTHEBTFWSRLCUWJIGMAYDNTYXOPNBHRNMLNDKEYEUTHNSRFZWVPDAZYJAUQXTWFPIJVDFCGHMUETAFYSTJCEYVLQBSEE");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.6641515164857801);
    msg.setSource(31106U);
    msg.setSourceEntity(112U);
    msg.setDestination(43355U);
    msg.setDestinationEntity(47U);
    msg.name.assign("NTUXCEFIXYVLUHIDRNFDOBUDJGYJZTFKLBQJHJZRGNQESNSDXKCRSSXFYKCWSMKGRWFDBBHIAPL");
    msg.attr_type = 16U;
    msg.min.assign("YYVRFRTUIWOAOSOQAGHPZA");
    msg.max.assign("JQAGOISTPEZSSEGFEPOBSWLMQXTBHJDCCSVDBEDAXWNARAJFVGZUJICTFKBUXGZOLHKVCNTJIPAHBWOOYZYUBCPREOVHAMFRIPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.4743508315480588);
    msg.setSource(34021U);
    msg.setSourceEntity(239U);
    msg.setDestination(39427U);
    msg.setDestinationEntity(253U);
    msg.name.assign("XNUYZDNHSZYHZMNBPQOIKWHMCLJAJFFPEUUHBUVDGIXVHZHLIEYOSF");
    msg.attr_type = 184U;
    msg.min.assign("DQAPCGSWQZWHUKVELXIORQCYRPNTCAZPWSFARXXOZASFBOZWJDGPHMQEOMUMDCDYESGQPHJTTEOKUBFEGKJXMXSWEUPNS");
    msg.max.assign("PJLUOLRGSXMFOAOLDPHERJRSDHYPMXHWBIFUQJVVIAYRIYHRWKWXHHCNHUSUOUUGCCZAEKEYHNZYBDZNISPLQIYEWBGCYNBMZKNEEIBCUGGPKGGACBFVSALAEOJZENSKVYPKWLGVTIWXPTBMJBCAGFHKMODVVDTBMMVTRJEKFQEWCFIJQXWQKZNBRQVDAISYZWUOXKFTGRTSFOZWRQTAC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.5839562148091543);
    msg.setSource(47272U);
    msg.setSourceEntity(60U);
    msg.setDestination(5118U);
    msg.setDestinationEntity(22U);
    msg.name.assign("EZAWCBEDIGDRPN");
    msg.attr_type = 18U;
    msg.min.assign("BGSIRRJOLQQGKWWDIASXOGLWPAIMFZCIDZUALTNZEPXQDMVICLRVSKHDKBUOWQRUYRGJLADVAPMTTZWCAUXOKHFFXCKLYBTYDFYWJNNIBLBUTETWHLKUZAIIYRVSSXFVLZFRFEEPHPCUOEKXCNJGNWSBCTFKFYGJPIQHXBODPPYJRZVMGMHZTPMBMELONSEQPTN");
    msg.max.assign("JOCKSPLOQLDJNAORNBHCLTXQYWZMHFAWMBHJBBDRHOVJONZMJNPISASNSNECVVXOALXFNKVMLLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.6552588696291147);
    msg.setSource(30985U);
    msg.setSourceEntity(79U);
    msg.setDestination(23370U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("ZOJHLZILIZKUHIEZZCMXEXBZJZLHUNHAOVCYHYIDWPKXNIHGRIPSITRFQIONOQQAYEYVQTTRJLBXVYSTZCYUVEPQASOEORDNVMQGANNCTNLBASJZKCWABGDBYVDUGGYERJPMKDABHKPFSGBMGSNXF");
    msg.predicate.assign("ZJNKWHCOXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.784274688366549);
    msg.setSource(56722U);
    msg.setSourceEntity(143U);
    msg.setDestination(9146U);
    msg.setDestinationEntity(111U);
    msg.timeline.assign("JOEFFOIDPBCGHYMOSCDAMWAFXFWXKKBZXGWXQWCJRYEQRTRITVCLNURQDVVHLYFCHBNELQLZCGIZYYPUOVERDUITPWYUJVKVUYSCBARKLDPURUHXKABSPEOHFYMNZCADVXCAZBKZJXHPBHXEMRSHWLNQKGEMXQWKLXTFSHNVSVMRHEWJZDIVADIAKJJABZTFNFNOLGLQJGEUNTOQMWGTKD");
    msg.predicate.assign("PLQKBVWLVHAWARIQCPFSBDAKIMBJSNLRUGEFCDPIDZOPWRVOWXCFDSWVNIUIFMLKBTEVSPETJAKYSOLTMQVHQLICDXTOJOPVUSUPWEHBXWISKEJEMUTGRRBRQNNKZVKYUZJVRJIQLFAUCQVMTMCYHBTHKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.7171918351244645);
    msg.setSource(51228U);
    msg.setSourceEntity(8U);
    msg.setDestination(11261U);
    msg.setDestinationEntity(195U);
    msg.timeline.assign("HNVRAUGNSBVTMCPJVSCGYYUHDEIHCCUNXPAQDWHOPFOJVVPKQJIYMKJRGSJJKBIKXCTPUXHOKMVAQZEXDBFTJKESBXQYNQNIXNRWZWJAKXSCNIGRSIAPGPZOELAHLXMAVATOQXDOFYCVBRGDBRIWEERTFEIMQOLWMMKWOHFJEETDCDCIAGHBOUQGWJNXQNBSHKINT");
    msg.predicate.assign("PMXVFXFQTADEKFVEZPKGGSJNIGNMCQQIHPOSCHJBUTRVKYCOISRNQNXIXTTKKPBQXEWJFSHNNGYSVWHRKDSYMLZANIXGPSALEOCVAD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FYMFVNICBNQWDJAYZCFOU");
    tmp_msg_0.attr_type = 36U;
    tmp_msg_0.min.assign("HOWQHLYCQHEOWEAVOMAJFATAUEIIQBTHYKWEVHHFNPMQCWEVUFTADEMHRUJIWORYFXXPQINPCSEMZKRDSIOONZNVFZURZJVFYGDZGDWHDTYVOPULQKJOGIJMXPCWMCCUBXZHBYGLURLOAIRBJUIDMFBDRFEVGXAGSILSABJKLNWNMFRXPDXAEY");
    tmp_msg_0.max.assign("PQOESXNFHGVMZLDGDAREUECIWSRUSWKGVVMMYEQRYPGAITLJEFKIWSZVOFDQCRHLULDOTUMBPRTZQUUXSAHPPUJFCLKGIVADAVAHYNRNIKRXAQGFQCEYKDPQBOHDKSCPFVSDIVJMOTUMGDUXHXWPNBNBFNILCFXAHKWZZBGJRKYTRZXEXVNNLWHMSOPCLMHOUMGBYJELJWSEBQCMONYTXTPTBZJJCLXR");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.20007596262739225);
    msg.setSource(64215U);
    msg.setSourceEntity(194U);
    msg.setDestination(30127U);
    msg.setDestinationEntity(13U);
    msg.reactor.assign("BMSYWOWYIRJEVQTMVDTOPNGJYLELLQGLJWXTGDBAZJUXNQXRBFSKZKKIFXCAFAKHCTHZHWLSNJPSTJYJSWYOMXKRGQDQPIHPKRZIOWTKVXXAFUFRPHHGYSDQCLOVSTYZPMQGMIHFOYJEZOECZHMQLVDCWBIGOYTPFDEZZSGKEUEDUPOYTCRVHMAQCEXUEGBUBNSUFLUNMVKCBIRBQN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WYKUPBRBTJSJHSEMDUWWCRZZKCUBXQADZMRHUXFZDSBIOFCCYYPOJIAWGCJPTAOVWTGMTFFRQPLSQXGDIYRLWTPATXKLIBCRPTKVLZWGSWQHJVBWDCUJNEASPHJ");
    tmp_msg_0.predicate.assign("FTAEINQVFYLJNPYDT");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.0028167291048178944);
    msg.setSource(39558U);
    msg.setSourceEntity(160U);
    msg.setDestination(41478U);
    msg.setDestinationEntity(16U);
    msg.reactor.assign("UAUQWUSPOWUBJQJUCGMZRMCPTHSVIFHRJRLELOGCYZBIOMNIPDQPEZKYCZPXUFLDHMXWNNUXQQHXPDZRHZOQSYUSSMTTVPQVGEQKDIDCCOWFSGAWCMFJNQBUIXAADLXBZLRMVMTCBNEVGWQMJCMDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.8990800171634308);
    msg.setSource(3557U);
    msg.setSourceEntity(198U);
    msg.setDestination(8889U);
    msg.setDestinationEntity(242U);
    msg.reactor.assign("ZGPMNAAOHEZITWYBHND");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DXEBNCKMTDSDOKSRZFFRXQHJMMOCMATJZWLKPTJUGOUVPNSTNBUTABSOLMHVHHXLTNXUWQVKNJWHWQFTZZDAPGBEGCSEWDYCZNCLWFBKXMSPKZYXKCPFGDGHQYEVNQMFVYPOHJUSALIOXYIQLURDKGHTFBZYIACGGBBLJRRENCTFOEOIQKYEHXDMNQXEIULDAS");
    tmp_msg_0.predicate.assign("UDAFSLWOVYPOBDCTSFBULZAGPXOZKQAOBDGNSGMBIKJYHFZWPRRVLCCWH");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.560930987219101);
    msg.setSource(24499U);
    msg.setSourceEntity(110U);
    msg.setDestination(16117U);
    msg.setDestinationEntity(92U);
    msg.id = 111U;
    msg.width = 58113U;
    msg.height = 64533U;
    msg.widthstep = 50124U;
    msg.channels = 187U;
    msg.depth = 216U;
    msg.finaldata = 254U;
    const char tmp_msg_0[] = {71, 95, 44, -60, 96, 72, 102, 1, 45, 3, -62, -121, -84, -56, -72, -17, 88, -62, 42, 101, -127, -20, 117, 51, -38, 114, -122, 53, -47, 94, -36, -90, -60, -54, -49, -71, 34, 58, -123, 109, 124, -116, -40, 0, -75, -82, 97, -105, 90, -123, 99, -119, -121, -95, 98, -43, -68, 116, 27, 25, -13, 61, 76, 106, -82, 65, 43, 42, -128, -109, -40, -5, -33, 52, -77, 49, 32, 34, -32, 101, -115, 115, -41, 89, 30, -21, -115, -62, -56, -89, -63, 8, -80, 3, -83, 40, 17, 89, -38, -93, 109, 65, -80, 63, -51, 2, -72, -114, 96, 79, -123, 90, -17, 81, 114, -74, -31, 37, -88, -106, 21, -73, -15, -112, -77, 32, 99, 53, -20, 106, 43, -102, -84, 20, 16, 87, -81, 11, -114, 31, -12, 21, -35, 85, -107, 117, 42, 114, -18, 110, 121, -50, -110, -39, -17, -77, -4, 108, 10, 21, -73, 42, -44, 51, 126, 66, -83, -37, 43, 47, 84, -22, -51, -83, 55, 116, -101, 79};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.8502824088249588);
    msg.setSource(62482U);
    msg.setSourceEntity(18U);
    msg.setDestination(20630U);
    msg.setDestinationEntity(244U);
    msg.id = 73U;
    msg.width = 44050U;
    msg.height = 22161U;
    msg.widthstep = 1511U;
    msg.channels = 7U;
    msg.depth = 252U;
    msg.finaldata = 94U;
    const char tmp_msg_0[] = {-29, 123, 42, -62, 54, 24, -40, -15, -79, -97, 57, -51, 35, -94, 87, 104, 85, 33, 59, 106, 114, 54, 62, 47, 108, -109, -110, -50, -75, 106, -86, -60, -48, -71, -122, 27, -98, 101, -85, -86, -16, 59, 86, 67, 121, -114, 99, -107, -31, 21, 123, -99, 72, 63, 20, 114, 2, -20, 37, -97, -45, -35, 84, 10, -16, 56, -121, 117, 89, -85, 53, -125, 82, 64, 117, 95, -53, 90, -128, -8, -80, -28, 33, 78, -12, 22, 76, -4, -107, 42, -56, 86, 109, 103, 14, -75, 32, 26, -126, -38, 28, 27, -91, 59, -25, 12, -89, -112, 121, -66, -44, 23, -71, 51, 89, -40, -3, -1, 70, 27, 15, -69, 126, 38, 116, 99, -94, -19, 73, 41, 39, -77, 90, 65, 48, 88, 26, -5, -39, -97, -113, -68, -19, 118, 92};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.6968257116404898);
    msg.setSource(35317U);
    msg.setSourceEntity(148U);
    msg.setDestination(52796U);
    msg.setDestinationEntity(65U);
    msg.id = 95U;
    msg.width = 41848U;
    msg.height = 62463U;
    msg.widthstep = 46344U;
    msg.channels = 198U;
    msg.depth = 85U;
    msg.finaldata = 221U;
    const char tmp_msg_0[] = {-80, 91, -112, -1, 9, -80, -103, -54, 12, -24, 60, -19, 52, -37, -120, -113, -64, 60, -36, -85, -121, -48, -44, 57, 75, 120, -78, 31, -29, -65, 96, -63, 23, 11, -4, -53, -102, -125, -116, 33, 9, -81, 3, -79, 24, -61, 108, 5, -75, -76, -20, -62, 31, 122, -66, -50, -37, 79, 116, 98, 106, 32, -99, -99, 61, -79, -57, 4, -127, 4, 46, -72, -110, -88, 26, 93, 58, 36, 89, 35, -20, -74, -57, 20, 114, 64, -2, 93, 69, -103, -124, 125, -36, 57, -104, -107, -19, 56, 95, 68, 115, -48, 123, -104, -12, -99, 60, -17, -68, -20, -56, 21, -102, -41, -105, -101, 32, 80, 72, 43, -78, 109, -53, 32, 25, -18, -74, 124, -9, -98, -117, -4, 125, -23, -45, -118, 1, -20, -116, 98, 96, -7, -55, 100, -56, -33, 76, -113, -87, -90, -124, -123, 31, -107, 15, -116, 39, 77, -114, 70, -84, -99, -65, -20, 64, 58, -97, -15, 111, -32, 71, -14, 100, 79, -34, 90, 14, -124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.8654444428106584);
    msg.setSource(8825U);
    msg.setSourceEntity(72U);
    msg.setDestination(20558U);
    msg.setDestinationEntity(129U);
    msg.width = 45095U;
    msg.height = 8875U;
    msg.channels = 142U;
    msg.depth = 111U;
    const char tmp_msg_0[] = {88, 27, 90, -14, -22, -54, -120, -121, -116, -107, -107, 92, 4, -126, -51, -69, -110, 69, 94, 7, 113, 0, 121, 114, 68, -106, -18, -67, -24, 54, -51, -79, 81, 68, 19, -105, 26, -50, -53, 102, 121, -10, -44, -28, 89, 77, -52, 46, 36, -117, -76, 93, 0, -126, 7, 9, -107};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.8042475414626337);
    msg.setSource(22997U);
    msg.setSourceEntity(254U);
    msg.setDestination(36987U);
    msg.setDestinationEntity(135U);
    msg.width = 57784U;
    msg.height = 32906U;
    msg.channels = 216U;
    msg.depth = 67U;
    const char tmp_msg_0[] = {126, 70, -119, -99, 81, 36, 77, 19, 103, 31, 19, 120, -44, -76, -7, 96, 53, -21, -117, -26, 80, -10, 104, 46, 52, 14, 82, 117, -61, -87, -23, 107, -77, -9, 119, -127, -29, 122, 87, -88, -33, -32, 50, -45, 120, -82, -99, -33, -100, 28, -95, -27, -4, 16, 65, -24, -2, 27, -63, -59, -119, -109, -111, 45, 68, 83, 20, -109, -50, -58, -5, -119, -57, -106, -34, -70, -67, -82, 43, 101, 44, 69, 126, -40, 102, 120, -73, -97, 90, -84, 60, -122, 79, -21, 87, 15, 8, 105, 34, -78, -45, 15, 118, 1, -120, 125, -63, 117, -57, -122, 104, -125, 11, -9, -5, -15, -28, -24, 117, 117, 21, 83, 34, -103, 70, -83, 112, 108, -97, 126, -87, -52, 122, -1, -103, 86, 107, -23, 2, 63, 66, 53, -18, -60, -10, -68, 62, -83, -74, 102, 60};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.31253278398539197);
    msg.setSource(51251U);
    msg.setSourceEntity(194U);
    msg.setDestination(33637U);
    msg.setDestinationEntity(13U);
    msg.width = 15482U;
    msg.height = 4473U;
    msg.channels = 202U;
    msg.depth = 100U;
    const char tmp_msg_0[] = {-83, -110, 27, 1, 43, 82, 106, 1, 9, -30, -19, 76, 32, 98, 68, 117, 83, -104, -38, 93, -26, -127, 126, -34, -84, -95, -63, 96, -116, -15, -72, 8, -35, -6, -106, 94, -3, 65, 34, -17, -128, 8, -122, -126, -123, 59, 109, 82, 89, 46, -125, -50, -101, -16, -71, -8, -111, 73, -26, 17, -17, -107, -62, -117, -10, 10, -5, 30, 53, 63, -104, -69, -16, 91, 25, -93, -110, -98, -43, 39, -10, -118, 81, 122, 7, -53, 57, -114, -52, -43, -115, 20, -46, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.4670558130207487);
    msg.setSource(5662U);
    msg.setSourceEntity(115U);
    msg.setDestination(14388U);
    msg.setDestinationEntity(115U);
    msg.frameid = 173U;
    const char tmp_msg_0[] = {-12, -105, -110, -15, -61, 81, 77, -33, 26, -104, -112, -40, 24, -30, -88, -34, 111, -99, -62, -61, -6, -72, -3, 33, -53, 10, 115, 100, -42, -62, 100, 81, -29, -14, 35, 30, 80, -14, -77, -29, -57, 116, 47, -21, 58, 97, 102, -123, -49, 89, -75, 66, -62, -70, 20, -22, 32, 84, 44, 7, 92, -17, -45, -97, -86, 26, 26, 66, -25, 16, -38, -113, 38, -81, -59, 1, -62, -40, -124, -10, 55, 91, -111, 15, 69, 71, -28, 77, 122, 102, -18, 31, -38, -125, 1, -39, 104, 61, 42, 27, 34, 4, -106, 7, -120, 107, 118, 44, 73, -63, 122, 38, 28, 30, 36, -5, 85, 118, -85, -126, -78, 111, 8, -124, -10, 24, -125, -90, 4, -90, -56, 82, -45, -123, 46, -28, 57, 95, -86, 20, -96, -60, 119, -9, 126, -112, 102, 47, -30, -60};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.4998848951372239);
    msg.setSource(34770U);
    msg.setSourceEntity(105U);
    msg.setDestination(59892U);
    msg.setDestinationEntity(52U);
    msg.frameid = 139U;
    const char tmp_msg_0[] = {44, 104, 116, 103, 117, -78, -67, -88, -58, 106, 92, 2, 43, 5, 69, 26, 109, 94, -41, -15, 65, -31, -43, 66, -62, 14, 11, 16, -40, 47, 15, -37, -1, 8, 3, 97, -97, 107, -27, 13, 61, 17, -89, -81, -57, -17, -8, 111, -98, -47, -121, 100, -80, -127, -112, -43, 62, -73, -38, -29, 52, 89, 69, -31, 96, -62, 70, 50, -84, 29, -84, -83, 17, 0, -67, 53, -7, 114, 6, -30, -112, 123, 73, -122, -19, 16, 112, -125, -104, -106, -33, -119, -63, 124, 13, 75, -68, 4, 25, 74, 54, 117, 15, -90, -26, 71, -70, -36, 72, 84, -96, 122, -96, -51, 65, -22, -52, -111, -66, 69, -111, 104, -14, 5, 47, -6, -19, 0, -75, 12, -112, 40, -49, -4, -67, 124, -31, -73, -88, 33, 48, 99, 76, -32, -88, -29, -96, -113, 35, -93, -29, 123, 2, 126, -31, 16, 87, -27, -42, 4, -47, -78, 113, -34, -110, -59, -18, 126, -105, -18, -110, 102, -14, 75, -93, 20, 0, -39, 27, -69, -120, 13, -65};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.7834422981340018);
    msg.setSource(14069U);
    msg.setSourceEntity(229U);
    msg.setDestination(6053U);
    msg.setDestinationEntity(206U);
    msg.frameid = 152U;
    const char tmp_msg_0[] = {92, -81, 125, 41, 33, -46, 106, -25, 111, 111, 53, 123, -38, -78, -99, -46, -104, 49, 43, -102, 65, 29, 31, -10, -66, -27, 19, -111, -25, -124, 84, 96, 0, 110, 92, 7, 107, 123, -83, -103, 37, 6, 87, 24, 123};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.23761948390915433);
    msg.setSource(38163U);
    msg.setSourceEntity(164U);
    msg.setDestination(60085U);
    msg.setDestinationEntity(176U);
    msg.fps = 75U;
    msg.quality = 85U;
    msg.reps = 223U;
    msg.tsize = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.05148209964578454);
    msg.setSource(44177U);
    msg.setSourceEntity(164U);
    msg.setDestination(64606U);
    msg.setDestinationEntity(160U);
    msg.fps = 16U;
    msg.quality = 154U;
    msg.reps = 145U;
    msg.tsize = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.06730392450201494);
    msg.setSource(56979U);
    msg.setSourceEntity(155U);
    msg.setDestination(39558U);
    msg.setDestinationEntity(115U);
    msg.fps = 144U;
    msg.quality = 88U;
    msg.reps = 81U;
    msg.tsize = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.9292260870370068);
    msg.setSource(978U);
    msg.setSourceEntity(249U);
    msg.setDestination(33532U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.5783251311991809;
    msg.lon = 0.07685696458795133;
    msg.depth = 37U;
    msg.speed = 0.2411936460363795;
    msg.psi = 0.05958700019405472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.22892893072699771);
    msg.setSource(24652U);
    msg.setSourceEntity(250U);
    msg.setDestination(44807U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.5962484811427443;
    msg.lon = 0.8410018032142936;
    msg.depth = 150U;
    msg.speed = 0.861411704552656;
    msg.psi = 0.5509666483617459;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.9832380789737318);
    msg.setSource(18411U);
    msg.setSourceEntity(204U);
    msg.setDestination(52480U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.9298241321614726;
    msg.lon = 0.1626525874084198;
    msg.depth = 248U;
    msg.speed = 0.2924330109330142;
    msg.psi = 0.7446796743010465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.3594132085856362);
    msg.setSource(33122U);
    msg.setSourceEntity(47U);
    msg.setDestination(10889U);
    msg.setDestinationEntity(181U);
    msg.label.assign("ZFOORXODKPAAQGJRMNFODGOZVTDKXIUUCZNCMSLXGUMAXSCCGBCHLDAQHAURFYPPWPIZVNERPIBFPMQOEUJWRLYZNGBAUUABZEKOIFFXXDWWMWYFSVLBCBYEZHQPTTAVYWJIOJPHLLDJAKQYFRNZUNLEMXTSDQXFBGIHIKGCMLCDQLNHSVEADSSTJJVQGYYRWVFYUVPLMQINQUHGKXSRPTZRVTYEGJHCEBVCKOWD");
    msg.lat = 0.04959793514367339;
    msg.lon = 0.08697383804576775;
    msg.z = 0.7657388487893084;
    msg.z_units = 140U;
    msg.cog = 0.16777753391298067;
    msg.sog = 0.3795332545429039;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.6096135669535642);
    msg.setSource(29996U);
    msg.setSourceEntity(242U);
    msg.setDestination(6380U);
    msg.setDestinationEntity(91U);
    msg.label.assign("TGXHAFPPXLAPVTUCUSNBSGQGZTJYFCTBDWTMETVINJTKKWNJQZAYPSZWMVKXLROYJLKRSZSHYTQGCFZOMNJJCIRAZCCDPUAVAJFVAEJEXISPVLYOURNIBGFEUQZADXHIXWKJMBDQHSUHKDZCHWOKXFQVMLHGTZRCIERWLLPMVMYEBWQPHENBDFOAORHBXNEWKUHYMGFTQJFNYYIAUSKKZULGRROWOLSCQURBLPDMEN");
    msg.lat = 0.20280009840038826;
    msg.lon = 0.023893621980392576;
    msg.z = 0.12398774040417693;
    msg.z_units = 82U;
    msg.cog = 0.6945074354021136;
    msg.sog = 0.2812073313135913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.3095706153810751);
    msg.setSource(20034U);
    msg.setSourceEntity(202U);
    msg.setDestination(47877U);
    msg.setDestinationEntity(65U);
    msg.label.assign("VVPXCUTMGEDGTGKBCHLAAHXEKMDYFPQEWFSQUSEFIVGGWIYNDDMZDKORGOOLFFMLHHCWAEJTEIMMQITGDMVYVBOBRNAANXRCQCWZSSSXPNOPPJVFBRTGZKRBSXCQULBQQZLNKIXMZAHUZBQFIJVQKOJWTJZHLJETZPSNUIKYNSDHBYNYZKDXRBGOLZPGHNMBYFOUNLVFCWJKUYUSL");
    msg.lat = 0.5189217926045013;
    msg.lon = 0.6603832762367262;
    msg.z = 0.434202652944095;
    msg.z_units = 35U;
    msg.cog = 0.6640455053779323;
    msg.sog = 0.8511979909712338;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.13640722779717596);
    msg.setSource(16670U);
    msg.setSourceEntity(143U);
    msg.setDestination(53880U);
    msg.setDestinationEntity(152U);
    msg.name.assign("FSHLBYVPIDSOJFRBSQNFVCETVJGYQFEBONTB");
    msg.value.assign("PFZVDPFSWELBWJPPJZCYIONIOUGQKMHCJALPTYIWEIJHPWGBKRVBDOETXSUQQFTCWUJUZYSWEJPFUVKIASMXOZQHVKQVHXUJVCAMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.6541431587674369);
    msg.setSource(11014U);
    msg.setSourceEntity(181U);
    msg.setDestination(34350U);
    msg.setDestinationEntity(16U);
    msg.name.assign("LMOVHCXPRWJNTUVISDVGKNBLTEKOZFXNEHVLFYNHAXTKBWDQWYWVHIDG");
    msg.value.assign("TJJYXXKGSQIUIQVXCFHITTRPZHOMGBHMMHAGSWJPWFVKBWQPTCISZUPMLIIUBOEJJJZTSRAOHLSTISBYPPLGSRFYMNUDKYEHLCOZEEONQXHFFEKPXKOROWFMGXDEUXWQUNULJQCDNFMRDDYGBEZFWDMWGRQQNHSADKZVVVJCPAZRGAINAVLDYLYVXAVTNABCSKJKLRIHLKWUIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.3370390205613979);
    msg.setSource(46115U);
    msg.setSourceEntity(25U);
    msg.setDestination(63605U);
    msg.setDestinationEntity(27U);
    msg.name.assign("MPOHXARMWFEAXXGBYEDMNGFIDOEUPMGQHTBAWURDAIZGTOUIPKWMGNFAXYJNLIBZOWQWQW");
    msg.value.assign("LGSFXRCIATSMWNHNUHSLFDNWARCKFCIDBXIRXEYOEJIYQHNZSFGTZXSZMQIDAWOSDOZMBCGSULDQHUJEKBONPJEPIPOXAPAKPITUPAVYUJVIXZDBMUMUPDZPERQKVKLVPBOFCVYFACNNWLIYGATTSWLSDJCJNEHQUWTAHMCGDKFCOARNZHVTNFWRHJWLSZKRCBBLEXGQRBQLUTHGVJKH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.8631174452403702);
    msg.setSource(9776U);
    msg.setSourceEntity(5U);
    msg.setDestination(30060U);
    msg.setDestinationEntity(34U);
    msg.name.assign("FWACXLQQTCHLISVSPQAZRRISMUEMUZVGCIDDKPGKVNLSJWQDYU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TZFGMRQKDRXZPKDSDGDITWTADVNZRNVVGJFQKPTTNVKAGHXBLZCIVORJMPCETBGZLXJNDDYBOYIJZIUTBYBFCYHYJXPUOCFAWNNUBGHBPEQAEJJUUEOPOKLMWQHGHXFVQFEPDFGWCZPZARYJTXUISIDACHXQSGCLWHKSHOSSWQYKEORITVSMFZPFNCMLRMAOBMCLXEBOINKXLTSEDUMHIVW");
    tmp_msg_0.value.assign("ALOZTHSUDJLBSUFYKUCRFWBIVXJXC");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.9323290554775877);
    msg.setSource(42411U);
    msg.setSourceEntity(86U);
    msg.setDestination(50368U);
    msg.setDestinationEntity(50U);
    msg.name.assign("QMUGNJIKRMONFHOBVGWNRCSZOIJWVQVXMFIMDPZSPLHOUHJMTNHWKQSANDIHUQUBQMATDNHPYEUYTIUYERVYDUEVUQEOZJMLBVGAOZVMACAAYXMCKSGETEYZSCWIGQXNXPQXWBDEIJLJJKWDBCKCGBASCDFWLNFHTBGVRZRQFPIYGHPZREBAJYXOLPKM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HGJDVGZBHDAYRHUCHCVBKLMOMRTBZQOIECRZDTWUIWKDBPWFPVFWEZJGNYKVVNXLFZKMGWWRYSUXIT");
    tmp_msg_0.value.assign("TFEJOQUYUBRAEAUOYPTIHFUGLLUTZGBFWDCIBOEQHYHZUZRRLASZKMURHTSDTMODZRVJXLMFFKXVYRNNICKSNCDACEHQMXNZWIVJZDQDIBPBYLMNVOIYPUFGNSAAQFTLZKWQG");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.5580500690109942);
    msg.setSource(52682U);
    msg.setSourceEntity(165U);
    msg.setDestination(6689U);
    msg.setDestinationEntity(16U);
    msg.name.assign("XOVVITHKSMYTQWFSMBCJLZDNSYDSLRGCEGKYCLVCESNJNAKPUMQEAGCJAJQRSUVFYQHOWEQBXEVULXJFFDIBMOFNHLUWRUUJUXEXADOPAJRCFVPZNIBPZXYNOFXTIWQYQJWPBUJORCPWTZBANKRAKAIDMBDLT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZTGDAEPMPSCRCQLWMGNWHMAUDHMYBXYCTBUUJKTHWVOEGIBYGPCNSRJKQYJEVKIKSPBOAIYDDOHQBLNWPZLUCEJFDQWHFOJIFVPAZGRXSZNUGRJABUPOIJLGYEOTIVQSNPTDQLVVXUMZOHGODFNVXSUMYVGHFCWDAXFKQWOROQMRNLRGHJEDXBPTBZEWAMWZMERVEXLQUSB");
    tmp_msg_0.value.assign("CQBFQLKYNWUMEDRREIGICUXVUPDCKWIVNZSNREQODGDCDSIMYDLYXYFKAQDQRIGXKMHOFLKWGEYCEJLQSBHIPDTYLMOBZLGYRYMXRTMHMAAZPODRCZZHJONVPBESWMUWPRTBKWWTTVWSHZRIABLXSCSYPGTVUPLLUPE");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.7776792160688991);
    msg.setSource(13912U);
    msg.setSourceEntity(249U);
    msg.setDestination(36935U);
    msg.setDestinationEntity(74U);
    msg.name.assign("NUBLPPIXOJQJHTBASVKEIZQMIPXAXDBDWTLMMGAJUNHLYQWHBFQARXCVGQLQEGGODBQMYQFNSBSOOKOSZSFHIYMAMITEUJJUWKPYCDIZPYZISRGVPVVKTIHLYGYKMBXZOLRZFRWEDJLUXEEANRWMVCDTSXMUNQVFEWCCIFXPK");
    msg.visibility.assign("XJRAOFTUDYBQTQGELFECATCDZRBXZXVIVLNVLIOWBIXHODVWHJMZFLRLOQYSRWAELCPAEMVYESZPPMLZSAWTBBBCSDUICJRWHYEPUCAQFPVGENQUGLSOGKSFUPZRNDHMNZRKUBRMDYITVGWIOYTODBQPDYJPOUZWFCKSMBMSJQKKVWHHNINXFXGYAPIPEAUB");
    msg.scope.assign("TFGAGJNEPDBWIUCVSOUANRANGSVLRNHRHTXCJUFLKRBMMAQHDWCNXCSOTOHVXETMKIXXLDESJBGWJQDQICDLJZMEAQPHRHXVGCXUBUKVWZYFFZQUNSUWRSSOIJGPFAEDKYPILJSPBTVGLDXWXAIOTSNRJVZFOKXLMJRMLKYFCMYONFYBWQCBKCYKFIOIPRSBPIZVWWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.5968373558355907);
    msg.setSource(60580U);
    msg.setSourceEntity(33U);
    msg.setDestination(43740U);
    msg.setDestinationEntity(110U);
    msg.name.assign("SNBIFEEAPBIBDXYADGWURPLRAEPAKRZMCGPECYMVSVJQFLQLVXVAHDZYHXYXATLRRCHDHZBWKEIIGKRZTNDROMPPSJDVNUMIHEVHQIFO");
    msg.visibility.assign("PNBJGDWHCGOVWFPCGXVSLQQRLBNXQVWLZMNBRTDNCNTMBHMYUVHSZIZNFOLMQWMRKPJUKVXKBNEPEMTEZAOYKUZHPBFYESTIDFMHXEPSCCGZIPOSJUPHXMROVTIRTZSKIALJMEYUXCQLADAQJYCWOUGJOYEHBUFODCKIHWLALIPEGRBZWMIOZSHVZAQJTRQYUDTNKGERIVSJQNFVHOYXKAJYGYVRXNCLBFXJDAFDFSLUGKGTW");
    msg.scope.assign("OGYGHJUGUBYTZFRKLUXZKMZHDSRVIVKYIVPIHPHUQOMWYIKPMWRNTBYRFNQPBIRJWKUYGJJPBWWGAAMHLSACFZLXANIKYLGIZCXUNSOWYZKZJLDFVGHPYSSEUOOQXZCXOXMHGBBXTSBPHACTPXUZYRLLFVEWCRVCKZENFXFAEETQWGACOMEWATD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0490287663412452);
    msg.setSource(6285U);
    msg.setSourceEntity(39U);
    msg.setDestination(24580U);
    msg.setDestinationEntity(234U);
    msg.name.assign("CFWZEHCCDNBHWFRKDRSXHMCZYLSVGQLQDSLCJS");
    msg.visibility.assign("LJWCWWZGROPOYTGSFUHUAHPCTLESIMKGBYHAXWKVGALZXPPOMIELXVSYZSORHMQHTUOVFRYOFWLBDVQAVJVCPVKYNGVBWDSBZKWZJXZWCKFDXIGZQTFRIBHDQAMQMAIJZONDIMEXTEIBDTNQRJQJPOEHUHBUCXOLNVGUKYZUCRMJLCILGFXAGFB");
    msg.scope.assign("GPURXGWHYXUXZGAGUMCXBMVGWERDQKKLNNURFFQEHIQFYCKHKVSOWBSQZVXFSJABPANVXDCCHSKCONJXTYJYQJTLCVFBEZCTMPXPRFGYTYUJLIYLIAZZNNEFILSNSCMDORJOWTJKIMFZMBAEWBVUWINYTHSEUHWVQCEOIBED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.1876156079180844);
    msg.setSource(23695U);
    msg.setSourceEntity(221U);
    msg.setDestination(49824U);
    msg.setDestinationEntity(195U);
    msg.name.assign("IHFUEDEULMKAOFWLEXOTPBDBBEMTQNCRYDOQPDJEGHNJOMGIIGCPXOQDGQSTSQMWLPSCBCLMNGFGNNFGFWDBQHVBWXRZFZUMASUIIOIZJHNXAAJZAYKKHQZWRWRESACOYSYBVMUVCYAHKXGLTOBHZEVGIJSXLTYAELPBXXPKYKCEFRYPXP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.35809678644754983);
    msg.setSource(47844U);
    msg.setSourceEntity(194U);
    msg.setDestination(57991U);
    msg.setDestinationEntity(233U);
    msg.name.assign("CBQBMVDOFLUHPUWEXKBJALGKDWRWVZYUXTBJSKRJKIHHUXPFIANKEZECDRXBPBEZPOPGGCICEAXKMVSLVYNONSCUTDTAMOMBUUMSDQLVNHKJGYFVUAPRRRCQTBPLPQRNMFYOLDXNVDIAQNFQOPSGDZNJJVAZTZQOTWCJXKYYZAIMLTJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.40175762474996635);
    msg.setSource(18578U);
    msg.setSourceEntity(226U);
    msg.setDestination(7995U);
    msg.setDestinationEntity(39U);
    msg.name.assign("NWSXRXMOSVTHOZFFMPYCOPTUTLQBDOMWQFNZRJPVHIRUZHMARCNGKYBAPWVOCLWHGNRMPXFFBHLIWQKKQSDJDKOIHVVMYY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GYJKLRPZNKQKLZYJCIEBSFMFSSVKABUFCSXMDGKWAXAAEJLCFIWZFWWYVHMDEHVMCMPPOMXAOTQZTKTLEXAETRDDRDTWMKBQNOZBETQOIUYHYVENQXRKCXYNYUZXFLPTUODFPRRVIGWDQSJRHSLJNWNZILNTCGVQROAPDHHUFBVBYIPQFCWYNCQOXVBGIMABPSOGOSQRAWFHEJMULMBNCLU");
    tmp_msg_0.value.assign("WBFIRENSWFMFBKICHHQYESLCOZUDPGNQVDQFGXFJNSIJPCKBONRTIMEVDUTLYZPQESVWGYANNUZZMPHEUAVBGATYESQINBCLIJXUVRXKPEQRPIBCEKWFYBFOEPPAMJHASWXVSQLLSMAOTNNCHCWWXQDGITXYJTRKXSSNMYIDLPZJGVQIBKFLKXAKKCJTJWAHBYMXGZJTDDQUYGYUZFVL");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.9327332873877883);
    msg.setSource(53618U);
    msg.setSourceEntity(166U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(167U);
    msg.name.assign("LYAPDZUOWWWCZDZEFFCAFCXFXCEZSYWVJJNEYGYJYIDEVPIACTTZQOWMCWSSHYIMCKFMQXTJMLBWSEORQURRKVKNVVBJTHLWOUARMPZGOAYAMKPIDBAXHKELUPMJDUQHGNNHEOZYIUVXSBEDXXWP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.22836592090443586);
    msg.setSource(55017U);
    msg.setSourceEntity(231U);
    msg.setDestination(41399U);
    msg.setDestinationEntity(243U);
    msg.name.assign("SIWRGQPNHVZKABVQMZTEJUKYNRQZYFGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.29704745959771595);
    msg.setSource(31152U);
    msg.setSourceEntity(28U);
    msg.setDestination(26488U);
    msg.setDestinationEntity(230U);
    msg.name.assign("MSXLWXIUYHWMMASIQFIRTQJDRSLOKMRCRCTLQYWTBIONFJTQAIAKPGVCECGBCMUMZKBECDWVHTNPHDFOYZNOKZUXYRZIATPNWFPOBYLLLJQAICHTSZVQWHSRSFYETBXJZZXMKIXSDDLASINEGOULEEDCBUJJMXJDKPQKGYPRUOUOHHQCANVFPBNWVVNXDHEKPBFJBRWXVRVVUC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.30921082957673796);
    msg.setSource(17475U);
    msg.setSourceEntity(163U);
    msg.setDestination(26877U);
    msg.setDestinationEntity(192U);
    msg.timeout = 2278350060U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.8738075332987328);
    msg.setSource(43683U);
    msg.setSourceEntity(252U);
    msg.setDestination(5621U);
    msg.setDestinationEntity(206U);
    msg.timeout = 3640059203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.23614008482390603);
    msg.setSource(1900U);
    msg.setSourceEntity(176U);
    msg.setDestination(52439U);
    msg.setDestinationEntity(34U);
    msg.timeout = 4086881632U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.5723908641641007);
    msg.setSource(31316U);
    msg.setSourceEntity(42U);
    msg.setDestination(4319U);
    msg.setDestinationEntity(131U);
    msg.sessid = 3728766020U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.042206941004715226);
    msg.setSource(1877U);
    msg.setSourceEntity(181U);
    msg.setDestination(45457U);
    msg.setDestinationEntity(108U);
    msg.sessid = 2792426765U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.4312958046451407);
    msg.setSource(13111U);
    msg.setSourceEntity(31U);
    msg.setDestination(42546U);
    msg.setDestinationEntity(187U);
    msg.sessid = 3266843765U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.5033727320630509);
    msg.setSource(52337U);
    msg.setSourceEntity(96U);
    msg.setDestination(63235U);
    msg.setDestinationEntity(133U);
    msg.sessid = 763112013U;
    msg.messages.assign("STKRPEZCAGLBXVPVRRFNGZEUYWYFRNOZCTLXEYSIGQXKARGWKQFWMEZHCBJJQYEJHBACYRFGGOLZFEOSKZAYRFXISICBGOVSJWNZXMTAPODVMJNILOLWUKJFSMXYMVQKIHTLDDUGZUVCOQEISEHKWYNLGUTVNVBUWJTKTQAQCDPHWMANQOAIBLSKKSRNUGJQHPXVFPEJLEOMHUXRJNHRMMDVHZDQHNYTIAUDBTDPAOSCMBUCZWIXBI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.7339303080138644);
    msg.setSource(26307U);
    msg.setSourceEntity(203U);
    msg.setDestination(59003U);
    msg.setDestinationEntity(188U);
    msg.sessid = 1339821476U;
    msg.messages.assign("AYHVNCPGTEJXWQHODPUIGHQGEUDIAGMBHRRJEBPPNYKHFYZDWJQJTHGYKWNUKLWJVBYVROEXCXSPWYXNDIIQNVJFEZMNMDMNDIUKOWBBMLHSQTKZLPTFFMJSUUDMIAZWLZZCKDWVSENOJFLXHZZCFEAAIBAINCURJQKGSEJZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.8321766271672547);
    msg.setSource(50580U);
    msg.setSourceEntity(5U);
    msg.setDestination(47618U);
    msg.setDestinationEntity(95U);
    msg.sessid = 1075742981U;
    msg.messages.assign("LNLTMGKVFTKGBEOPZVULXGDKJXRIDWGIYPOTXPXHWFSVRRRLCPKAWEQARQPWZZMEBFOVVNIVJNNFZOYYDOEXMTTHDDYLJCCLSQJYQKVNKS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.46390775850550703);
    msg.setSource(43211U);
    msg.setSourceEntity(106U);
    msg.setDestination(17993U);
    msg.setDestinationEntity(106U);
    msg.sessid = 1211047975U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.5090444902819576);
    msg.setSource(27717U);
    msg.setSourceEntity(30U);
    msg.setDestination(35379U);
    msg.setDestinationEntity(97U);
    msg.sessid = 2479202135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.1847592431208661);
    msg.setSource(24228U);
    msg.setSourceEntity(202U);
    msg.setDestination(20715U);
    msg.setDestinationEntity(216U);
    msg.sessid = 378582339U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.14688901787124986);
    msg.setSource(42184U);
    msg.setSourceEntity(236U);
    msg.setDestination(62048U);
    msg.setDestinationEntity(141U);
    msg.sessid = 2239797344U;
    msg.status = 67U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.0576887352931571);
    msg.setSource(21042U);
    msg.setSourceEntity(248U);
    msg.setDestination(55819U);
    msg.setDestinationEntity(177U);
    msg.sessid = 2184602019U;
    msg.status = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.13463151427341247);
    msg.setSource(28938U);
    msg.setSourceEntity(80U);
    msg.setDestination(64893U);
    msg.setDestinationEntity(89U);
    msg.sessid = 4007966330U;
    msg.status = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.19399538232185698);
    msg.setSource(37108U);
    msg.setSourceEntity(213U);
    msg.setDestination(61278U);
    msg.setDestinationEntity(148U);
    msg.name.assign("LGKVRTVMAZPLCEDDUQXNWQXJZOIZDEDHMPKOZTXAGWJYLFNEINRNNBCMRQLYYEDNOZSYOHTHFLVHMYUMBLAJJGV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.32946120720199734);
    msg.setSource(38344U);
    msg.setSourceEntity(212U);
    msg.setDestination(24687U);
    msg.setDestinationEntity(32U);
    msg.name.assign("QSPFXTBSXDZVPPPCL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.9537593211138432);
    msg.setSource(16127U);
    msg.setSourceEntity(34U);
    msg.setDestination(28913U);
    msg.setDestinationEntity(77U);
    msg.name.assign("BLYAVRLWOGZDKNVIMBKOTRBRXHGUUUICVAHTSKEHIFAOYKQNJUYLTVNRLFGEMXWYJACNAMQRIWDOWNSQRCNB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.06105492634672871);
    msg.setSource(6174U);
    msg.setSourceEntity(145U);
    msg.setDestination(62004U);
    msg.setDestinationEntity(28U);
    msg.name.assign("LLYUBGKWKFTJWKOTASMRGOWCMXNZZJQRNIQYCNRDMWUXEFDNPZGBMKIIWTFTZUVRABGSQORCOVYOVDZWVOBKLLTMSXKSMXVRLFIINXE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.8481800637304105);
    msg.setSource(2842U);
    msg.setSourceEntity(20U);
    msg.setDestination(39820U);
    msg.setDestinationEntity(111U);
    msg.name.assign("QEKETZVLOTUNGSYRLQDQCIQLZNUWZCRRRCSVZPPUBCNTIECSPLFUKJCEKKFQWZALBUNEEGXKJMVXIONZQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.4423471143515233);
    msg.setSource(24721U);
    msg.setSourceEntity(158U);
    msg.setDestination(16669U);
    msg.setDestinationEntity(90U);
    msg.name.assign("GKWZIEQFFEMDBZRSRMYBDSQLVTRWJZNYIJFWBXUGJOREYWLYQUFFTEGGTTZLNMKXAVLOAJXAYMYIGDNQWVEITVCEQVDLDQKFIVROBOBEWHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.8714211816217172);
    msg.setSource(28129U);
    msg.setSourceEntity(61U);
    msg.setDestination(1550U);
    msg.setDestinationEntity(188U);
    msg.type = 31U;
    msg.error.assign("UGFWTOIUNFCSWJMXMPSAUUJWGMLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.8124858142883352);
    msg.setSource(51218U);
    msg.setSourceEntity(21U);
    msg.setDestination(34877U);
    msg.setDestinationEntity(0U);
    msg.type = 4U;
    msg.error.assign("ZOLAHLLMDTVRNMFFTPMNEOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.685569447529253);
    msg.setSource(31646U);
    msg.setSourceEntity(189U);
    msg.setDestination(63052U);
    msg.setDestinationEntity(158U);
    msg.type = 50U;
    msg.error.assign("ZSOXKRXVFGKRFZOHAJAZHRIPXGROCWWSHSEPYVHRRKZOGIQKOJMFFENAIKTYDDBBTONTLHJJNLEQZOYABWBIUOYIELUSYQGAFBVXDIMAHISLZDEADPYVXSZHPBNQVHFPBTTTFBLTMKHTGUOLYVAAUDFUWSLCMCEPJFVCBEWXRA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.04421619011658762);
    msg.setSource(29444U);
    msg.setSourceEntity(103U);
    msg.setDestination(30388U);
    msg.setDestinationEntity(128U);
    msg.seq = 52802U;
    msg.sys_dst.assign("OHTUTQHPCMWCKBPQRFUTZRPPOGGMQDOTZGFYGUWWAYTSSLGCYRCAJKBCFBPUJYRCCNHAFXUSOYIVSXHBRIEMENHQWDZZYGYWJNGLIIHDSTUKDVJJFIBQNF");
    msg.flags = 58U;
    const char tmp_msg_0[] = {-46, 42, 27, -68, -127, -118, -49, -56, -120, -108, 89, -45, 1, -30, 19, -128, 124, -112, -19, 6, 69, -42, -89, -114, -8, 75, -102, 41, 57, 74, -18, -121, 111, 89, 59, -81, 30, 101, -47, -20, -38, -70, -88, -126, -30, 76, 124, 90, -94, -80, -126, 1, -100, -122, 74, 26, -9, 27, -59, 33, -7, 116, -120, 94, 78, 13, 89, 62, 8, -62, 69, 43, 5, 93, -98, -7, 88, 10, -98, -62, 87, -85, -3, -4, 117, 82, -74, -8, -63, 68, 9, -114, 93, 75, 27, 49, -9, -88, -95, -99, -29, 24, -68, 58, -59, -5, -18, -56, 72, 2, -86, 59, 103, -75, -36, 0, -22, 124, -84, 12, -68, 15, -90, -110, -119, -24, 68, 29, 17, 119, 95, 98, 87, -1, -56, -82, 32, -7, 117, -7, 47, 0, 87, 66, 26, -63, -80, -81, 118, -40, 98, 114, 27, -113, 102, -109, 76, -13, 90, 98, -32, -120, 29, 70, -108, 28, -81, 85, 0, 124, -89, 7, -1, 23, -92, 28, -74, -7, 108, -112, 27, 0, -118, -124, 31, -78, 115, -123, -73, 110, 85, -18, 62, -10, 119, 65, 31, -69, 79, -86, 45, 64, 12, -88, -30, -86, -51, -103, -124, 59, 58, -18, 31, 60, -38, -3, -108, 63, 101, -9, -91, -5, 39, 110, -21, 1, 85, 117, 109, -39, -25, 3, -36, 91, -44, 84, 116, -86, 17, 93, -2, -33, -48, 39, 88};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.0441410654678952);
    msg.setSource(26023U);
    msg.setSourceEntity(254U);
    msg.setDestination(64136U);
    msg.setDestinationEntity(25U);
    msg.seq = 17408U;
    msg.sys_dst.assign("EJBAQSMRSVSPTXEIQNFCOIRLDUUOKSTJWEKPTOCLRGIYIYXNQRXOOHFJJVUCIUJIVPDEUZZVPFQYWOILHXWLCBNYYQQRODIMTDBDPFGLGYCVXGDSKRZVTANHETOFAGEQJ");
    msg.flags = 101U;
    const char tmp_msg_0[] = {-51, -6, -13, -96, 122, 37, 43, -54, 35, 98, 43, 93, -46, 63, 57, 80, -86, -122, 77, -17, -37, -120, 124, 53, 43, -87, -106, -82, 50, 103, -83, -15, -109, 107, 19, -111, -88, -20, 37, -43, -101, -83, -65, -88, -37, 75, -121, 124, -21, 47, -118, -109, 117, 84, 64, -77, -59, 81, 86, 57, 79, -97, -58, -102, -124, -4, 54, -89, -100, -123, -128, 39, -55, -23, -106, 5, 4, -80, -88, -116, 1, -91, 62, 74, 44, -41, -98, 5, -18, -25, 55, -63, 24, 67, -81, 90, -54, 92, 72, -34, 45, -58, -88, -8, -108, 58, -11, -15, -48, -116, -38, -61, -36, -65, -5, 87, -84, 13, -52, 85, -99, 79, -79, 86, 38, -88, 8, -84, -42, 113, -39, 68, 105, 71, 17, -29, 6, 93, 123, -69, 11, 58, 88, -21, -38, -87, 86, 118, -84, 70, -77, -115, -105, 3, 73, -81, -25, 71, -92, 124, 126, -86, -35, 37, -60, 30, -82, -77, 70, 81, -47, 67, 71, 108, -62, 77, 64, -85, -80, 41, -38, -59, 72, 81, -49, 32, -70, -48, 84, -23, -88, -48, 85, -9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.49140911156391853);
    msg.setSource(12033U);
    msg.setSourceEntity(58U);
    msg.setDestination(19870U);
    msg.setDestinationEntity(39U);
    msg.seq = 15543U;
    msg.sys_dst.assign("GHOTQWOFKKFEENFDZDAZTFSNPMRIUOMZOMMUYBQUVPDWEWJNGTSJPPFKELBFGKXHRUXXROAVMUCNABDECLQFHLLWLTQOKIOCKUXWRLIYAEHBCHSUWRTJDNYHVIJJFHDFDVDZSUZYUVOGIHVXXJRZQBDSESILXXCIESHYDQTMVVOTBQOQRVPMQIXCAYZN");
    msg.flags = 110U;
    const char tmp_msg_0[] = {54, 103, -53, 84, 115, -124, 20, -94, -65, 6, 119, 105, 87, 95, 29, 115, 31, -44, -110, -72, -89, -31, -84, -19, -105, -32, -18, 87, 15, 117, 34, -13, -44, -75, -65, -67, 17, 125, -106, 18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.4337762958959879);
    msg.setSource(7790U);
    msg.setSourceEntity(52U);
    msg.setDestination(12911U);
    msg.setDestinationEntity(222U);
    msg.sys_src.assign("OGHDTJAHHEUNUHEJBCWRLMHHYAJMJBECNGBILUIOPCORRUIPZMVQJXTOLENMUASDHQZALKXRMPFXSQNQXFAIYBZZUWTEA");
    msg.sys_dst.assign("USICTGAMEHOZHMXYCGEGUIVCSZVTHZMCIGWZTG");
    msg.flags = 164U;
    const char tmp_msg_0[] = {-109, 98, 65, -81, -5, 1, -83, 80, 33, -44, 60, -109, 110, -13, -47, 118, 20, 115, -12, -77, -65, -12};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.7950588384095513);
    msg.setSource(63449U);
    msg.setSourceEntity(222U);
    msg.setDestination(23908U);
    msg.setDestinationEntity(239U);
    msg.sys_src.assign("IPEUPRMJNULJZHJCYWGSEYHXETZIQGGKAXIVKJMGHTRFCRARCJFZHSYCPQBJUABABDVIPWGWWUYXPWPRVKXOIMOGLBDWCLZXVIGQPJYWREOCXLIJOSYRQMMLKOVIIFPUSDQXDKJDTNFZEPLNOFBKHDONZTLHZMGTGDOUNMWEAKVQJYXNDGWEOENXVHENDHFBCFFDTMYAOVRYLUSAQCTTBMSSSHZWVPZLBSMQV");
    msg.sys_dst.assign("ETUBFCJEVUPBWZJDYIYAKSNLYYUGNORHJIVVYJCVXZNGRNQCZEDLYXLRHAZYDITRHOKVEKSTXEHPPAIQQPYSJNQFCFZATXPLCEMXDONIAKMTITGVAFSQEWRTBMSKPVUWAXFBEPVDMHKFQMUEJCDAIWBRKDQFMGSYLBKR");
    msg.flags = 156U;
    const char tmp_msg_0[] = {31, 27, -78, 90, -6, 117, 24, 16, 72, 67, -111, 118, 101, -39, 102, 64, 120, -34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.1461864789321924);
    msg.setSource(8885U);
    msg.setSourceEntity(224U);
    msg.setDestination(30217U);
    msg.setDestinationEntity(219U);
    msg.sys_src.assign("MGWDFRQBILHFCHGXXKBUEYPCOTSVJHDYZLHWVIOKTCVTVPGVCTMITTYHEWEPCMZYWRMMNJDOUQBAFLVXUCULCZGGCGHAUBNXBJSJZFQRWWMWWAN");
    msg.sys_dst.assign("NZXZCWJYSUZBDKVIMCSYWQONMVFEKCAIFCHRWTWHRNUPWUKLJRHTPYXABPKYVEPLQVRWGUXONRKDHBSCGWXWEYLLSJDRDKXBCBVLUXSAAQAHLNFFSMSEOMBCYRRUPZSXEVWQFMTMMRTTPAYWTHLEVBQAYOOJKQOYETIDJPSFIBJGGKOESUZGXJHDMAUOULNMJXCYZPTNJGUNTMHVIDVDOFZEIKBQFGOHGGEHZ");
    msg.flags = 128U;
    const char tmp_msg_0[] = {38, 50, 76, 71, -59, 48, -126, 90, -41, 64, 72, 90, -117, 16, 89, -80, 125, -12, 76, -38, 68, 21, -10, 34, 79, 96, 97, 38, 44, 96, 87, 60, 26, 11, -115, 25, 22, 82, -12, 90, -98, 71, -90, -82, -53, 8, 30, 33, 87, 31, -39, 114, 77, -33, 91, -95, -73, 37, 62, -67, -3, 105, -73, 111, 99, 84, -123, -98, 53, 66, -13, -28, 83, 28, 88, -55, -105, 26, -9, -50, -6, -41, -94, 2, -102, -94, -102, -95, 42, -88, 47, -47, -8, -39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.13986850575739063);
    msg.setSource(51769U);
    msg.setSourceEntity(243U);
    msg.setDestination(3781U);
    msg.setDestinationEntity(40U);
    msg.seq = 36239U;
    msg.value = 153U;
    msg.error.assign("LVREOSSMJYROSOZEXIDCCGKTXDAPJFWUREVASWCKTSAHANILCJZANECWMKPYUZWHVGQYNHCOXNIHTJNBZNUGLIUQVRKPKAGMGQPTXTOKUFSAFBMIEHZUJFEYVMRDTQJWWZGPOOVFQLYMOLPUZXYUMIHDXFNLWBJVXFFPKOXINKRPHVECEVBSLYQMLJDTKGWDTWRBRBNBPQECCYWOBFMSGRUSLIKQIEIZBHMDSLYACFBXXGPDTNUDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.5022097086038472);
    msg.setSource(18328U);
    msg.setSourceEntity(147U);
    msg.setDestination(42268U);
    msg.setDestinationEntity(149U);
    msg.seq = 4972U;
    msg.value = 78U;
    msg.error.assign("ZMHMVRALFHZHCXEZKBFTSXEVAOOGPQYPGJOWBWWLYBQEVGLJTKRVHARPZRXIYONIJOPXUQMVLEQKPLSUAKTVKNDEBZXNZAFBYYHHDIIUKRYRNFDZEWUIEKDYFBXSCWPRRZXJNZSOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.9787467773834296);
    msg.setSource(51011U);
    msg.setSourceEntity(179U);
    msg.setDestination(51328U);
    msg.setDestinationEntity(88U);
    msg.seq = 58367U;
    msg.value = 213U;
    msg.error.assign("KODNZCYYUHWZLVKYMXDIHEARMPQIMOLEGZCHZNTPVARODWSJXXNJCXIKJSAEVTLNYSSKBXFGTQOUOKURPLWTLWNARATGYLMTZZGIEQHQQKLIECDCTJUWJGERZNMEBHHBYFPAMUDFOFSGCOUAQXIVBEGPRVFHUWPQAPBJYLDCNKIOXNRLAUVOGVWFXZWHBTDPMZGMTBLPBJYFMRSRSEOHGVWDYDDFKPFWSNJCTYIKIXXEUHNISQMUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.9924424911017703);
    msg.setSource(37141U);
    msg.setSourceEntity(148U);
    msg.setDestination(52446U);
    msg.setDestinationEntity(109U);
    msg.seq = 20230U;
    msg.sys.assign("EGICBRONYNESHLRXHCKMFGNTZDYNJWZXIMDUOGLRWJBHCLCIUMRXHVASXFQSECKFUHFUNITZRATVBKEPCJETQWJBTJOEGCZXOUDDDFZTEPPRAIQQPWBOWBYWYZOSASQVDAGKXJRUIJ");
    msg.value = 0.1748126067489616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.8569147536589143);
    msg.setSource(22879U);
    msg.setSourceEntity(171U);
    msg.setDestination(12130U);
    msg.setDestinationEntity(229U);
    msg.seq = 43875U;
    msg.sys.assign("IOQSPTYUMYGSWYMKKNTQVJSHGAQUIFMZIVNSAVYVZHVPFTICGNSZCMNTYDENHTPBPGSCNGRDBLUEABHQOYKULPGYMCIJRUBIIRBQLFVDKZCABPALAEWXJXQGDROQSRMHTZUPELHWLJZZCSVPUBAKZAFTWETTQPXDKCIWXXSOQMOYLOWRDAZWHHECFJVDSRLIGRVEHOENJKCRN");
    msg.value = 0.7799567464842001;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.11039621554186141);
    msg.setSource(35097U);
    msg.setSourceEntity(243U);
    msg.setDestination(41137U);
    msg.setDestinationEntity(227U);
    msg.seq = 65207U;
    msg.sys.assign("VBAQDKJLPDBEPEIGOTYINJSCMRZQMCHRSELXRFWYMTLMFUCHEZSNIYXWJPCDMMUMODITPFZFFPIGFYKXATFTULKZGYGWDPPWLEIKCVTWHBMWONRQNCIDYVOQVVULDXUQRRZDYXYEBKKPKBXBBTAZNOCCVXZOHDNLDAPWSQECFMFSHOTKUGNGLUSKTACSEZAUVGXU");
    msg.value = 0.48315169768893973;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.9986820516676991);
    msg.setSource(17113U);
    msg.setSourceEntity(45U);
    msg.setDestination(34101U);
    msg.setDestinationEntity(236U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.7353885213247225);
    msg.setSource(3304U);
    msg.setSourceEntity(173U);
    msg.setDestination(4338U);
    msg.setDestinationEntity(209U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.9867833040050652);
    msg.setSource(3191U);
    msg.setSourceEntity(71U);
    msg.setDestination(42671U);
    msg.setDestinationEntity(103U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.8535970430983559);
    msg.setSource(48728U);
    msg.setSourceEntity(4U);
    msg.setDestination(65529U);
    msg.setDestinationEntity(88U);
    msg.action = 102U;
    msg.longain = 75369157U;
    msg.latgain = 3383890267U;
    msg.bondthick = 596416982U;
    msg.leadgain = 3445662803U;
    msg.deconflgain = 4065327754U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.002337373849554236);
    msg.setSource(36312U);
    msg.setSourceEntity(127U);
    msg.setDestination(21739U);
    msg.setDestinationEntity(17U);
    msg.action = 239U;
    msg.longain = 3813634130U;
    msg.latgain = 2232272214U;
    msg.bondthick = 1645257990U;
    msg.leadgain = 1856224791U;
    msg.deconflgain = 1559359059U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.2726477111986113);
    msg.setSource(20965U);
    msg.setSourceEntity(60U);
    msg.setDestination(49101U);
    msg.setDestinationEntity(216U);
    msg.action = 235U;
    msg.longain = 2913181500U;
    msg.latgain = 1739107224U;
    msg.bondthick = 3729945938U;
    msg.leadgain = 1877261545U;
    msg.deconflgain = 3430310171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.987827568335073);
    msg.setSource(32018U);
    msg.setSourceEntity(31U);
    msg.setDestination(55409U);
    msg.setDestinationEntity(51U);
    msg.uid = 28U;
    msg.frag_number = 91U;
    msg.num_frags = 138U;
    const char tmp_msg_0[] = {-72, 103, -120, -81, -11, -66, -44, -21, 92, -110, -77, -112, -7, 79, -80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.3770461289745185);
    msg.setSource(53162U);
    msg.setSourceEntity(8U);
    msg.setDestination(10255U);
    msg.setDestinationEntity(21U);
    msg.uid = 43U;
    msg.frag_number = 37U;
    msg.num_frags = 48U;
    const char tmp_msg_0[] = {54, 78, 98, 32, -25, 124, -105, 90, 90, -42, 17, -39, 97, 84, -60, -40, -88, -54, -106, -83, 118, -1, 13, -83, 43, -114, 10, -56, -105, -98, -71, -104, -36, 116, -1, 6, -66, 28, 62, -3, 8, 93, 103, -117, 27, -108, -45, 52, -16, -24, 48, -114, -107, -73, -123, -17, 107, -107, 80, 53, 104, 27, 40, -114, -26, 60, 1, -14, -76, 37, -27, 82, -125, -20, 51, 65, -58, -108, -61, 64, 120, -72, 54, -120, -51, -17, 108, 16, -112, -46, 43, -6, -56, 83, 124, -76, -84, -3, 42, -40, -74, 97, 112, 72, 59, 4, 60, 1, -109, 6, 27, 47, 47, -30, -111, 106, -128, -111, -105, -52, -19, 25, -31};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.6728558949077372);
    msg.setSource(22158U);
    msg.setSourceEntity(57U);
    msg.setDestination(13583U);
    msg.setDestinationEntity(168U);
    msg.uid = 245U;
    msg.frag_number = 164U;
    msg.num_frags = 246U;
    const char tmp_msg_0[] = {114, 47, 22, -75, 65, 81, -53, -17, 46, 34, -48, 17, -64, -94, 101, 79, 87, -116, 49, -63, -59, 19, 41, -20, 10, 68, -111, 126, -112, 96, 41, -63, 104, -75, -113, 20, -78, 67, 20, -110, 67, -90, -126, 84, 71, -43, -104, -57, 16, 41, -18, -81, 77, -13, 110, -57, -37, 13, 27, 97, -92, 118, -98, 83, -58, 81, -110, -72, -81, -98, -40, -124, 77, -11, -92, -34, -21, 100, -10, 52, 22, 50, -16, 80, 44, -65, 87, 25, -18, 41, 96, 114, -112, 2, -100, -128, 31, 47, 103, -93, 66, -85, 16, 96, -29, -66, -118, 13, 61, 83, -14, -100, -81, -20, -14, -6, -63, -24, 88, 73, -80, -82, 124, -13, -5, -105, -68, -60, -92, -78, 50, 3, 60, -75, 84, 30, -110, 34, 103, -81, -56, -16, -62, -40, -23, -104, -75, -36, 34, -109, -68, -122, -77, -127, -43, -84, 77, -64, -128, 79, -44, 21, 37, 55, 89, 54, -35, -57, -27, -5, 33, -33, -7, 20, 33, -12, 52, -53, -116, -29, 0, -38, 56, -121, -23, 1, 8, 49, 13, 84, 75, -104, -109, 47, -126, 35, 83, 109, -11, 61, -52, -98, 87, -105, 84, 71, -103, 68, 21, -127, -39, 51, 39, -107};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.06215768167255398);
    msg.setSource(43658U);
    msg.setSourceEntity(41U);
    msg.setDestination(58634U);
    msg.setDestinationEntity(116U);
    msg.content_type.assign("WIGBAEOMWXQKINOESUADCFKJUMHGSMEDURAOXQBYYVRJWCPPKJYYTEFNZGVWGKXVCZPJOFERSVJXEAJHIVILYSHVDRBAFKHNJTJOLMBSVICSGIUUDTDQQMEUJWDOXUJLPFQRBWHHODSFDGCPPYYNTSUIVAUZECXMZFDGNGLRMRWCMKTLQMNZZGQEACFEMNNFBBTPUXQBTXRWTTHKLWQCHGIOXFLYOLXDAHY");
    const char tmp_msg_0[] = {-123, 58, 68, 75, -118, -69, -111, 63, -97, 47, -97, -7, -41, -73, -124, -47, 91, -20, -19, 8, -71, -68, 117, -17, 23};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.32840128666741464);
    msg.setSource(9265U);
    msg.setSourceEntity(249U);
    msg.setDestination(34064U);
    msg.setDestinationEntity(100U);
    msg.content_type.assign("SMKAQUMDLLHJAOXWEKFXUDEZQYQOHOCKRPFUCLEWTAENYXFXMBBHDNZTISOFOVMIRRNTSFBZAQRIZFPTPGFVUSWZHDBPFIXYJYCKHDJDZCVKYUQIAYQGDCKUBGYGZUAYOHKRWPTXTXATPZRWNLUKHGMNITKJTHVLXJCQMZNDEWMOOIOLMCRCJWMTPSLYRXWLPDVHNOVBABUJLBJIWGSEBEJPSPFFCSVJUMGZAKEWINGYH");
    const char tmp_msg_0[] = {62, -62, 102, 106, 30, 108, -43, 72, -53, 25, -71, 4, 26, -15, 43, -17, -85, 34, -121, -104, 89, -94, 17, 44, 26, -122, 7, 120, 29, 101, 118, -8, -27, 82, -80, -10, -56, 118, 80, 8, 113, 43, 115, 32, -25, 97, 26, 116, 9, 112, -124, -4, -106, 25, -87, 63, 14, 60, 73, -41, -126, -85, 68, 16, -100, 104, -27, 124, 105, 45, -93, -49, -117, 25, -93, 70, 7, 4, 71, -64, 38, -20, 1, 17, 52, -35, -74, -100, 52, -13, 0, -47, 37, -51, -12, -66, -68, 48, 112, -65, -67, 4, -12, -109, 100, 49, -21, 107, -120, -33, -1, 102, -13, 14, -46, 95, -21, -29, 45, -12, -44, -100, -2, -4, -75, -31, -85, -94, -87, 52, -40, 31, 51, -110, 8, 37, 70, 124, -74, -14, -67, 124, 53, -4, -8, -41, 72, 38, -34, -85, -71, 75, 73, 27, 19, -47, 37, 33, 118, -50, -91, 3, 117, -31, 10, 116, -93, -125, -46, -113, 58, -110, -68, 36, -12, 6, 106, 126, -72, 59, 80, 24, 25, -31, 97, 101, 123, 39, 96, -40, 50, -75, 117, -89, -79, -127, 29, 12, 52, 103, 109, -90, 63, -44, 10, 85, 20, -120, 92, 120, 71, -8, -43, -52, -28, 4, -18, 6, 86, 48, 89, 74, -99, -81, 22, -80, 125, 32, 20, 8, -17, 106, 48, -9, 11, 21, -68, -71, 26, -15, 93, 86, -122, -107, 16, -124};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.8921586946335779);
    msg.setSource(7113U);
    msg.setSourceEntity(154U);
    msg.setDestination(30112U);
    msg.setDestinationEntity(192U);
    msg.content_type.assign("OVUCJVAGRLHEHUQXECKEHSJOYZIHYNMMZFZDTKQTQXDBPPMLGZZZSGWUIDNTSMUGKHAWAOKOYXDCJRRVRZCHFUCETBDRUBFWQFLPCBFEDBMTYLQYGKNLIJPQDLXWITGTKCDOXAWJFWGMOXLBRJYYYZVXBDXSLVFWNNNNQAWOUVAJKBPNPAZIRCWCATDKKRTRVUIYHLRCIEGN");
    const char tmp_msg_0[] = {-44, 71, 19, -117, 73, -127, 46, 31, -16, 15, -22, -78, -128, 53, -123, -21, 82, -105, 77, 17, 110, 96, 13, -50, -115, 96, 52, -33, -113, 105, -120, -78, 4, 81, -108, -88, 81, 85, -50, -33, -110, -61, 112, -81, -52, -98, 110, 43, 69, -89, 103, 48, 111, 50, 105, 61, -73, 121, 54, 89, -114, -24, 47, -86, 30, -82, -80, 48, 115, -57, -83, -37, 68, -40, 89, 71, -98, -37, -46, -87, -97, -71, 10, 76, 59, -63, 123, -89, 16, 33, -14, 83, -36, -124, 27, 116, -76, 103, 73, 97, 91, -104, -42, -118, -18, 114, 26, -12, 95, 97, 97, -113, 34, -76, -124, 88, -59, 73, -23, -3, 39, 29, -22, 47, 99, -102, -80, 104, -34, 113, 87, -18, 72, -121, -3, 67, 47, -75, -8, -27, 89, -117, -36, -126, -100, -83, 35, -123, -23, 76, -54, -50, 58, -42, 85, -37, -108, 84, -69, -44, -94, 79, 122, 125, -127, 109, 60, -20, 106, 10, -125, 95, -66, 106, -65, -78, -45, 43, 123, -79, 109, -65, 90, 79, 121, 78, -57, 84, -1, -104, -66, 84, -87, -91, 92, 88, -12, -44, 43, -90, 5, 29, 88, -18, -81, -37, 123, 93, 55, 31, 122, 92, 25, -29, 21, 61, 0, 62, 100, 15, 108, 85, -7, -119, -53, -79, 67, -61, -59, -92, -77, 102, -62, -119, 41, 52, -107};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.6384770942142689);
    msg.setSource(31613U);
    msg.setSourceEntity(4U);
    msg.setDestination(4837U);
    msg.setDestinationEntity(143U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.10582231262407815);
    msg.setSource(49528U);
    msg.setSourceEntity(153U);
    msg.setDestination(48742U);
    msg.setDestinationEntity(170U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.36721684824173206);
    msg.setSource(605U);
    msg.setSourceEntity(172U);
    msg.setDestination(42274U);
    msg.setDestinationEntity(12U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
