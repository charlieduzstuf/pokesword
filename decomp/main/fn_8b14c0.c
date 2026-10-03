/* main functions 008b14c0..008c4030 (68 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 008b14c0 size=16 callers=0 calls=0
*/
void sub_8b14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b14c0ULL || rel >= 0x8b14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b14d0 size=16 callers=0 calls=0
*/
void sub_8b14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b14d0ULL || rel >= 0x8b14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b14e0 size=528 callers=1 calls=4
   calls: sub_136b8b0, sub_783bd0, sub_785110, sub_7cd960
*/
void sub_8b14e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b14e0ULL || rel >= 0x8b16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b16f0 size=112 callers=1 calls=0
*/
void sub_8b16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b16f0ULL || rel >= 0x8b1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1760 size=16 callers=0 calls=0
*/
void sub_8b1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1760ULL || rel >= 0x8b1770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1770 size=16 callers=0 calls=0
*/
void sub_8b1770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1770ULL || rel >= 0x8b1780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1780 size=16 callers=0 calls=0
*/
void sub_8b1780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1780ULL || rel >= 0x8b1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1790 size=16 callers=0 calls=0
*/
void sub_8b1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1790ULL || rel >= 0x8b17a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b17a0 size=480 callers=1 calls=4
   calls: sub_5e2350, sub_6d04c0, sub_6d70e0, sub_899e80
*/
void sub_8b17a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b17a0ULL || rel >= 0x8b1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1980 size=496 callers=0 calls=3
   calls: sub_6d0670, sub_89a0f0, sub_8b2540
*/
void sub_8b1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1980ULL || rel >= 0x8b1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1b70 size=16 callers=0 calls=0
*/
void sub_8b1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1b70ULL || rel >= 0x8b1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1b80 size=240 callers=0 calls=0
*/
void sub_8b1b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1b80ULL || rel >= 0x8b1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1c70 size=32 callers=0 calls=0
*/
void sub_8b1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1c70ULL || rel >= 0x8b1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1c90 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_8b1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1c90ULL || rel >= 0x8b1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1cf0 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_8b1cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1cf0ULL || rel >= 0x8b1d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1d80 size=368 callers=0 calls=2
   calls: sub_6ae9d0, sub_89a310
*/
void sub_8b1d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1d80ULL || rel >= 0x8b1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1ef0 size=384 callers=0 calls=3
   calls: sub_6ae9d0, sub_6d7e60, sub_89a310
*/
void sub_8b1ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1ef0ULL || rel >= 0x8b2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2070 size=464 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7aa0, sub_6d7e60, sub_89a310
*/
void sub_8b2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2070ULL || rel >= 0x8b2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2240 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_8b2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2240ULL || rel >= 0x8b22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b22f0 size=16 callers=0 calls=0
*/
void sub_8b22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b22f0ULL || rel >= 0x8b2300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2300 size=16 callers=0 calls=0
*/
void sub_8b2300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2300ULL || rel >= 0x8b2310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2310 size=16 callers=0 calls=0
*/
void sub_8b2310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2310ULL || rel >= 0x8b2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2320 size=16 callers=0 calls=0
*/
void sub_8b2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2320ULL || rel >= 0x8b2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2330 size=16 callers=0 calls=0
*/
void sub_8b2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2330ULL || rel >= 0x8b2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2340 size=16 callers=0 calls=0
*/
void sub_8b2340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2340ULL || rel >= 0x8b2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2350 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_8b2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2350ULL || rel >= 0x8b23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b23b0 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_8b23b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b23b0ULL || rel >= 0x8b2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2440 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_8b2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2440ULL || rel >= 0x8b24f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b24f0 size=16 callers=0 calls=0
*/
void sub_8b24f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b24f0ULL || rel >= 0x8b2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2500 size=16 callers=0 calls=0
*/
void sub_8b2500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2500ULL || rel >= 0x8b2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2510 size=16 callers=0 calls=0
*/
void sub_8b2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2510ULL || rel >= 0x8b2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2520 size=32 callers=0 calls=0
*/
void sub_8b2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2520ULL || rel >= 0x8b2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2540 size=208 callers=3 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_8b2540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2540ULL || rel >= 0x8b2610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2610 size=80 callers=0 calls=1
   calls: sub_6d12e0
*/
void sub_8b2610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2610ULL || rel >= 0x8b2660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2660 size=16 callers=0 calls=0
*/
void sub_8b2660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2660ULL || rel >= 0x8b2670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2670 size=16 callers=0 calls=0
*/
void sub_8b2670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2670ULL || rel >= 0x8b2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2680 size=16 callers=0 calls=0
*/
void sub_8b2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2680ULL || rel >= 0x8b2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2690 size=128 callers=0 calls=4
   calls: sub_6d7ac0, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_8b2690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2690ULL || rel >= 0x8b2710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2710 size=16 callers=0 calls=0
*/
void sub_8b2710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2710ULL || rel >= 0x8b2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2720 size=32 callers=0 calls=0
*/
void sub_8b2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2720ULL || rel >= 0x8b2740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2740 size=32 callers=0 calls=0
*/
void sub_8b2740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2740ULL || rel >= 0x8b2760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2760 size=224 callers=0 calls=5
   calls: sub_6d7aa0, sub_6d7d80, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_8b2760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2760ULL || rel >= 0x8b2840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2840 size=16 callers=0 calls=0
*/
void sub_8b2840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2840ULL || rel >= 0x8b2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2850 size=32 callers=0 calls=0
*/
void sub_8b2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2850ULL || rel >= 0x8b2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2870 size=32 callers=0 calls=0
*/
void sub_8b2870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2870ULL || rel >= 0x8b2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2890 size=240 callers=1 calls=1
   calls: sub_8bf520
*/
void sub_8b2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2890ULL || rel >= 0x8b2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2980 size=544 callers=8 calls=2
   calls: sub_5e2350, sub_89b480
*/
void sub_8b2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2980ULL || rel >= 0x8b2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2ba0 size=80 callers=0 calls=0
*/
void sub_8b2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2ba0ULL || rel >= 0x8b2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2bf0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_8b2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2bf0ULL || rel >= 0x8b2c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2c60 size=16 callers=0 calls=0
*/
void sub_8b2c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2c60ULL || rel >= 0x8b2c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2c70 size=48 callers=0 calls=0
*/
void sub_8b2c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2c70ULL || rel >= 0x8b2ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2ca0 size=64 callers=0 calls=0
*/
void sub_8b2ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2ca0ULL || rel >= 0x8b2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2ce0 size=80 callers=0 calls=0
*/
void sub_8b2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2ce0ULL || rel >= 0x8b2d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2d30 size=80 callers=0 calls=0
*/
void sub_8b2d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2d30ULL || rel >= 0x8b2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2d80 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_8b2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2d80ULL || rel >= 0x8b2df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2df0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_8b2df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2df0ULL || rel >= 0x8b2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2e60 size=80 callers=0 calls=0
*/
void sub_8b2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2e60ULL || rel >= 0x8b2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2eb0 size=80 callers=0 calls=0
*/
void sub_8b2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2eb0ULL || rel >= 0x8b2f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2f00 size=160 callers=0 calls=0
*/
void sub_8b2f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2f00ULL || rel >= 0x8b2fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b2fa0 size=416 callers=0 calls=5
   calls: gflnet3_message_lite_2, sub_65da00, sub_65daf0, sub_8b9c20, sub_8ba890
*/
void sub_8b2fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b2fa0ULL || rel >= 0x8b3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3140 size=160 callers=0 calls=0
*/
void sub_8b3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3140ULL || rel >= 0x8b31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b31e0 size=160 callers=0 calls=0
*/
void sub_8b31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b31e0ULL || rel >= 0x8b3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3280 size=160 callers=0 calls=0
*/
void sub_8b3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3280ULL || rel >= 0x8b3320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3320 size=160 callers=0 calls=0
*/
void sub_8b3320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3320ULL || rel >= 0x8b33c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b33c0 size=160 callers=0 calls=0
*/
void sub_8b33c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b33c0ULL || rel >= 0x8b3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3460 size=752 callers=0 calls=12
   calls: battle_watch_seq_5, battle_watch_timer_5, battle_watch_winlose_5, gflnet3_message_lite_2, sub_65da00, sub_65daf0, sub_8b5050, sub_8b6920, sub_8b8580, sub_8b92a0, sub_8bb4e0, sub_8bdeb0
