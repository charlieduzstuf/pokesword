/* subsdk1 functions 004488c0..004bffd0 (22 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 004488c0 size=224 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_4488c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4488c0ULL || rel >= 0x4489a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004489a0 size=336 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4489a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4489a0ULL || rel >= 0x448af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448af0 size=416 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_448af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448af0ULL || rel >= 0x448c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448c90 size=496 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_448c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448c90ULL || rel >= 0x448e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448e80 size=464 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_448e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448e80ULL || rel >= 0x449050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449050 size=240 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_449050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449050ULL || rel >= 0x449140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449140 size=208 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_449140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449140ULL || rel >= 0x449210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449210 size=256 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_449210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449210ULL || rel >= 0x449310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449310 size=352 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_449310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449310ULL || rel >= 0x449470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449470 size=208 callers=17 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_449470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449470ULL || rel >= 0x449540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449540 size=208 callers=6 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_449540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449540ULL || rel >= 0x449610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449610 size=480 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_449610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449610ULL || rel >= 0x4497f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004497f0 size=544 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4497f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4497f0ULL || rel >= 0x449a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449a10 size=640 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_449a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449a10ULL || rel >= 0x449c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449c90 size=432 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_449c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449c90ULL || rel >= 0x449e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449e40 size=592 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_449e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449e40ULL || rel >= 0x44a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a090 size=736 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_44a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a090ULL || rel >= 0x44a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a370 size=288 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a370ULL || rel >= 0x44a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a490 size=208 callers=7 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a490ULL || rel >= 0x44a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a560 size=240 callers=7 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a560ULL || rel >= 0x44a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a650 size=304 callers=4 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a650ULL || rel >= 0x44a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a780 size=336 callers=4 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a780ULL || rel >= 0x44a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a8d0 size=352 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a8d0ULL || rel >= 0x44aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044aa30 size=208 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44aa30ULL || rel >= 0x44ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ab00 size=240 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44ab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ab00ULL || rel >= 0x44abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044abf0 size=64 callers=11 calls=1
   calls: sub_426860
*/
void sub_44abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44abf0ULL || rel >= 0x44ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ac30 size=128 callers=3 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ac30ULL || rel >= 0x44acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044acb0 size=336 callers=4 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44acb0ULL || rel >= 0x44ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ae00 size=512 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ae00ULL || rel >= 0x44b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b000 size=528 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b000ULL || rel >= 0x44b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b210 size=384 callers=4 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b210ULL || rel >= 0x44b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b390 size=608 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b390ULL || rel >= 0x44b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b5f0 size=624 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b5f0ULL || rel >= 0x44b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b860 size=240 callers=4 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b860ULL || rel >= 0x44b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b950 size=240 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b950ULL || rel >= 0x44ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ba40 size=384 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ba40ULL || rel >= 0x44bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044bbc0 size=160 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_44bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44bbc0ULL || rel >= 0x44bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044bc60 size=160 callers=3 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44bc60ULL || rel >= 0x44bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044bd00 size=5440 callers=7 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_426860
*/
void sub_44bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44bd00ULL || rel >= 0x44d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d240 size=224 callers=21 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d240ULL || rel >= 0x44d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d320 size=1200 callers=7 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_426860
*/
void sub_44d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d320ULL || rel >= 0x44d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d7d0 size=1232 callers=2 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_426860
*/
void sub_44d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d7d0ULL || rel >= 0x44dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dca0 size=2944 callers=7 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_426860
*/
void sub_44dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dca0ULL || rel >= 0x44e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e820 size=2944 callers=2 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_426860
*/
void sub_44e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e820ULL || rel >= 0x44f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f3a0 size=272 callers=21 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f3a0ULL || rel >= 0x44f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f4b0 size=240 callers=7 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_44f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f4b0ULL || rel >= 0x44f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f5a0 size=256 callers=7 calls=5
   calls: sub_3040b0, sub_307ee0, sub_3934b0, sub_393560, sub_44f6a0
*/
void sub_44f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f5a0ULL || rel >= 0x44f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f6a0 size=16 callers=1 calls=0
*/
void sub_44f6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f6a0ULL || rel >= 0x44f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f6b0 size=336 callers=0 calls=3
   calls: sub_2c0, sub_451210, sub_4569f0
*/
void sub_44f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f6b0ULL || rel >= 0x44f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f800 size=256 callers=8 calls=1
   calls: sub_2c0
*/
void sub_44f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f800ULL || rel >= 0x44f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f900 size=48 callers=1 calls=1
   calls: sub_270
*/
void sub_44f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f900ULL || rel >= 0x44f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f930 size=48 callers=1 calls=1
   calls: sub_270
*/
void sub_44f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f930ULL || rel >= 0x44f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f960 size=48 callers=1 calls=1
   calls: sub_270
*/
void sub_44f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f960ULL || rel >= 0x44f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f990 size=48 callers=1 calls=1
   calls: sub_270
*/
void sub_44f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f990ULL || rel >= 0x44f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f9c0 size=48 callers=1 calls=1
   calls: sub_270
*/
void sub_44f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f9c0ULL || rel >= 0x44f9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f9f0 size=48 callers=1 calls=1
   calls: sub_270
*/
void sub_44f9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f9f0ULL || rel >= 0x44fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fa20 size=176 callers=1 calls=2
   calls: sub_2b0, sub_2c0
*/
void sub_44fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fa20ULL || rel >= 0x44fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fad0 size=16 callers=0 calls=0
*/
void sub_44fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fad0ULL || rel >= 0x44fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fae0 size=80 callers=0 calls=2
   calls: sub_4511f0, sub_451200
*/
void sub_44fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fae0ULL || rel >= 0x44fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fb30 size=80 callers=0 calls=0
*/
void sub_44fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fb30ULL || rel >= 0x44fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fb80 size=64 callers=0 calls=1
   calls: sub_2c0
*/
void sub_44fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fb80ULL || rel >= 0x44fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fbc0 size=320 callers=0 calls=2
   calls: sub_2b0, sub_2c0
*/
void sub_44fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fbc0ULL || rel >= 0x44fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fd00 size=16 callers=0 calls=0
*/
void sub_44fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fd00ULL || rel >= 0x44fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fd10 size=208 callers=1 calls=3
   calls: sub_2c0, sub_451170, sub_4c0cf0
*/
void sub_44fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fd10ULL || rel >= 0x44fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fde0 size=48 callers=0 calls=1
   calls: sub_44fd10
*/
void sub_44fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fde0ULL || rel >= 0x44fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fe10 size=160 callers=0 calls=3
   calls: sub_2c0, sub_451170, sub_4c0cf0
*/
void sub_44fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fe10ULL || rel >= 0x44feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044feb0 size=304 callers=1 calls=7
   calls: sub_2b0, sub_2c0, sub_451160, sub_451180, sub_4511f0, sub_451200, sub_4c0ce0
*/
void sub_44feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44feb0ULL || rel >= 0x44ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ffe0 size=288 callers=1 calls=2
   calls: sub_2b0, sub_2c0
*/
void sub_44ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ffe0ULL || rel >= 0x450100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450100 size=80 callers=0 calls=2
   calls: sub_2c0, sub_451180
*/
void sub_450100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450100ULL || rel >= 0x450150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450150 size=320 callers=0 calls=2
   calls: sub_2b0, sub_2c0
*/
void sub_450150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450150ULL || rel >= 0x450290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450290 size=96 callers=1 calls=1
   calls: sub_4502f0
*/
void sub_450290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450290ULL || rel >= 0x4502f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004502f0 size=416 callers=2 calls=7
   calls: sub_2b0, sub_2c0, sub_451160, sub_451180, sub_4511f0, sub_451200, sub_4c0ce0
*/
void sub_4502f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4502f0ULL || rel >= 0x450490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450490 size=32 callers=1 calls=0
*/
void sub_450490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450490ULL || rel >= 0x4504b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004504b0 size=112 callers=1 calls=1
   calls: sub_2c0
*/
void sub_4504b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4504b0ULL || rel >= 0x450520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450520 size=400 callers=1 calls=7
   calls: sub_2b0, sub_2c0, sub_451160, sub_451180, sub_4511f0, sub_451200, sub_4c0ce0
*/
void sub_450520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450520ULL || rel >= 0x4506b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004506b0 size=416 callers=1 calls=7
   calls: sub_2b0, sub_2c0, sub_451160, sub_451180, sub_4511f0, sub_451200, sub_4c0ce0
*/
void sub_4506b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4506b0ULL || rel >= 0x450850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450850 size=432 callers=1 calls=7
   calls: sub_2b0, sub_2c0, sub_451160, sub_451180, sub_4511f0, sub_451200, sub_4c0ce0
*/
void sub_450850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450850ULL || rel >= 0x450a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450a00 size=336 callers=2 calls=5
   calls: sub_4502f0, sub_4506b0, sub_450850, sub_4511f0, sub_451200
*/
void sub_450a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450a00ULL || rel >= 0x450b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450b50 size=224 callers=1 calls=3
   calls: sub_44feb0, sub_4511f0, sub_451200
*/
void sub_450b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450b50ULL || rel >= 0x450c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450c30 size=320 callers=1 calls=5
   calls: sub_2b0, sub_2c0, sub_450520, sub_4511f0, sub_451200
*/
void sub_450c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450c30ULL || rel >= 0x450d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450d70 size=368 callers=1 calls=4
   calls: sub_2b0, sub_2c0, sub_4511f0, sub_451200
*/
void sub_450d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450d70ULL || rel >= 0x450ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450ee0 size=384 callers=1 calls=3
   calls: sub_2b0, sub_2c0, sub_44ffe0
*/
void sub_450ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450ee0ULL || rel >= 0x451060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451060 size=16 callers=1 calls=0
*/
void sub_451060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451060ULL || rel >= 0x451070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451070 size=80 callers=0 calls=1
   calls: sub_2c0
*/
void sub_451070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451070ULL || rel >= 0x4510c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004510c0 size=80 callers=0 calls=2
   calls: sub_2c0, sub_451170
*/
void sub_4510c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4510c0ULL || rel >= 0x451110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451110 size=80 callers=0 calls=2
   calls: sub_2c0, sub_451170
*/
void sub_451110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451110ULL || rel >= 0x451160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451160 size=16 callers=5 calls=0
*/
void sub_451160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451160ULL || rel >= 0x451170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451170 size=16 callers=4 calls=0
*/
void sub_451170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451170ULL || rel >= 0x451180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451180 size=112 callers=6 calls=2
   calls: sub_2b0, sub_2c0
*/
void sub_451180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451180ULL || rel >= 0x4511f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004511f0 size=16 callers=10 calls=0
*/
void sub_4511f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4511f0ULL || rel >= 0x451200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451200 size=16 callers=10 calls=0
*/
void sub_451200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451200ULL || rel >= 0x451210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451210 size=224 callers=2 calls=1
   calls: sub_2c0
*/
void sub_451210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451210ULL || rel >= 0x4512f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004512f0 size=21984 callers=1 calls=27
   calls: NV_texture_multisample, internal_error_8, invalid_character, line_d_column_d_s, out_of_memory_3, sub_270, sub_2b0, sub_2c0, sub_2d0, sub_44f800, sub_44f900, sub_44f930
   ... +15 more
   ref: invalid vertex program header
   ref: !!NVtcp5.0
   ref: invalid fragment program header
   ref: invalid tessellation evaluation program header
   ref: too many result variable components written
   ref: invalid vertex state program header
   ref: !!NVfp5.0
   ref: invalid tessellation control program header
