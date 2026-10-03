/* subsdk1 functions 003b19c0..003fec70 (19 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003b19c0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_432d40
*/
void sub_3b19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b19c0ULL || rel >= 0x3b1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1a50 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_432ed0
*/
void sub_3b1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1a50ULL || rel >= 0x3b1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1ae0 size=96 callers=0 calls=2
   calls: sub_393430, sub_433090
*/
void sub_3b1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1ae0ULL || rel >= 0x3b1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1b40 size=96 callers=0 calls=2
   calls: sub_393430, sub_433250
*/
void sub_3b1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1b40ULL || rel >= 0x3b1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1ba0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_433430
*/
void sub_3b1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1ba0ULL || rel >= 0x3b1c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1c20 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_433640
*/
void sub_3b1c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1c20ULL || rel >= 0x3b1cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1cb0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_433830
*/
void sub_3b1cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1cb0ULL || rel >= 0x3b1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1d40 size=96 callers=0 calls=2
   calls: sub_393430, sub_433a00
*/
void sub_3b1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1d40ULL || rel >= 0x3b1da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1da0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_433c40
*/
void sub_3b1da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1da0ULL || rel >= 0x3b1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1e30 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_433e40
*/
void sub_3b1e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1e30ULL || rel >= 0x3b1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1ec0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_434060
*/
void sub_3b1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1ec0ULL || rel >= 0x3b1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1f50 size=96 callers=0 calls=2
   calls: sub_393430, sub_434290
*/
void sub_3b1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1f50ULL || rel >= 0x3b1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1fb0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4344d0
*/
void sub_3b1fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1fb0ULL || rel >= 0x3b2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2010 size=96 callers=0 calls=2
   calls: sub_393430, sub_434710
*/
void sub_3b2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2010ULL || rel >= 0x3b2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2070 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_434980
*/
void sub_3b2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2070ULL || rel >= 0x3b2100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2100 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_434be0
*/
void sub_3b2100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2100ULL || rel >= 0x3b2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2180 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_434e70
*/
void sub_3b2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2180ULL || rel >= 0x3b2210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2210 size=96 callers=0 calls=2
   calls: sub_393430, sub_4350f0
*/
void sub_3b2210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2210ULL || rel >= 0x3b2270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2270 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_435370
*/
void sub_3b2270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2270ULL || rel >= 0x3b2300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2300 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_435510
*/
void sub_3b2300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2300ULL || rel >= 0x3b2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2390 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_435690
*/
void sub_3b2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2390ULL || rel >= 0x3b2410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2410 size=96 callers=0 calls=2
   calls: sub_393430, sub_4357f0
*/
void sub_3b2410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2410ULL || rel >= 0x3b2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2470 size=96 callers=0 calls=2
   calls: sub_393430, sub_4359e0
*/
void sub_3b2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2470ULL || rel >= 0x3b24d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b24d0 size=96 callers=0 calls=2
   calls: sub_393430, sub_435b70
*/
void sub_3b24d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b24d0ULL || rel >= 0x3b2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2530 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_435d40
*/
void sub_3b2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2530ULL || rel >= 0x3b25c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b25c0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_435ef0
*/
void sub_3b25c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b25c0ULL || rel >= 0x3b2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2630 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_436080
*/
void sub_3b2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2630ULL || rel >= 0x3b26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b26c0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_436250
*/
void sub_3b26c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b26c0ULL || rel >= 0x3b2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2750 size=96 callers=0 calls=2
   calls: sub_393430, sub_436400
*/
void sub_3b2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2750ULL || rel >= 0x3b27b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b27b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_436620
*/
void sub_3b27b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b27b0ULL || rel >= 0x3b2810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2810 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_436820
*/
void sub_3b2810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2810ULL || rel >= 0x3b28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b28a0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_436a00
*/
void sub_3b28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b28a0ULL || rel >= 0x3b2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2930 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_436c10
*/
void sub_3b2930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2930ULL || rel >= 0x3b29b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b29b0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_436e00
*/
void sub_3b29b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b29b0ULL || rel >= 0x3b2a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2a40 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_437020
*/
void sub_3b2a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2a40ULL || rel >= 0x3b2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2ac0 size=96 callers=0 calls=2
   calls: sub_393430, sub_437220
