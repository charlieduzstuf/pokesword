/* subsdk1 functions 000e2270..0011cbc0 (6 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 000e2270 size=800 callers=1 calls=2
   calls: sub_66d40, sub_e7560
*/
void sub_e2270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2270ULL || rel >= 0xe2590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2590 size=528 callers=1 calls=10
   calls: sub_3b040, sub_652b0, sub_9adb0, sub_a7fb0, sub_a92d0, sub_aa640, sub_e35e0, sub_e3e50, sub_e4210, sub_e43e0
*/
void sub_e2590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2590ULL || rel >= 0xe27a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e27a0 size=336 callers=1 calls=6
   calls: sub_64060, sub_68ce0, sub_68db0, sub_e7ad0, sub_ea640, sub_ea830
*/
void sub_e27a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe27a0ULL || rel >= 0xe28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e28f0 size=816 callers=0 calls=3
   calls: sub_66cd0, sub_9a600, sub_e6670
*/
void sub_e28f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe28f0ULL || rel >= 0xe2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2c20 size=192 callers=2 calls=1
   calls: sub_9a600
*/
void sub_e2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2c20ULL || rel >= 0xe2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2ce0 size=240 callers=2 calls=2
   calls: sub_66cd0, sub_e2c20
*/
void sub_e2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2ce0ULL || rel >= 0xe2dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2dd0 size=352 callers=1 calls=2
   calls: sub_63c30, sub_9a740
*/
void sub_e2dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2dd0ULL || rel >= 0xe2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2f30 size=1136 callers=1 calls=5
   calls: sub_5be70, sub_679f0, sub_67ab0, sub_69b70, sub_e2dd0
*/
void sub_e2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2f30ULL || rel >= 0xe33a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e33a0 size=400 callers=1 calls=1
   calls: sub_66cd0
*/
void sub_e33a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33a0ULL || rel >= 0xe3530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3530 size=64 callers=0 calls=0
*/
void sub_e3530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3530ULL || rel >= 0xe3570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3570 size=96 callers=0 calls=0
*/
void sub_e3570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3570ULL || rel >= 0xe35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e35d0 size=16 callers=0 calls=0
*/
void sub_e35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe35d0ULL || rel >= 0xe35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e35e0 size=1600 callers=1 calls=2
   calls: sub_38b0, sub_e7560
*/
void sub_e35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe35e0ULL || rel >= 0xe3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3c20 size=64 callers=0 calls=0
*/
void sub_e3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c20ULL || rel >= 0xe3c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3c60 size=496 callers=1 calls=6
   calls: sub_66cd0, sub_7d430, sub_9c950, sub_9d2f0, sub_a7800, sub_e2c20
*/
void sub_e3c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c60ULL || rel >= 0xe3e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3e50 size=560 callers=1 calls=6
   calls: sub_3b040, sub_9b0a0, sub_a8a50, sub_aa0f0, sub_e3c60, sub_e4080
*/
void sub_e3e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e50ULL || rel >= 0xe4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4080 size=400 callers=1 calls=1
   calls: sub_e7280
*/
void sub_e4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4080ULL || rel >= 0xe4210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4210 size=464 callers=1 calls=6
   calls: sub_3b040, sub_67010, sub_7d430, sub_9adb0, sub_9d2f0, sub_a70d0
*/
void sub_e4210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4210ULL || rel >= 0xe43e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e43e0 size=672 callers=1 calls=10
   calls: sub_652b0, sub_9b3e0, sub_9bed0, sub_a7150, sub_a7890, sub_a80d0, sub_a81c0, sub_a82d0, sub_a92d0, sub_aa640
*/
void sub_e43e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43e0ULL || rel >= 0xe4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4680 size=816 callers=1 calls=1
   calls: sub_3870
*/
void sub_e4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4680ULL || rel >= 0xe49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e49b0 size=16 callers=0 calls=0
*/
void sub_e49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe49b0ULL || rel >= 0xe49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e49c0 size=16 callers=0 calls=0
*/
void sub_e49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe49c0ULL || rel >= 0xe49d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e49d0 size=48 callers=0 calls=0
*/
void sub_e49d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe49d0ULL || rel >= 0xe4a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4a00 size=32 callers=0 calls=0
*/
void sub_e4a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4a00ULL || rel >= 0xe4a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4a20 size=64 callers=0 calls=0
*/
void sub_e4a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4a20ULL || rel >= 0xe4a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4a60 size=16 callers=0 calls=0
*/
void sub_e4a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4a60ULL || rel >= 0xe4a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4a70 size=48 callers=0 calls=0
*/
void sub_e4a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4a70ULL || rel >= 0xe4aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4aa0 size=80 callers=0 calls=0
*/
void sub_e4aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4aa0ULL || rel >= 0xe4af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4af0 size=160 callers=0 calls=0
*/
void sub_e4af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4af0ULL || rel >= 0xe4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4b90 size=160 callers=0 calls=0
*/
void sub_e4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4b90ULL || rel >= 0xe4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4c30 size=64 callers=0 calls=0
*/
void sub_e4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c30ULL || rel >= 0xe4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4c70 size=48 callers=0 calls=0
*/
void sub_e4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c70ULL || rel >= 0xe4ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4ca0 size=16 callers=0 calls=0
*/
void sub_e4ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4ca0ULL || rel >= 0xe4cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4cb0 size=64 callers=0 calls=0
*/
void sub_e4cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4cb0ULL || rel >= 0xe4cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4cf0 size=96 callers=0 calls=0
*/
void sub_e4cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4cf0ULL || rel >= 0xe4d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4d50 size=80 callers=0 calls=0
*/
void sub_e4d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4d50ULL || rel >= 0xe4da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4da0 size=64 callers=0 calls=0
*/
void sub_e4da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4da0ULL || rel >= 0xe4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4de0 size=96 callers=0 calls=0
*/
void sub_e4de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4de0ULL || rel >= 0xe4e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4e40 size=176 callers=0 calls=0
*/
void sub_e4e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4e40ULL || rel >= 0xe4ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4ef0 size=192 callers=0 calls=0
*/
void sub_e4ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4ef0ULL || rel >= 0xe4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4fb0 size=64 callers=0 calls=0
*/
void sub_e4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4fb0ULL || rel >= 0xe4ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4ff0 size=64 callers=0 calls=0
*/
void sub_e4ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4ff0ULL || rel >= 0xe5030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5030 size=48 callers=0 calls=0
*/
void sub_e5030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5030ULL || rel >= 0xe5060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5060 size=16 callers=0 calls=0
*/
void sub_e5060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5060ULL || rel >= 0xe5070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5070 size=64 callers=0 calls=0
*/
void sub_e5070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5070ULL || rel >= 0xe50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e50b0 size=96 callers=0 calls=0
*/
void sub_e50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe50b0ULL || rel >= 0xe5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5110 size=80 callers=0 calls=0
*/
void sub_e5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5110ULL || rel >= 0xe5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5160 size=64 callers=0 calls=0
*/
void sub_e5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5160ULL || rel >= 0xe51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e51a0 size=96 callers=0 calls=0
*/
void sub_e51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe51a0ULL || rel >= 0xe5200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5200 size=176 callers=0 calls=0
*/
void sub_e5200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5200ULL || rel >= 0xe52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e52b0 size=192 callers=0 calls=0
*/
void sub_e52b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe52b0ULL || rel >= 0xe5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5370 size=64 callers=0 calls=0
*/
void sub_e5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5370ULL || rel >= 0xe53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e53b0 size=64 callers=0 calls=0
*/
void sub_e53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe53b0ULL || rel >= 0xe53f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e53f0 size=48 callers=0 calls=0
*/
void sub_e53f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe53f0ULL || rel >= 0xe5420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5420 size=16 callers=0 calls=0
*/
void sub_e5420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5420ULL || rel >= 0xe5430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5430 size=64 callers=0 calls=0
*/
void sub_e5430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5430ULL || rel >= 0xe5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5470 size=96 callers=0 calls=0
*/
void sub_e5470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5470ULL || rel >= 0xe54d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e54d0 size=80 callers=0 calls=0
*/
void sub_e54d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe54d0ULL || rel >= 0xe5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5520 size=64 callers=0 calls=0
*/
void sub_e5520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5520ULL || rel >= 0xe5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5560 size=96 callers=0 calls=0
*/
void sub_e5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5560ULL || rel >= 0xe55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e55c0 size=176 callers=0 calls=0
*/
void sub_e55c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe55c0ULL || rel >= 0xe5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5670 size=192 callers=0 calls=0
*/
void sub_e5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5670ULL || rel >= 0xe5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5730 size=64 callers=0 calls=0
*/
void sub_e5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5730ULL || rel >= 0xe5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5770 size=16 callers=0 calls=0
*/
void sub_e5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5770ULL || rel >= 0xe5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5780 size=16 callers=0 calls=0
*/
void sub_e5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5780ULL || rel >= 0xe5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5790 size=48 callers=0 calls=0
*/
void sub_e5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5790ULL || rel >= 0xe57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e57c0 size=32 callers=0 calls=0
*/
void sub_e57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57c0ULL || rel >= 0xe57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e57e0 size=64 callers=0 calls=0
*/
void sub_e57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57e0ULL || rel >= 0xe5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5820 size=16 callers=0 calls=0
*/
void sub_e5820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5820ULL || rel >= 0xe5830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5830 size=48 callers=0 calls=0
*/
void sub_e5830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5830ULL || rel >= 0xe5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5860 size=80 callers=0 calls=0
*/
void sub_e5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5860ULL || rel >= 0xe58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e58b0 size=160 callers=0 calls=0
*/
void sub_e58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58b0ULL || rel >= 0xe5950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5950 size=160 callers=0 calls=0
*/
void sub_e5950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5950ULL || rel >= 0xe59f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e59f0 size=16 callers=0 calls=0
*/
void sub_e59f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe59f0ULL || rel >= 0xe5a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5a00 size=16 callers=0 calls=0
*/
void sub_e5a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5a00ULL || rel >= 0xe5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5a10 size=48 callers=0 calls=0
*/
void sub_e5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5a10ULL || rel >= 0xe5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5a40 size=32 callers=0 calls=0
*/
void sub_e5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5a40ULL || rel >= 0xe5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5a60 size=64 callers=0 calls=0
*/
void sub_e5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5a60ULL || rel >= 0xe5aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5aa0 size=16 callers=0 calls=0
*/
void sub_e5aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5aa0ULL || rel >= 0xe5ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5ab0 size=48 callers=0 calls=0
*/
void sub_e5ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5ab0ULL || rel >= 0xe5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5ae0 size=80 callers=0 calls=0
*/
void sub_e5ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5ae0ULL || rel >= 0xe5b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5b30 size=160 callers=0 calls=0
*/
void sub_e5b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5b30ULL || rel >= 0xe5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5bd0 size=160 callers=0 calls=0
*/
void sub_e5bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5bd0ULL || rel >= 0xe5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5c70 size=48 callers=0 calls=0
*/
void sub_e5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5c70ULL || rel >= 0xe5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5ca0 size=64 callers=0 calls=0
*/
void sub_e5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5ca0ULL || rel >= 0xe5ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5ce0 size=80 callers=0 calls=0
*/
void sub_e5ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5ce0ULL || rel >= 0xe5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5d30 size=64 callers=0 calls=0
*/
void sub_e5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5d30ULL || rel >= 0xe5d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5d70 size=96 callers=0 calls=0
*/
void sub_e5d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5d70ULL || rel >= 0xe5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5dd0 size=176 callers=0 calls=0
*/
void sub_e5dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5dd0ULL || rel >= 0xe5e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5e80 size=192 callers=0 calls=0
*/
void sub_e5e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e80ULL || rel >= 0xe5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5f40 size=64 callers=0 calls=1
   calls: sub_e2ce0
