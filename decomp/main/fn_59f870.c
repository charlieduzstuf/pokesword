/* main functions 0059f870..005beec0 (36 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0059f870 size=336 callers=1 calls=5
   calls: sub_59fa70, sub_59fb40, sub_5a00c0, sub_5a0580, sub_5a0600
*/
void sub_59f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f870ULL || rel >= 0x59f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059f9c0 size=144 callers=0 calls=3
   calls: sub_5a07a0, sub_5a0870, sub_5a08f0
*/
void sub_59f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59f9c0ULL || rel >= 0x59fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059fa50 size=16 callers=0 calls=0
*/
void sub_59fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59fa50ULL || rel >= 0x59fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059fa60 size=16 callers=0 calls=0
*/
void sub_59fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59fa60ULL || rel >= 0x59fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059fa70 size=208 callers=1 calls=3
   calls: sub_59fb40, sub_5a0580, sub_5a0600
*/
void sub_59fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59fa70ULL || rel >= 0x59fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059fb40 size=368 callers=3 calls=1
   calls: sub_5a00c0
*/
void sub_59fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59fb40ULL || rel >= 0x59fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059fcb0 size=176 callers=0 calls=0
*/
void sub_59fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59fcb0ULL || rel >= 0x59fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059fd60 size=160 callers=0 calls=0
*/
void sub_59fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59fd60ULL || rel >= 0x59fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0059fe00 size=704 callers=1 calls=0
*/
void sub_59fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59fe00ULL || rel >= 0x5a00c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a00c0 size=16 callers=9 calls=0
*/
void sub_5a00c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a00c0ULL || rel >= 0x5a00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a00d0 size=64 callers=5 calls=0
*/
void sub_5a00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a00d0ULL || rel >= 0x5a0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0110 size=64 callers=5 calls=0
*/
void sub_5a0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0110ULL || rel >= 0x5a0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0150 size=256 callers=44 calls=0
*/
void sub_5a0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0150ULL || rel >= 0x5a0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0250 size=128 callers=8 calls=0
*/
void sub_5a0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0250ULL || rel >= 0x5a02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a02d0 size=112 callers=21 calls=0
*/
void sub_5a02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a02d0ULL || rel >= 0x5a0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0340 size=144 callers=16 calls=0
*/
void sub_5a0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0340ULL || rel >= 0x5a03d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a03d0 size=240 callers=11 calls=0
*/
void sub_5a03d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a03d0ULL || rel >= 0x5a04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a04c0 size=192 callers=1 calls=0
*/
void sub_5a04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a04c0ULL || rel >= 0x5a0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0580 size=128 callers=2 calls=0
*/
void sub_5a0580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0580ULL || rel >= 0x5a0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0600 size=16 callers=6 calls=0
*/
void sub_5a0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0600ULL || rel >= 0x5a0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0610 size=32 callers=3 calls=0
*/
void sub_5a0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0610ULL || rel >= 0x5a0630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0630 size=32 callers=5 calls=0
*/
void sub_5a0630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0630ULL || rel >= 0x5a0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0650 size=96 callers=1 calls=0
*/
void sub_5a0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0650ULL || rel >= 0x5a06b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a06b0 size=32 callers=0 calls=0
*/
void sub_5a06b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a06b0ULL || rel >= 0x5a06d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a06d0 size=80 callers=0 calls=0
*/
void sub_5a06d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a06d0ULL || rel >= 0x5a0720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0720 size=32 callers=0 calls=0
*/
void sub_5a0720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0720ULL || rel >= 0x5a0740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0740 size=80 callers=0 calls=0
*/
void sub_5a0740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0740ULL || rel >= 0x5a0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0790 size=16 callers=4 calls=0
*/
void sub_5a0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0790ULL || rel >= 0x5a07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a07a0 size=16 callers=4 calls=0
*/
void sub_5a07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a07a0ULL || rel >= 0x5a07b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a07b0 size=16 callers=3 calls=0
*/
void sub_5a07b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a07b0ULL || rel >= 0x5a07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a07c0 size=16 callers=0 calls=0
*/
void sub_5a07c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a07c0ULL || rel >= 0x5a07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a07d0 size=64 callers=3 calls=0
*/
void sub_5a07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a07d0ULL || rel >= 0x5a0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0810 size=16 callers=1 calls=0
*/
void sub_5a0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0810ULL || rel >= 0x5a0820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0820 size=16 callers=6 calls=0
*/
void sub_5a0820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0820ULL || rel >= 0x5a0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0830 size=64 callers=2 calls=0
*/
void sub_5a0830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0830ULL || rel >= 0x5a0870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0870 size=32 callers=13 calls=0
*/
void sub_5a0870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0870ULL || rel >= 0x5a0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0890 size=48 callers=2 calls=0
*/
void sub_5a0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0890ULL || rel >= 0x5a08c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a08c0 size=32 callers=0 calls=0
*/
void sub_5a08c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a08c0ULL || rel >= 0x5a08e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a08e0 size=16 callers=5 calls=0
*/
void sub_5a08e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a08e0ULL || rel >= 0x5a08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a08f0 size=16 callers=6 calls=0
*/
void sub_5a08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a08f0ULL || rel >= 0x5a0900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0900 size=272 callers=1 calls=1
   calls: sub_65d700
*/
void sub_5a0900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0900ULL || rel >= 0x5a0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0a10 size=256 callers=1 calls=3
   calls: sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_5a0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0a10ULL || rel >= 0x5a0b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0b10 size=960 callers=0 calls=7
   calls: sub_596e60, sub_5971f0, sub_5a0ed0, sub_5a1660, sub_5a1870, sub_5a1ae0, sub_612ef0
*/
void sub_5a0b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0b10ULL || rel >= 0x5a0ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a0ed0 size=688 callers=2 calls=1
   calls: sub_5a1d00
*/
void sub_5a0ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0ed0ULL || rel >= 0x5a1180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a1180 size=16 callers=0 calls=0
*/
void sub_5a1180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a1180ULL || rel >= 0x5a1190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a1190 size=304 callers=0 calls=2
   calls: sub_5a0870, sub_5a2280
*/
void sub_5a1190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a1190ULL || rel >= 0x5a12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a12c0 size=16 callers=0 calls=0
*/
void sub_5a12c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a12c0ULL || rel >= 0x5a12d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a12d0 size=528 callers=0 calls=4
   calls: sub_5a0a10, sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_5a12d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a12d0ULL || rel >= 0x5a14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a14e0 size=192 callers=0 calls=0
*/
void sub_5a14e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a14e0ULL || rel >= 0x5a15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a15a0 size=192 callers=0 calls=0
*/
void sub_5a15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a15a0ULL || rel >= 0x5a1660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a1660 size=528 callers=2 calls=0
*/
void sub_5a1660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a1660ULL || rel >= 0x5a1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a1870 size=624 callers=1 calls=1
   calls: sub_65ccf0
*/
void sub_5a1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a1870ULL || rel >= 0x5a1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a1ae0 size=544 callers=1 calls=0
*/
void sub_5a1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a1ae0ULL || rel >= 0x5a1d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a1d00 size=288 callers=6 calls=1
   calls: sub_5a1e20
*/
void sub_5a1d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a1d00ULL || rel >= 0x5a1e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a1e20 size=416 callers=1 calls=1
   calls: sub_5a1fc0
*/
void sub_5a1e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a1e20ULL || rel >= 0x5a1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a1fc0 size=704 callers=1 calls=0
*/
void sub_5a1fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a1fc0ULL || rel >= 0x5a2280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a2280 size=416 callers=3 calls=3
   calls: sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_5a2280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a2280ULL || rel >= 0x5a2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a2420 size=16 callers=0 calls=0
*/
void sub_5a2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a2420ULL || rel >= 0x5a2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a2430 size=48 callers=0 calls=0
*/
void sub_5a2430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a2430ULL || rel >= 0x5a2460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a2460 size=176 callers=0 calls=0
*/
void sub_5a2460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a2460ULL || rel >= 0x5a2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a2510 size=480 callers=0 calls=0
*/
void sub_5a2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a2510ULL || rel >= 0x5a26f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a26f0 size=464 callers=0 calls=0
*/
void sub_5a26f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a26f0ULL || rel >= 0x5a28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a28c0 size=16 callers=0 calls=0
*/
void sub_5a28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a28c0ULL || rel >= 0x5a28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a28d0 size=48 callers=0 calls=0
*/
void sub_5a28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a28d0ULL || rel >= 0x5a2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a2900 size=192 callers=0 calls=1
   calls: sub_5a2de0
*/
void sub_5a2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a2900ULL || rel >= 0x5a29c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a29c0 size=528 callers=0 calls=1
   calls: sub_5a2de0
*/
void sub_5a29c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a29c0ULL || rel >= 0x5a2bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a2bd0 size=528 callers=0 calls=1
   calls: sub_5a2de0