*/
void sub_3b2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2ac0ULL || rel >= 0x3b2b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2b20 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_437440
*/
void sub_3b2b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2b20ULL || rel >= 0x3b2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2bb0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_437680
*/
void sub_3b2bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2bb0ULL || rel >= 0x3b2c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2c00 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4378a0
*/
void sub_3b2c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2c00ULL || rel >= 0x3b2c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2c90 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_437ae0
*/
void sub_3b2c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2c90ULL || rel >= 0x3b2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2d00 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_437d10
*/
void sub_3b2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2d00ULL || rel >= 0x3b2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2d90 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_437f60
*/
void sub_3b2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2d90ULL || rel >= 0x3b2e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2e20 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3b2e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2e20ULL || rel >= 0x3b2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2f30 size=304 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3b2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2f30ULL || rel >= 0x3b3060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3060 size=544 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3b3060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3060ULL || rel >= 0x3b3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3280 size=752 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3b3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3280ULL || rel >= 0x3b3570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3570 size=960 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3b3570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3570ULL || rel >= 0x3b3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3930 size=320 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3b3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3930ULL || rel >= 0x3b3a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3a70 size=560 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3b3a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3a70ULL || rel >= 0x3b3ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3ca0 size=768 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3b3ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3ca0ULL || rel >= 0x3b3fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3fa0 size=976 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3b3fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3fa0ULL || rel >= 0x3b4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4370 size=432 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3b4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4370ULL || rel >= 0x3b4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4520 size=336 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3b4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4520ULL || rel >= 0x3b4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4670 size=768 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4670ULL || rel >= 0x3b4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4970 size=608 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b4970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4970ULL || rel >= 0x3b4bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4bd0 size=736 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b4bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4bd0ULL || rel >= 0x3b4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4eb0 size=704 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b4eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4eb0ULL || rel >= 0x3b5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b5170 size=1392 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b5170ULL || rel >= 0x3b56e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b56e0 size=1216 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b56e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b56e0ULL || rel >= 0x3b5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b5ba0 size=1344 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b5ba0ULL || rel >= 0x3b60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b60e0 size=1328 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b60e0ULL || rel >= 0x3b6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b6610 size=1376 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6610ULL || rel >= 0x3b6b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b6b70 size=1216 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b6b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6b70ULL || rel >= 0x3b7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7030 size=1328 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7030ULL || rel >= 0x3b7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7560 size=1312 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b7560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7560ULL || rel >= 0x3b7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7a80 size=1088 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_3b7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7a80ULL || rel >= 0x3b7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7ec0 size=928 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_3b7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7ec0ULL || rel >= 0x3b8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8260 size=1040 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_3b8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8260ULL || rel >= 0x3b8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8670 size=1024 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_3b8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8670ULL || rel >= 0x3b8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8a70 size=800 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8a70ULL || rel >= 0x3b8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8d90 size=640 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8d90ULL || rel >= 0x3b9010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9010 size=752 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b9010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9010ULL || rel >= 0x3b9300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9300 size=736 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b9300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9300ULL || rel >= 0x3b95e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b95e0 size=896 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b95e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b95e0ULL || rel >= 0x3b9960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9960 size=736 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b9960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9960ULL || rel >= 0x3b9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9c40 size=864 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9c40ULL || rel >= 0x3b9fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9fa0 size=832 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3b9fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9fa0ULL || rel >= 0x3ba2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba2e0 size=816 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3ba2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba2e0ULL || rel >= 0x3ba610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba610 size=656 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3ba610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba610ULL || rel >= 0x3ba8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba8a0 size=784 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3ba8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba8a0ULL || rel >= 0x3babb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003babb0 size=752 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3babb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3babb0ULL || rel >= 0x3baea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003baea0 size=752 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3baea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3baea0ULL || rel >= 0x3bb190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb190 size=576 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bb190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb190ULL || rel >= 0x3bb3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb3d0 size=704 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bb3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb3d0ULL || rel >= 0x3bb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb690 size=672 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bb690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb690ULL || rel >= 0x3bb930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb930 size=864 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bb930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb930ULL || rel >= 0x3bbc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bbc90 size=688 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bbc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bbc90ULL || rel >= 0x3bbf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bbf40 size=816 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bbf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bbf40ULL || rel >= 0x3bc270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc270 size=784 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bc270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc270ULL || rel >= 0x3bc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc580 size=880 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bc580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc580ULL || rel >= 0x3bc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc8f0 size=720 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc8f0ULL || rel >= 0x3bcbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcbc0 size=848 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bcbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcbc0ULL || rel >= 0x3bcf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcf10 size=816 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bcf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcf10ULL || rel >= 0x3bd240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd240 size=896 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bd240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd240ULL || rel >= 0x3bd5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd5c0 size=736 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bd5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd5c0ULL || rel >= 0x3bd8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd8a0 size=864 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bd8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd8a0ULL || rel >= 0x3bdc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdc00 size=832 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bdc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdc00ULL || rel >= 0x3bdf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdf40 size=816 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bdf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdf40ULL || rel >= 0x3be270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be270 size=656 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3be270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be270ULL || rel >= 0x3be500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be500 size=784 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3be500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be500ULL || rel >= 0x3be810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be810 size=752 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3be810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be810ULL || rel >= 0x3beb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003beb00 size=752 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3beb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3beb00ULL || rel >= 0x3bedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bedf0 size=576 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bedf0ULL || rel >= 0x3bf030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bf030 size=704 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bf030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bf030ULL || rel >= 0x3bf2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bf2f0 size=672 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bf2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bf2f0ULL || rel >= 0x3bf590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bf590 size=848 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bf590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bf590ULL || rel >= 0x3bf8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bf8e0 size=688 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bf8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bf8e0ULL || rel >= 0x3bfb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bfb90 size=816 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bfb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bfb90ULL || rel >= 0x3bfec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bfec0 size=784 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3bfec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bfec0ULL || rel >= 0x3c01d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c01d0 size=880 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c01d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c01d0ULL || rel >= 0x3c0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0540 size=720 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c0540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0540ULL || rel >= 0x3c0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0810 size=848 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0810ULL || rel >= 0x3c0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0b60 size=816 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0b60ULL || rel >= 0x3c0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0e90 size=1536 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0e90ULL || rel >= 0x3c1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1490 size=1344 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1490ULL || rel >= 0x3c19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c19d0 size=1488 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c19d0ULL || rel >= 0x3c1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1fa0 size=1456 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1fa0ULL || rel >= 0x3c2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2550 size=1376 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c2550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2550ULL || rel >= 0x3c2ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2ab0 size=1216 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c2ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2ab0ULL || rel >= 0x3c2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2f70 size=1344 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2f70ULL || rel >= 0x3c34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c34b0 size=1312 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c34b0ULL || rel >= 0x3c39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c39d0 size=1408 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c39d0ULL || rel >= 0x3c3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3f50 size=1248 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c3f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3f50ULL || rel >= 0x3c4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4430 size=1360 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4430ULL || rel >= 0x3c4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4980 size=1344 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4980ULL || rel >= 0x3c4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4ec0 size=672 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c4ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4ec0ULL || rel >= 0x3c5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5160 size=496 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5160ULL || rel >= 0x3c5350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5350 size=624 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c5350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5350ULL || rel >= 0x3c55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c55c0 size=592 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c55c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c55c0ULL || rel >= 0x3c5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5810 size=608 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5810ULL || rel >= 0x3c5a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5a70 size=416 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c5a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5a70ULL || rel >= 0x3c5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5c10 size=560 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5c10ULL || rel >= 0x3c5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5e40 size=528 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5e40ULL || rel >= 0x3c6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6050 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4387f0
*/
void sub_3c6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6050ULL || rel >= 0x3c60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c60e0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_438a70
*/
void sub_3c60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c60e0ULL || rel >= 0x3c6160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6160 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_438c50
*/
void sub_3c6160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6160ULL || rel >= 0x3c61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c61f0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_438eb0
*/
void sub_3c61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c61f0ULL || rel >= 0x3c6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6280 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439100
*/
void sub_3c6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6280ULL || rel >= 0x3c6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6310 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_439320
*/
void sub_3c6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6310ULL || rel >= 0x3c6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6390 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4394a0
*/
void sub_3c6390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6390ULL || rel >= 0x3c6420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6420 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4396a0
*/
void sub_3c6420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6420ULL || rel >= 0x3c64b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c64b0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439100
*/
void sub_3c64b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c64b0ULL || rel >= 0x3c6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6540 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_439320
*/
void sub_3c6540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6540ULL || rel >= 0x3c65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c65c0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4394a0
*/
void sub_3c65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c65c0ULL || rel >= 0x3c6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6650 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4396a0
*/
void sub_3c6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6650ULL || rel >= 0x3c66e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c66e0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4387f0
*/
void sub_3c66e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c66e0ULL || rel >= 0x3c6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6770 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_438a70
*/
void sub_3c6770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6770ULL || rel >= 0x3c67f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c67f0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_438c50
*/
void sub_3c67f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c67f0ULL || rel >= 0x3c6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6880 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_438eb0
*/
void sub_3c6880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6880ULL || rel >= 0x3c6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6910 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439100
*/
void sub_3c6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6910ULL || rel >= 0x3c69a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c69a0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_439320
*/
void sub_3c69a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c69a0ULL || rel >= 0x3c6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6a20 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4394a0
*/
void sub_3c6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6a20ULL || rel >= 0x3c6ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6ab0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4396a0
*/
void sub_3c6ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6ab0ULL || rel >= 0x3c6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6b40 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4387f0
*/
void sub_3c6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6b40ULL || rel >= 0x3c6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6bd0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_438a70
*/
void sub_3c6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6bd0ULL || rel >= 0x3c6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6c50 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_438c50
*/
void sub_3c6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6c50ULL || rel >= 0x3c6ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6ce0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_438eb0
*/
void sub_3c6ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6ce0ULL || rel >= 0x3c6d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6d70 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439100
*/
void sub_3c6d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6d70ULL || rel >= 0x3c6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6e00 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_439320
*/
void sub_3c6e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6e00ULL || rel >= 0x3c6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6e80 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4394a0
*/
void sub_3c6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6e80ULL || rel >= 0x3c6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6f10 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4396a0
*/
void sub_3c6f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6f10ULL || rel >= 0x3c6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6fa0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439100
*/
void sub_3c6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6fa0ULL || rel >= 0x3c7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7030 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_439320
*/
void sub_3c7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7030ULL || rel >= 0x3c70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c70b0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4394a0
*/
void sub_3c70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c70b0ULL || rel >= 0x3c7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7140 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4396a0
*/
void sub_3c7140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7140ULL || rel >= 0x3c71d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c71d0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439100
*/
void sub_3c71d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c71d0ULL || rel >= 0x3c7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7260 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_439320
*/
void sub_3c7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7260ULL || rel >= 0x3c72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c72e0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4394a0
*/
void sub_3c72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c72e0ULL || rel >= 0x3c7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7370 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4396a0
*/
void sub_3c7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7370ULL || rel >= 0x3c7400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7400 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4387f0
*/
void sub_3c7400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7400ULL || rel >= 0x3c7490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7490 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_438a70
*/
void sub_3c7490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7490ULL || rel >= 0x3c7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7510 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_438c50
*/
void sub_3c7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7510ULL || rel >= 0x3c75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c75a0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_438eb0
*/
void sub_3c75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c75a0ULL || rel >= 0x3c7630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7630 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439100
*/
void sub_3c7630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7630ULL || rel >= 0x3c76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c76c0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_439320
*/
void sub_3c76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c76c0ULL || rel >= 0x3c7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7740 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4394a0
*/
void sub_3c7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7740ULL || rel >= 0x3c77d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c77d0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4396a0
*/
void sub_3c77d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c77d0ULL || rel >= 0x3c7860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7860 size=704 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c7860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7860ULL || rel >= 0x3c7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7b20 size=512 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7b20ULL || rel >= 0x3c7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7d20 size=640 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7d20ULL || rel >= 0x3c7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7fa0 size=624 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7fa0ULL || rel >= 0x3c8210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8210 size=96 callers=0 calls=2
   calls: sub_393430, sub_428b30
