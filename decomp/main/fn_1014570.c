/* main functions 01014570..010282f0 (130 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01014570 size=16 callers=1 calls=0
*/
void sub_1014570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014570ULL || rel >= 0x1014580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014580 size=224 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_refusal_for_regulation_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_refusal_for_regulation_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014580ULL || rel >= 0x1014660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014660 size=80 callers=0 calls=0
*/
void sub_1014660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014660ULL || rel >= 0x10146b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010146b0 size=32 callers=1 calls=0
*/
void sub_10146b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10146b0ULL || rel >= 0x10146d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010146d0 size=16 callers=0 calls=0
*/
void sub_10146d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10146d0ULL || rel >= 0x10146e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010146e0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_10146e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10146e0ULL || rel >= 0x1014750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014750 size=16 callers=0 calls=0
*/
void sub_1014750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014750ULL || rel >= 0x1014760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014760 size=32 callers=0 calls=0
*/
void sub_1014760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014760ULL || rel >= 0x1014780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014780 size=16 callers=0 calls=0
*/
void sub_1014780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014780ULL || rel >= 0x1014790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014790 size=16 callers=0 calls=0
*/
void sub_1014790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014790ULL || rel >= 0x10147a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010147a0 size=16 callers=0 calls=0
*/
void sub_10147a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10147a0ULL || rel >= 0x10147b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010147b0 size=32 callers=0 calls=0
*/
void sub_10147b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10147b0ULL || rel >= 0x10147d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010147d0 size=16 callers=0 calls=0
*/
void sub_10147d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10147d0ULL || rel >= 0x10147e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010147e0 size=16 callers=0 calls=0
*/
void sub_10147e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10147e0ULL || rel >= 0x10147f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010147f0 size=16 callers=0 calls=0
*/
void sub_10147f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10147f0ULL || rel >= 0x1014800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014800 size=256 callers=0 calls=9
   calls: network_bgm_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
   ref: bgm.proto
