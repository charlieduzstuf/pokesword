/* main functions 00d137f0..00d3c360 (104 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00d137f0 size=240 callers=1 calls=1
   calls: sub_13b1c90
*/
void sub_d137f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd137f0ULL || rel >= 0xd138e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d138e0 size=224 callers=1 calls=1
   calls: sub_d13af0
*/
void sub_d138e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd138e0ULL || rel >= 0xd139c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d139c0 size=304 callers=10 calls=0
*/
void sub_d139c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd139c0ULL || rel >= 0xd13af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13af0 size=224 callers=2 calls=2
   calls: sub_5e2350, sub_ead150
*/
void sub_d13af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13af0ULL || rel >= 0xd13bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13bd0 size=4800 callers=0 calls=12
   calls: sub_13a6cd0, sub_13b1c90, sub_13c9e50, sub_13ed240, sub_65d220, sub_972c70, sub_c83540, sub_d13100, sub_d13260, sub_d13290, sub_d152d0, sub_d15400
   ref: Play_Prop_Gimmick_a_t0301_g0102_voice
*/
void Play_Prop_Gimmick_a_t0301_g0102_voice(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13bd0ULL || rel >= 0xd14e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d14e90 size=16 callers=0 calls=0
*/
void sub_d14e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd14e90ULL || rel >= 0xd14ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d14ea0 size=16 callers=0 calls=0
*/
void sub_d14ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd14ea0ULL || rel >= 0xd14eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d14eb0 size=16 callers=0 calls=0
*/
void sub_d14eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd14eb0ULL || rel >= 0xd14ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d14ec0 size=64 callers=2 calls=0
*/
void sub_d14ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd14ec0ULL || rel >= 0xd14f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d14f00 size=80 callers=0 calls=0
*/
void sub_d14f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd14f00ULL || rel >= 0xd14f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d14f50 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d14f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd14f50ULL || rel >= 0xd15000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15000 size=48 callers=0 calls=0
*/
void sub_d15000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15000ULL || rel >= 0xd15030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15030 size=80 callers=0 calls=0
*/
void sub_d15030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15030ULL || rel >= 0xd15080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15080 size=80 callers=0 calls=0
*/
void sub_d15080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15080ULL || rel >= 0xd150d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d150d0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d150d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd150d0ULL || rel >= 0xd15180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15180 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d15180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15180ULL || rel >= 0xd15230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15230 size=80 callers=0 calls=0
*/
void sub_d15230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15230ULL || rel >= 0xd15280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15280 size=80 callers=0 calls=0
*/
void sub_d15280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15280ULL || rel >= 0xd152d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d152d0 size=304 callers=3 calls=0
*/
void sub_d152d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd152d0ULL || rel >= 0xd15400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15400 size=528 callers=1 calls=0
*/
void sub_d15400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15400ULL || rel >= 0xd15610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15610 size=128 callers=0 calls=0
*/
void sub_d15610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15610ULL || rel >= 0xd15690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15690 size=176 callers=1 calls=1
   calls: sub_ce3a10
*/
void sub_d15690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15690ULL || rel >= 0xd15740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15740 size=144 callers=0 calls=1
   calls: sub_c6a470
*/
void sub_d15740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15740ULL || rel >= 0xd157d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d157d0 size=1152 callers=0 calls=1
   calls: sub_59bee0
*/
void sub_d157d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd157d0ULL || rel >= 0xd15c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d15c50 size=1152 callers=0 calls=1
   calls: sub_59bee0
*/
void sub_d15c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd15c50ULL || rel >= 0xd160d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d160d0 size=80 callers=1 calls=0
*/
void sub_d160d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd160d0ULL || rel >= 0xd16120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d16120 size=192 callers=0 calls=1
   calls: sub_5cbcf0
*/
void sub_d16120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd16120ULL || rel >= 0xd161e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d161e0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d161e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd161e0ULL || rel >= 0xd16230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d16230 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d16230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd16230ULL || rel >= 0xd162e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d162e0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d162e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd162e0ULL || rel >= 0xd16330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d16330 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d16330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd16330ULL || rel >= 0xd16380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d16380 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d16380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd16380ULL || rel >= 0xd16430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d16430 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d16430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd16430ULL || rel >= 0xd164e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d164e0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d164e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd164e0ULL || rel >= 0xd16530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d16530 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d16530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd16530ULL || rel >= 0xd16580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d16580 size=1552 callers=1 calls=2
   calls: sub_ceeb40, sub_d16b90
*/
void sub_d16580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd16580ULL || rel >= 0xd16b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d16b90 size=528 callers=3 calls=0
*/
void sub_d16b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd16b90ULL || rel >= 0xd16da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d16da0 size=272 callers=0 calls=1
   calls: sub_135a1a0
*/
void sub_d16da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd16da0ULL || rel >= 0xd16eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d16eb0 size=1616 callers=0 calls=11
   calls: kw20_drowse01_Enabled_2, sub_13a1320, sub_13a16c0, sub_13a1800, sub_13a2880, sub_b988d0, sub_ceec20, sub_d0c0, sub_d17500, sub_d18220, sub_d18370
   ref: fi_traffic
*/
void fi_traffic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd16eb0ULL || rel >= 0xd17500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17500 size=512 callers=2 calls=1
   calls: sub_136b780
*/
void sub_d17500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17500ULL || rel >= 0xd17700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17700 size=112 callers=0 calls=1
   calls: eye_move_v
*/
void sub_d17700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17700ULL || rel >= 0xd17770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17770 size=336 callers=0 calls=2
   calls: sub_c62dd0, sub_e69490
*/
void sub_d17770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17770ULL || rel >= 0xd178c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d178c0 size=224 callers=0 calls=2
   calls: sub_13cc840, sub_cf0280
*/
void sub_d178c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd178c0ULL || rel >= 0xd179a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d179a0 size=224 callers=0 calls=2
   calls: sub_13cc840, sub_cf0360
*/
void sub_d179a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd179a0ULL || rel >= 0xd17a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17a80 size=32 callers=0 calls=0
*/
void sub_d17a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17a80ULL || rel >= 0xd17aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17aa0 size=288 callers=0 calls=1
   calls: sub_c636b0
*/
void sub_d17aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17aa0ULL || rel >= 0xd17bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17bc0 size=32 callers=1 calls=0
*/
void sub_d17bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17bc0ULL || rel >= 0xd17be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17be0 size=64 callers=0 calls=0
*/
void sub_d17be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17be0ULL || rel >= 0xd17c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17c20 size=272 callers=0 calls=2
   calls: sub_793fb0, sub_986bc0
   ref: NPC_RunWalkRate
*/
void NPC_RunWalkRate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17c20ULL || rel >= 0xd17d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17d30 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_d17d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17d30ULL || rel >= 0xd17dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17dc0 size=176 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d17dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17dc0ULL || rel >= 0xd17e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17e70 size=16 callers=0 calls=0
*/
void sub_d17e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17e70ULL || rel >= 0xd17e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17e80 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_d17e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17e80ULL || rel >= 0xd17f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17f10 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_d17f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17f10ULL || rel >= 0xd17fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d17fa0 size=176 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d17fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17fa0ULL || rel >= 0xd18050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d18050 size=176 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d18050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd18050ULL || rel >= 0xd18100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d18100 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_d18100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd18100ULL || rel >= 0xd18190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d18190 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_d18190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd18190ULL || rel >= 0xd18220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d18220 size=336 callers=2 calls=2
   calls: sub_13ca950, sub_d186a0
*/
void sub_d18220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd18220ULL || rel >= 0xd18370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d18370 size=336 callers=3 calls=2
   calls: sub_13ca950, sub_c9a520
*/
void sub_d18370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd18370ULL || rel >= 0xd184c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d184c0 size=304 callers=0 calls=0
*/
void sub_d184c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd184c0ULL || rel >= 0xd185f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d185f0 size=16 callers=0 calls=0
*/
void sub_d185f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd185f0ULL || rel >= 0xd18600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d18600 size=16 callers=0 calls=0
*/
void sub_d18600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd18600ULL || rel >= 0xd18610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d18610 size=16 callers=0 calls=0
*/
void sub_d18610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd18610ULL || rel >= 0xd18620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d18620 size=128 callers=0 calls=0
*/
void sub_d18620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd18620ULL || rel >= 0xd186a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d186a0 size=336 callers=1 calls=1
   calls: sub_d1b2b0
*/
void sub_d186a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd186a0ULL || rel >= 0xd187f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d187f0 size=1440 callers=0 calls=2
   calls: sub_d1b060, sub_d1b460
*/
void sub_d187f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd187f0ULL || rel >= 0xd18d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d18d90 size=96 callers=0 calls=2
   calls: sub_d1b6a0, sub_d1b6b0
*/
void sub_d18d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd18d90ULL || rel >= 0xd18df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d18df0 size=832 callers=0 calls=7
   calls: sub_13ed240, sub_c8f410, sub_c8f450, sub_c8f4d0, sub_d1b060, sub_d1c190, sub_d1c270
*/
void sub_d18df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd18df0ULL || rel >= 0xd19130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d19130 size=912 callers=0 calls=18
   calls: sub_13b1ba0, sub_65d220, sub_9733f0, sub_c6c1c0, sub_d194c0, sub_d19890, sub_d19b60, sub_d19e10, sub_d19fb0, sub_d1a1e0, sub_d1a360, sub_d1a460
   ... +6 more
*/
void sub_d19130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd19130ULL || rel >= 0xd194c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d194c0 size=976 callers=1 calls=6
   calls: sub_13ed240, sub_5cbcf0, sub_9733f0, sub_d1b060, sub_d1b6a0, sub_d1c190
*/
void sub_d194c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd194c0ULL || rel >= 0xd19890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d19890 size=720 callers=1 calls=4
   calls: sub_c8f450, sub_d1b060, sub_d1c190, sub_d3c360
*/
void sub_d19890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd19890ULL || rel >= 0xd19b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d19b60 size=688 callers=1 calls=6
   calls: sub_13b1c90, sub_13ca060, sub_13ed240, sub_b4c060, sub_d27000, sub_d27650
*/
void sub_d19b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd19b60ULL || rel >= 0xd19e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d19e10 size=416 callers=1 calls=4
   calls: eye_move_v_2, sub_13b1c90, sub_b4c060, sub_d27210
*/
void sub_d19e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd19e10ULL || rel >= 0xd19fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d19fb0 size=560 callers=1 calls=3
   calls: sub_13b1ba0, sub_972c70, sub_c6c1c0
*/
void sub_d19fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd19fb0ULL || rel >= 0xd1a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1a1e0 size=384 callers=1 calls=4
   calls: sub_13b1ba0, sub_972c70, sub_9733f0, sub_c6c1c0
*/
void sub_d1a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1a1e0ULL || rel >= 0xd1a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1a360 size=256 callers=1 calls=3
   calls: sub_13b1ba0, sub_65d220, sub_d1c190
*/
void sub_d1a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1a360ULL || rel >= 0xd1a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1a460 size=384 callers=1 calls=4
   calls: sub_13b1ba0, sub_972c70, sub_9733f0, sub_c6c1c0
*/
void sub_d1a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1a460ULL || rel >= 0xd1a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1a5e0 size=384 callers=1 calls=5
   calls: sub_13b1ba0, sub_65d220, sub_d1b060, sub_d1c190, sub_d3c360
*/
void sub_d1a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1a5e0ULL || rel >= 0xd1a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1a760 size=304 callers=1 calls=1
   calls: sub_c6c5c0
*/
void sub_d1a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1a760ULL || rel >= 0xd1a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1a890 size=32 callers=0 calls=0
*/
void sub_d1a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1a890ULL || rel >= 0xd1a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1a8b0 size=80 callers=0 calls=0
*/
void sub_d1a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1a8b0ULL || rel >= 0xd1a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1a900 size=496 callers=0 calls=4
   calls: sub_c8f4d0, sub_d1b060, sub_d3c370, sub_d3c380
*/
void sub_d1a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1a900ULL || rel >= 0xd1aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1aaf0 size=144 callers=0 calls=0
*/
void sub_d1aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1aaf0ULL || rel >= 0xd1ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1ab80 size=144 callers=0 calls=0
*/
void sub_d1ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ab80ULL || rel >= 0xd1ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1ac10 size=176 callers=0 calls=1
   calls: sub_13cc840
*/
void sub_d1ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ac10ULL || rel >= 0xd1acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1acc0 size=144 callers=0 calls=0
*/
void sub_d1acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1acc0ULL || rel >= 0xd1ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1ad50 size=144 callers=0 calls=0
*/
void sub_d1ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ad50ULL || rel >= 0xd1ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1ade0 size=176 callers=0 calls=1
   calls: sub_13cc840
*/
void sub_d1ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ade0ULL || rel >= 0xd1ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1ae90 size=176 callers=0 calls=1
   calls: sub_13cc840
*/
void sub_d1ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ae90ULL || rel >= 0xd1af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1af40 size=144 callers=0 calls=0
*/
void sub_d1af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1af40ULL || rel >= 0xd1afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1afd0 size=144 callers=0 calls=0
*/
void sub_d1afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1afd0ULL || rel >= 0xd1b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b060 size=464 callers=12 calls=1
   calls: sub_967240
*/
void sub_d1b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b060ULL || rel >= 0xd1b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b230 size=128 callers=0 calls=0
*/
void sub_d1b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b230ULL || rel >= 0xd1b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b2b0 size=112 callers=3 calls=1
   calls: sub_5e2350
*/
void sub_d1b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b2b0ULL || rel >= 0xd1b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b320 size=160 callers=1 calls=2
   calls: sub_5e2350, sub_d1b460
*/
void sub_d1b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b320ULL || rel >= 0xd1b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b3c0 size=160 callers=1 calls=1
   calls: sub_b4a5e0
*/
void sub_d1b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b3c0ULL || rel >= 0xd1b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b460 size=288 callers=4 calls=1
   calls: sub_d1d920
*/
void sub_d1b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b460ULL || rel >= 0xd1b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b580 size=32 callers=1 calls=0
*/
void sub_d1b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b580ULL || rel >= 0xd1b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b5a0 size=48 callers=1 calls=0
*/
void sub_d1b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b5a0ULL || rel >= 0xd1b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b5d0 size=16 callers=0 calls=0
*/
void sub_d1b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b5d0ULL || rel >= 0xd1b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b5e0 size=16 callers=1 calls=0
*/
void sub_d1b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b5e0ULL || rel >= 0xd1b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b5f0 size=48 callers=1 calls=0
*/
void sub_d1b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b5f0ULL || rel >= 0xd1b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b620 size=128 callers=0 calls=1
   calls: sub_d1ba70
*/
void sub_d1b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b620ULL || rel >= 0xd1b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b6a0 size=16 callers=4 calls=0
*/
void sub_d1b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b6a0ULL || rel >= 0xd1b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b6b0 size=64 callers=1 calls=1
   calls: sub_d1ba70
*/
void sub_d1b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b6b0ULL || rel >= 0xd1b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b6f0 size=16 callers=1 calls=0
*/
void sub_d1b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b6f0ULL || rel >= 0xd1b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b700 size=160 callers=0 calls=4
   calls: sub_d1b7c0, sub_d1b8d0, sub_d1c330, sub_d1c8d0
*/
void sub_d1b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b700ULL || rel >= 0xd1b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b7a0 size=32 callers=3 calls=0
*/
void sub_d1b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b7a0ULL || rel >= 0xd1b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b7c0 size=272 callers=1 calls=1
   calls: sub_d24480
*/
void sub_d1b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b7c0ULL || rel >= 0xd1b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1b8d0 size=384 callers=1 calls=3
   calls: sub_d237f0, sub_d23d00, sub_d24480
*/
void sub_d1b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b8d0ULL || rel >= 0xd1ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1ba50 size=32 callers=3 calls=0
*/
void sub_d1ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ba50ULL || rel >= 0xd1ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1ba70 size=1824 callers=3 calls=5
   calls: sub_13c9e50, sub_972c70, sub_c63670, sub_d1d140, sub_d1d920
*/
void sub_d1ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ba70ULL || rel >= 0xd1c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1c190 size=224 callers=8 calls=2
   calls: sub_d1d140, sub_d1d920
*/
void sub_d1c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1c190ULL || rel >= 0xd1c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1c270 size=192 callers=1 calls=1
   calls: sub_13c9e50
*/
void sub_d1c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1c270ULL || rel >= 0xd1c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1c330 size=1440 callers=1 calls=5
   calls: sub_59a520, sub_c816a0, sub_d1cc30, sub_d1d140, sub_d1d920
*/
void sub_d1c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1c330ULL || rel >= 0xd1c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1c8d0 size=864 callers=1 calls=5
   calls: sub_13c9e50, sub_59a520, sub_972c70, sub_d1d140, sub_d1d920
*/
void sub_d1c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1c8d0ULL || rel >= 0xd1cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1cc30 size=1296 callers=1 calls=3
   calls: sub_13c9e50, sub_65d220, sub_972c70
*/
void sub_d1cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1cc30ULL || rel >= 0xd1d140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d140 size=320 callers=4 calls=1
   calls: sub_d1d920
*/
void sub_d1d140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d140ULL || rel >= 0xd1d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d280 size=16 callers=2 calls=0
*/
void sub_d1d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d280ULL || rel >= 0xd1d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d290 size=112 callers=0 calls=0
*/
void sub_d1d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d290ULL || rel >= 0xd1d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d300 size=112 callers=0 calls=0
*/
void sub_d1d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d300ULL || rel >= 0xd1d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d370 size=208 callers=0 calls=2
   calls: sub_d1d920, sub_d3c370
*/
void sub_d1d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d370ULL || rel >= 0xd1d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d440 size=144 callers=0 calls=0
*/
void sub_d1d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d440ULL || rel >= 0xd1d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d4d0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d1d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d4d0ULL || rel >= 0xd1d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d580 size=144 callers=0 calls=0
*/
void sub_d1d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d580ULL || rel >= 0xd1d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d610 size=144 callers=0 calls=0
*/
void sub_d1d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d610ULL || rel >= 0xd1d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d6a0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d1d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d6a0ULL || rel >= 0xd1d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d750 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d1d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d750ULL || rel >= 0xd1d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d800 size=144 callers=0 calls=0
*/
void sub_d1d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d800ULL || rel >= 0xd1d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d890 size=144 callers=0 calls=0
*/
void sub_d1d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d890ULL || rel >= 0xd1d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1d920 size=288 callers=12 calls=1
   calls: sub_967240
*/
void sub_d1d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1d920ULL || rel >= 0xd1da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1da40 size=128 callers=0 calls=0
*/
void sub_d1da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1da40ULL || rel >= 0xd1dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1dac0 size=368 callers=0 calls=0
*/
void sub_d1dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1dac0ULL || rel >= 0xd1dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1dc30 size=752 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1dc30ULL || rel >= 0xd1df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1df20 size=3952 callers=5 calls=0
*/
void sub_d1df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1df20ULL || rel >= 0xd1ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1ee90 size=224 callers=1 calls=3
   calls: sub_135a3c0, sub_cc2150, sub_d1df20
*/
void sub_d1ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ee90ULL || rel >= 0xd1ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1ef70 size=464 callers=2 calls=5
   calls: sub_135a2d0, sub_c627e0, sub_c73490, sub_d1df20, sub_d2b100
*/
void sub_d1ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ef70ULL || rel >= 0xd1f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1f140 size=112 callers=1 calls=0
*/
void sub_d1f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1f140ULL || rel >= 0xd1f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1f1b0 size=208 callers=1 calls=0
*/
void sub_d1f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1f1b0ULL || rel >= 0xd1f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1f280 size=336 callers=3 calls=2
   calls: sub_c63670, sub_d1f3d0
*/
void sub_d1f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1f280ULL || rel >= 0xd1f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1f3d0 size=624 callers=7 calls=4
   calls: sub_607750, sub_b4c060, sub_b95620, sub_b981b0
*/
void sub_d1f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1f3d0ULL || rel >= 0xd1f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1f640 size=720 callers=2 calls=3
   calls: sub_c9e5f0, sub_ca0b90, sub_d1f3d0
*/
void sub_d1f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1f640ULL || rel >= 0xd1f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1f910 size=576 callers=1 calls=5
   calls: sub_972c70, sub_990590, sub_c9e5f0, sub_ca0b90, sub_d1f3d0
*/
void sub_d1f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1f910ULL || rel >= 0xd1fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1fb50 size=32 callers=3 calls=0
*/
void sub_d1fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1fb50ULL || rel >= 0xd1fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1fb70 size=400 callers=1 calls=5
   calls: sub_972c70, sub_990590, sub_c9e5f0, sub_ca0b90, sub_d1f3d0
*/
void sub_d1fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1fb70ULL || rel >= 0xd1fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1fd00 size=368 callers=1 calls=3
   calls: sub_c9e5f0, sub_ca0b90, sub_d1f3d0
*/
void sub_d1fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1fd00ULL || rel >= 0xd1fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1fe70 size=368 callers=21 calls=1
   calls: sub_c9dcd0
*/
void sub_d1fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1fe70ULL || rel >= 0xd1ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d1ffe0 size=144 callers=3 calls=1
   calls: sub_c9dcd0
*/
void sub_d1ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ffe0ULL || rel >= 0xd20070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d20070 size=368 callers=2 calls=1
   calls: sub_c9dcd0
*/
void sub_d20070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd20070ULL || rel >= 0xd201e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d201e0 size=144 callers=1 calls=1
   calls: sub_c9dcd0
*/
void sub_d201e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd201e0ULL || rel >= 0xd20270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d20270 size=224 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d20270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd20270ULL || rel >= 0xd20350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d20350 size=224 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d20350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd20350ULL || rel >= 0xd20430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d20430 size=240 callers=1 calls=2
   calls: sub_13a6920, sub_c63670
*/
void sub_d20430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd20430ULL || rel >= 0xd20520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d20520 size=192 callers=1 calls=1
   calls: sub_c73490
*/
void sub_d20520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd20520ULL || rel >= 0xd205e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d205e0 size=192 callers=1 calls=1
   calls: sub_d2b100
*/
void sub_d205e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd205e0ULL || rel >= 0xd206a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d206a0 size=432 callers=1 calls=3
   calls: sub_13a6920, sub_13ca950, sub_d2d690
*/
void sub_d206a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd206a0ULL || rel >= 0xd20850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d20850 size=576 callers=1 calls=6
   calls: sub_13a6920, sub_972c70, sub_d206a0, sub_d2d770, sub_d33f90, sub_d34070
*/
void sub_d20850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd20850ULL || rel >= 0xd20a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d20a90 size=256 callers=1 calls=2
   calls: sub_13a6920, sub_d2d8d0
*/
void sub_d20a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd20a90ULL || rel >= 0xd20b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d20b90 size=416 callers=1 calls=3
   calls: sub_13a6920, sub_13ca950, sub_d2da20
*/
void sub_d20b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd20b90ULL || rel >= 0xd20d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d20d30 size=496 callers=4 calls=3
   calls: sub_13a6920, sub_13ca950, sub_d2db00
*/
void sub_d20d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd20d30ULL || rel >= 0xd20f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d20f20 size=496 callers=1 calls=5
   calls: sub_13a6920, sub_13ca950, sub_ca28b0, sub_d21110, sub_d2dbe0
*/
void sub_d20f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd20f20ULL || rel >= 0xd21110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d21110 size=464 callers=2 calls=2
   calls: eye_move_v_2, sub_13cce40
*/
void sub_d21110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd21110ULL || rel >= 0xd212e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d212e0 size=672 callers=4 calls=5
   calls: sub_13a6920, sub_13ca950, sub_ca2440, sub_d21580, sub_d2dbe0
*/
void sub_d212e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd212e0ULL || rel >= 0xd21580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d21580 size=528 callers=2 calls=2
   calls: sub_13cce40, sub_d27470
*/
void sub_d21580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd21580ULL || rel >= 0xd21790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d21790 size=672 callers=1 calls=6
   calls: sub_13ca950, sub_13cce40, sub_990590, sub_ca28b0, sub_d27650, sub_d2dbe0
*/
void sub_d21790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd21790ULL || rel >= 0xd21a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d21a30 size=304 callers=3 calls=2
   calls: sub_13cce40, sub_d27650
*/
void sub_d21a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd21a30ULL || rel >= 0xd21b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d21b60 size=480 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_d21b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd21b60ULL || rel >= 0xd21d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d21d40 size=256 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_d21d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd21d40ULL || rel >= 0xd21e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d21e40 size=496 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d21e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd21e40ULL || rel >= 0xd22030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22030 size=272 callers=5 calls=1
   calls: sub_13a6920
*/
void sub_d22030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22030ULL || rel >= 0xd22140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22140 size=496 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d22140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22140ULL || rel >= 0xd22330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22330 size=272 callers=8 calls=1
   calls: sub_13a6920
*/
void sub_d22330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22330ULL || rel >= 0xd22440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22440 size=496 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d22440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22440ULL || rel >= 0xd22630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22630 size=272 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d22630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22630ULL || rel >= 0xd22740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22740 size=480 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d22740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22740ULL || rel >= 0xd22920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22920 size=480 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d22920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22920ULL || rel >= 0xd22b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22b00 size=480 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d22b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22b00ULL || rel >= 0xd22ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22ce0 size=272 callers=5 calls=1
   calls: sub_13a6920
*/
void sub_d22ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22ce0ULL || rel >= 0xd22df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22df0 size=480 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d22df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22df0ULL || rel >= 0xd22fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d22fd0 size=384 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d22fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22fd0ULL || rel >= 0xd23150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d23150 size=144 callers=5 calls=1
   calls: sub_13a6920
*/
void sub_d23150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd23150ULL || rel >= 0xd231e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d231e0 size=320 callers=13 calls=2
   calls: sub_13a6920, sub_607750
*/
void sub_d231e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd231e0ULL || rel >= 0xd23320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d23320 size=272 callers=2 calls=1
   calls: sub_d23430
*/
void sub_d23320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd23320ULL || rel >= 0xd23430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d23430 size=256 callers=1 calls=2
   calls: sub_b33c60, sub_b4c060
*/
void sub_d23430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd23430ULL || rel >= 0xd23530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d23530 size=384 callers=1 calls=2
   calls: sub_13a6920, sub_d231e0
*/
void sub_d23530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd23530ULL || rel >= 0xd236b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d236b0 size=320 callers=1 calls=2
   calls: sub_13a6920, sub_d237f0
*/
void sub_d236b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd236b0ULL || rel >= 0xd237f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d237f0 size=432 callers=25 calls=4
   calls: sub_59b250, sub_5b9220, sub_607750, sub_d231e0
*/
void sub_d237f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd237f0ULL || rel >= 0xd239a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d239a0 size=208 callers=1 calls=0
*/
void sub_d239a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd239a0ULL || rel >= 0xd23a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d23a70 size=656 callers=1 calls=4
   calls: sub_59b250, sub_5b9430, sub_607750, sub_d231e0
*/
void sub_d23a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd23a70ULL || rel >= 0xd23d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d23d00 size=464 callers=14 calls=3
   calls: sub_59b330, sub_607750, sub_d231e0
*/
void sub_d23d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd23d00ULL || rel >= 0xd23ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d23ed0 size=512 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d23ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd23ed0ULL || rel >= 0xd240d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d240d0 size=320 callers=1 calls=2
   calls: fi1001_dowsingwait01_loop, sub_13a6920
*/
void sub_d240d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd240d0ULL || rel >= 0xd24210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d24210 size=624 callers=8 calls=3
   calls: sub_d237f0, sub_d23d00, sub_d24480
   ref: rl_wait
   ref: fi_wait05_loop
   ref: fi1001_dowsingwait01_loop
   ref: ra_wait01_loop
   ref: fi_wait02_loop
   ref: fi_wait04_loop
   ref: fi_wait01_loop
   ref: fi_wait03_loop
*/
void fi1001_dowsingwait01_loop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd24210ULL || rel >= 0xd24480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d24480 size=352 callers=24 calls=2
   calls: sub_13a6920, sub_c9dcd0
*/
void sub_d24480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd24480ULL || rel >= 0xd245e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d245e0 size=336 callers=1 calls=2
   calls: sub_13a6920, sub_d24730
*/
void sub_d245e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd245e0ULL || rel >= 0xd24730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d24730 size=432 callers=1 calls=4
   calls: sub_59a930, sub_5b93c0, sub_607750, sub_d231e0
*/
void sub_d24730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd24730ULL || rel >= 0xd248e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d248e0 size=352 callers=1 calls=2
   calls: sub_13a6920, sub_d24a40
*/
void sub_d248e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd248e0ULL || rel >= 0xd24a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d24a40 size=432 callers=1 calls=3
   calls: sub_59b2f0, sub_607750, sub_d231e0
*/
void sub_d24a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd24a40ULL || rel >= 0xd24bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d24bf0 size=1248 callers=2 calls=9
   calls: sub_13a6cd0, sub_1c0, sub_59bee0, sub_612ef0, sub_612f70, sub_d250d0, sub_d25240, sub_d2dcc0, sub_d2e290
*/
void sub_d24bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd24bf0ULL || rel >= 0xd250d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d250d0 size=368 callers=2 calls=7
   calls: sub_c5da80, sub_c5dd90, sub_c5e0f0, sub_c5e2b0, sub_c5e420, sub_d2b260, sub_d2b660
*/
void sub_d250d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd250d0ULL || rel >= 0xd25240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d25240 size=400 callers=2 calls=2
   calls: sub_c8f740, sub_cca0a0
*/
void sub_d25240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd25240ULL || rel >= 0xd253d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d253d0 size=960 callers=1 calls=5
   calls: sub_13ed330, sub_d250d0, sub_d25240, sub_d2dcc0, sub_d2e290
*/
void sub_d253d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd253d0ULL || rel >= 0xd25790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d25790 size=208 callers=2 calls=1
   calls: sub_d2e290
*/
void sub_d25790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd25790ULL || rel >= 0xd25860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d25860 size=208 callers=1 calls=1
   calls: sub_d2e290
*/
void sub_d25860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd25860ULL || rel >= 0xd25930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d25930 size=272 callers=2 calls=1
   calls: sub_d25a40
*/
void sub_d25930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd25930ULL || rel >= 0xd25a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d25a40 size=400 callers=1 calls=9
   calls: sub_c9dcd0, sub_cf38a0, sub_d2e380, sub_d2e470, sub_d2e560, sub_d2e650, sub_d2e740, sub_d2e830, sub_d2e920
*/
void sub_d25a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd25a40ULL || rel >= 0xd25bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d25bd0 size=128 callers=41 calls=1
   calls: sub_d28d20
*/
void sub_d25bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd25bd0ULL || rel >= 0xd25c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d25c50 size=176 callers=23 calls=1
   calls: sub_d28d20
*/
void sub_d25c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd25c50ULL || rel >= 0xd25d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d25d00 size=160 callers=1 calls=0
*/
void sub_d25d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd25d00ULL || rel >= 0xd25da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d25da0 size=400 callers=2 calls=3
   calls: sub_13f67a0, sub_c73800, sub_d28d20
*/
void sub_d25da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd25da0ULL || rel >= 0xd25f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d25f30 size=400 callers=2 calls=2
   calls: sub_13f67a0, sub_d28d20
*/
void sub_d25f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd25f30ULL || rel >= 0xd260c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d260c0 size=48 callers=2 calls=1
   calls: sub_d25f30
*/
void sub_d260c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd260c0ULL || rel >= 0xd260f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d260f0 size=176 callers=1 calls=1
   calls: sub_5e7b30
*/
void sub_d260f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd260f0ULL || rel >= 0xd261a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d261a0 size=1040 callers=1 calls=3
   calls: sub_13a6920, sub_5cfad0, sub_d24480
*/
void sub_d261a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd261a0ULL || rel >= 0xd265b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d265b0 size=800 callers=1 calls=3
   calls: sub_13a6920, sub_5cfad0, sub_d24480
*/
void sub_d265b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd265b0ULL || rel >= 0xd268d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d268d0 size=1040 callers=1 calls=3
   calls: sub_13a6920, sub_5cfad0, sub_d24480
*/
void sub_d268d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd268d0ULL || rel >= 0xd26ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d26ce0 size=800 callers=1 calls=3
   calls: sub_13a6920, sub_5cfad0, sub_d24480
*/
void sub_d26ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd26ce0ULL || rel >= 0xd27000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d27000 size=528 callers=6 calls=4
   calls: sub_b96930, sub_b96fd0, sub_b976e0, sub_b97b00
*/
void sub_d27000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd27000ULL || rel >= 0xd27210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d27210 size=304 callers=10 calls=1
   calls: sub_b96c70
*/
void sub_d27210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd27210ULL || rel >= 0xd27340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d27340 size=304 callers=1 calls=2
   calls: eye_move_v_2, sub_13cce40
*/
void sub_d27340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd27340ULL || rel >= 0xd27470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d27470 size=480 callers=1 calls=5
   calls: sub_13cce40, sub_612ef0, sub_612f70, sub_96ccf0, sub_d27650
*/
void sub_d27470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd27470ULL || rel >= 0xd27650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d27650 size=2064 callers=8 calls=5
   calls: eye_move_v_2, sub_13c9e50, sub_612ef0, sub_612f70, sub_96ccf0
*/
void sub_d27650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd27650ULL || rel >= 0xd27e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d27e60 size=416 callers=4 calls=0
*/
void sub_d27e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd27e60ULL || rel >= 0xd28000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d28000 size=208 callers=2 calls=0
*/
void sub_d28000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd28000ULL || rel >= 0xd280d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d280d0 size=240 callers=1 calls=2
   calls: eye_move_v_2, sub_13cce40
*/
void sub_d280d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd280d0ULL || rel >= 0xd281c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d281c0 size=48 callers=7 calls=0
*/
void sub_d281c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd281c0ULL || rel >= 0xd281f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d281f0 size=272 callers=4 calls=1
   calls: sub_d24480
*/
void sub_d281f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd281f0ULL || rel >= 0xd28300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d28300 size=144 callers=2 calls=1
   calls: sub_d2ea10
*/
void sub_d28300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd28300ULL || rel >= 0xd28390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d28390 size=2096 callers=1 calls=10
   calls: sub_13a6920, sub_c687b0, sub_c75b40, sub_c9dcd0, sub_d28bc0, sub_d28d20, sub_d2eb00, sub_d2ebf0, sub_d41ed0, sub_d5be10
*/
void sub_d28390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd28390ULL || rel >= 0xd28bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d28bc0 size=352 callers=5 calls=0
*/
void sub_d28bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd28bc0ULL || rel >= 0xd28d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d28d20 size=304 callers=21 calls=1
   calls: sub_13a6920
*/
void sub_d28d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd28d20ULL || rel >= 0xd28e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d28e50 size=784 callers=2 calls=2
   calls: sub_13a6920, sub_d29160
*/
void sub_d28e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd28e50ULL || rel >= 0xd29160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29160 size=784 callers=2 calls=1
   calls: sub_c9dcd0
*/
void sub_d29160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29160ULL || rel >= 0xd29470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29470 size=272 callers=8 calls=1
   calls: sub_d29580
*/
void sub_d29470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29470ULL || rel >= 0xd29580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29580 size=720 callers=3 calls=2
   calls: sub_c657d0, sub_c9dcd0
*/
void sub_d29580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29580ULL || rel >= 0xd29850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29850 size=16 callers=7 calls=0
*/
void sub_d29850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29850ULL || rel >= 0xd29860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29860 size=688 callers=6 calls=2
   calls: sub_5c8c30, sub_972c70
*/
void sub_d29860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29860ULL || rel >= 0xd29b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29b10 size=304 callers=2 calls=2
   calls: sub_13f67a0, unnamed_35
*/
void sub_d29b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29b10ULL || rel >= 0xd29c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29c40 size=32 callers=2 calls=0
*/
void sub_d29c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29c40ULL || rel >= 0xd29c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29c60 size=224 callers=1 calls=1
   calls: sub_c293a0
*/
void sub_d29c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29c60ULL || rel >= 0xd29d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29d40 size=272 callers=1 calls=1
   calls: sub_c293a0
*/
void sub_d29d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29d40ULL || rel >= 0xd29e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29e50 size=32 callers=2 calls=0
*/
void sub_d29e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29e50ULL || rel >= 0xd29e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29e70 size=224 callers=1 calls=1
   calls: sub_c293a0
*/
void sub_d29e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29e70ULL || rel >= 0xd29f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d29f50 size=272 callers=1 calls=1
   calls: sub_c293a0
*/
void sub_d29f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd29f50ULL || rel >= 0xd2a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2a060 size=992 callers=1 calls=7
   calls: sub_13a6920, sub_59a180, sub_5bee70, sub_5e2bc0, sub_607750, sub_d231e0, sub_d24480
*/
void sub_d2a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2a060ULL || rel >= 0xd2a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2a440 size=176 callers=1 calls=2
   calls: sub_ce2630, sub_d2ece0
*/
void sub_d2a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2a440ULL || rel >= 0xd2a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2a4f0 size=304 callers=1 calls=3
   calls: sub_cd4290, sub_d2a620, sub_d2dcc0
*/
void sub_d2a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2a4f0ULL || rel >= 0xd2a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2a620 size=1024 callers=1 calls=8
   calls: sub_c5d8a0, sub_c5da80, sub_c5dd90, sub_c5e2b0, sub_c5eb20, sub_d2b260, sub_d2b820, sub_d2ba70
*/
void sub_d2a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2a620ULL || rel >= 0xd2aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2aa20 size=80 callers=1 calls=0
*/
void sub_d2aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2aa20ULL || rel >= 0xd2aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2aa70 size=400 callers=2 calls=3
   calls: sub_ccc630, sub_d2ac00, sub_d2dcc0
*/
void sub_d2aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2aa70ULL || rel >= 0xd2ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2ac00 size=528 callers=1 calls=7
   calls: sub_c5dd90, sub_d2b260, sub_d2bdf0, sub_d2bfc0, sub_d2c180, sub_d2c760, sub_d2cf90
*/
void sub_d2ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2ac00ULL || rel >= 0xd2ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2ae10 size=256 callers=1 calls=2
   calls: sub_c5ad80, sub_d2ece0
*/
void sub_d2ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2ae10ULL || rel >= 0xd2af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2af10 size=240 callers=2 calls=2
   calls: sub_c5ad80, sub_d2ece0
*/
void sub_d2af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2af10ULL || rel >= 0xd2b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2b000 size=256 callers=1 calls=1
   calls: sub_d1f3d0
*/
void sub_d2b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2b000ULL || rel >= 0xd2b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2b100 size=352 callers=9 calls=1
   calls: sub_13ca4c0
*/
void sub_d2b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2b100ULL || rel >= 0xd2b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2b260 size=400 callers=11 calls=3
   calls: sub_c5d8a0, sub_c5dd90, sub_d2b3f0
*/
void sub_d2b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2b260ULL || rel >= 0xd2b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2b3f0 size=464 callers=23 calls=1
   calls: sub_c5da80
*/
void sub_d2b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2b3f0ULL || rel >= 0xd2b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2b5c0 size=160 callers=0 calls=0
*/
void sub_d2b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2b5c0ULL || rel >= 0xd2b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2b660 size=448 callers=7 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_d2b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2b660ULL || rel >= 0xd2b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2b820 size=592 callers=1 calls=6
   calls: sub_c5da80, sub_c5dd90, sub_c5e2b0, sub_d2b3f0, sub_d2b660, sub_d2bc30
*/
void sub_d2b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2b820ULL || rel >= 0xd2ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2ba70 size=448 callers=1 calls=0
*/
void sub_d2ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2ba70ULL || rel >= 0xd2bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2bc30 size=448 callers=1 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_d2bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2bc30ULL || rel >= 0xd2bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2bdf0 size=464 callers=12 calls=4
   calls: sub_c5d8a0, sub_c5da80, sub_c5dd90, sub_c5e2b0
*/
void sub_d2bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2bdf0ULL || rel >= 0xd2bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2bfc0 size=448 callers=5 calls=5
   calls: sub_c5da80, sub_c5dd90, sub_d2b3f0, sub_d2b660, sub_d2cdd0
*/
void sub_d2bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2bfc0ULL || rel >= 0xd2c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2c180 size=1504 callers=3 calls=4
   calls: sub_c5da80, sub_c5dd90, sub_c5e2b0, sub_d2b3f0
*/
void sub_d2c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2c180ULL || rel >= 0xd2c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2c760 size=1648 callers=1 calls=8
   calls: sub_c5d8a0, sub_c5da80, sub_c5dd90, sub_c5e2b0, sub_d2b3f0, sub_d2d150, sub_d2d310, sub_d2d4d0
*/
void sub_d2c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2c760ULL || rel >= 0xd2cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2cdd0 size=448 callers=4 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_d2cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2cdd0ULL || rel >= 0xd2cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2cf90 size=448 callers=2 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_d2cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2cf90ULL || rel >= 0xd2d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2d150 size=448 callers=1 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_d2d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2d150ULL || rel >= 0xd2d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2d310 size=448 callers=1 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_d2d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2d310ULL || rel >= 0xd2d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2d4d0 size=448 callers=1 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_d2d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2d4d0ULL || rel >= 0xd2d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2d690 size=224 callers=1 calls=1
   calls: sub_d2ee10
*/
void sub_d2d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2d690ULL || rel >= 0xd2d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2d770 size=352 callers=1 calls=2
   calls: sub_13ca950, sub_d32ac0
*/
void sub_d2d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2d770ULL || rel >= 0xd2d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2d8d0 size=336 callers=1 calls=2
   calls: sub_13ca950, sub_d1b320
*/
void sub_d2d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2d8d0ULL || rel >= 0xd2da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2da20 size=224 callers=1 calls=1
   calls: sub_d31810
*/
void sub_d2da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2da20ULL || rel >= 0xd2db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2db00 size=224 callers=2 calls=1
   calls: sub_d30960
*/
void sub_d2db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2db00ULL || rel >= 0xd2dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2dbe0 size=224 callers=4 calls=1
   calls: sub_ca0c80
*/
void sub_d2dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2dbe0ULL || rel >= 0xd2dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2dcc0 size=624 callers=9 calls=3
   calls: sub_65d830, sub_65d940, sub_d2e1d0
*/
void sub_d2dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2dcc0ULL || rel >= 0xd2df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2df30 size=352 callers=0 calls=4
   calls: sub_65d830, sub_65d940, sub_c5f030, sub_d2e1d0
*/
void sub_d2df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2df30ULL || rel >= 0xd2e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e090 size=16 callers=0 calls=0
*/
void sub_d2e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e090ULL || rel >= 0xd2e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e0a0 size=16 callers=0 calls=0
*/
void sub_d2e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e0a0ULL || rel >= 0xd2e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e0b0 size=16 callers=0 calls=0
*/
void sub_d2e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e0b0ULL || rel >= 0xd2e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e0c0 size=64 callers=0 calls=0
*/
void sub_d2e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e0c0ULL || rel >= 0xd2e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e100 size=80 callers=0 calls=0
*/
void sub_d2e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e100ULL || rel >= 0xd2e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e150 size=112 callers=0 calls=0
*/
void sub_d2e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e150ULL || rel >= 0xd2e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e1c0 size=16 callers=0 calls=0
*/
void sub_d2e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e1c0ULL || rel >= 0xd2e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e1d0 size=192 callers=3 calls=2
   calls: sub_c5f030, sub_ce0
*/
void sub_d2e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e1d0ULL || rel >= 0xd2e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e290 size=240 callers=5 calls=1
   calls: sub_13a6920
*/
void sub_d2e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e290ULL || rel >= 0xd2e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e380 size=240 callers=1 calls=1
   calls: sub_c657d0
*/
void sub_d2e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e380ULL || rel >= 0xd2e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e470 size=240 callers=1 calls=1
   calls: sub_c657d0
*/
void sub_d2e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e470ULL || rel >= 0xd2e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e560 size=240 callers=1 calls=1
   calls: sub_c657d0
*/
void sub_d2e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e560ULL || rel >= 0xd2e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e650 size=240 callers=1 calls=1
   calls: sub_c657d0
*/
void sub_d2e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e650ULL || rel >= 0xd2e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e740 size=240 callers=2 calls=1
   calls: sub_c657d0
*/
void sub_d2e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e740ULL || rel >= 0xd2e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e830 size=240 callers=3 calls=1
   calls: sub_c657d0
*/
void sub_d2e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e830ULL || rel >= 0xd2e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2e920 size=240 callers=1 calls=1
   calls: sub_c657d0
*/
void sub_d2e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2e920ULL || rel >= 0xd2ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2ea10 size=240 callers=3 calls=1
   calls: sub_13a6920
*/
void sub_d2ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2ea10ULL || rel >= 0xd2eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2eb00 size=240 callers=3 calls=1
   calls: sub_13a6920
*/
void sub_d2eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2eb00ULL || rel >= 0xd2ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2ebf0 size=240 callers=4 calls=1
   calls: sub_13a6920
*/
void sub_d2ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2ebf0ULL || rel >= 0xd2ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2ece0 size=304 callers=3 calls=1
   calls: sub_967240
*/
void sub_d2ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2ece0ULL || rel >= 0xd2ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2ee10 size=160 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_d2ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2ee10ULL || rel >= 0xd2eeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2eeb0 size=1808 callers=0 calls=14
   calls: sub_13b1c90, sub_59a520, sub_65d220, sub_972c70, sub_9733f0, sub_990590, sub_b4a5e0, sub_d24480, sub_d2aa20, sub_d2f5c0, sub_d2f7b0, sub_d2f950
   ... +2 more
*/
void sub_d2eeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2eeb0ULL || rel >= 0xd2f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2f5c0 size=496 callers=1 calls=5
   calls: sub_5cc540, sub_b33a30, sub_b4c060, sub_c63670, sub_c63690
*/
void sub_d2f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2f5c0ULL || rel >= 0xd2f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2f7b0 size=416 callers=2 calls=4
   calls: fi1001_dowsingwait01_loop, sub_13b1ba0, sub_d23150, sub_d23d00
*/
void sub_d2f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2f7b0ULL || rel >= 0xd2f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2f950 size=752 callers=1 calls=3
   calls: sub_59a520, sub_b4a5e0, sub_d24480
*/
void sub_d2f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2f950ULL || rel >= 0xd2fc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d2fc40 size=1056 callers=1 calls=2
   calls: sub_d24480, sub_d30060
*/
void sub_d2fc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2fc40ULL || rel >= 0xd30060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d30060 size=496 callers=1 calls=6
   calls: sub_59a520, sub_5cc540, sub_b4a5e0, sub_c63670, sub_c9e5f0, sub_ca0b90
*/
void sub_d30060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30060ULL || rel >= 0xd30250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d30250 size=416 callers=2 calls=4
   calls: sub_13ca950, sub_ca2940, sub_d24480, sub_d2dbe0
*/
void sub_d30250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30250ULL || rel >= 0xd303f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d303f0 size=144 callers=0 calls=0
*/
void sub_d303f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd303f0ULL || rel >= 0xd30480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d30480 size=144 callers=0 calls=0
*/
void sub_d30480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30480ULL || rel >= 0xd30510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d30510 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d30510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30510ULL || rel >= 0xd305c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d305c0 size=144 callers=0 calls=0
*/
void sub_d305c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd305c0ULL || rel >= 0xd30650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d30650 size=144 callers=0 calls=0
*/
void sub_d30650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30650ULL || rel >= 0xd306e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d306e0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d306e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd306e0ULL || rel >= 0xd30790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d30790 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d30790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30790ULL || rel >= 0xd30840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d30840 size=144 callers=0 calls=0
*/
void sub_d30840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30840ULL || rel >= 0xd308d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d308d0 size=144 callers=0 calls=0
*/
void sub_d308d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd308d0ULL || rel >= 0xd30960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d30960 size=144 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_d30960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30960ULL || rel >= 0xd309f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d309f0 size=704 callers=0 calls=8
   calls: sub_59b250, sub_5b9220, sub_5b9400, sub_65d220, sub_b4a5e0, sub_d30cb0, sub_d30e70, sub_d31040
*/
void sub_d309f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd309f0ULL || rel >= 0xd30cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d30cb0 size=448 callers=1 calls=3
   calls: sub_5cc540, sub_b33a30, sub_b4c060
*/
void sub_d30cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30cb0ULL || rel >= 0xd30e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d30e70 size=464 callers=1 calls=3
   calls: sub_59a520, sub_972c70, sub_b4a5e0
*/
void sub_d30e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30e70ULL || rel >= 0xd31040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31040 size=512 callers=1 calls=5
   calls: sub_59a520, sub_5cc540, sub_b4a5e0, sub_c9e5f0, sub_ca0b90
*/
void sub_d31040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31040ULL || rel >= 0xd31240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31240 size=160 callers=0 calls=0
*/
void sub_d31240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31240ULL || rel >= 0xd312e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d312e0 size=160 callers=0 calls=0
*/
void sub_d312e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd312e0ULL || rel >= 0xd31380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31380 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d31380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31380ULL || rel >= 0xd31430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31430 size=160 callers=0 calls=0
*/
void sub_d31430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31430ULL || rel >= 0xd314d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d314d0 size=160 callers=0 calls=0
*/
void sub_d314d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd314d0ULL || rel >= 0xd31570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31570 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d31570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31570ULL || rel >= 0xd31620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31620 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d31620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31620ULL || rel >= 0xd316d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d316d0 size=160 callers=0 calls=0
*/
void sub_d316d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd316d0ULL || rel >= 0xd31770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31770 size=160 callers=0 calls=0
*/
void sub_d31770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31770ULL || rel >= 0xd31810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31810 size=128 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_d31810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31810ULL || rel >= 0xd31890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31890 size=544 callers=0 calls=5
   calls: fi01_wait01, fi20_walk01, sub_d24480, sub_d31ab0, sub_d31e30
*/
void sub_d31890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31890ULL || rel >= 0xd31ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31ab0 size=464 callers=1 calls=5
   calls: sub_5cc540, sub_b33a30, sub_b4c060, sub_c63670, sub_c63690
*/
void sub_d31ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31ab0ULL || rel >= 0xd31c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31c80 size=432 callers=2 calls=3
   calls: sub_d237f0, sub_d23d00, sub_d24480
   ref: fi01_wait01
*/
void fi01_wait01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31c80ULL || rel >= 0xd31e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d31e30 size=976 callers=1 calls=3
   calls: sub_59a520, sub_b4a5e0, sub_d24480
*/
void sub_d31e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd31e30ULL || rel >= 0xd32200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32200 size=432 callers=1 calls=1
   calls: sub_d237f0
   ref: fi20_walk01
   ref: fi21_run01
*/
void fi20_walk01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32200ULL || rel >= 0xd323b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d323b0 size=416 callers=0 calls=4
   calls: sub_59a520, sub_5cc540, sub_b4a5e0, sub_c63670
*/
void sub_d323b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd323b0ULL || rel >= 0xd32550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32550 size=144 callers=0 calls=0
*/
void sub_d32550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32550ULL || rel >= 0xd325e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d325e0 size=144 callers=0 calls=0
*/
void sub_d325e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd325e0ULL || rel >= 0xd32670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32670 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d32670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32670ULL || rel >= 0xd32720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32720 size=144 callers=0 calls=0
*/
void sub_d32720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32720ULL || rel >= 0xd327b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d327b0 size=144 callers=0 calls=0
*/
void sub_d327b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd327b0ULL || rel >= 0xd32840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32840 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d32840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32840ULL || rel >= 0xd328f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d328f0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d328f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd328f0ULL || rel >= 0xd329a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d329a0 size=144 callers=0 calls=0
*/
void sub_d329a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd329a0ULL || rel >= 0xd32a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32a30 size=144 callers=0 calls=0
*/
void sub_d32a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32a30ULL || rel >= 0xd32ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32ac0 size=512 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_d32ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32ac0ULL || rel >= 0xd32cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32cc0 size=160 callers=0 calls=0
*/
void sub_d32cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32cc0ULL || rel >= 0xd32d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32d60 size=160 callers=0 calls=0
*/
void sub_d32d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32d60ULL || rel >= 0xd32e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32e00 size=160 callers=0 calls=0
*/
void sub_d32e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32e00ULL || rel >= 0xd32ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32ea0 size=160 callers=0 calls=0
*/
void sub_d32ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32ea0ULL || rel >= 0xd32f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32f40 size=160 callers=0 calls=0
*/
void sub_d32f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32f40ULL || rel >= 0xd32fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d32fe0 size=160 callers=0 calls=0
*/
void sub_d32fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd32fe0ULL || rel >= 0xd33080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d33080 size=64 callers=0 calls=0
*/
void sub_d33080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd33080ULL || rel >= 0xd330c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d330c0 size=1840 callers=0 calls=7
   calls: sub_59b250, sub_5b9400, sub_607750, sub_612f70, sub_65d220, sub_d34360, sub_d34470
*/
void sub_d330c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd330c0ULL || rel >= 0xd337f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d337f0 size=16 callers=0 calls=0
*/
void sub_d337f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd337f0ULL || rel >= 0xd33800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d33800 size=48 callers=0 calls=0
*/
void sub_d33800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd33800ULL || rel >= 0xd33830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d33830 size=48 callers=0 calls=0
*/
void sub_d33830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd33830ULL || rel >= 0xd33860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d33860 size=1504 callers=0 calls=10
   calls: sub_59bee0, sub_5cc540, sub_5cfad0, sub_612ef0, sub_972c70, sub_990590, sub_c63670, sub_c63690, sub_cf2cf0, sub_d34470
   ref: LThigh
   ref: RThigh
*/
void RThigh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd33860ULL || rel >= 0xd33e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d33e40 size=16 callers=0 calls=0
*/
void sub_d33e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd33e40ULL || rel >= 0xd33e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d33e50 size=320 callers=0 calls=3
   calls: sub_5cc540, sub_c63670, sub_ca0b90
*/
void sub_d33e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd33e50ULL || rel >= 0xd33f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d33f90 size=224 callers=1 calls=4
   calls: categoryHash, sub_b3abe0, sub_b4c080, sub_b57210
*/
void sub_d33f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd33f90ULL || rel >= 0xd34070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d34070 size=224 callers=1 calls=4
   calls: sub_b3abe0, sub_b4c080, sub_b57210, turnAngleFactor
*/
void sub_d34070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd34070ULL || rel >= 0xd34150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d34150 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d34150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd34150ULL || rel >= 0xd34200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d34200 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d34200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd34200ULL || rel >= 0xd342b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d342b0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d342b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd342b0ULL || rel >= 0xd34360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d34360 size=272 callers=1 calls=2
   calls: fi1001_dowsingwait01_loop, sub_d23150
*/
void sub_d34360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd34360ULL || rel >= 0xd34470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d34470 size=816 callers=2 calls=1
   calls: sub_972c70
*/
void sub_d34470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd34470ULL || rel >= 0xd347a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d347a0 size=16 callers=0 calls=0
*/
void sub_d347a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd347a0ULL || rel >= 0xd347b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d347b0 size=16 callers=0 calls=0
*/
void sub_d347b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd347b0ULL || rel >= 0xd347c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d347c0 size=112 callers=1 calls=1
   calls: sub_c902f0
*/
void sub_d347c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd347c0ULL || rel >= 0xd34830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d34830 size=16 callers=0 calls=0
*/
void sub_d34830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd34830ULL || rel >= 0xd34840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d34840 size=112 callers=0 calls=1
   calls: sub_d349d0
*/
void sub_d34840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd34840ULL || rel >= 0xd348b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d348b0 size=16 callers=0 calls=0
*/
void sub_d348b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd348b0ULL || rel >= 0xd348c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d348c0 size=16 callers=0 calls=0
*/
void sub_d348c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd348c0ULL || rel >= 0xd348d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d348d0 size=112 callers=0 calls=1
   calls: sub_d349d0
*/
void sub_d348d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd348d0ULL || rel >= 0xd34940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d34940 size=112 callers=0 calls=1
   calls: sub_d349d0
*/
void sub_d34940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd34940ULL || rel >= 0xd349b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d349b0 size=16 callers=0 calls=0
*/
void sub_d349b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd349b0ULL || rel >= 0xd349c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d349c0 size=16 callers=0 calls=0
*/
void sub_d349c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd349c0ULL || rel >= 0xd349d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d349d0 size=304 callers=3 calls=1
   calls: sub_967240
*/
void sub_d349d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd349d0ULL || rel >= 0xd34b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d34b00 size=1120 callers=1 calls=3
   calls: sub_c90420, sub_d34f60, sub_d37610
*/
void sub_d34b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd34b00ULL || rel >= 0xd34f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d34f60 size=1232 callers=3 calls=1
   calls: sub_13c9e50
*/
void sub_d34f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd34f60ULL || rel >= 0xd35430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d35430 size=1776 callers=0 calls=10
   calls: sub_c906c0, sub_ce8ca0, sub_d260c0, sub_d35c00, sub_d36f80, sub_d370b0, sub_d37200, sub_d37330, sub_d37410, sub_d37660
*/
void sub_d35430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd35430ULL || rel >= 0xd35b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d35b20 size=224 callers=5 calls=0
*/
void sub_d35b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd35b20ULL || rel >= 0xd35c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d35c00 size=176 callers=2 calls=0
*/
void sub_d35c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd35c00ULL || rel >= 0xd35cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d35cb0 size=96 callers=0 calls=4
   calls: sub_c62dd0, sub_ce8ca0, sub_d37660, sub_d38270
*/
void sub_d35cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd35cb0ULL || rel >= 0xd35d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d35d10 size=64 callers=0 calls=2
   calls: sub_c88ef0, sub_d260c0
*/
void sub_d35d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd35d10ULL || rel >= 0xd35d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d35d50 size=1328 callers=0 calls=10
   calls: nn_ldn_SetStationAcceptPolicy_2, sub_c88f00, sub_ca8570, sub_ca92c0, sub_ce8ca0, sub_d36280, sub_d37660, sub_d376e0, sub_d37820, sub_d379b0
*/
void sub_d35d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd35d50ULL || rel >= 0xd36280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36280 size=784 callers=1 calls=0
*/
void sub_d36280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36280ULL || rel >= 0xd36590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36590 size=48 callers=0 calls=1
   calls: sub_c641e0
*/
void sub_d36590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36590ULL || rel >= 0xd365c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d365c0 size=64 callers=0 calls=1
   calls: sub_c642d0
*/
void sub_d365c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd365c0ULL || rel >= 0xd36600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36600 size=112 callers=0 calls=1
   calls: sub_c634b0
*/
void sub_d36600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36600ULL || rel >= 0xd36670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36670 size=176 callers=0 calls=1
   calls: sub_c63630
*/
void sub_d36670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36670ULL || rel >= 0xd36720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36720 size=256 callers=0 calls=0
*/
void sub_d36720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36720ULL || rel >= 0xd36820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36820 size=176 callers=1 calls=4
   calls: sub_ce8ca0, sub_d35c00, sub_d37660, sub_d38270
*/
void sub_d36820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36820ULL || rel >= 0xd368d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d368d0 size=48 callers=1 calls=0
*/
void sub_d368d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd368d0ULL || rel >= 0xd36900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36900 size=48 callers=1 calls=1
   calls: sub_d37660
*/
void sub_d36900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36900ULL || rel >= 0xd36930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36930 size=112 callers=10 calls=3
   calls: sub_ce8ca0, sub_d37660, sub_d38270
*/
void sub_d36930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36930ULL || rel >= 0xd369a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d369a0 size=16 callers=1 calls=0
*/
void sub_d369a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd369a0ULL || rel >= 0xd369b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d369b0 size=16 callers=2 calls=0
*/
void sub_d369b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd369b0ULL || rel >= 0xd369c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d369c0 size=112 callers=3 calls=0
*/
void sub_d369c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd369c0ULL || rel >= 0xd36a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36a30 size=48 callers=1 calls=0
*/
void sub_d36a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36a30ULL || rel >= 0xd36a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36a60 size=16 callers=2 calls=0
*/
void sub_d36a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36a60ULL || rel >= 0xd36a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36a70 size=48 callers=4 calls=0
*/
void sub_d36a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36a70ULL || rel >= 0xd36aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36aa0 size=320 callers=3 calls=2
   calls: sub_d37660, sub_d38270
*/
void sub_d36aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36aa0ULL || rel >= 0xd36be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36be0 size=16 callers=2 calls=0
*/
void sub_d36be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36be0ULL || rel >= 0xd36bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36bf0 size=32 callers=1 calls=0
*/
void sub_d36bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36bf0ULL || rel >= 0xd36c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36c10 size=16 callers=1 calls=0
*/
void sub_d36c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36c10ULL || rel >= 0xd36c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36c20 size=80 callers=0 calls=1
   calls: sub_ce8ca0
*/
void sub_d36c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36c20ULL || rel >= 0xd36c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36c70 size=352 callers=0 calls=0
*/
void sub_d36c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36c70ULL || rel >= 0xd36dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36dd0 size=16 callers=0 calls=0
*/
void sub_d36dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36dd0ULL || rel >= 0xd36de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36de0 size=112 callers=0 calls=1
   calls: sub_13ed330
*/
void sub_d36de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36de0ULL || rel >= 0xd36e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36e50 size=16 callers=0 calls=0
*/
void sub_d36e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36e50ULL || rel >= 0xd36e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36e60 size=16 callers=0 calls=0
*/
void sub_d36e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36e60ULL || rel >= 0xd36e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36e70 size=16 callers=0 calls=0
*/
void sub_d36e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36e70ULL || rel >= 0xd36e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36e80 size=112 callers=0 calls=1
   calls: sub_13ed330
*/
void sub_d36e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36e80ULL || rel >= 0xd36ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36ef0 size=112 callers=0 calls=1
   calls: sub_13ed330
*/
void sub_d36ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36ef0ULL || rel >= 0xd36f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36f60 size=16 callers=0 calls=0
*/
void sub_d36f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36f60ULL || rel >= 0xd36f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36f70 size=16 callers=0 calls=0
*/
void sub_d36f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36f70ULL || rel >= 0xd36f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d36f80 size=304 callers=1 calls=0
*/
void sub_d36f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd36f80ULL || rel >= 0xd370b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d370b0 size=336 callers=1 calls=0
*/
void sub_d370b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd370b0ULL || rel >= 0xd37200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d37200 size=304 callers=1 calls=0
*/
void sub_d37200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd37200ULL || rel >= 0xd37330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d37330 size=224 callers=1 calls=1
   calls: sub_d37860
*/
void sub_d37330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd37330ULL || rel >= 0xd37410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d37410 size=384 callers=1 calls=0
*/
void sub_d37410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd37410ULL || rel >= 0xd37590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d37590 size=128 callers=0 calls=0
*/
void sub_d37590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd37590ULL || rel >= 0xd37610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d37610 size=80 callers=1 calls=0
*/
void sub_d37610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd37610ULL || rel >= 0xd37660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d37660 size=128 callers=7 calls=0
*/
void sub_d37660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd37660ULL || rel >= 0xd376e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d376e0 size=320 callers=1 calls=0
*/
void sub_d376e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd376e0ULL || rel >= 0xd37820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d37820 size=64 callers=1 calls=0
*/
void sub_d37820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd37820ULL || rel >= 0xd37860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d37860 size=336 callers=2 calls=0
*/
void sub_d37860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd37860ULL || rel >= 0xd379b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d379b0 size=2240 callers=1 calls=8
   calls: sub_13a6cd0, sub_13ed240, sub_969d40, sub_972c70, sub_cacbf0, sub_d45b70, sub_ea3d10, sub_ea4810
*/
void sub_d379b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd379b0ULL || rel >= 0xd38270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38270 size=64 callers=4 calls=0
*/
void sub_d38270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38270ULL || rel >= 0xd382b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d382b0 size=80 callers=0 calls=0
*/
void sub_d382b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd382b0ULL || rel >= 0xd38300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38300 size=80 callers=0 calls=0
*/
void sub_d38300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38300ULL || rel >= 0xd38350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38350 size=16 callers=0 calls=0
*/
void sub_d38350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38350ULL || rel >= 0xd38360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38360 size=16 callers=0 calls=0
*/
void sub_d38360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38360ULL || rel >= 0xd38370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38370 size=80 callers=0 calls=0
*/
void sub_d38370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38370ULL || rel >= 0xd383c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d383c0 size=80 callers=0 calls=0
*/
void sub_d383c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd383c0ULL || rel >= 0xd38410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38410 size=80 callers=0 calls=0
*/
void sub_d38410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38410ULL || rel >= 0xd38460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38460 size=16 callers=0 calls=0
*/
void sub_d38460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38460ULL || rel >= 0xd38470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38470 size=80 callers=0 calls=0
*/
void sub_d38470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38470ULL || rel >= 0xd384c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d384c0 size=16 callers=0 calls=0
*/
void sub_d384c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd384c0ULL || rel >= 0xd384d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d384d0 size=128 callers=0 calls=0
*/
void sub_d384d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd384d0ULL || rel >= 0xd38550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38550 size=1296 callers=0 calls=3
   calls: sub_972c70, sub_d38a60, sub_d39a10
*/
void sub_d38550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38550ULL || rel >= 0xd38a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38a60 size=1024 callers=2 calls=3
   calls: sub_967240, sub_972c70, sub_d39a10
*/
void sub_d38a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38a60ULL || rel >= 0xd38e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38e60 size=64 callers=0 calls=0
*/
void sub_d38e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38e60ULL || rel >= 0xd38ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38ea0 size=48 callers=0 calls=0
*/
void sub_d38ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38ea0ULL || rel >= 0xd38ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d38ed0 size=976 callers=0 calls=4
   calls: sub_13c9e50, sub_ce9be0, sub_d38a60, sub_d39a10
*/
void sub_d38ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd38ed0ULL || rel >= 0xd392a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d392a0 size=1280 callers=0 calls=2
   calls: sub_972c70, sub_d39a10
*/
void sub_d392a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd392a0ULL || rel >= 0xd397a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d397a0 size=128 callers=0 calls=0
*/
void sub_d397a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd397a0ULL || rel >= 0xd39820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39820 size=128 callers=0 calls=0
*/
void sub_d39820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39820ULL || rel >= 0xd398a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d398a0 size=16 callers=0 calls=0
*/
void sub_d398a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd398a0ULL || rel >= 0xd398b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d398b0 size=16 callers=0 calls=0
*/
void sub_d398b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd398b0ULL || rel >= 0xd398c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d398c0 size=16 callers=0 calls=0
*/
void sub_d398c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd398c0ULL || rel >= 0xd398d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d398d0 size=16 callers=0 calls=0
*/
void sub_d398d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd398d0ULL || rel >= 0xd398e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d398e0 size=48 callers=0 calls=0
*/
void sub_d398e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd398e0ULL || rel >= 0xd39910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39910 size=128 callers=0 calls=0
*/
void sub_d39910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39910ULL || rel >= 0xd39990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39990 size=128 callers=0 calls=0
*/
void sub_d39990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39990ULL || rel >= 0xd39a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39a10 size=464 callers=15 calls=1
   calls: sub_967240
*/
void sub_d39a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39a10ULL || rel >= 0xd39be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39be0 size=128 callers=0 calls=0
*/
void sub_d39be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39be0ULL || rel >= 0xd39c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39c60 size=112 callers=0 calls=0
*/
void sub_d39c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39c60ULL || rel >= 0xd39cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39cd0 size=80 callers=0 calls=0
*/
void sub_d39cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39cd0ULL || rel >= 0xd39d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39d20 size=64 callers=0 calls=0
*/
void sub_d39d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39d20ULL || rel >= 0xd39d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39d60 size=64 callers=0 calls=0
*/
void sub_d39d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39d60ULL || rel >= 0xd39da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39da0 size=16 callers=0 calls=0
*/
void sub_d39da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39da0ULL || rel >= 0xd39db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39db0 size=480 callers=1 calls=2
   calls: sub_ce9be0, sub_d39a10
*/
void sub_d39db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39db0ULL || rel >= 0xd39f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d39f90 size=464 callers=0 calls=2
   calls: sub_972c70, sub_d39a10
*/
void sub_d39f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd39f90ULL || rel >= 0xd3a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3a160 size=16 callers=0 calls=0
*/
void sub_d3a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a160ULL || rel >= 0xd3a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3a170 size=320 callers=0 calls=1
   calls: sub_d39a10
*/
void sub_d3a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a170ULL || rel >= 0xd3a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3a2b0 size=80 callers=0 calls=0
*/
void sub_d3a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a2b0ULL || rel >= 0xd3a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3a300 size=80 callers=0 calls=0
*/
void sub_d3a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a300ULL || rel >= 0xd3a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3a350 size=16 callers=0 calls=0
*/
void sub_d3a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a350ULL || rel >= 0xd3a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3a360 size=80 callers=0 calls=0
*/
void sub_d3a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a360ULL || rel >= 0xd3a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3a3b0 size=80 callers=0 calls=0
*/
void sub_d3a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a3b0ULL || rel >= 0xd3a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3a400 size=128 callers=0 calls=0
*/
void sub_d3a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a400ULL || rel >= 0xd3a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3a480 size=864 callers=0 calls=2
   calls: sub_972c70, sub_d39a10
*/
void sub_d3a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a480ULL || rel >= 0xd3a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3a7e0 size=768 callers=0 calls=2
   calls: sub_13c9e50, sub_d39a10
*/
void sub_d3a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a7e0ULL || rel >= 0xd3aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3aae0 size=1312 callers=0 calls=2
   calls: sub_972c70, sub_d39a10
*/
void sub_d3aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3aae0ULL || rel >= 0xd3b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b000 size=80 callers=0 calls=0
*/
void sub_d3b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b000ULL || rel >= 0xd3b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b050 size=80 callers=0 calls=0
*/
void sub_d3b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b050ULL || rel >= 0xd3b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b0a0 size=80 callers=0 calls=0
*/
void sub_d3b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b0a0ULL || rel >= 0xd3b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b0f0 size=128 callers=0 calls=0
*/
void sub_d3b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b0f0ULL || rel >= 0xd3b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b170 size=320 callers=0 calls=0
*/
void sub_d3b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b170ULL || rel >= 0xd3b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b2b0 size=80 callers=0 calls=0
*/
void sub_d3b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b2b0ULL || rel >= 0xd3b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b300 size=80 callers=0 calls=0
*/
void sub_d3b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b300ULL || rel >= 0xd3b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b350 size=80 callers=0 calls=0
*/
void sub_d3b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b350ULL || rel >= 0xd3b3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b3a0 size=576 callers=0 calls=1
   calls: sub_ce9be0
*/
void sub_d3b3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b3a0ULL || rel >= 0xd3b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b5e0 size=176 callers=0 calls=2
   calls: sub_ce9be0, sub_d39db0
*/
void sub_d3b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b5e0ULL || rel >= 0xd3b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b690 size=80 callers=0 calls=0
*/
void sub_d3b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b690ULL || rel >= 0xd3b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b6e0 size=80 callers=0 calls=0
*/
void sub_d3b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b6e0ULL || rel >= 0xd3b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b730 size=80 callers=0 calls=0
*/
void sub_d3b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b730ULL || rel >= 0xd3b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b780 size=128 callers=0 calls=0
*/
void sub_d3b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b780ULL || rel >= 0xd3b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b800 size=144 callers=1 calls=1
   calls: gfbmdl_2
*/
void sub_d3b800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b800ULL || rel >= 0xd3b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b890 size=16 callers=0 calls=0
*/
void sub_d3b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b890ULL || rel >= 0xd3b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b8a0 size=16 callers=0 calls=0
*/
void sub_d3b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b8a0ULL || rel >= 0xd3b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b8b0 size=176 callers=0 calls=1
   calls: sub_5cbcf0
*/
void sub_d3b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b8b0ULL || rel >= 0xd3b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b960 size=16 callers=0 calls=0
*/
void sub_d3b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b960ULL || rel >= 0xd3b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b970 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d3b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b970ULL || rel >= 0xd3b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3b9c0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d3b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3b9c0ULL || rel >= 0xd3ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3ba10 size=112 callers=0 calls=1
   calls: sub_d3bca0
*/
void sub_d3ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3ba10ULL || rel >= 0xd3ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3ba80 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d3ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3ba80ULL || rel >= 0xd3bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3bad0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d3bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3bad0ULL || rel >= 0xd3bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3bb20 size=112 callers=0 calls=1
   calls: sub_d3bca0
*/
void sub_d3bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3bb20ULL || rel >= 0xd3bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3bb90 size=112 callers=0 calls=1
   calls: sub_d3bca0
*/
void sub_d3bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3bb90ULL || rel >= 0xd3bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3bc00 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d3bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3bc00ULL || rel >= 0xd3bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3bc50 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d3bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3bc50ULL || rel >= 0xd3bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3bca0 size=304 callers=3 calls=1
   calls: sub_967240
*/
void sub_d3bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3bca0ULL || rel >= 0xd3bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3bdd0 size=1104 callers=1 calls=4
   calls: FieldObject__lu, sub_c8e9a0, sub_c8eab0, sub_cee3c0
*/
void sub_d3bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3bdd0ULL || rel >= 0xd3c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c220 size=48 callers=0 calls=1
   calls: sub_c629e0
*/
void sub_d3c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c220ULL || rel >= 0xd3c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c250 size=272 callers=0 calls=7
   calls: sub_5c6830, sub_5c6850, sub_5c68f0, sub_5c8dd0, sub_c8edb0, sub_c8f410, sub_c8f490
*/
void sub_d3c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c250ULL || rel >= 0xd3c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c360 size=16 callers=4 calls=0
*/
void sub_d3c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c360ULL || rel >= 0xd3c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