*/
void sub_5a2bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a2bd0ULL || rel >= 0x5a2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a2de0 size=736 callers=10 calls=0
*/
void sub_5a2de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a2de0ULL || rel >= 0x5a30c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a30c0 size=272 callers=1 calls=1
   calls: sub_65d700
*/
void sub_5a30c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a30c0ULL || rel >= 0x5a31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a31d0 size=1728 callers=1 calls=8
   calls: sub_596e70, sub_5971f0, sub_597b50, sub_597b60, sub_597b70, sub_597f00, sub_5a3890, sub_5a7550
*/
void sub_5a31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a31d0ULL || rel >= 0x5a3890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a3890 size=288 callers=1 calls=0
*/
void sub_5a3890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a3890ULL || rel >= 0x5a39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a39b0 size=4288 callers=0 calls=14
   calls: sub_596e70, sub_5971f0, sub_597b50, sub_597b60, sub_597b70, sub_597f00, sub_5a31d0, sub_5a4a70, sub_5a4bc0, sub_5a4d10, sub_5a7b90, sub_5a7dd0
   ... +2 more
*/
void sub_5a39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a39b0ULL || rel >= 0x5a4a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a4a70 size=336 callers=1 calls=1
   calls: sub_5a7760
*/
void sub_5a4a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a4a70ULL || rel >= 0x5a4bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a4bc0 size=336 callers=1 calls=1
   calls: sub_5a78c0
*/
void sub_5a4bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a4bc0ULL || rel >= 0x5a4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a4d10 size=336 callers=1 calls=1
   calls: sub_5a7a20
*/
void sub_5a4d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a4d10ULL || rel >= 0x5a4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a4e60 size=16 callers=0 calls=0
*/
void sub_5a4e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a4e60ULL || rel >= 0x5a4e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a4e70 size=496 callers=0 calls=1
   calls: sub_5a0870
*/
void sub_5a4e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a4e70ULL || rel >= 0x5a5060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a5060 size=16 callers=0 calls=0
*/
void sub_5a5060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a5060ULL || rel >= 0x5a5070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a5070 size=2592 callers=0 calls=0
*/
void sub_5a5070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a5070ULL || rel >= 0x5a5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a5a90 size=3008 callers=0 calls=0
*/
void sub_5a5a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a5a90ULL || rel >= 0x5a6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6650 size=448 callers=1 calls=1
   calls: sub_5a6de0
*/
void sub_5a6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6650ULL || rel >= 0x5a6810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6810 size=48 callers=0 calls=1
   calls: sub_5a6650
*/
void sub_5a6810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6810ULL || rel >= 0x5a6840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6840 size=16 callers=0 calls=0
*/
void sub_5a6840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6840ULL || rel >= 0x5a6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6850 size=64 callers=0 calls=0
*/
void sub_5a6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6850ULL || rel >= 0x5a6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6890 size=64 callers=0 calls=0
*/
void sub_5a6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6890ULL || rel >= 0x5a68d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a68d0 size=192 callers=0 calls=0
*/
void sub_5a68d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a68d0ULL || rel >= 0x5a6990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6990 size=192 callers=0 calls=0
*/
void sub_5a6990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6990ULL || rel >= 0x5a6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6a50 size=16 callers=0 calls=0
*/
void sub_5a6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6a50ULL || rel >= 0x5a6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6a60 size=48 callers=0 calls=0
*/
void sub_5a6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6a60ULL || rel >= 0x5a6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6a90 size=128 callers=0 calls=0
*/
void sub_5a6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6a90ULL || rel >= 0x5a6b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6b10 size=368 callers=0 calls=0
*/
void sub_5a6b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6b10ULL || rel >= 0x5a6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6c80 size=352 callers=0 calls=0
*/
void sub_5a6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6c80ULL || rel >= 0x5a6de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6de0 size=256 callers=1 calls=0
*/
void sub_5a6de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6de0ULL || rel >= 0x5a6ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a6ee0 size=624 callers=0 calls=3
   calls: sub_5a7150, sub_5a7280, sub_5a7370
*/
void sub_5a6ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a6ee0ULL || rel >= 0x5a7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a7150 size=304 callers=1 calls=1
   calls: sub_5a7450
*/
void sub_5a7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a7150ULL || rel >= 0x5a7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a7280 size=240 callers=1 calls=0
*/
void sub_5a7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a7280ULL || rel >= 0x5a7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a7370 size=224 callers=2 calls=1
   calls: sub_65d700
*/
void sub_5a7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a7370ULL || rel >= 0x5a7450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a7450 size=256 callers=4 calls=0
*/
void sub_5a7450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a7450ULL || rel >= 0x5a7550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a7550 size=528 callers=4 calls=0
*/
void sub_5a7550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a7550ULL || rel >= 0x5a7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a7760 size=352 callers=2 calls=0
*/
void sub_5a7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a7760ULL || rel >= 0x5a78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a78c0 size=352 callers=2 calls=0
*/
void sub_5a78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a78c0ULL || rel >= 0x5a7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a7a20 size=368 callers=2 calls=0
*/
void sub_5a7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a7a20ULL || rel >= 0x5a7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a7b90 size=576 callers=1 calls=1
   calls: sub_5a7760
*/
void sub_5a7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a7b90ULL || rel >= 0x5a7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a7dd0 size=576 callers=1 calls=1
   calls: sub_5a78c0
*/
void sub_5a7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a7dd0ULL || rel >= 0x5a8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8010 size=576 callers=1 calls=1
   calls: sub_5a7a20
*/
void sub_5a8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8010ULL || rel >= 0x5a8250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8250 size=64 callers=0 calls=0
*/
void sub_5a8250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8250ULL || rel >= 0x5a8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8290 size=32 callers=0 calls=0
*/
void sub_5a8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8290ULL || rel >= 0x5a82b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a82b0 size=64 callers=0 calls=0
*/
void sub_5a82b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a82b0ULL || rel >= 0x5a82f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a82f0 size=48 callers=0 calls=0
*/
void sub_5a82f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a82f0ULL || rel >= 0x5a8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8320 size=80 callers=1 calls=1
   calls: sub_65ccf0
*/
void sub_5a8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8320ULL || rel >= 0x5a8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8370 size=128 callers=0 calls=1
   calls: sub_65cd10
*/
void sub_5a8370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8370ULL || rel >= 0x5a83f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a83f0 size=528 callers=0 calls=4
   calls: sub_65ccf0, sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_5a83f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a83f0ULL || rel >= 0x5a8600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8600 size=16 callers=0 calls=0
*/
void sub_5a8600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8600ULL || rel >= 0x5a8610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8610 size=16 callers=0 calls=0
*/
void sub_5a8610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8610ULL || rel >= 0x5a8620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8620 size=256 callers=0 calls=5
   calls: sub_5a07a0, sub_5a0810, sub_5a0870, sub_5a08f0, sub_5a2280
*/
void sub_5a8620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8620ULL || rel >= 0x5a8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8720 size=16 callers=0 calls=0
*/
void sub_5a8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8720ULL || rel >= 0x5a8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8730 size=16 callers=0 calls=0
*/
void sub_5a8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8730ULL || rel >= 0x5a8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8740 size=16 callers=0 calls=0
*/
void sub_5a8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8740ULL || rel >= 0x5a8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8750 size=176 callers=1 calls=1
   calls: sub_65d700
*/
void sub_5a8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8750ULL || rel >= 0x5a8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8800 size=416 callers=1 calls=3
   calls: sub_596e80, sub_5971f0, sub_5a7550
*/
void sub_5a8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8800ULL || rel >= 0x5a89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a89a0 size=624 callers=0 calls=6
   calls: sub_596e80, sub_5971f0, sub_5a8800, sub_5a8c10, sub_5a9500, sub_615bd0
*/
void sub_5a89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a89a0ULL || rel >= 0x5a8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8c10 size=352 callers=1 calls=0
*/
void sub_5a8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8c10ULL || rel >= 0x5a8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8d70 size=16 callers=0 calls=0
*/
void sub_5a8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8d70ULL || rel >= 0x5a8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8d80 size=224 callers=0 calls=1
   calls: sub_5a0870
*/
void sub_5a8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8d80ULL || rel >= 0x5a8e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8e60 size=16 callers=0 calls=0
*/
void sub_5a8e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8e60ULL || rel >= 0x5a8e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a8e70 size=592 callers=0 calls=1
   calls: sub_615c50
*/
void sub_5a8e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a8e70ULL || rel >= 0x5a90c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a90c0 size=832 callers=0 calls=0
*/
void sub_5a90c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a90c0ULL || rel >= 0x5a9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9400 size=128 callers=0 calls=0
*/
void sub_5a9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9400ULL || rel >= 0x5a9480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9480 size=128 callers=0 calls=0
*/
void sub_5a9480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9480ULL || rel >= 0x5a9500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9500 size=448 callers=1 calls=0
*/
void sub_5a9500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9500ULL || rel >= 0x5a96c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a96c0 size=208 callers=2 calls=0
*/
void sub_5a96c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a96c0ULL || rel >= 0x5a9790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9790 size=48 callers=1 calls=0
*/
void sub_5a9790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9790ULL || rel >= 0x5a97c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a97c0 size=64 callers=7 calls=0
*/
void sub_5a97c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a97c0ULL || rel >= 0x5a9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9800 size=144 callers=1 calls=0
*/
void sub_5a9800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9800ULL || rel >= 0x5a9890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9890 size=144 callers=1 calls=0
*/
void sub_5a9890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9890ULL || rel >= 0x5a9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9920 size=144 callers=1 calls=0
*/
void sub_5a9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9920ULL || rel >= 0x5a99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a99b0 size=64 callers=1 calls=1
   calls: sub_59e440
