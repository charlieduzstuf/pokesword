/* main functions 011e5b90..011fdbc0 (150 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 011e5b90 size=16 callers=0 calls=0
*/
void sub_11e5b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5b90ULL || rel >= 0x11e5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5ba0 size=224 callers=0 calls=0
*/
void sub_11e5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5ba0ULL || rel >= 0x11e5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5c80 size=224 callers=0 calls=0
*/
void sub_11e5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5c80ULL || rel >= 0x11e5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5d60 size=16 callers=0 calls=0
*/
void sub_11e5d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5d60ULL || rel >= 0x11e5d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5d70 size=224 callers=0 calls=0
*/
void sub_11e5d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5d70ULL || rel >= 0x11e5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5e50 size=224 callers=0 calls=0
*/
void sub_11e5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5e50ULL || rel >= 0x11e5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5f30 size=16 callers=0 calls=0
*/
void sub_11e5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5f30ULL || rel >= 0x11e5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5f40 size=16 callers=0 calls=0
*/
void sub_11e5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5f40ULL || rel >= 0x11e5f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5f50 size=224 callers=0 calls=0
*/
void sub_11e5f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5f50ULL || rel >= 0x11e6030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6030 size=224 callers=0 calls=0
*/
void sub_11e6030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6030ULL || rel >= 0x11e6110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6110 size=304 callers=0 calls=0
*/
void sub_11e6110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6110ULL || rel >= 0x11e6240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6240 size=560 callers=0 calls=4
   calls: sub_1128e40, sub_68d9b0, sub_68d9f0, sub_794310
   ref: Stop_Camp_Cooking_PotBoiling_lp
   ref: Camp_PotBoiling
*/
void Stop_Camp_Cooking_PotBoiling_lp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6240ULL || rel >= 0x11e6470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6470 size=16 callers=0 calls=0
*/
void sub_11e6470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6470ULL || rel >= 0x11e6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6480 size=16 callers=0 calls=0
*/
void sub_11e6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6480ULL || rel >= 0x11e6490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6490 size=16 callers=0 calls=0
*/
void sub_11e6490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6490ULL || rel >= 0x11e64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e64a0 size=16 callers=0 calls=0
*/
void sub_11e64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e64a0ULL || rel >= 0x11e64b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e64b0 size=16 callers=0 calls=0
*/
void sub_11e64b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e64b0ULL || rel >= 0x11e64c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e64c0 size=16 callers=0 calls=0
*/
void sub_11e64c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e64c0ULL || rel >= 0x11e64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e64d0 size=560 callers=0 calls=10
   calls: Play_Camp_Cooking_PotBoiling_lp, Stop_Camp_Cooking_PotBoiling_lp_2, sub_11e6700, sub_11e6940, sub_11e6b00, sub_11e6e00, sub_11e7160, sub_11e7280, sub_11e75f0, sub_794310
   ref: Camp_PotBoiling