*/
void sub_e5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5f40ULL || rel >= 0xe5f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5f80 size=592 callers=1 calls=0
*/
void sub_e5f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5f80ULL || rel >= 0xe61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e61d0 size=592 callers=1 calls=0
*/
void sub_e61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61d0ULL || rel >= 0xe6420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6420 size=592 callers=1 calls=0
*/
void sub_e6420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6420ULL || rel >= 0xe6670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6670 size=400 callers=1 calls=1
   calls: sub_e6800
*/
void sub_e6670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6670ULL || rel >= 0xe6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6800 size=448 callers=1 calls=0
*/
void sub_e6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6800ULL || rel >= 0xe69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e69c0 size=80 callers=0 calls=0
*/
void sub_e69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69c0ULL || rel >= 0xe6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6a10 size=96 callers=0 calls=0
*/
void sub_e6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a10ULL || rel >= 0xe6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6a70 size=112 callers=0 calls=0
*/
void sub_e6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a70ULL || rel >= 0xe6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6ae0 size=128 callers=0 calls=0
*/
void sub_e6ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ae0ULL || rel >= 0xe6b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6b60 size=80 callers=0 calls=0
*/
void sub_e6b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b60ULL || rel >= 0xe6bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6bb0 size=80 callers=0 calls=0
*/
void sub_e6bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6bb0ULL || rel >= 0xe6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6c00 size=80 callers=0 calls=0
*/
void sub_e6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c00ULL || rel >= 0xe6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6c50 size=192 callers=0 calls=0
*/
void sub_e6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c50ULL || rel >= 0xe6d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6d10 size=192 callers=0 calls=0
*/
void sub_e6d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d10ULL || rel >= 0xe6dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6dd0 size=80 callers=0 calls=0
*/
void sub_e6dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6dd0ULL || rel >= 0xe6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6e20 size=80 callers=0 calls=0
*/
void sub_e6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e20ULL || rel >= 0xe6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6e70 size=96 callers=0 calls=0
*/
void sub_e6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e70ULL || rel >= 0xe6ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6ed0 size=112 callers=0 calls=0
*/
void sub_e6ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ed0ULL || rel >= 0xe6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6f40 size=128 callers=0 calls=0
*/
void sub_e6f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f40ULL || rel >= 0xe6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6fc0 size=80 callers=0 calls=0
*/
void sub_e6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6fc0ULL || rel >= 0xe7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7010 size=80 callers=0 calls=0
*/
void sub_e7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7010ULL || rel >= 0xe7060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7060 size=80 callers=0 calls=0
*/
void sub_e7060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7060ULL || rel >= 0xe70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e70b0 size=192 callers=0 calls=0
*/
void sub_e70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70b0ULL || rel >= 0xe7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7170 size=192 callers=0 calls=0
*/
void sub_e7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7170ULL || rel >= 0xe7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7230 size=80 callers=0 calls=0
*/
void sub_e7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7230ULL || rel >= 0xe7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7280 size=448 callers=1 calls=0
*/
void sub_e7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7280ULL || rel >= 0xe7440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7440 size=288 callers=1 calls=1
   calls: sub_e7630
*/
void sub_e7440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7440ULL || rel >= 0xe7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7560 size=208 callers=3 calls=1
   calls: sub_e7440
*/
void sub_e7560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7560ULL || rel >= 0xe7630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7630 size=496 callers=1 calls=0
*/
void sub_e7630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7630ULL || rel >= 0xe7820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7820 size=64 callers=5 calls=0
*/
void sub_e7820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7820ULL || rel >= 0xe7860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7860 size=336 callers=15 calls=0
*/
void sub_e7860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7860ULL || rel >= 0xe79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e79b0 size=128 callers=2 calls=0
*/
void sub_e79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe79b0ULL || rel >= 0xe7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7a30 size=160 callers=146 calls=0
*/
void sub_e7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7a30ULL || rel >= 0xe7ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7ad0 size=48 callers=18 calls=0
*/
void sub_e7ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ad0ULL || rel >= 0xe7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7b00 size=1888 callers=2 calls=3
   calls: sub_9bed0, sub_a7090, sub_a7850
*/
void sub_e7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b00ULL || rel >= 0xe8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8260 size=880 callers=3 calls=9
   calls: sub_62a70, sub_68960, sub_9bed0, sub_9ca30, sub_a7800, sub_a7850, sub_a8080, sub_a8370, sub_a91b0
*/
void sub_e8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8260ULL || rel >= 0xe85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e85d0 size=928 callers=2 calls=11
   calls: sub_35320, sub_3af50, sub_624d0, sub_9bed0, sub_a8080, sub_a8170, sub_a9270, sub_b8aa0, sub_e8970, sub_e8c30, sub_e8fb0
*/
void sub_e85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85d0ULL || rel >= 0xe8970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8970 size=704 callers=2 calls=5
   calls: sub_3b000, sub_68a30, sub_9c950, sub_9ca30, sub_a70d0
*/
void sub_e8970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8970ULL || rel >= 0xe8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8c30 size=896 callers=7 calls=2
   calls: sub_35320, sub_9b3d0
*/
void sub_e8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8c30ULL || rel >= 0xe8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8fb0 size=752 callers=2 calls=4
   calls: sub_9b3d0, sub_9b3e0, sub_a70d0, sub_e7860
*/
void sub_e8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8fb0ULL || rel >= 0xe92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e92a0 size=3328 callers=1 calls=23
   calls: sub_35320, sub_3af50, sub_624d0, sub_64060, sub_66820, sub_68ce0, sub_68db0, sub_86e00, sub_9bed0, sub_9c950, sub_a70d0, sub_a8080
   ... +11 more
*/
void sub_e92a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92a0ULL || rel >= 0xe9fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9fa0 size=528 callers=4 calls=0
*/
void sub_e9fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fa0ULL || rel >= 0xea1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea1b0 size=400 callers=1 calls=2
   calls: sub_9bed0, sub_a7850
*/
void sub_ea1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1b0ULL || rel >= 0xea340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea340 size=704 callers=1 calls=3
   calls: sub_9ba20, sub_9c270, sub_e7860
*/
void sub_ea340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea340ULL || rel >= 0xea600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea600 size=64 callers=3 calls=1
   calls: sub_ea640
*/
void sub_ea600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea600ULL || rel >= 0xea640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea640 size=496 callers=2 calls=3
   calls: sub_35320, sub_62a70, sub_a5f80
*/
void sub_ea640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea640ULL || rel >= 0xea830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea830 size=1008 callers=5 calls=5
   calls: sub_62050, sub_9b3d0, sub_9ca30, sub_a7800, sub_aa830
*/
void sub_ea830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea830ULL || rel >= 0xeac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eac20 size=1280 callers=3 calls=1
   calls: sub_e7860
*/
void sub_eac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac20ULL || rel >= 0xeb120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb120 size=176 callers=0 calls=2
   calls: sub_62a70, sub_eac20
*/
void sub_eb120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb120ULL || rel >= 0xeb1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb1d0 size=256 callers=1 calls=2
   calls: sub_624d0, sub_eac20
*/
void sub_eb1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb1d0ULL || rel >= 0xeb2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb2d0 size=240 callers=1 calls=3
   calls: sub_9a1e0, sub_a7850, sub_eb1d0
*/
void sub_eb2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2d0ULL || rel >= 0xeb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb3c0 size=64 callers=4 calls=1
   calls: sub_eb2d0
*/
void sub_eb3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb3c0ULL || rel >= 0xeb400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb400 size=1120 callers=1 calls=12
   calls: sub_61f10, sub_62050, sub_624d0, sub_62a70, sub_9b3d0, sub_9b3e0, sub_9bed0, sub_9ca30, sub_a7800, sub_a7850, sub_aa830, sub_e7860
*/
void sub_eb400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb400ULL || rel >= 0xeb860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb860 size=624 callers=1 calls=5
   calls: sub_3af50, sub_62050, sub_9bed0, sub_a7090, sub_a7370
*/
void sub_eb860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb860ULL || rel >= 0xebad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebad0 size=96 callers=3 calls=0
*/
void sub_ebad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebad0ULL || rel >= 0xebb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebb30 size=368 callers=1 calls=7
   calls: sub_9b3e0, sub_9bed0, sub_a7090, sub_a70d0, sub_a7800, sub_a7850, sub_a7a30
*/
void sub_ebb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb30ULL || rel >= 0xebca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebca0 size=1760 callers=1 calls=12
   calls: sub_3af80, sub_9b3e0, sub_9bed0, sub_9ca30, sub_a7090, sub_a70d0, sub_a7370, sub_a7890, sub_a7a30, sub_a8030, sub_a8110, sub_a81c0
*/
void sub_ebca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebca0ULL || rel >= 0xec380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ec380 size=208 callers=0 calls=4
   calls: sub_9bed0, sub_9ca30, sub_a7370, sub_a73d0
*/
void sub_ec380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec380ULL || rel >= 0xec450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ec450 size=496 callers=0 calls=5
   calls: sub_3af80, sub_9bed0, sub_9ca30, sub_a7370, sub_a73d0
*/
void sub_ec450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec450ULL || rel >= 0xec640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ec640 size=800 callers=2 calls=9
   calls: sub_66820, sub_9b3d0, sub_9b3e0, sub_9bed0, sub_a7800, sub_a7890, sub_a7b70, sub_a8080, sub_a80d0
*/
void sub_ec640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec640ULL || rel >= 0xec960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ec960 size=784 callers=1 calls=10
   calls: sub_9b3e0, sub_9bed0, sub_a70d0, sub_a7110, sub_a7800, sub_a7890, sub_a7a30, sub_a8030, sub_a92d0, sub_ecc70