*/
void sub_5a99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a99b0ULL || rel >= 0x5a99f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a99f0 size=16 callers=0 calls=0
*/
void sub_5a99f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a99f0ULL || rel >= 0x5a9a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9a00 size=64 callers=0 calls=1
   calls: sub_59f310
*/
void sub_5a9a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9a00ULL || rel >= 0x5a9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9a40 size=16 callers=0 calls=0
*/
void sub_5a9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9a40ULL || rel >= 0x5a9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9a50 size=16 callers=0 calls=0
*/
void sub_5a9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9a50ULL || rel >= 0x5a9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9a60 size=16 callers=0 calls=0
*/
void sub_5a9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9a60ULL || rel >= 0x5a9a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9a70 size=16 callers=0 calls=0
*/
void sub_5a9a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9a70ULL || rel >= 0x5a9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9a80 size=608 callers=1 calls=5
   calls: sub_59e440, sub_5a9ce0, sub_5ab480, sub_5ab6d0, sub_65d700
*/
void sub_5a9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9a80ULL || rel >= 0x5a9ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9ce0 size=288 callers=1 calls=0
*/
void sub_5a9ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9ce0ULL || rel >= 0x5a9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005a9e00 size=736 callers=0 calls=5
   calls: sub_596e70, sub_5971f0, sub_597b60, sub_597b70, sub_597f00
*/
void sub_5a9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a9e00ULL || rel >= 0x5aa0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005aa0e0 size=16 callers=0 calls=0
*/
void sub_5aa0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5aa0e0ULL || rel >= 0x5aa0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005aa0f0 size=944 callers=0 calls=0
*/
void sub_5aa0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5aa0f0ULL || rel >= 0x5aa4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005aa4a0 size=1744 callers=0 calls=6
   calls: sub_596e70, sub_5971f0, sub_597b50, sub_597b60, sub_597b70, sub_597f00
*/
void sub_5aa4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5aa4a0ULL || rel >= 0x5aab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005aab70 size=32 callers=0 calls=0
*/
void sub_5aab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5aab70ULL || rel >= 0x5aab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005aab90 size=64 callers=0 calls=1
   calls: sub_5aabd0
*/
void sub_5aab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5aab90ULL || rel >= 0x5aabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005aabd0 size=256 callers=1 calls=0
*/
void sub_5aabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5aabd0ULL || rel >= 0x5aacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005aacd0 size=624 callers=0 calls=3
   calls: sub_5aaf40, sub_5ab070, sub_5ab160
*/
void sub_5aacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5aacd0ULL || rel >= 0x5aaf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005aaf40 size=304 callers=1 calls=2
   calls: sub_5ab230, sub_5ab360
*/
void sub_5aaf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5aaf40ULL || rel >= 0x5ab070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ab070 size=240 callers=1 calls=0
*/
void sub_5ab070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab070ULL || rel >= 0x5ab160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ab160 size=208 callers=2 calls=1
   calls: sub_65d700
*/
void sub_5ab160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab160ULL || rel >= 0x5ab230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ab230 size=304 callers=2 calls=0
*/
void sub_5ab230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab230ULL || rel >= 0x5ab360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ab360 size=288 callers=1 calls=0
*/
void sub_5ab360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab360ULL || rel >= 0x5ab480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ab480 size=592 callers=2 calls=0
*/
void sub_5ab480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab480ULL || rel >= 0x5ab6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ab6d0 size=560 callers=1 calls=0
*/
void sub_5ab6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab6d0ULL || rel >= 0x5ab900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ab900 size=64 callers=1 calls=1
   calls: sub_59e440
*/
void sub_5ab900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab900ULL || rel >= 0x5ab940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ab940 size=144 callers=0 calls=4
   calls: sub_65ccf0, sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_5ab940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab940ULL || rel >= 0x5ab9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ab9d0 size=160 callers=0 calls=4
   calls: sub_59f2b0, sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_5ab9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab9d0ULL || rel >= 0x5aba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005aba70 size=128 callers=0 calls=1
   calls: sub_65cd70
*/
void sub_5aba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5aba70ULL || rel >= 0x5abaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abaf0 size=16 callers=0 calls=0
*/
void sub_5abaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abaf0ULL || rel >= 0x5abb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abb00 size=16 callers=1 calls=0
*/
void sub_5abb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abb00ULL || rel >= 0x5abb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abb10 size=16 callers=0 calls=0
*/
void sub_5abb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abb10ULL || rel >= 0x5abb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abb20 size=224 callers=1 calls=2
   calls: sub_59e440, sub_65d700
*/
void sub_5abb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abb20ULL || rel >= 0x5abc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abc00 size=128 callers=0 calls=0
*/
void sub_5abc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abc00ULL || rel >= 0x5abc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abc80 size=16 callers=0 calls=0
*/
void sub_5abc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abc80ULL || rel >= 0x5abc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abc90 size=336 callers=0 calls=0
*/
void sub_5abc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abc90ULL || rel >= 0x5abde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abde0 size=320 callers=0 calls=3
   calls: sub_596e80, sub_5971f0, sub_615c50
*/
void sub_5abde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abde0ULL || rel >= 0x5abf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abf20 size=64 callers=0 calls=0
*/
void sub_5abf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abf20ULL || rel >= 0x5abf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abf60 size=96 callers=0 calls=0
*/
void sub_5abf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abf60ULL || rel >= 0x5abfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abfc0 size=16 callers=1 calls=0
*/
void sub_5abfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abfc0ULL || rel >= 0x5abfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005abfd0 size=160 callers=2 calls=1
   calls: sub_5abfd0
*/
void sub_5abfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abfd0ULL || rel >= 0x5ac070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac070 size=96 callers=2 calls=1
   calls: sub_5ac070
*/
void sub_5ac070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac070ULL || rel >= 0x5ac0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac0d0 size=96 callers=2 calls=1
   calls: sub_5ac0d0
*/
void sub_5ac0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac0d0ULL || rel >= 0x5ac130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac130 size=96 callers=1 calls=1
   calls: sub_5ac130
*/
void sub_5ac130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac130ULL || rel >= 0x5ac190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac190 size=96 callers=2 calls=1
   calls: sub_5ac190
*/
void sub_5ac190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac190ULL || rel >= 0x5ac1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac1f0 size=128 callers=1 calls=1
   calls: sub_5ac1f0
*/
void sub_5ac1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac1f0ULL || rel >= 0x5ac270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac270 size=16 callers=5 calls=0
*/
void sub_5ac270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac270ULL || rel >= 0x5ac280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac280 size=112 callers=3 calls=1
   calls: sub_5ac280
*/
void sub_5ac280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac280ULL || rel >= 0x5ac2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac2f0 size=16 callers=4 calls=0
*/
void sub_5ac2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac2f0ULL || rel >= 0x5ac300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac300 size=16 callers=0 calls=0
*/
void sub_5ac300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac300ULL || rel >= 0x5ac310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac310 size=208 callers=2 calls=1
   calls: sub_5ac520
*/
void sub_5ac310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac310ULL || rel >= 0x5ac3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac3e0 size=320 callers=1 calls=0
*/
void sub_5ac3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac3e0ULL || rel >= 0x5ac520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac520 size=448 callers=1 calls=0
*/
void sub_5ac520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac520ULL || rel >= 0x5ac6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ac6e0 size=1056 callers=1 calls=5
   calls: sub_5acb00, sub_5ace70, sub_5ad090, sub_612ef0, sub_65d700
*/
void sub_5ac6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac6e0ULL || rel >= 0x5acb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005acb00 size=384 callers=1 calls=0
*/
void sub_5acb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5acb00ULL || rel >= 0x5acc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005acc80 size=16 callers=1 calls=0
*/
void sub_5acc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5acc80ULL || rel >= 0x5acc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005acc90 size=480 callers=1 calls=3
   calls: sub_5ad190, sub_5aec10, sub_5af770
*/
void sub_5acc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5acc90ULL || rel >= 0x5ace70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ace70 size=544 callers=1 calls=1
   calls: sub_5ad090
*/
void sub_5ace70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ace70ULL || rel >= 0x5ad090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ad090 size=256 callers=2 calls=0
*/
void sub_5ad090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ad090ULL || rel >= 0x5ad190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ad190 size=6144 callers=2 calls=2
   calls: sub_5ae990, sub_65cd70