*/
void sub_3c8210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8210ULL || rel >= 0x3c8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8270 size=96 callers=0 calls=2
   calls: sub_393430, sub_428b30
*/
void sub_3c8270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8270ULL || rel >= 0x3c82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c82d0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439880
*/
void sub_3c82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c82d0ULL || rel >= 0x3c8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8360 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_439aa0
*/
void sub_3c8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8360ULL || rel >= 0x3c83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c83e0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439c20
*/
void sub_3c83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c83e0ULL || rel >= 0x3c8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8470 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439e20
*/
void sub_3c8470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8470ULL || rel >= 0x3c8500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8500 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439880
*/
void sub_3c8500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8500ULL || rel >= 0x3c8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8590 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_439aa0
*/
void sub_3c8590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8590ULL || rel >= 0x3c8610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8610 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439c20
*/
void sub_3c8610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8610ULL || rel >= 0x3c86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c86a0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_439e20
*/
void sub_3c86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c86a0ULL || rel >= 0x3c8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8730 size=384 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8730ULL || rel >= 0x3c88b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c88b0 size=224 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c88b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c88b0ULL || rel >= 0x3c8990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8990 size=912 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c8990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8990ULL || rel >= 0x3c8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8d20 size=752 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8d20ULL || rel >= 0x3c9010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9010 size=880 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c9010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9010ULL || rel >= 0x3c9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9380 size=848 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9380ULL || rel >= 0x3c96d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c96d0 size=944 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c96d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c96d0ULL || rel >= 0x3c9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9a80 size=784 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9a80ULL || rel >= 0x3c9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9d90 size=896 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3c9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9d90ULL || rel >= 0x3ca110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca110 size=880 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3ca110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca110ULL || rel >= 0x3ca480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca480 size=928 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3ca480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca480ULL || rel >= 0x3ca820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca820 size=768 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3ca820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca820ULL || rel >= 0x3cab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cab20 size=896 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cab20ULL || rel >= 0x3caea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003caea0 size=864 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3caea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3caea0ULL || rel >= 0x3cb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cb200 size=1536 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cb200ULL || rel >= 0x3cb800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cb800 size=1392 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cb800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cb800ULL || rel >= 0x3cbd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbd70 size=1504 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cbd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbd70ULL || rel >= 0x3cc350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc350 size=1472 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cc350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc350ULL || rel >= 0x3cc910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc910 size=1536 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cc910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc910ULL || rel >= 0x3ccf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ccf10 size=1376 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3ccf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ccf10ULL || rel >= 0x3cd470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd470 size=1488 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cd470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd470ULL || rel >= 0x3cda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cda40 size=1472 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cda40ULL || rel >= 0x3ce000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ce000 size=1248 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_3ce000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ce000ULL || rel >= 0x3ce4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ce4e0 size=1072 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_3ce4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ce4e0ULL || rel >= 0x3ce910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ce910 size=1200 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_3ce910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ce910ULL || rel >= 0x3cedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cedc0 size=1168 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_3cedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cedc0ULL || rel >= 0x3cf250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf250 size=960 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cf250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf250ULL || rel >= 0x3cf610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf610 size=800 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cf610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf610ULL || rel >= 0x3cf930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf930 size=912 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cf930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf930ULL || rel >= 0x3cfcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfcc0 size=896 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3cfcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfcc0ULL || rel >= 0x3d0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0040 size=1040 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d0040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0040ULL || rel >= 0x3d0450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0450 size=880 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d0450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0450ULL || rel >= 0x3d07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d07c0 size=992 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d07c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d07c0ULL || rel >= 0x3d0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0ba0 size=960 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0ba0ULL || rel >= 0x3d0f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0f60 size=960 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d0f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0f60ULL || rel >= 0x3d1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1320 size=800 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1320ULL || rel >= 0x3d1640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1640 size=912 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d1640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1640ULL || rel >= 0x3d19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d19d0 size=896 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d19d0ULL || rel >= 0x3d1d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1d50 size=880 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d1d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1d50ULL || rel >= 0x3d20c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d20c0 size=720 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d20c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d20c0ULL || rel >= 0x3d2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2390 size=848 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2390ULL || rel >= 0x3d26e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d26e0 size=816 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d26e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d26e0ULL || rel >= 0x3d2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2a10 size=992 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2a10ULL || rel >= 0x3d2df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2df0 size=832 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d2df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2df0ULL || rel >= 0x3d3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3130 size=944 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d3130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3130ULL || rel >= 0x3d34e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d34e0 size=928 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d34e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d34e0ULL || rel >= 0x3d3880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3880 size=1024 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d3880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3880ULL || rel >= 0x3d3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3c80 size=864 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3c80ULL || rel >= 0x3d3fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3fe0 size=976 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d3fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3fe0ULL || rel >= 0x3d43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d43b0 size=960 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d43b0ULL || rel >= 0x3d4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4770 size=1680 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4770ULL || rel >= 0x3d4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4e00 size=1488 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4e00ULL || rel >= 0x3d53d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d53d0 size=1648 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d53d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d53d0ULL || rel >= 0x3d5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5a40 size=1600 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5a40ULL || rel >= 0x3d6080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6080 size=1536 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d6080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6080ULL || rel >= 0x3d6680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6680 size=1376 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d6680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6680ULL || rel >= 0x3d6be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6be0 size=1488 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d6be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6be0ULL || rel >= 0x3d71b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d71b0 size=1472 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d71b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d71b0ULL || rel >= 0x3d7770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7770 size=1552 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d7770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7770ULL || rel >= 0x3d7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7d80 size=1392 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d7d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7d80ULL || rel >= 0x3d82f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d82f0 size=1520 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d82f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d82f0ULL || rel >= 0x3d88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d88e0 size=1488 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d88e0ULL || rel >= 0x3d8eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8eb0 size=800 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d8eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8eb0ULL || rel >= 0x3d91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d91d0 size=624 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d91d0ULL || rel >= 0x3d9440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9440 size=768 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d9440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9440ULL || rel >= 0x3d9740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9740 size=736 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d9740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9740ULL || rel >= 0x3d9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9a20 size=832 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9a20ULL || rel >= 0x3d9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9d60 size=656 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d9d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9d60ULL || rel >= 0x3d9ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9ff0 size=784 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3d9ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9ff0ULL || rel >= 0x3da300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da300 size=752 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_3da300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da300ULL || rel >= 0x3da5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da5f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_426be0
*/
void sub_3da5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da5f0ULL || rel >= 0x3da650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da650 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a000
*/
void sub_3da650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da650ULL || rel >= 0x3da6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da6b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a000
*/
void sub_3da6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da6b0ULL || rel >= 0x3da710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da710 size=688 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3da710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da710ULL || rel >= 0x3da9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da9c0 size=3920 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3da9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da9c0ULL || rel >= 0x3db910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003db910 size=12880 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3db910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3db910ULL || rel >= 0x3deb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003deb60 size=400 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3deb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3deb60ULL || rel >= 0x3decf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003decf0 size=80 callers=0 calls=2
   calls: sub_393430, sub_428a60