*/
void FSIE_specified_in_dead_code(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4512f0ULL || rel >= 0x4568d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004568d0 size=288 callers=711 calls=0
   ref: line %d, column %d:  %s: 
*/
void line_d_column_d_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4568d0ULL || rel >= 0x4569f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004569f0 size=48 callers=1 calls=1
   calls: sub_2c0
*/
void sub_4569f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4569f0ULL || rel >= 0x456a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00456a20 size=1248 callers=879 calls=2
   calls: line_d_column_d_s, sub_45a5a0
   ref: internal error
   ref: invalid character
*/
void invalid_character(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x456a20ULL || rel >= 0x456f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00456f00 size=12480 callers=1 calls=14
   calls: REP_parameter_must_be_a_constant, invalid_character, invalid_writemask_specifier, label_already_defined, line_d_column_d_s, reserved_keyword, sub_270, sub_2b0, sub_2d0, sub_45d520, sub_4a2d80, too_many_array_initializers
   ... +2 more
   ref: ARB_draw_buffers
   ref: NV_geometry_shader_passthrough
   ref: ARB_shader_texture_image_samples
   ref: NV_shader_atomic_int64
   ref: declaration requires the NV_internal option
   ref: NV_geometry_shader_passthrough requires PRIMITIVE_IN = POINTS, LINES, or TRIANGLES
   ref: program missing GROUP_SIZE declaration
   ref: only one NV_vertex_program option allowed
*/
void NV_texture_multisample(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x456f00ULL || rel >= 0x459fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00459fc0 size=240 callers=7 calls=0
   ref: warning
   ref: line %d, column %d:  %s: 
*/
void warning(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x459fc0ULL || rel >= 0x45a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045a0b0 size=1264 callers=0 calls=1
   calls: line_d_column_d_s
   ref: Invalid scientific notation.
   ref: Invalid hexadecimal constant.
   ref: invalid suffix on number
*/
void invalid_suffix_on_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45a0b0ULL || rel >= 0x45a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045a5a0 size=640 callers=2 calls=0
*/
void sub_45a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45a5a0ULL || rel >= 0x45a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045a820 size=1040 callers=1 calls=7
   calls: invalid_character, invalid_writemask_specifier, line_d_column_d_s, relative_offset_must_be_an_integer_constant, sub_270, sub_2d0, too_many_array_initializers
   ref: expected ']'
   ref: can't write both FP16 and FP32 color results.
   ref: expected '['
   ref: internal error
   ref: fatal error:  out of memory
*/
void internal_error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45a820ULL || rel >= 0x45ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045ac30 size=416 callers=5 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: invalid XYZW writemask character
   ref: invalid RGBA writemask character
   ref: invalid RGBA writemask component order
   ref: invalid writemask specifier
   ref: invalid XYZW writemask component order
*/
void invalid_writemask_specifier(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45ac30ULL || rel >= 0x45add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045add0 size=576 callers=51 calls=2
   calls: line_d_column_d_s, sub_270
   ref: redeclared identifier
   ref: reserved keyword
   ref: fatal error:  out of memory
*/
void reserved_keyword(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45add0ULL || rel >= 0x45b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045b010 size=304 callers=63 calls=3
   calls: line_d_column_d_s, sub_2b0, sub_2d0
   ref: too many array initializers
   ref: multiple bindings not allowed for a non-array variable
   ref: fatal error:  out of memory
*/
void too_many_array_initializers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45b010ULL || rel >= 0x45b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045b140 size=1264 callers=0 calls=4
   calls: invalid_character, invalid_index_in_binding, line_d_column_d_s, sub_45d160
   ref: position-invariant programs can not write position
   ref: expected ']'
   ref: viewport array indexing not supported without OPTION NV_viewport_array2
   ref: expected '['
   ref: expected '.'
   ref: secondary viewport mask is not supported without OPTION NV_stereo_view_rendering
   ref: only constant array indices supported
   ref: out of bounds array access
*/
void result_binding_not_supported_in_an_array(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45b140ULL || rel >= 0x45b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045b630 size=704 callers=0 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: invalid fragment result
   ref: secondary color not supported on this output
   ref: expected ']'
   ref: expected '.'
   ref: invalid result binding
   ref: invalid output color number
*/
void secondary_color_not_supported_on_this_output(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45b630ULL || rel >= 0x45b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045b8f0 size=1168 callers=0 calls=4
   calls: invalid_character, invalid_index_in_binding, line_d_column_d_s, sub_45d160
   ref: viewport array indexing not supported without OPTION ARB_viewport_array
   ref: expected ']'
   ref: invalid generic result reference
   ref: expected '['
   ref: expected '.'
   ref: secondary viewport mask is not supported without OPTION NV_stereo_view_rendering
   ref: only constant array indices supported
   ref: out of bounds array access
*/
void result_binding_not_supported_in_an_array_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45b8f0ULL || rel >= 0x45bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045bd80 size=1392 callers=0 calls=4
   calls: invalid_character, invalid_index_in_binding, line_d_column_d_s, sub_45d160
   ref: invalid patch result binding
   ref: expected ']'
   ref: invalid generic patch attribute number
   ref: viewport array indexing not supported without OPTION NV_viewport_array2
   ref: invalid generic result reference
   ref: expected '['
   ref: expected '.'
   ref: secondary viewport mask is not supported without OPTION NV_stereo_view_rendering
*/
void result_binding_not_supported_in_an_array_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45bd80ULL || rel >= 0x45c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045c2f0 size=1152 callers=0 calls=4
   calls: invalid_character, invalid_index_in_binding, line_d_column_d_s, sub_45d160
   ref: expected ']'
   ref: viewport array indexing not supported without OPTION NV_viewport_array2
   ref: invalid generic result reference
   ref: expected '['
   ref: expected '.'
   ref: secondary viewport mask is not supported without OPTION NV_stereo_view_rendering
   ref: only constant array indices supported
   ref: out of bounds array access
*/
void result_binding_not_supported_in_an_array_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45c2f0ULL || rel >= 0x45c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045c770 size=384 callers=0 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: expected ']'
   ref: expected '['
   ref: invalid vertex result name
   ref: invalid result binding
   ref: position-invariant programs can not write o[HPOS]
   ref: invalid texture coordinate output
*/
void invalid_vertex_result_name(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45c770ULL || rel >= 0x45c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045c8f0 size=256 callers=0 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: expected ']'
   ref: invalid fragment result name
   ref: expected '['
   ref: invalid result binding
*/
void invalid_result_binding(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45c8f0ULL || rel >= 0x45c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045c9f0 size=16 callers=0 calls=0
   ref: vertex state programs can't write to vertex outputs
*/
void vertex_state_programs_can_t_write_to_vertex_outputs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45c9f0ULL || rel >= 0x45ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045ca00 size=768 callers=16 calls=3
   calls: invalid_character, invalid_component_selector, line_d_column_d_s
   ref: relative offset must be an integer constant
   ref: floats not valid for indexed array access
   ref: invalid variable for indexed array access
   ref: out of bounds array access
   ref: invalid array member
   ref: offset for relative array access outside supported range
*/
void relative_offset_must_be_an_integer_constant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45ca00ULL || rel >= 0x45cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045cd00 size=1120 callers=21 calls=3
   calls: invalid_character, line_d_column_d_s, too_many_array_initializers
   ref: invalid index in binding
   ref: expected ']'
   ref: arrays with mixed input and output vertex attributes not allowed
   ref: arrays with mixed per-vertex and per-patch attributes not allowed
   ref: arrays with mixed vertex number declarations not allowed
   ref: expected '['
   ref: invalid array range
   ref: bindings in non-PARAM arrays must be contiguous
*/
void invalid_index_in_binding(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45cd00ULL || rel >= 0x45d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045d160 size=336 callers=7 calls=1
   calls: invalid_character
*/
void sub_45d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45d160ULL || rel >= 0x45d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045d2b0 size=544 callers=3 calls=3
   calls: invalid_character, invalid_writemask_specifier, line_d_column_d_s
   ref: address register write mask must be ".x"
   ref: expected '.'
   ref: internal error
   ref: invalid component selector
   ref: invalid address component selector
*/
void invalid_component_selector(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45d2b0ULL || rel >= 0x45d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045d4d0 size=80 callers=0 calls=1
   calls: line_d_column_d_s
   ref: invalid component selector
*/
void invalid_component_selector_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45d4d0ULL || rel >= 0x45d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045d520 size=480 callers=5 calls=4
   calls: reserved_keyword, sub_270, sub_2d0, too_many_array_initializers
*/
void sub_45d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45d520ULL || rel >= 0x45d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045d700 size=9696 callers=1 calls=22
   calls: R_must_be_zero_for_1D_textures, internal_error_2, invalid_address_destination_variable, invalid_character, invalid_condition_code_mask_rule, invalid_extended_swizzle_selector, invalid_image_target_type, invalid_image_unit_specifier, invalid_program_counter_binding_number, label_already_defined, line_d_column_d_s, relative_offset_must_be_an_integer_constant
   ... +10 more
   ref: invalid kill condition
   ref: FSIB/FSIE instruction not allowed inside flow control blocks.
   ref: too many instructions
   ref: "+" modifier not supported for this program type
   ref: POPA only supports .xyzw write mask
   ref: expected integer constant
   ref: invalid counter variable
   ref: second operand must be a TEMP or constant
*/
void REP_parameter_must_be_a_constant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45d700ULL || rel >= 0x45fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045fce0 size=10192 callers=1 calls=22
   calls: TXGO, fatal_error_out_of_memory, invalid_character, invalid_image_unit_specifier, invalid_local_initialization, invalid_program_counter_binding_number, invalid_subroutine_number, line_d_column_d_s, out_of_bounds_array_access, parameter_buffer_offsets_in_an_array_must_be_contiguous, reserved_keyword, sub_270
   ... +10 more
   ref: multiple CENTROID modifiers not allowed
   ref: SUBROUTINE array size and number of bindings must matchmatch
   ref: buffer array size and number of bindings must match
   ref: counter array size and number of bindings must match
   ref: invalid thread memory array size
   ref: invalid image array variable size
   ref: data type modifiers not valid on SUBROUTINE variables
   ref: expected ']'
*/
void type_modifiers_not_valid_on_aliases(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45fce0ULL || rel >= 0x4624b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004624b0 size=768 callers=2 calls=6
   calls: invalid_character, line_d_column_d_s, reserved_keyword, sub_270, sub_2d0, sub_450a00
   ref: duplicate FUNCNUM.
   ref: invalid FUNCNUM
   ref: expected ')'
   ref: expected '('
   ref: label already defined
*/
void label_already_defined(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4624b0ULL || rel >= 0x4627b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004627b0 size=1136 callers=3 calls=1
   calls: line_d_column_d_s
   ref: internal error
*/
void internal_error_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4627b0ULL || rel >= 0x462c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00462c20 size=26944 callers=1 calls=15
   calls: astack, f_0_1_2_3_4_5_6_7, fatal_error_out_of_memory, internal_error_7, line_d_column_d_s, multiple_program_parameters_not_allowed_in_one_instructi, out_of_memory, out_of_memory_2, reserved_keyword, sub_270, sub_2d0, sub_476700
   ... +3 more
   ref: instruction not supported with this program type
   ref: negation not supported in a CVT instruction
   ref: W component should not be enabled for writing in a RFL instruction
   ref: internal error
   ref: out of memory
   ref: absolute value not supported in a CVT instruction
   ref: fatal error:  out of memory
   ref: viewcount
*/
void viewcount(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x462c20ULL || rel >= 0x469560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00469560 size=4736 callers=24 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: multiple precision or storage modifiers specified
   ref: supported only on ATOMCTR instructions
   ref: LODCLAMP modifier is supported only on TEX, TXB, TXD instructions
   ref: supported only on atomic instructions
   ref: LODCLAMP modifier on TEX and TXB not supported for this program type.
   ref: unsupported modifier for this instruction
   ref: COARSE is supported only on DDX or DDY instructions
   ref: missing op modifier
*/
void unnamed_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x469560ULL || rel >= 0x46a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046a7e0 size=752 callers=18 calls=7
   calls: internal_error, internal_error_3, internal_error_4, invalid_character, invalid_condition_code_mask_rule, line_d_column_d_s, out_of_bounds_array_access
   ref: expected ')'
   ref: invalid destination variable
   ref: internal error
   ref: variable not valid as a destination register
   ref: saturation not supported on fixed-point results
*/
void variable_not_valid_as_a_destination_register(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46a7e0ULL || rel >= 0x46aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046aad0 size=336 callers=2 calls=1
   calls: line_d_column_d_s
   ref: data type mismatch:  expected unsigned integer operand
   ref: internal error
   ref: data type mismatch:  expected signed integer operand
   ref: data type mismatch:  expected floating-point operand
*/
void internal_error_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46aad0ULL || rel >= 0x46ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046ac20 size=7264 callers=3 calls=12
   calls: fatal_error_out_of_memory, internal_error_5, invalid_character, invalid_component_selector_3, invalid_integer_constant, invalid_swizzle_suffix, invalid_writemask_specifier, line_d_column_d_s, relative_offset_must_be_an_integer_constant, sub_270, sub_2d0, too_many_array_initializers
   ref: invalid multisample position array number
   ref: invalid program parameter type
   ref: invalid modelview matrix number
   ref: invalid state property
   ref: must specify eye or object texgen
   ref: multiple parameter selection valid only for array variables
   ref: expected ']'
   ref: invalid light model property
*/
void out_of_bounds_array_access(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46ac20ULL || rel >= 0x46c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046c880 size=496 callers=2 calls=6
   calls: invalid_character, invalid_component_selector_3, invalid_swizzle_suffix, invalid_writemask_specifier, line_d_column_d_s, relative_offset_must_be_an_integer_constant
   ref: expected ']'
   ref: expected '['
   ref: internal error
*/
void internal_error_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46c880ULL || rel >= 0x46ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046ca70 size=912 callers=2 calls=3
   calls: invalid_character, invalid_integer_constant, line_d_column_d_s
   ref: internal error
   ref: expected '}'
*/
void internal_error_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46ca70ULL || rel >= 0x46ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046ce00 size=320 callers=15 calls=2
   calls: line_d_column_d_s, sub_270
   ref: fatal error:  out of memory
*/
void fatal_error_out_of_memory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46ce00ULL || rel >= 0x46cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046cf40 size=1072 callers=6 calls=3
   calls: invalid_character, line_d_column_d_s, warning
   ref: "+" modifier not supported for this program type
   ref: expected scalar constant
   ref: internal error
   ref: integer constant overflow
   ref: invalid integer constant
*/
void invalid_integer_constant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46cf40ULL || rel >= 0x46d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d370 size=304 callers=5 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: invalid swizzle suffix
*/
void invalid_swizzle_suffix(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d370ULL || rel >= 0x46d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d4a0 size=256 callers=6 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: expected '.'
   ref: invalid RGBA component selector
   ref: invalid component selector
*/
void invalid_component_selector_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d4a0ULL || rel >= 0x46d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d5a0 size=80 callers=0 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: invalid environment parameter number
*/
void invalid_environment_parameter_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d5a0ULL || rel >= 0x46d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d5f0 size=80 callers=0 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: invalid local parameter number
*/
void invalid_local_parameter_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d5f0ULL || rel >= 0x46d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d640 size=96 callers=0 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: invalid shader storage buffer binding number
*/
void invalid_shader_storage_buffer_binding_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d640ULL || rel >= 0x46d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d6a0 size=112 callers=0 calls=1
   calls: line_d_column_d_s
   ref: invalid RGBA component selector
*/
void invalid_RGBA_component_selector(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d6a0ULL || rel >= 0x46d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d710 size=368 callers=6 calls=3
   calls: invalid_character, invalid_swizzle_suffix, line_d_column_d_s
   ref: NONRESIDENT requires EXT_sparse_texture2
   ref: invalid condition code mask rule
   ref: RESIDENT requires EXT_sparse_texture2
*/
void invalid_condition_code_mask_rule(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d710ULL || rel >= 0x46d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d880 size=1200 callers=30 calls=10
   calls: internal_error_3, internal_error_4, internal_error_6, invalid_character, line_d_column_d_s, out_of_bounds_array_access, parameter_buffer_offsets_in_an_array_must_be_contiguous, unnamed_41, unnamed_42, unnamed_43
   ref: "+" modifier not supported for this program type
   ref: variable not valid as a source register
   ref: expected '|'
   ref: internal error
   ref: invalid operand variable
*/
void variable_not_valid_as_a_source_register(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d880ULL || rel >= 0x46dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046dd30 size=1040 callers=1 calls=8
   calls: invalid_character, invalid_component_selector_3, invalid_swizzle_suffix, line_d_column_d_s, relative_offset_must_be_an_integer_constant, sub_270, sub_2d0, too_many_array_initializers
   ref: expected ']'
   ref: expected '['
   ref: internal error
   ref: fatal error:  out of memory
*/
void internal_error_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46dd30ULL || rel >= 0x46e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046e140 size=1888 callers=3 calls=6
   calls: invalid_character, invalid_component_selector_3, invalid_swizzle_suffix, line_d_column_d_s, relative_offset_must_be_an_integer_constant, too_many_array_initializers
   ref: expected ']'
   ref: invalid parameter buffer offset
   ref: parameter buffer offsets in an array must be contiguous
   ref: expected 'program'
   ref: LDC instruction must use a CBUFFER variable
   ref: inconsistent buffer resource binding count
   ref: expected '['
   ref: expected '.'
*/
void parameter_buffer_offsets_in_an_array_must_be_contiguous(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46e140ULL || rel >= 0x46e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046e8a0 size=1600 callers=3 calls=4
   calls: invalid_character, line_d_column_d_s, relative_offset_must_be_an_integer_constant, too_many_array_initializers
   ref: invalid storage buffer binding number
   ref: expected ']'
   ref: expected 'program'
   ref: full storage buffer binding supported only for unsized array variables
   ref: inconsistent buffer resource binding count
   ref: expected '['
   ref: expected '.'
   ref: invalid storage buffer range
*/
void unnamed_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46e8a0ULL || rel >= 0x46eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046eee0 size=1008 callers=3 calls=4
   calls: invalid_character, line_d_column_d_s, relative_offset_must_be_an_integer_constant, too_many_array_initializers
   ref: expected ']'
   ref: invalid shared memory offset
   ref: shared memory variables only allowed with ATOMS/LDS/STS
   ref: binding can't be used with shared memory size of zero
   ref: expected 'program'
   ref: invalid shared memory range
   ref: expected '['
   ref: expected '.'
*/
void unnamed_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46eee0ULL || rel >= 0x46f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046f2d0 size=1008 callers=3 calls=4
   calls: invalid_character, line_d_column_d_s, relative_offset_must_be_an_integer_constant, too_many_array_initializers
   ref: expected ']'
   ref: invalid thread memory offset
   ref: binding can't be used with shared memory size of zero
   ref: thread memory range not supported for non-array variables
   ref: expected 'program'
   ref: expected 'threadmem'
   ref: invalid shared memory range
   ref: expected '['
*/
void unnamed_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46f2d0ULL || rel >= 0x46f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046f6c0 size=1632 callers=0 calls=3
   calls: invalid_character, line_d_column_d_s, warning
   ref: invalid attribute binding
   ref: expected ']'
   ref: attribute binding not supported in an array
   ref: EXT_vertex_weighting and ARB_vertex_blend not supported.  Using generic vertex attribute 1.
   ref: invalid vertex attribute reference
   ref: expected '.'
   ref: invalid vertex attribute
   ref: only vertex weight zero supported
*/
void only_vertex_weight_zero_supported(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46f6c0ULL || rel >= 0x46fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046fd20 size=1808 callers=0 calls=3
   calls: invalid_character, invalid_index_in_binding, line_d_column_d_s
   ref: invalid attribute binding
   ref: attribute binding not supported in an array
   ref: expected '.'
   ref: invalid primitive attribute
   ref: invalid clip distance reference
   ref: invalid cull distance reference
   ref: invalid fragment attribute
   ref: invalid generic attribute number
*/
void invalid_texture_coordinate_reference(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46fd20ULL || rel >= 0x470430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00470430 size=2000 callers=0 calls=4
   calls: invalid_character, invalid_index_in_binding, line_d_column_d_s, sub_45d160
   ref: invalid attribute binding
   ref: expected ']'
   ref: attribute binding not supported in an array
   ref: invalid generic patch attribute number
   ref: invalid patch attribute
   ref: expected '['
   ref: expected '.'
   ref: invalid primitive attribute
*/
void invalid_vertex_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x470430ULL || rel >= 0x470c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00470c00 size=2448 callers=0 calls=4
   calls: invalid_character, invalid_index_in_binding, line_d_column_d_s, sub_45d160
   ref: binding not supported on output primitive
   ref: invalid attribute binding
   ref: expected ']'
   ref: attribute binding not supported in an array
   ref: binding not supported on input primitive
   ref: invalid generic patch attribute number
   ref: invalid patch attribute
   ref: expected '['
*/
void invalid_vertex_number_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x470c00ULL || rel >= 0x471590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00471590 size=2208 callers=0 calls=4
   calls: invalid_character, invalid_index_in_binding, line_d_column_d_s, sub_45d160
   ref: invalid attribute binding
   ref: expected ']'
   ref: attribute binding not supported in an array
   ref: invalid generic patch attribute number
   ref: invalid patch attribute
   ref: expected '.'
   ref: invalid primitive attribute
   ref: attribute binding requires a vertex number
*/
void tesscoord_binding_may_not_include_a_vertex_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x471590ULL || rel >= 0x471e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00471e30 size=768 callers=0 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: attribute binding not supported in an array
   ref: invalid compute attribute
   ref: expected '.'
*/
void invalid_compute_attribute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x471e30ULL || rel >= 0x472130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00472130 size=432 callers=0 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: invalid attribute binding
   ref: invalid texture coordinate attribute
   ref: expected ']'
   ref: expected '['
   ref: invalid vertex attribute number
   ref: invalid vertex attribute
*/
void invalid_vertex_attribute_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x472130ULL || rel >= 0x4722e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004722e0 size=288 callers=0 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: invalid attribute binding
   ref: invalid texture coordinate attribute
   ref: expected ']'
   ref: expected '['
   ref: invalid fragment attribute name
*/
void invalid_texture_coordinate_attribute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4722e0ULL || rel >= 0x472400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00472400 size=176 callers=0 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: invalid attribute binding
   ref: expected '['
   ref: state programs can only read v[0]
*/
void invalid_attribute_binding(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x472400ULL || rel >= 0x4724b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004724b0 size=336 callers=4 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: "+" modifier not supported for this program type
   ref: invalid extended swizzle selector
*/
void invalid_extended_swizzle_selector(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4724b0ULL || rel >= 0x472600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00472600 size=432 callers=3 calls=4
   calls: invalid_character, invalid_component_selector, invalid_condition_code_mask_rule, line_d_column_d_s
   ref: expected ')'
   ref: invalid address destination variable
   ref: variable is not valid as an address destination.
*/
void invalid_address_destination_variable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x472600ULL || rel >= 0x4727b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004727b0 size=2688 callers=1 calls=5
   calls: TXGO, invalid_character, line_d_column_d_s, texel_offset_too_large_for_implementation, variable_not_valid_as_a_source_register
   ref: texture instruction requires two operands
   ref: expected ','
   ref: SHADOWRECT target not supported by the LOD instruction
   ref: RENDERBUFFER target only supported by TXFMS and TXQ instructions
   ref: ARRAY2DMS target only supported by TXFMS, TXQ and TXQS instructions
   ref: ARRAYCUBE not supported by instruction
   ref: texel offset in T/R must be zero for 1D textures
   ref: expected ')'
*/
void R_must_be_zero_for_1D_textures(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4727b0ULL || rel >= 0x473230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00473230 size=1776 callers=3 calls=9
   calls: invalid_character, invalid_component_selector_3, invalid_index_in_binding, invalid_variable_for_handle_access, line_d_column_d_s, relative_offset_must_be_an_integer_constant, sub_270, sub_2d0, too_many_array_initializers
   ref: expected ']'
   ref: expected ')'
   ref: invalid texture image unit specifier
   ref: exthandle argument must be array element
   ref: expected '['
   ref: expected constant for exthandle
   ref: only constant array indices supported
   ref: out of bounds array access
*/
void TXGO(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x473230ULL || rel >= 0x473920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00473920 size=464 callers=1 calls=3
   calls: invalid_character, invalid_component_selector, line_d_column_d_s
   ref: invalid variable for handle access
   ref: expected ')'
   ref: floats not allowed as handles
   ref: expected temporary for handle
   ref: expected '('
*/
void invalid_variable_for_handle_access(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x473920ULL || rel >= 0x473af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00473af0 size=192 callers=3 calls=2
   calls: invalid_character, line_d_column_d_s
   ref: expected constant integer texel offset
   ref: texel offset too large for implementation
*/
void texel_offset_too_large_for_implementation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x473af0ULL || rel >= 0x473bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00473bb0 size=496 callers=1 calls=3
   calls: invalid_character, invalid_image_unit_specifier, line_d_column_d_s
   ref: expected ','
   ref: invalid image target type
*/
void invalid_image_target_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x473bb0ULL || rel >= 0x473da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00473da0 size=848 callers=4 calls=7
   calls: invalid_character, invalid_index_in_binding, line_d_column_d_s, relative_offset_must_be_an_integer_constant, sub_270, sub_2d0, too_many_array_initializers
   ref: expected ']'
   ref: invalid image unit number
   ref: invalid image unit specifier
   ref: expected '['
   ref: internal error
   ref: fatal error:  out of memory
*/
void invalid_image_unit_specifier(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x473da0ULL || rel >= 0x4740f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004740f0 size=1152 callers=4 calls=4
   calls: invalid_character, line_d_column_d_s, relative_offset_must_be_an_integer_constant, too_many_array_initializers
   ref: expected ']'
   ref: expected 'program'
   ref: can't mix counter buffer binding points in a variable
   ref: LDC instruction must use a CBUFFER variable
   ref: expected '['
   ref: expected '.'
   ref: CBUFFER variables may be used only in LDC instructions
   ref: invalid counter buffer offset
*/
void invalid_program_counter_binding_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4740f0ULL || rel >= 0x474570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00474570 size=2624 callers=3 calls=7
   calls: internal_error_2, line_d_column_d_s, reserved_keyword, sub_270, sub_2d0, sub_4a2d80, too_many_array_initializers
   ref: out of memory
   ref: fatal error:  out of memory
   ref: #0#1#2#3#4#5#6#7
*/
void out_of_memory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474570ULL || rel >= 0x474fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00474fb0 size=1552 callers=9 calls=4
   calls: reserved_keyword, sub_270, sub_2d0, too_many_array_initializers
   ref: #0#1#2#3#4#5#6#7
   ref: !0!1!2!3!4!5!6!7
*/
void f_0_1_2_3_4_5_6_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474fb0ULL || rel >= 0x4755c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004755c0 size=1056 callers=2 calls=4
   calls: reserved_keyword, sub_270, sub_2d0, too_many_array_initializers
   ref: #astack
*/
void astack(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4755c0ULL || rel >= 0x4759e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004759e0 size=1056 callers=1 calls=6
   calls: fatal_error_out_of_memory, line_d_column_d_s, sub_270, sub_2d0, sub_4a2d80, too_many_array_initializers
   ref: out of memory
   ref: fatal error:  out of memory
*/
void out_of_memory_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4759e0ULL || rel >= 0x475e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475e00 size=1920 callers=1 calls=5
   calls: fatal_error_out_of_memory, line_d_column_d_s, sub_270, sub_2d0, too_many_array_initializers
   ref: internal error
   ref: fatal error:  out of memory
*/
void internal_error_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475e00ULL || rel >= 0x476580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476580 size=384 callers=3 calls=2
   calls: line_d_column_d_s, sub_476700
   ref: multiple program parameters not allowed in one instruction
   ref: multiple attributes not allowed in one instruction
   ref: internal error
*/
void multiple_program_parameters_not_allowed_in_one_instructi(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476580ULL || rel >= 0x476700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476700 size=480 callers=3 calls=0
*/
void sub_476700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476700ULL || rel >= 0x4768e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004768e0 size=288 callers=15 calls=4
   calls: invalid_character, reserved_keyword, sub_270, sub_2d0
*/
void sub_4768e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4768e0ULL || rel >= 0x476a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476a00 size=448 callers=2 calls=4
   calls: internal_error_5, invalid_character, invalid_integer_constant, line_d_column_d_s
   ref: invalid local initialization
   ref: expected '='
*/
void invalid_local_initialization(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476a00ULL || rel >= 0x476bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476bc0 size=400 callers=0 calls=4
   calls: invalid_character, line_d_column_d_s, sub_4768e0, too_many_array_initializers
   ref: expected ']'
   ref: invalid variable name
   ref: size of temp array must be integer
*/
void size_of_temp_array_must_be_integer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476bc0ULL || rel >= 0x476d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476d50 size=272 callers=1 calls=4
   calls: invalid_character, invalid_index_in_binding, line_d_column_d_s, too_many_array_initializers
   ref: invalid subroutine number
   ref: expected 'program'
   ref: expected '.'
   ref: expected 'subroutine'
*/
void invalid_subroutine_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476d50ULL || rel >= 0x476e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476e60 size=880 callers=2 calls=6
   calls: fatal_error_out_of_memory, line_d_column_d_s, sub_270, sub_2d0, sub_4a2d80, too_many_array_initializers
   ref: out of memory
   ref: fatal error:  out of memory
*/
void out_of_memory_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476e60ULL || rel >= 0x4771d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004771d0 size=672 callers=2 calls=2
   calls: line_d_column_d_s, sub_270
   ref: binding in multiple relative-addressed arrays
   ref: internal error
   ref: too many program parameters
*/
void too_many_program_parameters(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4771d0ULL || rel >= 0x477470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477470 size=976 callers=9 calls=2
   calls: internal_error_8, line_d_column_d_s
   ref: internal error
*/
void internal_error_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477470ULL || rel >= 0x477840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477840 size=400 callers=3 calls=1
   calls: sub_2b0
*/
void sub_477840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477840ULL || rel >= 0x4779d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004779d0 size=336 callers=1 calls=0
*/
void sub_4779d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4779d0ULL || rel >= 0x477b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477b20 size=448 callers=1 calls=0
*/
void sub_477b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477b20ULL || rel >= 0x477ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477ce0 size=176 callers=1 calls=1
   calls: sub_270
*/
void sub_477ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477ce0ULL || rel >= 0x477d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477d90 size=608 callers=1 calls=1
   calls: sub_477ff0
*/
void sub_477d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477d90ULL || rel >= 0x477ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477ff0 size=144 callers=1 calls=0
*/
void sub_477ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477ff0ULL || rel >= 0x478080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478080 size=288 callers=5 calls=0
*/
void sub_478080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478080ULL || rel >= 0x4781a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004781a0 size=448 callers=0 calls=0
*/
void sub_4781a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4781a0ULL || rel >= 0x478360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478360 size=48 callers=0 calls=0
*/
void sub_478360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478360ULL || rel >= 0x478390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478390 size=96 callers=0 calls=0
*/
void sub_478390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478390ULL || rel >= 0x4783f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004783f0 size=32 callers=0 calls=0
*/
void sub_4783f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4783f0ULL || rel >= 0x478410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478410 size=16 callers=0 calls=0
*/
void sub_478410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478410ULL || rel >= 0x478420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478420 size=768 callers=1 calls=0
*/
void sub_478420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478420ULL || rel >= 0x478720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478720 size=240 callers=1 calls=0
*/
void sub_478720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478720ULL || rel >= 0x478810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478810 size=192 callers=1 calls=0
*/
void sub_478810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478810ULL || rel >= 0x4788d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004788d0 size=400 callers=3 calls=0
   ref: PerVertex.gl_
   ref: PerFragment.gl_
*/
void PerVertex_gl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4788d0ULL || rel >= 0x478a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478a60 size=128 callers=2 calls=2
   calls: sub_270, sub_2c0
*/
void sub_478a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478a60ULL || rel >= 0x478ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478ae0 size=1168 callers=1 calls=2
   calls: sub_2c0, sub_44f800
*/
void sub_478ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478ae0ULL || rel >= 0x478f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478f70 size=112 callers=1 calls=1
   calls: sub_2c0
*/
void sub_478f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478f70ULL || rel >= 0x478fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478fe0 size=256 callers=1 calls=2
   calls: sub_2c0, sub_478ae0
*/
void sub_478fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478fe0ULL || rel >= 0x4790e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004790e0 size=160 callers=1 calls=2
   calls: sub_2c0, sub_479180
*/
void sub_4790e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4790e0ULL || rel >= 0x479180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479180 size=160 callers=3 calls=2
   calls: sub_2b4580, sub_2c0
*/
void sub_479180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479180ULL || rel >= 0x479220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479220 size=80 callers=1 calls=1
   calls: sub_2c0
*/
void sub_479220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479220ULL || rel >= 0x479270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479270 size=32 callers=1 calls=0
*/
void sub_479270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479270ULL || rel >= 0x479290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479290 size=48 callers=1 calls=1
   calls: sub_270
*/
void sub_479290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479290ULL || rel >= 0x4792c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004792c0 size=240 callers=1 calls=3
   calls: sub_270, sub_2b0, sub_2c0
*/
void sub_4792c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4792c0ULL || rel >= 0x4793b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004793b0 size=32 callers=2 calls=0
*/
void sub_4793b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4793b0ULL || rel >= 0x4793d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004793d0 size=240 callers=2 calls=1
   calls: sub_2b0
*/
void sub_4793d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4793d0ULL || rel >= 0x4794c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004794c0 size=1728 callers=6 calls=1
   calls: sub_2b0
   ref: PATCH_32
   ref: -D__GLSL_CG_DATA_TYPES
   ref: LINE_OUT
   ref: NV_shader_atomic_float
   ref: -vulkan
   ref: -oglsl
   ref: -fixedbind
   ref: -DVULKAN=100
*/
void NV_shader_atomic_float64_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4794c0ULL || rel >= 0x479b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479b80 size=1856 callers=4 calls=1
   calls: sub_2b0
   ref: maxSamples=4
   ref: -D__GLSL_CG_DATA_TYPES
   ref: -vulkan
   ref: -oglsl
   ref: -DVULKAN=100
   ref: maxSamples=8
   ref: maxSamples=16
   ref: NV_bindless_texture
*/
void NV_shader_atomic_float64_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479b80ULL || rel >= 0x47a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047a2c0 size=112 callers=2 calls=0
   ref: -vulkan
   ref: -DVULKAN=100
   ref: -thread
   ref: -D__FILE__=0
*/
void vulkan(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47a2c0ULL || rel >= 0x47a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047a330 size=176 callers=0 calls=1
   calls: sub_2b5e50
   ref: store_required_end
   ref: store_required_start
   ref: max_register_usage
*/
void store_required_start_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47a330ULL || rel >= 0x47a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047a3e0 size=1584 callers=2 calls=8
   calls: sub_2b4580, sub_2c0, sub_44f800, sub_479180, sub_48dcf0, sub_48ddc0, sub_4bfe00, sub_4c0cf0
*/
void sub_47a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47a3e0ULL || rel >= 0x47aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047aa10 size=26192 callers=1 calls=31
   calls: EXT_bindless_texture_2, NV_shader_atomic_float64_2, sub_270, sub_2b0, sub_2b5e50, sub_2b7470, sub_2b7500, sub_2c0, sub_4779d0, sub_477b20, sub_477ce0, sub_478080
   ... +19 more
   ref: No vertex shader present in a program object with a tessellation control shader.
   ref: error: gl_NextBuffer/gl_SkipComponents<i> require ARB_transform_feedback3.
   ref: error: Duplicate varying names are not allowed.
   ref: gl_FragColor
   ref: gl_NextBuffer
   ref: error: Varying (named %s) contains more components than allowed by MAX_TRANSFORM_FEEDBACK_SEPARATE_C
   ref: Geometry attribute output count exceeds hardware limits.
   ref: error: different uniforms (named %s and %s) sharing the same offset within a uniform block (named %s
*/
void gl_SecondaryFragDataEXT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47aa10ULL || rel >= 0x481060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481060 size=272 callers=83 calls=1
   calls: sub_2b0
*/
void sub_481060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481060ULL || rel >= 0x481170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481170 size=5152 callers=6 calls=28
   calls: Bad_options, FSIE_specified_in_dead_code, Failed_to_allocate_required_internal_memory, bad_arguments, contiguous, d_lines, error_type_mismatch_between_shaders_for_uniform_named_s, incompatible_options_for_link, out_of_memory_4, sub_210, sub_220, sub_2b0
   ... +16 more
   ref: error: Block "%s" mismatch between shader stages
   ref: error: gl_PerVertex mismatch when linking separable shaders; output from %s shader and input to %s s
   ref: error: "%s" not declared as an output from the previous stage
   ref: error: Type mismatch between variables "%s" and "%s" matched by location "%d"
   ref: error: struct "%s" not declared as output
   ref: ARB_bindless_texture
   ref: NV_bindless_texture
   ref: EXT_bindless_texture
*/
void EXT_bindless_texture_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481170ULL || rel >= 0x482590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482590 size=4112 callers=1 calls=10
   calls: sub_270, sub_2b0, sub_2c0, sub_4793b0, sub_47a3e0, sub_48dcf0, sub_48dd30, sub_48e5a0, sub_4bf2a0, sub_4c0ce0
*/
void sub_482590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482590ULL || rel >= 0x4835a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004835a0 size=2464 callers=1 calls=8
   calls: gl_SecondaryFragDataEXT, sub_210, sub_220, sub_2b0, sub_2c0, sub_477d90, sub_478a60, sub_47a3e0
   ref: ilog_%u_%u.txt
*/
void ilog__u__u(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4835a0ULL || rel >= 0x483f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483f40 size=240 callers=1 calls=1
   calls: sub_2b0
*/
void sub_483f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483f40ULL || rel >= 0x484030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484030 size=1264 callers=1 calls=0
*/
void sub_484030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484030ULL || rel >= 0x484520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484520 size=416 callers=1 calls=0
*/
void sub_484520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484520ULL || rel >= 0x4846c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004846c0 size=2160 callers=0 calls=8
   calls: PerVertex_gl, gl_PerFragment, gl_PerVertex_s, r11_g11_b10_2, samplerExternalBindless, sub_2b7470, sub_481060, sub_48ac10
   ref: error: patch qualifier mismatch between shaders for variable (named %s)
   ref: error: patch qualifier mismatch between shaders for variable named %s
   ref: SRC1COL
   ref: error: unknown builtin varying parameter (named %s) encountered
   ref: error: interpolation modifier mismatch for varying parameter (named %s) between shader stages
   ref: error: non-array variable %s cannot match array variable
   ref: STREAM
   ref: error: type mismatch for varying parameter (named %s) between shader stages
*/
void SRC1COL(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4846c0ULL || rel >= 0x484f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484f30 size=384 callers=2 calls=2
   calls: r11_g11_b10, sub_48ad40
*/
void sub_484f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484f30ULL || rel >= 0x4850b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004850b0 size=20112 callers=0 calls=29
   calls: PerVertex_gl, error_layout_mismatch_between_shaders_for_uniform_named, error_type_mismatch_between_shaders_for_uniform_named_s, gl_PerFragment, r11_g11_b10, samplerExternalBindless, samplerExternalBindless_2, sub_1e20, sub_1e30, sub_1e40, sub_1e50, sub_1fa0
   ... +17 more
   ref: error: inconsistent offset for atomic counter variable (named %s) between shaders
   ref: error: unknown builtin vertex attribute (named %s) encountered
   ref: error: shader storage buffer variable "%s" already belongs to interface block "%s" and cannot also b
   ref: error: type mismatch between shaders for uniform (named %s)
   ref: error:  bindless qualifier mismatch between shaders for uniform (named %s)
   ref: error: inconsistent offset within SSBO of buffer variable (named %s) between shaders
   ref: error: inconsistent binding number for atomic counter variable (named %s) between shaders
   ref: error: uniform buffer variable "%s" already belongs to interface block "%s" and cannot also belong t
*/
void gl_PrivateDriverBlock(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4850b0ULL || rel >= 0x489f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489f40 size=1216 callers=15 calls=4
   calls: gl_PerFragment, r11_g11_b10, sub_2b0, sub_2c0
   ref: __samplerExternalBindless
   ref: gl_out
   ref: gl_PerFragment
   ref: __samplerExternal
   ref: gl_out-out
   ref: Failed to allocate required internal memory.
   ref: gl_PerVertex
   ref: %s[%d]
*/
void gl_PerFragment(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489f40ULL || rel >= 0x48a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a400 size=240 callers=6 calls=1
   calls: sub_48de00
   ref: gl_PerFragment.gl_
   ref: gl_PerFragment.%s
   ref: gl_PerVertex.gl_
   ref: gl_PerVertex.%s
*/
void gl_PerVertex_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a400ULL || rel >= 0x48a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a4f0 size=416 callers=2 calls=2
   calls: r11_g11_b10, sub_48ab60
   ref: __samplerExternalBindless
   ref: __samplerExternal
*/
void samplerExternalBindless(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a4f0ULL || rel >= 0x48a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a690 size=1232 callers=7 calls=0
   ref: r11_g11_b10
   ref: _bindless
   ref: rgb10_a2
*/
void r11_g11_b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a690ULL || rel >= 0x48ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ab60 size=176 callers=7 calls=1
   calls: sub_48ab60
*/
void sub_48ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ab60ULL || rel >= 0x48ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ac10 size=304 callers=3 calls=1
   calls: sub_48ac10
*/
void sub_48ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ac10ULL || rel >= 0x48ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ad40 size=1040 callers=3 calls=4
   calls: r11_g11_b10, sub_2d0, sub_48ab60, sub_48ad40
*/
void sub_48ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ad40ULL || rel >= 0x48b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b150 size=560 callers=2 calls=3
   calls: Failed_to_allocate_required_internal_memory, sub_2b0, sub_2c0
   ref: Failed to allocate required internal memory.
*/
void Failed_to_allocate_required_internal_memory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b150ULL || rel >= 0x48b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b380 size=128 callers=2 calls=1
   calls: sub_48b380
*/
void sub_48b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b380ULL || rel >= 0x48b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b400 size=1168 callers=3 calls=8
   calls: gl_PerFragment, out_of_memory_4, sub_2d0, sub_481060, sub_48ab60, sub_48b890, sub_48de00, sub_48de80
   ref: out of memory
   ref: Error Duplicate location %d for uniform %s
   ref: Error: Uniform location mismatch for: %s, (%d != %d)
*/
void out_of_memory_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b400ULL || rel >= 0x48b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b890 size=384 callers=3 calls=2
   calls: sub_48ba10, sub_4c0ce0
*/
void sub_48b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b890ULL || rel >= 0x48ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ba10 size=672 callers=1 calls=0
*/
void sub_48ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ba10ULL || rel >= 0x48bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048bcb0 size=240 callers=3 calls=1
   calls: r11_g11_b10
*/
void sub_48bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48bcb0ULL || rel >= 0x48bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048bda0 size=304 callers=6 calls=2
   calls: sub_1e30, sub_1e50
*/
void sub_48bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48bda0ULL || rel >= 0x48bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048bed0 size=1344 callers=4 calls=1
   calls: r11_g11_b10
   ref: __samplerExternalBindless
   ref: __samplerExternal
*/
void samplerExternalBindless_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48bed0ULL || rel >= 0x48c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c410 size=496 callers=2 calls=2
   calls: sub_2b0, sub_2c0
   ref: Failed to allocate required internal memory.
   ref: %s[%d]
*/
void unnamed_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c410ULL || rel >= 0x48c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c600 size=160 callers=0 calls=0
*/
void sub_48c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c600ULL || rel >= 0x48c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c6a0 size=448 callers=3 calls=2
   calls: error_type_mismatch_between_shaders_for_uniform_named_s, sub_481060
   ref: error: array size mismatch between shaders for uniform (named %s)
   ref: error: type mismatch between shaders for uniform (named %s)
   ref: error: struct fields mismatch between shaders for uniform (named %s)
   ref: error: struct type mismatch between shaders for uniform (named %s)
*/
void error_type_mismatch_between_shaders_for_uniform_named_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c6a0ULL || rel >= 0x48c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c860 size=656 callers=1 calls=6
   calls: sub_1e30, sub_1e50, sub_2b7470, sub_481060, sub_48bda0, sub_4c4af0
   ref: error: inconsistent offset within UBO of uniform variable (named %s) between shaders
   ref: error: layout mismatch between shaders for uniform (named %s)
*/
void error_layout_mismatch_between_shaders_for_uniform_named(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c860ULL || rel >= 0x48caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048caf0 size=240 callers=2 calls=2
   calls: sub_4bfdf0, sub_4bfe00
*/
void sub_48caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48caf0ULL || rel >= 0x48cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048cbe0 size=80 callers=0 calls=0
*/
void sub_48cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48cbe0ULL || rel >= 0x48cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048cc30 size=544 callers=2 calls=1
   calls: sub_1ff0
*/
void sub_48cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48cc30ULL || rel >= 0x48ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ce50 size=784 callers=2 calls=1
   calls: sub_1ff0
*/
void sub_48ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ce50ULL || rel >= 0x48d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d160 size=256 callers=3 calls=0
*/
void sub_48d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d160ULL || rel >= 0x48d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d260 size=384 callers=1 calls=2
   calls: sub_48d5b0, sub_4c0ce0
*/
void sub_48d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d260ULL || rel >= 0x48d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d3e0 size=464 callers=3 calls=0
*/
void sub_48d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d3e0ULL || rel >= 0x48d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d5b0 size=672 callers=1 calls=0
*/
void sub_48d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d5b0ULL || rel >= 0x48d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d850 size=64 callers=2 calls=2
   calls: sub_48d850, sub_4c0cf0
*/
void sub_48d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d850ULL || rel >= 0x48d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d890 size=384 callers=1 calls=2
   calls: sub_48da10, sub_4c0ce0
*/
void sub_48d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d890ULL || rel >= 0x48da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048da10 size=672 callers=1 calls=0
*/
void sub_48da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48da10ULL || rel >= 0x48dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048dcb0 size=64 callers=2 calls=2
   calls: sub_48dcb0, sub_4c0cf0
*/
void sub_48dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48dcb0ULL || rel >= 0x48dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048dcf0 size=64 callers=5 calls=2
   calls: sub_48dcf0, sub_4c0cf0
*/
void sub_48dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48dcf0ULL || rel >= 0x48dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048dd30 size=144 callers=21 calls=1
   calls: sub_2b0
*/
void sub_48dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48dd30ULL || rel >= 0x48ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ddc0 size=64 callers=21 calls=1
   calls: sub_2c0
*/
void sub_48ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ddc0ULL || rel >= 0x48de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048de00 size=128 callers=23 calls=0
*/
void sub_48de00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48de00ULL || rel >= 0x48de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048de80 size=352 callers=18 calls=1
   calls: sub_2b0
*/
void sub_48de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48de80ULL || rel >= 0x48dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048dfe0 size=1184 callers=3 calls=1
   calls: sub_48dfe0
*/
void sub_48dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48dfe0ULL || rel >= 0x48e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048e480 size=288 callers=27 calls=1
   calls: sub_48dfe0
*/
void sub_48e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e480ULL || rel >= 0x48e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048e5a0 size=784 callers=7 calls=0
*/
void sub_48e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e5a0ULL || rel >= 0x48e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048e8b0 size=128 callers=1 calls=1
   calls: sub_48e930
*/
void sub_48e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e8b0ULL || rel >= 0x48e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048e930 size=1056 callers=6 calls=7
   calls: sub_270, sub_2b0, sub_2c0, sub_478420, sub_492500, sub_4a2e60, sub_4a3580
*/
void sub_48e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e930ULL || rel >= 0x48ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ed50 size=144 callers=1 calls=1
   calls: sub_48e930
*/
void sub_48ed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ed50ULL || rel >= 0x48ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ede0 size=336 callers=1 calls=1
   calls: sub_48e930
*/
void sub_48ede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ede0ULL || rel >= 0x48ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ef30 size=192 callers=1 calls=1
   calls: sub_48e930
*/
void sub_48ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ef30ULL || rel >= 0x48eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048eff0 size=192 callers=1 calls=1
   calls: sub_48e930
*/
void sub_48eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48eff0ULL || rel >= 0x48f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f0b0 size=176 callers=1 calls=1
   calls: sub_48e930
*/
void sub_48f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f0b0ULL || rel >= 0x48f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f160 size=592 callers=1 calls=0
*/
void sub_48f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f160ULL || rel >= 0x48f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f3b0 size=80 callers=6 calls=1
   calls: sub_2c0
*/
void sub_48f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f3b0ULL || rel >= 0x48f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f400 size=864 callers=0 calls=2
   calls: sub_270, sub_498150
*/
void sub_48f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f400ULL || rel >= 0x48f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f760 size=320 callers=1 calls=4
   calls: sub_2350, sub_23d0, sub_48f8a0, sub_496fc0
*/
void sub_48f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f760ULL || rel >= 0x48f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f8a0 size=656 callers=5 calls=1
   calls: sub_2b0
*/
void sub_48f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f8a0ULL || rel >= 0x48fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fb30 size=336 callers=1 calls=4
   calls: sub_2350, sub_2520, sub_48f8a0, sub_496fc0
*/
void sub_48fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fb30ULL || rel >= 0x48fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fc80 size=560 callers=1 calls=5
   calls: sub_2350, sub_2360, sub_48f160, sub_48f8a0, sub_497010
*/
void sub_48fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fc80ULL || rel >= 0x48feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048feb0 size=336 callers=1 calls=4
   calls: sub_2350, sub_2440, sub_48f8a0, sub_496fc0
*/
void sub_48feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48feb0ULL || rel >= 0x490000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490000 size=336 callers=1 calls=4
   calls: sub_2350, sub_24b0, sub_48f8a0, sub_496fc0
*/
void sub_490000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490000ULL || rel >= 0x490150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490150 size=288 callers=1 calls=3
   calls: sub_2350, sub_2590, sub_496fc0
*/
void sub_490150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490150ULL || rel >= 0x490270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490270 size=1808 callers=6 calls=3
   calls: sub_2b0, sub_2c0, sub_4040
*/
void sub_490270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490270ULL || rel >= 0x490980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490980 size=352 callers=1 calls=7
   calls: sub_27a190, sub_2b0, sub_4040, sub_490270, sub_4ce1d0, sub_4ce210, sub_4ce230
*/
void sub_490980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490980ULL || rel >= 0x490ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490ae0 size=352 callers=1 calls=7
   calls: sub_27a190, sub_2b0, sub_4040, sub_490270, sub_4ce1d0, sub_4ce210, sub_4ce230
*/
void sub_490ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490ae0ULL || rel >= 0x490c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490c40 size=352 callers=1 calls=7
   calls: sub_27a190, sub_2b0, sub_4040, sub_490270, sub_4ce1d0, sub_4ce210, sub_4ce230
*/
void sub_490c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490c40ULL || rel >= 0x490da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490da0 size=352 callers=1 calls=7
   calls: sub_27a190, sub_2b0, sub_4040, sub_490270, sub_4ce1d0, sub_4ce210, sub_4ce230
*/
void sub_490da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490da0ULL || rel >= 0x490f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490f00 size=416 callers=1 calls=7
   calls: sub_27a190, sub_2b0, sub_4040, sub_490270, sub_4ce1d0, sub_4ce210, sub_4ce230
*/
void sub_490f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490f00ULL || rel >= 0x4910a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004910a0 size=416 callers=1 calls=7
   calls: sub_27a190, sub_2b0, sub_4040, sub_490270, sub_4ce1d0, sub_4ce210, sub_4ce230
*/
void sub_4910a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4910a0ULL || rel >= 0x491240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491240 size=400 callers=1 calls=2
   calls: sub_2b0, sub_4913d0
*/
void sub_491240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491240ULL || rel >= 0x4913d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004913d0 size=160 callers=2 calls=1
   calls: sub_2c0
*/
void sub_4913d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4913d0ULL || rel >= 0x491470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491470 size=80 callers=3 calls=0
*/
void sub_491470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491470ULL || rel >= 0x4914c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004914c0 size=32 callers=5 calls=0
*/
void sub_4914c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4914c0ULL || rel >= 0x4914e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004914e0 size=2944 callers=68 calls=6
   calls: sub_2a0910, sub_2a1260, sub_2a12e0, sub_2b0, sub_492060, sub_492190
*/
void sub_4914e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4914e0ULL || rel >= 0x492060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492060 size=304 callers=2 calls=1
   calls: sub_492190
*/
void sub_492060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492060ULL || rel >= 0x492190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492190 size=512 callers=2 calls=0
*/
void sub_492190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492190ULL || rel >= 0x492390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492390 size=80 callers=3 calls=1
   calls: sub_270
*/
void sub_492390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492390ULL || rel >= 0x4923e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004923e0 size=288 callers=5 calls=4
   calls: sub_2c0, sub_4923e0, sub_4bfe00, sub_4bfe20
*/
void sub_4923e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4923e0ULL || rel >= 0x492500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492500 size=128 callers=1 calls=1
   calls: sub_2c0
*/
void sub_492500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492500ULL || rel >= 0x492580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492580 size=48 callers=1 calls=0
*/
void sub_492580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492580ULL || rel >= 0x4925b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004925b0 size=224 callers=1 calls=1
   calls: sub_2c0
*/
void sub_4925b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4925b0ULL || rel >= 0x492690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492690 size=704 callers=12 calls=1
   calls: sub_2a0cd0
*/
void sub_492690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492690ULL || rel >= 0x492950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492950 size=304 callers=3 calls=0
*/
void sub_492950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492950ULL || rel >= 0x492a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492a80 size=1232 callers=3 calls=3
   calls: sub_2b0, sub_2c0, sub_4914e0
*/
void sub_492a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492a80ULL || rel >= 0x492f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492f50 size=176 callers=3 calls=0
*/
void sub_492f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492f50ULL || rel >= 0x493000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493000 size=64 callers=3 calls=0
*/
void sub_493000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493000ULL || rel >= 0x493040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493040 size=416 callers=1 calls=1
   calls: sub_2a0cd0
*/
void sub_493040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493040ULL || rel >= 0x4931e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004931e0 size=128 callers=1 calls=1
   calls: sub_2a0cd0
*/
void sub_4931e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4931e0ULL || rel >= 0x493260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493260 size=816 callers=1 calls=4
   calls: sub_2a0cc0, sub_2a0cd0, sub_2c0, sub_4914e0
*/
void sub_493260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493260ULL || rel >= 0x493590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493590 size=64 callers=1 calls=0
*/
void sub_493590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493590ULL || rel >= 0x4935d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004935d0 size=368 callers=1 calls=3
   calls: sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_4935d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4935d0ULL || rel >= 0x493740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493740 size=96 callers=1 calls=0
*/
void sub_493740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493740ULL || rel >= 0x4937a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004937a0 size=368 callers=1 calls=3
   calls: sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_4937a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4937a0ULL || rel >= 0x493910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493910 size=112 callers=1 calls=0
*/
void sub_493910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493910ULL || rel >= 0x493980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493980 size=352 callers=1 calls=3
   calls: sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_493980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493980ULL || rel >= 0x493ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493ae0 size=96 callers=5 calls=0
*/
void sub_493ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493ae0ULL || rel >= 0x493b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493b40 size=992 callers=5 calls=1
   calls: sub_2b0
*/
void sub_493b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493b40ULL || rel >= 0x493f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493f20 size=80 callers=3 calls=0
*/
void sub_493f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493f20ULL || rel >= 0x493f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493f70 size=816 callers=3 calls=1
   calls: sub_2b0
*/
void sub_493f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493f70ULL || rel >= 0x4942a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004942a0 size=64 callers=1 calls=0
*/
void sub_4942a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4942a0ULL || rel >= 0x4942e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004942e0 size=432 callers=1 calls=3
   calls: sub_2b0, sub_2c0, sub_4914e0
*/
void sub_4942e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4942e0ULL || rel >= 0x494490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494490 size=1616 callers=1 calls=3
   calls: sub_2b0, sub_2c0, sub_4914e0
*/
void sub_494490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494490ULL || rel >= 0x494ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494ae0 size=160 callers=1 calls=1
   calls: sub_2a0b30
*/
void sub_494ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494ae0ULL || rel >= 0x494b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494b80 size=1216 callers=1 calls=3
   calls: sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_494b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494b80ULL || rel >= 0x495040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495040 size=64 callers=2 calls=0
*/
void sub_495040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495040ULL || rel >= 0x495080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495080 size=512 callers=2 calls=3
   calls: sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_495080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495080ULL || rel >= 0x495280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495280 size=704 callers=1 calls=3
   calls: sub_2b0, sub_2c0, sub_4914e0
*/
void sub_495280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495280ULL || rel >= 0x495540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495540 size=48 callers=1 calls=0
*/
void sub_495540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495540ULL || rel >= 0x495570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495570 size=240 callers=1 calls=2
   calls: sub_2c0, sub_4914e0
*/
void sub_495570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495570ULL || rel >= 0x495660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495660 size=96 callers=5 calls=0
*/
void sub_495660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495660ULL || rel >= 0x4956c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004956c0 size=3904 callers=5 calls=5
   calls: sub_2a0cb0, sub_2a0cc0, sub_2b0, sub_2c0, sub_4914e0
*/
void sub_4956c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4956c0ULL || rel >= 0x496600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496600 size=128 callers=5 calls=0
*/
void sub_496600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496600ULL || rel >= 0x496680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496680 size=1840 callers=5 calls=5
   calls: sub_2a0cc0, sub_2b0, sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_496680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496680ULL || rel >= 0x496db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496db0 size=160 callers=1 calls=0
*/
void sub_496db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496db0ULL || rel >= 0x496e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496e50 size=352 callers=5 calls=1
   calls: sub_2a0c60
*/
void sub_496e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496e50ULL || rel >= 0x496fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496fb0 size=16 callers=6 calls=0
*/
void sub_496fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496fb0ULL || rel >= 0x496fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496fc0 size=80 callers=5 calls=0
*/
void sub_496fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496fc0ULL || rel >= 0x497010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497010 size=208 callers=1 calls=0
*/
void sub_497010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497010ULL || rel >= 0x4970e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004970e0 size=16 callers=2 calls=0
*/
void sub_4970e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4970e0ULL || rel >= 0x4970f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004970f0 size=432 callers=1 calls=4
   calls: sub_2b0, sub_2c0, sub_4914e0, sub_4a3170
*/
void sub_4970f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4970f0ULL || rel >= 0x4972a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004972a0 size=176 callers=1 calls=1
   calls: sub_4a3170
*/
void sub_4972a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4972a0ULL || rel >= 0x497350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497350 size=304 callers=1 calls=0
*/
void sub_497350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497350ULL || rel >= 0x497480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497480 size=1456 callers=1 calls=4
   calls: sub_2b0, sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_497480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497480ULL || rel >= 0x497a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497a30 size=96 callers=1 calls=0
*/
void sub_497a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497a30ULL || rel >= 0x497a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497a90 size=576 callers=1 calls=4
   calls: sub_2b0, sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_497a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497a90ULL || rel >= 0x497cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497cd0 size=112 callers=1 calls=0
*/
void sub_497cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497cd0ULL || rel >= 0x497d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497d40 size=384 callers=1 calls=2
   calls: sub_2c0, sub_4914e0
*/
void sub_497d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497d40ULL || rel >= 0x497ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497ec0 size=656 callers=1 calls=3
   calls: sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_497ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497ec0ULL || rel >= 0x498150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498150 size=480 callers=1 calls=0
*/
void sub_498150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498150ULL || rel >= 0x498330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498330 size=832 callers=1 calls=2
   calls: sub_2c0, sub_4914e0
*/
void sub_498330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498330ULL || rel >= 0x498670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498670 size=64 callers=5 calls=0
*/
void sub_498670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498670ULL || rel >= 0x4986b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004986b0 size=2800 callers=7 calls=8
   calls: sub_2a0cc0, sub_2c0, sub_4914e0, sub_4986b0, sub_4991a0, sub_499a70, sub_4a3150, sub_4a3170
*/
void sub_4986b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4986b0ULL || rel >= 0x4991a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004991a0 size=432 callers=11 calls=2
   calls: sub_2b0, sub_4a3150
*/
void sub_4991a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4991a0ULL || rel >= 0x499350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499350 size=1824 callers=0 calls=7
   calls: sub_2a0cc0, sub_2a1260, sub_2b0, sub_2c0, sub_4914c0, sub_4914e0, sub_4a3150
*/
void sub_499350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499350ULL || rel >= 0x499a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499a70 size=10464 callers=3 calls=6
   calls: sub_2a0cc0, sub_2b0, sub_2c0, sub_4914c0, sub_4914e0, sub_4a3150
*/
void sub_499a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499a70ULL || rel >= 0x49c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c350 size=64 callers=5 calls=0
*/
void sub_49c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c350ULL || rel >= 0x49c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c390 size=4912 callers=5 calls=5
   calls: sub_2b0, sub_2c0, sub_4914e0, sub_4991a0, sub_4a3150
*/
void sub_49c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c390ULL || rel >= 0x49d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d6c0 size=48 callers=1 calls=0
*/
void sub_49d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d6c0ULL || rel >= 0x49d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d6f0 size=1296 callers=1 calls=3
   calls: sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_49d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d6f0ULL || rel >= 0x49dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049dc00 size=64 callers=1 calls=0
*/
void sub_49dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49dc00ULL || rel >= 0x49dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049dc40 size=144 callers=1 calls=1
   calls: sub_2a0cd0
*/
void sub_49dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49dc40ULL || rel >= 0x49dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049dcd0 size=1520 callers=1 calls=3
   calls: sub_2a0cd0, sub_2c0, sub_4914e0
*/
void sub_49dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49dcd0ULL || rel >= 0x49e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e2c0 size=1232 callers=1 calls=4
   calls: sub_2c0, sub_4914e0, sub_4991a0, sub_4a3150
*/
void sub_49e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e2c0ULL || rel >= 0x49e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e790 size=176 callers=1 calls=0
*/
void sub_49e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e790ULL || rel >= 0x49e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e840 size=640 callers=1 calls=4
   calls: sub_2b0, sub_2c0, sub_4914e0, sub_4a3170
*/
void sub_49e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e840ULL || rel >= 0x49eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eac0 size=368 callers=1 calls=2
   calls: sub_2c0, sub_4914e0
*/
void sub_49eac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eac0ULL || rel >= 0x49ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ec30 size=464 callers=1 calls=2
   calls: sub_2c0, sub_4914e0
*/
void sub_49ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ec30ULL || rel >= 0x49ee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ee00 size=48 callers=5 calls=0
*/
void sub_49ee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ee00ULL || rel >= 0x49ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ee30 size=1920 callers=5 calls=5
   calls: sub_2b0, sub_2c0, sub_4914e0, sub_4991a0, sub_4a3150
*/
void sub_49ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ee30ULL || rel >= 0x49f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f5b0 size=208 callers=3 calls=0
*/
void sub_49f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f5b0ULL || rel >= 0x49f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f680 size=16 callers=3 calls=0
*/
void sub_49f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f680ULL || rel >= 0x49f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f690 size=64 callers=1 calls=0
*/
void sub_49f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f690ULL || rel >= 0x49f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f6d0 size=1744 callers=1 calls=5
   calls: sub_2a0cc0, sub_2b0, sub_2c0, sub_491470, sub_4914e0
*/
void sub_49f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f6d0ULL || rel >= 0x49fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049fda0 size=288 callers=4 calls=3
   calls: sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_49fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49fda0ULL || rel >= 0x49fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049fec0 size=32 callers=4 calls=0
*/
void sub_49fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49fec0ULL || rel >= 0x49fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049fee0 size=48 callers=2 calls=0
*/
void sub_49fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49fee0ULL || rel >= 0x49ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ff10 size=48 callers=1 calls=0
*/
void sub_49ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ff10ULL || rel >= 0x49ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ff40 size=32 callers=1 calls=0
*/
void sub_49ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ff40ULL || rel >= 0x49ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ff60 size=832 callers=2 calls=3
   calls: sub_2c0, sub_4914e0, sub_4a3150
*/
void sub_49ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ff60ULL || rel >= 0x4a02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a02a0 size=96 callers=1 calls=0
*/
void sub_4a02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a02a0ULL || rel >= 0x4a0300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0300 size=16 callers=1 calls=0
*/
void sub_4a0300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0300ULL || rel >= 0x4a0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0310 size=2736 callers=3 calls=7
   calls: sub_2a0cc0, sub_2b0, sub_2c0, sub_4914e0, sub_4991a0, sub_4a2320, sub_4a3150
*/
void sub_4a0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0310ULL || rel >= 0x4a0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0dc0 size=384 callers=3 calls=2
   calls: sub_2c0, sub_4914e0
*/
void sub_4a0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0dc0ULL || rel >= 0x4a0f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0f40 size=48 callers=5 calls=0
*/
void sub_4a0f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0f40ULL || rel >= 0x4a0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0f70 size=1408 callers=5 calls=5
   calls: sub_2c0, sub_4914e0, sub_4991a0, sub_4a3150, sub_4a3170
*/
void sub_4a0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0f70ULL || rel >= 0x4a14f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a14f0 size=96 callers=1 calls=0
*/
void sub_4a14f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a14f0ULL || rel >= 0x4a1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a1550 size=384 callers=1 calls=3
   calls: sub_2b0, sub_2c0, sub_4914e0
*/
void sub_4a1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1550ULL || rel >= 0x4a16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a16d0 size=144 callers=1 calls=0
*/
void sub_4a16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a16d0ULL || rel >= 0x4a1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a1760 size=432 callers=1 calls=3
   calls: sub_2b0, sub_2c0, sub_4914e0
*/
void sub_4a1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1760ULL || rel >= 0x4a1910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a1910 size=144 callers=2 calls=0
*/
void sub_4a1910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1910ULL || rel >= 0x4a19a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a19a0 size=112 callers=2 calls=1
   calls: sub_2a0cd0
*/
void sub_4a19a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a19a0ULL || rel >= 0x4a1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a1a10 size=432 callers=1 calls=3
   calls: sub_2a0cd0, sub_2c0, sub_4914e0
*/
void sub_4a1a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1a10ULL || rel >= 0x4a1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a1bc0 size=112 callers=1 calls=1
   calls: sub_2a0cd0
*/
void sub_4a1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1bc0ULL || rel >= 0x4a1c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a1c30 size=64 callers=1 calls=0
*/
void sub_4a1c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1c30ULL || rel >= 0x4a1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a1c70 size=1712 callers=1 calls=4
   calls: sub_2a0cd0, sub_2b0, sub_2c0, sub_4914e0
*/
void sub_4a1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1c70ULL || rel >= 0x4a2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a2320 size=2656 callers=1 calls=2
   calls: sub_2b0, sub_2c0
*/
void sub_4a2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a2320ULL || rel >= 0x4a2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a2d80 size=160 callers=57 calls=0
*/
void sub_4a2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a2d80ULL || rel >= 0x4a2e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a2e20 size=64 callers=1 calls=0
*/
void sub_4a2e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a2e20ULL || rel >= 0x4a2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a2e60 size=752 callers=1 calls=0
*/
void sub_4a2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a2e60ULL || rel >= 0x4a3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3150 size=32 callers=29 calls=0
*/
void sub_4a3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3150ULL || rel >= 0x4a3170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3170 size=32 callers=7 calls=0
*/
void sub_4a3170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3170ULL || rel >= 0x4a3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3190 size=992 callers=1 calls=2
   calls: sub_2c0, sub_4914e0
*/
void sub_4a3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3190ULL || rel >= 0x4a3570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3570 size=16 callers=6 calls=0
*/
void sub_4a3570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3570ULL || rel >= 0x4a3580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3580 size=11072 callers=1 calls=14
   calls: sub_2a08b0, sub_2a0910, sub_2a0cb0, sub_2a14c0, sub_2b0, sub_2c0, sub_4914e0, sub_4a3190, sub_4a60c0, sub_4a7960, sub_4a7bd0, sub_4a9af0
   ... +2 more
*/
void sub_4a3580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3580ULL || rel >= 0x4a60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a60c0 size=6304 callers=42 calls=8
   calls: sub_2a0910, sub_2a1260, sub_2a12e0, sub_2a1470, sub_4a9cf0, sub_4aca60, sub_4acff0, sub_4c4ae0
*/
void sub_4a60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a60c0ULL || rel >= 0x4a7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a7960 size=624 callers=6 calls=0
*/
void sub_4a7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a7960ULL || rel >= 0x4a7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a7bd0 size=7968 callers=1 calls=5
   calls: sub_2a0910, sub_2a0cc0, sub_2a1260, sub_4a60c0, sub_4ad290
*/
void sub_4a7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a7bd0ULL || rel >= 0x4a9af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a9af0 size=512 callers=5 calls=1
   calls: sub_2a0910
*/
void sub_4a9af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a9af0ULL || rel >= 0x4a9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a9cf0 size=11632 callers=4 calls=7
   calls: sub_2a0910, sub_2a0cc0, sub_2a1260, sub_2a12e0, sub_2c0, sub_4914e0, sub_4ad6d0
*/
void sub_4a9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a9cf0ULL || rel >= 0x4aca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aca60 size=1424 callers=7 calls=1
   calls: sub_2a0910
*/
void sub_4aca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aca60ULL || rel >= 0x4acff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004acff0 size=672 callers=1 calls=3
   calls: sub_2a0910, sub_2a0cc0, sub_2a1260
*/
void sub_4acff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4acff0ULL || rel >= 0x4ad290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ad290 size=1088 callers=8 calls=1
   calls: sub_2a0910
*/
void sub_4ad290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ad290ULL || rel >= 0x4ad6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ad6d0 size=128 callers=3 calls=0
*/
void sub_4ad6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ad6d0ULL || rel >= 0x4ad750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ad750 size=2656 callers=1 calls=1
   calls: sub_4ae1b0
*/
void sub_4ad750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ad750ULL || rel >= 0x4ae1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae1b0 size=384 callers=4 calls=2
   calls: sub_4ae330, sub_4c0ce0
*/
void sub_4ae1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae1b0ULL || rel >= 0x4ae330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae330 size=672 callers=1 calls=0
*/
void sub_4ae330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae330ULL || rel >= 0x4ae5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae5d0 size=304 callers=1 calls=0
*/
void sub_4ae5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae5d0ULL || rel >= 0x4ae700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae700 size=608 callers=1 calls=1
   calls: sub_2b0
*/
void sub_4ae700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae700ULL || rel >= 0x4ae960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ae960 size=416 callers=1 calls=12
   calls: sub_2c0, sub_48f3b0, sub_490150, sub_4910a0, sub_4ae700, sub_4b48f0, sub_4b4d10, sub_4b4d20, sub_4b4d30, sub_4b4d50, sub_4b4da0, sub_4c0d00
*/
void sub_4ae960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ae960ULL || rel >= 0x4aeb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aeb00 size=4784 callers=1 calls=40
   calls: sub_2a0c60, sub_2b0, sub_2c0, sub_48f0b0, sub_4914e0, sub_492690, sub_492950, sub_492a80, sub_492f50, sub_493000, sub_493ae0, sub_493b40
   ... +28 more
*/
void sub_4aeb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aeb00ULL || rel >= 0x4afdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afdb0 size=64 callers=12 calls=2
   calls: sub_4afdb0, sub_4c0cf0
*/
void sub_4afdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afdb0ULL || rel >= 0x4afdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afdf0 size=272 callers=1 calls=0
*/
void sub_4afdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afdf0ULL || rel >= 0x4aff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aff00 size=480 callers=1 calls=10
   calls: sub_48f3b0, sub_48fc80, sub_490c40, sub_4b48f0, sub_4b4d10, sub_4b4d20, sub_4b4d30, sub_4b4d50, sub_4b4da0, sub_4c0d00
*/
void sub_4aff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aff00ULL || rel >= 0x4b00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b00e0 size=128 callers=1 calls=0
*/
void sub_4b00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b00e0ULL || rel >= 0x4b0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0160 size=688 callers=1 calls=33
   calls: sub_492690, sub_493ae0, sub_493b40, sub_493f20, sub_493f70, sub_4942a0, sub_4942e0, sub_495660, sub_4956c0, sub_496600, sub_496680, sub_496e50
   ... +21 more
*/
void sub_4b0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0160ULL || rel >= 0x4b0410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0410 size=6512 callers=1 calls=50
   calls: sub_2a1230, sub_2a12a0, sub_2b0, sub_2c0, sub_48ede0, sub_491470, sub_4914e0, sub_492690, sub_492950, sub_492a80, sub_492f50, sub_493000
   ... +38 more
*/
void sub_4b0410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0410ULL || rel >= 0x4b1d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1d80 size=240 callers=1 calls=0
*/
void sub_4b1d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1d80ULL || rel >= 0x4b1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1e70 size=704 callers=1 calls=10
   calls: sub_48f3b0, sub_48fb30, sub_490ae0, sub_4b48f0, sub_4b4d10, sub_4b4d20, sub_4b4d30, sub_4b4d50, sub_4b4da0, sub_4c0d00
*/
void sub_4b1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1e70ULL || rel >= 0x4b2130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2130 size=160 callers=1 calls=0
*/
void sub_4b2130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2130ULL || rel >= 0x4b21d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b21d0 size=1056 callers=1 calls=0
*/
void sub_4b21d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b21d0ULL || rel >= 0x4b25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b25f0 size=784 callers=1 calls=26
   calls: sub_2b0, sub_2c0, sub_48ed50, sub_492690, sub_493ae0, sub_493b40, sub_495040, sub_495080, sub_495660, sub_4956c0, sub_496600, sub_496680
   ... +14 more
*/
void sub_4b25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b25f0ULL || rel >= 0x4b2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2900 size=240 callers=1 calls=0
*/
void sub_4b2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2900ULL || rel >= 0x4b29f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b29f0 size=240 callers=1 calls=0
*/
void sub_4b29f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b29f0ULL || rel >= 0x4b2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2ae0 size=128 callers=1 calls=0
*/
void sub_4b2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2ae0ULL || rel >= 0x4b2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2b60 size=384 callers=1 calls=10
   calls: sub_48f3b0, sub_48feb0, sub_490da0, sub_4b48f0, sub_4b4d10, sub_4b4d20, sub_4b4d30, sub_4b4d50, sub_4b4da0, sub_4c0d00
*/
void sub_4b2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2b60ULL || rel >= 0x4b2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2ce0 size=16 callers=1 calls=0
*/
void sub_4b2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2ce0ULL || rel >= 0x4b2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2cf0 size=432 callers=1 calls=10
   calls: sub_48f3b0, sub_490000, sub_490f00, sub_4b48f0, sub_4b4d10, sub_4b4d20, sub_4b4d30, sub_4b4d50, sub_4b4da0, sub_4c0d00
*/
void sub_4b2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2cf0ULL || rel >= 0x4b2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2ea0 size=208 callers=1 calls=4
   calls: sub_48ef30, sub_4a3570, sub_4b2f70, sub_4b4730
*/
void sub_4b2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2ea0ULL || rel >= 0x4b2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b2f70 size=704 callers=2 calls=24
   calls: sub_492690, sub_493ae0, sub_493b40, sub_495040, sub_495080, sub_495660, sub_4956c0, sub_496600, sub_496680, sub_496e50, sub_497ec0, sub_498670
   ... +12 more
*/
void sub_4b2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b2f70ULL || rel >= 0x4b3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3230 size=208 callers=1 calls=4
   calls: sub_48eff0, sub_4a3570, sub_4b2f70, sub_4b4730
*/
void sub_4b3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3230ULL || rel >= 0x4b3300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3300 size=240 callers=1 calls=0
*/
void sub_4b3300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3300ULL || rel >= 0x4b33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b33f0 size=480 callers=3 calls=10
   calls: sub_48f3b0, sub_48f760, sub_490980, sub_4b48f0, sub_4b4d10, sub_4b4d20, sub_4b4d30, sub_4b4d50, sub_4b4da0, sub_4c0d00
*/
void sub_4b33f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b33f0ULL || rel >= 0x4b35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b35d0 size=1520 callers=1 calls=22
   calls: sub_2c0, sub_4914e0, sub_492690, sub_492950, sub_492a80, sub_492f50, sub_493000, sub_494490, sub_496fb0, sub_49f5b0, sub_49f680, sub_49f6d0
   ... +10 more
*/
void sub_4b35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b35d0ULL || rel >= 0x4b3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3bc0 size=976 callers=1 calls=33
   calls: sub_48e8b0, sub_492690, sub_493040, sub_4931e0, sub_493260, sub_493ae0, sub_493b40, sub_493f20, sub_493f70, sub_495660, sub_4956c0, sub_496600
   ... +21 more
*/
void sub_4b3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3bc0ULL || rel >= 0x4b3f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3f90 size=1104 callers=1 calls=6
   calls: sub_2c0, sub_492390, sub_4923e0, sub_4b33f0, sub_4b45e0, sub_4bfe60
*/
void sub_4b3f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3f90ULL || rel >= 0x4b43e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b43e0 size=320 callers=2 calls=2
   calls: sub_4afdb0, sub_4b4520
*/
void sub_4b43e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b43e0ULL || rel >= 0x4b4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4520 size=192 callers=3 calls=2
   calls: sub_4b4520, sub_4c0ce0
*/
void sub_4b4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4520ULL || rel >= 0x4b45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b45e0 size=336 callers=2 calls=5
   calls: sub_4bfdf0, sub_4bfe00, sub_4bfe10, sub_4bfe20, sub_4bfe60
*/
void sub_4b45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b45e0ULL || rel >= 0x4b4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4730 size=448 callers=6 calls=0
*/
void sub_4b4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4730ULL || rel >= 0x4b48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b48f0 size=928 callers=6 calls=1
   calls: sub_49f690
*/
void sub_4b48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b48f0ULL || rel >= 0x4b4c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4c90 size=128 callers=1 calls=7
   calls: sub_491240, sub_4afdf0, sub_4b1d80, sub_4b2900, sub_4b29f0, sub_4b2ae0, sub_4b3300
*/
void sub_4b4c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4c90ULL || rel >= 0x4b4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4d10 size=16 callers=6 calls=0
*/
void sub_4b4d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4d10ULL || rel >= 0x4b4d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4d20 size=16 callers=6 calls=0
*/
void sub_4b4d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4d20ULL || rel >= 0x4b4d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4d30 size=32 callers=6 calls=0
*/
void sub_4b4d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4d30ULL || rel >= 0x4b4d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4d50 size=80 callers=6 calls=0
*/
void sub_4b4d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4d50ULL || rel >= 0x4b4da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4da0 size=16 callers=6 calls=0
*/
void sub_4b4da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4da0ULL || rel >= 0x4b4db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4db0 size=416 callers=3 calls=0
*/
void sub_4b4db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4db0ULL || rel >= 0x4b4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4f50 size=304 callers=1 calls=4
   calls: sub_4b5080, sub_4b9290, sub_4bfdf0, sub_4bfe00
*/
void sub_4b4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4f50ULL || rel >= 0x4b5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5080 size=16912 callers=1 calls=5
   calls: sub_4b4db0, sub_4b98f0, sub_4b9c00, sub_4ba3f0, sub_4baae0
*/
void sub_4b5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5080ULL || rel >= 0x4b9290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9290 size=1632 callers=1 calls=4
   calls: LightSource_specular, sub_2b0, sub_2c0, sub_4914e0
*/
void sub_4b9290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9290ULL || rel >= 0x4b98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b98f0 size=784 callers=1 calls=0
*/
void sub_4b98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b98f0ULL || rel >= 0x4b9c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9c00 size=1808 callers=1 calls=0
*/
void sub_4b9c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9c00ULL || rel >= 0x4ba310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba310 size=224 callers=0 calls=0
*/
void sub_4ba310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba310ULL || rel >= 0x4ba3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba3f0 size=1776 callers=1 calls=1
   calls: sub_4b4db0
*/
void sub_4ba3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba3f0ULL || rel >= 0x4baae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004baae0 size=1632 callers=1 calls=1
   calls: sub_4bb140
*/
void sub_4baae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4baae0ULL || rel >= 0x4bb140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb140 size=256 callers=2 calls=0
*/
void sub_4bb140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb140ULL || rel >= 0x4bb240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb240 size=1040 callers=1 calls=3
   calls: sub_2b0, sub_2c0, sub_4914e0
   ref: LightSource[.specular
*/
void LightSource_specular(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb240ULL || rel >= 0x4bb650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb650 size=240 callers=1 calls=0
*/
void sub_4bb650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb650ULL || rel >= 0x4bb740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb740 size=496 callers=1 calls=2
   calls: sub_4bf3a0, sub_4bfdf0
*/
void sub_4bb740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb740ULL || rel >= 0x4bb930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb930 size=976 callers=1 calls=3
   calls: sub_4ae1b0, sub_4bf4c0, sub_4bfdf0
*/
void sub_4bb930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb930ULL || rel >= 0x4bbd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bbd00 size=704 callers=1 calls=0
*/
void sub_4bbd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bbd00ULL || rel >= 0x4bbfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bbfc0 size=672 callers=1 calls=2
   calls: sub_4bf660, sub_4bfdf0
*/
void sub_4bbfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bbfc0ULL || rel >= 0x4bc260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc260 size=368 callers=1 calls=0
*/
void sub_4bc260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc260ULL || rel >= 0x4bc3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc3d0 size=656 callers=1 calls=0
*/
void sub_4bc3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc3d0ULL || rel >= 0x4bc660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc660 size=304 callers=1 calls=0
*/
void sub_4bc660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc660ULL || rel >= 0x4bc790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc790 size=544 callers=1 calls=2
   calls: sub_4bc3d0, sub_4bc660
*/
void sub_4bc790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc790ULL || rel >= 0x4bc9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc9b0 size=336 callers=1 calls=0
*/
void sub_4bc9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc9b0ULL || rel >= 0x4bcb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcb00 size=352 callers=1 calls=0
*/
void sub_4bcb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcb00ULL || rel >= 0x4bcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcc60 size=688 callers=1 calls=1
   calls: sub_4bcb00
*/
void sub_4bcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcc60ULL || rel >= 0x4bcf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcf10 size=1344 callers=1 calls=5
   calls: sub_4bb740, sub_4bb930, sub_4bbfc0, sub_4bc9b0, sub_4bfe00
*/
void sub_4bcf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcf10ULL || rel >= 0x4bd450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd450 size=1024 callers=1 calls=5
   calls: sub_4bb650, sub_4bbd00, sub_4bc260, sub_4bc790, sub_4bcc60
   ref: 333333
*/
void f_333333_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd450ULL || rel >= 0x4bd850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd850 size=640 callers=1 calls=3
   calls: f_333333_2, sub_4bcf10, sub_4bdad0
*/
void sub_4bd850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd850ULL || rel >= 0x4bdad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdad0 size=208 callers=2 calls=3
   calls: sub_4afdb0, sub_4bf2c0, sub_4bfe00
*/
void sub_4bdad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdad0ULL || rel >= 0x4bdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdba0 size=272 callers=0 calls=2
   calls: sub_4bf800, sub_4bfdf0
*/
void sub_4bdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdba0ULL || rel >= 0x4bdcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdcb0 size=16 callers=0 calls=0
*/
void sub_4bdcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdcb0ULL || rel >= 0x4bdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdcc0 size=64 callers=0 calls=0
*/
void sub_4bdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdcc0ULL || rel >= 0x4bdd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdd00 size=64 callers=0 calls=0
*/
void sub_4bdd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdd00ULL || rel >= 0x4bdd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdd40 size=64 callers=0 calls=0
*/
void sub_4bdd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdd40ULL || rel >= 0x4bdd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdd80 size=112 callers=0 calls=0
*/
void sub_4bdd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdd80ULL || rel >= 0x4bddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bddf0 size=16 callers=0 calls=0
*/
void sub_4bddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bddf0ULL || rel >= 0x4bde00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bde00 size=112 callers=0 calls=0
*/
void sub_4bde00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bde00ULL || rel >= 0x4bde70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bde70 size=80 callers=0 calls=0
*/
void sub_4bde70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bde70ULL || rel >= 0x4bdec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdec0 size=80 callers=0 calls=0
*/
void sub_4bdec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdec0ULL || rel >= 0x4bdf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdf10 size=80 callers=0 calls=0
*/
void sub_4bdf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdf10ULL || rel >= 0x4bdf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdf60 size=80 callers=0 calls=0
*/
void sub_4bdf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdf60ULL || rel >= 0x4bdfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfb0 size=16 callers=0 calls=0
*/
void sub_4bdfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfb0ULL || rel >= 0x4bdfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bdfc0 size=64 callers=0 calls=0
*/
void sub_4bdfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdfc0ULL || rel >= 0x4be000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be000 size=16 callers=0 calls=0
*/
void sub_4be000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be000ULL || rel >= 0x4be010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be010 size=3952 callers=0 calls=3
   calls: sub_4bf9a0, sub_4bfb10, sub_4bfdf0
*/
void sub_4be010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be010ULL || rel >= 0x4bef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bef80 size=368 callers=0 calls=2
   calls: sub_4bfc80, sub_4bfdf0
*/
void sub_4bef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bef80ULL || rel >= 0x4bf0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf0f0 size=432 callers=4 calls=2
   calls: sub_4bd850, sub_4bdad0
*/
void sub_4bf0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf0f0ULL || rel >= 0x4bf2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf2a0 size=32 callers=1 calls=0
*/
void sub_4bf2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf2a0ULL || rel >= 0x4bf2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf2c0 size=224 callers=1 calls=1
   calls: sub_4bfe00
*/
void sub_4bf2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf2c0ULL || rel >= 0x4bf3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf3a0 size=288 callers=1 calls=2
   calls: sub_4bfdf0, sub_4bfe00
*/
void sub_4bf3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf3a0ULL || rel >= 0x4bf4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf4c0 size=416 callers=1 calls=2
   calls: sub_4bfdf0, sub_4bfe00
*/
void sub_4bf4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf4c0ULL || rel >= 0x4bf660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf660 size=416 callers=3 calls=2
   calls: sub_4bfdf0, sub_4bfe00
*/
void sub_4bf660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf660ULL || rel >= 0x4bf800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf800 size=416 callers=1 calls=2
   calls: sub_4bfdf0, sub_4bfe00
*/
void sub_4bf800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf800ULL || rel >= 0x4bf9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf9a0 size=368 callers=4 calls=2
   calls: sub_4bfdf0, sub_4bfe00
*/
void sub_4bf9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf9a0ULL || rel >= 0x4bfb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfb10 size=368 callers=10 calls=2
   calls: sub_4bfdf0, sub_4bfe00
*/
void sub_4bfb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfb10ULL || rel >= 0x4bfc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfc80 size=368 callers=2 calls=2
   calls: sub_4bfdf0, sub_4bfe00
*/
void sub_4bfc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfc80ULL || rel >= 0x4bfdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfdf0 size=16 callers=25 calls=0
*/
void sub_4bfdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfdf0ULL || rel >= 0x4bfe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfe00 size=16 callers=28 calls=0
*/
void sub_4bfe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfe00ULL || rel >= 0x4bfe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfe10 size=16 callers=1 calls=0
*/
void sub_4bfe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfe10ULL || rel >= 0x4bfe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfe20 size=64 callers=2 calls=1
   calls: sub_2c0
*/
void sub_4bfe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfe20ULL || rel >= 0x4bfe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfe60 size=112 callers=3 calls=1
   calls: sub_2c0
*/
void sub_4bfe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfe60ULL || rel >= 0x4bfed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfed0 size=80 callers=1 calls=0
*/
void sub_4bfed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfed0ULL || rel >= 0x4bff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bff20 size=176 callers=1 calls=1
   calls: sub_4c4080
*/
void sub_4bff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bff20ULL || rel >= 0x4bffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bffd0 size=848 callers=1 calls=5
   calls: sub_2b0, sub_4ad750, sub_4afdb0, sub_4b43e0, sub_4c3ea0
*/
void sub_4bffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bffd0ULL || rel >= 0x4c0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