*/
void sub_5ad190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ad190ULL || rel >= 0x5ae990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ae990 size=640 callers=1 calls=0
*/
void sub_5ae990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ae990ULL || rel >= 0x5aec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005aec10 size=2368 callers=1 calls=1
   calls: sub_612f70
*/
void sub_5aec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5aec10ULL || rel >= 0x5af550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005af550 size=544 callers=0 calls=1
   calls: sub_5afcc0
*/
void sub_5af550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5af550ULL || rel >= 0x5af770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005af770 size=1360 callers=1 calls=1
   calls: sub_65cd70
*/
void sub_5af770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5af770ULL || rel >= 0x5afcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005afcc0 size=736 callers=1 calls=0
*/
void sub_5afcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5afcc0ULL || rel >= 0x5affa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005affa0 size=2256 callers=1 calls=10
   calls: sub_5b0870, sub_5b3080, sub_5b32b0, sub_5b3620, sub_5b3850, sub_5b3bc0, sub_5b3de0, sub_5b4150, sub_5b4370, sub_65d700
*/
void sub_5affa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5affa0ULL || rel >= 0x5b0870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0870 size=432 callers=1 calls=0
*/
void sub_5b0870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0870ULL || rel >= 0x5b0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0a20 size=672 callers=0 calls=1
   calls: sub_5b46e0
*/
void sub_5b0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0a20ULL || rel >= 0x5b0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0cc0 size=112 callers=0 calls=0
*/
void sub_5b0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0cc0ULL || rel >= 0x5b0d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0d30 size=32 callers=0 calls=0
*/
void sub_5b0d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0d30ULL || rel >= 0x5b0d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0d50 size=112 callers=0 calls=0
*/
void sub_5b0d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0d50ULL || rel >= 0x5b0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0dc0 size=112 callers=0 calls=0
*/
void sub_5b0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0dc0ULL || rel >= 0x5b0e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0e30 size=112 callers=0 calls=0
*/
void sub_5b0e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0e30ULL || rel >= 0x5b0ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0ea0 size=16 callers=0 calls=0
*/
void sub_5b0ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0ea0ULL || rel >= 0x5b0eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0eb0 size=32 callers=0 calls=0
*/
void sub_5b0eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0eb0ULL || rel >= 0x5b0ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0ed0 size=32 callers=0 calls=0
*/
void sub_5b0ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0ed0ULL || rel >= 0x5b0ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0ef0 size=112 callers=0 calls=0
*/
void sub_5b0ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0ef0ULL || rel >= 0x5b0f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b0f60 size=240 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b0f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b0f60ULL || rel >= 0x5b1050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1050 size=240 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b1050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1050ULL || rel >= 0x5b1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1140 size=512 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1140ULL || rel >= 0x5b1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1340 size=80 callers=0 calls=0
*/
void sub_5b1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1340ULL || rel >= 0x5b1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1390 size=16 callers=0 calls=0
*/
void sub_5b1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1390ULL || rel >= 0x5b13a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b13a0 size=80 callers=0 calls=0
*/
void sub_5b13a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b13a0ULL || rel >= 0x5b13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b13f0 size=32 callers=0 calls=0
*/
void sub_5b13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b13f0ULL || rel >= 0x5b1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1410 size=32 callers=0 calls=0
*/
void sub_5b1410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1410ULL || rel >= 0x5b1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1430 size=112 callers=0 calls=0
*/
void sub_5b1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1430ULL || rel >= 0x5b14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b14a0 size=240 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b14a0ULL || rel >= 0x5b1590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1590 size=240 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b1590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1590ULL || rel >= 0x5b1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1680 size=512 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1680ULL || rel >= 0x5b1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1880 size=80 callers=0 calls=0
*/
void sub_5b1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1880ULL || rel >= 0x5b18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b18d0 size=16 callers=0 calls=0
*/
void sub_5b18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b18d0ULL || rel >= 0x5b18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b18e0 size=80 callers=0 calls=0
*/
void sub_5b18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b18e0ULL || rel >= 0x5b1930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1930 size=32 callers=0 calls=0
*/
void sub_5b1930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1930ULL || rel >= 0x5b1950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1950 size=32 callers=0 calls=0
*/
void sub_5b1950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1950ULL || rel >= 0x5b1970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1970 size=112 callers=0 calls=0
*/
void sub_5b1970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1970ULL || rel >= 0x5b19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b19e0 size=240 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b19e0ULL || rel >= 0x5b1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1ad0 size=240 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1ad0ULL || rel >= 0x5b1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1bc0 size=448 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1bc0ULL || rel >= 0x5b1d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1d80 size=80 callers=0 calls=0
*/
void sub_5b1d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1d80ULL || rel >= 0x5b1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1dd0 size=16 callers=0 calls=0
*/
void sub_5b1dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1dd0ULL || rel >= 0x5b1de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1de0 size=80 callers=0 calls=0
*/
void sub_5b1de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1de0ULL || rel >= 0x5b1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1e30 size=32 callers=0 calls=0
*/
void sub_5b1e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1e30ULL || rel >= 0x5b1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1e50 size=32 callers=0 calls=0
*/
void sub_5b1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1e50ULL || rel >= 0x5b1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1e70 size=112 callers=0 calls=0
*/
void sub_5b1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1e70ULL || rel >= 0x5b1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1ee0 size=240 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1ee0ULL || rel >= 0x5b1fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b1fd0 size=240 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b1fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1fd0ULL || rel >= 0x5b20c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b20c0 size=448 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5b20c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b20c0ULL || rel >= 0x5b2280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2280 size=80 callers=0 calls=0
*/
void sub_5b2280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2280ULL || rel >= 0x5b22d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b22d0 size=16 callers=0 calls=0
*/
void sub_5b22d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b22d0ULL || rel >= 0x5b22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b22e0 size=80 callers=0 calls=0
*/
void sub_5b22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b22e0ULL || rel >= 0x5b2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2330 size=80 callers=0 calls=0
*/
void sub_5b2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2330ULL || rel >= 0x5b2380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2380 size=80 callers=0 calls=0
*/
void sub_5b2380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2380ULL || rel >= 0x5b23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b23d0 size=80 callers=0 calls=0
*/
void sub_5b23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b23d0ULL || rel >= 0x5b2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2420 size=80 callers=0 calls=0
*/
void sub_5b2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2420ULL || rel >= 0x5b2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2470 size=96 callers=0 calls=0
*/
void sub_5b2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2470ULL || rel >= 0x5b24d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b24d0 size=96 callers=0 calls=0
*/
void sub_5b24d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b24d0ULL || rel >= 0x5b2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2530 size=640 callers=0 calls=0
*/
void sub_5b2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2530ULL || rel >= 0x5b27b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b27b0 size=16 callers=0 calls=0
*/
void sub_5b27b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b27b0ULL || rel >= 0x5b27c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b27c0 size=80 callers=0 calls=0
*/
void sub_5b27c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b27c0ULL || rel >= 0x5b2810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2810 size=80 callers=0 calls=0
*/
void sub_5b2810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2810ULL || rel >= 0x5b2860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2860 size=48 callers=0 calls=0
*/
void sub_5b2860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2860ULL || rel >= 0x5b2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2890 size=112 callers=0 calls=1
   calls: sub_5b2f90
*/
void sub_5b2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2890ULL || rel >= 0x5b2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2900 size=112 callers=0 calls=0
*/
void sub_5b2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2900ULL || rel >= 0x5b2970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2970 size=112 callers=0 calls=0
*/
void sub_5b2970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2970ULL || rel >= 0x5b29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b29e0 size=112 callers=0 calls=0
*/
void sub_5b29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b29e0ULL || rel >= 0x5b2a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2a50 size=112 callers=0 calls=0
*/
void sub_5b2a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2a50ULL || rel >= 0x5b2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2ac0 size=16 callers=0 calls=0
*/
void sub_5b2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2ac0ULL || rel >= 0x5b2ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2ad0 size=16 callers=0 calls=0
*/
void sub_5b2ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2ad0ULL || rel >= 0x5b2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2ae0 size=80 callers=0 calls=0
*/
void sub_5b2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2ae0ULL || rel >= 0x5b2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2b30 size=64 callers=0 calls=0
*/
void sub_5b2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2b30ULL || rel >= 0x5b2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2b70 size=32 callers=0 calls=0
*/
void sub_5b2b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2b70ULL || rel >= 0x5b2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2b90 size=112 callers=0 calls=1
   calls: sub_5b2f90
*/
void sub_5b2b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2b90ULL || rel >= 0x5b2c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2c00 size=112 callers=0 calls=0
*/
void sub_5b2c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2c00ULL || rel >= 0x5b2c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2c70 size=112 callers=0 calls=0
*/
void sub_5b2c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2c70ULL || rel >= 0x5b2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2ce0 size=112 callers=0 calls=0
*/
void sub_5b2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2ce0ULL || rel >= 0x5b2d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2d50 size=112 callers=0 calls=0
*/
void sub_5b2d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2d50ULL || rel >= 0x5b2dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2dc0 size=112 callers=0 calls=1
   calls: sub_5b2f90
