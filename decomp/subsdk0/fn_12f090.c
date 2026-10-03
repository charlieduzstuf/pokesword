/* subsdk0 functions 0012f090..0014f280 (8 of 20). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0012f090 size=16 callers=0 calls=0
*/
void sub_12f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f090ULL || rel >= 0x12f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f0a0 size=224 callers=0 calls=0
*/
void sub_12f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f0a0ULL || rel >= 0x12f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f180 size=320 callers=0 calls=0
*/
void sub_12f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f180ULL || rel >= 0x12f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f2c0 size=208 callers=0 calls=0
*/
void sub_12f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f2c0ULL || rel >= 0x12f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f390 size=48 callers=0 calls=0
*/
void sub_12f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f390ULL || rel >= 0x12f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f3c0 size=160 callers=0 calls=0
*/
void sub_12f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f3c0ULL || rel >= 0x12f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f460 size=160 callers=0 calls=0
*/
void sub_12f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f460ULL || rel >= 0x12f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f500 size=528 callers=0 calls=2
   calls: sub_12f710, sub_12f810
   ref: config
   ref: !(GetAttribute(params, "config", &val))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: APacketSource
   ref: !(config != 0L)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void APacketSource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f500ULL || rel >= 0x12f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f710 size=256 callers=7 calls=0
*/
void sub_12f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f710ULL || rel >= 0x12f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f810 size=336 callers=4 calls=0
*/
void sub_12f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f810ULL || rel >= 0x12f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f960 size=656 callers=0 calls=2
   calls: sub_12f710, sub_12f810
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: config
   ref: objectType
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(GetAttribute(params, "config", &val))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: APacketSource
   ref: !(config != 0L)
*/
void APacketSource_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f960ULL || rel >= 0x12fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012fbf0 size=4640 callers=0 calls=2
   calls: sub_12f710, sub_12f810
   ref: !(nal != 0L)
   ref: AMR-WB/
   ref: MP4V-ES/
   ref: config
   ref: sprop-parameter-sets
   ref: !(GetAttribute(params, "config", &val))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: MP4A-LATM/
*/
void APacketSource_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fbf0ULL || rel >= 0x130e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00130e10 size=64 callers=0 calls=0
*/
void sub_130e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e10ULL || rel >= 0x130e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00130e50 size=80 callers=0 calls=0
*/
void sub_130e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e50ULL || rel >= 0x130ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00130ea0 size=16 callers=0 calls=0
*/
void sub_130ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ea0ULL || rel >= 0x130eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00130eb0 size=32 callers=0 calls=0
*/
void sub_130eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130eb0ULL || rel >= 0x130ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00130ed0 size=64 callers=0 calls=0
*/
void sub_130ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ed0ULL || rel >= 0x130f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00130f10 size=64 callers=0 calls=0
*/
void sub_130f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f10ULL || rel >= 0x130f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00130f50 size=32 callers=0 calls=0
*/
void sub_130f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f50ULL || rel >= 0x130f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00130f70 size=64 callers=0 calls=0
*/
void sub_130f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f70ULL || rel >= 0x130fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00130fb0 size=96 callers=0 calls=0
*/
void sub_130fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130fb0ULL || rel >= 0x131010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131010 size=80 callers=0 calls=0
*/
void sub_131010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131010ULL || rel >= 0x131060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131060 size=112 callers=0 calls=0
*/
void sub_131060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131060ULL || rel >= 0x1310d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001310d0 size=112 callers=0 calls=0
*/
void sub_1310d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310d0ULL || rel >= 0x131140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131140 size=32 callers=0 calls=0
*/
void sub_131140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131140ULL || rel >= 0x131160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131160 size=1376 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(!mMuxConfigPresent)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !((mOtherDataLenBits % 8) == 0)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void AMPEG4AudioAssembler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131160ULL || rel >= 0x1316c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001316c0 size=3472 callers=0 calls=1
   calls: sub_132450
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: config
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(GetAttribute(params.c_str(), "config", &val))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void AMPEG4AudioAssembler_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1316c0ULL || rel >= 0x132450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132450 size=256 callers=2 calls=0
*/
void sub_132450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132450ULL || rel >= 0x132550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132550 size=192 callers=0 calls=0
*/
void sub_132550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132550ULL || rel >= 0x132610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132610 size=48 callers=0 calls=0
*/
void sub_132610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132610ULL || rel >= 0x132640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132640 size=64 callers=0 calls=0
*/
void sub_132640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132640ULL || rel >= 0x132680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132680 size=592 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: rtp-time
   ref: !(buffer->meta()->findInt32("rtp-time", (int32_t *)&rtpTime))
   ref: AMPEG4AudioAssembler
*/
void AMPEG4AudioAssembler_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132680ULL || rel >= 0x1328d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001328d0 size=432 callers=0 calls=0
   ref: damaged
   ref: !(!mPackets.empty())
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: access-unit
   ref: AMPEG4AudioAssembler
*/
void AMPEG4AudioAssembler_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1328d0ULL || rel >= 0x132a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132a80 size=112 callers=0 calls=0
   ref: !(mNextExpectedSeqNoValid)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: AMPEG4AudioAssembler
*/
void AMPEG4AudioAssembler_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132a80ULL || rel >= 0x132af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132af0 size=96 callers=0 calls=0
*/
void sub_132af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132af0ULL || rel >= 0x132b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132b50 size=128 callers=0 calls=0
*/
void sub_132b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b50ULL || rel >= 0x132bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132bd0 size=192 callers=0 calls=0
*/
void sub_132bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bd0ULL || rel >= 0x132c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132c90 size=48 callers=0 calls=0
*/
void sub_132c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c90ULL || rel >= 0x132cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132cc0 size=64 callers=0 calls=0
*/
void sub_132cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132cc0ULL || rel >= 0x132d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132d00 size=768 callers=0 calls=0
   ref: rtp-time
   ref: !(buffer->meta()->findInt32("rtp-time", (int32_t *)&rtpTime))
   ref: AH263Assembler
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void AH263Assembler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132d00ULL || rel >= 0x133000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133000 size=528 callers=0 calls=0
   ref: damaged
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(!mPackets.empty())
   ref: AH263Assembler
   ref: access-unit
*/
void AH263Assembler_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133000ULL || rel >= 0x133210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133210 size=112 callers=0 calls=0
   ref: !(mNextExpectedSeqNoValid)
   ref: AH263Assembler
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void AH263Assembler_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133210ULL || rel >= 0x133280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133280 size=96 callers=0 calls=0
*/
void sub_133280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133280ULL || rel >= 0x1332e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001332e0 size=448 callers=0 calls=1
   calls: sub_1334a0
   ref: !(!GetAttribute(params.c_str(), "crc", &value) || value == "0")
   ref: AAMRAssembler
   ref: interleaving
   ref: !(GetAttribute(params.c_str(), "octet-align", &value) && value == "1")
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(!GetAttribute(params.c_str(), "interleaving", &value))
*/
void AAMRAssembler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332e0ULL || rel >= 0x1334a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001334a0 size=288 callers=3 calls=0
*/
void sub_1334a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334a0ULL || rel >= 0x1335c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001335c0 size=64 callers=0 calls=0
*/
void sub_1335c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335c0ULL || rel >= 0x133600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133600 size=80 callers=0 calls=0
*/
void sub_133600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133600ULL || rel >= 0x133650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133650 size=16 callers=0 calls=0
*/
void sub_133650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133650ULL || rel >= 0x133660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133660 size=1184 callers=0 calls=0
   ref: access-unit
*/
void access_unit_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133660ULL || rel >= 0x133b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133b00 size=64 callers=0 calls=0
*/
void sub_133b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133b00ULL || rel >= 0x133b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133b40 size=96 callers=0 calls=0
   ref: AAMRAssembler
   ref: !(mNextExpectedSeqNoValid)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void AAMRAssembler_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133b40ULL || rel >= 0x133ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133ba0 size=96 callers=0 calls=0