*/
void sub_ec960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec960ULL || rel >= 0xecc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ecc70 size=688 callers=2 calls=8
   calls: sub_a7110, sub_a7310, sub_a73d0, sub_a7800, sub_a7890, sub_a7a30, sub_a8030, sub_a80d0
*/
void sub_ecc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecc70ULL || rel >= 0xecf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ecf20 size=848 callers=1 calls=10
   calls: sub_9b3e0, sub_9bed0, sub_a70d0, sub_a7110, sub_a7800, sub_a7890, sub_a7b70, sub_a8030, sub_a92d0, sub_ecc70
*/
void sub_ecf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecf20ULL || rel >= 0xed270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed270 size=432 callers=18 calls=4
   calls: sub_68590, sub_68960, sub_9ca30, sub_a70d0
*/
void sub_ed270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed270ULL || rel >= 0xed420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed420 size=464 callers=1 calls=6
   calls: sub_681f0, sub_68490, sub_687b0, sub_9bed0, sub_a92e0, sub_ed270
*/
void sub_ed420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed420ULL || rel >= 0xed5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed5f0 size=304 callers=2 calls=6
   calls: sub_681f0, sub_68490, sub_687b0, sub_9bed0, sub_a8110, sub_ed270
*/
void sub_ed5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed5f0ULL || rel >= 0xed720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed720 size=48 callers=1 calls=0
*/
void sub_ed720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed720ULL || rel >= 0xed750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed750 size=672 callers=2 calls=4
   calls: sub_621f0, sub_9a050, sub_a70d0, sub_a91b0
*/
void sub_ed750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed750ULL || rel >= 0xed9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed9f0 size=736 callers=2 calls=14
   calls: sub_681f0, sub_68490, sub_68590, sub_687b0, sub_687f0, sub_688c0, sub_68960, sub_9a050, sub_9b3e0, sub_9bed0, sub_a70d0, sub_a8030
   ... +2 more
*/
void sub_ed9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9f0ULL || rel >= 0xedcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000edcd0 size=368 callers=1 calls=5
   calls: sub_681f0, sub_684d0, sub_68590, sub_9bed0, sub_a70d0
*/
void sub_edcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedcd0ULL || rel >= 0xede40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ede40 size=592 callers=2 calls=7
   calls: sub_624d0, sub_681f0, sub_68490, sub_687b0, sub_9bed0, sub_ed270, sub_ed750
*/
void sub_ede40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede40ULL || rel >= 0xee090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ee090 size=1488 callers=1 calls=9
   calls: sub_620d0, sub_681f0, sub_68490, sub_687b0, sub_9a050, sub_9bed0, sub_a9060, sub_a9140, sub_ed270
*/
void sub_ee090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee090ULL || rel >= 0xee660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ee660 size=672 callers=1 calls=7
   calls: sub_68490, sub_687b0, sub_9a050, sub_9b3e0, sub_9bed0, sub_a92d0, sub_ed270
*/
void sub_ee660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee660ULL || rel >= 0xee900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ee900 size=384 callers=1 calls=6
   calls: sub_681f0, sub_68490, sub_687b0, sub_9bed0, sub_a7850, sub_ed270
*/
void sub_ee900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee900ULL || rel >= 0xeea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eea80 size=272 callers=1 calls=6
   calls: sub_68490, sub_687b0, sub_9b920, sub_9bed0, sub_a70d0, sub_ed270
*/
void sub_eea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeea80ULL || rel >= 0xeeb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eeb90 size=704 callers=1 calls=9
   calls: sub_621f0, sub_681f0, sub_9a050, sub_9b3e0, sub_9bed0, sub_a70d0, sub_a8270, sub_a91b0, sub_ed270
*/
void sub_eeb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeb90ULL || rel >= 0xeee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eee50 size=880 callers=1 calls=7
   calls: sub_681f0, sub_9b3e0, sub_9bed0, sub_a7890, sub_a8030, sub_a8270, sub_ed270
*/
void sub_eee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee50ULL || rel >= 0xef1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef1c0 size=432 callers=1 calls=7
   calls: sub_681f0, sub_68490, sub_687b0, sub_9a050, sub_9bed0, sub_a92d0, sub_ed270
*/
void sub_ef1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1c0ULL || rel >= 0xef370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef370 size=320 callers=1 calls=5
   calls: sub_681f0, sub_9bed0, sub_a7110, sub_a8030, sub_a8170
*/
void sub_ef370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef370ULL || rel >= 0xef4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef4b0 size=768 callers=1 calls=9
   calls: sub_681f0, sub_68490, sub_687b0, sub_9b3e0, sub_9bed0, sub_a7b70, sub_a8030, sub_a8110, sub_ed270
*/
void sub_ef4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4b0ULL || rel >= 0xef7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef7b0 size=1056 callers=1 calls=14
   calls: sub_681f0, sub_68490, sub_687b0, sub_9a050, sub_9b3e0, sub_9b500, sub_9bed0, sub_a7110, sub_a7850, sub_a7890, sub_a7b70, sub_a8030
   ... +2 more
*/
void sub_ef7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef7b0ULL || rel >= 0xefbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000efbd0 size=576 callers=1 calls=11
   calls: sub_63e10, sub_681f0, sub_68490, sub_687b0, sub_9a050, sub_9bed0, sub_a70d0, sub_a7800, sub_a7850, sub_a8170, sub_ed270
*/
void sub_efbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefbd0ULL || rel >= 0xefe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000efe10 size=1040 callers=2 calls=7
   calls: sub_620d0, sub_9a050, sub_9b3d0, sub_a7110, sub_a8030, sub_a81c0, sub_a91b0
*/
void sub_efe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe10ULL || rel >= 0xf0220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0220 size=1008 callers=2 calls=4
   calls: sub_9a050, sub_9b3e0, sub_a7800, sub_a91b0
*/
void sub_f0220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0220ULL || rel >= 0xf0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0610 size=1600 callers=4 calls=11
   calls: sub_620d0, sub_684d0, sub_68960, sub_9a050, sub_9b3d0, sub_a7110, sub_a7800, sub_a7890, sub_a9140, sub_a91b0, sub_a9270
*/
void sub_f0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0610ULL || rel >= 0xf0c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0c50 size=656 callers=1 calls=5
   calls: sub_9a050, sub_9b3d0, sub_9b3e0, sub_a7110, sub_a91b0
*/
void sub_f0c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c50ULL || rel >= 0xf0ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0ee0 size=1184 callers=1 calls=15
   calls: sub_620d0, sub_681f0, sub_68490, sub_687b0, sub_68960, sub_9a050, sub_a70d0, sub_a7800, sub_a8110, sub_a81c0, sub_ed270, sub_efe10
   ... +3 more
*/
void sub_f0ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ee0ULL || rel >= 0xf1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1380 size=192 callers=1 calls=4
   calls: sub_68960, sub_9a050, sub_9bed0, sub_f0ee0
*/
void sub_f1380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1380ULL || rel >= 0xf1440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1440 size=576 callers=1 calls=9
   calls: sub_620d0, sub_62a70, sub_68490, sub_687b0, sub_9bed0, sub_e8260, sub_ed270, sub_efe10, sub_f0610
*/
void sub_f1440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1440ULL || rel >= 0xf1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1680 size=704 callers=1 calls=9
   calls: sub_62a70, sub_68490, sub_687b0, sub_9a050, sub_9b3d0, sub_9bed0, sub_a7800, sub_a9270, sub_ed270
*/
void sub_f1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1680ULL || rel >= 0xf1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1940 size=400 callers=1 calls=6
   calls: sub_68960, sub_9bed0, sub_a7800, sub_a7850, sub_a8030, sub_a8110
*/
void sub_f1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1940ULL || rel >= 0xf1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1ad0 size=208 callers=1 calls=3
   calls: sub_68960, sub_9ca30, sub_a70d0
*/
void sub_f1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1ad0ULL || rel >= 0xf1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1ba0 size=160 callers=1 calls=3
   calls: sub_9bed0, sub_a7090, sub_ed270
*/
void sub_f1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1ba0ULL || rel >= 0xf1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1c40 size=3312 callers=1 calls=10
   calls: sub_3af50, sub_63560, sub_66a80, sub_66b60, sub_9b920, sub_a7110, sub_a7890, sub_a7a30, sub_a8030, sub_a92d0
*/
void sub_f1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1c40ULL || rel >= 0xf2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2930 size=1200 callers=1 calls=10
   calls: sub_9a050, sub_9b3e0, sub_9bed0, sub_a7090, sub_a70d0, sub_a7800, sub_a92d0, sub_a95d0, sub_a9a30, sub_f1c40
*/
void sub_f2930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2930ULL || rel >= 0xf2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2de0 size=32 callers=0 calls=0
*/
void sub_f2de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2de0ULL || rel >= 0xf2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2e00 size=2304 callers=3 calls=8
   calls: sub_69490, sub_90fc0, sub_9b3d0, sub_9b500, sub_9d2f0, sub_b7e20, sub_b89a0, sub_f3700
*/
void sub_f2e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2e00ULL || rel >= 0xf3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3700 size=576 callers=1 calls=1
   calls: sub_f97f0
*/
void sub_f3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3700ULL || rel >= 0xf3940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3940 size=592 callers=1 calls=3
   calls: sub_68090, sub_68ce0, sub_f2e00
*/
void sub_f3940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3940ULL || rel >= 0xf3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3b90 size=720 callers=4 calls=4
   calls: sub_86be0, sub_a9a30, sub_a9f40, sub_aa0f0
*/
void sub_f3b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b90ULL || rel >= 0xf3e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3e60 size=4256 callers=1 calls=19
   calls: sub_35320, sub_3b010, sub_61e80, sub_61f10, sub_61f80, sub_62050, sub_68090, sub_99e90, sub_9a050, sub_9b3e0, sub_9bed0, sub_a7050
   ... +7 more
*/
void sub_f3e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e60ULL || rel >= 0xf4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4f00 size=304 callers=1 calls=0
*/
void sub_f4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f00ULL || rel >= 0xf5030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5030 size=464 callers=5 calls=1
   calls: sub_621f0
*/
void sub_f5030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5030ULL || rel >= 0xf5200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5200 size=640 callers=4 calls=1
   calls: sub_66e80
*/
void sub_f5200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5200ULL || rel >= 0xf5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5480 size=320 callers=2 calls=1
   calls: sub_69540
*/
void sub_f5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5480ULL || rel >= 0xf55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f55c0 size=480 callers=2 calls=0
*/
void sub_f55c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf55c0ULL || rel >= 0xf57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f57a0 size=704 callers=1 calls=2
   calls: sub_f5a60, sub_f5be0