*/
void sub_5b2dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2dc0ULL || rel >= 0x5b2e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2e30 size=16 callers=0 calls=0
*/
void sub_5b2e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2e30ULL || rel >= 0x5b2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2e40 size=16 callers=0 calls=0
*/
void sub_5b2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2e40ULL || rel >= 0x5b2e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2e50 size=80 callers=0 calls=0
*/
void sub_5b2e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2e50ULL || rel >= 0x5b2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2ea0 size=16 callers=0 calls=0
*/
void sub_5b2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2ea0ULL || rel >= 0x5b2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2eb0 size=80 callers=0 calls=0
*/
void sub_5b2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2eb0ULL || rel >= 0x5b2f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2f00 size=16 callers=0 calls=0
*/
void sub_5b2f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2f00ULL || rel >= 0x5b2f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2f10 size=16 callers=0 calls=0
*/
void sub_5b2f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2f10ULL || rel >= 0x5b2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2f20 size=16 callers=0 calls=0
*/
void sub_5b2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2f20ULL || rel >= 0x5b2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2f30 size=80 callers=0 calls=0
*/
void sub_5b2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2f30ULL || rel >= 0x5b2f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2f80 size=16 callers=0 calls=0
*/
void sub_5b2f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2f80ULL || rel >= 0x5b2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b2f90 size=240 callers=3 calls=0
*/
void sub_5b2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b2f90ULL || rel >= 0x5b3080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b3080 size=560 callers=1 calls=0
*/
void sub_5b3080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b3080ULL || rel >= 0x5b32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b32b0 size=608 callers=1 calls=1
   calls: sub_5b3510
*/
void sub_5b32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b32b0ULL || rel >= 0x5b3510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b3510 size=272 callers=1 calls=0
*/
void sub_5b3510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b3510ULL || rel >= 0x5b3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b3620 size=560 callers=1 calls=0
*/
void sub_5b3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b3620ULL || rel >= 0x5b3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b3850 size=608 callers=1 calls=1
   calls: sub_5b3ab0
*/
void sub_5b3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b3850ULL || rel >= 0x5b3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b3ab0 size=272 callers=1 calls=0
*/
void sub_5b3ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b3ab0ULL || rel >= 0x5b3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b3bc0 size=544 callers=1 calls=0
*/
void sub_5b3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b3bc0ULL || rel >= 0x5b3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b3de0 size=608 callers=1 calls=1
   calls: sub_5b4040
*/
void sub_5b3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b3de0ULL || rel >= 0x5b4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4040 size=272 callers=1 calls=0
*/
void sub_5b4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4040ULL || rel >= 0x5b4150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4150 size=544 callers=1 calls=0
*/
void sub_5b4150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4150ULL || rel >= 0x5b4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4370 size=608 callers=1 calls=1
   calls: sub_5b45d0
*/
void sub_5b4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4370ULL || rel >= 0x5b45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b45d0 size=272 callers=1 calls=0
*/
void sub_5b45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b45d0ULL || rel >= 0x5b46e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b46e0 size=80 callers=4 calls=0
*/
void sub_5b46e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b46e0ULL || rel >= 0x5b4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4730 size=64 callers=8 calls=0
*/
void sub_5b4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4730ULL || rel >= 0x5b4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4770 size=16 callers=1 calls=0
*/
void sub_5b4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4770ULL || rel >= 0x5b4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4780 size=112 callers=0 calls=1
   calls: sub_5b4a50
*/
void sub_5b4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4780ULL || rel >= 0x5b47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b47f0 size=128 callers=2 calls=1
   calls: sub_5b4a50
*/
void sub_5b47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b47f0ULL || rel >= 0x5b4870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4870 size=128 callers=9 calls=1
   calls: sub_5b4a50
*/
void sub_5b4870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4870ULL || rel >= 0x5b48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b48f0 size=128 callers=1 calls=1
   calls: sub_5b4a50
*/
void sub_5b48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b48f0ULL || rel >= 0x5b4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4970 size=128 callers=1 calls=1
   calls: sub_5b4a50
*/
void sub_5b4970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4970ULL || rel >= 0x5b49f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b49f0 size=96 callers=0 calls=1
   calls: sub_5b4a50
*/
void sub_5b49f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b49f0ULL || rel >= 0x5b4a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4a50 size=464 callers=6 calls=0
*/
void sub_5b4a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4a50ULL || rel >= 0x5b4c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4c20 size=416 callers=1 calls=1
   calls: sub_596d40
*/
void sub_5b4c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4c20ULL || rel >= 0x5b4dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4dc0 size=16 callers=2 calls=0
*/
void sub_5b4dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4dc0ULL || rel >= 0x5b4dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4dd0 size=272 callers=1 calls=3
   calls: sub_5b5350, sub_5b57a0, sub_5b6340
*/
void sub_5b4dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4dd0ULL || rel >= 0x5b4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4ee0 size=208 callers=2 calls=4
   calls: sub_5b5720, sub_5b64a0, sub_5b6650, sub_5b9120
*/
void sub_5b4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4ee0ULL || rel >= 0x5b4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b4fb0 size=128 callers=1 calls=5
   calls: sub_59d5a0, sub_59d690, sub_59d7a0, sub_5ac280, sub_5b6540
*/
void sub_5b4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4fb0ULL || rel >= 0x5b5030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5030 size=144 callers=1 calls=6
   calls: sub_59d5a0, sub_59d690, sub_59d7a0, sub_59d880, sub_5ac280, sub_5b6540
*/
void sub_5b5030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5030ULL || rel >= 0x5b50c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b50c0 size=48 callers=1 calls=2
   calls: sub_5b64a0, sub_5b9120
*/
void sub_5b50c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b50c0ULL || rel >= 0x5b50f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b50f0 size=16 callers=1 calls=0
*/
void sub_5b50f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b50f0ULL || rel >= 0x5b5100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5100 size=32 callers=0 calls=1
   calls: sub_5b64c0
*/
void sub_5b5100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5100ULL || rel >= 0x5b5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5120 size=16 callers=0 calls=0
*/
void sub_5b5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5120ULL || rel >= 0x5b5130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5130 size=32 callers=1 calls=1
   calls: sub_5b6ea0
*/
void sub_5b5130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5130ULL || rel >= 0x5b5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5150 size=128 callers=0 calls=2
   calls: sub_5b5350, sub_5e0bd0
*/
void sub_5b5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5150ULL || rel >= 0x5b51d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b51d0 size=128 callers=0 calls=2
   calls: sub_5b5350, sub_5e0bd0
*/
void sub_5b51d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b51d0ULL || rel >= 0x5b5250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5250 size=128 callers=0 calls=2
   calls: sub_5b5350, sub_5e0bd0
*/
void sub_5b5250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5250ULL || rel >= 0x5b52d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b52d0 size=128 callers=0 calls=2
   calls: sub_5b5350, sub_5e0bd0
*/
void sub_5b52d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b52d0ULL || rel >= 0x5b5350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5350 size=368 callers=9 calls=3
   calls: sub_5b5350, sub_5b54c0, sub_5b5590
*/
void sub_5b5350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5350ULL || rel >= 0x5b54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b54c0 size=208 callers=2 calls=0
*/
void sub_5b54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b54c0ULL || rel >= 0x5b5590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5590 size=208 callers=3 calls=1
   calls: sub_5b5660
*/
void sub_5b5590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5590ULL || rel >= 0x5b5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5660 size=192 callers=19 calls=1
   calls: sub_5b5660
*/
void sub_5b5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5660ULL || rel >= 0x5b5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5720 size=112 callers=1 calls=0
*/
void sub_5b5720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5720ULL || rel >= 0x5b5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5790 size=16 callers=2 calls=0
*/
void sub_5b5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5790ULL || rel >= 0x5b57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b57a0 size=2112 callers=2 calls=11
   calls: sub_5b5350, sub_5b54c0, sub_5b5660, sub_5b57a0, sub_5b5fe0, sub_5b6180, sub_5b6f20, sub_5b7130, sub_5b7360, sub_5b9680, sub_65d700
*/
void sub_5b57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b57a0ULL || rel >= 0x5b5fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b5fe0 size=416 callers=1 calls=1
   calls: sub_5b5590
*/
void sub_5b5fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b5fe0ULL || rel >= 0x5b6180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6180 size=448 callers=1 calls=1
   calls: sub_5b5350
*/
void sub_5b6180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6180ULL || rel >= 0x5b6340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6340 size=144 callers=2 calls=2
   calls: sub_5b6340, sub_5b7910
*/
void sub_5b6340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6340ULL || rel >= 0x5b63d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b63d0 size=80 callers=1 calls=1
   calls: sub_5b63d0