*/
void sub_133ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ba0ULL || rel >= 0x133c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133c00 size=64 callers=0 calls=0
*/
void sub_133c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c00ULL || rel >= 0x133c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133c40 size=16 callers=0 calls=0
*/
void sub_133c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c40ULL || rel >= 0x133c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133c50 size=16 callers=0 calls=0
*/
void sub_133c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c50ULL || rel >= 0x133c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133c60 size=16 callers=0 calls=0
*/
void sub_133c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c60ULL || rel >= 0x133c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133c70 size=96 callers=0 calls=0
*/
void sub_133c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c70ULL || rel >= 0x133cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133cd0 size=16 callers=0 calls=0
*/
void sub_133cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133cd0ULL || rel >= 0x133ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133ce0 size=16 callers=0 calls=0
*/
void sub_133ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ce0ULL || rel >= 0x133cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133cf0 size=1856 callers=0 calls=1
   calls: sub_134430
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: sizeLength
   ref: streamStateIndication
   ref: !(x == 0 || x == 1)
   ref: auxiliaryDataSizeLength
   ref: !(GetAttribute(params.c_str(), "mode", &value))
   ref: CTSDeltaLength
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void indexDeltaLength(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133cf0ULL || rel >= 0x134430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134430 size=256 callers=9 calls=0
*/
void sub_134430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134430ULL || rel >= 0x134530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134530 size=192 callers=0 calls=0
*/
void sub_134530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134530ULL || rel >= 0x1345f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001345f0 size=48 callers=0 calls=0
*/
void sub_1345f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345f0ULL || rel >= 0x134620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134620 size=1456 callers=0 calls=0
   ref: rtp-time
   ref: !(buffer->meta()->findInt32("rtp-time", (int32_t *)&rtpTime))
   ref: AMPEG4ElementaryAssembler
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void AMPEG4ElementaryAssembler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134620ULL || rel >= 0x134bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134bd0 size=448 callers=0 calls=0
   ref: damaged
   ref: !(!mPackets.empty())
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: access-unit
   ref: AMPEG4ElementaryAssembler
*/
void AMPEG4ElementaryAssembler_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134bd0ULL || rel >= 0x134d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134d90 size=64 callers=0 calls=0
*/
void sub_134d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134d90ULL || rel >= 0x134dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134dd0 size=112 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mNextExpectedSeqNoValid)
   ref: AMPEG4ElementaryAssembler
*/
void AMPEG4ElementaryAssembler_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134dd0ULL || rel >= 0x134e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134e40 size=96 callers=0 calls=0
*/
void sub_134e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134e40ULL || rel >= 0x134ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134ea0 size=80 callers=0 calls=0
*/
void sub_134ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ea0ULL || rel >= 0x134ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134ef0 size=64 callers=0 calls=0
*/
void sub_134ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ef0ULL || rel >= 0x134f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134f30 size=80 callers=0 calls=0
*/
void sub_134f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f30ULL || rel >= 0x134f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134f80 size=16 callers=0 calls=0
*/
void sub_134f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f80ULL || rel >= 0x134f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134f90 size=544 callers=0 calls=0
   ref: access-unit
*/
void access_unit_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f90ULL || rel >= 0x1351b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001351b0 size=96 callers=0 calls=0
   ref: !(mNextExpectedSeqNoValid)
   ref: AMPEG2TSAssembler
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void AMPEG2TSAssembler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1351b0ULL || rel >= 0x135210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135210 size=96 callers=0 calls=0
*/
void sub_135210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135210ULL || rel >= 0x135270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135270 size=128 callers=0 calls=0
*/
void sub_135270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135270ULL || rel >= 0x1352f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001352f0 size=192 callers=0 calls=0
*/
void sub_1352f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1352f0ULL || rel >= 0x1353b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001353b0 size=48 callers=0 calls=0
*/
void sub_1353b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353b0ULL || rel >= 0x1353e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001353e0 size=640 callers=0 calls=0
*/
void sub_1353e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353e0ULL || rel >= 0x135660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135660 size=272 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: rtp-time
   ref: AAVCAssembler
   ref: !(buffer->meta()->findInt32("rtp-time", (int32_t *)&rtpTime))
*/
void AAVCAssembler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135660ULL || rel >= 0x135770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135770 size=944 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(!queue->empty())
   ref: !((indicator & 0x1f) == 28)
   ref: !(size > 0)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: AAVCAssembler
*/
void AAVCAssembler_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135770ULL || rel >= 0x135b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135b20 size=272 callers=0 calls=0
*/
void sub_135b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135b20ULL || rel >= 0x135c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135c30 size=576 callers=0 calls=0
   ref: damaged
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(!mNALUnits.empty())
   ref: AAVCAssembler
   ref: access-unit
*/
void AAVCAssembler_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135c30ULL || rel >= 0x135e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135e70 size=64 callers=0 calls=0
*/
void sub_135e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135e70ULL || rel >= 0x135eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135eb0 size=112 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mNextExpectedSeqNoValid)
   ref: AAVCAssembler
*/
void AAVCAssembler_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135eb0ULL || rel >= 0x135f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135f20 size=96 callers=0 calls=0
*/
void sub_135f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f20ULL || rel >= 0x135f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135f80 size=64 callers=0 calls=0
*/
void sub_135f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f80ULL || rel >= 0x135fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135fc0 size=160 callers=0 calls=0
*/
void sub_135fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135fc0ULL || rel >= 0x136060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136060 size=208 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(from->meta()->findInt32("rtp-time", (int32_t *)&rtpTime))
   ref: rtp-time