*/
void sub_f57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf57a0ULL || rel >= 0xf5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5a60 size=384 callers=1 calls=0
*/
void sub_f5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5a60ULL || rel >= 0xf5be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5be0 size=528 callers=1 calls=0
*/
void sub_f5be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5be0ULL || rel >= 0xf5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5df0 size=368 callers=1 calls=3
   calls: sub_86be0, sub_a9a30, sub_aa640
*/
void sub_f5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5df0ULL || rel >= 0xf5f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5f60 size=624 callers=1 calls=6
   calls: sub_9bed0, sub_a70d0, sub_a8320, sub_a9a30, sub_f5030, sub_f5200
*/
void sub_f5f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f60ULL || rel >= 0xf61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f61d0 size=496 callers=2 calls=3
   calls: sub_88b40, sub_f5030, sub_f5f60
*/
void sub_f61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf61d0ULL || rel >= 0xf63c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f63c0 size=8048 callers=1 calls=34
   calls: sub_35320, sub_3af50, sub_3fa0, sub_61f80, sub_62050, sub_64060, sub_66db0, sub_68e10, sub_693f0, sub_7db60, sub_86670, sub_86be0
   ... +22 more
*/
void sub_f63c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63c0ULL || rel >= 0xf8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f8330 size=608 callers=1 calls=1
   calls: sub_9c300
*/
void sub_f8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8330ULL || rel >= 0xf8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f8590 size=2480 callers=1 calls=26
   calls: sub_64060, sub_67890, sub_68060, sub_68ce0, sub_68e10, sub_693f0, sub_7db60, sub_86e00, sub_88b40, sub_8e6e0, sub_98080, sub_9bed0
   ... +14 more
*/
void sub_f8590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8590ULL || rel >= 0xf8f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f8f40 size=176 callers=1 calls=6
   calls: sub_3550, sub_66820, sub_b8aa0, sub_b8cd0, sub_f63c0, sub_f8ff0
   ref: LoopUnrolling