*/
void sub_5b63d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b63d0ULL || rel >= 0x5b6420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6420 size=16 callers=2 calls=0
*/
void sub_5b6420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6420ULL || rel >= 0x5b6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6430 size=16 callers=1 calls=0
*/
void sub_5b6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6430ULL || rel >= 0x5b6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6440 size=16 callers=1 calls=0
*/
void sub_5b6440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6440ULL || rel >= 0x5b6450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6450 size=64 callers=1 calls=0
*/
void sub_5b6450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6450ULL || rel >= 0x5b6490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6490 size=16 callers=5 calls=0
*/
void sub_5b6490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6490ULL || rel >= 0x5b64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b64a0 size=32 callers=3 calls=0
*/
void sub_5b64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b64a0ULL || rel >= 0x5b64c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b64c0 size=112 callers=2 calls=1
   calls: sub_5b64c0
*/
void sub_5b64c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b64c0ULL || rel >= 0x5b6530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6530 size=16 callers=5 calls=0
*/
void sub_5b6530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6530ULL || rel >= 0x5b6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6540 size=16 callers=2 calls=0
*/
void sub_5b6540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6540ULL || rel >= 0x5b6550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6550 size=96 callers=1 calls=1
   calls: sub_5b9a80
*/
void sub_5b6550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6550ULL || rel >= 0x5b65b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b65b0 size=80 callers=1 calls=1
   calls: sub_5b9a80
*/
void sub_5b65b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b65b0ULL || rel >= 0x5b6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6600 size=80 callers=1 calls=1
   calls: sub_5b9a80
*/
void sub_5b6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6600ULL || rel >= 0x5b6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6650 size=64 callers=1 calls=1
   calls: sub_5b6690
*/
void sub_5b6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6650ULL || rel >= 0x5b6690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6690 size=1024 callers=5 calls=12
   calls: sub_5b7990, sub_5b79a0, sub_5b79e0, sub_5b7d00, sub_5b80a0, sub_5b8120, sub_5b8170, sub_5b8180, sub_5b9a80, sub_5b9a90, sub_5b9ad0, sub_5b9d90
*/
void sub_5b6690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6690ULL || rel >= 0x5b6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6a90 size=144 callers=1 calls=5
   calls: sub_5b6690, sub_5b80a0, sub_5b8120, sub_5b9a80, sub_5b9d90
*/
void sub_5b6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6a90ULL || rel >= 0x5b6b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6b20 size=224 callers=0 calls=4
   calls: sub_5b6690, sub_5b6c00, sub_5b7fc0, sub_5b9ab0
*/
void sub_5b6b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6b20ULL || rel >= 0x5b6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6c00 size=144 callers=4 calls=6
   calls: sub_5ac3e0, sub_5b6c00, sub_5b8160, sub_5b9a80, sub_5b9aa0, sub_5b9ab0
*/
void sub_5b6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6c00ULL || rel >= 0x5b6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6c90 size=96 callers=1 calls=2
   calls: sub_5b6690, sub_5b9ab0
*/
void sub_5b6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6c90ULL || rel >= 0x5b6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6cf0 size=192 callers=0 calls=3
   calls: sub_5b6690, sub_5b6db0, sub_5b9ab0
*/
void sub_5b6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6cf0ULL || rel >= 0x5b6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6db0 size=208 callers=3 calls=6
   calls: sub_596d30, sub_5ac310, sub_5b9a80, sub_5b9aa0, sub_5b9b80, sub_5b9c80
*/
void sub_5b6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6db0ULL || rel >= 0x5b6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6e80 size=16 callers=6 calls=0
*/
void sub_5b6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6e80ULL || rel >= 0x5b6e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6e90 size=16 callers=0 calls=0
*/
void sub_5b6e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6e90ULL || rel >= 0x5b6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6ea0 size=16 callers=1 calls=0
*/
void sub_5b6ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6ea0ULL || rel >= 0x5b6eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6eb0 size=112 callers=1 calls=1
   calls: sub_5b6eb0
*/
void sub_5b6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6eb0ULL || rel >= 0x5b6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b6f20 size=528 callers=1 calls=1
   calls: sub_5b5590
*/
void sub_5b6f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b6f20ULL || rel >= 0x5b7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b7130 size=560 callers=1 calls=1
   calls: sub_5b5350
*/
void sub_5b7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b7130ULL || rel >= 0x5b7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b7360 size=1456 callers=1 calls=3
   calls: sub_5b5660, sub_5b81d0, sub_5b8920
*/
void sub_5b7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b7360ULL || rel >= 0x5b7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b7910 size=128 callers=1 calls=0
*/
void sub_5b7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b7910ULL || rel >= 0x5b7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b7990 size=16 callers=1 calls=0
*/
void sub_5b7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b7990ULL || rel >= 0x5b79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b79a0 size=64 callers=1 calls=0
*/
void sub_5b79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b79a0ULL || rel >= 0x5b79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b79e0 size=432 callers=2 calls=2
   calls: sub_5b4730, sub_5b4870
*/
void sub_5b79e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b79e0ULL || rel >= 0x5b7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b7b90 size=304 callers=2 calls=5
   calls: sub_5b4730, sub_5b4870, sub_5b65b0, sub_5b6600, sub_5b7cc0
*/
void sub_5b7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b7b90ULL || rel >= 0x5b7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b7cc0 size=64 callers=2 calls=1
   calls: sub_5b7cc0
*/
void sub_5b7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b7cc0ULL || rel >= 0x5b7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b7d00 size=704 callers=1 calls=11
   calls: sub_5b4730, sub_5b4870, sub_5b6450, sub_5b6550, sub_5b6a90, sub_5b6db0, sub_5b6e80, sub_5b7b90, sub_5b7fd0, sub_5b90b0, sub_5b9600
*/
void sub_5b7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b7d00ULL || rel >= 0x5b7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b7fc0 size=16 callers=1 calls=0
*/
void sub_5b7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b7fc0ULL || rel >= 0x5b7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b7fd0 size=208 callers=1 calls=5
   calls: sub_5b6c00, sub_5b6c90, sub_5b6db0, sub_5b90b0, sub_5b9580
*/
void sub_5b7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b7fd0ULL || rel >= 0x5b80a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b80a0 size=128 callers=2 calls=2
   calls: sub_5b6e80, sub_5b7b90
*/
void sub_5b80a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b80a0ULL || rel >= 0x5b8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8120 size=32 callers=2 calls=0
*/
void sub_5b8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8120ULL || rel >= 0x5b8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8140 size=16 callers=1 calls=0
*/
void sub_5b8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8140ULL || rel >= 0x5b8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8150 size=16 callers=3 calls=0
*/
void sub_5b8150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8150ULL || rel >= 0x5b8160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8160 size=16 callers=1 calls=0
*/
void sub_5b8160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8160ULL || rel >= 0x5b8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8170 size=16 callers=1 calls=0
*/
void sub_5b8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8170ULL || rel >= 0x5b8180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8180 size=80 callers=2 calls=1
   calls: sub_5b8880
*/
void sub_5b8180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8180ULL || rel >= 0x5b81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b81d0 size=1712 callers=5 calls=3
   calls: sub_5b5660, sub_5b81d0, sub_5b89f0
*/
void sub_5b81d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b81d0ULL || rel >= 0x5b8880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8880 size=160 callers=3 calls=1
   calls: sub_5b8880
*/
void sub_5b8880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8880ULL || rel >= 0x5b8920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8920 size=80 callers=2 calls=1
   calls: sub_5b8920
*/
void sub_5b8920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8920ULL || rel >= 0x5b8970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8970 size=64 callers=1 calls=1
   calls: sub_5b8970
*/
void sub_5b8970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8970ULL || rel >= 0x5b89b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b89b0 size=64 callers=1 calls=1
   calls: sub_5b89b0
*/
void sub_5b89b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b89b0ULL || rel >= 0x5b89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b89f0 size=336 callers=1 calls=0
*/
void sub_5b89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b89f0ULL || rel >= 0x5b8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8b40 size=1200 callers=0 calls=4
   calls: sub_5b47f0, sub_5b4870, sub_5b48f0, sub_5b4970
*/
void sub_5b8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8b40ULL || rel >= 0x5b8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b8ff0 size=64 callers=0 calls=0
*/
void sub_5b8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b8ff0ULL || rel >= 0x5b9030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9030 size=64 callers=0 calls=0
*/
void sub_5b9030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9030ULL || rel >= 0x5b9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9070 size=64 callers=0 calls=0
*/
void sub_5b9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9070ULL || rel >= 0x5b90b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b90b0 size=16 callers=2 calls=0
*/
void sub_5b90b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b90b0ULL || rel >= 0x5b90c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b90c0 size=48 callers=1 calls=2
   calls: sub_5b8140, sub_5b9120
*/
void sub_5b90c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b90c0ULL || rel >= 0x5b90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b90f0 size=48 callers=7 calls=2
   calls: sub_5b8150, sub_5b9120