*/
void sub_3decf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3decf0ULL || rel >= 0x3ded40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ded40 size=80 callers=0 calls=2
   calls: sub_393430, sub_428a60
*/
void sub_3ded40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ded40ULL || rel >= 0x3ded90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ded90 size=288 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3ded90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ded90ULL || rel >= 0x3deeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003deeb0 size=224 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3deeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3deeb0ULL || rel >= 0x3def90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003def90 size=256 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3def90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3def90ULL || rel >= 0x3df090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df090 size=592 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3df090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df090ULL || rel >= 0x3df2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df2e0 size=3248 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3df2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df2e0ULL || rel >= 0x3dff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dff90 size=304 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3dff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dff90ULL || rel >= 0x3e00c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e00c0 size=544 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3e00c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e00c0ULL || rel >= 0x3e02e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e02e0 size=752 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3e02e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e02e0ULL || rel >= 0x3e05d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e05d0 size=960 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3e05d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e05d0ULL || rel >= 0x3e0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0990 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428650
*/
void sub_3e0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0990ULL || rel >= 0x3e0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0a00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4286f0
*/
void sub_3e0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0a00ULL || rel >= 0x3e0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0a80 size=384 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3e0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0a80ULL || rel >= 0x3e0c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0c00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_3e0c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0c00ULL || rel >= 0x3e0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0c80 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_427970
*/
void sub_3e0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0c80ULL || rel >= 0x3e0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0cd0 size=304 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3e0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0cd0ULL || rel >= 0x3e0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0e00 size=1168 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_393740, sub_426860
*/
void sub_3e0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0e00ULL || rel >= 0x3e1290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1290 size=1072 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e1290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1290ULL || rel >= 0x3e16c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e16c0 size=944 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e16c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e16c0ULL || rel >= 0x3e1a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1a70 size=912 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_393740, sub_426860
*/
void sub_3e1a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1a70ULL || rel >= 0x3e1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1e00 size=848 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e1e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1e00ULL || rel >= 0x3e2150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2150 size=752 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e2150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2150ULL || rel >= 0x3e2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2440 size=672 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_393740, sub_426860
*/
void sub_3e2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2440ULL || rel >= 0x3e26e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e26e0 size=624 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e26e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e26e0ULL || rel >= 0x3e2950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2950 size=560 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e2950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2950ULL || rel >= 0x3e2b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2b80 size=400 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_393740, sub_426860
*/
void sub_3e2b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2b80ULL || rel >= 0x3e2d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2d10 size=384 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e2d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2d10ULL || rel >= 0x3e2e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2e90 size=336 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e2e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2e90ULL || rel >= 0x3e2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2fe0 size=1120 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2fe0ULL || rel >= 0x3e3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3440 size=864 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3440ULL || rel >= 0x3e37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e37a0 size=608 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e37a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e37a0ULL || rel >= 0x3e3a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3a00 size=352 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e3a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3a00ULL || rel >= 0x3e3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3b60 size=304 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e3b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3b60ULL || rel >= 0x3e3c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3c90 size=736 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3e3c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3c90ULL || rel >= 0x3e3f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3f70 size=1008 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3e3f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3f70ULL || rel >= 0x3e4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4360 size=1792 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3e4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4360ULL || rel >= 0x3e4a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4a60 size=1296 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3e4a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4a60ULL || rel >= 0x3e4f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4f70 size=2432 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3e4f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4f70ULL || rel >= 0x3e58f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e58f0 size=400 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e58f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e58f0ULL || rel >= 0x3e5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5a80 size=608 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5a80ULL || rel >= 0x3e5ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5ce0 size=800 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e5ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5ce0ULL || rel >= 0x3e6000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6000 size=992 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e6000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6000ULL || rel >= 0x3e63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e63e0 size=784 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e63e0ULL || rel >= 0x3e66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e66f0 size=672 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e66f0ULL || rel >= 0x3e6990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6990 size=1040 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e6990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6990ULL || rel >= 0x3e6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6da0 size=1424 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6da0ULL || rel >= 0x3e7330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7330 size=736 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3e7330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7330ULL || rel >= 0x3e7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7610 size=1792 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7610ULL || rel >= 0x3e7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7d10 size=1088 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7d10ULL || rel >= 0x3e8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8150 size=928 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e8150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8150ULL || rel >= 0x3e84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e84f0 size=1488 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e84f0ULL || rel >= 0x3e8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8ac0 size=2032 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e8ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8ac0ULL || rel >= 0x3e92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e92b0 size=1008 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3e92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e92b0ULL || rel >= 0x3e96a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e96a0 size=1872 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3e96a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e96a0ULL || rel >= 0x3e9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9df0 size=2688 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3e9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9df0ULL || rel >= 0x3ea870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea870 size=1392 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3ea870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea870ULL || rel >= 0x3eade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eade0 size=1168 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3eade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eade0ULL || rel >= 0x3eb270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb270 size=1920 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3eb270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb270ULL || rel >= 0x3eb9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb9f0 size=2720 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3eb9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb9f0ULL || rel >= 0x3ec490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec490 size=1280 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3ec490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec490ULL || rel >= 0x3ec990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec990 size=2448 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3ec990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec990ULL || rel >= 0x3ed320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ed320 size=3424 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3ed320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ed320ULL || rel >= 0x3ee080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee080 size=64 callers=0 calls=2
   calls: sub_393740, sub_43a0f0