*/
void network_bgm(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014800ULL || rel >= 0x1014900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014900 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
   ref: bgm.proto
*/
void network_bgm_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014900ULL || rel >= 0x1014a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014a10 size=80 callers=0 calls=0
*/
void sub_1014a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014a10ULL || rel >= 0x1014a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014a60 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_bgm_2, sub_6fff50, sub_7007d0
*/
void sub_1014a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014a60ULL || rel >= 0x1014af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014af0 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1014af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014af0ULL || rel >= 0x1014b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014b90 size=128 callers=0 calls=2
   calls: gflnet3_generated_message_util, sub_75fa00
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_bgm_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014b90ULL || rel >= 0x1014c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014c10 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1014c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014c10ULL || rel >= 0x1014cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014cb0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1014cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014cb0ULL || rel >= 0x1014d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014d50 size=16 callers=0 calls=0
*/
void sub_1014d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014d50ULL || rel >= 0x1014d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014d60 size=64 callers=3 calls=1
   calls: network_bgm_2
*/
void sub_1014d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014d60ULL || rel >= 0x1014da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014da0 size=192 callers=0 calls=4
   calls: sub_1014e60, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_1014da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014da0ULL || rel >= 0x1014e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014e60 size=32 callers=1 calls=0
*/
void sub_1014e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014e60ULL || rel >= 0x1014e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014e80 size=64 callers=0 calls=0
*/
void sub_1014e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014e80ULL || rel >= 0x1014ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01014ec0 size=512 callers=1 calls=5
   calls: sub_6f6640, sub_70c190, sub_70c480, sub_713480, sub_714c90
*/
void sub_1014ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1014ec0ULL || rel >= 0x10150c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010150c0 size=112 callers=0 calls=1
   calls: gflnet3_wire_format_lite_4
*/
void sub_10150c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10150c0ULL || rel >= 0x1015130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015130 size=144 callers=0 calls=1
   calls: sub_70d0d0
*/
void sub_1015130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015130ULL || rel >= 0x10151c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010151c0 size=192 callers=1 calls=1
   calls: sub_70d000
*/
void sub_10151c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10151c0ULL || rel >= 0x1015280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015280 size=288 callers=0 calls=3
   calls: gflnet3_generated_message_util, network_bgm_2, sub_75fa00
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_bgm_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015280ULL || rel >= 0x10153a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010153a0 size=80 callers=0 calls=0
*/
void sub_10153a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10153a0ULL || rel >= 0x10153f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010153f0 size=128 callers=1 calls=1
   calls: sub_75fa00
*/
void sub_10153f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10153f0ULL || rel >= 0x1015470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015470 size=16 callers=0 calls=0
*/
void sub_1015470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015470ULL || rel >= 0x1015480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015480 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1015480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015480ULL || rel >= 0x10154f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010154f0 size=16 callers=0 calls=0
*/
void sub_10154f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10154f0ULL || rel >= 0x1015500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015500 size=32 callers=0 calls=0
*/
void sub_1015500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015500ULL || rel >= 0x1015520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015520 size=16 callers=0 calls=0
*/
void sub_1015520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015520ULL || rel >= 0x1015530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015530 size=16 callers=0 calls=0
*/
void sub_1015530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015530ULL || rel >= 0x1015540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015540 size=16 callers=0 calls=0
*/
void sub_1015540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015540ULL || rel >= 0x1015550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015550 size=384 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: empty.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_empty(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015550ULL || rel >= 0x10156d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010156d0 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_empty_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10156d0ULL || rel >= 0x1015770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015770 size=80 callers=0 calls=0
*/
void sub_1015770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015770ULL || rel >= 0x10157c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010157c0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_empty_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10157c0ULL || rel >= 0x10158e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010158e0 size=32 callers=7 calls=0
*/
void sub_10158e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10158e0ULL || rel >= 0x1015900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015900 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_empty_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015900ULL || rel >= 0x1015930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015930 size=96 callers=3 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1015930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015930ULL || rel >= 0x1015990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015990 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1015990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015990ULL || rel >= 0x10159f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010159f0 size=16 callers=0 calls=0
*/
void sub_10159f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10159f0ULL || rel >= 0x1015a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015a00 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_empty_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015a00ULL || rel >= 0x1015ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015ad0 size=96 callers=0 calls=2
   calls: sub_1015b30, sub_c70
*/
void sub_1015ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015ad0ULL || rel >= 0x1015b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015b30 size=32 callers=1 calls=0
*/
void sub_1015b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015b30ULL || rel >= 0x1015b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015b50 size=16 callers=0 calls=0
*/
void sub_1015b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015b50ULL || rel >= 0x1015b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015b60 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_1015b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015b60ULL || rel >= 0x1015c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015c00 size=16 callers=0 calls=0
*/
void sub_1015c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015c00ULL || rel >= 0x1015c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015c10 size=16 callers=0 calls=0
*/
void sub_1015c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015c10ULL || rel >= 0x1015c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015c20 size=16 callers=1 calls=0
*/
void sub_1015c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015c20ULL || rel >= 0x1015c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015c30 size=352 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_empty_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015c30ULL || rel >= 0x1015d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015d90 size=80 callers=0 calls=0
*/
void sub_1015d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015d90ULL || rel >= 0x1015de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015de0 size=32 callers=1 calls=0
*/
void sub_1015de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015de0ULL || rel >= 0x1015e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015e00 size=16 callers=0 calls=0
*/
void sub_1015e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015e00ULL || rel >= 0x1015e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015e10 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1015e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015e10ULL || rel >= 0x1015e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015e80 size=16 callers=0 calls=0
*/
void sub_1015e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015e80ULL || rel >= 0x1015e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015e90 size=32 callers=0 calls=0
*/
void sub_1015e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015e90ULL || rel >= 0x1015eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015eb0 size=16 callers=0 calls=0
*/
void sub_1015eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015eb0ULL || rel >= 0x1015ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015ec0 size=16 callers=0 calls=0
*/
void sub_1015ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015ec0ULL || rel >= 0x1015ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015ed0 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_empty_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015ed0ULL || rel >= 0x1015f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01015f70 size=384 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: will_left_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_will_left_async(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1015f70ULL || rel >= 0x10160f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010160f0 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: will_left_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_will_left_async_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10160f0ULL || rel >= 0x1016190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016190 size=80 callers=0 calls=0
*/
void sub_1016190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016190ULL || rel >= 0x10161e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010161e0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: will_left_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_will_left_async_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10161e0ULL || rel >= 0x1016300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016300 size=32 callers=2 calls=0
*/
void sub_1016300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016300ULL || rel >= 0x1016320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016320 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_will_left_async_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016320ULL || rel >= 0x1016350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016350 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1016350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016350ULL || rel >= 0x10163b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010163b0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_10163b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10163b0ULL || rel >= 0x1016410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016410 size=16 callers=0 calls=0
*/
void sub_1016410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016410ULL || rel >= 0x1016420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016420 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: will_left_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_will_left_async_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016420ULL || rel >= 0x10164f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010164f0 size=96 callers=0 calls=2
   calls: sub_1016550, sub_c70
*/
void sub_10164f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10164f0ULL || rel >= 0x1016550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016550 size=32 callers=1 calls=0
*/
void sub_1016550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016550ULL || rel >= 0x1016570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016570 size=16 callers=0 calls=0
*/
void sub_1016570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016570ULL || rel >= 0x1016580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016580 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_1016580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016580ULL || rel >= 0x1016620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016620 size=16 callers=0 calls=0
*/
void sub_1016620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016620ULL || rel >= 0x1016630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016630 size=16 callers=0 calls=0
*/
void sub_1016630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016630ULL || rel >= 0x1016640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016640 size=16 callers=1 calls=0
*/
void sub_1016640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016640ULL || rel >= 0x1016650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016650 size=352 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: will_left_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_will_left_async_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016650ULL || rel >= 0x10167b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010167b0 size=80 callers=0 calls=0
*/
void sub_10167b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10167b0ULL || rel >= 0x1016800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016800 size=16 callers=0 calls=0
*/
void sub_1016800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016800ULL || rel >= 0x1016810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016810 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1016810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016810ULL || rel >= 0x1016880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016880 size=16 callers=0 calls=0
*/
void sub_1016880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016880ULL || rel >= 0x1016890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016890 size=32 callers=0 calls=0
*/
void sub_1016890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016890ULL || rel >= 0x10168b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010168b0 size=16 callers=0 calls=0
*/
void sub_10168b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10168b0ULL || rel >= 0x10168c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010168c0 size=16 callers=0 calls=0
*/
void sub_10168c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10168c0ULL || rel >= 0x10168d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010168d0 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: will_left_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_will_left_async_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10168d0ULL || rel >= 0x1016970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016970 size=400 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
   ref: CHECK failed: file != NULL: 
   ref: player_ready_async.proto
*/
void network_player_ready_async(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016970ULL || rel >= 0x1016b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016b00 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
   ref: player_ready_async.proto
*/
void network_player_ready_async_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016b00ULL || rel >= 0x1016ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016ba0 size=80 callers=0 calls=0
*/
void sub_1016ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016ba0ULL || rel >= 0x1016bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016bf0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
   ref: player_ready_async.proto
*/
void network_player_ready_async_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016bf0ULL || rel >= 0x1016d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016d10 size=32 callers=4 calls=0
*/
void sub_1016d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016d10ULL || rel >= 0x1016d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016d30 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_player_ready_async_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016d30ULL || rel >= 0x1016d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016d60 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1016d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016d60ULL || rel >= 0x1016dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016dc0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1016dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016dc0ULL || rel >= 0x1016e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016e20 size=16 callers=0 calls=0
*/
void sub_1016e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016e20ULL || rel >= 0x1016e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016e30 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
   ref: player_ready_async.proto
*/
void network_player_ready_async_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016e30ULL || rel >= 0x1016f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016f00 size=96 callers=0 calls=2
   calls: sub_1016f60, sub_c70
*/
void sub_1016f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016f00ULL || rel >= 0x1016f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016f60 size=32 callers=1 calls=0
*/
void sub_1016f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016f60ULL || rel >= 0x1016f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016f80 size=16 callers=0 calls=0
*/
void sub_1016f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016f80ULL || rel >= 0x1016f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01016f90 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_1016f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1016f90ULL || rel >= 0x1017030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017030 size=16 callers=0 calls=0
*/
void sub_1017030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017030ULL || rel >= 0x1017040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017040 size=16 callers=0 calls=0
*/
void sub_1017040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017040ULL || rel >= 0x1017050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017050 size=16 callers=1 calls=0
*/
void sub_1017050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017050ULL || rel >= 0x1017060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017060 size=352 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
   ref: player_ready_async.proto
*/
void network_player_ready_async_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017060ULL || rel >= 0x10171c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010171c0 size=80 callers=0 calls=0
*/
void sub_10171c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10171c0ULL || rel >= 0x1017210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017210 size=32 callers=1 calls=0
*/
void sub_1017210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017210ULL || rel >= 0x1017230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017230 size=16 callers=0 calls=0
*/
void sub_1017230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017230ULL || rel >= 0x1017240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017240 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1017240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017240ULL || rel >= 0x10172b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010172b0 size=16 callers=0 calls=0
*/
void sub_10172b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10172b0ULL || rel >= 0x10172c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010172c0 size=32 callers=0 calls=0
*/
void sub_10172c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10172c0ULL || rel >= 0x10172e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010172e0 size=16 callers=0 calls=0
*/
void sub_10172e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10172e0ULL || rel >= 0x10172f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010172f0 size=16 callers=0 calls=0
*/
void sub_10172f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10172f0ULL || rel >= 0x1017300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017300 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
   ref: player_ready_async.proto
*/
void network_player_ready_async_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017300ULL || rel >= 0x10173a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010173a0 size=368 callers=0 calls=10
   calls: network_nbr_async_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: nbr_async_data_holder.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_nbr_async_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10173a0ULL || rel >= 0x1017510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017510 size=256 callers=3 calls=10
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, network_player_position_async_2, network_player_position_async_5, network_player_ready_async_2, network_player_ready_async_5, network_will_left_async_2, network_will_left_async_5, sub_c70
   ref: nbr_async_data_holder.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_nbr_async_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017510ULL || rel >= 0x1017610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017610 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_1017610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017610ULL || rel >= 0x1017670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017670 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_nbr_async_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_1017670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017670ULL || rel >= 0x1017700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017700 size=32 callers=3 calls=0
*/
void sub_1017700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017700ULL || rel >= 0x1017720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017720 size=512 callers=0 calls=8
   calls: gflnet3_generated_message_util, network_player_position_async_5, network_player_ready_async_5, network_will_left_async_5, sub_1016300, sub_1016d10, sub_1018740, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_nbr_async_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017720ULL || rel >= 0x1017920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017920 size=160 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1017920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017920ULL || rel >= 0x10179c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010179c0 size=48 callers=0 calls=1
   calls: sub_1017920
*/
void sub_10179c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10179c0ULL || rel >= 0x10179f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010179f0 size=80 callers=2 calls=0
*/
void sub_10179f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10179f0ULL || rel >= 0x1017a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017a40 size=16 callers=0 calls=0
*/
void sub_1017a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017a40ULL || rel >= 0x1017a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017a50 size=96 callers=0 calls=2
   calls: sub_1017ab0, sub_c70
*/
void sub_1017a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017a50ULL || rel >= 0x1017ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017ab0 size=32 callers=1 calls=0
*/
void sub_1017ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017ab0ULL || rel >= 0x1017ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017ad0 size=80 callers=0 calls=0
*/
void sub_1017ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017ad0ULL || rel >= 0x1017b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017b20 size=1008 callers=0 calls=12
   calls: sub_1016300, sub_1016580, sub_1016d10, sub_1016f90, sub_1018740, sub_10189d0, sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_c70
*/
void sub_1017b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017b20ULL || rel >= 0x1017f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017f10 size=144 callers=0 calls=1
   calls: sub_714af0
*/
void sub_1017f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017f10ULL || rel >= 0x1017fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01017fa0 size=320 callers=0 calls=0
*/
void sub_1017fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1017fa0ULL || rel >= 0x10180e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010180e0 size=176 callers=0 calls=4
   calls: sub_1016640, sub_1017050, sub_1018ca0, sub_70d000
*/
void sub_10180e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10180e0ULL || rel >= 0x1018190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018190 size=208 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_nbr_async_data_holder_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_nbr_async_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018190ULL || rel >= 0x1018260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018260 size=80 callers=0 calls=0
*/
void sub_1018260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018260ULL || rel >= 0x10182b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010182b0 size=16 callers=0 calls=0
*/
void sub_10182b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10182b0ULL || rel >= 0x10182c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010182c0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_10182c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10182c0ULL || rel >= 0x1018330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018330 size=16 callers=0 calls=0
*/
void sub_1018330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018330ULL || rel >= 0x1018340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018340 size=32 callers=0 calls=0
*/
void sub_1018340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018340ULL || rel >= 0x1018360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018360 size=16 callers=0 calls=0
*/
void sub_1018360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018360ULL || rel >= 0x1018370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018370 size=16 callers=0 calls=0
*/
void sub_1018370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018370ULL || rel >= 0x1018380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018380 size=16 callers=0 calls=0
*/
void sub_1018380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018380ULL || rel >= 0x1018390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018390 size=416 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: player_position_async.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_player_position_async(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018390ULL || rel >= 0x1018530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018530 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: player_position_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_player_position_async_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018530ULL || rel >= 0x10185d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010185d0 size=80 callers=0 calls=0
*/
void sub_10185d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10185d0ULL || rel >= 0x1018620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018620 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: player_position_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_player_position_async_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018620ULL || rel >= 0x1018740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018740 size=32 callers=4 calls=0
*/
void sub_1018740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018740ULL || rel >= 0x1018760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018760 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_player_position_async_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018760ULL || rel >= 0x10187a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010187a0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_10187a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10187a0ULL || rel >= 0x1018800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018800 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1018800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018800ULL || rel >= 0x1018860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018860 size=16 callers=0 calls=0
*/
void sub_1018860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018860ULL || rel >= 0x1018870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018870 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: player_position_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_player_position_async_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018870ULL || rel >= 0x1018940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018940 size=96 callers=0 calls=2
   calls: sub_10189a0, sub_c70
*/
void sub_1018940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018940ULL || rel >= 0x10189a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010189a0 size=32 callers=1 calls=0
*/
void sub_10189a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10189a0ULL || rel >= 0x10189c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010189c0 size=16 callers=0 calls=0
*/
void sub_10189c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10189c0ULL || rel >= 0x10189d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010189d0 size=512 callers=1 calls=4
   calls: sub_70bfa0, sub_70c190, sub_70c480, sub_713480
*/
void sub_10189d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10189d0ULL || rel >= 0x1018bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018bd0 size=80 callers=0 calls=1
   calls: sub_713970
*/
void sub_1018bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018bd0ULL || rel >= 0x1018c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018c20 size=128 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_1018c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018c20ULL || rel >= 0x1018ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018ca0 size=112 callers=1 calls=2
   calls: sub_70d000, sub_70d040
*/
void sub_1018ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018ca0ULL || rel >= 0x1018d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018d10 size=368 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: player_position_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_player_position_async_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018d10ULL || rel >= 0x1018e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018e80 size=80 callers=0 calls=0
*/
void sub_1018e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018e80ULL || rel >= 0x1018ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018ed0 size=80 callers=1 calls=0
*/
void sub_1018ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018ed0ULL || rel >= 0x1018f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018f20 size=16 callers=0 calls=0
*/
void sub_1018f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018f20ULL || rel >= 0x1018f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018f30 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1018f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018f30ULL || rel >= 0x1018fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018fa0 size=16 callers=0 calls=0
*/
void sub_1018fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018fa0ULL || rel >= 0x1018fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018fb0 size=32 callers=0 calls=0
*/
void sub_1018fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018fb0ULL || rel >= 0x1018fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018fd0 size=16 callers=0 calls=0
*/
void sub_1018fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018fd0ULL || rel >= 0x1018fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018fe0 size=16 callers=0 calls=0
*/
void sub_1018fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018fe0ULL || rel >= 0x1018ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01018ff0 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: player_position_async.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buf
*/
void network_player_position_async_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1018ff0ULL || rel >= 0x1019090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01019090 size=704 callers=1 calls=5
   calls: sub_136b520, sub_136b580, sub_136b590, sub_67b990, sub_67bdb0
*/
void sub_1019090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1019090ULL || rel >= 0x1019350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01019350 size=560 callers=1 calls=1
   calls: sub_136b580
*/
void sub_1019350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1019350ULL || rel >= 0x1019580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01019580 size=816 callers=1 calls=2
   calls: sub_1019090, sub_1019350
*/
void sub_1019580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1019580ULL || rel >= 0x10198b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010198b0 size=2944 callers=3 calls=35
   calls: sub_136b520, sub_136b580, sub_136b590, sub_136b5b0, sub_136b5e0, sub_136b690, sub_67b990, sub_67be60, sub_7626f0, sub_762d90, sub_762ff0, sub_763010
   ... +23 more
*/
void sub_10198b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10198b0ULL || rel >= 0x101a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101a430 size=192 callers=0 calls=1
   calls: sub_1049c20
*/
void sub_101a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101a430ULL || rel >= 0x101a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101a4f0 size=192 callers=0 calls=1
   calls: sub_1049c20
*/
void sub_101a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101a4f0ULL || rel >= 0x101a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101a5b0 size=192 callers=0 calls=1
   calls: sub_1049c20
*/
void sub_101a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101a5b0ULL || rel >= 0x101a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101a670 size=192 callers=0 calls=1
   calls: sub_1049c20
*/
void sub_101a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101a670ULL || rel >= 0x101a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101a730 size=192 callers=0 calls=1
   calls: sub_1049c20
*/
void sub_101a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101a730ULL || rel >= 0x101a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101a7f0 size=192 callers=0 calls=1
   calls: sub_1049c20
*/
void sub_101a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101a7f0ULL || rel >= 0x101a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101a8b0 size=336 callers=1 calls=2
   calls: sub_101ab90, sub_1049c20
*/
void sub_101a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101a8b0ULL || rel >= 0x101aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101aa00 size=240 callers=0 calls=0
*/
void sub_101aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101aa00ULL || rel >= 0x101aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101aaf0 size=16 callers=0 calls=0
*/
void sub_101aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101aaf0ULL || rel >= 0x101ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101ab00 size=16 callers=0 calls=0
*/
void sub_101ab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101ab00ULL || rel >= 0x101ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101ab10 size=128 callers=0 calls=0
*/
void sub_101ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101ab10ULL || rel >= 0x101ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101ab90 size=240 callers=1 calls=2
   calls: sub_5e2350, sub_65d700
*/
void sub_101ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101ab90ULL || rel >= 0x101ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101ac80 size=1200 callers=0 calls=12
   calls: sub_101b2d0, sub_104a180, sub_104a190, sub_104a480, sub_104a550, sub_104a670, sub_104a730, sub_104a7a0, sub_104a840, sub_104a850, sub_104ab60, sub_104ad10
*/
void sub_101ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101ac80ULL || rel >= 0x101b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b130 size=336 callers=0 calls=0
*/
void sub_101b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b130ULL || rel >= 0x101b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b280 size=16 callers=0 calls=0
*/
void sub_101b280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b280ULL || rel >= 0x101b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b290 size=16 callers=0 calls=0
*/
void sub_101b290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b290ULL || rel >= 0x101b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b2a0 size=16 callers=0 calls=0
*/
void sub_101b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b2a0ULL || rel >= 0x101b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b2b0 size=16 callers=0 calls=0
*/
void sub_101b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b2b0ULL || rel >= 0x101b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b2c0 size=16 callers=0 calls=0
*/
void sub_101b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b2c0ULL || rel >= 0x101b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b2d0 size=640 callers=1 calls=1
   calls: sub_101b550
*/
void sub_101b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b2d0ULL || rel >= 0x101b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b550 size=432 callers=1 calls=2
   calls: sub_5a7450, sub_614c50
*/
void sub_101b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b550ULL || rel >= 0x101b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b700 size=128 callers=0 calls=0
*/
void sub_101b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b700ULL || rel >= 0x101b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b780 size=64 callers=4 calls=0
*/
void sub_101b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b780ULL || rel >= 0x101b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b7c0 size=16 callers=1 calls=0
*/
void sub_101b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b7c0ULL || rel >= 0x101b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b7d0 size=64 callers=4 calls=0
*/
void sub_101b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b7d0ULL || rel >= 0x101b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b810 size=176 callers=1 calls=1
   calls: sub_65c940
*/
void sub_101b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b810ULL || rel >= 0x101b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b8c0 size=288 callers=2 calls=0
*/
void sub_101b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b8c0ULL || rel >= 0x101b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101b9e0 size=464 callers=1 calls=1
   calls: sub_101c3e0
*/
void sub_101b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b9e0ULL || rel >= 0x101bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101bbb0 size=400 callers=1 calls=2
   calls: sub_101c530, sub_138d960
*/
void sub_101bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101bbb0ULL || rel >= 0x101bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101bd40 size=144 callers=0 calls=1
   calls: sub_138da00
*/
void sub_101bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101bd40ULL || rel >= 0x101bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101bdd0 size=640 callers=1 calls=4
   calls: sub_101c660, sub_106f3b0, sub_106f3d0, sub_65c940
*/
void sub_101bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101bdd0ULL || rel >= 0x101c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c050 size=144 callers=0 calls=0
*/
void sub_101c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c050ULL || rel >= 0x101c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c0e0 size=144 callers=0 calls=0
*/
void sub_101c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c0e0ULL || rel >= 0x101c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c170 size=16 callers=0 calls=0
*/
void sub_101c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c170ULL || rel >= 0x101c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c180 size=144 callers=0 calls=0
*/
void sub_101c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c180ULL || rel >= 0x101c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c210 size=144 callers=0 calls=0
*/
void sub_101c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c210ULL || rel >= 0x101c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c2a0 size=16 callers=0 calls=0
*/
void sub_101c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c2a0ULL || rel >= 0x101c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c2b0 size=16 callers=0 calls=0
*/
void sub_101c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c2b0ULL || rel >= 0x101c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c2c0 size=144 callers=0 calls=0
*/
void sub_101c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c2c0ULL || rel >= 0x101c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c350 size=144 callers=0 calls=0
*/
void sub_101c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c350ULL || rel >= 0x101c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c3e0 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_101c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c3e0ULL || rel >= 0x101c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c530 size=304 callers=4 calls=1
   calls: sub_5e2350
*/
void sub_101c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c530ULL || rel >= 0x101c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c660 size=240 callers=1 calls=0
*/
void sub_101c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c660ULL || rel >= 0x101c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101c750 size=1504 callers=2 calls=10
   calls: sub_10200d0, sub_1021720, sub_136b530, sub_136b580, sub_136b590, sub_136b770, sub_5e2350, sub_6be8b0, sub_76f7d0, sub_f9ee70
*/
void sub_101c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c750ULL || rel >= 0x101cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101cd30 size=176 callers=0 calls=2
   calls: sub_101cde0, sub_1021880
*/
void sub_101cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101cd30ULL || rel >= 0x101cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101cde0 size=304 callers=8 calls=0
*/
void sub_101cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101cde0ULL || rel >= 0x101cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101cf10 size=192 callers=0 calls=2
   calls: sub_101cde0, sub_1021880
*/
void sub_101cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101cf10ULL || rel >= 0x101cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101cfd0 size=176 callers=0 calls=2
   calls: sub_101cde0, sub_1021880
*/
void sub_101cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101cfd0ULL || rel >= 0x101d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d080 size=176 callers=0 calls=2
   calls: sub_101cde0, sub_1021880
*/
void sub_101d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d080ULL || rel >= 0x101d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d130 size=176 callers=0 calls=2
   calls: sub_101cde0, sub_1021880
*/
void sub_101d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d130ULL || rel >= 0x101d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d1e0 size=192 callers=0 calls=2
   calls: sub_101cde0, sub_1021880
*/
void sub_101d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d1e0ULL || rel >= 0x101d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d2a0 size=176 callers=0 calls=2
   calls: sub_101cde0, sub_1021880
*/
void sub_101d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d2a0ULL || rel >= 0x101d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d350 size=176 callers=0 calls=2
   calls: sub_101cde0, sub_1021880
*/
void sub_101d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d350ULL || rel >= 0x101d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d400 size=144 callers=1 calls=2
   calls: sub_101d490, sub_1104b60
*/
void sub_101d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d400ULL || rel >= 0x101d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d490 size=400 callers=1 calls=6
   calls: sub_101dce0, sub_1023f60, sub_65da00, sub_65daf0, sub_6f6640, sub_ce0
*/
void sub_101d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d490ULL || rel >= 0x101d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d620 size=80 callers=2 calls=1
   calls: sub_1104b30
*/
void sub_101d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d620ULL || rel >= 0x101d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d670 size=32 callers=3 calls=0
*/
void sub_101d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d670ULL || rel >= 0x101d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d690 size=144 callers=3 calls=0
*/
void sub_101d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d690ULL || rel >= 0x101d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d720 size=192 callers=4 calls=0
*/
void sub_101d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d720ULL || rel >= 0x101d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d7e0 size=320 callers=4 calls=0
*/
void sub_101d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d7e0ULL || rel >= 0x101d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101d920 size=352 callers=2 calls=0
*/
void sub_101d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d920ULL || rel >= 0x101da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101da80 size=48 callers=2 calls=1
   calls: sub_101dab0
*/
void sub_101da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101da80ULL || rel >= 0x101dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101dab0 size=560 callers=1 calls=0
*/
void sub_101dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101dab0ULL || rel >= 0x101dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101dce0 size=208 callers=1 calls=4
   calls: sub_10201c0, sub_10202d0, sub_65da00, sub_65daf0
*/
void sub_101dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101dce0ULL || rel >= 0x101ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101ddb0 size=416 callers=9 calls=7
   calls: sub_101df50, sub_10247a0, sub_65da00, sub_65daf0, sub_6f6640, sub_c70, sub_ce0
*/
void sub_101ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101ddb0ULL || rel >= 0x101df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101df50 size=208 callers=1 calls=4
   calls: sub_10201c0, sub_1020570, sub_65da00, sub_65daf0
*/
void sub_101df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101df50ULL || rel >= 0x101e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101e020 size=416 callers=11 calls=6
   calls: sub_101e1c0, sub_1024fe0, sub_65da00, sub_65daf0, sub_6f6640, sub_ce0
*/
void sub_101e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e020ULL || rel >= 0x101e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101e1c0 size=208 callers=2 calls=4
   calls: sub_10201c0, sub_10206a0, sub_65da00, sub_65daf0
*/
void sub_101e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e1c0ULL || rel >= 0x101e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101e290 size=400 callers=4 calls=6
   calls: sub_101e1c0, sub_1024fe0, sub_65da00, sub_65daf0, sub_6f6640, sub_ce0
*/
void sub_101e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e290ULL || rel >= 0x101e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101e420 size=416 callers=17 calls=7
   calls: sub_101e5c0, sub_1025820, sub_65da00, sub_65daf0, sub_6f6640, sub_c70, sub_ce0
*/
void sub_101e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e420ULL || rel >= 0x101e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101e5c0 size=208 callers=1 calls=4
   calls: sub_10201c0, sub_10207d0, sub_65da00, sub_65daf0
*/
void sub_101e5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e5c0ULL || rel >= 0x101e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101e690 size=560 callers=1 calls=7
   calls: sub_101e8c0, sub_1026060, sub_65da00, sub_65daf0, sub_6f6640, sub_c70, sub_ce0
*/
void sub_101e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e690ULL || rel >= 0x101e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101e8c0 size=208 callers=1 calls=4
   calls: sub_10201c0, sub_1020900, sub_65da00, sub_65daf0
*/
void sub_101e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e8c0ULL || rel >= 0x101e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101e990 size=464 callers=1 calls=8
   calls: sub_101eb60, sub_10268a0, sub_65da00, sub_65daf0, sub_6f6640, sub_76f7d0, sub_c70, sub_ce0
*/
void sub_101e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e990ULL || rel >= 0x101eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101eb60 size=208 callers=1 calls=4
   calls: sub_10201c0, sub_1020a30, sub_65da00, sub_65daf0
*/
void sub_101eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101eb60ULL || rel >= 0x101ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101ec30 size=864 callers=1 calls=7
   calls: sub_101ef90, sub_10270e0, sub_65da00, sub_65daf0, sub_6f6640, sub_c70, sub_ce0
*/
void sub_101ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101ec30ULL || rel >= 0x101ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101ef90 size=208 callers=1 calls=4
   calls: sub_10201c0, sub_1020b60, sub_65da00, sub_65daf0
*/
void sub_101ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101ef90ULL || rel >= 0x101f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f060 size=400 callers=1 calls=6
   calls: sub_101f1f0, sub_1027920, sub_65da00, sub_65daf0, sub_6f6640, sub_ce0
*/
void sub_101f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f060ULL || rel >= 0x101f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f1f0 size=208 callers=1 calls=4
   calls: sub_10201c0, sub_1020c90, sub_65da00, sub_65daf0
*/
void sub_101f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f1f0ULL || rel >= 0x101f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f2c0 size=48 callers=0 calls=0
*/
void sub_101f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f2c0ULL || rel >= 0x101f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f2f0 size=320 callers=0 calls=1
   calls: sub_1020db0
*/
void sub_101f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f2f0ULL || rel >= 0x101f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f430 size=272 callers=0 calls=1
   calls: sub_1020fb0
*/
void sub_101f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f430ULL || rel >= 0x101f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f540 size=336 callers=0 calls=1
   calls: sub_1021170
*/
void sub_101f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f540ULL || rel >= 0x101f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f690 size=112 callers=0 calls=0
*/
void sub_101f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f690ULL || rel >= 0x101f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f700 size=160 callers=0 calls=0
*/
void sub_101f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f700ULL || rel >= 0x101f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f7a0 size=320 callers=0 calls=0
*/
void sub_101f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f7a0ULL || rel >= 0x101f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f8e0 size=80 callers=0 calls=0
*/
void sub_101f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f8e0ULL || rel >= 0x101f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101f930 size=240 callers=0 calls=0
*/
void sub_101f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f930ULL || rel >= 0x101fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fa20 size=16 callers=0 calls=0
*/
void sub_101fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fa20ULL || rel >= 0x101fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fa30 size=16 callers=0 calls=0
*/
void sub_101fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fa30ULL || rel >= 0x101fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fa40 size=16 callers=0 calls=0
*/
void sub_101fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fa40ULL || rel >= 0x101fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fa50 size=16 callers=0 calls=0
*/
void sub_101fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fa50ULL || rel >= 0x101fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fa60 size=16 callers=0 calls=0
*/
void sub_101fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fa60ULL || rel >= 0x101fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fa70 size=16 callers=0 calls=0
*/
void sub_101fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fa70ULL || rel >= 0x101fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fa80 size=16 callers=0 calls=0
*/
void sub_101fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fa80ULL || rel >= 0x101fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fa90 size=16 callers=0 calls=0
*/
void sub_101fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fa90ULL || rel >= 0x101faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101faa0 size=16 callers=0 calls=0
*/
void sub_101faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101faa0ULL || rel >= 0x101fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fab0 size=16 callers=0 calls=0
*/
void sub_101fab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fab0ULL || rel >= 0x101fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fac0 size=160 callers=0 calls=0
*/
void sub_101fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fac0ULL || rel >= 0x101fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fb60 size=752 callers=0 calls=12
   calls: gflnet3_message_lite_2, sub_1021eb0, sub_10241b0, sub_10249f0, sub_1025230, sub_1025a70, sub_10262b0, sub_1026af0, sub_1027330, sub_1027b70, sub_65da00, sub_65daf0
*/
void sub_101fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fb60ULL || rel >= 0x101fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fe50 size=160 callers=0 calls=0
*/
void sub_101fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fe50ULL || rel >= 0x101fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101fef0 size=160 callers=0 calls=0
*/
void sub_101fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101fef0ULL || rel >= 0x101ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0101ff90 size=160 callers=0 calls=0
*/
void sub_101ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101ff90ULL || rel >= 0x1020030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01020030 size=160 callers=0 calls=0
*/
void sub_1020030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1020030ULL || rel >= 0x10200d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010200d0 size=240 callers=1 calls=1
   calls: sub_1021420
*/
void sub_10200d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10200d0ULL || rel >= 0x10201c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010201c0 size=272 callers=8 calls=3
   calls: sub_1020400, sub_65da00, sub_65daf0
*/
void sub_10201c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10201c0ULL || rel >= 0x10202d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010202d0 size=304 callers=1 calls=7
   calls: sub_1021eb0, sub_1022380, sub_1023f60, sub_10246b0, sub_65da00, sub_65daf0, sub_c70
*/
void sub_10202d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10202d0ULL || rel >= 0x1020400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01020400 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_1020400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1020400ULL || rel >= 0x1020570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01020570 size=304 callers=1 calls=7
   calls: sub_1021eb0, sub_1022380, sub_10247a0, sub_1024ef0, sub_65da00, sub_65daf0, sub_c70
*/
void sub_1020570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1020570ULL || rel >= 0x10206a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010206a0 size=304 callers=1 calls=7
   calls: sub_1021eb0, sub_1022380, sub_1024fe0, sub_1025730, sub_65da00, sub_65daf0, sub_c70
*/
void sub_10206a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10206a0ULL || rel >= 0x10207d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010207d0 size=304 callers=1 calls=7
   calls: sub_1021eb0, sub_1022380, sub_1025820, sub_1025f70, sub_65da00, sub_65daf0, sub_c70
*/
void sub_10207d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10207d0ULL || rel >= 0x1020900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01020900 size=304 callers=1 calls=7
   calls: sub_1021eb0, sub_1022380, sub_1026060, sub_10267b0, sub_65da00, sub_65daf0, sub_c70
*/
void sub_1020900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1020900ULL || rel >= 0x1020a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01020a30 size=304 callers=1 calls=7
   calls: sub_1021eb0, sub_1022380, sub_10268a0, sub_1026ff0, sub_65da00, sub_65daf0, sub_c70
*/
void sub_1020a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1020a30ULL || rel >= 0x1020b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01020b60 size=304 callers=1 calls=7
   calls: sub_1021eb0, sub_1022380, sub_10270e0, sub_1027830, sub_65da00, sub_65daf0, sub_c70
*/
void sub_1020b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1020b60ULL || rel >= 0x1020c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01020c90 size=288 callers=1 calls=7
   calls: sub_1021eb0, sub_1022380, sub_1027920, sub_1028070, sub_65da00, sub_65daf0, sub_c70
*/
void sub_1020c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1020c90ULL || rel >= 0x1020db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01020db0 size=512 callers=1 calls=0
*/
void sub_1020db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1020db0ULL || rel >= 0x1020fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01020fb0 size=448 callers=1 calls=0
*/
void sub_1020fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1020fb0ULL || rel >= 0x1021170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021170 size=560 callers=1 calls=0
*/
void sub_1021170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021170ULL || rel >= 0x10213a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010213a0 size=128 callers=0 calls=0
*/
void sub_10213a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10213a0ULL || rel >= 0x1021420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021420 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1021420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021420ULL || rel >= 0x1021490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021490 size=80 callers=0 calls=0
*/
void sub_1021490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021490ULL || rel >= 0x10214e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010214e0 size=80 callers=0 calls=0
*/
void sub_10214e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10214e0ULL || rel >= 0x1021530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021530 size=80 callers=0 calls=0
*/
void sub_1021530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021530ULL || rel >= 0x1021580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021580 size=80 callers=0 calls=0
*/
void sub_1021580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021580ULL || rel >= 0x10215d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010215d0 size=80 callers=0 calls=0
*/
void sub_10215d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10215d0ULL || rel >= 0x1021620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021620 size=80 callers=0 calls=0
*/
void sub_1021620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021620ULL || rel >= 0x1021670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021670 size=80 callers=0 calls=0
*/
void sub_1021670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021670ULL || rel >= 0x10216c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010216c0 size=80 callers=0 calls=0
*/
void sub_10216c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10216c0ULL || rel >= 0x1021710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021710 size=16 callers=0 calls=0
*/
void sub_1021710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021710ULL || rel >= 0x1021720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021720 size=352 callers=1 calls=2
   calls: sub_104dfb0, sub_6aea40
*/
void sub_1021720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021720ULL || rel >= 0x1021880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021880 size=208 callers=8 calls=2
   calls: sub_104dfd0, sub_6aeb70
*/
void sub_1021880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021880ULL || rel >= 0x1021950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021950 size=16 callers=0 calls=0
*/
void sub_1021950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021950ULL || rel >= 0x1021960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021960 size=16 callers=0 calls=0
*/
void sub_1021960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021960ULL || rel >= 0x1021970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021970 size=16 callers=0 calls=0
*/
void sub_1021970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021970ULL || rel >= 0x1021980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021980 size=240 callers=0 calls=0
*/
void sub_1021980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021980ULL || rel >= 0x1021a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021a70 size=16 callers=0 calls=0
*/
void sub_1021a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021a70ULL || rel >= 0x1021a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021a80 size=16 callers=0 calls=0
*/
void sub_1021a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021a80ULL || rel >= 0x1021a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021a90 size=128 callers=0 calls=0
*/
void sub_1021a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021a90ULL || rel >= 0x1021b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021b10 size=368 callers=0 calls=10
   calls: network_nesthole_async_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
   ref: nesthole_async_data_holder.proto
*/
void network_nesthole_async_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021b10ULL || rel >= 0x1021c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021c80 size=320 callers=3 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, network_nesthole_command_2, sub_10241b0, sub_10249f0, sub_1025230, sub_1025a70, sub_10262b0, sub_1026af0, sub_1027330, sub_1027b70
   ... +1 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
   ref: nesthole_async_data_holder.proto
*/
void network_nesthole_async_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021c80ULL || rel >= 0x1021dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021dc0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_1021dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021dc0ULL || rel >= 0x1021e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021e20 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_nesthole_async_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_1021e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021e20ULL || rel >= 0x1021eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021eb0 size=32 callers=9 calls=0
*/
void sub_1021eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021eb0ULL || rel >= 0x1021ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01021ed0 size=976 callers=0 calls=19
   calls: gflnet3_generated_message_util, sub_1022380, sub_1023f60, sub_10241b0, sub_10247a0, sub_10249f0, sub_1024fe0, sub_1025230, sub_1025820, sub_1025a70, sub_1026060, sub_10262b0
   ... +7 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_async_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1021ed0ULL || rel >= 0x10222a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010222a0 size=112 callers=0 calls=3
   calls: sub_1022380, sub_70e0c0, sub_ce0
*/
void sub_10222a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10222a0ULL || rel >= 0x1022310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01022310 size=112 callers=0 calls=3
   calls: sub_1022380, sub_70e0c0, sub_ce0
*/
void sub_1022310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1022310ULL || rel >= 0x1022380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01022380 size=96 callers=26 calls=0
*/
void sub_1022380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1022380ULL || rel >= 0x10223e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010223e0 size=16 callers=0 calls=0
*/
void sub_10223e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10223e0ULL || rel >= 0x10223f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010223f0 size=96 callers=0 calls=2
   calls: sub_1022450, sub_c70
*/
void sub_10223f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10223f0ULL || rel >= 0x1022450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01022450 size=32 callers=1 calls=0
*/
void sub_1022450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1022450ULL || rel >= 0x1022470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01022470 size=16 callers=0 calls=0
*/
void sub_1022470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1022470ULL || rel >= 0x1022480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01022480 size=2080 callers=0 calls=23
   calls: sub_1022380, sub_1023f60, sub_1024310, sub_10247a0, sub_1024b50, sub_1024fe0, sub_1025390, sub_1025820, sub_1025bd0, sub_1026060, sub_1026410, sub_10268a0
   ... +11 more
*/
void sub_1022480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1022480ULL || rel >= 0x1022ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01022ca0 size=320 callers=0 calls=1
   calls: sub_714af0
*/
void sub_1022ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1022ca0ULL || rel >= 0x1022de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01022de0 size=800 callers=0 calls=0
*/
void sub_1022de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1022de0ULL || rel >= 0x1023100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023100 size=304 callers=0 calls=9
   calls: sub_10244b0, sub_1024cf0, sub_1025530, sub_1025d70, sub_10265b0, sub_1026df0, sub_1027630, sub_1027e70, sub_70d000
*/
void sub_1023100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023100ULL || rel >= 0x1023230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023230 size=208 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_nesthole_async_data_holder_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_async_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023230ULL || rel >= 0x1023300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023300 size=80 callers=0 calls=0
*/
void sub_1023300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023300ULL || rel >= 0x1023350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023350 size=16 callers=0 calls=0
*/
void sub_1023350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023350ULL || rel >= 0x1023360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023360 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1023360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023360ULL || rel >= 0x10233d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010233d0 size=16 callers=0 calls=0
*/
void sub_10233d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10233d0ULL || rel >= 0x10233e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010233e0 size=32 callers=0 calls=0
*/
void sub_10233e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10233e0ULL || rel >= 0x1023400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023400 size=16 callers=0 calls=0
*/
void sub_1023400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023400ULL || rel >= 0x1023410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023410 size=16 callers=0 calls=0
*/
void sub_1023410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023410ULL || rel >= 0x1023420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023420 size=16 callers=0 calls=0
*/
void sub_1023420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023420ULL || rel >= 0x1023430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023430 size=720 callers=0 calls=9
   calls: network_nesthole_command_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: nesthole_command.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023430ULL || rel >= 0x1023700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023700 size=1264 callers=26 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: nesthole_command.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023700ULL || rel >= 0x1023bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023bf0 size=448 callers=0 calls=0
*/
void sub_1023bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023bf0ULL || rel >= 0x1023db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023db0 size=432 callers=0 calls=4
   calls: gflnet3_message_4, network_nesthole_command_2, sub_6fff50, sub_7007d0
*/
void sub_1023db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023db0ULL || rel >= 0x1023f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01023f60 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1023f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023f60ULL || rel >= 0x1024000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024000 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024000ULL || rel >= 0x1024060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024060 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1024060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024060ULL || rel >= 0x1024100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024100 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1024100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024100ULL || rel >= 0x10241a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010241a0 size=16 callers=0 calls=0
*/
void sub_10241a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10241a0ULL || rel >= 0x10241b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010241b0 size=64 callers=3 calls=1
   calls: network_nesthole_command_2
*/
void sub_10241b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10241b0ULL || rel >= 0x10241f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010241f0 size=192 callers=0 calls=4
   calls: sub_10242b0, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_10241f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10241f0ULL || rel >= 0x10242b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010242b0 size=32 callers=1 calls=0
*/
void sub_10242b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10242b0ULL || rel >= 0x10242d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010242d0 size=64 callers=0 calls=0
*/
void sub_10242d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10242d0ULL || rel >= 0x1024310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024310 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_1024310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024310ULL || rel >= 0x1024440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024440 size=48 callers=0 calls=0
*/
void sub_1024440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024440ULL || rel >= 0x1024470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024470 size=64 callers=0 calls=0
*/
void sub_1024470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024470ULL || rel >= 0x10244b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010244b0 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_10244b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10244b0ULL || rel >= 0x1024550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024550 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_nesthole_command_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024550ULL || rel >= 0x1024660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024660 size=80 callers=0 calls=0
*/
void sub_1024660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024660ULL || rel >= 0x10246b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010246b0 size=112 callers=1 calls=0
*/
void sub_10246b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10246b0ULL || rel >= 0x1024720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024720 size=16 callers=0 calls=0
*/
void sub_1024720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024720ULL || rel >= 0x1024730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024730 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1024730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024730ULL || rel >= 0x10247a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010247a0 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_10247a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10247a0ULL || rel >= 0x1024840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024840 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024840ULL || rel >= 0x10248a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010248a0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_10248a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10248a0ULL || rel >= 0x1024940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024940 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1024940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024940ULL || rel >= 0x10249e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010249e0 size=16 callers=0 calls=0
*/
void sub_10249e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10249e0ULL || rel >= 0x10249f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010249f0 size=64 callers=3 calls=1
   calls: network_nesthole_command_2
*/
void sub_10249f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10249f0ULL || rel >= 0x1024a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024a30 size=192 callers=0 calls=4
   calls: sub_1024af0, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_1024a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024a30ULL || rel >= 0x1024af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024af0 size=32 callers=1 calls=0
*/
void sub_1024af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024af0ULL || rel >= 0x1024b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024b10 size=64 callers=0 calls=0
*/
void sub_1024b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024b10ULL || rel >= 0x1024b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024b50 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_1024b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024b50ULL || rel >= 0x1024c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024c80 size=48 callers=0 calls=0
*/
void sub_1024c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024c80ULL || rel >= 0x1024cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024cb0 size=64 callers=0 calls=0
*/
void sub_1024cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024cb0ULL || rel >= 0x1024cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024cf0 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1024cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024cf0ULL || rel >= 0x1024d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024d90 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_nesthole_command_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024d90ULL || rel >= 0x1024ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024ea0 size=80 callers=0 calls=0
*/
void sub_1024ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024ea0ULL || rel >= 0x1024ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024ef0 size=112 callers=1 calls=0
*/
void sub_1024ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024ef0ULL || rel >= 0x1024f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024f60 size=16 callers=0 calls=0
*/
void sub_1024f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024f60ULL || rel >= 0x1024f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024f70 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1024f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024f70ULL || rel >= 0x1024fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01024fe0 size=160 callers=5 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1024fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1024fe0ULL || rel >= 0x1025080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025080 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025080ULL || rel >= 0x10250e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010250e0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_10250e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10250e0ULL || rel >= 0x1025180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025180 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1025180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025180ULL || rel >= 0x1025220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025220 size=16 callers=0 calls=0
*/
void sub_1025220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025220ULL || rel >= 0x1025230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025230 size=64 callers=3 calls=1
   calls: network_nesthole_command_2
*/
void sub_1025230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025230ULL || rel >= 0x1025270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025270 size=192 callers=0 calls=4
   calls: sub_1025330, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_1025270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025270ULL || rel >= 0x1025330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025330 size=32 callers=1 calls=0
*/
void sub_1025330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025330ULL || rel >= 0x1025350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025350 size=64 callers=0 calls=0
*/
void sub_1025350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025350ULL || rel >= 0x1025390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025390 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_1025390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025390ULL || rel >= 0x10254c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010254c0 size=48 callers=0 calls=0
*/
void sub_10254c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10254c0ULL || rel >= 0x10254f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010254f0 size=64 callers=0 calls=0
*/
void sub_10254f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10254f0ULL || rel >= 0x1025530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025530 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1025530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025530ULL || rel >= 0x10255d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010255d0 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_nesthole_command_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10255d0ULL || rel >= 0x10256e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010256e0 size=80 callers=0 calls=0
*/
void sub_10256e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10256e0ULL || rel >= 0x1025730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025730 size=112 callers=1 calls=0
*/
void sub_1025730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025730ULL || rel >= 0x10257a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010257a0 size=16 callers=0 calls=0
*/
void sub_10257a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10257a0ULL || rel >= 0x10257b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010257b0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_10257b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10257b0ULL || rel >= 0x1025820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025820 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1025820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025820ULL || rel >= 0x10258c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010258c0 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10258c0ULL || rel >= 0x1025920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025920 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1025920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025920ULL || rel >= 0x10259c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010259c0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_10259c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10259c0ULL || rel >= 0x1025a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025a60 size=16 callers=0 calls=0
*/
void sub_1025a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025a60ULL || rel >= 0x1025a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025a70 size=64 callers=3 calls=1
   calls: network_nesthole_command_2
*/
void sub_1025a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025a70ULL || rel >= 0x1025ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025ab0 size=192 callers=0 calls=4
   calls: sub_1025b70, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_1025ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025ab0ULL || rel >= 0x1025b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025b70 size=32 callers=1 calls=0
*/
void sub_1025b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025b70ULL || rel >= 0x1025b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025b90 size=64 callers=0 calls=0
*/
void sub_1025b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025b90ULL || rel >= 0x1025bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025bd0 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_1025bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025bd0ULL || rel >= 0x1025d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025d00 size=48 callers=0 calls=0
*/
void sub_1025d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025d00ULL || rel >= 0x1025d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025d30 size=64 callers=0 calls=0
*/
void sub_1025d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025d30ULL || rel >= 0x1025d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025d70 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1025d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025d70ULL || rel >= 0x1025e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025e10 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_nesthole_command_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025e10ULL || rel >= 0x1025f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025f20 size=80 callers=0 calls=0
*/
void sub_1025f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025f20ULL || rel >= 0x1025f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025f70 size=112 callers=1 calls=0
*/
void sub_1025f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025f70ULL || rel >= 0x1025fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025fe0 size=16 callers=0 calls=0
*/
void sub_1025fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025fe0ULL || rel >= 0x1025ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01025ff0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1025ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025ff0ULL || rel >= 0x1026060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026060 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1026060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026060ULL || rel >= 0x1026100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026100 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026100ULL || rel >= 0x1026160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026160 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1026160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026160ULL || rel >= 0x1026200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026200 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1026200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026200ULL || rel >= 0x10262a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010262a0 size=16 callers=0 calls=0
*/
void sub_10262a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10262a0ULL || rel >= 0x10262b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010262b0 size=64 callers=3 calls=1
   calls: network_nesthole_command_2
*/
void sub_10262b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10262b0ULL || rel >= 0x10262f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010262f0 size=192 callers=0 calls=4
   calls: sub_10263b0, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_10262f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10262f0ULL || rel >= 0x10263b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010263b0 size=32 callers=1 calls=0
*/
void sub_10263b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10263b0ULL || rel >= 0x10263d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010263d0 size=64 callers=0 calls=0
*/
void sub_10263d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10263d0ULL || rel >= 0x1026410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026410 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_1026410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026410ULL || rel >= 0x1026540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026540 size=48 callers=0 calls=0
*/
void sub_1026540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026540ULL || rel >= 0x1026570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026570 size=64 callers=0 calls=0
*/
void sub_1026570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026570ULL || rel >= 0x10265b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010265b0 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_10265b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10265b0ULL || rel >= 0x1026650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026650 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_nesthole_command_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026650ULL || rel >= 0x1026760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026760 size=80 callers=0 calls=0
*/
void sub_1026760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026760ULL || rel >= 0x10267b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010267b0 size=112 callers=1 calls=0
*/
void sub_10267b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10267b0ULL || rel >= 0x1026820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026820 size=16 callers=0 calls=0
*/
void sub_1026820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026820ULL || rel >= 0x1026830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026830 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1026830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026830ULL || rel >= 0x10268a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010268a0 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_10268a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10268a0ULL || rel >= 0x1026940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026940 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026940ULL || rel >= 0x10269a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010269a0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_10269a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10269a0ULL || rel >= 0x1026a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026a40 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1026a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026a40ULL || rel >= 0x1026ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026ae0 size=16 callers=0 calls=0
*/
void sub_1026ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026ae0ULL || rel >= 0x1026af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026af0 size=64 callers=3 calls=1
   calls: network_nesthole_command_2
*/
void sub_1026af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026af0ULL || rel >= 0x1026b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026b30 size=192 callers=0 calls=4
   calls: sub_1026bf0, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_1026b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026b30ULL || rel >= 0x1026bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026bf0 size=32 callers=1 calls=0
*/
void sub_1026bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026bf0ULL || rel >= 0x1026c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026c10 size=64 callers=0 calls=0
*/
void sub_1026c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026c10ULL || rel >= 0x1026c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026c50 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_1026c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026c50ULL || rel >= 0x1026d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026d80 size=48 callers=0 calls=0
*/
void sub_1026d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026d80ULL || rel >= 0x1026db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026db0 size=64 callers=0 calls=0
*/
void sub_1026db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026db0ULL || rel >= 0x1026df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026df0 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1026df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026df0ULL || rel >= 0x1026e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026e90 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_nesthole_command_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026e90ULL || rel >= 0x1026fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026fa0 size=80 callers=0 calls=0
*/
void sub_1026fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026fa0ULL || rel >= 0x1026ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01026ff0 size=112 callers=1 calls=0
*/
void sub_1026ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026ff0ULL || rel >= 0x1027060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027060 size=16 callers=0 calls=0
*/
void sub_1027060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027060ULL || rel >= 0x1027070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027070 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1027070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027070ULL || rel >= 0x10270e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010270e0 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_10270e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10270e0ULL || rel >= 0x1027180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027180 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027180ULL || rel >= 0x10271e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010271e0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_10271e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10271e0ULL || rel >= 0x1027280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027280 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1027280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027280ULL || rel >= 0x1027320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027320 size=16 callers=0 calls=0
*/
void sub_1027320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027320ULL || rel >= 0x1027330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027330 size=64 callers=3 calls=1
   calls: network_nesthole_command_2
*/
void sub_1027330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027330ULL || rel >= 0x1027370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027370 size=192 callers=0 calls=4
   calls: sub_1027430, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_1027370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027370ULL || rel >= 0x1027430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027430 size=32 callers=1 calls=0
*/
void sub_1027430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027430ULL || rel >= 0x1027450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027450 size=64 callers=0 calls=0
*/
void sub_1027450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027450ULL || rel >= 0x1027490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027490 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_1027490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027490ULL || rel >= 0x10275c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010275c0 size=48 callers=0 calls=0
*/
void sub_10275c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10275c0ULL || rel >= 0x10275f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010275f0 size=64 callers=0 calls=0
*/
void sub_10275f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10275f0ULL || rel >= 0x1027630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027630 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1027630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027630ULL || rel >= 0x10276d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010276d0 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_nesthole_command_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10276d0ULL || rel >= 0x10277e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010277e0 size=80 callers=0 calls=0
*/
void sub_10277e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10277e0ULL || rel >= 0x1027830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027830 size=112 callers=1 calls=0
*/
void sub_1027830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027830ULL || rel >= 0x10278a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010278a0 size=16 callers=0 calls=0
*/
void sub_10278a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10278a0ULL || rel >= 0x10278b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010278b0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_10278b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10278b0ULL || rel >= 0x1027920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027920 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1027920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027920ULL || rel >= 0x10279c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010279c0 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10279c0ULL || rel >= 0x1027a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027a20 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1027a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027a20ULL || rel >= 0x1027ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027ac0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1027ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027ac0ULL || rel >= 0x1027b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027b60 size=16 callers=0 calls=0
*/
void sub_1027b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027b60ULL || rel >= 0x1027b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027b70 size=64 callers=3 calls=1
   calls: network_nesthole_command_2
*/
void sub_1027b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027b70ULL || rel >= 0x1027bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027bb0 size=192 callers=0 calls=4
   calls: sub_1027c70, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_1027bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027bb0ULL || rel >= 0x1027c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027c70 size=32 callers=1 calls=0
*/
void sub_1027c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027c70ULL || rel >= 0x1027c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027c90 size=64 callers=0 calls=0
*/
void sub_1027c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027c90ULL || rel >= 0x1027cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027cd0 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_1027cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027cd0ULL || rel >= 0x1027e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027e00 size=48 callers=0 calls=0
*/
void sub_1027e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027e00ULL || rel >= 0x1027e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027e30 size=64 callers=0 calls=0
*/
void sub_1027e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027e30ULL || rel >= 0x1027e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027e70 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1027e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027e70ULL || rel >= 0x1027f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01027f10 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_nesthole_command_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffe
*/
void network_nesthole_command_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027f10ULL || rel >= 0x1028020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028020 size=80 callers=0 calls=0
*/
void sub_1028020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028020ULL || rel >= 0x1028070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028070 size=112 callers=1 calls=0
*/
void sub_1028070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028070ULL || rel >= 0x10280e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010280e0 size=16 callers=0 calls=0
*/
void sub_10280e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10280e0ULL || rel >= 0x10280f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010280f0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_10280f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10280f0ULL || rel >= 0x1028160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028160 size=16 callers=0 calls=0
*/
void sub_1028160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028160ULL || rel >= 0x1028170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028170 size=32 callers=0 calls=0
*/
void sub_1028170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028170ULL || rel >= 0x1028190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028190 size=16 callers=0 calls=0
*/
void sub_1028190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028190ULL || rel >= 0x10281a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010281a0 size=16 callers=0 calls=0
*/
void sub_10281a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10281a0ULL || rel >= 0x10281b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010281b0 size=16 callers=0 calls=0
*/
void sub_10281b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10281b0ULL || rel >= 0x10281c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010281c0 size=32 callers=0 calls=0
*/
void sub_10281c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10281c0ULL || rel >= 0x10281e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010281e0 size=16 callers=0 calls=0
*/
void sub_10281e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10281e0ULL || rel >= 0x10281f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010281f0 size=16 callers=0 calls=0
*/
void sub_10281f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10281f0ULL || rel >= 0x1028200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028200 size=16 callers=0 calls=0
*/
void sub_1028200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028200ULL || rel >= 0x1028210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028210 size=32 callers=0 calls=0
*/
void sub_1028210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028210ULL || rel >= 0x1028230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028230 size=16 callers=0 calls=0
*/
void sub_1028230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028230ULL || rel >= 0x1028240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028240 size=16 callers=0 calls=0
*/
void sub_1028240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028240ULL || rel >= 0x1028250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028250 size=16 callers=0 calls=0
*/
void sub_1028250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028250ULL || rel >= 0x1028260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028260 size=32 callers=0 calls=0
*/
void sub_1028260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028260ULL || rel >= 0x1028280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028280 size=16 callers=0 calls=0
*/
void sub_1028280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028280ULL || rel >= 0x1028290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028290 size=16 callers=0 calls=0
*/
void sub_1028290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028290ULL || rel >= 0x10282a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010282a0 size=16 callers=0 calls=0
*/
void sub_10282a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10282a0ULL || rel >= 0x10282b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010282b0 size=32 callers=0 calls=0
*/
void sub_10282b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10282b0ULL || rel >= 0x10282d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010282d0 size=16 callers=0 calls=0
*/
void sub_10282d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10282d0ULL || rel >= 0x10282e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010282e0 size=16 callers=0 calls=0
*/
void sub_10282e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10282e0ULL || rel >= 0x10282f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010282f0 size=16 callers=0 calls=0
*/
void sub_10282f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10282f0ULL || rel >= 0x1028300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