*/
void sub_5b90f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b90f0ULL || rel >= 0x5b9120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9120 size=16 callers=9 calls=0
*/
void sub_5b9120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9120ULL || rel >= 0x5b9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9130 size=32 callers=2 calls=0
*/
void sub_5b9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9130ULL || rel >= 0x5b9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9150 size=208 callers=6 calls=2
   calls: sub_1c0, sub_5b6420
*/
void sub_5b9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9150ULL || rel >= 0x5b9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9220 size=208 callers=95 calls=2
   calls: sub_1c0, sub_5b6430
*/
void sub_5b9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9220ULL || rel >= 0x5b92f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b92f0 size=208 callers=6 calls=2
   calls: sub_1c0, sub_5b6440
*/
void sub_5b92f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b92f0ULL || rel >= 0x5b93c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b93c0 size=32 callers=10 calls=0
*/
void sub_5b93c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b93c0ULL || rel >= 0x5b93e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b93e0 size=32 callers=1 calls=0
*/
void sub_5b93e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b93e0ULL || rel >= 0x5b9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9400 size=48 callers=27 calls=2
   calls: sub_5b6490, sub_5b6530
*/
void sub_5b9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9400ULL || rel >= 0x5b9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9430 size=240 callers=4 calls=5
   calls: sub_1c0, sub_5b6420, sub_5b6490, sub_5b6530, sub_5b8150
*/
void sub_5b9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9430ULL || rel >= 0x5b9520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9520 size=96 callers=1 calls=3
   calls: sub_5b6490, sub_5b6530, sub_5b8150
*/
void sub_5b9520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9520ULL || rel >= 0x5b9580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9580 size=96 callers=1 calls=0
*/
void sub_5b9580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9580ULL || rel >= 0x5b95e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b95e0 size=16 callers=6 calls=0
*/
void sub_5b95e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b95e0ULL || rel >= 0x5b95f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b95f0 size=16 callers=1 calls=0
*/
void sub_5b95f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b95f0ULL || rel >= 0x5b9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9600 size=96 callers=1 calls=0
*/
void sub_5b9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9600ULL || rel >= 0x5b9660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9660 size=16 callers=1 calls=0
*/
void sub_5b9660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9660ULL || rel >= 0x5b9670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9670 size=16 callers=1 calls=0
*/
void sub_5b9670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9670ULL || rel >= 0x5b9680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9680 size=768 callers=1 calls=2
   calls: sub_5b9980, sub_5be6b0
*/
void sub_5b9680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9680ULL || rel >= 0x5b9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9980 size=256 callers=1 calls=1
   calls: sub_65d700
*/
void sub_5b9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9980ULL || rel >= 0x5b9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9a80 size=16 callers=10 calls=0
*/
void sub_5b9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9a80ULL || rel >= 0x5b9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9a90 size=16 callers=1 calls=0
*/
void sub_5b9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9a90ULL || rel >= 0x5b9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9aa0 size=16 callers=4 calls=0
*/
void sub_5b9aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9aa0ULL || rel >= 0x5b9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9ab0 size=16 callers=4 calls=0
*/
void sub_5b9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9ab0ULL || rel >= 0x5b9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9ac0 size=16 callers=0 calls=0
*/
void sub_5b9ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9ac0ULL || rel >= 0x5b9ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9ad0 size=80 callers=1 calls=3
   calls: sub_59f220, sub_5a0890, sub_5ac270
*/
void sub_5b9ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9ad0ULL || rel >= 0x5b9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9b20 size=48 callers=0 calls=2
   calls: sub_59f220, sub_5ac270
*/
void sub_5b9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9b20ULL || rel >= 0x5b9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9b50 size=48 callers=0 calls=2
   calls: sub_59f220, sub_5ac270
*/
void sub_5b9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9b50ULL || rel >= 0x5b9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9b80 size=256 callers=1 calls=1
   calls: sub_5ba8a0
*/
void sub_5b9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9b80ULL || rel >= 0x5b9c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9c80 size=240 callers=1 calls=4
   calls: sub_5abfd0, sub_5ac0d0, sub_5b4730, sub_5b4870
*/
void sub_5b9c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9c80ULL || rel >= 0x5b9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9d70 size=32 callers=0 calls=0
*/
void sub_5b9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9d70ULL || rel >= 0x5b9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9d90 size=192 callers=2 calls=7
   calls: sub_59f220, sub_5a07a0, sub_5a08f0, sub_5ac190, sub_5ac270, sub_5b4730, sub_5b4870
*/
void sub_5b9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9d90ULL || rel >= 0x5b9e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9e50 size=64 callers=0 calls=0
*/
void sub_5b9e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9e50ULL || rel >= 0x5b9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9e90 size=16 callers=0 calls=0
*/
void sub_5b9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9e90ULL || rel >= 0x5b9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005b9ea0 size=2320 callers=1 calls=6
   calls: sub_5baa40, sub_5bae10, sub_5bb1e0, sub_5bbe30, sub_5bd320, sub_65d700
*/
void sub_5b9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9ea0ULL || rel >= 0x5ba7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ba7b0 size=128 callers=1 calls=1
   calls: sub_5bbe40
*/
void sub_5ba7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ba7b0ULL || rel >= 0x5ba830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ba830 size=80 callers=1 calls=1
   calls: sub_5bbe50
*/
void sub_5ba830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ba830ULL || rel >= 0x5ba880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ba880 size=32 callers=1 calls=1
   calls: sub_5ba8e0
*/
void sub_5ba880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ba880ULL || rel >= 0x5ba8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ba8a0 size=64 callers=2 calls=1
   calls: sub_5ba8e0
*/
void sub_5ba8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ba8a0ULL || rel >= 0x5ba8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ba8e0 size=352 callers=2 calls=2
   calls: sub_5be770, sub_5be7b0
*/
void sub_5ba8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ba8e0ULL || rel >= 0x5baa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005baa40 size=272 callers=2 calls=0
*/
void sub_5baa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5baa40ULL || rel >= 0x5bab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bab50 size=704 callers=0 calls=0
*/
void sub_5bab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bab50ULL || rel >= 0x5bae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bae10 size=272 callers=2 calls=0
*/
void sub_5bae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bae10ULL || rel >= 0x5baf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005baf20 size=704 callers=0 calls=0
*/
void sub_5baf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5baf20ULL || rel >= 0x5bb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bb1e0 size=320 callers=1 calls=1
   calls: sub_5bbd40
*/
void sub_5bb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bb1e0ULL || rel >= 0x5bb320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bb320 size=368 callers=0 calls=4
   calls: sub_5bbb30, sub_5dd790, sub_5e26a0, sub_5e2930
*/
void sub_5bb320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bb320ULL || rel >= 0x5bb490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bb490 size=64 callers=0 calls=0
*/
void sub_5bb490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bb490ULL || rel >= 0x5bb4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bb4d0 size=96 callers=0 calls=0
*/
void sub_5bb4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bb4d0ULL || rel >= 0x5bb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bb530 size=416 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_5bb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bb530ULL || rel >= 0x5bb6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bb6d0 size=368 callers=0 calls=5
   calls: sub_5a96c0, sub_5a9790, sub_5abfc0, sub_5bb840, sub_5e2bc0
*/
void sub_5bb6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bb6d0ULL || rel >= 0x5bb840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bb840 size=304 callers=1 calls=1
   calls: sub_65d700
*/
void sub_5bb840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bb840ULL || rel >= 0x5bb970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bb970 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_5bb970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bb970ULL || rel >= 0x5bba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bba50 size=224 callers=0 calls=2
   calls: sub_5bbdd0, sub_5e2bc0
*/
void sub_5bba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bba50ULL || rel >= 0x5bbb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbb30 size=528 callers=4 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_5bbb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbb30ULL || rel >= 0x5bbd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbd40 size=144 callers=2 calls=0
*/
void sub_5bbd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbd40ULL || rel >= 0x5bbdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbdd0 size=80 callers=2 calls=0
*/
void sub_5bbdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbdd0ULL || rel >= 0x5bbe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbe20 size=16 callers=0 calls=0
*/
void sub_5bbe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbe20ULL || rel >= 0x5bbe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbe30 size=16 callers=2 calls=0
*/
void sub_5bbe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbe30ULL || rel >= 0x5bbe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbe40 size=16 callers=2 calls=0
*/
void sub_5bbe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbe40ULL || rel >= 0x5bbe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbe50 size=16 callers=2 calls=0
*/
void sub_5bbe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbe50ULL || rel >= 0x5bbe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbe60 size=16 callers=0 calls=0
*/
void sub_5bbe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbe60ULL || rel >= 0x5bbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbe70 size=112 callers=0 calls=0
*/
void sub_5bbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbe70ULL || rel >= 0x5bbee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbee0 size=224 callers=0 calls=7
   calls: sub_59ea80, sub_59f220, sub_5a0820, sub_5a0830, sub_5a08e0, sub_5a97c0, sub_5bc760
*/
void sub_5bbee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbee0ULL || rel >= 0x5bbfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bbfc0 size=64 callers=0 calls=2
   calls: sub_59ed20, sub_5bc820