*/
void sub_3ee080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee080ULL || rel >= 0x3ee0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee0c0 size=64 callers=0 calls=2
   calls: sub_393740, sub_43a0f0
*/
void sub_3ee0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee0c0ULL || rel >= 0x3ee100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee100 size=64 callers=0 calls=2
   calls: sub_393740, sub_43a0f0
*/
void sub_3ee100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee100ULL || rel >= 0x3ee140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee140 size=64 callers=0 calls=2
   calls: sub_393740, sub_43a0f0
*/
void sub_3ee140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee140ULL || rel >= 0x3ee180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee180 size=64 callers=0 calls=2
   calls: sub_393740, sub_43a0f0
*/
void sub_3ee180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee180ULL || rel >= 0x3ee1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee1c0 size=576 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3ee1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee1c0ULL || rel >= 0x3ee400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee400 size=768 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3ee400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee400ULL || rel >= 0x3ee700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee700 size=960 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3ee700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee700ULL || rel >= 0x3eeac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eeac0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a00
*/
void sub_3eeac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eeac0ULL || rel >= 0x3eeb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eeb20 size=368 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3eeb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eeb20ULL || rel >= 0x3eec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eec90 size=368 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3eec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eec90ULL || rel >= 0x3eee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eee00 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3eee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eee00ULL || rel >= 0x3eef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eef60 size=368 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3eef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eef60ULL || rel >= 0x3ef0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef0d0 size=672 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3ef0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef0d0ULL || rel >= 0x3ef370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef370 size=736 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3ef370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef370ULL || rel >= 0x3ef650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef650 size=592 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3ef650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef650ULL || rel >= 0x3ef8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef8a0 size=640 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3ef8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef8a0ULL || rel >= 0x3efb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efb20 size=176 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3efb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efb20ULL || rel >= 0x3efbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efbd0 size=208 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3efbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efbd0ULL || rel >= 0x3efca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efca0 size=384 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3efca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efca0ULL || rel >= 0x3efe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe20 size=464 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3efe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe20ULL || rel >= 0x3efff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efff0 size=2256 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3efff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efff0ULL || rel >= 0x3f08c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f08c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_427a70
*/
void sub_3f08c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f08c0ULL || rel >= 0x3f0910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0910 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_3f0910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0910ULL || rel >= 0x3f0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0990 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426d60
*/
void sub_3f0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0990ULL || rel >= 0x3f0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0a10 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426eb0
*/
void sub_3f0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0a10ULL || rel >= 0x3f0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0a90 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_427080
*/
void sub_3f0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0a90ULL || rel >= 0x3f0b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0b10 size=1008 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3f0b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0b10ULL || rel >= 0x3f0f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0f00 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f0f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0f00ULL || rel >= 0x3f0f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0f60 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f0f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0f60ULL || rel >= 0x3f0fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0fc0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f0fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0fc0ULL || rel >= 0x3f1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1020 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f1020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1020ULL || rel >= 0x3f1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1080 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1080ULL || rel >= 0x3f10e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f10e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f10e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f10e0ULL || rel >= 0x3f1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1140 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1140ULL || rel >= 0x3f11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f11a0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f11a0ULL || rel >= 0x3f1200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1200 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f1200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1200ULL || rel >= 0x3f1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1260 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1260ULL || rel >= 0x3f12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f12c0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f12c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f12c0ULL || rel >= 0x3f1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1320 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a100
*/
void sub_3f1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1320ULL || rel >= 0x3f1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1380 size=144 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3f1380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1380ULL || rel >= 0x3f1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1410 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_3f1410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1410ULL || rel >= 0x3f1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1460 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4288b0
*/
void sub_3f1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1460ULL || rel >= 0x3f14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f14d0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_428960
*/
void sub_3f14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f14d0ULL || rel >= 0x3f1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1550 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4288b0
*/
void sub_3f1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1550ULL || rel >= 0x3f15c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f15c0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_428960
*/
void sub_3f15c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f15c0ULL || rel >= 0x3f1640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1640 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4288b0
*/
void sub_3f1640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1640ULL || rel >= 0x3f16b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f16b0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_428960
*/
void sub_3f16b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f16b0ULL || rel >= 0x3f1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1730 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4288b0
*/
void sub_3f1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1730ULL || rel >= 0x3f17a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f17a0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_428960
*/
void sub_3f17a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f17a0ULL || rel >= 0x3f1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1820 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4288b0
*/
void sub_3f1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1820ULL || rel >= 0x3f1890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1890 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_428960
*/
void sub_3f1890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1890ULL || rel >= 0x3f1910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1910 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4288b0
*/
void sub_3f1910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1910ULL || rel >= 0x3f1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1980 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_428960
*/
void sub_3f1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1980ULL || rel >= 0x3f1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1a00 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a1a0
*/
void sub_3f1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1a00ULL || rel >= 0x3f1a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1a60 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a470
*/
void sub_3f1a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1a60ULL || rel >= 0x3f1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1ac0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a940
*/
void sub_3f1ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1ac0ULL || rel >= 0x3f1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1b20 size=96 callers=0 calls=2
   calls: sub_393430, sub_43af90
