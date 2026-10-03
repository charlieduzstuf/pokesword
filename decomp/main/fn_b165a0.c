/* main functions 00b165a0..00b314a0 (86 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00b165a0 size=48 callers=0 calls=0
*/
void sub_b165a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb165a0ULL || rel >= 0xb165d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b165d0 size=48 callers=0 calls=0
*/
void sub_b165d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb165d0ULL || rel >= 0xb16600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16600 size=48 callers=0 calls=0
*/
void sub_b16600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16600ULL || rel >= 0xb16630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16630 size=64 callers=0 calls=0
*/
void sub_b16630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16630ULL || rel >= 0xb16670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16670 size=48 callers=0 calls=0
*/
void sub_b16670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16670ULL || rel >= 0xb166a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b166a0 size=48 callers=0 calls=0
*/
void sub_b166a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb166a0ULL || rel >= 0xb166d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b166d0 size=128 callers=0 calls=1
   calls: sub_abb710
*/
void sub_b166d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb166d0ULL || rel >= 0xb16750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16750 size=64 callers=0 calls=0
*/
void sub_b16750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16750ULL || rel >= 0xb16790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16790 size=48 callers=0 calls=0
*/
void sub_b16790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16790ULL || rel >= 0xb167c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b167c0 size=48 callers=0 calls=0
*/
void sub_b167c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb167c0ULL || rel >= 0xb167f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b167f0 size=48 callers=0 calls=0
*/
void sub_b167f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb167f0ULL || rel >= 0xb16820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16820 size=64 callers=0 calls=0
*/
void sub_b16820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16820ULL || rel >= 0xb16860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16860 size=48 callers=0 calls=0
*/
void sub_b16860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16860ULL || rel >= 0xb16890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16890 size=48 callers=0 calls=0
*/
void sub_b16890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16890ULL || rel >= 0xb168c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b168c0 size=160 callers=0 calls=0
*/
void sub_b168c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb168c0ULL || rel >= 0xb16960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16960 size=32 callers=0 calls=0
*/
void sub_b16960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16960ULL || rel >= 0xb16980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16980 size=32 callers=0 calls=0
*/
void sub_b16980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16980ULL || rel >= 0xb169a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b169a0 size=432 callers=0 calls=7
   calls: sub_aba100, sub_ac4880, sub_ac5b50, sub_afb6e0, sub_afb760, sub_b16b50, sub_d0c0
   ref: StateBtlSpotCasualMatchBattle
*/
void StateBtlSpotCasualMatchBattle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb169a0ULL || rel >= 0xb16b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16b50 size=304 callers=17 calls=5
   calls: sub_abcbd0, sub_ac4880, sub_ac5b50, sub_afb6e0, sub_b186f0
*/
void sub_b16b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16b50ULL || rel >= 0xb16c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16c80 size=16 callers=0 calls=0
*/
void sub_b16c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16c80ULL || rel >= 0xb16c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16c90 size=4016 callers=0 calls=28
   calls: NONE_NONE_2, RequestCheckConnectivity, RequestPostUserData, sub_104c020, sub_104dd50, sub_104fb70, sub_1050000, sub_10619f0, sub_ab9fd0, sub_aba670, sub_aba6f0, sub_aba770
   ... +16 more
   ref: StateBtlSpotTop
   ref: StateBtlSpotCasualMatchPrepareMatching