*/
void sub_5bbfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bbfc0ULL || rel >= 0x5bc000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc000 size=80 callers=0 calls=2
   calls: sub_59f220, sub_5a08e0
*/
void sub_5bc000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc000ULL || rel >= 0x5bc050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc050 size=16 callers=0 calls=0
*/
void sub_5bc050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc050ULL || rel >= 0x5bc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc060 size=16 callers=0 calls=0
*/
void sub_5bc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc060ULL || rel >= 0x5bc070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc070 size=240 callers=0 calls=0
*/
void sub_5bc070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc070ULL || rel >= 0x5bc160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc160 size=48 callers=0 calls=1
   calls: sub_59f220
*/
void sub_5bc160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc160ULL || rel >= 0x5bc190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc190 size=32 callers=0 calls=0
*/
void sub_5bc190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc190ULL || rel >= 0x5bc1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc1b0 size=256 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_5bc1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc1b0ULL || rel >= 0x5bc2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc2b0 size=48 callers=0 calls=1
   calls: sub_5bc1b0
*/
void sub_5bc2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc2b0ULL || rel >= 0x5bc2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc2e0 size=720 callers=1 calls=7
   calls: sub_59e480, sub_5bc5b0, sub_5bc9d0, sub_5bcce0, sub_5bce40, sub_5bcfa0, sub_65d700
*/
void sub_5bc2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc2e0ULL || rel >= 0x5bc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc5b0 size=352 callers=2 calls=0
*/
void sub_5bc5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc5b0ULL || rel >= 0x5bc710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc710 size=80 callers=1 calls=1
   calls: sub_59e980
*/
void sub_5bc710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc710ULL || rel >= 0x5bc760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc760 size=192 callers=1 calls=1
   calls: sub_5bd160
*/
void sub_5bc760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc760ULL || rel >= 0x5bc820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc820 size=288 callers=1 calls=1
   calls: sub_5bd160
*/
void sub_5bc820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc820ULL || rel >= 0x5bc940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc940 size=64 callers=1 calls=1
   calls: sub_59eec0
*/
void sub_5bc940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc940ULL || rel >= 0x5bc980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc980 size=80 callers=2 calls=1
   calls: sub_59f0d0
*/
void sub_5bc980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc980ULL || rel >= 0x5bc9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bc9d0 size=784 callers=2 calls=0
*/
void sub_5bc9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc9d0ULL || rel >= 0x5bcce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bcce0 size=352 callers=2 calls=2
   calls: sub_59c570, sub_5e2bc0
*/
void sub_5bcce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bcce0ULL || rel >= 0x5bce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bce40 size=352 callers=1 calls=3
   calls: sub_59e480, sub_5bc9d0, sub_5bcce0
*/
void sub_5bce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bce40ULL || rel >= 0x5bcfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bcfa0 size=448 callers=1 calls=0
*/
void sub_5bcfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bcfa0ULL || rel >= 0x5bd160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bd160 size=448 callers=2 calls=0
*/
void sub_5bd160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bd160ULL || rel >= 0x5bd320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bd320 size=912 callers=1 calls=4
   calls: sub_5bbd40, sub_5bdba0, sub_5be6b0, sub_65d700
*/
void sub_5bd320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bd320ULL || rel >= 0x5bd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bd6b0 size=16 callers=0 calls=0
*/
void sub_5bd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bd6b0ULL || rel >= 0x5bd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bd6c0 size=16 callers=0 calls=0
*/
void sub_5bd6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bd6c0ULL || rel >= 0x5bd6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bd6d0 size=128 callers=0 calls=1
   calls: sub_5ba880
*/
void sub_5bd6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bd6d0ULL || rel >= 0x5bd750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bd750 size=16 callers=0 calls=0
*/
void sub_5bd750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bd750ULL || rel >= 0x5bd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bd760 size=672 callers=0 calls=3
   calls: sub_5ba8a0, sub_5bde10, sub_5bdf00
*/
void sub_5bd760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bd760ULL || rel >= 0x5bda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bda00 size=208 callers=0 calls=0
*/
void sub_5bda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bda00ULL || rel >= 0x5bdad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bdad0 size=208 callers=0 calls=1
   calls: sub_5bbdd0
*/
void sub_5bdad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bdad0ULL || rel >= 0x5bdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bdba0 size=624 callers=1 calls=0
*/
void sub_5bdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bdba0ULL || rel >= 0x5bde10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bde10 size=240 callers=1 calls=1
   calls: sub_65d700
*/
void sub_5bde10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bde10ULL || rel >= 0x5bdf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bdf00 size=240 callers=1 calls=2
   calls: sub_5ac310, sub_5be420
*/
void sub_5bdf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bdf00ULL || rel >= 0x5bdff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bdff0 size=16 callers=0 calls=0
*/
void sub_5bdff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bdff0ULL || rel >= 0x5be000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be000 size=16 callers=0 calls=0
*/
void sub_5be000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be000ULL || rel >= 0x5be010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be010 size=16 callers=0 calls=0
*/
void sub_5be010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be010ULL || rel >= 0x5be020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be020 size=16 callers=0 calls=0
*/
void sub_5be020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be020ULL || rel >= 0x5be030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be030 size=16 callers=0 calls=0
*/
void sub_5be030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be030ULL || rel >= 0x5be040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be040 size=16 callers=0 calls=0
*/
void sub_5be040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be040ULL || rel >= 0x5be050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be050 size=112 callers=0 calls=5
   calls: sub_59f220, sub_5a0890, sub_5ac070, sub_5ac270, sub_5be0c0
*/
void sub_5be050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be050ULL || rel >= 0x5be0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be0c0 size=512 callers=1 calls=4
   calls: sub_5ac2f0, sub_5b4770, sub_5b47f0, sub_5b4870
*/
void sub_5be0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be0c0ULL || rel >= 0x5be2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be2c0 size=16 callers=0 calls=0
*/
void sub_5be2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be2c0ULL || rel >= 0x5be2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be2d0 size=288 callers=1 calls=0
*/
void sub_5be2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be2d0ULL || rel >= 0x5be3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be3f0 size=48 callers=0 calls=1
   calls: sub_5be2d0
*/
void sub_5be3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be3f0ULL || rel >= 0x5be420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be420 size=656 callers=1 calls=0
*/
void sub_5be420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be420ULL || rel >= 0x5be6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be6b0 size=192 callers=3 calls=0
*/
void sub_5be6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be6b0ULL || rel >= 0x5be770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be770 size=64 callers=3 calls=0
*/
void sub_5be770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be770ULL || rel >= 0x5be7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be7b0 size=16 callers=3 calls=0
*/
void sub_5be7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be7b0ULL || rel >= 0x5be7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be7c0 size=16 callers=0 calls=0
*/
void sub_5be7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be7c0ULL || rel >= 0x5be7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be7d0 size=16 callers=0 calls=0
*/
void sub_5be7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be7d0ULL || rel >= 0x5be7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be7e0 size=16 callers=0 calls=0
*/
void sub_5be7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be7e0ULL || rel >= 0x5be7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be7f0 size=16 callers=0 calls=0
*/
void sub_5be7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be7f0ULL || rel >= 0x5be800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be800 size=16 callers=0 calls=0
*/
void sub_5be800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be800ULL || rel >= 0x5be810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be810 size=16 callers=0 calls=0
*/
void sub_5be810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be810ULL || rel >= 0x5be820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be820 size=16 callers=0 calls=0
*/
void sub_5be820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be820ULL || rel >= 0x5be830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be830 size=16 callers=0 calls=0
*/
void sub_5be830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be830ULL || rel >= 0x5be840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be840 size=96 callers=0 calls=0
*/
void sub_5be840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be840ULL || rel >= 0x5be8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be8a0 size=128 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_5be8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be8a0ULL || rel >= 0x5be920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be920 size=96 callers=0 calls=3
   calls: sub_5be980, sub_5e2750, sub_5e2830
*/
void sub_5be920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be920ULL || rel >= 0x5be980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005be980 size=1264 callers=1 calls=11
   calls: sub_5b9ea0, sub_5ba7b0, sub_5ba830, sub_5beed0, sub_5bf1a0, sub_5bf810, sub_5bf9a0, sub_5bfb60, sub_5bffb0, sub_5c03f0, sub_5e25c0
*/
void sub_5be980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be980ULL || rel >= 0x5bee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bee70 size=32 callers=8 calls=0
*/
void sub_5bee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bee70ULL || rel >= 0x5bee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bee90 size=16 callers=1 calls=0
*/
void sub_5bee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bee90ULL || rel >= 0x5beea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005beea0 size=16 callers=1 calls=0
*/
void sub_5beea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5beea0ULL || rel >= 0x5beeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005beeb0 size=16 callers=1 calls=0
*/
void sub_5beeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5beeb0ULL || rel >= 0x5beec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005beec0 size=16 callers=1 calls=0
*/
void sub_5beec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5beec0ULL || rel >= 0x5beed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