*/
void sub_3f1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1b20ULL || rel >= 0x3f1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1b80 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43b760
*/
void sub_3f1b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1b80ULL || rel >= 0x3f1c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1c00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43ba00
*/
void sub_3f1c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1c00ULL || rel >= 0x3f1c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1c80 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43bbf0
*/
void sub_3f1c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1c80ULL || rel >= 0x3f1d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1d00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43c090
*/
void sub_3f1d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1d00ULL || rel >= 0x3f1d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1d80 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43c480
*/
void sub_3f1d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1d80ULL || rel >= 0x3f1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1e00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43ca80
*/
void sub_3f1e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1e00ULL || rel >= 0x3f1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1e80 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43cfd0
*/
void sub_3f1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1e80ULL || rel >= 0x3f1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1f00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43d740
*/
void sub_3f1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1f00ULL || rel >= 0x3f1f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1f80 size=96 callers=0 calls=2
   calls: sub_393430, sub_43de00
*/
void sub_3f1f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1f80ULL || rel >= 0x3f1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1fe0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43e0b0
*/
void sub_3f1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1fe0ULL || rel >= 0x3f2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2060 size=96 callers=0 calls=2
   calls: sub_393430, sub_43e2b0
*/
void sub_3f2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2060ULL || rel >= 0x3f20c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f20c0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43e770
*/
void sub_3f20c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f20c0ULL || rel >= 0x3f2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2140 size=96 callers=0 calls=2
   calls: sub_393430, sub_43eb80