*/
void Camp_PotBoiling(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e64d0ULL || rel >= 0x11e6700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6700 size=336 callers=2 calls=3
   calls: sub_11cc3b0, sub_11e1270, sub_967240
*/
void sub_11e6700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6700ULL || rel >= 0x11e6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6850 size=240 callers=1 calls=4
   calls: sub_1128e40, sub_68d950, sub_68d9b0, sub_68d9f0
   ref: Stop_Camp_Cooking_PotBoiling_lp
*/
void Stop_Camp_Cooking_PotBoiling_lp_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6850ULL || rel >= 0x11e6940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6940 size=208 callers=3 calls=3
   calls: sub_68d950, sub_68d9b0, sub_68d9f0
*/
void sub_11e6940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6940ULL || rel >= 0x11e6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6a10 size=240 callers=1 calls=4
   calls: sub_1128e40, sub_68d950, sub_68d9b0, sub_68d9f0
   ref: Play_Camp_Cooking_PotBoiling_lp
*/
void Play_Camp_Cooking_PotBoiling_lp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6a10ULL || rel >= 0x11e6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6b00 size=768 callers=1 calls=2
   calls: sub_11e75f0, sub_68da30
*/
void sub_11e6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6b00ULL || rel >= 0x11e6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e6e00 size=864 callers=1 calls=3
   calls: sub_11e75f0, sub_17c1ba0, sub_68da30
*/
void sub_11e6e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6e00ULL || rel >= 0x11e7160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7160 size=288 callers=1 calls=4
   calls: sub_11e6700, sub_11e75f0, sub_17c1ba0, sub_68da30
*/
void sub_11e7160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7160ULL || rel >= 0x11e7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7280 size=256 callers=1 calls=3
   calls: sub_11e75f0, sub_17c1ba0, sub_68da30
*/
void sub_11e7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7280ULL || rel >= 0x11e7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7380 size=160 callers=3 calls=3
   calls: sub_11cb730, sub_68d630, sub_68d910
*/
void sub_11e7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7380ULL || rel >= 0x11e7420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7420 size=160 callers=1 calls=4
   calls: sub_11cb730, sub_68d630, sub_68d910, sub_68d950
*/
void sub_11e7420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7420ULL || rel >= 0x11e74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e74c0 size=144 callers=1 calls=3
   calls: sub_11cb730, sub_68d630, sub_68d910
*/
void sub_11e74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e74c0ULL || rel >= 0x11e7550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7550 size=64 callers=2 calls=1
   calls: sub_11e6940
*/
void sub_11e7550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7550ULL || rel >= 0x11e7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7590 size=96 callers=1 calls=1
   calls: sub_68d9f0
*/
void sub_11e7590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7590ULL || rel >= 0x11e75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e75f0 size=352 callers=6 calls=3
   calls: sub_11d0150, sub_11e0fc0, sub_967240
*/
void sub_11e75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e75f0ULL || rel >= 0x11e7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7750 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11e7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7750ULL || rel >= 0x11e77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e77c0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11e77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e77c0ULL || rel >= 0x11e7830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7830 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11e7830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7830ULL || rel >= 0x11e78a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e78a0 size=624 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11e78a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e78a0ULL || rel >= 0x11e7b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7b10 size=320 callers=0 calls=4
   calls: sub_11c6060, sub_11e7c50, sub_13f68d0, sub_68d9f0
*/
void sub_11e7b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7b10ULL || rel >= 0x11e7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7c50 size=272 callers=1 calls=0
*/
void sub_11e7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7c50ULL || rel >= 0x11e7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7d60 size=16 callers=0 calls=0
*/
void sub_11e7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7d60ULL || rel >= 0x11e7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7d70 size=16 callers=0 calls=0
*/
void sub_11e7d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7d70ULL || rel >= 0x11e7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7d80 size=16 callers=0 calls=0
*/
void sub_11e7d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7d80ULL || rel >= 0x11e7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7d90 size=16 callers=0 calls=0
*/
void sub_11e7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7d90ULL || rel >= 0x11e7da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7da0 size=16 callers=0 calls=0
*/
void sub_11e7da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7da0ULL || rel >= 0x11e7db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7db0 size=16 callers=0 calls=0
*/
void sub_11e7db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7db0ULL || rel >= 0x11e7dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7dc0 size=176 callers=0 calls=2
   calls: pokecamp_kinomi__02d, sub_c43ed0
*/
void sub_11e7dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7dc0ULL || rel >= 0x11e7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e7e70 size=1040 callers=1 calls=9
   calls: sub_11e8280, sub_11e85c0, sub_11e8a00, sub_11e9830, sub_11e9920, sub_11e9a00, sub_5d99d0, sub_68d630, sub_68d910
*/
void sub_11e7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e7e70ULL || rel >= 0x11e8280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e8280 size=832 callers=1 calls=0
*/
void sub_11e8280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e8280ULL || rel >= 0x11e85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e85c0 size=1088 callers=11 calls=12
   calls: sub_111b250, sub_11e8ba0, sub_11e9920, sub_11e9b00, sub_11ebfd0, sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_5d99d0, sub_967240, sub_986200, sub_ea9cc0
*/
void sub_11e85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e85c0ULL || rel >= 0x11e8a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e8a00 size=304 callers=1 calls=3
   calls: sub_11e9830, sub_5d99d0, sub_967240
*/
void sub_11e8a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e8a00ULL || rel >= 0x11e8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e8b30 size=112 callers=2 calls=0
*/
void sub_11e8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e8b30ULL || rel >= 0x11e8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e8ba0 size=288 callers=1 calls=2
   calls: sub_11e9700, sub_1c0
*/
void sub_11e8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e8ba0ULL || rel >= 0x11e8cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e8cc0 size=912 callers=1 calls=7
   calls: sub_112ea00, sub_11e9be0, sub_11e9e20, sub_11eaa50, sub_11eaac0, sub_11ec3d0, sub_786a40
   ref: bin/appli/pokecamp/pokecamp_kinomi_%02d.bntx
*/
void pokecamp_kinomi__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e8cc0ULL || rel >= 0x11e9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9050 size=608 callers=0 calls=4
   calls: Play_Camp_Cooking_NutsIntoPot, sub_112ea00, sub_11e9e20, sub_11eaa50
*/
void sub_11e9050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9050ULL || rel >= 0x11e92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e92b0 size=288 callers=0 calls=7
   calls: sub_112ea00, sub_11e9be0, sub_11ea390, sub_11ec3d0, sub_11ecdf0, sub_11ece60, sub_786a40
   ref: bin/appli/pokecamp/pokecamp_food_%02d.bntx
*/
void pokecamp_food__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e92b0ULL || rel >= 0x11e93d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e93d0 size=288 callers=0 calls=4
   calls: sub_112ea00, sub_11ea390, sub_11ecdf0, sub_11ed4b0
*/
void sub_11e93d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e93d0ULL || rel >= 0x11e94f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e94f0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11e94f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e94f0ULL || rel >= 0x11e95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e95a0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11e95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e95a0ULL || rel >= 0x11e9650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9650 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11e9650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9650ULL || rel >= 0x11e9700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9700 size=304 callers=1 calls=0
*/
void sub_11e9700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9700ULL || rel >= 0x11e9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9830 size=240 callers=2 calls=1
   calls: sub_68d370
*/
void sub_11e9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9830ULL || rel >= 0x11e9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9920 size=224 callers=2 calls=1
   calls: sub_11ecc50
*/
void sub_11e9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9920ULL || rel >= 0x11e9a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9a00 size=256 callers=10 calls=2
   calls: sub_11ea8f0, sub_5d99d0
*/
void sub_11e9a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9a00ULL || rel >= 0x11e9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9b00 size=224 callers=1 calls=1
   calls: sub_11ebf20
*/
void sub_11e9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9b00ULL || rel >= 0x11e9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9be0 size=336 callers=2 calls=3
   calls: sub_11e9d30, sub_5cf8e0, sub_5cf8f0
*/
void sub_11e9be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9be0ULL || rel >= 0x11e9d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9d30 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11e9d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9d30ULL || rel >= 0x11e9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9e20 size=336 callers=2 calls=3
   calls: sub_11e9f70, sub_5cf8e0, sub_5cf8f0
*/
void sub_11e9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9e20ULL || rel >= 0x11e9f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e9f70 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11e9f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9f70ULL || rel >= 0x11ea060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea060 size=128 callers=0 calls=0
*/
void sub_11ea060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea060ULL || rel >= 0x11ea0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea0e0 size=16 callers=0 calls=0
*/
void sub_11ea0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea0e0ULL || rel >= 0x11ea0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea0f0 size=16 callers=0 calls=0
*/
void sub_11ea0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea0f0ULL || rel >= 0x11ea100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea100 size=16 callers=0 calls=0
*/
void sub_11ea100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea100ULL || rel >= 0x11ea110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea110 size=16 callers=0 calls=0
*/
void sub_11ea110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea110ULL || rel >= 0x11ea120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea120 size=16 callers=0 calls=0
*/
void sub_11ea120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea120ULL || rel >= 0x11ea130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea130 size=16 callers=0 calls=0
*/
void sub_11ea130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea130ULL || rel >= 0x11ea140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea140 size=16 callers=0 calls=0
*/
void sub_11ea140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea140ULL || rel >= 0x11ea150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea150 size=64 callers=0 calls=1
   calls: sub_68d9b0
*/
void sub_11ea150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea150ULL || rel >= 0x11ea190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea190 size=16 callers=0 calls=0
*/
void sub_11ea190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea190ULL || rel >= 0x11ea1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea1a0 size=16 callers=0 calls=0
*/
void sub_11ea1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea1a0ULL || rel >= 0x11ea1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea1b0 size=16 callers=0 calls=0
*/
void sub_11ea1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea1b0ULL || rel >= 0x11ea1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea1c0 size=288 callers=0 calls=1
   calls: sub_117a6c0
*/
void sub_11ea1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea1c0ULL || rel >= 0x11ea2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea2e0 size=16 callers=0 calls=0
*/
void sub_11ea2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea2e0ULL || rel >= 0x11ea2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea2f0 size=16 callers=0 calls=0
*/
void sub_11ea2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea2f0ULL || rel >= 0x11ea300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea300 size=16 callers=0 calls=0
*/
void sub_11ea300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea300ULL || rel >= 0x11ea310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea310 size=16 callers=0 calls=0
*/
void sub_11ea310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea310ULL || rel >= 0x11ea320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea320 size=16 callers=0 calls=0
*/
void sub_11ea320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea320ULL || rel >= 0x11ea330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea330 size=16 callers=0 calls=0
*/
void sub_11ea330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea330ULL || rel >= 0x11ea340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea340 size=16 callers=0 calls=0
*/
void sub_11ea340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea340ULL || rel >= 0x11ea350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea350 size=16 callers=0 calls=0
*/
void sub_11ea350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea350ULL || rel >= 0x11ea360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea360 size=16 callers=0 calls=0
*/
void sub_11ea360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea360ULL || rel >= 0x11ea370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea370 size=16 callers=0 calls=0
*/
void sub_11ea370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea370ULL || rel >= 0x11ea380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea380 size=16 callers=0 calls=0
*/
void sub_11ea380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea380ULL || rel >= 0x11ea390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea390 size=336 callers=3 calls=3
   calls: sub_11ea4e0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11ea390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea390ULL || rel >= 0x11ea4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea4e0 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11ea4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea4e0ULL || rel >= 0x11ea5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea5d0 size=128 callers=0 calls=0
*/
void sub_11ea5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea5d0ULL || rel >= 0x11ea650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea650 size=16 callers=0 calls=0
*/
void sub_11ea650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea650ULL || rel >= 0x11ea660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea660 size=160 callers=0 calls=3
   calls: Play_Camp_Cooking_MaterialIntoPot, sub_11ea390, sub_11ecdf0
*/
void sub_11ea660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea660ULL || rel >= 0x11ea700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea700 size=16 callers=0 calls=0
*/
void sub_11ea700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea700ULL || rel >= 0x11ea710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea710 size=16 callers=0 calls=0
*/
void sub_11ea710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea710ULL || rel >= 0x11ea720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea720 size=16 callers=0 calls=0
*/
void sub_11ea720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea720ULL || rel >= 0x11ea730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea730 size=16 callers=0 calls=0
*/
void sub_11ea730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea730ULL || rel >= 0x11ea740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea740 size=16 callers=0 calls=0
*/
void sub_11ea740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea740ULL || rel >= 0x11ea750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea750 size=128 callers=0 calls=0
*/
void sub_11ea750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea750ULL || rel >= 0x11ea7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea7d0 size=16 callers=0 calls=0
*/
void sub_11ea7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea7d0ULL || rel >= 0x11ea7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea7e0 size=16 callers=0 calls=0
*/
void sub_11ea7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea7e0ULL || rel >= 0x11ea7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea7f0 size=16 callers=0 calls=0
*/
void sub_11ea7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea7f0ULL || rel >= 0x11ea800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea800 size=16 callers=0 calls=0
*/
void sub_11ea800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea800ULL || rel >= 0x11ea810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea810 size=16 callers=0 calls=0
*/
void sub_11ea810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea810ULL || rel >= 0x11ea820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea820 size=16 callers=0 calls=0
*/
void sub_11ea820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea820ULL || rel >= 0x11ea830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea830 size=16 callers=0 calls=0
*/
void sub_11ea830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea830ULL || rel >= 0x11ea840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea840 size=64 callers=0 calls=1
   calls: sub_68d9b0
*/
void sub_11ea840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea840ULL || rel >= 0x11ea880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea880 size=16 callers=0 calls=0
*/
void sub_11ea880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea880ULL || rel >= 0x11ea890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea890 size=16 callers=0 calls=0
*/
void sub_11ea890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea890ULL || rel >= 0x11ea8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea8a0 size=16 callers=0 calls=0
*/
void sub_11ea8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea8a0ULL || rel >= 0x11ea8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea8b0 size=16 callers=0 calls=0
*/
void sub_11ea8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea8b0ULL || rel >= 0x11ea8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea8c0 size=16 callers=0 calls=0
*/
void sub_11ea8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea8c0ULL || rel >= 0x11ea8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea8d0 size=16 callers=0 calls=0
*/
void sub_11ea8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea8d0ULL || rel >= 0x11ea8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea8e0 size=16 callers=0 calls=0
*/
void sub_11ea8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea8e0ULL || rel >= 0x11ea8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea8f0 size=128 callers=1 calls=1
   calls: sub_5db1b0
*/
void sub_11ea8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea8f0ULL || rel >= 0x11ea970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ea970 size=224 callers=0 calls=1
   calls: sub_11cdcf0
*/
void sub_11ea970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ea970ULL || rel >= 0x11eaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eaa50 size=112 callers=3 calls=0
*/
void sub_11eaa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eaa50ULL || rel >= 0x11eaac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eaac0 size=432 callers=1 calls=3
   calls: sub_112e920, sub_11ced40, sub_967240
*/
void sub_11eaac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eaac0ULL || rel >= 0x11eac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eac70 size=544 callers=1 calls=3
   calls: sub_1128e40, sub_11ced40, sub_967240
   ref: Play_Camp_Cooking_ReadyNuts
*/
void Play_Camp_Cooking_ReadyNuts(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eac70ULL || rel >= 0x11eae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eae90 size=704 callers=1 calls=4
   calls: sub_1128e40, sub_112ea00, sub_11ced40, sub_967240
   ref: Play_Camp_Cooking_NutsIntoPot
*/
void Play_Camp_Cooking_NutsIntoPot(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eae90ULL || rel >= 0x11eb150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eb150 size=432 callers=0 calls=3
   calls: sub_112e660, sub_11ced40, sub_967240
*/
void sub_11eb150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eb150ULL || rel >= 0x11eb300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eb300 size=272 callers=0 calls=0
*/
void sub_11eb300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eb300ULL || rel >= 0x11eb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eb410 size=272 callers=0 calls=0
*/
void sub_11eb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eb410ULL || rel >= 0x11eb520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eb520 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11eb520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eb520ULL || rel >= 0x11eb5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eb5d0 size=272 callers=0 calls=0
*/
void sub_11eb5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eb5d0ULL || rel >= 0x11eb6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eb6e0 size=272 callers=0 calls=0
*/
void sub_11eb6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eb6e0ULL || rel >= 0x11eb7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eb7f0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11eb7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eb7f0ULL || rel >= 0x11eb8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eb8a0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11eb8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eb8a0ULL || rel >= 0x11eb950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eb950 size=272 callers=0 calls=0
*/
void sub_11eb950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eb950ULL || rel >= 0x11eba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eba60 size=272 callers=0 calls=0
*/
void sub_11eba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eba60ULL || rel >= 0x11ebb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebb70 size=112 callers=0 calls=2
   calls: Play_Camp_Cooking_ReadyNuts, sub_112ea00
*/
void sub_11ebb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebb70ULL || rel >= 0x11ebbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebbe0 size=16 callers=0 calls=0
*/
void sub_11ebbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebbe0ULL || rel >= 0x11ebbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebbf0 size=16 callers=0 calls=0
*/
void sub_11ebbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebbf0ULL || rel >= 0x11ebc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebc00 size=16 callers=0 calls=0
*/
void sub_11ebc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebc00ULL || rel >= 0x11ebc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebc10 size=16 callers=0 calls=0
*/
void sub_11ebc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebc10ULL || rel >= 0x11ebc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebc20 size=16 callers=0 calls=0
*/
void sub_11ebc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebc20ULL || rel >= 0x11ebc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebc30 size=16 callers=0 calls=0
*/
void sub_11ebc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebc30ULL || rel >= 0x11ebc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebc40 size=16 callers=0 calls=0
*/
void sub_11ebc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebc40ULL || rel >= 0x11ebc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebc50 size=208 callers=0 calls=2
   calls: sub_112e920, sub_112ea00
*/
void sub_11ebc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebc50ULL || rel >= 0x11ebd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebd20 size=16 callers=0 calls=0
*/
void sub_11ebd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebd20ULL || rel >= 0x11ebd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebd30 size=16 callers=0 calls=0
*/
void sub_11ebd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebd30ULL || rel >= 0x11ebd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebd40 size=16 callers=0 calls=0
*/
void sub_11ebd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebd40ULL || rel >= 0x11ebd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebd50 size=64 callers=0 calls=0
*/
void sub_11ebd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebd50ULL || rel >= 0x11ebd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebd90 size=16 callers=0 calls=0
*/
void sub_11ebd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebd90ULL || rel >= 0x11ebda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebda0 size=16 callers=0 calls=0
*/
void sub_11ebda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebda0ULL || rel >= 0x11ebdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebdb0 size=16 callers=0 calls=0
*/
void sub_11ebdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebdb0ULL || rel >= 0x11ebdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebdc0 size=240 callers=0 calls=0
*/
void sub_11ebdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebdc0ULL || rel >= 0x11ebeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebeb0 size=16 callers=0 calls=0
*/
void sub_11ebeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebeb0ULL || rel >= 0x11ebec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebec0 size=16 callers=0 calls=0
*/
void sub_11ebec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebec0ULL || rel >= 0x11ebed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebed0 size=16 callers=0 calls=0
*/
void sub_11ebed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebed0ULL || rel >= 0x11ebee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebee0 size=16 callers=0 calls=0
*/
void sub_11ebee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebee0ULL || rel >= 0x11ebef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebef0 size=16 callers=0 calls=0
*/
void sub_11ebef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebef0ULL || rel >= 0x11ebf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebf00 size=16 callers=0 calls=0
*/
void sub_11ebf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebf00ULL || rel >= 0x11ebf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebf10 size=16 callers=0 calls=0
*/
void sub_11ebf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebf10ULL || rel >= 0x11ebf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebf20 size=128 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11ebf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebf20ULL || rel >= 0x11ebfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebfa0 size=48 callers=0 calls=1
   calls: sub_112e830
*/
void sub_11ebfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebfa0ULL || rel >= 0x11ebfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ebfd0 size=320 callers=1 calls=4
   calls: sub_618ec0, sub_619060, sub_967240, sub_989700
*/
void sub_11ebfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ebfd0ULL || rel >= 0x11ec110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ec110 size=704 callers=0 calls=6
   calls: sub_59bee0, sub_5fc600, sub_5fda10, sub_61bfe0, sub_682dd0, sub_967240
   ref: plant01_area02
*/
void plant01_area02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ec110ULL || rel >= 0x11ec3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ec3d0 size=304 callers=2 calls=3
   calls: sub_5e2930, sub_c46830, sub_ec20
*/
void sub_11ec3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ec3d0ULL || rel >= 0x11ec500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ec500 size=896 callers=0 calls=1
   calls: sub_112e750
*/
void sub_11ec500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ec500ULL || rel >= 0x11ec880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ec880 size=368 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_11ec880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ec880ULL || rel >= 0x11ec9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ec9f0 size=16 callers=0 calls=0
*/
void sub_11ec9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ec9f0ULL || rel >= 0x11eca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eca00 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11eca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eca00ULL || rel >= 0x11ecab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ecab0 size=16 callers=0 calls=0
*/
void sub_11ecab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ecab0ULL || rel >= 0x11ecac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ecac0 size=16 callers=0 calls=0
*/
void sub_11ecac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ecac0ULL || rel >= 0x11ecad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ecad0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11ecad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ecad0ULL || rel >= 0x11ecb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ecb80 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11ecb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ecb80ULL || rel >= 0x11ecc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ecc30 size=16 callers=0 calls=0
*/
void sub_11ecc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ecc30ULL || rel >= 0x11ecc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ecc40 size=16 callers=0 calls=0
*/
void sub_11ecc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ecc40ULL || rel >= 0x11ecc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ecc50 size=144 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11ecc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ecc50ULL || rel >= 0x11ecce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ecce0 size=272 callers=0 calls=1
   calls: sub_11cdcf0
*/
void sub_11ecce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ecce0ULL || rel >= 0x11ecdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ecdf0 size=112 callers=4 calls=0
*/
void sub_11ecdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ecdf0ULL || rel >= 0x11ece60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ece60 size=432 callers=1 calls=3
   calls: sub_112e920, sub_11ced40, sub_967240
*/
void sub_11ece60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ece60ULL || rel >= 0x11ed010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ed010 size=528 callers=1 calls=3
   calls: sub_1128e40, sub_11ced40, sub_967240
   ref: Play_Camp_Cooking_ReadyMaterial
*/
void Play_Camp_Cooking_ReadyMaterial(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ed010ULL || rel >= 0x11ed220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ed220 size=656 callers=1 calls=7
   calls: sub_1128e40, sub_112e660, sub_11ced40, sub_13f68d0, sub_68d940, sub_68d950, sub_967240
   ref: Play_Camp_Cooking_MaterialIntoPot
*/
void Play_Camp_Cooking_MaterialIntoPot(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ed220ULL || rel >= 0x11ed4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ed4b0 size=464 callers=1 calls=3
   calls: sub_112ea00, sub_11ced40, sub_967240
*/
void sub_11ed4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ed4b0ULL || rel >= 0x11ed680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ed680 size=592 callers=0 calls=5
   calls: sub_112e660, sub_11ced40, sub_13f68d0, sub_68d9b0, sub_967240
*/
void sub_11ed680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ed680ULL || rel >= 0x11ed8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ed8d0 size=304 callers=0 calls=0
*/
void sub_11ed8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ed8d0ULL || rel >= 0x11eda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eda00 size=304 callers=0 calls=0
*/
void sub_11eda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eda00ULL || rel >= 0x11edb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011edb30 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11edb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11edb30ULL || rel >= 0x11edbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011edbe0 size=304 callers=0 calls=0
*/
void sub_11edbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11edbe0ULL || rel >= 0x11edd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011edd10 size=304 callers=0 calls=0
*/
void sub_11edd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11edd10ULL || rel >= 0x11ede40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ede40 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11ede40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ede40ULL || rel >= 0x11edef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011edef0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11edef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11edef0ULL || rel >= 0x11edfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011edfa0 size=304 callers=0 calls=0
*/
void sub_11edfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11edfa0ULL || rel >= 0x11ee0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee0d0 size=304 callers=0 calls=0
*/
void sub_11ee0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee0d0ULL || rel >= 0x11ee200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee200 size=112 callers=0 calls=2
   calls: Play_Camp_Cooking_ReadyMaterial, sub_112ea00
*/
void sub_11ee200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee200ULL || rel >= 0x11ee270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee270 size=16 callers=0 calls=0
*/
void sub_11ee270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee270ULL || rel >= 0x11ee280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee280 size=16 callers=0 calls=0
*/
void sub_11ee280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee280ULL || rel >= 0x11ee290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee290 size=16 callers=0 calls=0
*/
void sub_11ee290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee290ULL || rel >= 0x11ee2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee2a0 size=16 callers=0 calls=0
*/
void sub_11ee2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee2a0ULL || rel >= 0x11ee2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee2b0 size=16 callers=0 calls=0
*/
void sub_11ee2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee2b0ULL || rel >= 0x11ee2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee2c0 size=16 callers=0 calls=0
*/
void sub_11ee2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee2c0ULL || rel >= 0x11ee2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee2d0 size=16 callers=0 calls=0
*/
void sub_11ee2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee2d0ULL || rel >= 0x11ee2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee2e0 size=16 callers=0 calls=0
*/
void sub_11ee2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee2e0ULL || rel >= 0x11ee2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee2f0 size=16 callers=0 calls=0
*/
void sub_11ee2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee2f0ULL || rel >= 0x11ee300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee300 size=16 callers=0 calls=0
*/
void sub_11ee300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee300ULL || rel >= 0x11ee310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee310 size=16 callers=0 calls=0
*/
void sub_11ee310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee310ULL || rel >= 0x11ee320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee320 size=64 callers=0 calls=0
*/
void sub_11ee320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee320ULL || rel >= 0x11ee360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee360 size=16 callers=0 calls=0
*/
void sub_11ee360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee360ULL || rel >= 0x11ee370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee370 size=16 callers=0 calls=0
*/
void sub_11ee370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee370ULL || rel >= 0x11ee380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee380 size=16 callers=0 calls=0
*/
void sub_11ee380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee380ULL || rel >= 0x11ee390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee390 size=288 callers=0 calls=0
*/
void sub_11ee390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee390ULL || rel >= 0x11ee4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee4b0 size=16 callers=0 calls=0
*/
void sub_11ee4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee4b0ULL || rel >= 0x11ee4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee4c0 size=16 callers=0 calls=0
*/
void sub_11ee4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee4c0ULL || rel >= 0x11ee4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee4d0 size=16 callers=0 calls=0
*/
void sub_11ee4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee4d0ULL || rel >= 0x11ee4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee4e0 size=16 callers=0 calls=0
*/
void sub_11ee4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee4e0ULL || rel >= 0x11ee4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee4f0 size=16 callers=0 calls=0
*/
void sub_11ee4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee4f0ULL || rel >= 0x11ee500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee500 size=16 callers=0 calls=0
*/
void sub_11ee500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee500ULL || rel >= 0x11ee510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee510 size=16 callers=0 calls=0
*/
void sub_11ee510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee510ULL || rel >= 0x11ee520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee520 size=576 callers=1 calls=2
   calls: sub_13a4980, sub_5db1b0
*/
void sub_11ee520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee520ULL || rel >= 0x11ee760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ee760 size=768 callers=0 calls=4
   calls: sub_11c62c0, sub_11eea60, sub_13a4f20, sub_68d9f0
*/
void sub_11ee760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ee760ULL || rel >= 0x11eea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eea60 size=320 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_11eea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eea60ULL || rel >= 0x11eeba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eeba0 size=16 callers=0 calls=0
*/
void sub_11eeba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eeba0ULL || rel >= 0x11eebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eebb0 size=16 callers=0 calls=0
*/
void sub_11eebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eebb0ULL || rel >= 0x11eebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eebc0 size=16 callers=0 calls=0
*/
void sub_11eebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eebc0ULL || rel >= 0x11eebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eebd0 size=16 callers=0 calls=0
*/
void sub_11eebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eebd0ULL || rel >= 0x11eebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eebe0 size=16 callers=0 calls=0
*/
void sub_11eebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eebe0ULL || rel >= 0x11eebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eebf0 size=16 callers=0 calls=0
*/
void sub_11eebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eebf0ULL || rel >= 0x11eec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eec00 size=432 callers=0 calls=1
   calls: sub_112eaf0
*/
void sub_11eec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eec00ULL || rel >= 0x11eedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eedb0 size=480 callers=1 calls=2
   calls: sd8014_spise_cam_02_gfbcama, sub_11ef7e0
*/
void sub_11eedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eedb0ULL || rel >= 0x11eef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011eef90 size=2128 callers=2 calls=11
   calls: sub_1306f20, sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_5d99d0, sub_5dd790, sub_5e2930, sub_631840, sub_967240, sub_9aca80, sub_ea9cc0
   ref: bin/demo/res/sd8014/camera/sd8014_spise_cam_01.gfbcama
   ref: bin/demo/res/sd8014/camera/sd8014_spise_cam_02.gfbcama
*/
void sd8014_spise_cam_02_gfbcama(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eef90ULL || rel >= 0x11ef7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ef7e0 size=1104 callers=1 calls=11
   calls: sub_11cb730, sub_11cef40, sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_5d99d0, sub_68d910, sub_967240, sub_986200, sub_98eec0, sub_ea9cc0
*/
void sub_11ef7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ef7e0ULL || rel >= 0x11efc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011efc30 size=1248 callers=2 calls=4
   calls: sub_11ced40, sub_68d630, sub_68d910, sub_68d950
   ref: _ZN2nn3ldn13CreateNetworkERKNS0_13NetworkConfigERKNS0_14SecurityConfigERKNS0_10UserConfigE
*/
void nn_ldn_CreateNetwork_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11efc30ULL || rel >= 0x11f0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f0110 size=176 callers=1 calls=0
*/
void sub_11f0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f0110ULL || rel >= 0x11f01c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f01c0 size=432 callers=0 calls=4
   calls: sub_1128e40, sub_c1bcb0, sub_c43ed0, sub_c79200
   ref: Play_Camp_Cooking_TrueLove_hit_finish
*/
void Play_Camp_Cooking_TrueLove_hit_finish(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f01c0ULL || rel >= 0x11f0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f0370 size=1024 callers=1 calls=6
   calls: sub_1133c30, sub_65d700, sub_67b990, sub_bc0b00, sub_c1b030, sub_c44410
   ref: sd8014_magocoro
*/
void sd8014_magocoro(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f0370ULL || rel >= 0x11f0770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f0770 size=496 callers=0 calls=6
   calls: nn_ldn_CreateNetwork_2, sub_bc64a0, sub_bc64e0, sub_c1bce0, sub_c44410, sub_c79200
*/
void sub_11f0770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f0770ULL || rel >= 0x11f0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f0960 size=64 callers=1 calls=0
*/
void sub_11f0960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f0960ULL || rel >= 0x11f09a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f09a0 size=2496 callers=0 calls=11
   calls: nn_ldn_SetStationAcceptPolicy, sub_1128e40, sub_11e19d0, sub_5a0870, sub_5a08e0, sub_5a08f0, sub_5c5490, sub_5cfad0, sub_68d950, sub_ea7c40, sub_ea8c70
   ref: _ZN2nn3ldn22SetStationAcceptPolicyENS0_12AcceptPolicyE
   ref: _ZN2nn3ldn13CreateNetworkERKNS0_13NetworkConfigERKNS0_14SecurityConfigERKNS0_10UserConfigE
   ref: Play_Camp_Cooking_Explosion
   ref: Play_Camp_Cooking_SpecialExplosion
   ref: Play_Camp_Cooking_Finish
*/
void nn_ldn_SetStationAcceptPolicy_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f09a0ULL || rel >= 0x11f1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1360 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11f1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1360ULL || rel >= 0x11f1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1410 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11f1410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1410ULL || rel >= 0x11f14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f14c0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11f14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f14c0ULL || rel >= 0x11f1570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1570 size=192 callers=0 calls=4
   calls: sub_11e19d0, sub_5c51b0, sub_68d630, sub_68d910
*/
void sub_11f1570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1570ULL || rel >= 0x11f1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1630 size=16 callers=0 calls=0
*/
void sub_11f1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1630ULL || rel >= 0x11f1640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1640 size=16 callers=0 calls=0
*/
void sub_11f1640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1640ULL || rel >= 0x11f1650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1650 size=16 callers=0 calls=0
*/
void sub_11f1650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1650ULL || rel >= 0x11f1660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1660 size=16 callers=0 calls=0
*/
void sub_11f1660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1660ULL || rel >= 0x11f1670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1670 size=16 callers=0 calls=0
*/
void sub_11f1670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1670ULL || rel >= 0x11f1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1680 size=16 callers=0 calls=0
*/
void sub_11f1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1680ULL || rel >= 0x11f1690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1690 size=16 callers=0 calls=0
*/
void sub_11f1690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1690ULL || rel >= 0x11f16a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f16a0 size=64 callers=0 calls=1
   calls: sub_11e19d0
*/
void sub_11f16a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f16a0ULL || rel >= 0x11f16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f16e0 size=16 callers=0 calls=0
*/
void sub_11f16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f16e0ULL || rel >= 0x11f16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f16f0 size=16 callers=0 calls=0
*/
void sub_11f16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f16f0ULL || rel >= 0x11f1700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1700 size=16 callers=0 calls=0
*/
void sub_11f1700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1700ULL || rel >= 0x11f1710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1710 size=304 callers=0 calls=6
   calls: sub_1128e40, sub_68d630, sub_68d950, sub_68d9b0, sub_ea7c40, sub_ea8c70
   ref: Play_Camp_Cooking_TrueLove_hit_4People
*/
void Play_Camp_Cooking_TrueLove_hit_4People(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1710ULL || rel >= 0x11f1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1840 size=16 callers=0 calls=0
*/
void sub_11f1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1840ULL || rel >= 0x11f1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1850 size=160 callers=0 calls=2
   calls: sub_11e19d0, sub_5c51b0
*/
void sub_11f1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1850ULL || rel >= 0x11f18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f18f0 size=16 callers=0 calls=0
*/
void sub_11f18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f18f0ULL || rel >= 0x11f1900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1900 size=16 callers=0 calls=0
*/
void sub_11f1900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1900ULL || rel >= 0x11f1910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1910 size=16 callers=0 calls=0
*/
void sub_11f1910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1910ULL || rel >= 0x11f1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1920 size=16 callers=0 calls=0
*/
void sub_11f1920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1920ULL || rel >= 0x11f1930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1930 size=16 callers=0 calls=0
*/
void sub_11f1930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1930ULL || rel >= 0x11f1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1940 size=16 callers=0 calls=0
*/
void sub_11f1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1940ULL || rel >= 0x11f1950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1950 size=16 callers=0 calls=0
*/
void sub_11f1950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1950ULL || rel >= 0x11f1960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1960 size=16 callers=0 calls=0
*/
void sub_11f1960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1960ULL || rel >= 0x11f1970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1970 size=16 callers=0 calls=0
*/
void sub_11f1970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1970ULL || rel >= 0x11f1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1980 size=16 callers=0 calls=0
*/
void sub_11f1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1980ULL || rel >= 0x11f1990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1990 size=16 callers=0 calls=0
*/
void sub_11f1990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1990ULL || rel >= 0x11f19a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f19a0 size=16 callers=0 calls=0
*/
void sub_11f19a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f19a0ULL || rel >= 0x11f19b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f19b0 size=16 callers=0 calls=0
*/
void sub_11f19b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f19b0ULL || rel >= 0x11f19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f19c0 size=128 callers=0 calls=1
   calls: demo_data
*/
void sub_11f19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f19c0ULL || rel >= 0x11f1a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1a40 size=16 callers=0 calls=0
*/
void sub_11f1a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1a40ULL || rel >= 0x11f1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1a50 size=16 callers=0 calls=0
*/
void sub_11f1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1a50ULL || rel >= 0x11f1a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1a60 size=16 callers=0 calls=0
*/
void sub_11f1a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1a60ULL || rel >= 0x11f1a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1a70 size=176 callers=0 calls=1
   calls: sub_c1bd10
*/
void sub_11f1a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1a70ULL || rel >= 0x11f1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1b20 size=16 callers=0 calls=0
*/
void sub_11f1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1b20ULL || rel >= 0x11f1b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1b30 size=16 callers=0 calls=0
*/
void sub_11f1b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1b30ULL || rel >= 0x11f1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1b40 size=16 callers=0 calls=0
*/
void sub_11f1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1b40ULL || rel >= 0x11f1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1b50 size=64 callers=0 calls=1
   calls: sub_619060
*/
void sub_11f1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1b50ULL || rel >= 0x11f1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1b90 size=16 callers=0 calls=0
*/
void sub_11f1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1b90ULL || rel >= 0x11f1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1ba0 size=16 callers=0 calls=0
*/
void sub_11f1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1ba0ULL || rel >= 0x11f1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1bb0 size=16 callers=0 calls=0
*/
void sub_11f1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1bb0ULL || rel >= 0x11f1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1bc0 size=320 callers=2 calls=2
   calls: sub_11dbb20, sub_11f4ee0
*/
void sub_11f1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1bc0ULL || rel >= 0x11f1d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1d00 size=352 callers=0 calls=2
   calls: sub_11dbf40, sub_6aeb70
*/
void sub_11f1d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1d00ULL || rel >= 0x11f1e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1e60 size=16 callers=0 calls=0
*/
void sub_11f1e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1e60ULL || rel >= 0x11f1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1e70 size=16 callers=0 calls=0
*/
void sub_11f1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1e70ULL || rel >= 0x11f1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1e80 size=16 callers=0 calls=0
*/
void sub_11f1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1e80ULL || rel >= 0x11f1e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1e90 size=16 callers=0 calls=0
*/
void sub_11f1e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1e90ULL || rel >= 0x11f1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1ea0 size=16 callers=0 calls=0
*/
void sub_11f1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1ea0ULL || rel >= 0x11f1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1eb0 size=16 callers=0 calls=0
*/
void sub_11f1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1eb0ULL || rel >= 0x11f1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1ec0 size=16 callers=0 calls=0
*/
void sub_11f1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1ec0ULL || rel >= 0x11f1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1ed0 size=128 callers=0 calls=3
   calls: sub_117a710, sub_117a840, sub_11ddb10
*/
void sub_11f1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1ed0ULL || rel >= 0x11f1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1f50 size=128 callers=0 calls=0
*/
void sub_11f1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1f50ULL || rel >= 0x11f1fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f1fd0 size=848 callers=0 calls=3
   calls: sub_11f2320, sub_6aea40, sub_967240
*/
void sub_11f1fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1fd0ULL || rel >= 0x11f2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2320 size=1248 callers=2 calls=8
   calls: sub_5e2350, sub_6be8b0, sub_6bee70, sub_6d0a20, sub_6d1530, sub_6d1540, sub_6d7840, sub_6d7aa0
*/
void sub_11f2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2320ULL || rel >= 0x11f2800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2800 size=16 callers=0 calls=0
*/
void sub_11f2800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2800ULL || rel >= 0x11f2810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2810 size=64 callers=0 calls=0
*/
void sub_11f2810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2810ULL || rel >= 0x11f2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2850 size=32 callers=0 calls=0
*/
void sub_11f2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2850ULL || rel >= 0x11f2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2870 size=544 callers=2 calls=12
   calls: sub_112e3e0, sub_115ba20, sub_11d0150, sub_11daf60, sub_11ddd40, sub_11e0fc0, sub_11e1270, sub_11e1590, sub_11f2be0, sub_967240, sub_ea3d20, sub_ea5dd0
   ref: StartCooking
*/
void StartCooking(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2870ULL || rel >= 0x11f2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2a90 size=48 callers=0 calls=0
*/
void sub_11f2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2a90ULL || rel >= 0x11f2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2ac0 size=288 callers=0 calls=3
   calls: sub_115ba20, sub_11f2be0, sub_6d7ac0
*/
void sub_11f2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2ac0ULL || rel >= 0x11f2be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2be0 size=416 callers=67 calls=1
   calls: sub_bf0820
*/
void sub_11f2be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2be0ULL || rel >= 0x11f2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2d80 size=16 callers=0 calls=0
*/
void sub_11f2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2d80ULL || rel >= 0x11f2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2d90 size=288 callers=0 calls=10
   calls: sub_112e3e0, sub_117a970, sub_11c9150, sub_11c9430, sub_11c9710, sub_11d1870, sub_11d4500, sub_11d5ff0, sub_11d6840, sub_11d73a0
*/
void sub_11f2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2d90ULL || rel >= 0x11f2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2eb0 size=16 callers=0 calls=0
*/
void sub_11f2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2eb0ULL || rel >= 0x11f2ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2ec0 size=208 callers=0 calls=4
   calls: sub_112e3d0, sub_112e3e0, sub_117a970, sub_11d5ff0
*/
void sub_11f2ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2ec0ULL || rel >= 0x11f2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2f90 size=16 callers=0 calls=0
*/
void sub_11f2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2f90ULL || rel >= 0x11f2fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f2fa0 size=576 callers=0 calls=10
   calls: sub_115ba20, sub_11cbb40, sub_11cbcb0, sub_11cd220, sub_11d0150, sub_11e0fc0, sub_11e1270, sub_11e4c40, sub_11f2be0, sub_89b390
*/
void sub_11f2fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f2fa0ULL || rel >= 0x11f31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f31e0 size=16 callers=0 calls=0
*/
void sub_11f31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f31e0ULL || rel >= 0x11f31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f31f0 size=400 callers=0 calls=8
   calls: StartCooking, sub_10617a0, sub_1151930, sub_11519e0, sub_115ba20, sub_11f2be0, sub_11f3380, sub_6d1070
*/
void sub_11f31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f31f0ULL || rel >= 0x11f3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f3380 size=480 callers=2 calls=4
   calls: sub_11f5c80, sub_11f6cb0, sub_65da00, sub_65daf0
*/
void sub_11f3380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f3380ULL || rel >= 0x11f3560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f3560 size=1344 callers=0 calls=28
   calls: sub_10617a0, sub_1061810, sub_1061830, sub_112e3d0, sub_114a0e0, sub_1151930, sub_11519e0, sub_11555c0, sub_1155620, sub_115ba20, sub_117a970, sub_11bd1c0
   ... +16 more
*/
void sub_11f3560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f3560ULL || rel >= 0x11f3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f3aa0 size=336 callers=2 calls=2
   calls: sub_11f6fb0, sub_89b390
*/
void sub_11f3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f3aa0ULL || rel >= 0x11f3bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f3bf0 size=160 callers=0 calls=1
   calls: sub_6d1070
*/
void sub_11f3bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f3bf0ULL || rel >= 0x11f3c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f3c90 size=448 callers=0 calls=2
   calls: sub_11f3aa0, sub_89b390
*/
void sub_11f3c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f3c90ULL || rel >= 0x11f3e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f3e50 size=208 callers=0 calls=6
   calls: sub_1061810, sub_117a970, sub_11c9150, sub_11c9430, sub_11c9710, sub_11d26c0
*/
void sub_11f3e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f3e50ULL || rel >= 0x11f3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f3f20 size=1568 callers=1 calls=3
   calls: sub_1061810, sub_117a970, sub_1367100
*/
void sub_11f3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f3f20ULL || rel >= 0x11f4540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4540 size=16 callers=0 calls=0
*/
void sub_11f4540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4540ULL || rel >= 0x11f4550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4550 size=288 callers=1 calls=4
   calls: sub_11c9150, sub_11c9430, sub_11c9710, sub_11d26c0
*/
void sub_11f4550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4550ULL || rel >= 0x11f4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4670 size=16 callers=0 calls=0
*/
void sub_11f4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4670ULL || rel >= 0x11f4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4680 size=16 callers=0 calls=0
*/
void sub_11f4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4680ULL || rel >= 0x11f4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4690 size=128 callers=1 calls=3
   calls: sub_112e3e0, sub_11de330, sub_11f3f20
*/
void sub_11f4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4690ULL || rel >= 0x11f4710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4710 size=96 callers=0 calls=3
   calls: sub_115ba20, sub_11df7d0, sub_11f2be0
*/
void sub_11f4710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4710ULL || rel >= 0x11f4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4770 size=96 callers=1 calls=0
*/
void sub_11f4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4770ULL || rel >= 0x11f47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f47d0 size=128 callers=0 calls=1
   calls: sub_11de6c0
*/
void sub_11f47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f47d0ULL || rel >= 0x11f4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4850 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11f4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4850ULL || rel >= 0x11f4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4900 size=16 callers=0 calls=0
*/
void sub_11f4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4900ULL || rel >= 0x11f4910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4910 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11f4910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4910ULL || rel >= 0x11f49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f49c0 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11f49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f49c0ULL || rel >= 0x11f4a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4a70 size=16 callers=0 calls=0
*/
void sub_11f4a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4a70ULL || rel >= 0x11f4a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4a80 size=16 callers=0 calls=0
*/
void sub_11f4a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4a80ULL || rel >= 0x11f4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4a90 size=16 callers=0 calls=0
*/
void sub_11f4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4a90ULL || rel >= 0x11f4aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4aa0 size=16 callers=0 calls=0
*/
void sub_11f4aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4aa0ULL || rel >= 0x11f4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4ab0 size=16 callers=0 calls=0
*/
void sub_11f4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4ab0ULL || rel >= 0x11f4ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4ac0 size=16 callers=0 calls=0
*/
void sub_11f4ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4ac0ULL || rel >= 0x11f4ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4ad0 size=672 callers=0 calls=2
   calls: sub_11f5fd0, sub_6d7610
*/
void sub_11f4ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4ad0ULL || rel >= 0x11f4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4d70 size=96 callers=0 calls=1
   calls: sub_11f6620
*/
void sub_11f4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4d70ULL || rel >= 0x11f4dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4dd0 size=96 callers=0 calls=1
   calls: sub_11f70e0
*/
void sub_11f4dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4dd0ULL || rel >= 0x11f4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4e30 size=16 callers=0 calls=0
*/
void sub_11f4e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4e30ULL || rel >= 0x11f4e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4e40 size=16 callers=0 calls=0
*/
void sub_11f4e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4e40ULL || rel >= 0x11f4e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4e50 size=16 callers=0 calls=0
*/
void sub_11f4e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4e50ULL || rel >= 0x11f4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4e60 size=16 callers=0 calls=0
*/
void sub_11f4e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4e60ULL || rel >= 0x11f4e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4e70 size=96 callers=0 calls=0
*/
void sub_11f4e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4e70ULL || rel >= 0x11f4ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4ed0 size=16 callers=0 calls=0
*/
void sub_11f4ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4ed0ULL || rel >= 0x11f4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f4ee0 size=480 callers=1 calls=4
   calls: sub_5e2350, sub_6d04c0, sub_6d70e0, sub_899e80
*/
void sub_11f4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f4ee0ULL || rel >= 0x11f50c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f50c0 size=496 callers=0 calls=3
   calls: sub_11f5c80, sub_6d0670, sub_89a0f0
*/
void sub_11f50c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f50c0ULL || rel >= 0x11f52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f52b0 size=16 callers=0 calls=0
*/
void sub_11f52b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f52b0ULL || rel >= 0x11f52c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f52c0 size=240 callers=0 calls=0
*/
void sub_11f52c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f52c0ULL || rel >= 0x11f53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f53b0 size=32 callers=0 calls=0
*/
void sub_11f53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f53b0ULL || rel >= 0x11f53d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f53d0 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_11f53d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f53d0ULL || rel >= 0x11f5430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5430 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_11f5430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5430ULL || rel >= 0x11f54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f54c0 size=368 callers=0 calls=2
   calls: sub_6ae9d0, sub_89a310
*/
void sub_11f54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f54c0ULL || rel >= 0x11f5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5630 size=384 callers=0 calls=3
   calls: sub_6ae9d0, sub_6d7e60, sub_89a310
*/
void sub_11f5630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5630ULL || rel >= 0x11f57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f57b0 size=464 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7aa0, sub_6d7e60, sub_89a310
*/
void sub_11f57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f57b0ULL || rel >= 0x11f5980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5980 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_11f5980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5980ULL || rel >= 0x11f5a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5a30 size=16 callers=0 calls=0
*/
void sub_11f5a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5a30ULL || rel >= 0x11f5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5a40 size=16 callers=0 calls=0
*/
void sub_11f5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5a40ULL || rel >= 0x11f5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5a50 size=16 callers=0 calls=0
*/
void sub_11f5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5a50ULL || rel >= 0x11f5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5a60 size=16 callers=0 calls=0
*/
void sub_11f5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5a60ULL || rel >= 0x11f5a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5a70 size=16 callers=0 calls=0
*/
void sub_11f5a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5a70ULL || rel >= 0x11f5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5a80 size=16 callers=0 calls=0
*/
void sub_11f5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5a80ULL || rel >= 0x11f5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5a90 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_11f5a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5a90ULL || rel >= 0x11f5af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5af0 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_11f5af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5af0ULL || rel >= 0x11f5b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5b80 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_11f5b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5b80ULL || rel >= 0x11f5c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5c30 size=16 callers=0 calls=0
*/
void sub_11f5c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5c30ULL || rel >= 0x11f5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5c40 size=16 callers=0 calls=0
*/
void sub_11f5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5c40ULL || rel >= 0x11f5c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5c50 size=16 callers=0 calls=0
*/
void sub_11f5c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5c50ULL || rel >= 0x11f5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5c60 size=32 callers=0 calls=0
*/
void sub_11f5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5c60ULL || rel >= 0x11f5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5c80 size=208 callers=10 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_11f5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5c80ULL || rel >= 0x11f5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5d50 size=80 callers=0 calls=1
   calls: sub_6d12e0
*/
void sub_11f5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5d50ULL || rel >= 0x11f5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5da0 size=16 callers=0 calls=0
*/
void sub_11f5da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5da0ULL || rel >= 0x11f5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5db0 size=16 callers=0 calls=0
*/
void sub_11f5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5db0ULL || rel >= 0x11f5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5dc0 size=16 callers=0 calls=0
*/
void sub_11f5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5dc0ULL || rel >= 0x11f5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5dd0 size=128 callers=0 calls=4
   calls: sub_6d7ac0, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_11f5dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5dd0ULL || rel >= 0x11f5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5e50 size=16 callers=0 calls=0
*/
void sub_11f5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5e50ULL || rel >= 0x11f5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5e60 size=32 callers=0 calls=0
*/
void sub_11f5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5e60ULL || rel >= 0x11f5e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5e80 size=32 callers=0 calls=0
*/
void sub_11f5e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5e80ULL || rel >= 0x11f5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5ea0 size=224 callers=0 calls=5
   calls: sub_6d7aa0, sub_6d7d80, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_11f5ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5ea0ULL || rel >= 0x11f5f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5f80 size=16 callers=0 calls=0
*/
void sub_11f5f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5f80ULL || rel >= 0x11f5f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5f90 size=32 callers=0 calls=0
*/
void sub_11f5f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5f90ULL || rel >= 0x11f5fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5fb0 size=32 callers=0 calls=0
*/
void sub_11f5fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5fb0ULL || rel >= 0x11f5fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f5fd0 size=352 callers=1 calls=2
   calls: sub_11f6130, sub_89b480
*/
void sub_11f5fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f5fd0ULL || rel >= 0x11f6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6130 size=304 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_11f6130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6130ULL || rel >= 0x11f6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6260 size=80 callers=0 calls=0
*/
void sub_11f6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6260ULL || rel >= 0x11f62b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f62b0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_11f62b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f62b0ULL || rel >= 0x11f6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6320 size=16 callers=0 calls=0
*/
void sub_11f6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6320ULL || rel >= 0x11f6330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6330 size=48 callers=0 calls=0
*/
void sub_11f6330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6330ULL || rel >= 0x11f6360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6360 size=48 callers=0 calls=0
*/
void sub_11f6360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6360ULL || rel >= 0x11f6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6390 size=80 callers=0 calls=0
*/
void sub_11f6390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6390ULL || rel >= 0x11f63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f63e0 size=80 callers=0 calls=0
*/
void sub_11f63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f63e0ULL || rel >= 0x11f6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6430 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_11f6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6430ULL || rel >= 0x11f64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f64a0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_11f64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f64a0ULL || rel >= 0x11f6510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6510 size=80 callers=0 calls=0
*/
void sub_11f6510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6510ULL || rel >= 0x11f6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6560 size=80 callers=0 calls=0
*/
void sub_11f6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6560ULL || rel >= 0x11f65b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f65b0 size=32 callers=0 calls=0
*/
void sub_11f65b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f65b0ULL || rel >= 0x11f65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f65d0 size=16 callers=0 calls=0
*/
void sub_11f65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f65d0ULL || rel >= 0x11f65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f65e0 size=32 callers=0 calls=0
*/
void sub_11f65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f65e0ULL || rel >= 0x11f6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6600 size=32 callers=0 calls=0
*/
void sub_11f6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6600ULL || rel >= 0x11f6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6620 size=1120 callers=1 calls=16
   calls: sub_114a0e0, sub_11f6a80, sub_11f6bc0, sub_172bd80, sub_6cf5a0, sub_6cf8f0, sub_6cfbd0, sub_6d1070, sub_6d12e0, sub_6d13b0, sub_6d1450, sub_6d1490
   ... +4 more
*/
void sub_11f6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6620ULL || rel >= 0x11f6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6a80 size=320 callers=1 calls=0
*/
void sub_11f6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6a80ULL || rel >= 0x11f6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6bc0 size=240 callers=3 calls=3
   calls: sub_11f5c80, sub_6d7d80, sub_89a0f0
*/
void sub_11f6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6bc0ULL || rel >= 0x11f6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6cb0 size=304 callers=2 calls=7
   calls: sub_1151930, sub_11527b0, sub_1152d60, sub_1153160, sub_65da00, sub_65daf0, sub_c70
*/
void sub_11f6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6cb0ULL || rel >= 0x11f6de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6de0 size=112 callers=0 calls=4
   calls: StartCooking, sub_10617a0, sub_115ba20, sub_11f2be0
*/
void sub_11f6de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6de0ULL || rel >= 0x11f6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6e50 size=16 callers=0 calls=0
*/
void sub_11f6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6e50ULL || rel >= 0x11f6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6e60 size=16 callers=0 calls=0
*/
void sub_11f6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6e60ULL || rel >= 0x11f6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6e70 size=16 callers=0 calls=0
*/
void sub_11f6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6e70ULL || rel >= 0x11f6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6e80 size=304 callers=1 calls=7
   calls: sub_1152d60, sub_1153160, sub_11555c0, sub_1155da0, sub_65da00, sub_65daf0, sub_c70
*/
void sub_11f6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6e80ULL || rel >= 0x11f6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f6fb0 size=304 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_11f6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f6fb0ULL || rel >= 0x11f70e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f70e0 size=320 callers=1 calls=4
   calls: sub_11f5c80, sub_6d1530, sub_6d7910, sub_89a0f0
*/
void sub_11f70e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f70e0ULL || rel >= 0x11f7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7220 size=160 callers=0 calls=0
*/
void sub_11f7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7220ULL || rel >= 0x11f72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f72c0 size=192 callers=1 calls=1
   calls: anonymous
*/
void sub_11f72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f72c0ULL || rel >= 0x11f7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7380 size=320 callers=0 calls=4
   calls: sub_1127d00, sub_117dca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11f7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7380ULL || rel >= 0x11f74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f74c0 size=368 callers=0 calls=5
   calls: sub_1127d00, sub_117dca0, sub_11f7630, sub_5cf8e0, sub_5cf8f0
*/
void sub_11f74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f74c0ULL || rel >= 0x11f7630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7630 size=672 callers=3 calls=7
   calls: sub_1127d00, sub_1127fc0, sub_117dca0, sub_11802b0, sub_11802c0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11f7630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7630ULL || rel >= 0x11f78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f78d0 size=16 callers=0 calls=0
*/
void sub_11f78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f78d0ULL || rel >= 0x11f78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f78e0 size=16 callers=0 calls=0
*/
void sub_11f78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f78e0ULL || rel >= 0x11f78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f78f0 size=16 callers=0 calls=0
*/
void sub_11f78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f78f0ULL || rel >= 0x11f7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7900 size=16 callers=0 calls=0
*/
void sub_11f7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7900ULL || rel >= 0x11f7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7910 size=16 callers=0 calls=0
*/
void sub_11f7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7910ULL || rel >= 0x11f7920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7920 size=16 callers=0 calls=0
*/
void sub_11f7920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7920ULL || rel >= 0x11f7930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7930 size=16 callers=0 calls=0
*/
void sub_11f7930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7930ULL || rel >= 0x11f7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7940 size=16 callers=0 calls=0
*/
void sub_11f7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7940ULL || rel >= 0x11f7950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7950 size=16 callers=0 calls=0
*/
void sub_11f7950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7950ULL || rel >= 0x11f7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7960 size=16 callers=0 calls=0
*/
void sub_11f7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7960ULL || rel >= 0x11f7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7970 size=16 callers=0 calls=0
*/
void sub_11f7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7970ULL || rel >= 0x11f7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7980 size=16 callers=0 calls=0
*/
void sub_11f7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7980ULL || rel >= 0x11f7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7990 size=16 callers=0 calls=0
*/
void sub_11f7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7990ULL || rel >= 0x11f79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f79a0 size=304 callers=0 calls=0
*/
void sub_11f79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f79a0ULL || rel >= 0x11f7ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7ad0 size=208 callers=0 calls=0
*/
void sub_11f7ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7ad0ULL || rel >= 0x11f7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7ba0 size=192 callers=1 calls=1
   calls: anonymous
*/
void sub_11f7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7ba0ULL || rel >= 0x11f7c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f7c60 size=2080 callers=0 calls=16
   calls: sub_1108730, sub_1127d00, sub_1134fa0, sub_1136950, sub_113a8b0, sub_113a930, sub_115b710, sub_115c4c0, sub_117dca0, sub_11f87c0, sub_1367100, sub_5cf8e0
   ... +4 more
*/
void sub_11f7c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f7c60ULL || rel >= 0x11f8480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8480 size=384 callers=0 calls=7
   calls: sub_1127fc0, sub_1137490, sub_11397d0, sub_1160e20, sub_117dca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11f8480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8480ULL || rel >= 0x11f8600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8600 size=16 callers=0 calls=0
*/
void sub_11f8600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8600ULL || rel >= 0x11f8610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8610 size=16 callers=0 calls=0
*/
void sub_11f8610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8610ULL || rel >= 0x11f8620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8620 size=16 callers=0 calls=0
*/
void sub_11f8620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8620ULL || rel >= 0x11f8630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8630 size=16 callers=0 calls=0
*/
void sub_11f8630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8630ULL || rel >= 0x11f8640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8640 size=16 callers=0 calls=0
*/
void sub_11f8640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8640ULL || rel >= 0x11f8650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8650 size=16 callers=0 calls=0
*/
void sub_11f8650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8650ULL || rel >= 0x11f8660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8660 size=16 callers=0 calls=0
*/
void sub_11f8660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8660ULL || rel >= 0x11f8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8670 size=16 callers=0 calls=0
*/
void sub_11f8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8670ULL || rel >= 0x11f8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8680 size=16 callers=0 calls=0
*/
void sub_11f8680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8680ULL || rel >= 0x11f8690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8690 size=304 callers=0 calls=0
*/
void sub_11f8690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8690ULL || rel >= 0x11f87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f87c0 size=352 callers=2 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11f87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f87c0ULL || rel >= 0x11f8920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8920 size=208 callers=0 calls=0
*/
void sub_11f8920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8920ULL || rel >= 0x11f89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f89f0 size=464 callers=1 calls=3
   calls: anonymous, sub_68ac20, sub_783bd0
*/
void sub_11f89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f89f0ULL || rel >= 0x11f8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f8bc0 size=1680 callers=0 calls=20
   calls: sub_1108730, sub_11274b0, sub_1127d00, sub_112e830, sub_112ea00, sub_1132310, sub_1134fa0, sub_1136950, sub_115b4a0, sub_117dca0, sub_11b9db0, sub_11f2be0
   ... +8 more
*/
void sub_11f8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f8bc0ULL || rel >= 0x11f9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f9250 size=48 callers=0 calls=2
   calls: sub_11f9280, sub_11f9a00
*/
void sub_11f9250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f9250ULL || rel >= 0x11f9280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f9280 size=1920 callers=1 calls=4
   calls: sub_115bfb0, sub_117dca0, sub_11f2be0, sub_65d220
*/
void sub_11f9280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f9280ULL || rel >= 0x11f9a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f9a00 size=736 callers=1 calls=2
   calls: sub_117dca0, sub_ed3290
*/
void sub_11f9a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f9a00ULL || rel >= 0x11f9ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011f9ce0 size=1504 callers=0 calls=22
   calls: MEET_BY_EVENT_3, sub_1108730, sub_11274b0, sub_1127d00, sub_1131f60, sub_1134fa0, sub_1136140, sub_11361a0, sub_113a640, sub_1157860, sub_1160e20, sub_116d920
   ... +10 more
*/
void sub_11f9ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f9ce0ULL || rel >= 0x11fa2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fa2c0 size=208 callers=0 calls=4
   calls: sub_115bfb0, sub_117dca0, sub_11f2be0, sub_ed3290
*/
void sub_11fa2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fa2c0ULL || rel >= 0x11fa390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fa390 size=1168 callers=1 calls=17
   calls: sub_1108730, sub_1134fa0, sub_1157860, sub_117dca0, sub_11b9db0, sub_11fa820, sub_11faa90, sub_1266170, sub_12fac60, sub_13000b0, sub_1367510, sub_136e8b0
   ... +5 more
   ref: MEET_BY_EVENT
*/
void MEET_BY_EVENT_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fa390ULL || rel >= 0x11fa820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fa820 size=624 callers=1 calls=7
   calls: sub_1136be0, sub_113afc0, sub_115a7e0, sub_11f2be0, sub_7847d0, sub_967240, sub_bf05e0
*/
void sub_11fa820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fa820ULL || rel >= 0x11faa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011faa90 size=656 callers=1 calls=3
   calls: sub_1158640, sub_117dca0, sub_7847d0
*/
void sub_11faa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11faa90ULL || rel >= 0x11fad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fad20 size=144 callers=0 calls=0
*/
void sub_11fad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fad20ULL || rel >= 0x11fadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fadb0 size=144 callers=0 calls=0
*/
void sub_11fadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fadb0ULL || rel >= 0x11fae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fae40 size=16 callers=0 calls=0
*/
void sub_11fae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fae40ULL || rel >= 0x11fae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fae50 size=144 callers=0 calls=0
*/
void sub_11fae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fae50ULL || rel >= 0x11faee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011faee0 size=144 callers=0 calls=0
*/
void sub_11faee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11faee0ULL || rel >= 0x11faf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011faf70 size=16 callers=0 calls=0
*/
void sub_11faf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11faf70ULL || rel >= 0x11faf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011faf80 size=16 callers=0 calls=0
*/
void sub_11faf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11faf80ULL || rel >= 0x11faf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011faf90 size=144 callers=0 calls=0
*/
void sub_11faf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11faf90ULL || rel >= 0x11fb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb020 size=144 callers=0 calls=0
*/
void sub_11fb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb020ULL || rel >= 0x11fb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb0b0 size=304 callers=0 calls=0
*/
void sub_11fb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb0b0ULL || rel >= 0x11fb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb1e0 size=16 callers=0 calls=0
*/
void sub_11fb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb1e0ULL || rel >= 0x11fb1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb1f0 size=16 callers=0 calls=0
*/
void sub_11fb1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb1f0ULL || rel >= 0x11fb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb200 size=16 callers=0 calls=0
*/
void sub_11fb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb200ULL || rel >= 0x11fb210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb210 size=16 callers=0 calls=0
*/
void sub_11fb210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb210ULL || rel >= 0x11fb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb220 size=240 callers=0 calls=9
   calls: kw20_drowse01_Enabled_3, sub_11361a0, sub_1136450, sub_1137070, sub_11383d0, sub_1139710, sub_113a1a0, sub_1160e20, sub_bf05e0
*/
void sub_11fb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb220ULL || rel >= 0x11fb310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb310 size=16 callers=0 calls=0
*/
void sub_11fb310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb310ULL || rel >= 0x11fb320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb320 size=16 callers=0 calls=0
*/
void sub_11fb320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb320ULL || rel >= 0x11fb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb330 size=16 callers=0 calls=0
*/
void sub_11fb330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb330ULL || rel >= 0x11fb340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb340 size=400 callers=0 calls=4
   calls: sub_1108730, sub_1134fa0, sub_11611a0, sub_967240
*/
void sub_11fb340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb340ULL || rel >= 0x11fb4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb4d0 size=16 callers=0 calls=0
*/
void sub_11fb4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb4d0ULL || rel >= 0x11fb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb4e0 size=16 callers=0 calls=0
*/
void sub_11fb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb4e0ULL || rel >= 0x11fb4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb4f0 size=16 callers=0 calls=0
*/
void sub_11fb4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb4f0ULL || rel >= 0x11fb500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb500 size=208 callers=0 calls=0
*/
void sub_11fb500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb500ULL || rel >= 0x11fb5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb5d0 size=240 callers=1 calls=1
   calls: anonymous
*/
void sub_11fb5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb5d0ULL || rel >= 0x11fb6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb6c0 size=608 callers=0 calls=5
   calls: sub_113c6a0, sub_1158640, sub_115bc10, sub_117dca0, sub_11fd490
*/
void sub_11fb6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb6c0ULL || rel >= 0x11fb920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fb920 size=3856 callers=0 calls=28
   calls: sub_1127d00, sub_1127fc0, sub_112e750, sub_112e830, sub_112ea00, sub_1157ef0, sub_115a740, sub_115ab80, sub_115b9f0, sub_115ba00, sub_115bde0, sub_117dca0
   ... +16 more
   ref: fi_unique_event
   ref: fi8100_greeting01
*/
void fi8100_greeting01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fb920ULL || rel >= 0x11fc830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fc830 size=1504 callers=1 calls=7
   calls: sub_112ea00, sub_113c6a0, sub_115b870, sub_115bfb0, sub_115bfd0, sub_117dca0, sub_972c70
*/
void sub_11fc830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fc830ULL || rel >= 0x11fce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fce10 size=432 callers=1 calls=5
   calls: sub_112ea00, sub_117dca0, sub_1180410, sub_ed3290, sub_ed32d0
*/
void sub_11fce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fce10ULL || rel >= 0x11fcfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fcfc0 size=16 callers=0 calls=0
*/
void sub_11fcfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fcfc0ULL || rel >= 0x11fcfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fcfd0 size=80 callers=0 calls=1
   calls: sub_11fd1e0
*/
void sub_11fcfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fcfd0ULL || rel >= 0x11fd020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd020 size=80 callers=0 calls=1
   calls: sub_11fd1e0
*/
void sub_11fd020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd020ULL || rel >= 0x11fd070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd070 size=16 callers=0 calls=0
*/
void sub_11fd070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd070ULL || rel >= 0x11fd080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd080 size=80 callers=0 calls=1
   calls: sub_11fd1e0
*/
void sub_11fd080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd080ULL || rel >= 0x11fd0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd0d0 size=80 callers=0 calls=1
   calls: sub_11fd1e0
*/
void sub_11fd0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd0d0ULL || rel >= 0x11fd120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd120 size=16 callers=0 calls=0
*/
void sub_11fd120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd120ULL || rel >= 0x11fd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd130 size=16 callers=0 calls=0
*/
void sub_11fd130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd130ULL || rel >= 0x11fd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd140 size=80 callers=0 calls=1
   calls: sub_11fd1e0
*/
void sub_11fd140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd140ULL || rel >= 0x11fd190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd190 size=80 callers=0 calls=1
   calls: sub_11fd1e0
*/
void sub_11fd190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd190ULL || rel >= 0x11fd1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd1e0 size=256 callers=6 calls=0
*/
void sub_11fd1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd1e0ULL || rel >= 0x11fd2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd2e0 size=304 callers=0 calls=0
*/
void sub_11fd2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd2e0ULL || rel >= 0x11fd410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd410 size=80 callers=0 calls=1
   calls: sub_115bb40
*/
void sub_11fd410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd410ULL || rel >= 0x11fd460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd460 size=16 callers=0 calls=0
*/
void sub_11fd460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd460ULL || rel >= 0x11fd470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd470 size=16 callers=0 calls=0
*/
void sub_11fd470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd470ULL || rel >= 0x11fd480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd480 size=16 callers=0 calls=0
*/
void sub_11fd480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd480ULL || rel >= 0x11fd490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd490 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11fd490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd490ULL || rel >= 0x11fd5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd5f0 size=400 callers=0 calls=4
   calls: sub_11274b0, sub_1130c20, sub_113d860, sub_967240
*/
void sub_11fd5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd5f0ULL || rel >= 0x11fd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd780 size=16 callers=0 calls=0
*/
void sub_11fd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd780ULL || rel >= 0x11fd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd790 size=16 callers=0 calls=0
*/
void sub_11fd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd790ULL || rel >= 0x11fd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd7a0 size=16 callers=0 calls=0
*/
void sub_11fd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd7a0ULL || rel >= 0x11fd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd7b0 size=16 callers=0 calls=0
*/
void sub_11fd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd7b0ULL || rel >= 0x11fd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd7c0 size=16 callers=0 calls=0
*/
void sub_11fd7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd7c0ULL || rel >= 0x11fd7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd7d0 size=16 callers=0 calls=0
*/
void sub_11fd7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd7d0ULL || rel >= 0x11fd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd7e0 size=16 callers=0 calls=0
*/
void sub_11fd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd7e0ULL || rel >= 0x11fd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd7f0 size=400 callers=0 calls=4
   calls: sub_11274b0, sub_1130c20, sub_113d860, sub_967240
*/
void sub_11fd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd7f0ULL || rel >= 0x11fd980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd980 size=16 callers=0 calls=0
*/
void sub_11fd980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd980ULL || rel >= 0x11fd990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd990 size=16 callers=0 calls=0
*/
void sub_11fd990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd990ULL || rel >= 0x11fd9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd9a0 size=16 callers=0 calls=0
*/
void sub_11fd9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd9a0ULL || rel >= 0x11fd9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fd9b0 size=240 callers=0 calls=3
   calls: sub_1108730, sub_1134fa0, sub_bf05e0
*/
void sub_11fd9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fd9b0ULL || rel >= 0x11fdaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fdaa0 size=16 callers=0 calls=0
*/
void sub_11fdaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fdaa0ULL || rel >= 0x11fdab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fdab0 size=32 callers=0 calls=0
*/
void sub_11fdab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fdab0ULL || rel >= 0x11fdad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fdad0 size=32 callers=0 calls=0
*/
void sub_11fdad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fdad0ULL || rel >= 0x11fdaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fdaf0 size=208 callers=0 calls=0
*/
void sub_11fdaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fdaf0ULL || rel >= 0x11fdbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fdbc0 size=272 callers=1 calls=2
   calls: anonymous, sub_65d700
*/
void sub_11fdbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fdbc0ULL || rel >= 0x11fdcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