*/
void LoopUnrolling(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8f40ULL || rel >= 0xf8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f8ff0 size=688 callers=2 calls=4
   calls: sub_38b0, sub_b7e20, sub_b89a0, sub_c0a40
*/
void sub_f8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ff0ULL || rel >= 0xf92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f92a0 size=144 callers=1 calls=5
   calls: sub_3550, sub_b8aa0, sub_b8cd0, sub_f8590, sub_f8ff0
   ref: Pipelining
*/
void Pipelining(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf92a0ULL || rel >= 0xf9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9330 size=256 callers=2 calls=1
   calls: sub_f9330
*/
void sub_f9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9330ULL || rel >= 0xf9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9430 size=64 callers=0 calls=0
*/
void sub_f9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9430ULL || rel >= 0xf9470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9470 size=48 callers=0 calls=0
*/
void sub_f9470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9470ULL || rel >= 0xf94a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f94a0 size=16 callers=0 calls=0
*/
void sub_f94a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf94a0ULL || rel >= 0xf94b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f94b0 size=64 callers=0 calls=0
*/
void sub_f94b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf94b0ULL || rel >= 0xf94f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f94f0 size=96 callers=0 calls=0
*/
void sub_f94f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf94f0ULL || rel >= 0xf9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9550 size=80 callers=0 calls=0
*/
void sub_f9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9550ULL || rel >= 0xf95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f95a0 size=64 callers=0 calls=0
*/
void sub_f95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95a0ULL || rel >= 0xf95e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f95e0 size=96 callers=0 calls=0
*/
void sub_f95e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95e0ULL || rel >= 0xf9640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9640 size=176 callers=0 calls=0
*/
void sub_f9640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9640ULL || rel >= 0xf96f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f96f0 size=192 callers=0 calls=0
*/
void sub_f96f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96f0ULL || rel >= 0xf97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f97b0 size=64 callers=0 calls=0
*/
void sub_f97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf97b0ULL || rel >= 0xf97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f97f0 size=592 callers=1 calls=0
*/
void sub_f97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf97f0ULL || rel >= 0xf9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9a40 size=368 callers=1 calls=0
*/
void sub_f9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9a40ULL || rel >= 0xf9bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9bb0 size=624 callers=1 calls=0
*/
void sub_f9bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9bb0ULL || rel >= 0xf9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9e20 size=496 callers=2 calls=0
*/
void sub_f9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e20ULL || rel >= 0xfa010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa010 size=208 callers=4 calls=0
*/
void sub_fa010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa010ULL || rel >= 0xfa0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa0e0 size=368 callers=3 calls=0
*/
void sub_fa0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0e0ULL || rel >= 0xfa250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa250 size=416 callers=3 calls=0
*/
void sub_fa250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa250ULL || rel >= 0xfa3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa3f0 size=688 callers=1 calls=0
*/
void sub_fa3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3f0ULL || rel >= 0xfa6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa6a0 size=720 callers=4 calls=0
*/
void sub_fa6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa6a0ULL || rel >= 0xfa970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa970 size=512 callers=5 calls=0
*/
void sub_fa970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa970ULL || rel >= 0xfab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fab70 size=416 callers=4 calls=0
*/
void sub_fab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfab70ULL || rel >= 0xfad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fad10 size=64 callers=0 calls=1
   calls: sub_38d0
*/
void sub_fad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfad10ULL || rel >= 0xfad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fad50 size=512 callers=1 calls=1
   calls: sub_38b0
*/
void sub_fad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfad50ULL || rel >= 0xfaf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000faf50 size=1280 callers=1 calls=0
*/
void sub_faf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaf50ULL || rel >= 0xfb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fb450 size=512 callers=1 calls=1
   calls: sub_9bed0
*/
void sub_fb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb450ULL || rel >= 0xfb650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fb650 size=16 callers=0 calls=0
*/
void sub_fb650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb650ULL || rel >= 0xfb660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fb660 size=6528 callers=0 calls=12
   calls: sub_66d40, sub_9b3d0, sub_f9a40, sub_f9bb0, sub_f9e20, sub_fa010, sub_fa0e0, sub_fa250, sub_fa3f0, sub_fa6a0, sub_fa970, sub_fab70
*/
void sub_fb660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb660ULL || rel >= 0xfcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcfe0 size=224 callers=0 calls=0
*/
void sub_fcfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfe0ULL || rel >= 0xfd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd0c0 size=832 callers=0 calls=2
   calls: sub_fa010, sub_fd400
*/
void sub_fd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0c0ULL || rel >= 0xfd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd400 size=496 callers=2 calls=0
*/
void sub_fd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd400ULL || rel >= 0xfd5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd5f0 size=336 callers=0 calls=0
*/
void sub_fd5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd5f0ULL || rel >= 0xfd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd740 size=16 callers=0 calls=0
*/
void sub_fd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd740ULL || rel >= 0xfd750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd750 size=736 callers=0 calls=0
*/
void sub_fd750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd750ULL || rel >= 0xfda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fda30 size=192 callers=0 calls=0
*/
void sub_fda30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfda30ULL || rel >= 0xfdaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdaf0 size=32 callers=0 calls=0
*/
void sub_fdaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdaf0ULL || rel >= 0xfdb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdb10 size=112 callers=0 calls=0
*/
void sub_fdb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdb10ULL || rel >= 0xfdb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdb80 size=576 callers=0 calls=3
   calls: sub_38b0, sub_66d40, sub_9b3d0
*/
void sub_fdb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdb80ULL || rel >= 0xfddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fddc0 size=160 callers=0 calls=0
*/
void sub_fddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfddc0ULL || rel >= 0xfde60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fde60 size=288 callers=0 calls=0
*/
void sub_fde60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde60ULL || rel >= 0xfdf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdf80 size=304 callers=0 calls=0
*/
void sub_fdf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf80ULL || rel >= 0xfe0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe0b0 size=416 callers=0 calls=1
   calls: sub_a92d0
*/
void sub_fe0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0b0ULL || rel >= 0xfe250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe250 size=80 callers=0 calls=0
*/
void sub_fe250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe250ULL || rel >= 0xfe2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe2a0 size=1376 callers=0 calls=0
*/
void sub_fe2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2a0ULL || rel >= 0xfe800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe800 size=160 callers=0 calls=1
   calls: sub_9ca30
*/
void sub_fe800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe800ULL || rel >= 0xfe8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe8a0 size=32 callers=0 calls=0
*/
void sub_fe8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8a0ULL || rel >= 0xfe8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe8c0 size=368 callers=1 calls=0
*/
void sub_fe8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8c0ULL || rel >= 0xfea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fea30 size=1424 callers=0 calls=3
   calls: sub_69ff0, sub_9c950, sub_fe8c0
*/
void sub_fea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea30ULL || rel >= 0xfefc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fefc0 size=240 callers=0 calls=0
*/
void sub_fefc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefc0ULL || rel >= 0xff0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff0b0 size=368 callers=0 calls=1
   calls: sub_a92d0
*/
void sub_ff0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0b0ULL || rel >= 0xff220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff220 size=928 callers=1 calls=2
   calls: sub_38b0, sub_fad50
*/
void sub_ff220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff220ULL || rel >= 0xff5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff5c0 size=1152 callers=2 calls=7
   calls: sub_64060, sub_66820, sub_88b40, sub_faf50, sub_fb450, sub_ff220, sub_ffa40
*/
void sub_ff5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5c0ULL || rel >= 0xffa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ffa40 size=3456 callers=8 calls=6
   calls: sub_101e30, sub_62240, sub_69350, sub_9b3d0, sub_9d430, sub_9d450
*/
void sub_ffa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa40ULL || rel >= 0x1007c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001007c0 size=1088 callers=1 calls=4
   calls: sub_5be70, sub_67330, sub_673d0, sub_67470
*/
void sub_1007c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1007c0ULL || rel >= 0x100c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00100c00 size=496 callers=1 calls=2
   calls: sub_67a70, sub_67b80
*/
void sub_100c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x100c00ULL || rel >= 0x100df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00100df0 size=1408 callers=5 calls=10
   calls: sub_66f90, sub_67330, sub_673d0, sub_67b40, sub_9a740, sub_9bed0, sub_a86a0, sub_a8780, sub_a8960, sub_b8aa0
*/
void sub_100df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x100df0ULL || rel >= 0x101370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101370 size=448 callers=1 calls=1
   calls: sub_100df0
*/
void sub_101370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101370ULL || rel >= 0x101530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101530 size=1536 callers=1 calls=5
   calls: sub_1007c0, sub_100c00, sub_100df0, sub_101370, sub_67b80
*/
void sub_101530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101530ULL || rel >= 0x101b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101b30 size=336 callers=1 calls=5
   calls: sub_100df0, sub_101530, sub_64060, sub_66820, sub_ffa40
*/
void sub_101b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101b30ULL || rel >= 0x101c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101c80 size=48 callers=1 calls=1
   calls: sub_101b30
*/
void sub_101c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101c80ULL || rel >= 0x101cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101cb0 size=16 callers=0 calls=0
*/
void sub_101cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101cb0ULL || rel >= 0x101cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101cc0 size=16 callers=0 calls=0
*/
void sub_101cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101cc0ULL || rel >= 0x101cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101cd0 size=16 callers=0 calls=0
*/
void sub_101cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101cd0ULL || rel >= 0x101ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101ce0 size=16 callers=0 calls=0
*/
void sub_101ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101ce0ULL || rel >= 0x101cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101cf0 size=16 callers=0 calls=0
*/
void sub_101cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101cf0ULL || rel >= 0x101d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101d00 size=16 callers=0 calls=0
*/
void sub_101d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d00ULL || rel >= 0x101d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101d10 size=16 callers=0 calls=0
*/
void sub_101d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d10ULL || rel >= 0x101d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101d20 size=16 callers=0 calls=0
*/
void sub_101d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d20ULL || rel >= 0x101d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101d30 size=16 callers=0 calls=0
*/
void sub_101d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d30ULL || rel >= 0x101d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101d40 size=16 callers=0 calls=0
*/
void sub_101d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d40ULL || rel >= 0x101d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101d50 size=16 callers=0 calls=0
*/
void sub_101d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d50ULL || rel >= 0x101d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101d60 size=16 callers=0 calls=0
*/
void sub_101d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d60ULL || rel >= 0x101d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101d70 size=16 callers=0 calls=0
*/
void sub_101d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d70ULL || rel >= 0x101d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101d80 size=16 callers=0 calls=0
*/
void sub_101d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d80ULL || rel >= 0x101d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101d90 size=16 callers=0 calls=0
*/
void sub_101d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101d90ULL || rel >= 0x101da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101da0 size=32 callers=0 calls=0
*/
void sub_101da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101da0ULL || rel >= 0x101dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101dc0 size=32 callers=0 calls=0
*/
void sub_101dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101dc0ULL || rel >= 0x101de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101de0 size=48 callers=0 calls=0
*/
void sub_101de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101de0ULL || rel >= 0x101e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101e10 size=16 callers=0 calls=0
*/
void sub_101e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e10ULL || rel >= 0x101e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101e20 size=16 callers=0 calls=0
*/
void sub_101e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e20ULL || rel >= 0x101e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101e30 size=272 callers=27 calls=2
   calls: sub_66d40, sub_9b3d0
*/
void sub_101e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e30ULL || rel >= 0x101f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101f40 size=576 callers=2 calls=0
*/
void sub_101f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101f40ULL || rel >= 0x102180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102180 size=176 callers=2 calls=0
*/
void sub_102180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102180ULL || rel >= 0x102230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102230 size=112 callers=0 calls=0
   ref: <<BAD_TEXUNIT>>
   ref: texture[%d]
*/
void texture_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102230ULL || rel >= 0x1022a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001022a0 size=656 callers=1 calls=0
   ref: result.color
   ref: vertex.weight
   ref: result.color[%i]
   ref: fragment.color.primary
   ref: fragment.color.secondary
   ref: result.texcoord[%i]
   ref: fragment.texcoord[A0.x+%d]
   ref: vertex.fogcoord
*/
void REG_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1022a0ULL || rel >= 0x102530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102530 size=400 callers=2 calls=1
   calls: sub_171b0
   ref: .OBJECT
*/
void OBJECT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102530ULL || rel >= 0x1026c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001026c0 size=2048 callers=1 calls=9
   calls: OBJECT, sub_102ec0, sub_17190, sub_171b0, sub_1e30, sub_1e40, sub_1ff0, sub_3620, sub_3fa0
   ref: PARAM env[] = { program.env[0] };
   ref: program.local[%d..%d] };
   ref: program.local[%d..%d],
   ref: [%d..%d]
   ref: program.local[%d] };
   ref: PARAM env[] = { program.env[0..%d] };
   ref: <none>
   ref: PARAM c[%d] = { 
*/
void STATE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026c0ULL || rel >= 0x102ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102ec0 size=336 callers=2 calls=4
   calls: sub_102ec0, sub_1e30, sub_1e40, sub_401f0
*/
void sub_102ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ec0ULL || rel >= 0x103010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103010 size=48 callers=1 calls=0
*/
void sub_103010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103010ULL || rel >= 0x103040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103040 size=384 callers=3 calls=2
   calls: OBJECT, sub_171b0
   ref: STATE.
*/
void STATE_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103040ULL || rel >= 0x1031c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001031c0 size=16 callers=0 calls=0
*/
void sub_1031c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031c0ULL || rel >= 0x1031d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001031d0 size=304 callers=0 calls=4
   calls: STATE_2, sub_345c0, sub_34670, sub_35f0
*/
void sub_1031d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031d0ULL || rel >= 0x103300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103300 size=576 callers=0 calls=2
   calls: sub_171b0, sub_f4b0
   ref: STATE.MATRIX.
   ref: %.*s.ROW[%d]
*/
void s_ROW_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103300ULL || rel >= 0x103540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103540 size=352 callers=0 calls=4
   calls: STATE_2, sub_345c0, sub_34670, sub_fce0
*/
void sub_103540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103540ULL || rel >= 0x1036a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001036a0 size=240 callers=0 calls=3
   calls: STATE_2, sub_1e30, sub_34670
*/
void sub_1036a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036a0ULL || rel >= 0x103790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103790 size=96 callers=0 calls=2
   calls: sub_1037f0, sub_1a1e0
*/
void sub_103790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103790ULL || rel >= 0x1037f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001037f0 size=240 callers=2 calls=1
   calls: sub_1037f0
*/
void sub_1037f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037f0ULL || rel >= 0x1038e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001038e0 size=176 callers=2 calls=2
   calls: sub_1a560, sub_1a7f0
   ref: OPTION ATI_draw_buffers;
   ref: OPTION ARB_draw_buffers;
   ref: OPTION ARB_fragment_program_shadow;
   ref: OPTION ARB_precision_hint_fastest;
   ref: OPTION ARB_precision_hint_nicest;
*/
void OPTION_ATI_draw_buffers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1038e0ULL || rel >= 0x103990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103990 size=144 callers=3 calls=1
   calls: sub_1e40
*/
void sub_103990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103990ULL || rel >= 0x103a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103a20 size=336 callers=0 calls=4
   calls: sub_1e30, sub_1e40, sub_40170, sub_401f0
*/
void sub_103a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a20ULL || rel >= 0x103b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103b70 size=112 callers=0 calls=2
   calls: sub_1e30, sub_1e40
*/
void sub_103b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b70ULL || rel >= 0x103be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103be0 size=400 callers=12 calls=2
   calls: sub_2220, sub_42990
*/
void sub_103be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103be0ULL || rel >= 0x103d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103d70 size=144 callers=1 calls=0
*/
void sub_103d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d70ULL || rel >= 0x103e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103e00 size=3760 callers=0 calls=3
   calls: REG_d, secondaryposition, sub_3fa0
   ref: result.color
   ref: fragment.attrib[%d]
   ref: fragment.color
   ref: primitive.threadgemask
   ref: result.layer
   ref: .color
   ref: .texcoord[%d]
   ref: .pointsize
*/
void result(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103e00ULL || rel >= 0x104cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104cb0 size=752 callers=2 calls=1
   calls: sub_3fa0
   ref: pointsize
   ref: texcoord[5]
   ref: texcoord[9]
   ref: attrib[%d]
   ref: texcoord[7]
   ref: texcoord[0]
   ref: fogcoord
   ref: position
*/
void secondaryposition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104cb0ULL || rel >= 0x104fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104fa0 size=384 callers=0 calls=4
   calls: sub_35f390, sub_35f400, sub_35f430, sub_35f6d0
   ref: %ssemantic 
*/
void ssemantic_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104fa0ULL || rel >= 0x105120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105120 size=320 callers=0 calls=1
   calls: sub_3fa0
   ref: %sbindlessoff 0x%x 0x%x 0x%x
*/
void sbindlessoff_0x_x_0x_x_0x_x(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105120ULL || rel >= 0x105260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105260 size=2480 callers=3 calls=16
   calls: NOPERSPECTIVE, f_0_s_d, sub_1e20, sub_1e30, sub_1e40, sub_233e0, sub_35f390, sub_35f400, sub_35f430, sub_35f440, sub_35f6d0, sub_35f850
   ... +4 more
   ref: %sfunction %d %s
   ref: , descr=C[%d][%d]
   ref: %svar %s%d %s
   ref: %svar %s%dx%d 
   ref: %sprototype %s
   ref: %ssubroutine %d %s
   ref: TEXUNIT[%d]
   ref:  : %d : %d
*/
void unnamed_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105260ULL || rel >= 0x105c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105c10 size=288 callers=1 calls=4
   calls: f_0_s_d, sub_1e20, sub_1e30, sub_1e40
   ref: %s[%d][%d]
   ref: %s[%d]
*/
void unnamed_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c10ULL || rel >= 0x105d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105d30 size=512 callers=1 calls=4
   calls: sub_35f390, sub_35f430, sub_35f450, sub_35f6d0
   ref: ) -> (
   ref: %s%d.%d:%d
*/
void unnamed_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d30ULL || rel >= 0x105f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105f30 size=128 callers=0 calls=3
   calls: sub_35f390, sub_35f450, unnamed_5
*/
void sub_105f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f30ULL || rel >= 0x105fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105fb0 size=112 callers=0 calls=3
   calls: sdefault_s_2, sub_35f390, sub_35f450
*/
void sub_105fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105fb0ULL || rel >= 0x106020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106020 size=816 callers=3 calls=8
   calls: sdefault_s_2, sub_1ff0, sub_35f390, sub_35f400, sub_35f430, sub_35f440, sub_35f6d0, sub_35f850
   ref: %sdefault %s
*/
void sdefault_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106020ULL || rel >= 0x106350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106350 size=272 callers=3 calls=1
   calls: sub_3fa0
   ref: program_subroutine_%d
*/
void program_subroutine__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106350ULL || rel >= 0x106460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106460 size=768 callers=0 calls=4
   calls: program_subroutine__d, sub_1e20, sub_1e30, sub_1e40
   ref: dlmem[%i]
   ref: <<not bound>>
   ref: %s[%i]
   ref: <<aggregate>>
   ref: imm[%i]
   ref: env[%i]
   ref: buf%d[%d]
   ref: atomic_counter%d[%d]
*/
void unnamed_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106460ULL || rel >= 0x106760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106760 size=16 callers=0 calls=0
*/
void sub_106760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106760ULL || rel >= 0x106770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106770 size=16 callers=0 calls=0
*/
void sub_106770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106770ULL || rel >= 0x106780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106780 size=16 callers=0 calls=0
*/
void sub_106780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106780ULL || rel >= 0x106790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106790 size=3456 callers=0 calls=7
   calls: pointsize, program_subroutine__d, sub_107510, sub_1e20, sub_1e40, sub_3fa0, sub_40170
   ref: <<COLOR=ZERO>>
   ref: fragment.samplemask
   ref: atomic_counter%d[
   ref: buf%d[%d][
   ref: <<BadChild>>
   ref: result.samplemask
   ref: result.color[
   ref: buf%d[
*/
void buf_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106790ULL || rel >= 0x107510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107510 size=288 callers=8 calls=3
   calls: sub_107510, sub_1e30, sub_451e0
*/
void sub_107510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107510ULL || rel >= 0x107630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107630 size=3424 callers=4 calls=5
   calls: secondaryposition, sub_112390, sub_1e40, sub_2220, sub_3fa0
   ref: vertex%cattrib
   ref: vertex%ccolor%cback
   ref: vertex%cid
   ref: color%cback
   ref: pointsize
   ref: color%csecondary
   ref: primitive%ctessinner
   ref: fragment%cclip
*/
void pointsize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107630ULL || rel >= 0x108390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00108390 size=144 callers=4 calls=1
   calls: sub_1e40
*/
void sub_108390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108390ULL || rel >= 0x108420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00108420 size=144 callers=4 calls=1
   calls: sub_1e40
*/
void sub_108420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108420ULL || rel >= 0x1084b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001084b0 size=16 callers=0 calls=0
*/
void sub_1084b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084b0ULL || rel >= 0x1084c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001084c0 size=1568 callers=0 calls=0
   ref: ATOM.MAX
   ref: ATOMIM.MAX
   ref: ATOMIM.ADD
   ref: ATOMCTR.GET
   ref: ATOMCTROP.CSWAP
   ref: ATOM.ADD
   ref: ATOMIM.CSWAP
   ref: ATOM.CSWAP
*/
void TGBALLOT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084c0ULL || rel >= 0x108ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00108ae0 size=1040 callers=0 calls=0
   ref: ATOM.MAX
   ref: ATOMIM.MAX
   ref: SHFDOWN
   ref: ATOMIM.ADD
   ref: ATOMCTR.GET
   ref: ATOMCTROP.CSWAP
   ref: ATOM.ADD
   ref: ATOMIM.CSWAP
*/
void TGBALLOT_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ae0ULL || rel >= 0x108ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00108ef0 size=32 callers=1 calls=0
*/
void sub_108ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ef0ULL || rel >= 0x108f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00108f10 size=96 callers=1 calls=1
   calls: sub_3af50
*/
void sub_108f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f10ULL || rel >= 0x108f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00108f70 size=544 callers=3 calls=2
   calls: sub_109190, sub_1e40
*/
void sub_108f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f70ULL || rel >= 0x109190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00109190 size=368 callers=4 calls=0
*/
void sub_109190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x109190ULL || rel >= 0x109300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00109300 size=3296 callers=0 calls=10
   calls: sub_108f10, sub_108f70, sub_109190, sub_109fe0, sub_1e40, sub_35320, sub_35ec0, sub_3af50, sub_3af80, sub_3fa0
   ref: .LODCLAMP
*/
void LODCLAMP(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x109300ULL || rel >= 0x109fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00109fe0 size=272 callers=1 calls=0
*/
void sub_109fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x109fe0ULL || rel >= 0x10a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010a0f0 size=272 callers=1 calls=2
   calls: sub_35230, sub_3fa0
   ref: buf0[%s][%s]
*/
void buf0_s_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10a0f0ULL || rel >= 0x10a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010a200 size=12000 callers=0 calls=9
   calls: buf0_s_s, sub_108f70, sub_10d0e0, sub_10d400, sub_1e40, sub_35ec0, sub_3fa0, unnamed_4, unnamed_9
   ref: %-5s %s, %s;
   ref: %-5s %s%s, %s;
   ref: %-5s %s, %s, %s, %s%s, %s%s;
   ref: %-5s %s, %s, %s, 0;
   ref: %-5s %s, %s, %s%s;
   ref: %-5s %s, 0;
   ref: %-5s %s, %s;
   ref: %-5s %s, %s, %s%s, %s%s;
*/
void EXTERNAL(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10a200ULL || rel >= 0x10d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d0e0 size=576 callers=3 calls=4
   calls: sub_1e40, sub_35ec0, sub_373d0, sub_37550
*/
void sub_10d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0e0ULL || rel >= 0x10d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d320 size=224 callers=4 calls=1
   calls: sub_427c0
   ref: , (%d)
   ref: , (%d, %d, %d)
   ref: , (%d, %d)
*/
void unnamed_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d320ULL || rel >= 0x10d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d400 size=368 callers=3 calls=3
   calls: sub_1e40, sub_373d0, sub_37550
*/
void sub_10d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d400ULL || rel >= 0x10d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d570 size=368 callers=0 calls=3
   calls: sub_22770, sub_3620, sub_41370
*/
void sub_10d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d570ULL || rel >= 0x10d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d6e0 size=464 callers=1 calls=1
   calls: sub_3fa0
   ref:  buf%d[] = { program.buffer[%d] };
   ref: CBUFFER
   ref: BUFFER
   ref: BUFFER4
   ref:  buf%d[][] = { program.buffer[%d..%d] };
*/
void CBUFFER(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6e0ULL || rel >= 0x10d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d8b0 size=400 callers=1 calls=1
   calls: sub_3fa0
   ref: COUNTER atomic_counter%d[] = { program.counter[%d] };
*/
void COUNTER_atomic_counter_d_program_counter_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d8b0ULL || rel >= 0x10da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010da40 size=64 callers=0 calls=1
   calls: sub_1e30
*/
void sub_10da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10da40ULL || rel >= 0x10da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010da80 size=3264 callers=1 calls=10
   calls: COUNTER_atomic_counter_d_program_counter_d, STATE, pointsize, sub_112390, sub_1e20, sub_1e30, sub_1e40, sub_2220, sub_3fa0, sub_401f0
   ref: SAMPLE
   ref: PERVERTEX
   ref: NOPERSPECTIVE
   ref: [] = { 
   ref: TEMP RC;
   ref: SHORT TEMP HC;
   ref: SUBROUTINE I%d program_subroutine_%d
   ref: LONG TEMP dlmem[%d];
*/
void NOPERSPECTIVE_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10da80ULL || rel >= 0x10e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010e740 size=304 callers=0 calls=1
   calls: sub_3fa0
   ref: , %d D-regs
   ref: # %d instructions, %d R-regs
*/
void d_D_regs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e740ULL || rel >= 0x10e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010e870 size=96 callers=4 calls=1
   calls: sub_229b0
   ref: OPTION NV_shader_atomic_counters;
   ref: OPTION NV_internal;
   ref: OPTION NV_shader_buffer_load;
*/
void OPTION_NV_internal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e870ULL || rel >= 0x10e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010e8d0 size=112 callers=2 calls=1
   calls: sub_2220
*/
void sub_10e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e8d0ULL || rel >= 0x10e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010e940 size=96 callers=0 calls=2
   calls: sub_1e30, sub_1e40
*/
void sub_10e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e940ULL || rel >= 0x10e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010e9a0 size=112 callers=2 calls=1
   calls: sub_2220
*/
void sub_10e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e9a0ULL || rel >= 0x10ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010ea10 size=96 callers=0 calls=2
   calls: sub_1e30, sub_1e40
*/
void sub_10ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ea10ULL || rel >= 0x10ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010ea70 size=112 callers=2 calls=1
   calls: sub_2220
*/
void sub_10ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ea70ULL || rel >= 0x10eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010eae0 size=80 callers=0 calls=2
   calls: sub_1e30, sub_1e40
*/
void sub_10eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eae0ULL || rel >= 0x10eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010eb30 size=112 callers=2 calls=1
   calls: sub_2220
*/
void sub_10eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb30ULL || rel >= 0x10eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010eba0 size=96 callers=0 calls=2
   calls: sub_1e30, sub_1e40
*/
void sub_10eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eba0ULL || rel >= 0x10ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010ec00 size=2128 callers=0 calls=7
   calls: sub_107510, sub_10f450, sub_1e20, sub_1e40, sub_3a280, sub_3fa0, sub_40170
   ref: {%s %d%s (%s)} 
   ref: {%s %ld IDX[%d%s + %d]%s (%s)} 
   ref: {TEMPARRAY %ld IMM[%d]%s (%s)} 
   ref: PATCHOUTPUT
   ref: {%s IDX[%d%s + %d]%s (%s)} 
   ref: LONGTEMPARRAY
   ref: OUTPUT
   ref: {LONGTEMPARRAY IMM[%d]%s (%s)} 
*/
void LONGTEMPARRAY(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ec00ULL || rel >= 0x10f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f450 size=272 callers=2 calls=2
   calls: sub_10f450, sub_3fa0
*/
void sub_10f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f450ULL || rel >= 0x10f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f560 size=16 callers=0 calls=0
*/
void sub_10f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f560ULL || rel >= 0x10f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f570 size=16 callers=0 calls=0
*/
void sub_10f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f570ULL || rel >= 0x10f580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f580 size=16 callers=0 calls=0
*/
void sub_10f580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f580ULL || rel >= 0x10f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f590 size=16 callers=0 calls=0
*/
void sub_10f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f590ULL || rel >= 0x10f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f5a0 size=320 callers=0 calls=2
   calls: sub_1e30, sub_1e40
*/
void sub_10f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5a0ULL || rel >= 0x10f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f6e0 size=144 callers=12 calls=1
   calls: sub_445b0
*/
void sub_10f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f6e0ULL || rel >= 0x10f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f770 size=320 callers=8 calls=1
   calls: sub_103d70
*/
void sub_10f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f770ULL || rel >= 0x10f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f8b0 size=304 callers=0 calls=2
   calls: sub_10810, sub_37660
*/
void sub_10f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8b0ULL || rel >= 0x10f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f9e0 size=48 callers=12 calls=1
   calls: sub_24c00
*/
void sub_10f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9e0ULL || rel >= 0x10fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010fa10 size=32 callers=0 calls=0
*/
void sub_10fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa10ULL || rel >= 0x10fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010fa30 size=32 callers=0 calls=0
*/
void sub_10fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa30ULL || rel >= 0x10fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010fa50 size=112 callers=0 calls=1
   calls: sub_388c0
*/
void sub_10fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa50ULL || rel >= 0x10fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010fac0 size=256 callers=0 calls=1
   calls: sub_44f80
*/
void sub_10fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fac0ULL || rel >= 0x10fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010fbc0 size=96 callers=0 calls=1
   calls: sub_39cb0
*/
void sub_10fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fbc0ULL || rel >= 0x10fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010fc20 size=720 callers=0 calls=2
   calls: ISAFEADD, sub_3fa0
   ref: comp=%c
   ref: %sword2
   ref: width=%d
   ref: %sprecise
   ref: vertex
   ref: FORMATTED 
   ref: funcnum=%d
*/
void FORMATTED(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fc20ULL || rel >= 0x10fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010fef0 size=1264 callers=0 calls=3
   calls: sub_3a6d0, sub_3a700, sub_3a730
*/
void sub_10fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fef0ULL || rel >= 0x1103e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001103e0 size=64 callers=0 calls=0
*/
void sub_1103e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103e0ULL || rel >= 0x110420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110420 size=64 callers=0 calls=0
*/
void sub_110420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110420ULL || rel >= 0x110460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110460 size=16 callers=0 calls=0
*/
void sub_110460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110460ULL || rel >= 0x110470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110470 size=16 callers=0 calls=0
*/
void sub_110470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110470ULL || rel >= 0x110480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110480 size=32 callers=0 calls=0
*/
void sub_110480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110480ULL || rel >= 0x1104a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001104a0 size=144 callers=0 calls=2
   calls: sub_3770, sub_f440
*/
void sub_1104a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104a0ULL || rel >= 0x110530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110530 size=864 callers=4 calls=11
   calls: inconsitent_use_of_semantic_modifiers_s_and_s, sub_103010, sub_110890, sub_110a10, sub_110bd0, sub_176a0, sub_1e30, sub_1e40, sub_345c0, sub_f080, sub_f650
   ref: combined use of gl_ClipDistance and gl_CullDistance greater than gl_MaxCombinedClipAndCullDistances
*/
void combined_use_of_gl_ClipDistance_and_gl_CullDistance_grea(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110530ULL || rel >= 0x110890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110890 size=384 callers=4 calls=3
   calls: sub_110890, sub_1e30, sub_1e40
*/
void sub_110890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110890ULL || rel >= 0x110a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110a10 size=448 callers=4 calls=3
   calls: sub_110a10, sub_1e30, sub_1e40
*/
void sub_110a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110a10ULL || rel >= 0x110bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110bd0 size=352 callers=3 calls=3
   calls: sub_110bd0, sub_1e30, sub_1e40
*/
void sub_110bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110bd0ULL || rel >= 0x110d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110d30 size=16 callers=0 calls=0
*/
void sub_110d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110d30ULL || rel >= 0x110d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110d40 size=448 callers=2 calls=4
   calls: inconsitent_use_of_semantic_modifiers_s_and_s, sub_34670, sub_346e0, sub_f080
   ref: inconsitent use of semantic modifiers: "%s" and "%s"
*/
void inconsitent_use_of_semantic_modifiers_s_and_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110d40ULL || rel >= 0x110f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110f00 size=256 callers=2 calls=3
   calls: sub_34be0, sub_388c0, sub_44610
*/
void sub_110f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110f00ULL || rel >= 0x111000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111000 size=464 callers=0 calls=3
   calls: sub_310a0, sub_37660, sub_379b0
*/
void sub_111000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111000ULL || rel >= 0x1111d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001111d0 size=864 callers=0 calls=9
   calls: sub_119d0, sub_310a0, sub_31700, sub_35a0, sub_37780, sub_37830, sub_378e0, sub_391e0, sub_40570
*/
void sub_1111d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1111d0ULL || rel >= 0x111530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111530 size=112 callers=0 calls=1
   calls: sub_35320
*/
void sub_111530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111530ULL || rel >= 0x1115a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001115a0 size=624 callers=0 calls=3
   calls: sub_35320, sub_37660, sub_3af50
*/
void sub_1115a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115a0ULL || rel >= 0x111810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111810 size=688 callers=0 calls=3
   calls: sub_35e70, sub_35ec0, sub_37780
*/
void sub_111810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111810ULL || rel >= 0x111ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111ac0 size=288 callers=0 calls=1
   calls: sub_37780
*/
void sub_111ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ac0ULL || rel >= 0x111be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111be0 size=256 callers=0 calls=2
   calls: sub_3b1b0, sub_f080
   ref: -profileoption NV_shader_buffer_load required
*/
void profileoption_NV_shader_buffer_load_required(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111be0ULL || rel >= 0x111ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111ce0 size=112 callers=0 calls=1
   calls: sub_1e40
*/
void sub_111ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ce0ULL || rel >= 0x111d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111d50 size=160 callers=0 calls=4
   calls: sub_19b00, sub_34d70, sub_388c0, sub_51370
*/
void sub_111d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111d50ULL || rel >= 0x111df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111df0 size=16 callers=0 calls=0
*/
void sub_111df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111df0ULL || rel >= 0x111e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111e00 size=32 callers=0 calls=0
*/
void sub_111e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111e00ULL || rel >= 0x111e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111e20 size=32 callers=0 calls=0
*/
void sub_111e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111e20ULL || rel >= 0x111e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111e40 size=64 callers=0 calls=0
*/
void sub_111e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111e40ULL || rel >= 0x111e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111e80 size=96 callers=0 calls=0
*/
void sub_111e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111e80ULL || rel >= 0x111ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111ee0 size=96 callers=0 calls=0
*/
void sub_111ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ee0ULL || rel >= 0x111f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111f40 size=96 callers=0 calls=0
*/
void sub_111f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111f40ULL || rel >= 0x111fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111fa0 size=16 callers=0 calls=0
*/
void sub_111fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111fa0ULL || rel >= 0x111fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111fb0 size=192 callers=0 calls=2
   calls: sub_112070, sub_1e40
*/
void sub_111fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111fb0ULL || rel >= 0x112070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112070 size=112 callers=2 calls=1
   calls: sub_112070
*/
void sub_112070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112070ULL || rel >= 0x1120e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001120e0 size=48 callers=0 calls=0
*/
void sub_1120e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1120e0ULL || rel >= 0x112110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112110 size=16 callers=0 calls=0
*/
void sub_112110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112110ULL || rel >= 0x112120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112120 size=144 callers=0 calls=0
*/
void sub_112120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112120ULL || rel >= 0x1121b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001121b0 size=80 callers=0 calls=0
*/
void sub_1121b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121b0ULL || rel >= 0x112200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112200 size=32 callers=0 calls=0
*/
void sub_112200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112200ULL || rel >= 0x112220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112220 size=16 callers=0 calls=0
*/
void sub_112220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112220ULL || rel >= 0x112230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112230 size=112 callers=0 calls=0
   ref: too many subroutines (limit %d)
*/
void too_many_subroutines_limit_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112230ULL || rel >= 0x1122a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001122a0 size=160 callers=0 calls=0
   ref: too many subroutines (limit %d)
*/
void too_many_subroutines_limit_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122a0ULL || rel >= 0x112340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112340 size=48 callers=0 calls=0
*/
void sub_112340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112340ULL || rel >= 0x112370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112370 size=16 callers=0 calls=0
*/
void sub_112370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112370ULL || rel >= 0x112380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112380 size=16 callers=0 calls=0
*/
void sub_112380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112380ULL || rel >= 0x112390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112390 size=16 callers=6 calls=0
*/
void sub_112390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112390ULL || rel >= 0x1123a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001123a0 size=80 callers=0 calls=0
*/
void sub_1123a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123a0ULL || rel >= 0x1123f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001123f0 size=32 callers=0 calls=0
*/
void sub_1123f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123f0ULL || rel >= 0x112410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112410 size=304 callers=0 calls=1
   calls: sub_1e40
*/
void sub_112410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112410ULL || rel >= 0x112540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112540 size=80 callers=0 calls=0
*/
void sub_112540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112540ULL || rel >= 0x112590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112590 size=112 callers=0 calls=1
   calls: sub_f120
*/
void sub_112590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112590ULL || rel >= 0x112600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112600 size=208 callers=2 calls=0
*/
void sub_112600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112600ULL || rel >= 0x1126d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001126d0 size=256 callers=21 calls=0
*/
void sub_1126d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126d0ULL || rel >= 0x1127d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001127d0 size=16 callers=0 calls=0
*/
void sub_1127d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127d0ULL || rel >= 0x1127e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001127e0 size=64 callers=1 calls=0
*/
void sub_1127e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127e0ULL || rel >= 0x112820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112820 size=176 callers=0 calls=2
   calls: sub_65420, sub_99cf0
*/
void sub_112820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112820ULL || rel >= 0x1128d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001128d0 size=112 callers=2 calls=1
   calls: sub_aa640
*/
void sub_1128d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128d0ULL || rel >= 0x112940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112940 size=768 callers=1 calls=3
   calls: sub_65420, sub_a92d0, sub_aa640
*/
void sub_112940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112940ULL || rel >= 0x112c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112c40 size=128 callers=0 calls=2
   calls: sub_3d960, sub_65420
*/
void sub_112c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112c40ULL || rel >= 0x112cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112cc0 size=608 callers=1 calls=2
   calls: sub_35f0, sub_68060
*/
void sub_112cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112cc0ULL || rel >= 0x112f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112f20 size=1488 callers=1 calls=3
   calls: sub_35f0, sub_3620, sub_61d40
*/
void sub_112f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f20ULL || rel >= 0x1134f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001134f0 size=48 callers=3 calls=1
   calls: sub_65420
*/
void sub_1134f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1134f0ULL || rel >= 0x113520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113520 size=304 callers=0 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_113520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113520ULL || rel >= 0x113650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113650 size=352 callers=1 calls=0
*/
void sub_113650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113650ULL || rel >= 0x1137b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001137b0 size=1328 callers=1 calls=3
   calls: sub_3620, sub_3d090, sub_65420
*/
void sub_1137b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137b0ULL || rel >= 0x113ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113ce0 size=272 callers=3 calls=3
   calls: sub_86810, sub_9a050, sub_a7110
*/
void sub_113ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ce0ULL || rel >= 0x113df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113df0 size=144 callers=0 calls=0
*/
void sub_113df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113df0ULL || rel >= 0x113e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113e80 size=96 callers=0 calls=0
*/
void sub_113e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e80ULL || rel >= 0x113ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113ee0 size=512 callers=0 calls=3
   calls: sub_3cf40, sub_65420, sub_88b40
*/
void sub_113ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ee0ULL || rel >= 0x1140e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001140e0 size=288 callers=0 calls=0
*/
void sub_1140e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1140e0ULL || rel >= 0x114200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00114200 size=160 callers=0 calls=2
   calls: sub_3d960, sub_65420
*/
void sub_114200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114200ULL || rel >= 0x1142a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001142a0 size=1520 callers=1 calls=4
   calls: sub_1137b0, sub_3db80, sub_65420, sub_9a050
*/
void sub_1142a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142a0ULL || rel >= 0x114890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00114890 size=96 callers=0 calls=1
   calls: sub_9b020
*/
void sub_114890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114890ULL || rel >= 0x1148f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001148f0 size=64 callers=0 calls=0
*/
void sub_1148f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148f0ULL || rel >= 0x114930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00114930 size=32 callers=0 calls=0
*/
void sub_114930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114930ULL || rel >= 0x114950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00114950 size=208 callers=1 calls=2
   calls: sub_9b3e0, sub_a7090
*/
void sub_114950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114950ULL || rel >= 0x114a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00114a20 size=208 callers=0 calls=1
   calls: sub_86810
*/
void sub_114a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114a20ULL || rel >= 0x114af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00114af0 size=176 callers=0 calls=2
   calls: sub_9a050, sub_a7110
*/
void sub_114af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114af0ULL || rel >= 0x114ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00114ba0 size=816 callers=0 calls=8
   calls: sub_114950, sub_67010, sub_9ae80, sub_9b3e0, sub_9bed0, sub_a7090, sub_a7110, sub_a7cb0
*/
void sub_114ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ba0ULL || rel >= 0x114ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00114ed0 size=464 callers=0 calls=2
   calls: sub_9ab10, sub_a7890
*/
void sub_114ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ed0ULL || rel >= 0x1150a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001150a0 size=3728 callers=0 calls=16
   calls: sub_113ce0, sub_3870, sub_3af80, sub_3d090, sub_9ab10, sub_9ae80, sub_9b3e0, sub_9bed0, sub_9d420, sub_a7090, sub_a70d0, sub_a7110
   ... +4 more
*/
void sub_1150a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1150a0ULL || rel >= 0x115f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00115f30 size=1376 callers=0 calls=6
   calls: sub_3cf40, sub_9b3e0, sub_9bed0, sub_a7090, sub_a7cb0, sub_a92d0
*/
void sub_115f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f30ULL || rel >= 0x116490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00116490 size=512 callers=1 calls=2
   calls: sub_9ab10, sub_a85c0
*/
void sub_116490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116490ULL || rel >= 0x116690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00116690 size=416 callers=0 calls=3
   calls: sub_113ce0, sub_9ab10, sub_a85c0
*/
void sub_116690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116690ULL || rel >= 0x116830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00116830 size=288 callers=1 calls=3
   calls: sub_112940, sub_116490, sub_aa640
*/
void sub_116830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116830ULL || rel >= 0x116950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00116950 size=496 callers=1 calls=1
   calls: sub_3d090
*/
void sub_116950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116950ULL || rel >= 0x116b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00116b40 size=560 callers=1 calls=3
   calls: sub_113650, sub_116950, sub_3da60
*/
void sub_116b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116b40ULL || rel >= 0x116d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00116d70 size=1472 callers=1 calls=10
   calls: sub_112cc0, sub_112f20, sub_1142a0, sub_116b40, sub_1182c0, sub_11d3a0, sub_3da60, sub_65420, sub_68090, sub_8b490
*/
void sub_116d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116d70ULL || rel >= 0x117330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00117330 size=112 callers=12 calls=0
*/
void sub_117330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117330ULL || rel >= 0x1173a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001173a0 size=96 callers=9 calls=1
   calls: sub_65420
*/
void sub_1173a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173a0ULL || rel >= 0x117400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00117400 size=112 callers=9 calls=0
*/
void sub_117400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117400ULL || rel >= 0x117470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00117470 size=384 callers=2 calls=2
   calls: sub_116830, sub_3870
*/
void sub_117470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117470ULL || rel >= 0x1175f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001175f0 size=256 callers=0 calls=4
   calls: sub_9b3e0, sub_9bed0, sub_a7090, sub_a7cb0
*/
void sub_1175f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1175f0ULL || rel >= 0x1176f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001176f0 size=240 callers=0 calls=1
   calls: sub_9ab10
*/
void sub_1176f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176f0ULL || rel >= 0x1177e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001177e0 size=240 callers=0 calls=1
   calls: sub_9ab10
*/
void sub_1177e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1177e0ULL || rel >= 0x1178d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001178d0 size=96 callers=1 calls=0
*/
void sub_1178d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178d0ULL || rel >= 0x117930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00117930 size=224 callers=1 calls=0
*/
void sub_117930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117930ULL || rel >= 0x117a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00117a10 size=512 callers=1 calls=3
   calls: sub_86be0, sub_99e90, sub_a9a30
*/
void sub_117a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a10ULL || rel >= 0x117c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00117c10 size=240 callers=1 calls=4
   calls: sub_117a10, sub_159130, sub_9adb0, sub_a70d0
*/
void sub_117c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c10ULL || rel >= 0x117d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00117d00 size=384 callers=0 calls=7
   calls: sub_9a050, sub_9b3e0, sub_a7150, sub_a80d0, sub_a82d0, sub_a92d0, sub_a9a30
*/
void sub_117d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117d00ULL || rel >= 0x117e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00117e80 size=368 callers=1 calls=3
   calls: sub_117c10, sub_a7110, sub_a7a30
*/
void sub_117e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117e80ULL || rel >= 0x117ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00117ff0 size=672 callers=0 calls=5
   calls: sub_63c30, sub_86810, sub_9a740, sub_a7110, sub_a9a30
*/
void sub_117ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117ff0ULL || rel >= 0x118290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00118290 size=48 callers=1 calls=1
   calls: sub_117e80
*/
void sub_118290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118290ULL || rel >= 0x1182c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001182c0 size=320 callers=10 calls=0
*/
void sub_1182c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182c0ULL || rel >= 0x118400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00118400 size=48 callers=0 calls=0
*/
void sub_118400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118400ULL || rel >= 0x118430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00118430 size=224 callers=0 calls=1
   calls: sub_999f0
*/
void sub_118430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118430ULL || rel >= 0x118510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00118510 size=400 callers=1 calls=1
   calls: sub_3620
*/
void sub_118510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118510ULL || rel >= 0x1186a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001186a0 size=448 callers=1 calls=1
   calls: sub_3620
*/
void sub_1186a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1186a0ULL || rel >= 0x118860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00118860 size=368 callers=1 calls=1
   calls: sub_3620
*/
void sub_118860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118860ULL || rel >= 0x1189d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001189d0 size=672 callers=7 calls=4
   calls: sub_3620, sub_55670, sub_55770, sub_55ab0
*/
void sub_1189d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1189d0ULL || rel >= 0x118c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00118c70 size=272 callers=1 calls=0
*/
void sub_118c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118c70ULL || rel >= 0x118d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00118d80 size=192 callers=1 calls=1
   calls: sub_1189d0
*/
void sub_118d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118d80ULL || rel >= 0x118e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00118e40 size=64 callers=2 calls=0
*/
void sub_118e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118e40ULL || rel >= 0x118e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00118e80 size=624 callers=1 calls=0
*/
void sub_118e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118e80ULL || rel >= 0x1190f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001190f0 size=352 callers=0 calls=1
   calls: sub_624d0
*/
void sub_1190f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190f0ULL || rel >= 0x119250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00119250 size=416 callers=0 calls=4
   calls: sub_624d0, sub_a7850, sub_a8370, sub_a91b0
*/
void sub_119250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119250ULL || rel >= 0x1193f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001193f0 size=560 callers=0 calls=2
   calls: sub_62240, sub_62a70
*/
void sub_1193f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1193f0ULL || rel >= 0x119620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00119620 size=464 callers=0 calls=3
   calls: sub_620d0, sub_62a70, sub_a9270
*/
void sub_119620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119620ULL || rel >= 0x1197f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001197f0 size=160 callers=0 calls=0
*/
void sub_1197f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197f0ULL || rel >= 0x119890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00119890 size=448 callers=0 calls=0
*/
void sub_119890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119890ULL || rel >= 0x119a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00119a50 size=384 callers=0 calls=0
*/
void sub_119a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119a50ULL || rel >= 0x119bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00119bd0 size=1088 callers=0 calls=6
   calls: sub_11a010, sub_66d40, sub_a7090, sub_a7800, sub_a7850, sub_a9270
*/
void sub_119bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119bd0ULL || rel >= 0x11a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011a010 size=208 callers=22 calls=4
   calls: sub_66c00, sub_66c30, sub_9a240, sub_9a600
*/
void sub_11a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a010ULL || rel >= 0x11a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011a0e0 size=496 callers=1 calls=2
   calls: sub_118e80, sub_11a2d0
*/
void sub_11a0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0e0ULL || rel >= 0x11a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011a2d0 size=464 callers=1 calls=1
   calls: sub_9bed0
*/
void sub_11a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2d0ULL || rel >= 0x11a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011a4a0 size=768 callers=1 calls=9
   calls: sub_11a0e0, sub_620d0, sub_64060, sub_68ce0, sub_68db0, sub_b7e20, sub_b89a0, sub_b8aa0, sub_ffa40
*/
void sub_11a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4a0ULL || rel >= 0x11a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011a7a0 size=640 callers=4 calls=2
   calls: sub_55190, sub_631d0
*/
void sub_11a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a7a0ULL || rel >= 0x11aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011aa20 size=2768 callers=0 calls=9
   calls: sub_63560, sub_635d0, sub_635f0, sub_636a0, sub_636f0, sub_66820, sub_b7e20, sub_b89a0, sub_b8b90
*/
void sub_11aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aa20ULL || rel >= 0x11b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011b4f0 size=5664 callers=1 calls=18
   calls: sub_118510, sub_1186a0, sub_118860, sub_1189d0, sub_1fe4b0, sub_2880, sub_35f0, sub_3620, sub_3870, sub_3890, sub_63580, sub_63610
   ... +6 more
*/
void sub_11b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4f0ULL || rel >= 0x11cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011cb10 size=48 callers=2 calls=0
*/
void sub_11cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb10ULL || rel >= 0x11cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011cb40 size=64 callers=0 calls=1
   calls: sub_35f0
*/
void sub_11cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb40ULL || rel >= 0x11cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011cb80 size=16 callers=1 calls=0
*/
void sub_11cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb80ULL || rel >= 0x11cb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011cb90 size=48 callers=3 calls=0
*/
void sub_11cb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb90ULL || rel >= 0x11cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011cbc0 size=80 callers=1 calls=0
*/
void sub_11cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cbc0ULL || rel >= 0x11cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