*/
void sub_3f2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2140ULL || rel >= 0x3f21a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f21a0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43f1c0
*/
void sub_3f21a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f21a0ULL || rel >= 0x3f2220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2220 size=96 callers=0 calls=2
   calls: sub_393430, sub_43f750
*/
void sub_3f2220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2220ULL || rel >= 0x3f2280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2280 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43ff10
*/
void sub_3f2280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2280ULL || rel >= 0x3f2300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2300 size=736 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3f2300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2300ULL || rel >= 0x3f25e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f25e0 size=1280 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3f25e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f25e0ULL || rel >= 0x3f2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2ae0 size=1696 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3f2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2ae0ULL || rel >= 0x3f3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3180 size=2096 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3f3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3180ULL || rel >= 0x3f39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f39b0 size=720 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f39b0ULL || rel >= 0x3f3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3c80 size=528 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3c80ULL || rel >= 0x3f3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3e90 size=1232 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3e90ULL || rel >= 0x3f4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4360 size=1056 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4360ULL || rel >= 0x3f4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4780 size=1632 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4780ULL || rel >= 0x3f4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4de0 size=1424 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f4de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4de0ULL || rel >= 0x3f5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5370 size=2032 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5370ULL || rel >= 0x3f5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5b60 size=1824 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5b60ULL || rel >= 0x3f6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f6280 size=720 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3f6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6280ULL || rel >= 0x3f6550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f6550 size=544 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f6550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6550ULL || rel >= 0x3f6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f6770 size=1248 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3f6770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6770ULL || rel >= 0x3f6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f6c50 size=1088 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6c50ULL || rel >= 0x3f7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7090 size=1664 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3f7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7090ULL || rel >= 0x3f7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7710 size=1488 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7710ULL || rel >= 0x3f7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7ce0 size=2080 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3f7ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7ce0ULL || rel >= 0x3f8500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8500 size=1904 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f8500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8500ULL || rel >= 0x3f8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8c70 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a1a0
*/
void sub_3f8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8c70ULL || rel >= 0x3f8cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8cd0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a470
*/
void sub_3f8cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8cd0ULL || rel >= 0x3f8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8d30 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a940
*/
void sub_3f8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8d30ULL || rel >= 0x3f8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8d90 size=96 callers=0 calls=2
   calls: sub_393430, sub_43af90
*/
void sub_3f8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8d90ULL || rel >= 0x3f8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8df0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43b760
*/
void sub_3f8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8df0ULL || rel >= 0x3f8e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8e70 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43ba00
*/
void sub_3f8e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8e70ULL || rel >= 0x3f8ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8ef0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43bbf0
*/
void sub_3f8ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8ef0ULL || rel >= 0x3f8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8f70 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43c090
*/
void sub_3f8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8f70ULL || rel >= 0x3f8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8ff0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43c480
*/
void sub_3f8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8ff0ULL || rel >= 0x3f9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9070 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43ca80
*/
void sub_3f9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9070ULL || rel >= 0x3f90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f90f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43cfd0
*/
void sub_3f90f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f90f0ULL || rel >= 0x3f9170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9170 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43d740
*/
void sub_3f9170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9170ULL || rel >= 0x3f91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f91f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43de00
*/
void sub_3f91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f91f0ULL || rel >= 0x3f9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9250 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43e0b0
*/
void sub_3f9250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9250ULL || rel >= 0x3f92d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f92d0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43e2b0
*/
void sub_3f92d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f92d0ULL || rel >= 0x3f9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9330 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43e770
*/
void sub_3f9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9330ULL || rel >= 0x3f93b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f93b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43eb80
*/
void sub_3f93b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f93b0ULL || rel >= 0x3f9410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9410 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43f1c0
*/
void sub_3f9410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9410ULL || rel >= 0x3f9490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9490 size=96 callers=0 calls=2
   calls: sub_393430, sub_43f750
*/
void sub_3f9490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9490ULL || rel >= 0x3f94f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f94f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43ff10
*/
void sub_3f94f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f94f0ULL || rel >= 0x3f9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9570 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a1a0
*/
void sub_3f9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9570ULL || rel >= 0x3f95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f95d0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a470
*/
void sub_3f95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f95d0ULL || rel >= 0x3f9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9630 size=96 callers=0 calls=2
   calls: sub_393430, sub_43a940
*/
void sub_3f9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9630ULL || rel >= 0x3f9690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9690 size=96 callers=0 calls=2
   calls: sub_393430, sub_43af90