*/
void StateBtlSpotCasualMatchPrepareMatching(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16c90ULL || rel >= 0xb17c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b17c40 size=448 callers=1 calls=7
   calls: sub_1052c20, sub_abc680, sub_abf2d0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_b17c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb17c40ULL || rel >= 0xb17e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b17e00 size=240 callers=3 calls=5
   calls: sub_abf2c0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_b17e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb17e00ULL || rel >= 0xb17ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b17ef0 size=224 callers=3 calls=5
   calls: sub_abf400, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_b17ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb17ef0ULL || rel >= 0xb17fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b17fd0 size=608 callers=1 calls=9
   calls: sub_1052c20, sub_136b520, sub_136b580, sub_136b590, sub_67b990, sub_ac4880, sub_ac5b50, sub_afb660, sub_afb6e0
*/
void sub_b17fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb17fd0ULL || rel >= 0xb18230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18230 size=192 callers=1 calls=4
   calls: sub_ab9ea0, sub_aba670, sub_aba710, sub_b16b50
*/
void sub_b18230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18230ULL || rel >= 0xb182f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b182f0 size=128 callers=0 calls=0
*/
void sub_b182f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb182f0ULL || rel >= 0xb18370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18370 size=128 callers=0 calls=0
*/
void sub_b18370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18370ULL || rel >= 0xb183f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b183f0 size=128 callers=0 calls=0
*/
void sub_b183f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb183f0ULL || rel >= 0xb18470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18470 size=128 callers=0 calls=0
*/
void sub_b18470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18470ULL || rel >= 0xb184f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b184f0 size=128 callers=0 calls=0
*/
void sub_b184f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb184f0ULL || rel >= 0xb18570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18570 size=128 callers=0 calls=0
*/
void sub_b18570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18570ULL || rel >= 0xb185f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b185f0 size=128 callers=0 calls=0
*/
void sub_b185f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb185f0ULL || rel >= 0xb18670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18670 size=128 callers=0 calls=0
*/
void sub_b18670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18670ULL || rel >= 0xb186f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b186f0 size=304 callers=10 calls=0
*/
void sub_b186f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb186f0ULL || rel >= 0xb18820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18820 size=336 callers=1 calls=1
   calls: sub_b18970
*/
void sub_b18820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18820ULL || rel >= 0xb18970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18970 size=736 callers=1 calls=0
*/
void sub_b18970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18970ULL || rel >= 0xb18c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18c50 size=48 callers=0 calls=0
*/
void sub_b18c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18c50ULL || rel >= 0xb18c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18c80 size=64 callers=0 calls=0
*/
void sub_b18c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18c80ULL || rel >= 0xb18cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18cc0 size=48 callers=0 calls=0
*/
void sub_b18cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18cc0ULL || rel >= 0xb18cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18cf0 size=48 callers=0 calls=0
*/
void sub_b18cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18cf0ULL || rel >= 0xb18d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18d20 size=48 callers=0 calls=0
*/
void sub_b18d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18d20ULL || rel >= 0xb18d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18d50 size=64 callers=0 calls=0
*/
void sub_b18d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18d50ULL || rel >= 0xb18d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18d90 size=48 callers=0 calls=0
*/
void sub_b18d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18d90ULL || rel >= 0xb18dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18dc0 size=48 callers=0 calls=0
*/
void sub_b18dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18dc0ULL || rel >= 0xb18df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18df0 size=64 callers=0 calls=0
*/
void sub_b18df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18df0ULL || rel >= 0xb18e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18e30 size=64 callers=0 calls=0
*/
void sub_b18e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18e30ULL || rel >= 0xb18e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18e70 size=48 callers=0 calls=0
*/
void sub_b18e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18e70ULL || rel >= 0xb18ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18ea0 size=48 callers=0 calls=0
*/
void sub_b18ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18ea0ULL || rel >= 0xb18ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18ed0 size=48 callers=0 calls=0
*/
void sub_b18ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18ed0ULL || rel >= 0xb18f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18f00 size=64 callers=0 calls=0
*/
void sub_b18f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18f00ULL || rel >= 0xb18f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18f40 size=48 callers=0 calls=0
*/
void sub_b18f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18f40ULL || rel >= 0xb18f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18f70 size=48 callers=0 calls=0
*/
void sub_b18f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18f70ULL || rel >= 0xb18fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18fa0 size=64 callers=0 calls=0
*/
void sub_b18fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18fa0ULL || rel >= 0xb18fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b18fe0 size=64 callers=0 calls=0
*/
void sub_b18fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18fe0ULL || rel >= 0xb19020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b19020 size=48 callers=0 calls=0
*/
void sub_b19020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb19020ULL || rel >= 0xb19050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b19050 size=48 callers=0 calls=0
*/
void sub_b19050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb19050ULL || rel >= 0xb19080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b19080 size=48 callers=0 calls=0
*/
void sub_b19080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb19080ULL || rel >= 0xb190b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b190b0 size=64 callers=0 calls=0
*/
void sub_b190b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb190b0ULL || rel >= 0xb190f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b190f0 size=48 callers=0 calls=0
*/
void sub_b190f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb190f0ULL || rel >= 0xb19120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b19120 size=48 callers=0 calls=0
*/
void sub_b19120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb19120ULL || rel >= 0xb19150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b19150 size=160 callers=0 calls=0
*/
void sub_b19150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb19150ULL || rel >= 0xb191f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b191f0 size=656 callers=0 calls=4
   calls: sub_ac5b50, sub_afb660, sub_afb760, sub_d0c0
   ref: StateBtlSpotRankMatchEntrance
*/
void StateBtlSpotRankMatchEntrance_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb191f0ULL || rel >= 0xb19480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b19480 size=16 callers=0 calls=0
*/
void sub_b19480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb19480ULL || rel >= 0xb19490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b19490 size=4656 callers=0 calls=37
   calls: sub_13875a0, sub_13875f0, sub_ab97c0, sub_ab9890, sub_abaf40, sub_abaf70, sub_abaf80, sub_abaf90, sub_abaff0, sub_abb050, sub_abb090, sub_ac1b10
   ... +25 more
   ref: StateBtlSpotRankMatchAnimation
   ref: StateBtlSpotTop
*/
void StateBtlSpotRankMatchAnimation_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb19490ULL || rel >= 0xb1a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1a6c0 size=576 callers=1 calls=8
   calls: sub_1345ca0, sub_abc660, sub_abf2d0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0, sub_b08840
*/
void sub_b1a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1a6c0ULL || rel >= 0xb1a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1a900 size=608 callers=1 calls=3
   calls: RequestSearchCompetition, sub_11009c0, sub_e71830
*/
void sub_b1a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1a900ULL || rel >= 0xb1ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1ab60 size=624 callers=2 calls=2
   calls: sub_1386a80, sub_1386fc0
*/
void sub_b1ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1ab60ULL || rel >= 0xb1add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1add0 size=576 callers=1 calls=3
   calls: RequestGetCompetition, sub_11009c0, sub_e71830
*/
void sub_b1add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1add0ULL || rel >= 0xb1b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1b010 size=864 callers=1 calls=6
   calls: RequestGetStats, sub_11009c0, sub_15b9390, sub_6a4d30, sub_afab30, sub_e71830
*/
void sub_b1b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1b010ULL || rel >= 0xb1b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1b370 size=576 callers=2 calls=3
   calls: RequestGetRankMatchSetting, sub_11009c0, sub_e71830
*/
void sub_b1b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1b370ULL || rel >= 0xb1b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1b5b0 size=608 callers=1 calls=4
   calls: RequestGetCompetitionRankingRank, sub_11009c0, sub_6a4d30, sub_e71830
*/
void sub_b1b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1b5b0ULL || rel >= 0xb1b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1b810 size=304 callers=1 calls=3
   calls: sub_1386fc0, sub_1387040, sub_ac1ce0
*/
void sub_b1b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1b810ULL || rel >= 0xb1b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1b940 size=304 callers=1 calls=3
   calls: sub_1386fc0, sub_1387040, sub_ac1ce0
*/
void sub_b1b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1b940ULL || rel >= 0xb1ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1ba70 size=560 callers=1 calls=3
   calls: RequestLoadApplicationSettingsValue, sub_11009c0, sub_e71830
*/
void sub_b1ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1ba70ULL || rel >= 0xb1bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1bca0 size=576 callers=1 calls=3
   calls: RequestGetOrCreateStats, sub_11009c0, sub_e71830
*/
void sub_b1bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1bca0ULL || rel >= 0xb1bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1bee0 size=336 callers=1 calls=5
   calls: sub_abf2c0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_b1bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1bee0ULL || rel >= 0xb1c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1c030 size=672 callers=1 calls=10
   calls: InstanceTable_431, sub_13868e0, sub_1386a80, sub_15b7a70, sub_15b8140, sub_6a4d50, sub_abaf70, sub_abaf80, sub_ac1b00, sub_afc380
*/
void sub_b1c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1c030ULL || rel >= 0xb1c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1c2d0 size=912 callers=1 calls=12
   calls: sub_1386a80, sub_abaf70, sub_abaf80, sub_abf970, sub_ac0c60, sub_ac14f0, sub_ac1510, sub_ac1530, sub_ac1b10, sub_ac1c60, sub_ac1ce0, sub_afc380
*/
void sub_b1c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1c2d0ULL || rel >= 0xb1c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1c660 size=944 callers=1 calls=8
   calls: RequestDownloadRegulation, sub_11009c0, sub_1386a80, sub_ab97d0, sub_ac5b50, sub_afb5f0, sub_afc380, sub_e71830
*/
void sub_b1c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1c660ULL || rel >= 0xb1ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1ca10 size=304 callers=1 calls=5
   calls: sub_13868e0, sub_1386a80, sub_8e0040, sub_ab97d0, sub_afc380
*/
void sub_b1ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1ca10ULL || rel >= 0xb1cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1cb40 size=304 callers=1 calls=4
   calls: sub_1386a80, sub_ab9440, sub_ab97d0, sub_afc380
*/
void sub_b1cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1cb40ULL || rel >= 0xb1cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1cc70 size=352 callers=0 calls=0
*/
void sub_b1cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1cc70ULL || rel >= 0xb1cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1cdd0 size=16 callers=0 calls=0
*/
void sub_b1cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1cdd0ULL || rel >= 0xb1cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1cde0 size=16 callers=0 calls=0
*/
void sub_b1cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1cde0ULL || rel >= 0xb1cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1cdf0 size=16 callers=0 calls=0
*/
void sub_b1cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1cdf0ULL || rel >= 0xb1ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1ce00 size=16 callers=0 calls=0
*/
void sub_b1ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1ce00ULL || rel >= 0xb1ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1ce10 size=16 callers=0 calls=0
*/
void sub_b1ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1ce10ULL || rel >= 0xb1ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1ce20 size=288 callers=0 calls=2
   calls: sub_b077d0, sub_b13860
*/
void sub_b1ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1ce20ULL || rel >= 0xb1cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1cf40 size=64 callers=0 calls=0
*/
void sub_b1cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1cf40ULL || rel >= 0xb1cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1cf80 size=48 callers=0 calls=0
*/
void sub_b1cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1cf80ULL || rel >= 0xb1cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1cfb0 size=48 callers=0 calls=0
*/
void sub_b1cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1cfb0ULL || rel >= 0xb1cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1cfe0 size=48 callers=0 calls=0
*/
void sub_b1cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1cfe0ULL || rel >= 0xb1d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d010 size=64 callers=0 calls=0
*/
void sub_b1d010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d010ULL || rel >= 0xb1d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d050 size=48 callers=0 calls=0
*/
void sub_b1d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d050ULL || rel >= 0xb1d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d080 size=48 callers=0 calls=0
*/
void sub_b1d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d080ULL || rel >= 0xb1d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d0b0 size=144 callers=0 calls=1
   calls: sub_b077d0
*/
void sub_b1d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d0b0ULL || rel >= 0xb1d140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d140 size=64 callers=0 calls=0
*/
void sub_b1d140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d140ULL || rel >= 0xb1d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d180 size=48 callers=0 calls=0
*/
void sub_b1d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d180ULL || rel >= 0xb1d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d1b0 size=48 callers=0 calls=0
*/
void sub_b1d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d1b0ULL || rel >= 0xb1d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d1e0 size=48 callers=0 calls=0
*/
void sub_b1d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d1e0ULL || rel >= 0xb1d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d210 size=64 callers=0 calls=0
*/
void sub_b1d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d210ULL || rel >= 0xb1d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d250 size=48 callers=0 calls=0
*/
void sub_b1d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d250ULL || rel >= 0xb1d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d280 size=48 callers=0 calls=0
*/
void sub_b1d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d280ULL || rel >= 0xb1d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d2b0 size=432 callers=0 calls=4
   calls: sub_ab9800, sub_abaef0, sub_afc380, sub_b1d4a0
*/
void sub_b1d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d2b0ULL || rel >= 0xb1d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d460 size=64 callers=0 calls=0
*/
void sub_b1d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d460ULL || rel >= 0xb1d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1d4a0 size=2032 callers=3 calls=0
*/
void sub_b1d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1d4a0ULL || rel >= 0xb1dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1dc90 size=48 callers=0 calls=0
*/
void sub_b1dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1dc90ULL || rel >= 0xb1dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1dcc0 size=48 callers=0 calls=0
*/
void sub_b1dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1dcc0ULL || rel >= 0xb1dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1dcf0 size=48 callers=0 calls=0
*/
void sub_b1dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1dcf0ULL || rel >= 0xb1dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1dd20 size=64 callers=0 calls=0
*/
void sub_b1dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1dd20ULL || rel >= 0xb1dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1dd60 size=48 callers=0 calls=0
*/
void sub_b1dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1dd60ULL || rel >= 0xb1dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1dd90 size=48 callers=0 calls=0
*/
void sub_b1dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1dd90ULL || rel >= 0xb1ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1ddc0 size=480 callers=0 calls=4
   calls: sub_ac15f0, sub_ac4880, sub_ac5b50, sub_afb6e0
*/
void sub_b1ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1ddc0ULL || rel >= 0xb1dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1dfa0 size=64 callers=0 calls=0
*/
void sub_b1dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1dfa0ULL || rel >= 0xb1dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1dfe0 size=48 callers=0 calls=0
*/
void sub_b1dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1dfe0ULL || rel >= 0xb1e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e010 size=48 callers=0 calls=0
*/
void sub_b1e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e010ULL || rel >= 0xb1e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e040 size=48 callers=0 calls=0
*/
void sub_b1e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e040ULL || rel >= 0xb1e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e070 size=64 callers=0 calls=0
*/
void sub_b1e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e070ULL || rel >= 0xb1e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e0b0 size=48 callers=0 calls=0
*/
void sub_b1e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e0b0ULL || rel >= 0xb1e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e0e0 size=48 callers=0 calls=0
*/
void sub_b1e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e0e0ULL || rel >= 0xb1e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e110 size=112 callers=0 calls=1
   calls: sub_b08430
*/
void sub_b1e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e110ULL || rel >= 0xb1e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e180 size=64 callers=0 calls=0
*/
void sub_b1e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e180ULL || rel >= 0xb1e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e1c0 size=48 callers=0 calls=0
*/
void sub_b1e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e1c0ULL || rel >= 0xb1e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e1f0 size=48 callers=0 calls=0
*/
void sub_b1e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e1f0ULL || rel >= 0xb1e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e220 size=48 callers=0 calls=0
*/
void sub_b1e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e220ULL || rel >= 0xb1e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e250 size=64 callers=0 calls=0
*/
void sub_b1e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e250ULL || rel >= 0xb1e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e290 size=48 callers=0 calls=0
*/
void sub_b1e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e290ULL || rel >= 0xb1e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e2c0 size=48 callers=0 calls=0
*/
void sub_b1e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e2c0ULL || rel >= 0xb1e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e2f0 size=176 callers=0 calls=1
   calls: sub_b08430
*/
void sub_b1e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e2f0ULL || rel >= 0xb1e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e3a0 size=64 callers=0 calls=0
*/
void sub_b1e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e3a0ULL || rel >= 0xb1e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e3e0 size=64 callers=0 calls=0
*/
void sub_b1e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e3e0ULL || rel >= 0xb1e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e420 size=64 callers=0 calls=0
*/
void sub_b1e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e420ULL || rel >= 0xb1e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e460 size=48 callers=0 calls=0
*/
void sub_b1e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e460ULL || rel >= 0xb1e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e490 size=64 callers=0 calls=0
*/
void sub_b1e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e490ULL || rel >= 0xb1e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e4d0 size=48 callers=0 calls=0
*/
void sub_b1e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e4d0ULL || rel >= 0xb1e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e500 size=48 callers=0 calls=0
*/
void sub_b1e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e500ULL || rel >= 0xb1e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e530 size=64 callers=0 calls=0
*/
void sub_b1e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e530ULL || rel >= 0xb1e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e570 size=64 callers=0 calls=0
*/
void sub_b1e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e570ULL || rel >= 0xb1e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e5b0 size=48 callers=0 calls=0
*/
void sub_b1e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e5b0ULL || rel >= 0xb1e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e5e0 size=48 callers=0 calls=0
*/
void sub_b1e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e5e0ULL || rel >= 0xb1e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e610 size=48 callers=0 calls=0
*/
void sub_b1e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e610ULL || rel >= 0xb1e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e640 size=64 callers=0 calls=0
*/
void sub_b1e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e640ULL || rel >= 0xb1e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e680 size=48 callers=0 calls=0
*/
void sub_b1e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e680ULL || rel >= 0xb1e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e6b0 size=48 callers=0 calls=0
*/
void sub_b1e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e6b0ULL || rel >= 0xb1e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e6e0 size=192 callers=0 calls=4
   calls: sub_ab9440, sub_ab95a0, sub_afc380, sub_b1ca10
*/
void sub_b1e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e6e0ULL || rel >= 0xb1e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e7a0 size=64 callers=0 calls=0
*/
void sub_b1e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e7a0ULL || rel >= 0xb1e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e7e0 size=48 callers=0 calls=0
*/
void sub_b1e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e7e0ULL || rel >= 0xb1e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e810 size=48 callers=0 calls=0
*/
void sub_b1e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e810ULL || rel >= 0xb1e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e840 size=112 callers=0 calls=1
   calls: sub_b1cb40
*/
void sub_b1e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e840ULL || rel >= 0xb1e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e8b0 size=64 callers=0 calls=0
*/
void sub_b1e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e8b0ULL || rel >= 0xb1e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e8f0 size=48 callers=0 calls=0
*/
void sub_b1e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e8f0ULL || rel >= 0xb1e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e920 size=48 callers=0 calls=0
*/
void sub_b1e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e920ULL || rel >= 0xb1e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e950 size=160 callers=0 calls=0
*/
void sub_b1e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e950ULL || rel >= 0xb1e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1e9f0 size=1744 callers=0 calls=13
   calls: sub_ab95a0, sub_ab97d0, sub_abb620, sub_abb900, sub_ac4880, sub_ac5b50, sub_afa5a0, sub_afb660, sub_afb6e0, sub_afb760, sub_afb8c0, sub_b08430
   ... +1 more
   ref: StateBtlSpotCompBattleEntrance
*/
void StateBtlSpotCompBattleEntrance_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1e9f0ULL || rel >= 0xb1f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1f0c0 size=16 callers=0 calls=0
*/
void sub_b1f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1f0c0ULL || rel >= 0xb1f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b1f0d0 size=4672 callers=0 calls=37
   calls: sub_11011d0, sub_11013c0, sub_1324cb0, sub_1386b00, sub_1386d20, sub_1500c40, sub_8e0ae0, sub_ab95a0, sub_abbd60, sub_ac0f30, sub_ac0fd0, sub_ac4880
   ... +25 more
   ref: StateBtlSpotCompPrepareMatching
   ref: StateBtlSpotCompTop
   ref: StateBtlSpotTop
*/
void StateBtlSpotCompPrepareMatching_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1f0d0ULL || rel >= 0xb20310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b20310 size=512 callers=1 calls=1
   calls: RequestGetOrCreateStats
*/
void sub_b20310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb20310ULL || rel >= 0xb20510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b20510 size=544 callers=1 calls=2
   calls: RequestGetCompetitionRankingRank, sub_6a4d30
*/
void sub_b20510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb20510ULL || rel >= 0xb20730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b20730 size=688 callers=1 calls=5
   calls: RequestDownloadRegulation, sub_1386b00, sub_1386d20, sub_abb7d0, sub_af7320
*/
void sub_b20730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb20730ULL || rel >= 0xb209e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b209e0 size=1104 callers=1 calls=16
   calls: sub_67bdb0, sub_67c120, sub_7c2af0, sub_8dfba0, sub_8dfd80, sub_8e0250, sub_8e0960, sub_abf9c0, sub_ac0c60, sub_ac0c80, sub_ac0e70, sub_ac14f0
   ... +4 more
*/
void sub_b209e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb209e0ULL || rel >= 0xb20e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b20e30 size=560 callers=1 calls=1
   calls: sub_afa6d0
*/
void sub_b20e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb20e30ULL || rel >= 0xb21060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b21060 size=576 callers=1 calls=7
   calls: sub_8dfba0, sub_ab95a0, sub_abfcf0, sub_ac5b50, sub_afa5a0, sub_afb660, sub_afb8c0
*/
void sub_b21060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb21060ULL || rel >= 0xb212a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b212a0 size=560 callers=1 calls=6
   calls: sub_ab95a0, sub_ac0200, sub_ac5b50, sub_afa5a0, sub_afb660, sub_afb8c0
*/
void sub_b212a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb212a0ULL || rel >= 0xb214d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b214d0 size=336 callers=1 calls=4
   calls: sub_abb780, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b214d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb214d0ULL || rel >= 0xb21620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b21620 size=1008 callers=1 calls=4
   calls: RequestUploadCompetitionTeam, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b21620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb21620ULL || rel >= 0xb21a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b21a10 size=944 callers=1 calls=12
   calls: sub_1354400, sub_1354690, sub_1386b00, sub_1386b80, sub_1386d20, sub_1386da0, sub_67bdb0, sub_67c120, sub_784f40, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b21a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb21a10ULL || rel >= 0xb21dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b21dc0 size=1088 callers=1 calls=6
   calls: RequestPostUserData, sub_abb780, sub_abb7d0, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b21dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb21dc0ULL || rel >= 0xb22200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22200 size=304 callers=4 calls=5
   calls: sub_1354690, sub_1386b00, sub_1386b80, sub_1386d20, sub_1386da0
*/
void sub_b22200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22200ULL || rel >= 0xb22330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22330 size=256 callers=1 calls=7
   calls: sub_1386b00, sub_1386b80, sub_1386d20, sub_1386da0, sub_8e0040, sub_abb7d0, sub_af7320
*/
void sub_b22330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22330ULL || rel >= 0xb22430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22430 size=224 callers=0 calls=0
*/
void sub_b22430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22430ULL || rel >= 0xb22510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22510 size=16 callers=0 calls=0
*/
void sub_b22510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22510ULL || rel >= 0xb22520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22520 size=16 callers=0 calls=0
*/
void sub_b22520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22520ULL || rel >= 0xb22530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22530 size=16 callers=0 calls=0
*/
void sub_b22530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22530ULL || rel >= 0xb22540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22540 size=16 callers=0 calls=0
*/
void sub_b22540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22540ULL || rel >= 0xb22550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22550 size=16 callers=0 calls=0
*/
void sub_b22550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22550ULL || rel >= 0xb22560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22560 size=576 callers=0 calls=5
   calls: sub_abb7e0, sub_ac5b50, sub_afa5a0, sub_afb8c0, sub_b08430
*/
void sub_b22560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22560ULL || rel >= 0xb227a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b227a0 size=64 callers=0 calls=0
*/
void sub_b227a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb227a0ULL || rel >= 0xb227e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b227e0 size=48 callers=0 calls=0
*/
void sub_b227e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb227e0ULL || rel >= 0xb22810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22810 size=48 callers=0 calls=0
*/
void sub_b22810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22810ULL || rel >= 0xb22840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22840 size=48 callers=0 calls=0
*/
void sub_b22840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22840ULL || rel >= 0xb22870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22870 size=64 callers=0 calls=0
*/
void sub_b22870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22870ULL || rel >= 0xb228b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b228b0 size=48 callers=0 calls=0
*/
void sub_b228b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb228b0ULL || rel >= 0xb228e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b228e0 size=48 callers=0 calls=0
*/
void sub_b228e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb228e0ULL || rel >= 0xb22910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22910 size=304 callers=0 calls=4
   calls: sub_abb8f0, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b22910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22910ULL || rel >= 0xb22a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22a40 size=64 callers=0 calls=0
*/
void sub_b22a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22a40ULL || rel >= 0xb22a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22a80 size=48 callers=0 calls=0
*/
void sub_b22a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22a80ULL || rel >= 0xb22ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22ab0 size=48 callers=0 calls=0
*/
void sub_b22ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22ab0ULL || rel >= 0xb22ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22ae0 size=288 callers=0 calls=4
   calls: sub_abb8f0, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b22ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22ae0ULL || rel >= 0xb22c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22c00 size=64 callers=0 calls=0
*/
void sub_b22c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22c00ULL || rel >= 0xb22c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22c40 size=48 callers=0 calls=0
*/
void sub_b22c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22c40ULL || rel >= 0xb22c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22c70 size=48 callers=0 calls=0
*/
void sub_b22c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22c70ULL || rel >= 0xb22ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22ca0 size=192 callers=0 calls=4
   calls: sub_ab9440, sub_ab95a0, sub_af7320, sub_b22330
*/
void sub_b22ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22ca0ULL || rel >= 0xb22d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22d60 size=64 callers=0 calls=0
*/
void sub_b22d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22d60ULL || rel >= 0xb22da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22da0 size=48 callers=0 calls=0
*/
void sub_b22da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22da0ULL || rel >= 0xb22dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22dd0 size=48 callers=0 calls=0
*/
void sub_b22dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22dd0ULL || rel >= 0xb22e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22e00 size=272 callers=0 calls=5
   calls: sub_1386b00, sub_1386d20, sub_ab9440, sub_abb7d0, sub_af7320
*/
void sub_b22e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22e00ULL || rel >= 0xb22f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22f10 size=64 callers=0 calls=0
*/
void sub_b22f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22f10ULL || rel >= 0xb22f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22f50 size=48 callers=0 calls=0
*/
void sub_b22f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22f50ULL || rel >= 0xb22f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22f80 size=48 callers=0 calls=0
*/
void sub_b22f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22f80ULL || rel >= 0xb22fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22fb0 size=64 callers=0 calls=0
*/
void sub_b22fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22fb0ULL || rel >= 0xb22ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b22ff0 size=64 callers=0 calls=0
*/
void sub_b22ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb22ff0ULL || rel >= 0xb23030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23030 size=48 callers=0 calls=0
*/
void sub_b23030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23030ULL || rel >= 0xb23060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23060 size=48 callers=0 calls=0
*/
void sub_b23060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23060ULL || rel >= 0xb23090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23090 size=48 callers=0 calls=0
*/
void sub_b23090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23090ULL || rel >= 0xb230c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b230c0 size=64 callers=0 calls=0
*/
void sub_b230c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb230c0ULL || rel >= 0xb23100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23100 size=48 callers=0 calls=0
*/
void sub_b23100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23100ULL || rel >= 0xb23130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23130 size=48 callers=0 calls=0
*/
void sub_b23130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23130ULL || rel >= 0xb23160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23160 size=288 callers=0 calls=4
   calls: sub_abb710, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b23160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23160ULL || rel >= 0xb23280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23280 size=64 callers=0 calls=0
*/
void sub_b23280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23280ULL || rel >= 0xb232c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b232c0 size=48 callers=0 calls=0
*/
void sub_b232c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb232c0ULL || rel >= 0xb232f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b232f0 size=48 callers=0 calls=0
*/
void sub_b232f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb232f0ULL || rel >= 0xb23320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23320 size=48 callers=0 calls=0
*/
void sub_b23320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23320ULL || rel >= 0xb23350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23350 size=64 callers=0 calls=0
*/
void sub_b23350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23350ULL || rel >= 0xb23390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23390 size=48 callers=0 calls=0
*/
void sub_b23390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23390ULL || rel >= 0xb233c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b233c0 size=48 callers=0 calls=0
*/
void sub_b233c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb233c0ULL || rel >= 0xb233f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b233f0 size=160 callers=0 calls=0
*/
void sub_b233f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb233f0ULL || rel >= 0xb23490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23490 size=512 callers=0 calls=6
   calls: sub_abb060, sub_ac5b50, sub_afb660, sub_afb760, sub_afc380, sub_d0c0
   ref: StateBtlSpotRankMatchAnimation
*/
void StateBtlSpotRankMatchAnimation_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23490ULL || rel >= 0xb23690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23690 size=16 callers=0 calls=0
*/
void sub_b23690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23690ULL || rel >= 0xb236a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b236a0 size=2208 callers=0 calls=18
   calls: sub_137baa0, sub_137bab0, sub_ab97d0, sub_abaeb0, sub_abb050, sub_ac1db0, sub_ac5b50, sub_ad32d0, sub_afb780, sub_afc380, sub_afd680, sub_b23f40
   ... +6 more
   ref: StateBtlSpotRankMatchPrepareMatching
   ref: StateBtlSpotRankMatchEntrance
*/
void StateBtlSpotRankMatchPrepareMatching(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb236a0ULL || rel >= 0xb23f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b23f40 size=608 callers=1 calls=5
   calls: RequestGetOrCreateStats, sub_11009c0, sub_ab97d0, sub_afc380, sub_e71830
*/
void sub_b23f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb23f40ULL || rel >= 0xb241a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b241a0 size=640 callers=1 calls=6
   calls: RequestGetCompetitionRankingRank, sub_11009c0, sub_6a4d30, sub_ab97d0, sub_afc380, sub_e71830
*/
void sub_b241a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb241a0ULL || rel >= 0xb24420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24420 size=368 callers=1 calls=8
   calls: sub_1386a80, sub_ab97d0, sub_abaeb0, sub_ac0c60, sub_ac1b10, sub_ac1c60, sub_ac1ce0, sub_afc380
*/
void sub_b24420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24420ULL || rel >= 0xb24590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24590 size=176 callers=1 calls=6
   calls: sub_abaeb0, sub_ac0c60, sub_ac1b10, sub_ac1c60, sub_ac1ce0, sub_afc380
*/
void sub_b24590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24590ULL || rel >= 0xb24640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24640 size=464 callers=1 calls=6
   calls: sub_1386a80, sub_ab97d0, sub_abaeb0, sub_ac1b10, sub_ac1ce0, sub_afc380
*/
void sub_b24640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24640ULL || rel >= 0xb24810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24810 size=544 callers=1 calls=6
   calls: sub_13868e0, sub_1386a80, sub_ab97d0, sub_ac5b50, sub_afb880, sub_b00b20
*/
void sub_b24810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24810ULL || rel >= 0xb24a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24a30 size=288 callers=1 calls=8
   calls: sub_ab97d0, sub_abade0, sub_ac14f0, sub_ac1510, sub_ac1530, sub_ac5b50, sub_afb660, sub_afc380
*/
void sub_b24a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24a30ULL || rel >= 0xb24b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24b50 size=144 callers=0 calls=0
*/
void sub_b24b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24b50ULL || rel >= 0xb24be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24be0 size=144 callers=0 calls=0
*/
void sub_b24be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24be0ULL || rel >= 0xb24c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24c70 size=160 callers=0 calls=0
*/
void sub_b24c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24c70ULL || rel >= 0xb24d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24d10 size=160 callers=0 calls=0
*/
void sub_b24d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24d10ULL || rel >= 0xb24db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24db0 size=160 callers=0 calls=0
*/
void sub_b24db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24db0ULL || rel >= 0xb24e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24e50 size=160 callers=0 calls=0
*/
void sub_b24e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24e50ULL || rel >= 0xb24ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24ef0 size=64 callers=0 calls=0
*/
void sub_b24ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24ef0ULL || rel >= 0xb24f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24f30 size=64 callers=0 calls=0
*/
void sub_b24f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24f30ULL || rel >= 0xb24f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24f70 size=48 callers=0 calls=0
*/
void sub_b24f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24f70ULL || rel >= 0xb24fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24fa0 size=48 callers=0 calls=0
*/
void sub_b24fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24fa0ULL || rel >= 0xb24fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b24fd0 size=48 callers=0 calls=0
*/
void sub_b24fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb24fd0ULL || rel >= 0xb25000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25000 size=64 callers=0 calls=0
*/
void sub_b25000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25000ULL || rel >= 0xb25040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25040 size=48 callers=0 calls=0
*/
void sub_b25040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25040ULL || rel >= 0xb25070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25070 size=48 callers=0 calls=0
*/
void sub_b25070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25070ULL || rel >= 0xb250a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b250a0 size=320 callers=0 calls=3
   calls: sub_abb0b0, sub_afc380, sub_b08430
*/
void sub_b250a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb250a0ULL || rel >= 0xb251e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b251e0 size=64 callers=0 calls=0
*/
void sub_b251e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb251e0ULL || rel >= 0xb25220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25220 size=48 callers=0 calls=0
*/
void sub_b25220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25220ULL || rel >= 0xb25250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25250 size=48 callers=0 calls=0
*/
void sub_b25250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25250ULL || rel >= 0xb25280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25280 size=48 callers=0 calls=0
*/
void sub_b25280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25280ULL || rel >= 0xb252b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b252b0 size=64 callers=0 calls=0
*/
void sub_b252b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb252b0ULL || rel >= 0xb252f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b252f0 size=48 callers=0 calls=0
*/
void sub_b252f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb252f0ULL || rel >= 0xb25320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25320 size=48 callers=0 calls=0
*/
void sub_b25320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25320ULL || rel >= 0xb25350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25350 size=160 callers=0 calls=0
*/
void sub_b25350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25350ULL || rel >= 0xb253f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b253f0 size=384 callers=0 calls=4
   calls: sub_ac5b50, sub_afb660, sub_afb760, sub_d0c0
   ref: StateBtlSpotCasualMatchEntrance
*/
void StateBtlSpotCasualMatchEntrance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb253f0ULL || rel >= 0xb25570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25570 size=16 callers=0 calls=0
*/
void sub_b25570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25570ULL || rel >= 0xb25580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25580 size=2592 callers=0 calls=20
   calls: RequestDownloadRegulation, RequestLoadApplicationSettingsValue, sub_11009c0, sub_1386860, sub_13874d0, sub_1387520, sub_ab9900, sub_aba6c0, sub_aba6f0, sub_ac5b50, sub_ad32d0, sub_afb5f0
   ... +8 more
   ref: StateBtlSpotTop
   ref: StateBtlSpotCasualMatchPrepareMatching
*/
void StateBtlSpotCasualMatchPrepareMatching_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25580ULL || rel >= 0xb25fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b25fa0 size=576 callers=1 calls=8
   calls: sub_1345ca0, sub_abc660, sub_abf2d0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0, sub_b08840
*/
void sub_b25fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25fa0ULL || rel >= 0xb261e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b261e0 size=336 callers=1 calls=5
   calls: sub_abf2c0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_b261e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb261e0ULL || rel >= 0xb26330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26330 size=112 callers=0 calls=0
*/
void sub_b26330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26330ULL || rel >= 0xb263a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b263a0 size=112 callers=0 calls=0
*/
void sub_b263a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb263a0ULL || rel >= 0xb26410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26410 size=112 callers=0 calls=0
*/
void sub_b26410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26410ULL || rel >= 0xb26480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26480 size=112 callers=0 calls=0
*/
void sub_b26480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26480ULL || rel >= 0xb264f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b264f0 size=112 callers=0 calls=0
*/
void sub_b264f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb264f0ULL || rel >= 0xb26560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26560 size=112 callers=0 calls=0
*/
void sub_b26560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26560ULL || rel >= 0xb265d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b265d0 size=832 callers=0 calls=6
   calls: sub_ab9800, sub_aba680, sub_ac5b50, sub_afb840, sub_b186f0, sub_b1d4a0
*/
void sub_b265d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb265d0ULL || rel >= 0xb26910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26910 size=64 callers=0 calls=0
*/
void sub_b26910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26910ULL || rel >= 0xb26950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26950 size=48 callers=0 calls=0
*/
void sub_b26950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26950ULL || rel >= 0xb26980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26980 size=48 callers=0 calls=0
*/
void sub_b26980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26980ULL || rel >= 0xb269b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b269b0 size=48 callers=0 calls=0
*/
void sub_b269b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb269b0ULL || rel >= 0xb269e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b269e0 size=64 callers=0 calls=0
*/
void sub_b269e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb269e0ULL || rel >= 0xb26a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26a20 size=48 callers=0 calls=0
*/
void sub_b26a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26a20ULL || rel >= 0xb26a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26a50 size=48 callers=0 calls=0
*/
void sub_b26a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26a50ULL || rel >= 0xb26a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26a80 size=272 callers=0 calls=6
   calls: sub_13866c0, sub_1386860, sub_8e0040, sub_ab9440, sub_ab95a0, sub_b16b50
*/
void sub_b26a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26a80ULL || rel >= 0xb26b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26b90 size=64 callers=0 calls=0
*/
void sub_b26b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26b90ULL || rel >= 0xb26bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26bd0 size=48 callers=0 calls=0
*/
void sub_b26bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26bd0ULL || rel >= 0xb26c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26c00 size=48 callers=0 calls=0
*/
void sub_b26c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26c00ULL || rel >= 0xb26c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26c30 size=240 callers=0 calls=3
   calls: sub_1386860, sub_ab9440, sub_b16b50
*/
void sub_b26c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26c30ULL || rel >= 0xb26d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26d20 size=64 callers=0 calls=0
*/
void sub_b26d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26d20ULL || rel >= 0xb26d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26d60 size=48 callers=0 calls=0
*/
void sub_b26d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26d60ULL || rel >= 0xb26d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26d90 size=48 callers=0 calls=0
*/
void sub_b26d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26d90ULL || rel >= 0xb26dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26dc0 size=160 callers=0 calls=0
*/
void sub_b26dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26dc0ULL || rel >= 0xb26e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b26e60 size=496 callers=0 calls=6
   calls: sub_ab97d0, sub_ac5b50, sub_afa5a0, sub_afb760, sub_afb8c0, sub_d0c0
   ref: StateBtlSpotCompPrepareMatching
*/
void StateBtlSpotCompPrepareMatching_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb26e60ULL || rel >= 0xb27050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b27050 size=16 callers=0 calls=0
*/
void sub_b27050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb27050ULL || rel >= 0xb27060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b27060 size=1456 callers=0 calls=20
   calls: sub_104c020, sub_1386b00, sub_1386d20, sub_ab9900, sub_ac0f30, sub_ac1050, sub_ac5b50, sub_ad32d0, sub_af7320, sub_afb780, sub_afb940, sub_afba60
   ... +8 more
   ref: StateBtlSpotCompTop
   ref: StateBtlSpotTop
   ref: StateBtlSpotCommonMatching
*/
void StateBtlSpotCommonMatching_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb27060ULL || rel >= 0xb27610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b27610 size=304 callers=2 calls=5
   calls: sub_1354690, sub_1386b00, sub_1386b80, sub_1386d20, sub_1386da0
*/
void sub_b27610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb27610ULL || rel >= 0xb27740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b27740 size=1088 callers=1 calls=6
   calls: RequestPostUserData, sub_abb780, sub_abb7d0, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b27740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb27740ULL || rel >= 0xb27b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b27b80 size=480 callers=1 calls=1
   calls: RequestGetOrCreateStats
*/
void sub_b27b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb27b80ULL || rel >= 0xb27d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b27d60 size=336 callers=1 calls=5
   calls: sub_abb620, sub_ac1250, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b27d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb27d60ULL || rel >= 0xb27eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b27eb0 size=896 callers=1 calls=9
   calls: sub_1386b00, sub_1386d20, sub_783bd0, sub_785320, sub_abb910, sub_abba80, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b27eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb27eb0ULL || rel >= 0xb28230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28230 size=560 callers=1 calls=3
   calls: RequestLoadApplicationSettingsValue, sub_11009c0, sub_e71830
*/
void sub_b28230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28230ULL || rel >= 0xb28460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28460 size=272 callers=1 calls=7
   calls: sub_abb620, sub_ac0c80, sub_ac0e70, sub_ac14f0, sub_ac5b50, sub_af7320, sub_afb660
*/
void sub_b28460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28460ULL || rel >= 0xb28570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28570 size=144 callers=0 calls=0
*/
void sub_b28570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28570ULL || rel >= 0xb28600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28600 size=144 callers=0 calls=0
*/
void sub_b28600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28600ULL || rel >= 0xb28690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28690 size=160 callers=0 calls=0
*/
void sub_b28690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28690ULL || rel >= 0xb28730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28730 size=160 callers=0 calls=0
*/
void sub_b28730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28730ULL || rel >= 0xb287d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b287d0 size=160 callers=0 calls=0
*/
void sub_b287d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb287d0ULL || rel >= 0xb28870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28870 size=160 callers=0 calls=0
*/
void sub_b28870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28870ULL || rel >= 0xb28910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28910 size=336 callers=0 calls=5
   calls: sub_ab9800, sub_ac5b50, sub_afa5a0, sub_afb8c0, sub_b1d4a0
*/
void sub_b28910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28910ULL || rel >= 0xb28a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28a60 size=64 callers=0 calls=0
*/
void sub_b28a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28a60ULL || rel >= 0xb28aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28aa0 size=48 callers=0 calls=0
*/
void sub_b28aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28aa0ULL || rel >= 0xb28ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28ad0 size=48 callers=0 calls=0
*/
void sub_b28ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28ad0ULL || rel >= 0xb28b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28b00 size=48 callers=0 calls=0
*/
void sub_b28b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28b00ULL || rel >= 0xb28b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28b30 size=64 callers=0 calls=0
*/
void sub_b28b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28b30ULL || rel >= 0xb28b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28b70 size=48 callers=0 calls=0
*/
void sub_b28b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28b70ULL || rel >= 0xb28ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28ba0 size=48 callers=0 calls=0
*/
void sub_b28ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28ba0ULL || rel >= 0xb28bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28bd0 size=592 callers=0 calls=4
   calls: sub_abb7e0, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b28bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28bd0ULL || rel >= 0xb28e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28e20 size=64 callers=0 calls=0
*/
void sub_b28e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28e20ULL || rel >= 0xb28e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28e60 size=48 callers=0 calls=0
*/
void sub_b28e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28e60ULL || rel >= 0xb28e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28e90 size=48 callers=0 calls=0
*/
void sub_b28e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28e90ULL || rel >= 0xb28ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28ec0 size=48 callers=0 calls=0
*/
void sub_b28ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28ec0ULL || rel >= 0xb28ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28ef0 size=64 callers=0 calls=0
*/
void sub_b28ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28ef0ULL || rel >= 0xb28f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28f30 size=48 callers=0 calls=0
*/
void sub_b28f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28f30ULL || rel >= 0xb28f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28f60 size=48 callers=0 calls=0
*/
void sub_b28f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28f60ULL || rel >= 0xb28f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b28f90 size=288 callers=0 calls=4
   calls: sub_abb710, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b28f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28f90ULL || rel >= 0xb290b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b290b0 size=64 callers=0 calls=0
*/
void sub_b290b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb290b0ULL || rel >= 0xb290f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b290f0 size=48 callers=0 calls=0
*/
void sub_b290f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb290f0ULL || rel >= 0xb29120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29120 size=48 callers=0 calls=0
*/
void sub_b29120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29120ULL || rel >= 0xb29150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29150 size=48 callers=0 calls=0
*/
void sub_b29150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29150ULL || rel >= 0xb29180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29180 size=64 callers=0 calls=0
*/
void sub_b29180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29180ULL || rel >= 0xb291c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b291c0 size=48 callers=0 calls=0
*/
void sub_b291c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb291c0ULL || rel >= 0xb291f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b291f0 size=48 callers=0 calls=0
*/
void sub_b291f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb291f0ULL || rel >= 0xb29220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29220 size=160 callers=0 calls=0
*/
void sub_b29220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29220ULL || rel >= 0xb292c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b292c0 size=528 callers=0 calls=6
   calls: sub_ac4880, sub_ac5b50, sub_afb660, sub_afb6e0, sub_afb760, sub_d0c0
   ref: StateBtlSpotRankMatchPrepareMatching
*/
void StateBtlSpotRankMatchPrepareMatching_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb292c0ULL || rel >= 0xb294d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b294d0 size=16 callers=0 calls=0
*/
void sub_b294d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb294d0ULL || rel >= 0xb294e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b294e0 size=1408 callers=0 calls=14
   calls: InstanceTable_431, sub_15b7a70, sub_15b8140, sub_6a4d50, sub_abb080, sub_ac4880, sub_ac5b50, sub_ad32d0, sub_afb6e0, sub_afb780, sub_afb880, sub_afd680
   ... +2 more
   ref: StateBtlSpotTop
   ref: StateBtlSpotRankMatchEntrance
   ref: StateBtlSpotCommonMatching
*/
void StateBtlSpotRankMatchEntrance_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb294e0ULL || rel >= 0xb29a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29a60 size=304 callers=1 calls=4
   calls: sub_ab97d0, sub_ac5b50, sub_afb880, sub_b00b20
*/
void sub_b29a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29a60ULL || rel >= 0xb29b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29b90 size=112 callers=0 calls=0
*/
void sub_b29b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29b90ULL || rel >= 0xb29c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29c00 size=112 callers=0 calls=0
*/
void sub_b29c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29c00ULL || rel >= 0xb29c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29c70 size=112 callers=0 calls=0
*/
void sub_b29c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29c70ULL || rel >= 0xb29ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29ce0 size=112 callers=0 calls=0
*/
void sub_b29ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29ce0ULL || rel >= 0xb29d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29d50 size=112 callers=0 calls=0
*/
void sub_b29d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29d50ULL || rel >= 0xb29dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29dc0 size=112 callers=0 calls=0
*/
void sub_b29dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29dc0ULL || rel >= 0xb29e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29e30 size=160 callers=0 calls=0
*/
void sub_b29e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29e30ULL || rel >= 0xb29ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b29ed0 size=400 callers=0 calls=5
   calls: sub_ac4880, sub_ac5b50, sub_afb6e0, sub_afb760, sub_d0c0
   ref: StateBtlSpotCasualMatchPrepareMatching
*/
void StateBtlSpotCasualMatchPrepareMatching_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb29ed0ULL || rel >= 0xb2a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2a060 size=16 callers=0 calls=0
*/
void sub_b2a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2a060ULL || rel >= 0xb2a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2a070 size=2112 callers=0 calls=15
   calls: RequestGetUserData, RequestPostUserData, sub_aba670, sub_aba700, sub_aba770, sub_ac4880, sub_ac5b50, sub_ad32d0, sub_afb6e0, sub_afb780, sub_afb840, sub_afd680
   ... +3 more
   ref: StateBtlSpotTop
   ref: StateBtlSpotCasualMatchEntrance
   ref: StateBtlSpotCommonMatching
*/
void StateBtlSpotCommonMatching_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2a070ULL || rel >= 0xb2a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2a8b0 size=320 callers=1 calls=5
   calls: sub_8e0730, sub_ab95a0, sub_ac5b50, sub_afb840, sub_b186f0
*/
void sub_b2a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2a8b0ULL || rel >= 0xb2a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2a9f0 size=96 callers=0 calls=0
*/
void sub_b2a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2a9f0ULL || rel >= 0xb2aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2aa50 size=96 callers=0 calls=0
*/
void sub_b2aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2aa50ULL || rel >= 0xb2aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2aab0 size=96 callers=0 calls=0
*/
void sub_b2aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2aab0ULL || rel >= 0xb2ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ab10 size=96 callers=0 calls=0
*/
void sub_b2ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ab10ULL || rel >= 0xb2ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ab70 size=96 callers=0 calls=0
*/
void sub_b2ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ab70ULL || rel >= 0xb2abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2abd0 size=96 callers=0 calls=0
*/
void sub_b2abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2abd0ULL || rel >= 0xb2ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ac30 size=192 callers=0 calls=3
   calls: sub_aba710, sub_aba720, sub_b16b50
*/
void sub_b2ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ac30ULL || rel >= 0xb2acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2acf0 size=64 callers=0 calls=0
*/
void sub_b2acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2acf0ULL || rel >= 0xb2ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ad30 size=48 callers=0 calls=0
*/
void sub_b2ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ad30ULL || rel >= 0xb2ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ad60 size=48 callers=0 calls=0
*/
void sub_b2ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ad60ULL || rel >= 0xb2ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ad90 size=64 callers=0 calls=0
*/
void sub_b2ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ad90ULL || rel >= 0xb2add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2add0 size=64 callers=0 calls=0
*/
void sub_b2add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2add0ULL || rel >= 0xb2ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ae10 size=48 callers=0 calls=0
*/
void sub_b2ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ae10ULL || rel >= 0xb2ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ae40 size=48 callers=0 calls=0
*/
void sub_b2ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ae40ULL || rel >= 0xb2ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ae70 size=144 callers=0 calls=3
   calls: sub_aba710, sub_aba720, sub_b16b50
*/
void sub_b2ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ae70ULL || rel >= 0xb2af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2af00 size=64 callers=0 calls=0
*/
void sub_b2af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2af00ULL || rel >= 0xb2af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2af40 size=48 callers=0 calls=0
*/
void sub_b2af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2af40ULL || rel >= 0xb2af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2af70 size=48 callers=0 calls=0
*/
void sub_b2af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2af70ULL || rel >= 0xb2afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2afa0 size=48 callers=0 calls=0
*/
void sub_b2afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2afa0ULL || rel >= 0xb2afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2afd0 size=64 callers=0 calls=0
*/
void sub_b2afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2afd0ULL || rel >= 0xb2b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b010 size=48 callers=0 calls=0
*/
void sub_b2b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b010ULL || rel >= 0xb2b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b040 size=48 callers=0 calls=0
*/
void sub_b2b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b040ULL || rel >= 0xb2b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b070 size=160 callers=0 calls=0
*/
void sub_b2b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b070ULL || rel >= 0xb2b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b110 size=144 callers=1 calls=1
   calls: sub_b2b1a0
*/
void sub_b2b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b110ULL || rel >= 0xb2b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b1a0 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9da70
*/
void sub_b2b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b1a0ULL || rel >= 0xb2b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b360 size=96 callers=0 calls=0
*/
void sub_b2b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b360ULL || rel >= 0xb2b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b3c0 size=96 callers=0 calls=0
*/
void sub_b2b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b3c0ULL || rel >= 0xb2b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b420 size=96 callers=0 calls=0
*/
void sub_b2b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b420ULL || rel >= 0xb2b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b480 size=96 callers=0 calls=0
*/
void sub_b2b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b480ULL || rel >= 0xb2b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b4e0 size=96 callers=0 calls=0
*/
void sub_b2b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b4e0ULL || rel >= 0xb2b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b540 size=96 callers=0 calls=0
*/
void sub_b2b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b540ULL || rel >= 0xb2b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b5a0 size=16 callers=0 calls=0
*/
void sub_b2b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b5a0ULL || rel >= 0xb2b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b5b0 size=16 callers=0 calls=0
*/
void sub_b2b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b5b0ULL || rel >= 0xb2b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b5c0 size=16 callers=0 calls=0
*/
void sub_b2b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b5c0ULL || rel >= 0xb2b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b5d0 size=288 callers=0 calls=2
   calls: sub_b2b6f0, sub_d7c910
*/
void sub_b2b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b5d0ULL || rel >= 0xb2b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b6f0 size=416 callers=1 calls=3
   calls: sub_672c10, sub_b2ba70, sub_c386f0
*/
void sub_b2b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b6f0ULL || rel >= 0xb2b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b890 size=16 callers=0 calls=0
*/
void sub_b2b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b890ULL || rel >= 0xb2b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b8a0 size=16 callers=0 calls=0
*/
void sub_b2b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b8a0ULL || rel >= 0xb2b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b8b0 size=16 callers=0 calls=0
*/
void sub_b2b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b8b0ULL || rel >= 0xb2b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b8c0 size=304 callers=0 calls=0
*/
void sub_b2b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b8c0ULL || rel >= 0xb2b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2b9f0 size=128 callers=0 calls=0
*/
void sub_b2b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b9f0ULL || rel >= 0xb2ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ba70 size=80 callers=1 calls=1
   calls: sub_e7b660
*/
void sub_b2ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ba70ULL || rel >= 0xb2bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2bac0 size=224 callers=0 calls=3
   calls: sub_7c2da0, sub_b2c8d0, sub_e7b5e0
*/
void sub_b2bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bac0ULL || rel >= 0xb2bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2bba0 size=96 callers=0 calls=3
   calls: sub_78f150, sub_b2bc00, sub_e7c0f0
*/
void sub_b2bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bba0ULL || rel >= 0xb2bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2bc00 size=432 callers=1 calls=3
   calls: sub_b2c9c0, sub_e7c160, sub_e7c210
*/
void sub_b2bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bc00ULL || rel >= 0xb2bdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2bdb0 size=16 callers=0 calls=0
*/
void sub_b2bdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bdb0ULL || rel >= 0xb2bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2bdc0 size=16 callers=0 calls=0
*/
void sub_b2bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bdc0ULL || rel >= 0xb2bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2bdd0 size=16 callers=0 calls=0
*/
void sub_b2bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bdd0ULL || rel >= 0xb2bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2bde0 size=368 callers=0 calls=3
   calls: sub_b2caf0, sub_b2cc40, sub_e7c160
*/
void sub_b2bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bde0ULL || rel >= 0xb2bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2bf50 size=16 callers=0 calls=0
*/
void sub_b2bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bf50ULL || rel >= 0xb2bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2bf60 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b2bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bf60ULL || rel >= 0xb2c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c100 size=16 callers=0 calls=0
*/
void sub_b2c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c100ULL || rel >= 0xb2c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c110 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_b2c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c110ULL || rel >= 0xb2c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c1c0 size=16 callers=0 calls=0
*/
void sub_b2c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c1c0ULL || rel >= 0xb2c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c1d0 size=16 callers=0 calls=0
*/
void sub_b2c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c1d0ULL || rel >= 0xb2c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c1e0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_b2c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c1e0ULL || rel >= 0xb2c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c290 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_b2c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c290ULL || rel >= 0xb2c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c340 size=16 callers=0 calls=0
*/
void sub_b2c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c340ULL || rel >= 0xb2c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c350 size=16 callers=0 calls=0
*/
void sub_b2c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c350ULL || rel >= 0xb2c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c360 size=16 callers=0 calls=0
*/
void sub_b2c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c360ULL || rel >= 0xb2c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c370 size=16 callers=0 calls=0
*/
void sub_b2c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c370ULL || rel >= 0xb2c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c380 size=16 callers=0 calls=0
*/
void sub_b2c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c380ULL || rel >= 0xb2c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c390 size=16 callers=0 calls=0
*/
void sub_b2c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c390ULL || rel >= 0xb2c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c3a0 size=16 callers=0 calls=0
*/
void sub_b2c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c3a0ULL || rel >= 0xb2c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c3b0 size=16 callers=0 calls=0
*/
void sub_b2c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c3b0ULL || rel >= 0xb2c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c3c0 size=16 callers=0 calls=0
*/
void sub_b2c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c3c0ULL || rel >= 0xb2c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c3d0 size=16 callers=0 calls=0
*/
void sub_b2c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c3d0ULL || rel >= 0xb2c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c3e0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_b2c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c3e0ULL || rel >= 0xb2c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c460 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b2c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c460ULL || rel >= 0xb2c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c5d0 size=96 callers=0 calls=1
   calls: sub_b2c7f0
*/
void sub_b2c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c5d0ULL || rel >= 0xb2c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c630 size=16 callers=0 calls=0
*/
void sub_b2c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c630ULL || rel >= 0xb2c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c640 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b2c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c640ULL || rel >= 0xb2c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c6e0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b2c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c6e0ULL || rel >= 0xb2c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c7a0 size=16 callers=0 calls=0
*/
void sub_b2c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c7a0ULL || rel >= 0xb2c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c7b0 size=16 callers=0 calls=0
*/
void sub_b2c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c7b0ULL || rel >= 0xb2c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c7c0 size=16 callers=0 calls=0
*/
void sub_b2c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c7c0ULL || rel >= 0xb2c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c7d0 size=32 callers=0 calls=0
*/
void sub_b2c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c7d0ULL || rel >= 0xb2c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c7f0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_b2c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c7f0ULL || rel >= 0xb2c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c8d0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b2c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c8d0ULL || rel >= 0xb2c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2c9c0 size=304 callers=1 calls=0
*/
void sub_b2c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2c9c0ULL || rel >= 0xb2caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2caf0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_b2caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2caf0ULL || rel >= 0xb2cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2cc40 size=304 callers=1 calls=0
*/
void sub_b2cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2cc40ULL || rel >= 0xb2cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2cd70 size=128 callers=0 calls=0
*/
void sub_b2cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2cd70ULL || rel >= 0xb2cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2cdf0 size=368 callers=0 calls=0
*/
void sub_b2cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2cdf0ULL || rel >= 0xb2cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2cf60 size=736 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2cf60ULL || rel >= 0xb2d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d240 size=96 callers=0 calls=1
   calls: sub_d0c0
   ref: StateCreateSession
*/
void StateCreateSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d240ULL || rel >= 0xb2d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d2a0 size=16 callers=0 calls=0
*/
void sub_b2d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d2a0ULL || rel >= 0xb2d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d2b0 size=592 callers=0 calls=4
   calls: StartCreateSession, sub_104ffc0, sub_1050000, sub_1050060
*/
void sub_b2d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d2b0ULL || rel >= 0xb2d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d500 size=16 callers=0 calls=0
*/
void sub_b2d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d500ULL || rel >= 0xb2d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d510 size=16 callers=0 calls=0
*/
void sub_b2d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d510ULL || rel >= 0xb2d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d520 size=16 callers=0 calls=0
*/
void sub_b2d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d520ULL || rel >= 0xb2d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d530 size=16 callers=0 calls=0
*/
void sub_b2d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d530ULL || rel >= 0xb2d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d540 size=16 callers=0 calls=0
*/
void sub_b2d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d540ULL || rel >= 0xb2d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d550 size=16 callers=0 calls=0
*/
void sub_b2d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d550ULL || rel >= 0xb2d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d560 size=16 callers=0 calls=0
*/
void sub_b2d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d560ULL || rel >= 0xb2d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d570 size=16 callers=0 calls=0
*/
void sub_b2d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d570ULL || rel >= 0xb2d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d580 size=16 callers=0 calls=0
*/
void sub_b2d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d580ULL || rel >= 0xb2d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d590 size=464 callers=0 calls=8
   calls: sub_1064370, sub_1064a20, sub_10759a0, sub_10759c0, sub_1076180, sub_1076260, sub_1078410, sub_e51bf0
*/
void sub_b2d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d590ULL || rel >= 0xb2d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d760 size=16 callers=0 calls=0
*/
void sub_b2d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d760ULL || rel >= 0xb2d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d770 size=16 callers=0 calls=0
*/
void sub_b2d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d770ULL || rel >= 0xb2d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d780 size=16 callers=0 calls=0
*/
void sub_b2d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d780ULL || rel >= 0xb2d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d790 size=16 callers=0 calls=0
*/
void sub_b2d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d790ULL || rel >= 0xb2d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d7a0 size=16 callers=0 calls=0
*/
void sub_b2d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d7a0ULL || rel >= 0xb2d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d7b0 size=16 callers=0 calls=0
*/
void sub_b2d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d7b0ULL || rel >= 0xb2d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d7c0 size=16 callers=0 calls=0
*/
void sub_b2d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d7c0ULL || rel >= 0xb2d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d7d0 size=16 callers=0 calls=0
*/
void sub_b2d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d7d0ULL || rel >= 0xb2d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d7e0 size=16 callers=0 calls=0
*/
void sub_b2d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d7e0ULL || rel >= 0xb2d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d7f0 size=16 callers=0 calls=0
*/
void sub_b2d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d7f0ULL || rel >= 0xb2d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d800 size=16 callers=0 calls=0
*/
void sub_b2d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d800ULL || rel >= 0xb2d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d810 size=16 callers=0 calls=0
*/
void sub_b2d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d810ULL || rel >= 0xb2d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d820 size=144 callers=1 calls=1
   calls: sub_b2d8b0
*/
void sub_b2d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d820ULL || rel >= 0xb2d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2d8b0 size=528 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_b2d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2d8b0ULL || rel >= 0xb2dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2dac0 size=96 callers=0 calls=0
*/
void sub_b2dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2dac0ULL || rel >= 0xb2db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2db20 size=96 callers=0 calls=0
*/
void sub_b2db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2db20ULL || rel >= 0xb2db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2db80 size=96 callers=0 calls=0
*/
void sub_b2db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2db80ULL || rel >= 0xb2dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2dbe0 size=96 callers=0 calls=0
*/
void sub_b2dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2dbe0ULL || rel >= 0xb2dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2dc40 size=96 callers=0 calls=0
*/
void sub_b2dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2dc40ULL || rel >= 0xb2dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2dca0 size=96 callers=0 calls=0
*/
void sub_b2dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2dca0ULL || rel >= 0xb2dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2dd00 size=16 callers=0 calls=0
*/
void sub_b2dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2dd00ULL || rel >= 0xb2dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2dd10 size=16 callers=0 calls=0
*/
void sub_b2dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2dd10ULL || rel >= 0xb2dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2dd20 size=64 callers=0 calls=1
   calls: sub_105c3c0
*/
void sub_b2dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2dd20ULL || rel >= 0xb2dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2dd60 size=1344 callers=0 calls=9
   calls: sub_104dbb0, sub_104fb70, sub_1050060, sub_10617a0, sub_10619f0, sub_1064970, sub_1078400, sub_b2e2a0, sub_d7c9a0
*/
void sub_b2dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2dd60ULL || rel >= 0xb2e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2e2a0 size=432 callers=1 calls=3
   calls: sub_672c10, sub_b2e630, sub_c386f0
*/
void sub_b2e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e2a0ULL || rel >= 0xb2e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2e450 size=16 callers=0 calls=0
*/
void sub_b2e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e450ULL || rel >= 0xb2e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2e460 size=16 callers=0 calls=0
*/
void sub_b2e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e460ULL || rel >= 0xb2e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2e470 size=16 callers=0 calls=0
*/
void sub_b2e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e470ULL || rel >= 0xb2e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2e480 size=304 callers=0 calls=0
*/
void sub_b2e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e480ULL || rel >= 0xb2e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2e5b0 size=128 callers=0 calls=0
*/
void sub_b2e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e5b0ULL || rel >= 0xb2e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2e630 size=128 callers=1 calls=2
   calls: sub_b2e6b0, sub_e7b660
*/
void sub_b2e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e630ULL || rel >= 0xb2e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2e6b0 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_b30320, sub_e7b5e0
*/
void sub_b2e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e6b0ULL || rel >= 0xb2e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2e790 size=304 callers=0 calls=7
   calls: sub_5cfad0, sub_78f150, sub_78f240, sub_79ab20, sub_b2e8c0, sub_e7c0f0, sub_e7e890
   ref: ViewSystemMessage
*/
void ViewSystemMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e790ULL || rel >= 0xb2e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2e8c0 size=400 callers=1 calls=3
   calls: sub_b30410, sub_b30990, sub_e7c160
*/
void sub_b2e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e8c0ULL || rel >= 0xb2ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ea50 size=16 callers=0 calls=0
*/
void sub_b2ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ea50ULL || rel >= 0xb2ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ea60 size=736 callers=0 calls=7
   calls: sub_104e050, sub_105c3c0, sub_5cfad0, sub_67b990, sub_b2ed40, sub_b30410, sub_e7ea90
*/
void sub_b2ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ea60ULL || rel >= 0xb2ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2ed40 size=848 callers=1 calls=1
   calls: sub_b2fb20
*/
void sub_b2ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ed40ULL || rel >= 0xb2f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f090 size=16 callers=0 calls=0
*/
void sub_b2f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f090ULL || rel >= 0xb2f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f0a0 size=864 callers=0 calls=5
   calls: sub_79c240, sub_b30540, sub_b30680, sub_b307d0, sub_e7c160
*/
void sub_b2f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f0a0ULL || rel >= 0xb2f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f400 size=16 callers=0 calls=0
*/
void sub_b2f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f400ULL || rel >= 0xb2f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f410 size=544 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b2f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f410ULL || rel >= 0xb2f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f630 size=16 callers=0 calls=0
*/
void sub_b2f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f630ULL || rel >= 0xb2f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f640 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_b2f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f640ULL || rel >= 0xb2f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f6f0 size=16 callers=0 calls=0
*/
void sub_b2f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f6f0ULL || rel >= 0xb2f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f700 size=16 callers=0 calls=0
*/
void sub_b2f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f700ULL || rel >= 0xb2f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f710 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_b2f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f710ULL || rel >= 0xb2f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f7c0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_b2f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f7c0ULL || rel >= 0xb2f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f870 size=16 callers=0 calls=0
*/
void sub_b2f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f870ULL || rel >= 0xb2f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f880 size=16 callers=0 calls=0
*/
void sub_b2f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f880ULL || rel >= 0xb2f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2f890 size=656 callers=3 calls=0
*/
void sub_b2f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f890ULL || rel >= 0xb2fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2fb20 size=784 callers=3 calls=0
*/
void sub_b2fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2fb20ULL || rel >= 0xb2fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2fe30 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_b2fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2fe30ULL || rel >= 0xb2feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b2feb0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b2feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2feb0ULL || rel >= 0xb30020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30020 size=96 callers=0 calls=1
   calls: sub_b30240
*/
void sub_b30020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30020ULL || rel >= 0xb30080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30080 size=16 callers=0 calls=0
*/
void sub_b30080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30080ULL || rel >= 0xb30090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30090 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b30090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30090ULL || rel >= 0xb30130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30130 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b30130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30130ULL || rel >= 0xb301f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b301f0 size=16 callers=0 calls=0
*/
void sub_b301f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb301f0ULL || rel >= 0xb30200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30200 size=16 callers=0 calls=0
*/
void sub_b30200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30200ULL || rel >= 0xb30210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30210 size=16 callers=0 calls=0
*/
void sub_b30210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30210ULL || rel >= 0xb30220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30220 size=32 callers=0 calls=0
*/
void sub_b30220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30220ULL || rel >= 0xb30240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30240 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_b30240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30240ULL || rel >= 0xb30320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30320 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b30320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30320ULL || rel >= 0xb30410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30410 size=304 callers=7 calls=0
*/
void sub_b30410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30410ULL || rel >= 0xb30540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30540 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_b30540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30540ULL || rel >= 0xb30680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30680 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_b30680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30680ULL || rel >= 0xb307d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b307d0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_b307d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb307d0ULL || rel >= 0xb30910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30910 size=128 callers=0 calls=0
*/
void sub_b30910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30910ULL || rel >= 0xb30990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30990 size=80 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_b30990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30990ULL || rel >= 0xb309e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b309e0 size=240 callers=0 calls=0
*/
void sub_b309e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb309e0ULL || rel >= 0xb30ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30ad0 size=16 callers=0 calls=0
*/
void sub_b30ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30ad0ULL || rel >= 0xb30ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30ae0 size=16 callers=0 calls=0
*/
void sub_b30ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30ae0ULL || rel >= 0xb30af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30af0 size=16 callers=0 calls=0
*/
void sub_b30af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30af0ULL || rel >= 0xb30b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30b00 size=16 callers=0 calls=0
*/
void sub_b30b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30b00ULL || rel >= 0xb30b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30b10 size=16 callers=0 calls=0
*/
void sub_b30b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30b10ULL || rel >= 0xb30b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30b20 size=16 callers=0 calls=0
*/
void sub_b30b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30b20ULL || rel >= 0xb30b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30b30 size=16 callers=0 calls=0
*/
void sub_b30b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30b30ULL || rel >= 0xb30b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30b40 size=16 callers=0 calls=0
*/
void sub_b30b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30b40ULL || rel >= 0xb30b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b30b50 size=2384 callers=0 calls=14
   calls: sub_106fcf0, sub_106fd00, sub_106fd30, sub_1078400, sub_1314a80, sub_67b7e0, sub_67b990, sub_67d450, sub_b30410, sub_b31900, sub_c39c40, sub_d0c0
   ... +2 more
   ref: StateConfirm
   ref: ViewSystemMessage
*/
void ViewSystemMessage_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb30b50ULL || rel >= 0xb314a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b314a0 size=80 callers=0 calls=2
   calls: sub_eb8c60, sub_eb8ea0
*/
void sub_b314a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb314a0ULL || rel >= 0xb314f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