*/
void sub_8b3460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3460ULL || rel >= 0x8b3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3750 size=160 callers=0 calls=0
*/
void sub_8b3750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3750ULL || rel >= 0x8b37f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b37f0 size=160 callers=0 calls=0
*/
void sub_8b37f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b37f0ULL || rel >= 0x8b3890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3890 size=160 callers=0 calls=0
*/
void sub_8b3890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3890ULL || rel >= 0x8b3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3930 size=160 callers=0 calls=0
*/
void sub_8b3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3930ULL || rel >= 0x8b39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b39d0 size=320 callers=1 calls=0
*/
void sub_8b39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b39d0ULL || rel >= 0x8b3b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3b10 size=288 callers=2 calls=3
   calls: sub_65da00, sub_65daf0, sub_8b3c30
*/
void sub_8b3b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3b10ULL || rel >= 0x8b3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3c30 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_8b3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3c30ULL || rel >= 0x8b3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3da0 size=240 callers=3 calls=3
   calls: sub_6d7d80, sub_89a0f0, sub_8b2540
*/
void sub_8b3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3da0ULL || rel >= 0x8b3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3e90 size=288 callers=8 calls=3
   calls: sub_65da00, sub_65daf0, sub_8b40e0
*/
void sub_8b3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3e90ULL || rel >= 0x8b3fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b3fb0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8bb4e0, sub_8bb9b0, sub_8bce00, sub_8bd5b0, sub_c70
*/
void sub_8b3fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b3fb0ULL || rel >= 0x8b40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b40e0 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_8b40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b40e0ULL || rel >= 0x8b4250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4250 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8bb4e0, sub_8bb9b0, sub_8bda80, sub_8bf400, sub_c70
*/
void sub_8b4250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4250ULL || rel >= 0x8b4380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4380 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8b4e00, sub_8b5550, sub_8bb4e0, sub_8bb9b0, sub_c70
*/
void sub_8b4380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4380ULL || rel >= 0x8b44b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b44b0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8b9050, sub_8b97a0, sub_8bb4e0, sub_8bb9b0, sub_c70
*/
void sub_8b44b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b44b0ULL || rel >= 0x8b45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b45e0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8b66b0, sub_8b71a0, sub_8bb4e0, sub_8bb9b0, sub_c70
*/
void sub_8b45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b45e0ULL || rel >= 0x8b4710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4710 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8b5a40, sub_8b61f0, sub_8bb4e0, sub_8bb9b0, sub_c70
*/
void sub_8b4710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4710ULL || rel >= 0x8b4840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4840 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8b8340, sub_8b8bf0, sub_8bb4e0, sub_8bb9b0, sub_c70
*/
void sub_8b4840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4840ULL || rel >= 0x8b4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4970 size=288 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8b76c0, sub_8b7e70, sub_8bb4e0, sub_8bb9b0, sub_c70
*/
void sub_8b4970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4970ULL || rel >= 0x8b4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4a90 size=128 callers=0 calls=0
*/
void sub_8b4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4a90ULL || rel >= 0x8b4b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4b10 size=256 callers=0 calls=9
   calls: battle_watch_party_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: watch_party.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_party(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4b10ULL || rel >= 0x8b4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4c10 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: watch_party.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_party_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4c10ULL || rel >= 0x8b4d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4d20 size=80 callers=0 calls=0
*/
void sub_8b4d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4d20ULL || rel >= 0x8b4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4d70 size=144 callers=0 calls=4
   calls: battle_watch_party_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8b4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4d70ULL || rel >= 0x8b4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4e00 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8b4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4e00ULL || rel >= 0x8b4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4ea0 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_party_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4ea0ULL || rel >= 0x8b4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4f00 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4f00ULL || rel >= 0x8b4fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b4fa0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b4fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b4fa0ULL || rel >= 0x8b5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5040 size=16 callers=0 calls=0
*/
void sub_8b5040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5040ULL || rel >= 0x8b5050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5050 size=64 callers=3 calls=1
   calls: battle_watch_party_2
*/
void sub_8b5050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5050ULL || rel >= 0x8b5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5090 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_8b5150, sub_c70
*/
void sub_8b5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5090ULL || rel >= 0x8b5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5150 size=32 callers=1 calls=0
*/
void sub_8b5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5150ULL || rel >= 0x8b5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5170 size=64 callers=0 calls=0
*/
void sub_8b5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5170ULL || rel >= 0x8b51b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b51b0 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_8b51b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b51b0ULL || rel >= 0x8b52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b52e0 size=48 callers=0 calls=0
*/
void sub_8b52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b52e0ULL || rel >= 0x8b5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5310 size=64 callers=0 calls=0
*/
void sub_8b5310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5310ULL || rel >= 0x8b5350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5350 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8b5350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5350ULL || rel >= 0x8b53f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b53f0 size=272 callers=0 calls=2
   calls: battle_watch_party_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_party_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b53f0ULL || rel >= 0x8b5500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5500 size=80 callers=0 calls=0
*/
void sub_8b5500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5500ULL || rel >= 0x8b5550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5550 size=112 callers=1 calls=0
*/
void sub_8b5550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5550ULL || rel >= 0x8b55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b55c0 size=16 callers=0 calls=0
*/
void sub_8b55c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b55c0ULL || rel >= 0x8b55d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b55d0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8b55d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b55d0ULL || rel >= 0x8b5640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5640 size=16 callers=0 calls=0
*/
void sub_8b5640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5640ULL || rel >= 0x8b5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5650 size=32 callers=0 calls=0
*/
void sub_8b5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5650ULL || rel >= 0x8b5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5670 size=16 callers=0 calls=0
*/
void sub_8b5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5670ULL || rel >= 0x8b5680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5680 size=16 callers=0 calls=0
*/
void sub_8b5680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5680ULL || rel >= 0x8b5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5690 size=16 callers=0 calls=0
*/
void sub_8b5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5690ULL || rel >= 0x8b56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b56a0 size=384 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: CHECK failed: file != NULL: 
   ref: watch_timer.proto
*/
void battle_watch_timer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b56a0ULL || rel >= 0x8b5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5820 size=176 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_timer.proto
*/
void battle_watch_timer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5820ULL || rel >= 0x8b58d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b58d0 size=80 callers=0 calls=0
*/
void sub_8b58d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b58d0ULL || rel >= 0x8b5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5920 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_timer.proto
*/
void battle_watch_timer_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5920ULL || rel >= 0x8b5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5a40 size=32 callers=4 calls=0
*/
void sub_8b5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5a40ULL || rel >= 0x8b5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5a60 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_timer_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5a60ULL || rel >= 0x8b5aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5aa0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b5aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5aa0ULL || rel >= 0x8b5b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5b00 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b5b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5b00ULL || rel >= 0x8b5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5b60 size=16 callers=0 calls=0
*/
void sub_8b5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5b60ULL || rel >= 0x8b5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5b70 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_timer.proto
*/
void battle_watch_timer_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5b70ULL || rel >= 0x8b5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5c40 size=96 callers=0 calls=2
   calls: sub_8b5ca0, sub_c70
*/
void sub_8b5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5c40ULL || rel >= 0x8b5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5ca0 size=32 callers=1 calls=0
*/
void sub_8b5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5ca0ULL || rel >= 0x8b5cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5cc0 size=16 callers=0 calls=0
*/
void sub_8b5cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5cc0ULL || rel >= 0x8b5cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5cd0 size=512 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_8b5cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5cd0ULL || rel >= 0x8b5ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5ed0 size=80 callers=0 calls=1
   calls: sub_713860
*/
void sub_8b5ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5ed0ULL || rel >= 0x8b5f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5f20 size=128 callers=0 calls=0
*/
void sub_8b5f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5f20ULL || rel >= 0x8b5fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b5fa0 size=128 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8b5fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b5fa0ULL || rel >= 0x8b6020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6020 size=384 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_timer.proto
*/
void battle_watch_timer_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6020ULL || rel >= 0x8b61a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b61a0 size=80 callers=0 calls=0
*/
void sub_8b61a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b61a0ULL || rel >= 0x8b61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b61f0 size=80 callers=1 calls=0
*/
void sub_8b61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b61f0ULL || rel >= 0x8b6240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6240 size=16 callers=0 calls=0
*/
void sub_8b6240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6240ULL || rel >= 0x8b6250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6250 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8b6250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6250ULL || rel >= 0x8b62c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b62c0 size=16 callers=0 calls=0
*/
void sub_8b62c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b62c0ULL || rel >= 0x8b62d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b62d0 size=32 callers=0 calls=0
*/
void sub_8b62d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b62d0ULL || rel >= 0x8b62f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b62f0 size=16 callers=0 calls=0
*/
void sub_8b62f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b62f0ULL || rel >= 0x8b6300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6300 size=16 callers=0 calls=0
*/
void sub_8b6300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6300ULL || rel >= 0x8b6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6310 size=176 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_timer.proto
*/
void battle_watch_timer_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6310ULL || rel >= 0x8b63c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b63c0 size=256 callers=0 calls=9
   calls: battle_watch_command_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: watch_command.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_command(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b63c0ULL || rel >= 0x8b64c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b64c0 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: watch_command.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_command_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b64c0ULL || rel >= 0x8b65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b65d0 size=80 callers=0 calls=0
*/
void sub_8b65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b65d0ULL || rel >= 0x8b6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6620 size=144 callers=0 calls=4
   calls: battle_watch_command_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8b6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6620ULL || rel >= 0x8b66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b66b0 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8b66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b66b0ULL || rel >= 0x8b6750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6750 size=128 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_command_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6750ULL || rel >= 0x8b67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b67d0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b67d0ULL || rel >= 0x8b6870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6870 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b6870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6870ULL || rel >= 0x8b6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6910 size=16 callers=0 calls=0
*/
void sub_8b6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6910ULL || rel >= 0x8b6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6920 size=64 callers=3 calls=1
   calls: battle_watch_command_2
*/
void sub_8b6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6920ULL || rel >= 0x8b6960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6960 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_8b6a20, sub_c70
*/
void sub_8b6960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6960ULL || rel >= 0x8b6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6a20 size=32 callers=1 calls=0
*/
void sub_8b6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6a20ULL || rel >= 0x8b6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6a40 size=64 callers=0 calls=0
*/
void sub_8b6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6a40ULL || rel >= 0x8b6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6a80 size=752 callers=1 calls=5
   calls: sub_6f6640, sub_70c190, sub_70c480, sub_713480, sub_714c90
*/
void sub_8b6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6a80ULL || rel >= 0x8b6d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6d70 size=144 callers=0 calls=1
   calls: sub_713860
*/
void sub_8b6d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6d70ULL || rel >= 0x8b6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6e00 size=240 callers=0 calls=0
*/
void sub_8b6e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6e00ULL || rel >= 0x8b6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b6ef0 size=288 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8b6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6ef0ULL || rel >= 0x8b7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7010 size=320 callers=0 calls=2
   calls: battle_watch_command_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_command_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7010ULL || rel >= 0x8b7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7150 size=80 callers=0 calls=0
*/
void sub_8b7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7150ULL || rel >= 0x8b71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b71a0 size=144 callers=1 calls=0
*/
void sub_8b71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b71a0ULL || rel >= 0x8b7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7230 size=16 callers=0 calls=0
*/
void sub_8b7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7230ULL || rel >= 0x8b7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7240 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8b7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7240ULL || rel >= 0x8b72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b72b0 size=16 callers=0 calls=0
*/
void sub_8b72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b72b0ULL || rel >= 0x8b72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b72c0 size=32 callers=0 calls=0
*/
void sub_8b72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b72c0ULL || rel >= 0x8b72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b72e0 size=16 callers=0 calls=0
*/
void sub_8b72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b72e0ULL || rel >= 0x8b72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b72f0 size=16 callers=0 calls=0
*/
void sub_8b72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b72f0ULL || rel >= 0x8b7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7300 size=16 callers=0 calls=0
*/
void sub_8b7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7300ULL || rel >= 0x8b7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7310 size=400 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_winlose.proto
*/
void battle_watch_winlose(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7310ULL || rel >= 0x8b74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b74a0 size=176 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_winlose.proto
*/
void battle_watch_winlose_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b74a0ULL || rel >= 0x8b7550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7550 size=80 callers=0 calls=0
*/
void sub_8b7550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7550ULL || rel >= 0x8b75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b75a0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_winlose.proto
*/
void battle_watch_winlose_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b75a0ULL || rel >= 0x8b76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b76c0 size=32 callers=4 calls=0
*/
void sub_8b76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b76c0ULL || rel >= 0x8b76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b76e0 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_winlose_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b76e0ULL || rel >= 0x8b7720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7720 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b7720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7720ULL || rel >= 0x8b7780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7780 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b7780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7780ULL || rel >= 0x8b77e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b77e0 size=16 callers=0 calls=0
*/
void sub_8b77e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b77e0ULL || rel >= 0x8b77f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b77f0 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_winlose.proto
*/
void battle_watch_winlose_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b77f0ULL || rel >= 0x8b78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b78c0 size=96 callers=0 calls=2
   calls: sub_8b7920, sub_c70
*/
void sub_8b78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b78c0ULL || rel >= 0x8b7920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7920 size=32 callers=1 calls=0
*/
void sub_8b7920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7920ULL || rel >= 0x8b7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7940 size=16 callers=0 calls=0
*/
void sub_8b7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7940ULL || rel >= 0x8b7950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7950 size=512 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_8b7950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7950ULL || rel >= 0x8b7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7b50 size=80 callers=0 calls=1
   calls: sub_713860
*/
void sub_8b7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7b50ULL || rel >= 0x8b7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7ba0 size=128 callers=0 calls=0
*/
void sub_8b7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7ba0ULL || rel >= 0x8b7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7c20 size=128 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8b7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7c20ULL || rel >= 0x8b7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7ca0 size=384 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_winlose.proto
*/
void battle_watch_winlose_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7ca0ULL || rel >= 0x8b7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7e20 size=80 callers=0 calls=0
*/
void sub_8b7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7e20ULL || rel >= 0x8b7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7e70 size=80 callers=1 calls=0
*/
void sub_8b7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7e70ULL || rel >= 0x8b7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7ec0 size=16 callers=0 calls=0
*/
void sub_8b7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7ec0ULL || rel >= 0x8b7ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7ed0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8b7ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7ed0ULL || rel >= 0x8b7f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7f40 size=16 callers=0 calls=0
*/
void sub_8b7f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7f40ULL || rel >= 0x8b7f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7f50 size=32 callers=0 calls=0
*/
void sub_8b7f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7f50ULL || rel >= 0x8b7f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7f70 size=16 callers=0 calls=0
*/
void sub_8b7f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7f70ULL || rel >= 0x8b7f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7f80 size=16 callers=0 calls=0
*/
void sub_8b7f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7f80ULL || rel >= 0x8b7f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b7f90 size=176 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_winlose.proto
*/
void battle_watch_winlose_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b7f90ULL || rel >= 0x8b8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8040 size=272 callers=0 calls=10
   calls: battle_watch_clienttimer_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_clienttimer.proto
*/
void battle_watch_clienttimer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8040ULL || rel >= 0x8b8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8150 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_clienttimer.proto
*/
void battle_watch_clienttimer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8150ULL || rel >= 0x8b8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8260 size=80 callers=0 calls=0
*/
void sub_8b8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8260ULL || rel >= 0x8b82b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b82b0 size=144 callers=0 calls=4
   calls: battle_watch_clienttimer_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8b82b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b82b0ULL || rel >= 0x8b8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8340 size=144 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8b8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8340ULL || rel >= 0x8b83d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b83d0 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_clienttimer_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b83d0ULL || rel >= 0x8b8430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8430 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b8430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8430ULL || rel >= 0x8b84d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b84d0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b84d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b84d0ULL || rel >= 0x8b8570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8570 size=16 callers=0 calls=0
*/
void sub_8b8570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8570ULL || rel >= 0x8b8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8580 size=64 callers=3 calls=1
   calls: battle_watch_clienttimer_2
*/
void sub_8b8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8580ULL || rel >= 0x8b85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b85c0 size=176 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_8b8670, sub_c70
*/
void sub_8b85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b85c0ULL || rel >= 0x8b8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8670 size=32 callers=1 calls=0
*/
void sub_8b8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8670ULL || rel >= 0x8b8690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8690 size=64 callers=0 calls=0
*/
void sub_8b8690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8690ULL || rel >= 0x8b86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b86d0 size=512 callers=1 calls=5
   calls: sub_6f6640, sub_70c190, sub_70c480, sub_713480, sub_714c90
*/
void sub_8b86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b86d0ULL || rel >= 0x8b88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b88d0 size=112 callers=0 calls=1
   calls: sub_713860
*/
void sub_8b88d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b88d0ULL || rel >= 0x8b8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8940 size=112 callers=0 calls=0
*/
void sub_8b8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8940ULL || rel >= 0x8b89b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b89b0 size=208 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8b89b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b89b0ULL || rel >= 0x8b8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8a80 size=288 callers=0 calls=2
   calls: battle_watch_clienttimer_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_clienttimer_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8a80ULL || rel >= 0x8b8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8ba0 size=80 callers=0 calls=0
*/
void sub_8b8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8ba0ULL || rel >= 0x8b8bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8bf0 size=128 callers=1 calls=0
*/
void sub_8b8bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8bf0ULL || rel >= 0x8b8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8c70 size=16 callers=0 calls=0
*/
void sub_8b8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8c70ULL || rel >= 0x8b8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8c80 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8b8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8c80ULL || rel >= 0x8b8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8cf0 size=16 callers=0 calls=0
*/
void sub_8b8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8cf0ULL || rel >= 0x8b8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8d00 size=32 callers=0 calls=0
*/
void sub_8b8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8d00ULL || rel >= 0x8b8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8d20 size=16 callers=0 calls=0
*/
void sub_8b8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8d20ULL || rel >= 0x8b8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8d30 size=16 callers=0 calls=0
*/
void sub_8b8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8d30ULL || rel >= 0x8b8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8d40 size=16 callers=0 calls=0
*/
void sub_8b8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8d40ULL || rel >= 0x8b8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8d50 size=272 callers=0 calls=10
   calls: battle_watch_target_party_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70, sub_ce0
   ref: watch_target_party.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_target_party(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8d50ULL || rel >= 0x8b8e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8e60 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: watch_target_party.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_target_party_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8e60ULL || rel >= 0x8b8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8f70 size=80 callers=0 calls=0
*/
void sub_8b8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8f70ULL || rel >= 0x8b8fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b8fc0 size=144 callers=0 calls=4
   calls: battle_watch_target_party_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8b8fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b8fc0ULL || rel >= 0x8b9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9050 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8b9050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9050ULL || rel >= 0x8b90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b90f0 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_target_party_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b90f0ULL || rel >= 0x8b9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9150 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9150ULL || rel >= 0x8b91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b91f0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b91f0ULL || rel >= 0x8b9290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9290 size=16 callers=0 calls=0
*/
void sub_8b9290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9290ULL || rel >= 0x8b92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b92a0 size=64 callers=3 calls=1
   calls: battle_watch_target_party_2
*/
void sub_8b92a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b92a0ULL || rel >= 0x8b92e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b92e0 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_8b93a0, sub_c70
*/
void sub_8b92e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b92e0ULL || rel >= 0x8b93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b93a0 size=32 callers=1 calls=0
*/
void sub_8b93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b93a0ULL || rel >= 0x8b93c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b93c0 size=64 callers=0 calls=0
*/
void sub_8b93c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b93c0ULL || rel >= 0x8b9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9400 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_8b9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9400ULL || rel >= 0x8b9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9530 size=48 callers=0 calls=0
*/
void sub_8b9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9530ULL || rel >= 0x8b9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9560 size=64 callers=0 calls=0
*/
void sub_8b9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9560ULL || rel >= 0x8b95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b95a0 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8b95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b95a0ULL || rel >= 0x8b9640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9640 size=272 callers=0 calls=2
   calls: battle_watch_target_party_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_target_party_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9640ULL || rel >= 0x8b9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9750 size=80 callers=0 calls=0
*/
void sub_8b9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9750ULL || rel >= 0x8b97a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b97a0 size=112 callers=1 calls=0
*/
void sub_8b97a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b97a0ULL || rel >= 0x8b9810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9810 size=16 callers=0 calls=0
*/
void sub_8b9810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9810ULL || rel >= 0x8b9820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9820 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8b9820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9820ULL || rel >= 0x8b9890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9890 size=16 callers=0 calls=0
*/
void sub_8b9890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9890ULL || rel >= 0x8b98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b98a0 size=32 callers=0 calls=0
*/
void sub_8b98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b98a0ULL || rel >= 0x8b98c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b98c0 size=16 callers=0 calls=0
*/
void sub_8b98c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b98c0ULL || rel >= 0x8b98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b98d0 size=16 callers=0 calls=0
*/
void sub_8b98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b98d0ULL || rel >= 0x8b98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b98e0 size=16 callers=0 calls=0
*/
void sub_8b98e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b98e0ULL || rel >= 0x8b98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b98f0 size=352 callers=0 calls=10
   calls: battle_btlwatch_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: btlwatch_data_holder.proto
*/
void battle_btlwatch_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b98f0ULL || rel >= 0x8b9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9a50 size=224 callers=3 calls=6
   calls: battle_watch_cmd_2, gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_8ba890, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: btlwatch_data_holder.proto
*/
void battle_btlwatch_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9a50ULL || rel >= 0x8b9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9b30 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_8b9b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9b30ULL || rel >= 0x8b9b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9b90 size=144 callers=0 calls=4
   calls: battle_btlwatch_data_holder_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8b9b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9b90ULL || rel >= 0x8b9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9c20 size=32 callers=1 calls=0
*/
void sub_8b9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9c20ULL || rel >= 0x8b9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9c40 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9c40ULL || rel >= 0x8b9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9cd0 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8b9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9cd0ULL || rel >= 0x8b9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9d60 size=16 callers=0 calls=0
*/
void sub_8b9d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9d60ULL || rel >= 0x8b9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9d70 size=96 callers=0 calls=2
   calls: sub_8b9dd0, sub_c70
*/
void sub_8b9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9d70ULL || rel >= 0x8b9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9dd0 size=32 callers=1 calls=0
*/
void sub_8b9dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9dd0ULL || rel >= 0x8b9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9df0 size=64 callers=0 calls=0
*/
void sub_8b9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9df0ULL || rel >= 0x8b9e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9e30 size=416 callers=0 calls=8
   calls: sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_8ba630, sub_8ba9f0, sub_c70
*/
void sub_8b9e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9e30ULL || rel >= 0x8b9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9fd0 size=32 callers=0 calls=0
*/
void sub_8b9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9fd0ULL || rel >= 0x8b9ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b9ff0 size=96 callers=0 calls=0
*/
void sub_8b9ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b9ff0ULL || rel >= 0x8ba050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba050 size=112 callers=0 calls=2
   calls: sub_70d000, sub_8badc0
*/
void sub_8ba050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba050ULL || rel >= 0x8ba0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba0c0 size=336 callers=0 calls=5
   calls: battle_btlwatch_data_holder_2, gflnet3_generated_message_util, sub_8ba630, sub_8ba890, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_btlwatch_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba0c0ULL || rel >= 0x8ba210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba210 size=80 callers=0 calls=0
*/
void sub_8ba210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba210ULL || rel >= 0x8ba260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba260 size=16 callers=0 calls=0
*/
void sub_8ba260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba260ULL || rel >= 0x8ba270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba270 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8ba270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba270ULL || rel >= 0x8ba2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba2e0 size=16 callers=0 calls=0
*/
void sub_8ba2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba2e0ULL || rel >= 0x8ba2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba2f0 size=32 callers=0 calls=0
*/
void sub_8ba2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba2f0ULL || rel >= 0x8ba310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba310 size=16 callers=0 calls=0
*/
void sub_8ba310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba310ULL || rel >= 0x8ba320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba320 size=16 callers=0 calls=0
*/
void sub_8ba320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba320ULL || rel >= 0x8ba330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba330 size=16 callers=0 calls=0
*/
void sub_8ba330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba330ULL || rel >= 0x8ba340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba340 size=256 callers=0 calls=9
   calls: battle_watch_cmd_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: watch_cmd.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: CHECK failed: file != NULL: 
*/
void battle_watch_cmd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba340ULL || rel >= 0x8ba440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba440 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: watch_cmd.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_cmd_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba440ULL || rel >= 0x8ba550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba550 size=80 callers=0 calls=0
*/
void sub_8ba550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba550ULL || rel >= 0x8ba5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba5a0 size=144 callers=0 calls=4
   calls: battle_watch_cmd_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8ba5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba5a0ULL || rel >= 0x8ba630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba630 size=160 callers=2 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8ba630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba630ULL || rel >= 0x8ba6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba6d0 size=112 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_cmd_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba6d0ULL || rel >= 0x8ba740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba740 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8ba740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba740ULL || rel >= 0x8ba7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba7e0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8ba7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba7e0ULL || rel >= 0x8ba880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba880 size=16 callers=0 calls=0
*/
void sub_8ba880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba880ULL || rel >= 0x8ba890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba890 size=64 callers=3 calls=1
   calls: battle_watch_cmd_2
*/
void sub_8ba890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba890ULL || rel >= 0x8ba8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba8d0 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_8ba990, sub_c70
*/
void sub_8ba8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba8d0ULL || rel >= 0x8ba990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba990 size=32 callers=1 calls=0
*/
void sub_8ba990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba990ULL || rel >= 0x8ba9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba9b0 size=64 callers=0 calls=0
*/
void sub_8ba9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba9b0ULL || rel >= 0x8ba9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ba9f0 size=672 callers=1 calls=5
   calls: sub_6f6640, sub_70c190, sub_70c480, sub_713480, sub_714c90
*/
void sub_8ba9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ba9f0ULL || rel >= 0x8bac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bac90 size=128 callers=0 calls=1
   calls: sub_713860
*/
void sub_8bac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bac90ULL || rel >= 0x8bad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bad10 size=176 callers=0 calls=0
*/
void sub_8bad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bad10ULL || rel >= 0x8badc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008badc0 size=272 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8badc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8badc0ULL || rel >= 0x8baed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008baed0 size=304 callers=0 calls=2
   calls: battle_watch_cmd_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_cmd_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8baed0ULL || rel >= 0x8bb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb000 size=80 callers=0 calls=0
*/
void sub_8bb000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb000ULL || rel >= 0x8bb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb050 size=16 callers=0 calls=0
*/
void sub_8bb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb050ULL || rel >= 0x8bb060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb060 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8bb060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb060ULL || rel >= 0x8bb0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb0d0 size=16 callers=0 calls=0
*/
void sub_8bb0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb0d0ULL || rel >= 0x8bb0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb0e0 size=32 callers=0 calls=0
*/
void sub_8bb0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb0e0ULL || rel >= 0x8bb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb100 size=16 callers=0 calls=0
*/
void sub_8bb100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb100ULL || rel >= 0x8bb110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb110 size=16 callers=0 calls=0
*/
void sub_8bb110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb110ULL || rel >= 0x8bb120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb120 size=16 callers=0 calls=0
*/
void sub_8bb120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb120ULL || rel >= 0x8bb130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb130 size=368 callers=0 calls=10
   calls: battle_btlwatch_async_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: btlwatch_async_data_holder.proto
*/
void battle_btlwatch_async_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb130ULL || rel >= 0x8bb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb2a0 size=336 callers=3 calls=20
   calls: battle_watch_body_2, battle_watch_clienttimer_2, battle_watch_command_2, battle_watch_party_2, battle_watch_seq_2, battle_watch_seq_5, battle_watch_target_party_2, battle_watch_timer_2, battle_watch_timer_5, battle_watch_winlose_2, battle_watch_winlose_5, gflnet3_common
   ... +8 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: btlwatch_async_data_holder.proto
*/
void battle_btlwatch_async_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb2a0ULL || rel >= 0x8bb3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb3f0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_8bb3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb3f0ULL || rel >= 0x8bb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb450 size=144 callers=0 calls=4
   calls: battle_btlwatch_async_data_holder_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8bb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb450ULL || rel >= 0x8bb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb4e0 size=32 callers=9 calls=0
*/
void sub_8bb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb4e0ULL || rel >= 0x8bb500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb500 size=976 callers=0 calls=19
   calls: battle_watch_seq_5, battle_watch_timer_5, battle_watch_winlose_5, gflnet3_generated_message_util, sub_8b4e00, sub_8b5050, sub_8b5a40, sub_8b66b0, sub_8b6920, sub_8b76c0, sub_8b8340, sub_8b8580
   ... +7 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_btlwatch_async_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb500ULL || rel >= 0x8bb8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb8d0 size=112 callers=0 calls=3
   calls: sub_70e0c0, sub_8bb9b0, sub_ce0
*/
void sub_8bb8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb8d0ULL || rel >= 0x8bb940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb940 size=112 callers=0 calls=3
   calls: sub_70e0c0, sub_8bb9b0, sub_ce0
*/
void sub_8bb940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb940ULL || rel >= 0x8bb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bb9b0 size=96 callers=26 calls=0
*/
void sub_8bb9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb9b0ULL || rel >= 0x8bba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bba10 size=16 callers=0 calls=0
*/
void sub_8bba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bba10ULL || rel >= 0x8bba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bba20 size=96 callers=0 calls=2
   calls: sub_8bba80, sub_c70
*/
void sub_8bba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bba20ULL || rel >= 0x8bba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bba80 size=32 callers=1 calls=0
*/
void sub_8bba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bba80ULL || rel >= 0x8bbaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bbaa0 size=16 callers=0 calls=0
*/
void sub_8bbaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bbaa0ULL || rel >= 0x8bbab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bbab0 size=2080 callers=0 calls=23
   calls: sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_8b4e00, sub_8b51b0, sub_8b5a40, sub_8b5cd0, sub_8b66b0, sub_8b6a80, sub_8b76c0
   ... +11 more
*/
void sub_8bbab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bbab0ULL || rel >= 0x8bc2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bc2d0 size=320 callers=0 calls=1
   calls: sub_714af0
*/
void sub_8bc2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bc2d0ULL || rel >= 0x8bc410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bc410 size=800 callers=0 calls=0
*/
void sub_8bc410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bc410ULL || rel >= 0x8bc730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bc730 size=304 callers=0 calls=9
   calls: sub_70d000, sub_8b5350, sub_8b5fa0, sub_8b6ef0, sub_8b7c20, sub_8b89b0, sub_8b95a0, sub_8bd360, sub_8bef60
*/
void sub_8bc730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bc730ULL || rel >= 0x8bc860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bc860 size=208 callers=0 calls=2
   calls: battle_btlwatch_async_data_holder_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_btlwatch_async_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bc860ULL || rel >= 0x8bc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bc930 size=80 callers=0 calls=0
*/
void sub_8bc930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bc930ULL || rel >= 0x8bc980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bc980 size=16 callers=0 calls=0
*/
void sub_8bc980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bc980ULL || rel >= 0x8bc990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bc990 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8bc990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bc990ULL || rel >= 0x8bca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bca00 size=16 callers=0 calls=0
*/
void sub_8bca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bca00ULL || rel >= 0x8bca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bca10 size=32 callers=0 calls=0
*/
void sub_8bca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bca10ULL || rel >= 0x8bca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bca30 size=16 callers=0 calls=0
*/
void sub_8bca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bca30ULL || rel >= 0x8bca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bca40 size=16 callers=0 calls=0
*/
void sub_8bca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bca40ULL || rel >= 0x8bca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bca50 size=16 callers=0 calls=0
*/
void sub_8bca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bca50ULL || rel >= 0x8bca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bca60 size=384 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_seq.proto
*/
void battle_watch_seq(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bca60ULL || rel >= 0x8bcbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bcbe0 size=176 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_seq.proto
*/
void battle_watch_seq_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bcbe0ULL || rel >= 0x8bcc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bcc90 size=80 callers=0 calls=0
*/
void sub_8bcc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bcc90ULL || rel >= 0x8bcce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bcce0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_seq.proto
*/
void battle_watch_seq_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bcce0ULL || rel >= 0x8bce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bce00 size=32 callers=5 calls=0
*/
void sub_8bce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bce00ULL || rel >= 0x8bce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bce20 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_seq_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bce20ULL || rel >= 0x8bce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bce60 size=96 callers=2 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8bce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bce60ULL || rel >= 0x8bcec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bcec0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8bcec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bcec0ULL || rel >= 0x8bcf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bcf20 size=16 callers=0 calls=0
*/
void sub_8bcf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bcf20ULL || rel >= 0x8bcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bcf30 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_seq.proto
*/
void battle_watch_seq_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bcf30ULL || rel >= 0x8bd000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd000 size=96 callers=0 calls=2
   calls: sub_8bd060, sub_c70
*/
void sub_8bd000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd000ULL || rel >= 0x8bd060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd060 size=32 callers=1 calls=0
*/
void sub_8bd060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd060ULL || rel >= 0x8bd080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd080 size=16 callers=0 calls=0
*/
void sub_8bd080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd080ULL || rel >= 0x8bd090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd090 size=512 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_8bd090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd090ULL || rel >= 0x8bd290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd290 size=80 callers=0 calls=1
   calls: sub_713860
*/
void sub_8bd290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd290ULL || rel >= 0x8bd2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd2e0 size=128 callers=0 calls=0
*/
void sub_8bd2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd2e0ULL || rel >= 0x8bd360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd360 size=128 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8bd360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd360ULL || rel >= 0x8bd3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd3e0 size=384 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_seq.proto
*/
void battle_watch_seq_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd3e0ULL || rel >= 0x8bd560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd560 size=80 callers=0 calls=0
*/
void sub_8bd560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd560ULL || rel >= 0x8bd5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd5b0 size=80 callers=1 calls=0
*/
void sub_8bd5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd5b0ULL || rel >= 0x8bd600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd600 size=16 callers=0 calls=0
*/
void sub_8bd600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd600ULL || rel >= 0x8bd610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd610 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8bd610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd610ULL || rel >= 0x8bd680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd680 size=16 callers=0 calls=0
*/
void sub_8bd680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd680ULL || rel >= 0x8bd690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd690 size=32 callers=0 calls=0
*/
void sub_8bd690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd690ULL || rel >= 0x8bd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd6b0 size=16 callers=0 calls=0
*/
void sub_8bd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd6b0ULL || rel >= 0x8bd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd6c0 size=16 callers=0 calls=0
*/
void sub_8bd6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd6c0ULL || rel >= 0x8bd6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd6d0 size=176 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_seq.proto
*/
void battle_watch_seq_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd6d0ULL || rel >= 0x8bd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd780 size=256 callers=0 calls=9
   calls: battle_watch_body_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: CHECK failed: file != NULL: 
   ref: watch_body.proto
*/
void battle_watch_body(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd780ULL || rel >= 0x8bd880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd880 size=288 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
   ref: watch_body.proto
*/
void battle_watch_body_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd880ULL || rel >= 0x8bd9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd9a0 size=80 callers=0 calls=0
*/
void sub_8bd9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd9a0ULL || rel >= 0x8bd9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bd9f0 size=144 callers=0 calls=4
   calls: battle_watch_body_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8bd9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bd9f0ULL || rel >= 0x8bda80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bda80 size=176 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8bda80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bda80ULL || rel >= 0x8bdb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bdb30 size=416 callers=0 calls=2
   calls: gflnet3_generated_message_util, sub_75fa00
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_body_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bdb30ULL || rel >= 0x8bdcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bdcd0 size=112 callers=0 calls=3
   calls: sub_70e0c0, sub_8bdd40, sub_ce0
*/
void sub_8bdcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bdcd0ULL || rel >= 0x8bdd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bdd40 size=240 callers=2 calls=1
   calls: sub_ce0
*/
void sub_8bdd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bdd40ULL || rel >= 0x8bde30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bde30 size=112 callers=0 calls=3
   calls: sub_70e0c0, sub_8bdd40, sub_ce0
*/
void sub_8bde30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bde30ULL || rel >= 0x8bdea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bdea0 size=16 callers=0 calls=0
*/
void sub_8bdea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bdea0ULL || rel >= 0x8bdeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bdeb0 size=64 callers=3 calls=1
   calls: battle_watch_body_2
*/
void sub_8bdeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bdeb0ULL || rel >= 0x8bdef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bdef0 size=208 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_8bdfc0, sub_c70
*/
void sub_8bdef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bdef0ULL || rel >= 0x8bdfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bdfc0 size=32 callers=1 calls=0
*/
void sub_8bdfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bdfc0ULL || rel >= 0x8bdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bdfe0 size=256 callers=0 calls=0
*/
void sub_8bdfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bdfe0ULL || rel >= 0x8be0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008be0e0 size=2368 callers=1 calls=6
   calls: sub_6f6640, sub_70bfa0, sub_70c190, sub_70c480, sub_713480, sub_714c90
*/
void sub_8be0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8be0e0ULL || rel >= 0x8bea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bea20 size=464 callers=0 calls=3
   calls: gflnet3_wire_format_lite_4, sub_713860, sub_713970
*/
void sub_8bea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bea20ULL || rel >= 0x8bebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bebf0 size=880 callers=0 calls=2
   calls: sub_70cee0, sub_70d0d0
*/
void sub_8bebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bebf0ULL || rel >= 0x8bef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bef60 size=896 callers=1 calls=2
   calls: sub_70d000, sub_70d040
*/
void sub_8bef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bef60ULL || rel >= 0x8bf2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf2e0 size=208 callers=0 calls=2
   calls: battle_watch_body_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffer
*/
void battle_watch_body_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf2e0ULL || rel >= 0x8bf3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf3b0 size=80 callers=0 calls=0
*/
void sub_8bf3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf3b0ULL || rel >= 0x8bf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf400 size=64 callers=1 calls=0
*/
void sub_8bf400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf400ULL || rel >= 0x8bf440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf440 size=16 callers=0 calls=0
*/
void sub_8bf440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf440ULL || rel >= 0x8bf450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf450 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8bf450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf450ULL || rel >= 0x8bf4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf4c0 size=16 callers=0 calls=0
*/
void sub_8bf4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf4c0ULL || rel >= 0x8bf4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf4d0 size=32 callers=0 calls=0
*/
void sub_8bf4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf4d0ULL || rel >= 0x8bf4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf4f0 size=16 callers=0 calls=0
*/
void sub_8bf4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf4f0ULL || rel >= 0x8bf500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf500 size=16 callers=0 calls=0
*/
void sub_8bf500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf500ULL || rel >= 0x8bf510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf510 size=16 callers=0 calls=0
*/
void sub_8bf510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf510ULL || rel >= 0x8bf520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf520 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_8bf520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf520ULL || rel >= 0x8bf590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf590 size=80 callers=0 calls=0
*/
void sub_8bf590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf590ULL || rel >= 0x8bf5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf5e0 size=80 callers=0 calls=0
*/
void sub_8bf5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf5e0ULL || rel >= 0x8bf630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf630 size=80 callers=0 calls=0
*/
void sub_8bf630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf630ULL || rel >= 0x8bf680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf680 size=80 callers=0 calls=0
*/
void sub_8bf680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf680ULL || rel >= 0x8bf6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf6d0 size=80 callers=0 calls=0
*/
void sub_8bf6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf6d0ULL || rel >= 0x8bf720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf720 size=80 callers=0 calls=0
*/
void sub_8bf720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf720ULL || rel >= 0x8bf770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf770 size=80 callers=0 calls=0
*/
void sub_8bf770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf770ULL || rel >= 0x8bf7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf7c0 size=80 callers=0 calls=0
*/
void sub_8bf7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf7c0ULL || rel >= 0x8bf810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf810 size=352 callers=1 calls=2
   calls: sub_104dfb0, sub_6aea40
*/
void sub_8bf810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf810ULL || rel >= 0x8bf970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bf970 size=208 callers=0 calls=2
   calls: sub_104dfd0, sub_6aeb70
*/
void sub_8bf970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bf970ULL || rel >= 0x8bfa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bfa40 size=80 callers=0 calls=1
   calls: sub_1061800
*/
void sub_8bfa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bfa40ULL || rel >= 0x8bfa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bfa90 size=16 callers=0 calls=0
*/
void sub_8bfa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bfa90ULL || rel >= 0x8bfaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bfaa0 size=16 callers=0 calls=0
*/
void sub_8bfaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bfaa0ULL || rel >= 0x8bfab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bfab0 size=240 callers=0 calls=0
*/
void sub_8bfab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bfab0ULL || rel >= 0x8bfba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bfba0 size=16 callers=0 calls=0
*/
void sub_8bfba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bfba0ULL || rel >= 0x8bfbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bfbb0 size=16 callers=0 calls=0
*/
void sub_8bfbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bfbb0ULL || rel >= 0x8bfbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bfbc0 size=128 callers=0 calls=0
*/
void sub_8bfbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bfbc0ULL || rel >= 0x8bfc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bfc40 size=736 callers=1 calls=5
   calls: sub_7f8c00, sub_8c0bd0, sub_8c0d20, sub_8c0e70, sub_8c26c0
*/
void sub_8bfc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bfc40ULL || rel >= 0x8bff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008bff20 size=240 callers=1 calls=0
*/
void sub_8bff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bff20ULL || rel >= 0x8c0010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0010 size=48 callers=0 calls=1
   calls: sub_8bff20
*/
void sub_8c0010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0010ULL || rel >= 0x8c0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0040 size=16 callers=1 calls=0
*/
void sub_8c0040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0040ULL || rel >= 0x8c0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0050 size=16 callers=1 calls=0
*/
void sub_8c0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0050ULL || rel >= 0x8c0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0060 size=208 callers=1 calls=3
   calls: sub_7cc890, sub_7ed1e0, sub_7fe1d0
*/
void sub_8c0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0060ULL || rel >= 0x8c0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0130 size=1088 callers=1 calls=16
   calls: sub_7cb420, sub_7ee6b0, sub_7fe1d0, sub_8c0570, sub_8c0660, sub_8c0a20, sub_8c1530, sub_8c1760, sub_8c6e00, sub_8c6e80, sub_8c82b0, sub_8c82c0
   ... +4 more
*/
void sub_8c0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0130ULL || rel >= 0x8c0570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0570 size=240 callers=1 calls=10
   calls: sub_7c58b0, sub_7ca1c0, sub_7ca890, sub_7cb420, sub_7d6a30, sub_7d7660, sub_7ee6b0, sub_7f8cf0, sub_7f98e0, sub_7fe1d0
*/
void sub_8c0570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0570ULL || rel >= 0x8c0660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0660 size=960 callers=1 calls=0
*/
void sub_8c0660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0660ULL || rel >= 0x8c0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0a20 size=432 callers=1 calls=1
   calls: sub_7f8c20
*/
void sub_8c0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0a20ULL || rel >= 0x8c0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0bd0 size=336 callers=1 calls=1
   calls: sub_8c68c0
*/
void sub_8c0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0bd0ULL || rel >= 0x8c0d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0d20 size=336 callers=1 calls=1
   calls: sub_8c1040
*/
void sub_8c0d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0d20ULL || rel >= 0x8c0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0e70 size=336 callers=1 calls=1
   calls: sub_8c8380
*/
void sub_8c0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0e70ULL || rel >= 0x8c0fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c0fc0 size=128 callers=0 calls=0
*/
void sub_8c0fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0fc0ULL || rel >= 0x8c1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1040 size=528 callers=1 calls=4
   calls: sub_7f8c00, sub_8c1770, sub_8c1d40, sub_8c6710
*/
void sub_8c1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1040ULL || rel >= 0x8c1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1250 size=176 callers=0 calls=0
*/
void sub_8c1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1250ULL || rel >= 0x8c1300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1300 size=192 callers=0 calls=0
*/
void sub_8c1300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1300ULL || rel >= 0x8c13c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c13c0 size=176 callers=0 calls=0
*/
void sub_8c13c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c13c0ULL || rel >= 0x8c1470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1470 size=192 callers=0 calls=0
*/
void sub_8c1470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1470ULL || rel >= 0x8c1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1530 size=32 callers=1 calls=0
*/
void sub_8c1530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1530ULL || rel >= 0x8c1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1550 size=192 callers=0 calls=5
   calls: sub_8c1610, sub_8c1c10, sub_8c1d30, sub_8c6870, sub_8c68b0
*/
void sub_8c1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1550ULL || rel >= 0x8c1610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1610 size=320 callers=1 calls=8
   calls: sub_7cb3b0, sub_7cb420, sub_7ed5e0, sub_7ee6b0, sub_7fe1d0, sub_8c1b50, sub_8c6810, sub_8c6820
*/
void sub_8c1610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1610ULL || rel >= 0x8c1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1750 size=16 callers=0 calls=0
*/
void sub_8c1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1750ULL || rel >= 0x8c1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1760 size=16 callers=1 calls=0
*/
void sub_8c1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1760ULL || rel >= 0x8c1770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1770 size=224 callers=3 calls=1
   calls: sub_8c18d0
*/
void sub_8c1770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1770ULL || rel >= 0x8c1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1850 size=128 callers=0 calls=0
*/
void sub_8c1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1850ULL || rel >= 0x8c18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c18d0 size=192 callers=2 calls=0
*/
void sub_8c18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c18d0ULL || rel >= 0x8c1990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1990 size=112 callers=0 calls=0
*/
void sub_8c1990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1990ULL || rel >= 0x8c1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1a00 size=112 callers=0 calls=0
*/
void sub_8c1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1a00ULL || rel >= 0x8c1a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1a70 size=112 callers=0 calls=0
*/
void sub_8c1a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1a70ULL || rel >= 0x8c1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1ae0 size=112 callers=0 calls=0
*/
void sub_8c1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1ae0ULL || rel >= 0x8c1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1b50 size=192 callers=3 calls=0
*/
void sub_8c1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1b50ULL || rel >= 0x8c1c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1c10 size=288 callers=4 calls=7
   calls: p_PokeChangeEnable, p_PokeChangeEnable_2, sub_8c1eb0, sub_8c2960, sub_8c29f0, sub_8c2d50, sub_8c2e80
*/
void sub_8c1c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1c10ULL || rel >= 0x8c1d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1d30 size=16 callers=3 calls=0
*/
void sub_8c1d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1d30ULL || rel >= 0x8c1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1d40 size=304 callers=3 calls=1
   calls: sub_7f8c00
*/
void sub_8c1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1d40ULL || rel >= 0x8c1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1e70 size=16 callers=0 calls=0
*/
void sub_8c1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1e70ULL || rel >= 0x8c1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1e80 size=16 callers=0 calls=0
*/
void sub_8c1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1e80ULL || rel >= 0x8c1e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1e90 size=16 callers=0 calls=0
*/
void sub_8c1e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1e90ULL || rel >= 0x8c1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1ea0 size=16 callers=0 calls=0
*/
void sub_8c1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1ea0ULL || rel >= 0x8c1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1eb0 size=48 callers=1 calls=0
*/
void sub_8c1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1eb0ULL || rel >= 0x8c1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1ee0 size=16 callers=2 calls=0
*/
void sub_8c1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1ee0ULL || rel >= 0x8c1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1ef0 size=16 callers=4 calls=0
*/
void sub_8c1ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1ef0ULL || rel >= 0x8c1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1f00 size=16 callers=24 calls=0
*/
void sub_8c1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1f00ULL || rel >= 0x8c1f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1f10 size=16 callers=20 calls=0
*/
void sub_8c1f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1f10ULL || rel >= 0x8c1f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1f20 size=16 callers=7 calls=0
*/
void sub_8c1f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1f20ULL || rel >= 0x8c1f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1f30 size=16 callers=34 calls=0
*/
void sub_8c1f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1f30ULL || rel >= 0x8c1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1f40 size=16 callers=14 calls=0
*/
void sub_8c1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1f40ULL || rel >= 0x8c1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1f50 size=16 callers=12 calls=0
*/
void sub_8c1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1f50ULL || rel >= 0x8c1f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1f60 size=112 callers=4 calls=2
   calls: sub_7ee6b0, sub_7fe1d0
*/
void sub_8c1f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1f60ULL || rel >= 0x8c1fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c1fd0 size=112 callers=2 calls=2
   calls: sub_7ee6b0, sub_7fe1d0
*/
void sub_8c1fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c1fd0ULL || rel >= 0x8c2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2040 size=16 callers=3 calls=0
*/
void sub_8c2040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2040ULL || rel >= 0x8c2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2050 size=16 callers=12 calls=0
*/
void sub_8c2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2050ULL || rel >= 0x8c2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2060 size=16 callers=1 calls=0
*/
void sub_8c2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2060ULL || rel >= 0x8c2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2070 size=48 callers=1 calls=1
   calls: sub_7fe1d0
*/
void sub_8c2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2070ULL || rel >= 0x8c20a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c20a0 size=80 callers=84 calls=2
   calls: sub_7fe1d0, sub_8c20f0
*/
void sub_8c20a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c20a0ULL || rel >= 0x8c20f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c20f0 size=384 callers=5 calls=4
   calls: sub_7ca1c0, sub_7cb420, sub_7ee6b0, sub_7fe1d0
*/
void sub_8c20f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c20f0ULL || rel >= 0x8c2270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2270 size=48 callers=8 calls=1
   calls: sub_8c20f0
*/
void sub_8c2270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2270ULL || rel >= 0x8c22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c22a0 size=384 callers=2 calls=9
   calls: sub_7ed5e0, sub_7ee6b0, sub_7eef40, sub_7eef50, sub_7f7b60, sub_7f8c20, sub_7fe1d0, sub_8a8290, sub_8c20f0
*/
void sub_8c22a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c22a0ULL || rel >= 0x8c2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2420 size=192 callers=3 calls=4
   calls: sub_7ee6b0, sub_7efe00, sub_7efef0, sub_8a86e0
*/
void sub_8c2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2420ULL || rel >= 0x8c24e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c24e0 size=160 callers=1 calls=2
   calls: sub_7ee6b0, sub_7f2520
*/
void sub_8c24e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c24e0ULL || rel >= 0x8c2580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2580 size=144 callers=3 calls=1
   calls: sub_7ee6b0
*/
void sub_8c2580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2580ULL || rel >= 0x8c2610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2610 size=16 callers=0 calls=0
*/
void sub_8c2610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2610ULL || rel >= 0x8c2620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2620 size=16 callers=1 calls=0
*/
void sub_8c2620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2620ULL || rel >= 0x8c2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2630 size=16 callers=0 calls=0
*/
void sub_8c2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2630ULL || rel >= 0x8c2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2640 size=128 callers=0 calls=0
*/
void sub_8c2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2640ULL || rel >= 0x8c26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c26c0 size=384 callers=1 calls=1
   calls: sub_8c6550
*/
void sub_8c26c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c26c0ULL || rel >= 0x8c2840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2840 size=288 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_8c2840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2840ULL || rel >= 0x8c2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2960 size=96 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_8c2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2960ULL || rel >= 0x8c29c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c29c0 size=16 callers=0 calls=0
*/
void sub_8c29c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c29c0ULL || rel >= 0x8c29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c29d0 size=16 callers=0 calls=0
*/
void sub_8c29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c29d0ULL || rel >= 0x8c29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c29e0 size=16 callers=0 calls=0
*/
void sub_8c29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c29e0ULL || rel >= 0x8c29f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c29f0 size=544 callers=1 calls=3
   calls: sub_5dd790, sub_5e2930, sub_8c2c10
*/
void sub_8c29f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c29f0ULL || rel >= 0x8c2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2c10 size=320 callers=47 calls=3
   calls: sub_5e6180, sub_8c2f40, sub_d0c0
*/
void sub_8c2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2c10ULL || rel >= 0x8c2d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2d50 size=144 callers=1 calls=2
   calls: sub_66b5f0, sub_8c65f0
*/
void sub_8c2d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2d50ULL || rel >= 0x8c2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2de0 size=160 callers=1 calls=2
   calls: sub_66b7d0, sub_8c1ee0
   ref: MyClientID
   ref: p_Score
   ref: p_PokeChangeEnable
*/
void p_PokeChangeEnable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2de0ULL || rel >= 0x8c2e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2e80 size=64 callers=1 calls=0
*/
void sub_8c2e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2e80ULL || rel >= 0x8c2ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2ec0 size=128 callers=1 calls=1
   calls: sub_66b7d0
   ref: p_Score
   ref: p_PokeChangeEnable
*/
void p_PokeChangeEnable_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2ec0ULL || rel >= 0x8c2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2f40 size=128 callers=4 calls=1
   calls: sub_d0c0
*/
void sub_8c2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2f40ULL || rel >= 0x8c2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2fc0 size=32 callers=0 calls=0
*/
void sub_8c2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2fc0ULL || rel >= 0x8c2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c2fe0 size=64 callers=0 calls=0
*/
void sub_8c2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c2fe0ULL || rel >= 0x8c3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3020 size=64 callers=0 calls=2
   calls: sub_7f8c20, sub_8c1ef0
*/
void sub_8c3020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3020ULL || rel >= 0x8c3060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3060 size=64 callers=0 calls=2
   calls: sub_7f8c20, sub_8c1ef0
*/
void sub_8c3060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3060ULL || rel >= 0x8c30a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c30a0 size=64 callers=0 calls=2
   calls: sub_7f8c20, sub_8c1ef0
*/
void sub_8c30a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c30a0ULL || rel >= 0x8c30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c30e0 size=64 callers=0 calls=2
   calls: sub_7f8c20, sub_8c1ef0
*/
void sub_8c30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c30e0ULL || rel >= 0x8c3120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3120 size=64 callers=0 calls=2
   calls: sub_7f0bb0, sub_8c20a0
*/
void sub_8c3120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3120ULL || rel >= 0x8c3160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3160 size=64 callers=0 calls=2
   calls: sub_7f0bb0, sub_8c20a0
*/
void sub_8c3160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3160ULL || rel >= 0x8c31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c31a0 size=64 callers=0 calls=2
   calls: sub_7f0bb0, sub_8c20a0
*/
void sub_8c31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c31a0ULL || rel >= 0x8c31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c31e0 size=64 callers=0 calls=2
   calls: sub_7f0bb0, sub_8c20a0
*/
void sub_8c31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c31e0ULL || rel >= 0x8c3220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3220 size=48 callers=0 calls=2
   calls: sub_7ef6a0, sub_8c20a0
*/
void sub_8c3220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3220ULL || rel >= 0x8c3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3250 size=48 callers=0 calls=2
   calls: sub_7ef6a0, sub_8c20a0
*/
void sub_8c3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3250ULL || rel >= 0x8c3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3280 size=48 callers=0 calls=2
   calls: sub_7ef4c0, sub_8c20a0
*/
void sub_8c3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3280ULL || rel >= 0x8c32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c32b0 size=64 callers=0 calls=2
   calls: sub_7ef4c0, sub_8c20a0
*/
void sub_8c32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c32b0ULL || rel >= 0x8c32f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c32f0 size=32 callers=0 calls=2
   calls: sub_7ef630, sub_8c20a0
*/
void sub_8c32f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c32f0ULL || rel >= 0x8c3310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3310 size=48 callers=0 calls=2
   calls: sub_7ef630, sub_8c20a0
*/
void sub_8c3310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3310ULL || rel >= 0x8c3340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3340 size=48 callers=0 calls=2
   calls: sub_7f05a0, sub_8c20a0
*/
void sub_8c3340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3340ULL || rel >= 0x8c3370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3370 size=64 callers=0 calls=2
   calls: sub_7f05a0, sub_8c20a0
*/
void sub_8c3370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3370ULL || rel >= 0x8c33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c33b0 size=784 callers=0 calls=8
   calls: sub_7cc000, sub_7ee6b0, sub_7fe220, sub_802460, sub_802470, sub_8c1f00, sub_8c1f30, sub_8c20a0
*/
void sub_8c33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c33b0ULL || rel >= 0x8c36c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c36c0 size=128 callers=0 calls=7
   calls: sub_7cc000, sub_7ee6b0, sub_7fe220, sub_802470, sub_8c1f00, sub_8c1f30, sub_8c20a0
*/
void sub_8c36c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c36c0ULL || rel >= 0x8c3740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3740 size=96 callers=0 calls=4
   calls: sub_7ef4c0, sub_7ef750, sub_7f8960, sub_8c20a0
*/
void sub_8c3740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3740ULL || rel >= 0x8c37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c37a0 size=80 callers=0 calls=3
   calls: sub_7ef4c0, sub_7ef760, sub_8c20a0
*/
void sub_8c37a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c37a0ULL || rel >= 0x8c37f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c37f0 size=96 callers=0 calls=4
   calls: sub_7ef4c0, sub_7ef750, sub_7f89e0, sub_8c20a0
*/
void sub_8c37f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c37f0ULL || rel >= 0x8c3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3850 size=112 callers=0 calls=4
   calls: sub_780d10, sub_7efe00, sub_7efef0, sub_8c1f40
*/
void sub_8c3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3850ULL || rel >= 0x8c38c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c38c0 size=128 callers=0 calls=4
   calls: sub_780d10, sub_7efe00, sub_7efef0, sub_8c1f40
*/
void sub_8c38c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c38c0ULL || rel >= 0x8c3940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3940 size=32 callers=0 calls=2
   calls: sub_7fe340, sub_8c1f30
*/
void sub_8c3940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3940ULL || rel >= 0x8c3960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3960 size=352 callers=0 calls=6
   calls: sub_780d40, sub_7f05d0, sub_8c1f40, sub_8c1f50, sub_8c2050, sub_8c20a0
*/
void sub_8c3960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3960ULL || rel >= 0x8c3ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3ac0 size=192 callers=0 calls=7
   calls: sub_7c58c0, sub_7dfdd0, sub_7f0160, sub_7f0500, sub_8c1f00, sub_8c20a0, sub_8c2270
*/
void sub_8c3ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3ac0ULL || rel >= 0x8c3b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3b80 size=32 callers=0 calls=1
   calls: sub_780ec0
*/
void sub_8c3b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3b80ULL || rel >= 0x8c3ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3ba0 size=32 callers=0 calls=2
   calls: sub_780d10, sub_8c2050
*/
void sub_8c3ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3ba0ULL || rel >= 0x8c3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3bc0 size=352 callers=0 calls=9
   calls: sub_7ee6b0, sub_7efe00, sub_7efef0, sub_8a86e0, sub_8c1f10, sub_8c1f40, sub_8c1f50, sub_8c2040, sub_8c2050
*/
void sub_8c3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3bc0ULL || rel >= 0x8c3d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3d20 size=32 callers=0 calls=2
   calls: sub_7f2520, sub_8c20a0
*/
void sub_8c3d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3d20ULL || rel >= 0x8c3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3d40 size=240 callers=0 calls=4
   calls: sub_8a85b0, sub_8c1f10, sub_8c1f40, sub_8c1f50
*/
void sub_8c3d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3d40ULL || rel >= 0x8c3e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3e30 size=192 callers=0 calls=9
   calls: sub_7cb660, sub_7cbf20, sub_7ed1b0, sub_7ef580, sub_7fc2e0, sub_7fc450, sub_8c1f00, sub_8c1f20, sub_8c20f0
*/
void sub_8c3e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3e30ULL || rel >= 0x8c3ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3ef0 size=32 callers=0 calls=2
   calls: sub_781210, sub_8c2050
*/
void sub_8c3ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3ef0ULL || rel >= 0x8c3f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3f10 size=32 callers=0 calls=1
   calls: sub_8c22a0
*/
void sub_8c3f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3f10ULL || rel >= 0x8c3f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c3f30 size=256 callers=0 calls=6
   calls: sub_780ec0, sub_7ee6b0, sub_8a8770, sub_8c1f10, sub_8c1f30, sub_8c20a0
*/
void sub_8c3f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3f30ULL || rel >= 0x8c4030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4030 size=208 callers=0 calls=6
   calls: sub_780ec0, sub_7ee6b0, sub_8a8770, sub_8c1f10, sub_8c1f30, sub_8c20a0
*/
void sub_8c4030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4030ULL || rel >= 0x8c4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