*/
void sub_3f9690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9690ULL || rel >= 0x3f96f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f96f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43b760
*/
void sub_3f96f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f96f0ULL || rel >= 0x3f9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9770 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43ba00
*/
void sub_3f9770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9770ULL || rel >= 0x3f97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f97f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43bbf0
*/
void sub_3f97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f97f0ULL || rel >= 0x3f9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9870 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43c090
*/
void sub_3f9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9870ULL || rel >= 0x3f98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f98f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43c480
*/
void sub_3f98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f98f0ULL || rel >= 0x3f9970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9970 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43ca80
*/
void sub_3f9970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9970ULL || rel >= 0x3f99f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f99f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43cfd0
*/
void sub_3f99f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f99f0ULL || rel >= 0x3f9a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9a70 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43d740
*/
void sub_3f9a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9a70ULL || rel >= 0x3f9af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9af0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43de00
*/
void sub_3f9af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9af0ULL || rel >= 0x3f9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9b50 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43e0b0
*/
void sub_3f9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9b50ULL || rel >= 0x3f9bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9bd0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43e2b0
*/
void sub_3f9bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9bd0ULL || rel >= 0x3f9c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9c30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43e770
*/
void sub_3f9c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9c30ULL || rel >= 0x3f9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9cb0 size=96 callers=0 calls=2
   calls: sub_393430, sub_43eb80
*/
void sub_3f9cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9cb0ULL || rel >= 0x3f9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9d10 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43f1c0
*/
void sub_3f9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9d10ULL || rel >= 0x3f9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9d90 size=96 callers=0 calls=2
   calls: sub_393430, sub_43f750
*/
void sub_3f9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9d90ULL || rel >= 0x3f9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9df0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_43ff10
*/
void sub_3f9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9df0ULL || rel >= 0x3f9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9e70 size=160 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3f9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9e70ULL || rel >= 0x3f9f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9f10 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_440620
*/
void sub_3f9f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9f10ULL || rel >= 0x3f9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9f90 size=384 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3f9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9f90ULL || rel >= 0x3fa110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa110 size=752 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_393740, sub_426860
*/
void sub_3fa110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa110ULL || rel >= 0x3fa400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa400 size=608 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_393740, sub_426860
*/
void sub_3fa400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa400ULL || rel >= 0x3fa660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa660 size=464 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_393740, sub_426860
*/
void sub_3fa660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa660ULL || rel >= 0x3fa830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa830 size=304 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_393740, sub_426860
*/
void sub_3fa830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa830ULL || rel >= 0x3fa960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa960 size=736 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3fa960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa960ULL || rel >= 0x3fac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fac40 size=608 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3fac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fac40ULL || rel >= 0x3faea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003faea0 size=464 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3faea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3faea0ULL || rel >= 0x3fb070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb070 size=208 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3fb070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb070ULL || rel >= 0x3fb140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb140 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_3fb140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb140ULL || rel >= 0x3fb1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb1b0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_427970
*/
void sub_3fb1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb1b0ULL || rel >= 0x3fb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb200 size=96 callers=0 calls=3
   calls: sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3fb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb200ULL || rel >= 0x3fb260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb260 size=208 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3fb260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb260ULL || rel >= 0x3fb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb330 size=288 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3fb330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb330ULL || rel >= 0x3fb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb450 size=336 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_2fb460, sub_3936f0, sub_426860
*/
void sub_3fb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb450ULL || rel >= 0x3fb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb5a0 size=288 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3fb5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb5a0ULL || rel >= 0x3fb6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb6c0 size=304 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3fb6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb6c0ULL || rel >= 0x3fb7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb7f0 size=208 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3fb7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb7f0ULL || rel >= 0x3fb8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb8c0 size=304 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3fb8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb8c0ULL || rel >= 0x3fb9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb9f0 size=400 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3fb9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb9f0ULL || rel >= 0x3fbb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbb80 size=368 callers=0 calls=6
   calls: atomicCompSwap, sub_2fade0, sub_2fb460, sub_393430, sub_3936f0, sub_426860
*/
void sub_3fbb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbb80ULL || rel >= 0x3fbcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbcf0 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3fbcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbcf0ULL || rel >= 0x3fbe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbe50 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_3fbe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbe50ULL || rel >= 0x3fbea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbea0 size=192 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3fbea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbea0ULL || rel >= 0x3fbf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbf60 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3fbf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbf60ULL || rel >= 0x3fc000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc000 size=208 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3fc000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc000ULL || rel >= 0x3fc0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc0d0 size=272 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3fc0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc0d0ULL || rel >= 0x3fc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc1e0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_3fc1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc1e0ULL || rel >= 0x3fc250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc250 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4278d0
*/
void sub_3fc250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc250ULL || rel >= 0x3fc2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc2c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_427970
*/
void sub_3fc2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc2c0ULL || rel >= 0x3fc310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc310 size=320 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3fc310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc310ULL || rel >= 0x3fc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc450 size=416 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3fc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc450ULL || rel >= 0x3fc5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc5f0 size=416 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3fc5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc5f0ULL || rel >= 0x3fc790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc790 size=400 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3fc790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc790ULL || rel >= 0x3fc920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc920 size=448 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3fc920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc920ULL || rel >= 0x3fcae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcae0 size=384 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3fcae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcae0ULL || rel >= 0x3fcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcc60 size=1312 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3fcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcc60ULL || rel >= 0x3fd180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd180 size=1344 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3fd180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd180ULL || rel >= 0x3fd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd6c0 size=1376 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3fd6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd6c0ULL || rel >= 0x3fdc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdc20 size=1392 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3fdc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdc20ULL || rel >= 0x3fe190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe190 size=1168 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3fe190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe190ULL || rel >= 0x3fe620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe620 size=1344 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3fe620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe620ULL || rel >= 0x3feb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003feb60 size=144 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3feb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3feb60ULL || rel >= 0x3febf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003febf0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_3febf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3febf0ULL || rel >= 0x3fec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fec70 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4278d0
*/
void sub_3fec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fec70ULL || rel >= 0x3fece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