*/
void ARTPAssembler_cpp_63_CHECK_from_meta_findInt32_rtp_time(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136060ULL || rel >= 0x136130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136130 size=368 callers=0 calls=0
*/
void sub_136130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136130ULL || rel >= 0x1362a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001362a0 size=272 callers=0 calls=0
*/
void sub_1362a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362a0ULL || rel >= 0x1363b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001363b0 size=16 callers=0 calls=0
*/
void sub_1363b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363b0ULL || rel >= 0x1363c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001363c0 size=176 callers=0 calls=0
   ref: sdp net
*/
void sdp_net(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363c0ULL || rel >= 0x136470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136470 size=272 callers=0 calls=0
   ref: headers
*/
void headers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136470ULL || rel >= 0x136580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136580 size=80 callers=0 calls=0
*/
void sub_136580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136580ULL || rel >= 0x1365d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001365d0 size=96 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: SDPLoader
*/
void SDPLoader(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365d0ULL || rel >= 0x136630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136630 size=752 callers=0 calls=0
   ref: headers
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: description
   ref: SDPLoader
   ref: result
   ref: !(msg->findString("url", &url))
*/
void description(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136630ULL || rel >= 0x136920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136920 size=96 callers=0 calls=0
*/
void sub_136920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136920ULL || rel >= 0x136980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136980 size=112 callers=0 calls=0
*/
void sub_136980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136980ULL || rel >= 0x1369f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001369f0 size=128 callers=0 calls=0
*/
void sub_1369f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1369f0ULL || rel >= 0x136a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136a70 size=128 callers=0 calls=0
*/
void sub_136a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136a70ULL || rel >= 0x136af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136af0 size=64 callers=0 calls=0
*/
void sub_136af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136af0ULL || rel >= 0x136b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136b30 size=128 callers=0 calls=0
*/
void sub_136b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b30ULL || rel >= 0x136bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136bb0 size=96 callers=0 calls=0
*/
void sub_136bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136bb0ULL || rel >= 0x136c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136c10 size=1232 callers=0 calls=0
   ref: a=rtpmap
   ref: a=framesize
   ref: [root]
   ref: a=fmtp
*/
void a_fmtp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c10ULL || rel >= 0x1370e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001370e0 size=16 callers=0 calls=0
*/
void sub_1370e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370e0ULL || rel >= 0x1370f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001370f0 size=16 callers=0 calls=0
*/
void sub_1370f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370f0ULL || rel >= 0x137100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00137100 size=336 callers=0 calls=0
   ref: ASessionDescription
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void ASessionDescription(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137100ULL || rel >= 0x137250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00137250 size=464 callers=0 calls=0
   ref: ASessionDescription
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void ASessionDescription_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137250ULL || rel >= 0x137420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00137420 size=672 callers=0 calls=0
   ref: ASessionDescription
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: a=rtpmap:%lu
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: a=fmtp:%lu
   ref: !(findAttribute(index, key, desc))
   ref: !(lastSpacePos != 0L)
*/
void ASessionDescription_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137420ULL || rel >= 0x1376c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001376c0 size=832 callers=0 calls=0
   ref: ASessionDescription
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: a=framesize:%lu
*/
void ASessionDescription_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1376c0ULL || rel >= 0x137a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00137a00 size=400 callers=0 calls=0
   ref: ASessionDescription
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mIsValid)
   ref: a=range
*/
void ASessionDescription_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a00ULL || rel >= 0x137b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00137b90 size=240 callers=0 calls=0
*/
void sub_137b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b90ULL || rel >= 0x137c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00137c80 size=752 callers=0 calls=0
   ref: ASessionDescription
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(slash1 != 0L)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(*end == '\0' || *end == '/')
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void ASessionDescription_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137c80ULL || rel >= 0x137f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00137f70 size=64 callers=0 calls=0
*/
void sub_137f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f70ULL || rel >= 0x137fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00137fb0 size=64 callers=0 calls=0
*/
void sub_137fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137fb0ULL || rel >= 0x137ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00137ff0 size=64 callers=0 calls=0
*/
void sub_137ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137ff0ULL || rel >= 0x138030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138030 size=64 callers=0 calls=0
*/
void sub_138030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138030ULL || rel >= 0x138070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138070 size=96 callers=0 calls=0
*/
void sub_138070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138070ULL || rel >= 0x1380d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001380d0 size=96 callers=0 calls=0
*/
void sub_1380d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380d0ULL || rel >= 0x138130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138130 size=128 callers=0 calls=0
*/
void sub_138130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138130ULL || rel >= 0x1381b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001381b0 size=112 callers=0 calls=0
*/
void sub_1381b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381b0ULL || rel >= 0x138220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138220 size=80 callers=0 calls=0
*/
void sub_138220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138220ULL || rel >= 0x138270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138270 size=64 callers=0 calls=0
*/
void sub_138270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138270ULL || rel >= 0x1382b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001382b0 size=96 callers=0 calls=0
*/
void sub_1382b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382b0ULL || rel >= 0x138310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138310 size=96 callers=0 calls=0
*/
void sub_138310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138310ULL || rel >= 0x138370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138370 size=96 callers=0 calls=0
*/
void sub_138370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138370ULL || rel >= 0x1383d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001383d0 size=96 callers=0 calls=0
*/
void sub_1383d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383d0ULL || rel >= 0x138430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138430 size=32 callers=0 calls=0
*/
void sub_138430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138430ULL || rel >= 0x138450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138450 size=32 callers=0 calls=0
*/
void sub_138450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138450ULL || rel >= 0x138470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138470 size=464 callers=0 calls=0
   ref: x-hide-urls-from-log
*/
void x_hide_urls_from_log(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138470ULL || rel >= 0x138640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138640 size=48 callers=0 calls=0
*/
void sub_138640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138640ULL || rel >= 0x138670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138670 size=208 callers=0 calls=0
*/
void sub_138670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138670ULL || rel >= 0x138740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138740 size=144 callers=0 calls=0
*/
void sub_138740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138740ULL || rel >= 0x1387d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001387d0 size=48 callers=0 calls=0
*/
void sub_1387d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1387d0ULL || rel >= 0x138800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138800 size=16 callers=0 calls=0
*/
void sub_138800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138800ULL || rel >= 0x138810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138810 size=464 callers=0 calls=0
   ref: http live
*/
void http_live(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138810ULL || rel >= 0x1389e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001389e0 size=16 callers=0 calls=0
*/
void sub_1389e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389e0ULL || rel >= 0x1389f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001389f0 size=144 callers=0 calls=0
*/
void sub_1389f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389f0ULL || rel >= 0x138a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138a80 size=16 callers=0 calls=0
*/
void sub_138a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138a80ULL || rel >= 0x138a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138a90 size=32 callers=0 calls=0
*/
void sub_138a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138a90ULL || rel >= 0x138ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138ab0 size=16 callers=0 calls=0
*/
void sub_138ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ab0ULL || rel >= 0x138ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138ac0 size=16 callers=0 calls=0
*/
void sub_138ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ac0ULL || rel >= 0x138ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138ad0 size=16 callers=0 calls=0
*/
void sub_138ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ad0ULL || rel >= 0x138ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138ae0 size=32 callers=0 calls=0
*/
void sub_138ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ae0ULL || rel >= 0x138b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138b00 size=192 callers=0 calls=0
   ref: generation
*/
void generation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138b00ULL || rel >= 0x138bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138bc0 size=16 callers=0 calls=0
*/
void sub_138bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138bc0ULL || rel >= 0x138bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138bd0 size=688 callers=0 calls=0
   ref: timeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: HTTPLiveSource
   ref: buffer
   ref: generation
   ref: !(buffer->meta()->findInt64("timeUs", &timeUs))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void HTTPLiveSource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138bd0ULL || rel >= 0x138e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138e80 size=928 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: changedMask
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findMessage("reply", &reply))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: height
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: HTTPLiveSource
*/
void HTTPLiveSource_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e80ULL || rel >= 0x139220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139220 size=64 callers=0 calls=0
*/
void sub_139220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139220ULL || rel >= 0x139260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139260 size=16 callers=0 calls=0
*/
void sub_139260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139260ULL || rel >= 0x139270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139270 size=16 callers=0 calls=0
*/
void sub_139270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139270ULL || rel >= 0x139280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139280 size=16 callers=0 calls=0
*/
void sub_139280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139280ULL || rel >= 0x139290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139290 size=16 callers=0 calls=0
*/
void sub_139290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139290ULL || rel >= 0x1392a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001392a0 size=16 callers=0 calls=0
*/
void sub_1392a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392a0ULL || rel >= 0x1392b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001392b0 size=16 callers=0 calls=0
*/
void sub_1392b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392b0ULL || rel >= 0x1392c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001392c0 size=16 callers=0 calls=0
*/
void sub_1392c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392c0ULL || rel >= 0x1392d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001392d0 size=16 callers=0 calls=0
*/
void sub_1392d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392d0ULL || rel >= 0x1392e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001392e0 size=16 callers=0 calls=0
*/
void sub_1392e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392e0ULL || rel >= 0x1392f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001392f0 size=32 callers=0 calls=0
*/
void sub_1392f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392f0ULL || rel >= 0x139310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139310 size=96 callers=0 calls=0
*/
void sub_139310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139310ULL || rel >= 0x139370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139370 size=16 callers=0 calls=0
*/
void sub_139370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139370ULL || rel >= 0x139380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139380 size=432 callers=0 calls=0
*/
void sub_139380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139380ULL || rel >= 0x139530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139530 size=768 callers=0 calls=0
   ref: !(numSamplesToUse >= 3)
   ref: VideoFrameScheduler
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void VideoFrameScheduler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139530ULL || rel >= 0x139830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139830 size=32 callers=0 calls=0
*/
void sub_139830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139830ULL || rel >= 0x139850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139850 size=464 callers=0 calls=0
*/
void sub_139850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139850ULL || rel >= 0x139a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139a20 size=96 callers=0 calls=0
*/
void sub_139a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a20ULL || rel >= 0x139a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139a80 size=176 callers=0 calls=0
*/
void sub_139a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a80ULL || rel >= 0x139b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139b30 size=240 callers=0 calls=0
*/
void sub_139b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139b30ULL || rel >= 0x139c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139c20 size=32 callers=0 calls=0
*/
void sub_139c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c20ULL || rel >= 0x139c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139c40 size=32 callers=0 calls=0
*/
void sub_139c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c40ULL || rel >= 0x139c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139c60 size=816 callers=0 calls=0
*/
void sub_139c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c60ULL || rel >= 0x139f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139f90 size=64 callers=0 calls=0
*/
void sub_139f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f90ULL || rel >= 0x139fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139fd0 size=96 callers=0 calls=0
*/
void sub_139fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139fd0ULL || rel >= 0x13a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a030 size=96 callers=0 calls=0
*/
void sub_13a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a030ULL || rel >= 0x13a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a090 size=336 callers=0 calls=0
*/
void sub_13a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a090ULL || rel >= 0x13a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a1e0 size=160 callers=0 calls=0
*/
void sub_13a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1e0ULL || rel >= 0x13a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a280 size=192 callers=0 calls=0
*/
void sub_13a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a280ULL || rel >= 0x13a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a340 size=64 callers=0 calls=0
*/
void sub_13a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a340ULL || rel >= 0x13a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a380 size=96 callers=0 calls=0
*/
void sub_13a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a380ULL || rel >= 0x13a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a3e0 size=32 callers=0 calls=0
*/
void sub_13a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3e0ULL || rel >= 0x13a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a400 size=1888 callers=0 calls=0
   ref: audio/
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: video/
   ref: GenericSource
   ref: video/wvm
   ref: !(mDataSource != 0L)
   ref: !(meta->findCString(kKeyMIMEType, &mime))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void GenericSource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a400ULL || rel >= 0x13ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ab60 size=208 callers=0 calls=0
   ref: GenericSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(mDrmManagerClient)
*/
void GenericSource_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab60ULL || rel >= 0x13ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ac30 size=48 callers=0 calls=0
*/
void sub_13ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac30ULL || rel >= 0x13ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ac60 size=48 callers=0 calls=0
*/
void sub_13ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac60ULL || rel >= 0x13ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ac90 size=592 callers=0 calls=0
*/
void sub_13ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac90ULL || rel >= 0x13aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013aee0 size=64 callers=0 calls=0
*/
void sub_13aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aee0ULL || rel >= 0x13af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013af20 size=48 callers=0 calls=0
*/
void sub_13af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13af20ULL || rel >= 0x13af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013af50 size=272 callers=0 calls=0
   ref: generic
*/
void generic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13af50ULL || rel >= 0x13b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b060 size=1072 callers=0 calls=0
   ref: http://
   ref: widevine://
   ref: https://
*/
void unnamed_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b060ULL || rel >= 0x13b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b490 size=352 callers=0 calls=0
*/
void sub_13b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b490ULL || rel >= 0x13b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b5f0 size=432 callers=0 calls=0
   ref: meta-data-size
   ref: audio/
   ref: GenericSource
   ref: !(mDataSource != 0L)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void GenericSource_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5f0ULL || rel >= 0x13b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b7a0 size=144 callers=0 calls=0
*/
void sub_13b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7a0ULL || rel >= 0x13b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b830 size=16 callers=0 calls=0
*/
void sub_13b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b830ULL || rel >= 0x13b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b840 size=32 callers=0 calls=0
*/
void sub_13b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b840ULL || rel >= 0x13b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b860 size=32 callers=0 calls=0
*/
void sub_13b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b860ULL || rel >= 0x13b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b880 size=128 callers=0 calls=0
*/
void sub_13b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b880ULL || rel >= 0x13b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b900 size=192 callers=0 calls=0
   ref: trackType
*/
void trackType(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b900ULL || rel >= 0x13b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b9c0 size=240 callers=0 calls=0
*/
void sub_13b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9c0ULL || rel >= 0x13bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bab0 size=160 callers=0 calls=0
*/
void sub_13bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bab0ULL || rel >= 0x13bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bb50 size=48 callers=0 calls=0
*/
void sub_13bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bb50ULL || rel >= 0x13bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bb80 size=80 callers=0 calls=0
*/
void sub_13bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bb80ULL || rel >= 0x13bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bbd0 size=240 callers=0 calls=0
*/
void sub_13bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bbd0ULL || rel >= 0x13bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bcc0 size=16 callers=0 calls=0
*/
void sub_13bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bcc0ULL || rel >= 0x13bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bcd0 size=144 callers=0 calls=0
   ref: generation
*/
void generation_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bcd0ULL || rel >= 0x13bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bd60 size=640 callers=0 calls=0
   ref: percentage
*/
void percentage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd60ULL || rel >= 0x13bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bfe0 size=112 callers=0 calls=0
   ref: percentage
*/
void percentage_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfe0ULL || rel >= 0x13c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c050 size=144 callers=0 calls=0
*/
void sub_13c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c050ULL || rel >= 0x13c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c0e0 size=176 callers=0 calls=0
   ref: bandwidth
*/
void bandwidth(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c0e0ULL || rel >= 0x13c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c190 size=144 callers=0 calls=0
*/
void sub_13c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c190ULL || rel >= 0x13c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c220 size=1856 callers=0 calls=0
   ref: audio/
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: trackType
   ref: !(msg->findInt32("trackIndex", &trackIndex))
   ref: video/
   ref: GenericSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: trackIndex
*/
void trackIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c220ULL || rel >= 0x13c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c960 size=400 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: timeUs
   ref: !(msg->findInt64("timeUs", &timeUs))
   ref: GenericSource
   ref: !(msg->findInt32("generation", &msgGeneration))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: generation
*/
void GenericSource_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c960ULL || rel >= 0x13caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013caf0 size=336 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: GenericSource
   ref: !(msg->findInt32("generation", &msgGeneration))
   ref: buffer
   ref: generation
*/
void GenericSource_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13caf0ULL || rel >= 0x13cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013cc40 size=992 callers=0 calls=0
   ref: GenericSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(mbuf->meta_data()->findInt64(kKeyTime, &timeUs))
*/
void GenericSource_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cc40ULL || rel >= 0x13d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d020 size=384 callers=0 calls=0
   ref: GenericSource
   ref: !(msg->findInt32("audio", &audio))
   ref: !(msg->senderAwaitsResponse(&replyID))
   ref: format
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void GenericSource_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d020ULL || rel >= 0x13d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d1a0 size=368 callers=0 calls=0
   ref: GenericSource
   ref: !(msg->senderAwaitsResponse(&replyID))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findInt32("type", &tmpType))
*/
void GenericSource_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1a0ULL || rel >= 0x13d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d310 size=416 callers=0 calls=0
   ref: timeUs
   ref: !(msg->findInt32("trackIndex", &trackIndex))
   ref: !(msg->findInt64("timeUs", &timeUs))
   ref: !(msg->findInt32("select", &select))
   ref: GenericSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: trackIndex
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void trackIndex_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d310ULL || rel >= 0x13d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d4b0 size=272 callers=0 calls=0
   ref: seekTimeUs
   ref: GenericSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->senderAwaitsResponse(&replyID))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findInt64("seekTimeUs", &seekTimeUs))
*/
void GenericSource_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4b0ULL || rel >= 0x13d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d5c0 size=176 callers=0 calls=0
   ref: trackType
   ref: GenericSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findInt32("trackType", &tmpType))
*/
void GenericSource_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5c0ULL || rel >= 0x13d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d670 size=288 callers=0 calls=0
   ref: GenericSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: format
   ref: !(response->findPointer("format", &format))
*/
void GenericSource_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d670ULL || rel >= 0x13d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d790 size=704 callers=0 calls=0
   ref: timeUs
   ref: GenericSource
   ref: !((*accessUnit)->meta()->findInt64("timeUs", &timeUs))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: generation
*/
void GenericSource_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d790ULL || rel >= 0x13da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013da50 size=16 callers=0 calls=0
*/
void sub_13da50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da50ULL || rel >= 0x13da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013da60 size=16 callers=0 calls=0
*/
void sub_13da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da60ULL || rel >= 0x13da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013da70 size=448 callers=0 calls=0
   ref: audio/
   ref: video/
   ref: GenericSource
   ref: !(meta->findCString(kKeyMIMEType, &mime))
   ref: language
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void GenericSource_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da70ULL || rel >= 0x13dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013dc30 size=288 callers=0 calls=0
   ref: !(response->findInt32("index", &index))
   ref: GenericSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void GenericSource_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc30ULL || rel >= 0x13dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013dd50 size=112 callers=0 calls=0
*/
void sub_13dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd50ULL || rel >= 0x13ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ddc0 size=336 callers=0 calls=0
   ref: timeUs
   ref: !(response->findInt32("err", &err))
   ref: GenericSource
   ref: trackIndex
   ref: select
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void trackIndex_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ddc0ULL || rel >= 0x13df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013df10 size=1296 callers=0 calls=0
   ref: timeUs
   ref: audio/
   ref: video/
   ref: GenericSource
   ref: trackIndex
   ref: !(meta->findCString(kKeyMIMEType, &mime))
   ref: generation
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void trackIndex_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df10ULL || rel >= 0x13e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e420 size=288 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: seekTimeUs
   ref: !(response->findInt32("err", &err))
   ref: GenericSource
*/
void GenericSource_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e420ULL || rel >= 0x13e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e540 size=224 callers=0 calls=0
*/
void sub_13e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e540ULL || rel >= 0x13e620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e620 size=944 callers=0 calls=0
   ref: timeUs
   ref: GenericSource
   ref: trackIndex
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(mb->meta_data()->findInt64(kKeyTime, &timeUs))
   ref: !(mTimedTextTrack.mSource != 0L && mTimedTextTrack.mSource->getFormat()->findCString(kKeyMIMEType, &
   ref: durationUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void trackIndex_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e620ULL || rel >= 0x13e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e9d0 size=64 callers=0 calls=0
*/
void sub_13e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9d0ULL || rel >= 0x13ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ea10 size=32 callers=0 calls=0
*/
void sub_13ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea10ULL || rel >= 0x13ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ea30 size=80 callers=0 calls=0
*/
void sub_13ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea30ULL || rel >= 0x13ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ea80 size=96 callers=0 calls=0
*/
void sub_13ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea80ULL || rel >= 0x13eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013eae0 size=96 callers=0 calls=0
*/
void sub_13eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eae0ULL || rel >= 0x13eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013eb40 size=112 callers=0 calls=0
*/
void sub_13eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eb40ULL || rel >= 0x13ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ebb0 size=112 callers=0 calls=0
*/
void sub_13ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ebb0ULL || rel >= 0x13ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ec20 size=48 callers=0 calls=0
*/
void sub_13ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec20ULL || rel >= 0x13ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ec50 size=192 callers=0 calls=0
*/
void sub_13ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec50ULL || rel >= 0x13ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ed10 size=352 callers=0 calls=0
*/
void sub_13ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed10ULL || rel >= 0x13ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ee70 size=160 callers=0 calls=0
*/
void sub_13ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ee70ULL || rel >= 0x13ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ef10 size=48 callers=0 calls=0
*/
void sub_13ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef10ULL || rel >= 0x13ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ef40 size=16 callers=0 calls=0
*/
void sub_13ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef40ULL || rel >= 0x13ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ef50 size=96 callers=0 calls=0
*/
void sub_13ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef50ULL || rel >= 0x13efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013efb0 size=288 callers=0 calls=0
   ref: source
*/
void source(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13efb0ULL || rel >= 0x13f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f0d0 size=672 callers=0 calls=0
   ref: source
   ref: http://
   ref: https://
   ref: file://
*/
void source_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f0d0ULL || rel >= 0x13f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f370 size=416 callers=0 calls=0
   ref: source
*/
void source_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f370ULL || rel >= 0x13f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f510 size=368 callers=0 calls=0
   ref: source
*/
void source_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f510ULL || rel >= 0x13f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f680 size=64 callers=0 calls=0
*/
void sub_13f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f680ULL || rel >= 0x13f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f6c0 size=352 callers=0 calls=0
   ref: native-window
*/
void native_window(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f6c0ULL || rel >= 0x13f820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f820 size=192 callers=0 calls=0
*/
void sub_13f820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f820ULL || rel >= 0x13f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f8e0 size=64 callers=0 calls=0
*/
void sub_13f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f8e0ULL || rel >= 0x13f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f920 size=64 callers=0 calls=0
*/
void sub_13f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f920ULL || rel >= 0x13f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f960 size=96 callers=0 calls=0
*/
void sub_13f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f960ULL || rel >= 0x13f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f9c0 size=176 callers=0 calls=0
   ref: seekTimeUs
   ref: needNotify
*/
void seekTimeUs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f9c0ULL || rel >= 0x13fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013fa70 size=608 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(format->findInt32("forced", &isForced))
   ref: !(format->findString("language", &lang))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(format->findInt32("type", &trackType))
   ref: NuPlayer
   ref: !(format->findInt32("default", &isDefault))
   ref: !(format->findInt32("auto", &isAuto))
*/
void language(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa70ULL || rel >= 0x13fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013fcd0 size=9520 callers=0 calls=0
   ref: native-window
   ref: timeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: seekTimeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void trackIndex_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fcd0ULL || rel >= 0x142200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142200 size=272 callers=0 calls=0
*/
void sub_142200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142200ULL || rel >= 0x142310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142310 size=128 callers=0 calls=0
*/
void sub_142310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142310ULL || rel >= 0x142390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142390 size=32 callers=0 calls=0
*/
void sub_142390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142390ULL || rel >= 0x1423b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001423b0 size=192 callers=0 calls=0
*/
void sub_1423b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423b0ULL || rel >= 0x142470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142470 size=144 callers=0 calls=0
*/
void sub_142470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142470ULL || rel >= 0x142500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142500 size=848 callers=0 calls=0
   ref: NuPlayerRenderer
   ref: generation
*/
void NuPlayerRenderer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142500ULL || rel >= 0x142850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142850 size=1552 callers=0 calls=0
   ref: auto-frc
   ref: protected
   ref: bit-rate
   ref: persist.sys.media.avsync
   ref: NuPlayer
   ref: secure
   ref: generation
   ref: channel-count
*/
void generation_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142850ULL || rel >= 0x142e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142e60 size=160 callers=0 calls=0
*/
void sub_142e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142e60ULL || rel >= 0x142f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142f00 size=144 callers=0 calls=0
   ref: generation
*/
void generation_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f00ULL || rel >= 0x142f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142f90 size=160 callers=0 calls=0
*/
void sub_142f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f90ULL || rel >= 0x143030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143030 size=240 callers=0 calls=0
   ref: decoder flush in invalid state %d
   ref: NuPlayer
   ref: isDecoder
*/
void isDecoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143030ULL || rel >= 0x143120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143120 size=80 callers=0 calls=0
*/
void sub_143120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143120ULL || rel >= 0x143170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143170 size=752 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(inputFormat->findInt32("width", &displayWidth))
   ref: rotation-degrees
   ref: !(outputFormat->findInt32("height", &height))
   ref: sar-width
   ref: height
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: NuPlayer
*/
void NuPlayer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143170ULL || rel >= 0x143460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143460 size=112 callers=0 calls=0
*/
void sub_143460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143460ULL || rel >= 0x1434d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001434d0 size=128 callers=0 calls=0
*/
void sub_1434d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434d0ULL || rel >= 0x143550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143550 size=16 callers=0 calls=0
*/
void sub_143550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143550ULL || rel >= 0x143560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143560 size=128 callers=0 calls=0
   ref: mSource is NULL and decoders not NULL audio(%p) video(%p)
   ref: mAudioDecoder != NULL || mVideoDecoder != NULL
   ref: NuPlayer
*/
void NuPlayer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143560ULL || rel >= 0x1435e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001435e0 size=368 callers=0 calls=0
   ref: !(mAudioDecoder == 0L)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(mVideoDecoder == 0L)
   ref: NuPlayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayer_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435e0ULL || rel >= 0x143750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143750 size=96 callers=0 calls=0
*/
void sub_143750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143750ULL || rel >= 0x1437b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001437b0 size=2208 callers=0 calls=0
   ref: !(msg->findInt32("flags", (int32_t *)&flags))
   ref: timeUs
   ref: !(msg->findBuffer("buffer", &buffer))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findMessage("reply", &reply))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void percentage_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437b0ULL || rel >= 0x144050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144050 size=384 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findBuffer("buffer", &buffer))
   ref: NuPlayer
   ref: buffer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findInt32("what", &what))
*/
void NuPlayer_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144050ULL || rel >= 0x1441d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001441d0 size=32 callers=0 calls=0
*/
void sub_1441d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441d0ULL || rel >= 0x1441f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001441f0 size=16 callers=0 calls=0
*/
void sub_1441f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441f0ULL || rel >= 0x144200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144200 size=160 callers=0 calls=0
   ref: generation
*/
void generation_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144200ULL || rel >= 0x1442a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001442a0 size=64 callers=0 calls=0
*/
void sub_1442a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442a0ULL || rel >= 0x1442e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001442e0 size=144 callers=0 calls=0
*/
void sub_1442e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442e0ULL || rel >= 0x144370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144370 size=528 callers=0 calls=0
*/
void sub_144370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144370ULL || rel >= 0x144580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144580 size=192 callers=0 calls=0
*/
void sub_144580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144580ULL || rel >= 0x144640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144640 size=176 callers=0 calls=0
*/
void sub_144640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144640ULL || rel >= 0x1446f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001446f0 size=304 callers=0 calls=0
   ref: !(response->findInt32("err", &err))
   ref: NuPlayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayer_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1446f0ULL || rel >= 0x144820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144820 size=304 callers=0 calls=0
   ref: timeUs
   ref: trackIndex
   ref: select
*/
void trackIndex_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144820ULL || rel >= 0x144950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144950 size=16 callers=0 calls=0
*/
void sub_144950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144950ULL || rel >= 0x144960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144960 size=16 callers=0 calls=0
*/
void sub_144960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144960ULL || rel >= 0x144970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144970 size=192 callers=0 calls=0
*/
void sub_144970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144970ULL || rel >= 0x144a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144a30 size=192 callers=0 calls=0
*/
void sub_144a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a30ULL || rel >= 0x144af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144af0 size=560 callers=0 calls=0
   ref: timeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: trackIndex
   ref: NuPlayer
   ref: !(buffer->meta()->findInt32("trackIndex", &trackIndex))
   ref: !(buffer->meta()->findInt64("timeUs", &timeUs))
*/
void trackIndex_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144af0ULL || rel >= 0x144d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144d20 size=624 callers=0 calls=0
   ref: timeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(buffer->meta()->findString("mime", &mime))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: NuPlayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(strcasecmp(mime.c_str(), MEDIA_MIMETYPE_TEXT_3GPP) == 0)
   ref: !(buffer->meta()->findInt64("timeUs", &timeUs))
*/
void NuPlayer_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d20ULL || rel >= 0x144f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144f90 size=128 callers=0 calls=0
   ref: !(mSource != 0L)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: NuPlayer
*/
void NuPlayer_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f90ULL || rel >= 0x145010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145010 size=128 callers=0 calls=0
   ref: !(mSource != 0L)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: NuPlayer
*/
void NuPlayer_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145010ULL || rel >= 0x145090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145090 size=224 callers=0 calls=0
*/
void sub_145090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145090ULL || rel >= 0x145170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145170 size=112 callers=0 calls=0
*/
void sub_145170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145170ULL || rel >= 0x1451e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001451e0 size=112 callers=0 calls=0
   ref: format
*/
void format_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1451e0ULL || rel >= 0x145250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145250 size=112 callers=0 calls=0
*/
void sub_145250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145250ULL || rel >= 0x1452c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001452c0 size=32 callers=0 calls=0
   ref: NuPlayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayer_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1452c0ULL || rel >= 0x1452e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001452e0 size=64 callers=0 calls=0
*/
void sub_1452e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1452e0ULL || rel >= 0x145320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145320 size=16 callers=0 calls=0
*/
void sub_145320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145320ULL || rel >= 0x145330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145330 size=16 callers=0 calls=0
*/
void sub_145330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145330ULL || rel >= 0x145340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145340 size=16 callers=0 calls=0
*/
void sub_145340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145340ULL || rel >= 0x145350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145350 size=16 callers=0 calls=0
*/
void sub_145350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145350ULL || rel >= 0x145360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145360 size=16 callers=0 calls=0
*/
void sub_145360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145360ULL || rel >= 0x145370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145370 size=16 callers=0 calls=0
*/
void sub_145370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145370ULL || rel >= 0x145380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145380 size=16 callers=0 calls=0
*/
void sub_145380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145380ULL || rel >= 0x145390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145390 size=64 callers=0 calls=0
*/
void sub_145390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145390ULL || rel >= 0x1453d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001453d0 size=80 callers=0 calls=0
*/
void sub_1453d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453d0ULL || rel >= 0x145420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145420 size=48 callers=0 calls=0
*/
void sub_145420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145420ULL || rel >= 0x145450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145450 size=176 callers=0 calls=0
*/
void sub_145450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145450ULL || rel >= 0x145500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145500 size=64 callers=0 calls=0
*/
void sub_145500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145500ULL || rel >= 0x145540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145540 size=80 callers=0 calls=0
*/
void sub_145540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145540ULL || rel >= 0x145590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145590 size=16 callers=0 calls=0
*/
void sub_145590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145590ULL || rel >= 0x1455a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001455a0 size=48 callers=0 calls=0
*/
void sub_1455a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1455a0ULL || rel >= 0x1455d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001455d0 size=144 callers=0 calls=0
   ref: mSource is NULL and decoders not NULL audio(%p) video(%p)
   ref: mAudioDecoder != NULL || mVideoDecoder != NULL
   ref: NuPlayer
*/
void NuPlayer_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1455d0ULL || rel >= 0x145660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145660 size=48 callers=0 calls=0
*/
void sub_145660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145660ULL || rel >= 0x145690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145690 size=32 callers=0 calls=0
*/
void sub_145690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145690ULL || rel >= 0x1456b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001456b0 size=48 callers=0 calls=0
*/
void sub_1456b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456b0ULL || rel >= 0x1456e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001456e0 size=16 callers=0 calls=0
*/
void sub_1456e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456e0ULL || rel >= 0x1456f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001456f0 size=64 callers=0 calls=0
*/
void sub_1456f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456f0ULL || rel >= 0x145730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145730 size=80 callers=0 calls=0
*/
void sub_145730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145730ULL || rel >= 0x145780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145780 size=16 callers=0 calls=0
*/
void sub_145780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145780ULL || rel >= 0x145790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145790 size=160 callers=0 calls=0
*/
void sub_145790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145790ULL || rel >= 0x145830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145830 size=64 callers=0 calls=0
*/
void sub_145830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145830ULL || rel >= 0x145870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145870 size=16 callers=0 calls=0
*/
void sub_145870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145870ULL || rel >= 0x145880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145880 size=16 callers=0 calls=0
*/
void sub_145880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145880ULL || rel >= 0x145890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145890 size=32 callers=0 calls=0
*/
void sub_145890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145890ULL || rel >= 0x1458b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001458b0 size=96 callers=0 calls=0
*/
void sub_1458b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458b0ULL || rel >= 0x145910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145910 size=32 callers=0 calls=0
*/
void sub_145910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145910ULL || rel >= 0x145930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145930 size=32 callers=0 calls=0
*/
void sub_145930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145930ULL || rel >= 0x145950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145950 size=160 callers=0 calls=0
*/
void sub_145950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145950ULL || rel >= 0x1459f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001459f0 size=16 callers=0 calls=0
*/
void sub_1459f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459f0ULL || rel >= 0x145a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145a00 size=320 callers=0 calls=0
   ref: language
   ref: default
   ref: forced
*/
void language_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a00ULL || rel >= 0x145b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145b40 size=16 callers=0 calls=0
*/
void sub_145b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b40ULL || rel >= 0x145b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145b50 size=96 callers=0 calls=0
*/
void sub_145b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b50ULL || rel >= 0x145bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145bb0 size=32 callers=0 calls=0
*/
void sub_145bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145bb0ULL || rel >= 0x145bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145bd0 size=32 callers=0 calls=0
*/
void sub_145bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145bd0ULL || rel >= 0x145bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145bf0 size=1248 callers=0 calls=0
   ref: timeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: NuPlayerCCDecoder
   ref: !(accessUnit->meta()->findInt64("timeUs", &timeUs))
*/
void NuPlayerCCDecoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145bf0ULL || rel >= 0x1460d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001460d0 size=336 callers=0 calls=0
*/
void sub_1460d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460d0ULL || rel >= 0x146220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146220 size=96 callers=0 calls=0
*/
void sub_146220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146220ULL || rel >= 0x146280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146280 size=416 callers=0 calls=0
   ref: timeUs
   ref: trackIndex
   ref: buffer
   ref: durationUs
*/
void trackIndex_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146280ULL || rel >= 0x146420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146420 size=16 callers=0 calls=0
*/
void sub_146420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146420ULL || rel >= 0x146430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146430 size=144 callers=0 calls=0
*/
void sub_146430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146430ULL || rel >= 0x1464c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001464c0 size=144 callers=0 calls=0
*/
void sub_1464c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1464c0ULL || rel >= 0x146550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146550 size=64 callers=0 calls=0
*/
void sub_146550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146550ULL || rel >= 0x146590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146590 size=64 callers=0 calls=0
*/
void sub_146590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146590ULL || rel >= 0x1465d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001465d0 size=96 callers=0 calls=0
*/
void sub_1465d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1465d0ULL || rel >= 0x146630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146630 size=64 callers=0 calls=0
*/
void sub_146630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146630ULL || rel >= 0x146670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146670 size=96 callers=0 calls=0
*/
void sub_146670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146670ULL || rel >= 0x1466d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001466d0 size=96 callers=0 calls=0
*/
void sub_1466d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466d0ULL || rel >= 0x146730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146730 size=128 callers=0 calls=0
*/
void sub_146730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146730ULL || rel >= 0x1467b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001467b0 size=112 callers=0 calls=0
*/
void sub_1467b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1467b0ULL || rel >= 0x146820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146820 size=32 callers=0 calls=0
*/
void sub_146820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146820ULL || rel >= 0x146840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146840 size=64 callers=0 calls=0
*/
void sub_146840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146840ULL || rel >= 0x146880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146880 size=64 callers=0 calls=0
*/
void sub_146880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146880ULL || rel >= 0x1468c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001468c0 size=16 callers=0 calls=0
*/
void sub_1468c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468c0ULL || rel >= 0x1468d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001468d0 size=16 callers=0 calls=0
*/
void sub_1468d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468d0ULL || rel >= 0x1468e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001468e0 size=32 callers=0 calls=0
*/
void sub_1468e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468e0ULL || rel >= 0x146900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146900 size=96 callers=0 calls=0
*/
void sub_146900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146900ULL || rel >= 0x146960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146960 size=32 callers=0 calls=0
*/
void sub_146960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146960ULL || rel >= 0x146980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146980 size=32 callers=0 calls=0
*/
void sub_146980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146980ULL || rel >= 0x1469a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001469a0 size=528 callers=0 calls=0
   ref: NPDecoder-CL
   ref: decoder
*/
void decoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469a0ULL || rel >= 0x146bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146bb0 size=528 callers=0 calls=0
*/
void sub_146bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146bb0ULL || rel >= 0x146dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146dc0 size=336 callers=0 calls=0
*/
void sub_146dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146dc0ULL || rel >= 0x146f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146f10 size=64 callers=0 calls=0
*/
void sub_146f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f10ULL || rel >= 0x146f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146f50 size=160 callers=0 calls=0
*/
void sub_146f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f50ULL || rel >= 0x146ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146ff0 size=48 callers=0 calls=0
*/
void sub_146ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146ff0ULL || rel >= 0x147020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147020 size=32 callers=0 calls=0
*/
void sub_147020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147020ULL || rel >= 0x147040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147040 size=480 callers=0 calls=0
   ref: output-buffers
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: NuPlayerDecoder
   ref: generation
   ref: !(msg->findInt32("generation", &generation))
   ref: input-buffers
*/
void NuPlayerDecoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147040ULL || rel >= 0x147220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147220 size=112 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: NuPlayerDecoder
   ref: generation
   ref: !(msg->findInt32("generation", &generation))
*/
void NuPlayerDecoder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147220ULL || rel >= 0x147290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147290 size=800 callers=0 calls=0
   ref: !(onInputBufferFetched(msg))
   ref: buffer
   ref: NuPlayerDecoder
   ref: buffer-ix
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerDecoder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147290ULL || rel >= 0x1475b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001475b0 size=1424 callers=0 calls=0
   ref: timeUs
   ref: format
   ref: NuPlayerDecoder
   ref: generation
   ref: fenceFd
   ref: buffer-ix
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerDecoder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1475b0ULL || rel >= 0x147b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147b40 size=160 callers=0 calls=0
   ref: generation
*/
void generation_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b40ULL || rel >= 0x147be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147be0 size=416 callers=0 calls=0
   ref: timeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: render
   ref: !(msg->findSize("buffer-ix", &bufferIx))
   ref: !(msg->findInt64("timestampNs", &timestampNs))
   ref: timestampNs
   ref: NuPlayerDecoder
   ref: buffer-ix
*/
void NuPlayerDecoder_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147be0ULL || rel >= 0x147d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147d80 size=1712 callers=0 calls=0
   ref: audio/
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(mCodec == 0L)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: secure
*/
void NuPlayerDecoder_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d80ULL || rel >= 0x148430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148430 size=272 callers=0 calls=0
*/
void sub_148430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148430ULL || rel >= 0x148540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148540 size=128 callers=0 calls=0
*/
void sub_148540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148540ULL || rel >= 0x1485c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001485c0 size=112 callers=0 calls=0
*/
void sub_1485c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485c0ULL || rel >= 0x148630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148630 size=32 callers=0 calls=0
*/
void sub_148630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148630ULL || rel >= 0x148650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148650 size=240 callers=0 calls=0
*/
void sub_148650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148650ULL || rel >= 0x148740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148740 size=480 callers=0 calls=0
   ref: decoder
*/
void decoder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148740ULL || rel >= 0x148920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148920 size=112 callers=0 calls=0
*/
void sub_148920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148920ULL || rel >= 0x148990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148990 size=400 callers=0 calls=0
   ref: buffer-ix
*/
void buffer_ix(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148990ULL || rel >= 0x148b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148b20 size=720 callers=0 calls=0
   ref: buffer
   ref: NuPlayerDecoder
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(accessUnit->meta()->findInt32("discontinuity", &type))
   ref: discontinuity
   ref: formatChange
*/
void NuPlayerDecoder_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b20ULL || rel >= 0x148df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148df0 size=1712 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: resume-at-mediaTimeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: timeUs
   ref: !(mMediaBuffers[bufferIx] == 0L)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findInt32("err", &streamErr) || !hasBuffer)
*/
void NuPlayerDecoder_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148df0ULL || rel >= 0x1494a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001494a0 size=272 callers=0 calls=0
   ref: audio/
   ref: adaptive-playback
*/
void unnamed_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494a0ULL || rel >= 0x1495b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001495b0 size=544 callers=0 calls=0
   ref: channel-count
   ref: sample-rate
   ref: is-adts
*/
void is_adts(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495b0ULL || rel >= 0x1497d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001497d0 size=160 callers=0 calls=0
*/
void sub_1497d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497d0ULL || rel >= 0x149870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149870 size=64 callers=0 calls=0
*/
void sub_149870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149870ULL || rel >= 0x1498b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001498b0 size=16 callers=0 calls=0
*/
void sub_1498b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498b0ULL || rel >= 0x1498c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001498c0 size=16 callers=0 calls=0
*/
void sub_1498c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498c0ULL || rel >= 0x1498d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001498d0 size=16 callers=0 calls=0
*/
void sub_1498d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498d0ULL || rel >= 0x1498e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001498e0 size=96 callers=0 calls=0
*/
void sub_1498e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498e0ULL || rel >= 0x149940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149940 size=16 callers=0 calls=0
*/
void sub_149940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149940ULL || rel >= 0x149950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149950 size=16 callers=0 calls=0
*/
void sub_149950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149950ULL || rel >= 0x149960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149960 size=176 callers=0 calls=0
   ref: NPDecoder
*/
void NPDecoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149960ULL || rel >= 0x149a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149a10 size=112 callers=0 calls=0
*/
void sub_149a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149a10ULL || rel >= 0x149a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149a80 size=16 callers=0 calls=0
*/
void sub_149a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149a80ULL || rel >= 0x149a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149a90 size=144 callers=0 calls=0
   ref: format
*/
void format_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149a90ULL || rel >= 0x149b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149b20 size=80 callers=0 calls=0
*/
void sub_149b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b20ULL || rel >= 0x149b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149b70 size=192 callers=0 calls=0
   ref: renderer
*/
void renderer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b70ULL || rel >= 0x149c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149c30 size=256 callers=0 calls=0
   ref: buffers
*/
void buffers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149c30ULL || rel >= 0x149d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149d30 size=64 callers=0 calls=0
*/
void sub_149d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149d30ULL || rel >= 0x149d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149d70 size=144 callers=0 calls=0
   ref: notifyComplete
*/
void notifyComplete(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149d70ULL || rel >= 0x149e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149e00 size=64 callers=0 calls=0
*/
void sub_149e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e00ULL || rel >= 0x149e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149e40 size=32 callers=0 calls=0
*/
void sub_149e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e40ULL || rel >= 0x149e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149e60 size=144 callers=0 calls=0
*/
void sub_149e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e60ULL || rel >= 0x149ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149ef0 size=864 callers=0 calls=0
   ref: !(msg->findInt32("notifyComplete", &notifyComplete))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: NuPlayerDecoderBase
   ref: !(msg->findPointer("buffers", (void **)&dstBuffers))
   ref: notifyComplete
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerDecoderBase(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ef0ULL || rel >= 0x14a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a250 size=128 callers=0 calls=0
*/
void sub_14a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a250ULL || rel >= 0x14a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a2d0 size=160 callers=0 calls=0
   ref: pass through decoder
*/
void pass_through_decoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a2d0ULL || rel >= 0x14a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a370 size=128 callers=0 calls=0
*/
void sub_14a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a370ULL || rel >= 0x14a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a3f0 size=48 callers=0 calls=0
*/
void sub_14a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a3f0ULL || rel >= 0x14a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a420 size=16 callers=0 calls=0
*/
void sub_14a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a420ULL || rel >= 0x14a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a430 size=128 callers=0 calls=0
*/
void sub_14a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a430ULL || rel >= 0x14a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a4b0 size=16 callers=0 calls=0
*/
void sub_14a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4b0ULL || rel >= 0x14a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a4c0 size=16 callers=0 calls=0
*/
void sub_14a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4c0ULL || rel >= 0x14a4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a4d0 size=112 callers=0 calls=0
   ref: generation
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findInt32("generation", &generation))
   ref: NuPlayerDecoderPassThrough
*/
void NuPlayerDecoderPassThrough(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4d0ULL || rel >= 0x14a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a540 size=64 callers=0 calls=0
*/
void sub_14a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a540ULL || rel >= 0x14a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a580 size=256 callers=0 calls=0
*/
void sub_14a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a580ULL || rel >= 0x14a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a680 size=480 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: buffer
   ref: !(accessUnit->meta()->findInt32("discontinuity", &type))
   ref: discontinuity
   ref: NuPlayerDecoderPassThrough
   ref: formatChange
*/
void NuPlayerDecoderPassThrough_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a680ULL || rel >= 0x14a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a860 size=720 callers=0 calls=0
   ref: resume-at-mediatimeUs
   ref: timeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findInt32("err", &streamErr) || !hasBuffer)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: buffer
   ref: generation
   ref: !(buffer->meta()->findInt64("timeUs", &timeUs))
*/
void NuPlayerDecoderPassThrough_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a860ULL || rel >= 0x14ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014ab30 size=240 callers=0 calls=0
*/
void sub_14ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab30ULL || rel >= 0x14ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014ac20 size=672 callers=0 calls=0
   ref: timeUs
*/
void timeUs_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ac20ULL || rel >= 0x14aec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014aec0 size=32 callers=0 calls=0
*/
void sub_14aec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aec0ULL || rel >= 0x14aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014aee0 size=128 callers=0 calls=0
*/
void sub_14aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aee0ULL || rel >= 0x14af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014af60 size=224 callers=0 calls=0
*/
void sub_14af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14af60ULL || rel >= 0x14b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b040 size=128 callers=0 calls=0
*/
void sub_14b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b040ULL || rel >= 0x14b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b0c0 size=288 callers=0 calls=0
   ref: !(msg->findInt32("size", &size))
   ref: generation
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findInt32("generation", &generation))
   ref: NuPlayerDecoderPassThrough
*/
void NuPlayerDecoderPassThrough_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b0c0ULL || rel >= 0x14b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b1e0 size=432 callers=0 calls=0
   ref: NuPlayerDriver Looper
*/
void NuPlayerDriver_Looper(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1e0ULL || rel >= 0x14b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b390 size=192 callers=0 calls=0
*/
void sub_14b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b390ULL || rel >= 0x14b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b450 size=48 callers=0 calls=0
*/
void sub_14b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b450ULL || rel >= 0x14b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b480 size=16 callers=0 calls=0
*/
void sub_14b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b480ULL || rel >= 0x14b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b490 size=32 callers=0 calls=0
*/
void sub_14b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b490ULL || rel >= 0x14b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b4b0 size=176 callers=0 calls=0
*/
void sub_14b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b4b0ULL || rel >= 0x14b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b560 size=176 callers=0 calls=0
*/
void sub_14b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b560ULL || rel >= 0x14b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b610 size=144 callers=0 calls=0
*/
void sub_14b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b610ULL || rel >= 0x14b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b6a0 size=144 callers=0 calls=0
*/
void sub_14b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6a0ULL || rel >= 0x14b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b730 size=16 callers=0 calls=0
*/
void sub_14b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b730ULL || rel >= 0x14b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b740 size=160 callers=0 calls=0
*/
void sub_14b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b740ULL || rel >= 0x14b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b7e0 size=64 callers=0 calls=0
*/
void sub_14b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7e0ULL || rel >= 0x14b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b820 size=240 callers=0 calls=0
*/
void sub_14b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b820ULL || rel >= 0x14b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b910 size=160 callers=0 calls=0
*/
void sub_14b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b910ULL || rel >= 0x14b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b9b0 size=416 callers=0 calls=0
   ref: NuPlayerDriver
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerDriver(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9b0ULL || rel >= 0x14bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014bb50 size=208 callers=0 calls=0
*/
void sub_14bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bb50ULL || rel >= 0x14bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014bc20 size=320 callers=0 calls=0
*/
void sub_14bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bc20ULL || rel >= 0x14bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014bd60 size=224 callers=0 calls=0
*/
void sub_14bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bd60ULL || rel >= 0x14be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014be40 size=48 callers=0 calls=0
*/
void sub_14be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14be40ULL || rel >= 0x14be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014be70 size=304 callers=0 calls=0
*/
void sub_14be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14be70ULL || rel >= 0x14bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014bfa0 size=112 callers=0 calls=0
*/
void sub_14bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfa0ULL || rel >= 0x14c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c010 size=240 callers=0 calls=0
*/
void sub_14c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c010ULL || rel >= 0x14c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c100 size=128 callers=0 calls=0
*/
void sub_14c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c100ULL || rel >= 0x14c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c180 size=384 callers=0 calls=0
   ref: !(mIsAsyncPrepare)
   ref: NuPlayerDriver
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerDriver_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c180ULL || rel >= 0x14c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c300 size=32 callers=0 calls=0
*/
void sub_14c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c300ULL || rel >= 0x14c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c320 size=16 callers=0 calls=0
*/
void sub_14c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c320ULL || rel >= 0x14c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c330 size=352 callers=0 calls=0
*/
void sub_14c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c330ULL || rel >= 0x14c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c490 size=16 callers=0 calls=0
*/
void sub_14c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c490ULL || rel >= 0x14c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c4a0 size=96 callers=0 calls=0
*/
void sub_14c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c4a0ULL || rel >= 0x14c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c500 size=16 callers=0 calls=0
*/
void sub_14c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c500ULL || rel >= 0x14c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c510 size=16 callers=0 calls=0
*/
void sub_14c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c510ULL || rel >= 0x14c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c520 size=176 callers=0 calls=0
*/
void sub_14c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c520ULL || rel >= 0x14c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c5d0 size=224 callers=0 calls=0
   ref: NuPlayerDriver
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerDriver_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5d0ULL || rel >= 0x14c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c6b0 size=112 callers=0 calls=0
   ref: NuPlayerDriver
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(mSetSurfaceInProgress)
*/
void NuPlayerDriver_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6b0ULL || rel >= 0x14c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c720 size=64 callers=0 calls=0
*/
void sub_14c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c720ULL || rel >= 0x14c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c760 size=128 callers=0 calls=0
*/
void sub_14c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c760ULL || rel >= 0x14c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c7e0 size=48 callers=0 calls=0
*/
void sub_14c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7e0ULL || rel >= 0x14c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c810 size=112 callers=0 calls=0
*/
void sub_14c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c810ULL || rel >= 0x14c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c880 size=256 callers=0 calls=0
   ref: NuPlayerDriver
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerDriver_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c880ULL || rel >= 0x14c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c980 size=576 callers=0 calls=0
   ref: !(mState == STATE_RESET_IN_PROGRESS || mState == STATE_IDLE)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: NuPlayerDriver
*/
void NuPlayerDriver_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c980ULL || rel >= 0x14cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014cbc0 size=64 callers=0 calls=0
*/
void sub_14cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cbc0ULL || rel >= 0x14cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014cc00 size=16 callers=0 calls=0
*/
void sub_14cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc00ULL || rel >= 0x14cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014cc10 size=16 callers=0 calls=0
*/
void sub_14cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc10ULL || rel >= 0x14cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014cc20 size=416 callers=0 calls=0
*/
void sub_14cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc20ULL || rel >= 0x14cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014cdc0 size=448 callers=0 calls=0
*/
void sub_14cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cdc0ULL || rel >= 0x14cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014cf80 size=176 callers=0 calls=0
*/
void sub_14cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cf80ULL || rel >= 0x14d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d030 size=48 callers=0 calls=0
*/
void sub_14d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d030ULL || rel >= 0x14d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d060 size=16 callers=0 calls=0
*/
void sub_14d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d060ULL || rel >= 0x14d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d070 size=16 callers=0 calls=0
*/
void sub_14d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d070ULL || rel >= 0x14d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d080 size=16 callers=0 calls=0
*/
void sub_14d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d080ULL || rel >= 0x14d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d090 size=208 callers=0 calls=0
   ref: notifyConsumed
   ref: buffer
*/
void notifyConsumed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d090ULL || rel >= 0x14d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d160 size=336 callers=0 calls=0
   ref: NuPlayerRenderer
   ref: finalResult
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerRenderer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d160ULL || rel >= 0x14d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d2b0 size=272 callers=0 calls=0
*/
void sub_14d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d2b0ULL || rel >= 0x14d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d3c0 size=128 callers=0 calls=0
*/
void sub_14d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3c0ULL || rel >= 0x14d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d440 size=64 callers=0 calls=0
*/
void sub_14d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d440ULL || rel >= 0x14d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d480 size=96 callers=0 calls=0
*/
void sub_14d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d480ULL || rel >= 0x14d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d4e0 size=64 callers=0 calls=0
*/
void sub_14d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4e0ULL || rel >= 0x14d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d520 size=64 callers=0 calls=0
*/
void sub_14d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d520ULL || rel >= 0x14d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d560 size=64 callers=0 calls=0
*/
void sub_14d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d560ULL || rel >= 0x14d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d5a0 size=64 callers=0 calls=0
*/
void sub_14d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5a0ULL || rel >= 0x14d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d5e0 size=64 callers=0 calls=0
*/
void sub_14d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5e0ULL || rel >= 0x14d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d620 size=64 callers=0 calls=0
*/
void sub_14d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d620ULL || rel >= 0x14d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d660 size=144 callers=0 calls=0
   ref: frame-rate
*/
void frame_rate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d660ULL || rel >= 0x14d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d6f0 size=256 callers=0 calls=0
*/
void sub_14d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6f0ULL || rel >= 0x14d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d7f0 size=48 callers=0 calls=0
*/
void sub_14d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7f0ULL || rel >= 0x14d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d820 size=208 callers=0 calls=0
*/
void sub_14d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d820ULL || rel >= 0x14d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d8f0 size=224 callers=0 calls=0
*/
void sub_14d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d8f0ULL || rel >= 0x14d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d9d0 size=240 callers=0 calls=0
*/
void sub_14d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d9d0ULL || rel >= 0x14dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014dac0 size=80 callers=0 calls=0
*/
void sub_14dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dac0ULL || rel >= 0x14db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014db10 size=80 callers=0 calls=0
*/
void sub_14db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db10ULL || rel >= 0x14db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014db60 size=64 callers=0 calls=0
*/
void sub_14db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db60ULL || rel >= 0x14dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014dba0 size=64 callers=0 calls=0
*/
void sub_14dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dba0ULL || rel >= 0x14dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014dbe0 size=400 callers=0 calls=0
   ref: NuPlayerRenderer
   ref: format
   ref: !(response->findInt32("offload", &offload))
   ref: has-video
   ref: offload
   ref: offload-only
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerRenderer_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbe0ULL || rel >= 0x14dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014dd70 size=144 callers=0 calls=0
*/
void sub_14dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd70ULL || rel >= 0x14de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014de00 size=2496 callers=0 calls=0
   ref: !(msg->findInt32("flags", (int32_t *)&flags))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(msg->findInt32("offload-only", &offloadOnly))
   ref: frame-rate
   ref: NuPlayerRenderer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerRenderer_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de00ULL || rel >= 0x14e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014e7c0 size=1296 callers=0 calls=0
   ref: NuPlayerRenderer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: !(format->findInt32("sample-rate", &sampleRate))
   ref: bit-rate
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: channel-mask
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: channel-count
*/
void NuPlayerRenderer_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e7c0ULL || rel >= 0x14ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014ecd0 size=112 callers=0 calls=0
*/
void sub_14ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ecd0ULL || rel >= 0x14ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014ed40 size=1136 callers=0 calls=0
   ref: timeUs
   ref: NuPlayerRenderer
   ref: !(entry->mBuffer->meta()->findInt64("timeUs", &mediaTimeUs))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerRenderer_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ed40ULL || rel >= 0x14f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f1b0 size=208 callers=0 calls=0
   ref: generation
*/
void generation_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1b0ULL || rel >= 0x14f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f280 size=1248 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
   ref: timeUs
   ref: NuPlayerRenderer
   ref: !(entry->mBuffer->meta()->findInt64("timeUs", &realTimeUs))
   ref: !(entry->mBuffer->meta()->findInt64("timeUs", &mediaTimeUs))
   ref: render
   ref: timestampNs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libmediaplayer
*/
void NuPlayerRenderer_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f280ULL || rel >= 0x14f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

