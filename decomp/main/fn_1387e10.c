/* main functions 01387e10..013a7aa0 (165 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01387e10 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1387e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1387e10ULL || rel >= 0x1388060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01388060 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1388060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1388060ULL || rel >= 0x1388270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01388270 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1388270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1388270ULL || rel >= 0x1388490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01388490 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1388490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1388490ULL || rel >= 0x13886e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013886e0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_13886e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13886e0ULL || rel >= 0x13888f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013888f0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13888f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13888f0ULL || rel >= 0x1388b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01388b10 size=544 callers=4 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1388b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1388b10ULL || rel >= 0x1388d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01388d30 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1388d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1388d30ULL || rel >= 0x1388f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01388f80 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1388f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1388f80ULL || rel >= 0x1389190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389190 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1389190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389190ULL || rel >= 0x13893b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013893b0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_13893b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13893b0ULL || rel >= 0x1389600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389600 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1389600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389600ULL || rel >= 0x1389810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389810 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1389810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389810ULL || rel >= 0x1389a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389a30 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1389a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389a30ULL || rel >= 0x1389c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389c80 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1389c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389c80ULL || rel >= 0x1389e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389e90 size=16 callers=2 calls=0
*/
void sub_1389e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389e90ULL || rel >= 0x1389ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389ea0 size=16 callers=2 calls=0
*/
void sub_1389ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389ea0ULL || rel >= 0x1389eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389eb0 size=16 callers=2 calls=0
*/
void sub_1389eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389eb0ULL || rel >= 0x1389ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389ec0 size=16 callers=2 calls=0
*/
void sub_1389ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389ec0ULL || rel >= 0x1389ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389ed0 size=16 callers=2 calls=0
*/
void sub_1389ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389ed0ULL || rel >= 0x1389ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389ee0 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1389ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389ee0ULL || rel >= 0x1389f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389f30 size=80 callers=0 calls=0
*/
void sub_1389f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389f30ULL || rel >= 0x1389f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389f80 size=80 callers=0 calls=0
*/
void sub_1389f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389f80ULL || rel >= 0x1389fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01389fd0 size=80 callers=0 calls=0
*/
void sub_1389fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1389fd0ULL || rel >= 0x138a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138a020 size=80 callers=0 calls=0
*/
void sub_138a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138a020ULL || rel >= 0x138a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138a070 size=80 callers=0 calls=0
*/
void sub_138a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138a070ULL || rel >= 0x138a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138a0c0 size=80 callers=0 calls=0
*/
void sub_138a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138a0c0ULL || rel >= 0x138a110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138a110 size=144 callers=0 calls=2
   calls: sub_137e480, sub_138c060
*/
void sub_138a110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138a110ULL || rel >= 0x138a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138a1a0 size=96 callers=0 calls=2
   calls: sub_137e480, sub_138a200
*/
void sub_138a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138a1a0ULL || rel >= 0x138a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138a200 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_138c280, sub_138c4d0
*/
void sub_138a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138a200ULL || rel >= 0x138a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138a340 size=16 callers=1 calls=0
*/
void sub_138a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138a340ULL || rel >= 0x138a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138a350 size=4992 callers=2 calls=0
*/
void sub_138a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138a350ULL || rel >= 0x138b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138b6d0 size=48 callers=1 calls=0
*/
void sub_138b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138b6d0ULL || rel >= 0x138b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138b700 size=192 callers=1 calls=0
*/
void sub_138b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138b700ULL || rel >= 0x138b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138b7c0 size=704 callers=1 calls=2
   calls: sub_15b7d40, sub_15b7d50
*/
void sub_138b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138b7c0ULL || rel >= 0x138ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138ba80 size=80 callers=1 calls=0
*/
void sub_138ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ba80ULL || rel >= 0x138bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138bad0 size=48 callers=1 calls=0
*/
void sub_138bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138bad0ULL || rel >= 0x138bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138bb00 size=848 callers=1 calls=0
*/
void sub_138bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138bb00ULL || rel >= 0x138be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138be50 size=16 callers=4 calls=0
*/
void sub_138be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138be50ULL || rel >= 0x138be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138be60 size=160 callers=4 calls=3
   calls: sub_15b7b30, sub_15b7d30, sub_15b7f90
*/
void sub_138be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138be60ULL || rel >= 0x138bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138bf00 size=96 callers=3 calls=2
   calls: sub_15b7b30, sub_15b7d30
*/
void sub_138bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138bf00ULL || rel >= 0x138bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138bf60 size=144 callers=2 calls=2
   calls: sub_15b7b30, sub_15b7d30
*/
void sub_138bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138bf60ULL || rel >= 0x138bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138bff0 size=112 callers=0 calls=2
   calls: sub_137e480, sub_138a200
*/
void sub_138bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138bff0ULL || rel >= 0x138c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138c060 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_138c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138c060ULL || rel >= 0x138c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138c280 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_138c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138c280ULL || rel >= 0x138c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138c4d0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_138c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138c4d0ULL || rel >= 0x138c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138c6e0 size=128 callers=0 calls=0
*/
void sub_138c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138c6e0ULL || rel >= 0x138c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138c760 size=96 callers=6 calls=2
   calls: sub_137e480, sub_138c7c0
*/
void sub_138c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138c760ULL || rel >= 0x138c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138c7c0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_138cc60, sub_138ceb0
*/
void sub_138c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138c7c0ULL || rel >= 0x138c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138c900 size=128 callers=19 calls=2
   calls: sub_137e480, sub_138d0c0
*/
void sub_138c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138c900ULL || rel >= 0x138c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138c980 size=96 callers=3 calls=2
   calls: sub_137e480, sub_138c9e0
*/
void sub_138c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138c980ULL || rel >= 0x138c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138c9e0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_138d2e0, sub_138d530
*/
void sub_138c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138c9e0ULL || rel >= 0x138cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138cb20 size=128 callers=9 calls=2
   calls: sub_137e480, sub_138d740
*/
void sub_138cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138cb20ULL || rel >= 0x138cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138cba0 size=192 callers=0 calls=3
   calls: sub_137e480, sub_138c7c0, sub_138c9e0
*/
void sub_138cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138cba0ULL || rel >= 0x138cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138cc60 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_138cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138cc60ULL || rel >= 0x138ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138ceb0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_138ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ceb0ULL || rel >= 0x138d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138d0c0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_138d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138d0c0ULL || rel >= 0x138d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138d2e0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_138d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138d2e0ULL || rel >= 0x138d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138d530 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_138d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138d530ULL || rel >= 0x138d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138d740 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_138d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138d740ULL || rel >= 0x138d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138d960 size=160 callers=4 calls=2
   calls: sub_137e480, sub_138dd20
*/
void sub_138d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138d960ULL || rel >= 0x138da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138da00 size=128 callers=3 calls=2
   calls: sub_137e480, sub_138da80
*/
void sub_138da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138da00ULL || rel >= 0x138da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138da80 size=320 callers=5 calls=3
   calls: sub_13471e0, sub_138df40, sub_138e190
*/
void sub_138da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138da80ULL || rel >= 0x138dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138dbc0 size=352 callers=0 calls=3
   calls: sub_101b780, sub_137e480, sub_138da80
*/
void sub_138dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138dbc0ULL || rel >= 0x138dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138dd20 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_138dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138dd20ULL || rel >= 0x138df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138df40 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_138df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138df40ULL || rel >= 0x138e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138e190 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_138e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e190ULL || rel >= 0x138e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138e3a0 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_138e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e3a0ULL || rel >= 0x138e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138e3f0 size=384 callers=0 calls=4
   calls: sub_137e480, sub_138e570, sub_783bd0, sub_784f40
*/
void sub_138e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e3f0ULL || rel >= 0x138e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138e570 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_138ea80, sub_138ecd0
*/
void sub_138e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e570ULL || rel >= 0x138e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138e6b0 size=336 callers=0 calls=4
   calls: sub_1301c10, sub_137e480, sub_138eee0, sub_785320
*/
void sub_138e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e6b0ULL || rel >= 0x138e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138e800 size=240 callers=0 calls=3
   calls: sub_137e480, sub_138e570, sub_784f40
*/
void sub_138e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e800ULL || rel >= 0x138e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138e8f0 size=80 callers=0 calls=0
*/
void sub_138e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e8f0ULL || rel >= 0x138e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138e940 size=80 callers=0 calls=0
*/
void sub_138e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e940ULL || rel >= 0x138e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138e990 size=80 callers=0 calls=0
*/
void sub_138e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e990ULL || rel >= 0x138e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138e9e0 size=80 callers=0 calls=0
*/
void sub_138e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e9e0ULL || rel >= 0x138ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138ea30 size=80 callers=0 calls=0
*/
void sub_138ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ea30ULL || rel >= 0x138ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138ea80 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_138ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ea80ULL || rel >= 0x138ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138ecd0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_138ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ecd0ULL || rel >= 0x138eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138eee0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_138eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138eee0ULL || rel >= 0x138f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f100 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_138f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f100ULL || rel >= 0x138f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f150 size=80 callers=0 calls=0
*/
void sub_138f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f150ULL || rel >= 0x138f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f1a0 size=80 callers=0 calls=0
*/
void sub_138f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f1a0ULL || rel >= 0x138f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f1f0 size=80 callers=0 calls=0
*/
void sub_138f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f1f0ULL || rel >= 0x138f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f240 size=80 callers=0 calls=0
*/
void sub_138f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f240ULL || rel >= 0x138f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f290 size=80 callers=0 calls=0
*/
void sub_138f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f290ULL || rel >= 0x138f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f2e0 size=80 callers=0 calls=0
*/
void sub_138f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f2e0ULL || rel >= 0x138f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f330 size=144 callers=0 calls=2
   calls: sub_137e480, sub_138f3c0
*/
void sub_138f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f330ULL || rel >= 0x138f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f3c0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_138f5f0, sub_138f840
*/
void sub_138f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f3c0ULL || rel >= 0x138f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f500 size=144 callers=0 calls=2
   calls: sub_137e480, sub_138fa50
*/
void sub_138f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f500ULL || rel >= 0x138f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f590 size=96 callers=0 calls=2
   calls: sub_137e480, sub_138f3c0
*/
void sub_138f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f590ULL || rel >= 0x138f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f5f0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_138f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f5f0ULL || rel >= 0x138f840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138f840 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_138f840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138f840ULL || rel >= 0x138fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138fa50 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_138fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138fa50ULL || rel >= 0x138fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138fc70 size=112 callers=0 calls=2
   calls: sub_137e480, sub_138fce0
*/
void sub_138fc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138fc70ULL || rel >= 0x138fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138fce0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1390100, sub_1390350
*/
void sub_138fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138fce0ULL || rel >= 0x138fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138fe20 size=144 callers=0 calls=2
   calls: sub_137e480, sub_1390560
*/
void sub_138fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138fe20ULL || rel >= 0x138feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138feb0 size=112 callers=0 calls=2
   calls: sub_137e480, sub_138fce0
*/
void sub_138feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138feb0ULL || rel >= 0x138ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138ff20 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_138ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ff20ULL || rel >= 0x138ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138ff70 size=80 callers=0 calls=0
*/
void sub_138ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ff70ULL || rel >= 0x138ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0138ffc0 size=80 callers=0 calls=0
*/
void sub_138ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ffc0ULL || rel >= 0x1390010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390010 size=80 callers=0 calls=0
*/
void sub_1390010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390010ULL || rel >= 0x1390060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390060 size=80 callers=0 calls=0
*/
void sub_1390060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390060ULL || rel >= 0x13900b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013900b0 size=80 callers=0 calls=0
*/
void sub_13900b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13900b0ULL || rel >= 0x1390100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390100 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1390100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390100ULL || rel >= 0x1390350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390350 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1390350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390350ULL || rel >= 0x1390560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390560 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1390560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390560ULL || rel >= 0x1390780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390780 size=240 callers=32 calls=3
   calls: sub_134d020, sub_137e480, sub_1390cd0
*/
void sub_1390780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390780ULL || rel >= 0x1390870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390870 size=160 callers=1 calls=3
   calls: sub_134c2b0, sub_137e480, sub_1390910
*/
void sub_1390870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390870ULL || rel >= 0x1390910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390910 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1390ef0, sub_1391140
*/
void sub_1390910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390910ULL || rel >= 0x1390a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390a50 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1391350, sub_13915a0
*/
void sub_1390a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390a50ULL || rel >= 0x1390b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390b90 size=320 callers=0 calls=4
   calls: sub_134c2b0, sub_137e480, sub_1390910, sub_1390a50
*/
void sub_1390b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390b90ULL || rel >= 0x1390cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390cd0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1390cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390cd0ULL || rel >= 0x1390ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01390ef0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1390ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390ef0ULL || rel >= 0x1391140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391140 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1391140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391140ULL || rel >= 0x1391350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391350 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1391350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391350ULL || rel >= 0x13915a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013915a0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_13915a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13915a0ULL || rel >= 0x13917b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013917b0 size=176 callers=2 calls=2
   calls: sub_5e2350, unnamed_74
*/
void sub_13917b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13917b0ULL || rel >= 0x1391860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391860 size=192 callers=0 calls=3
   calls: sub_137e480, sub_1391920, unnamed_74
*/
void sub_1391860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391860ULL || rel >= 0x1391920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391920 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1391d50, sub_1391fa0
*/
void sub_1391920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391920ULL || rel >= 0x1391a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391a60 size=96 callers=0 calls=2
   calls: sub_137e480, sub_1391920
*/
void sub_1391a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391a60ULL || rel >= 0x1391ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391ac0 size=144 callers=0 calls=2
   calls: sub_137e480, sub_13921b0
*/
void sub_1391ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391ac0ULL || rel >= 0x1391b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391b50 size=112 callers=2 calls=1
   calls: unnamed_74
*/
void sub_1391b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391b50ULL || rel >= 0x1391bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391bc0 size=80 callers=0 calls=0
*/
void sub_1391bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391bc0ULL || rel >= 0x1391c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391c10 size=80 callers=0 calls=0
*/
void sub_1391c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391c10ULL || rel >= 0x1391c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391c60 size=80 callers=0 calls=0
*/
void sub_1391c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391c60ULL || rel >= 0x1391cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391cb0 size=80 callers=0 calls=0
*/
void sub_1391cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391cb0ULL || rel >= 0x1391d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391d00 size=80 callers=0 calls=0
*/
void sub_1391d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391d00ULL || rel >= 0x1391d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391d50 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1391d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391d50ULL || rel >= 0x1391fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01391fa0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1391fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1391fa0ULL || rel >= 0x13921b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013921b0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13921b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13921b0ULL || rel >= 0x13923d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013923d0 size=96 callers=2 calls=2
   calls: sub_137e480, sub_1392430
*/
void sub_13923d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13923d0ULL || rel >= 0x1392430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392430 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_13926b0, sub_1392900
*/
void sub_1392430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392430ULL || rel >= 0x1392570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392570 size=128 callers=1 calls=2
   calls: sub_137e480, sub_1392b10
*/
void sub_1392570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392570ULL || rel >= 0x13925f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013925f0 size=192 callers=0 calls=3
   calls: sub_137e480, sub_1392430, sub_7c2280
*/
void sub_13925f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13925f0ULL || rel >= 0x13926b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013926b0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_13926b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13926b0ULL || rel >= 0x1392900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392900 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1392900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392900ULL || rel >= 0x1392b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392b10 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1392b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392b10ULL || rel >= 0x1392d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392d30 size=64 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1392d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392d30ULL || rel >= 0x1392d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392d70 size=80 callers=0 calls=0
*/
void sub_1392d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392d70ULL || rel >= 0x1392dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392dc0 size=80 callers=0 calls=0
*/
void sub_1392dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392dc0ULL || rel >= 0x1392e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392e10 size=80 callers=0 calls=0
*/
void sub_1392e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392e10ULL || rel >= 0x1392e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392e60 size=80 callers=0 calls=0
*/
void sub_1392e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392e60ULL || rel >= 0x1392eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392eb0 size=80 callers=0 calls=0
*/
void sub_1392eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392eb0ULL || rel >= 0x1392f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392f00 size=80 callers=0 calls=0
*/
void sub_1392f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392f00ULL || rel >= 0x1392f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392f50 size=64 callers=0 calls=0
*/
void sub_1392f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392f50ULL || rel >= 0x1392f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01392f90 size=144 callers=0 calls=2
   calls: sub_137e480, sub_1393220
*/
void sub_1392f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1392f90ULL || rel >= 0x1393020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393020 size=96 callers=0 calls=2
   calls: sub_137e480, sub_1393080
*/
void sub_1393020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393020ULL || rel >= 0x1393080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393080 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1393440, sub_1393690
*/
void sub_1393080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393080ULL || rel >= 0x13931c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013931c0 size=32 callers=1 calls=0
*/
void sub_13931c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13931c0ULL || rel >= 0x13931e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013931e0 size=32 callers=1 calls=0
*/
void sub_13931e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13931e0ULL || rel >= 0x1393200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393200 size=32 callers=1 calls=0
*/
void sub_1393200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393200ULL || rel >= 0x1393220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393220 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1393220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393220ULL || rel >= 0x1393440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393440 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1393440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393440ULL || rel >= 0x1393690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393690 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1393690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393690ULL || rel >= 0x13938a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013938a0 size=96 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_13938a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13938a0ULL || rel >= 0x1393900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393900 size=80 callers=0 calls=0
*/
void sub_1393900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393900ULL || rel >= 0x1393950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393950 size=80 callers=0 calls=0
*/
void sub_1393950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393950ULL || rel >= 0x13939a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013939a0 size=80 callers=0 calls=0
*/
void sub_13939a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13939a0ULL || rel >= 0x13939f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013939f0 size=80 callers=0 calls=0
*/
void sub_13939f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13939f0ULL || rel >= 0x1393a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393a40 size=80 callers=0 calls=0
*/
void sub_1393a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393a40ULL || rel >= 0x1393a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393a90 size=80 callers=0 calls=0
*/
void sub_1393a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393a90ULL || rel >= 0x1393ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393ae0 size=80 callers=0 calls=0
*/
void sub_1393ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393ae0ULL || rel >= 0x1393b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393b30 size=608 callers=0 calls=6
   calls: sub_137e480, sub_13945a0, sub_13947c0, sub_13949e0, sub_1394c00, sub_1394e20
*/
void sub_1393b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393b30ULL || rel >= 0x1393d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393d90 size=352 callers=0 calls=6
   calls: sub_137e480, sub_1393ef0, sub_1394030, sub_1394170, sub_13942b0, sub_13943f0
*/
void sub_1393d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393d90ULL || rel >= 0x1393ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01393ef0 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1395040, sub_1395290
*/
void sub_1393ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1393ef0ULL || rel >= 0x1394030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01394030 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_13954a0, sub_13956f0
*/
void sub_1394030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1394030ULL || rel >= 0x1394170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01394170 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1395900, sub_1395b50
*/
void sub_1394170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1394170ULL || rel >= 0x13942b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013942b0 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1395d60, sub_1395fb0
*/
void sub_13942b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13942b0ULL || rel >= 0x13943f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013943f0 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_13961c0, sub_1396410
*/
void sub_13943f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13943f0ULL || rel >= 0x1394530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01394530 size=48 callers=6 calls=0
*/
void sub_1394530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1394530ULL || rel >= 0x1394560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01394560 size=64 callers=12 calls=0
*/
void sub_1394560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1394560ULL || rel >= 0x13945a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013945a0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13945a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13945a0ULL || rel >= 0x13947c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013947c0 size=544 callers=2 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13947c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13947c0ULL || rel >= 0x13949e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013949e0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13949e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13949e0ULL || rel >= 0x1394c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01394c00 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1394c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1394c00ULL || rel >= 0x1394e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01394e20 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1394e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1394e20ULL || rel >= 0x1395040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01395040 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1395040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1395040ULL || rel >= 0x1395290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01395290 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1395290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1395290ULL || rel >= 0x13954a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013954a0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_13954a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13954a0ULL || rel >= 0x13956f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013956f0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_13956f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13956f0ULL || rel >= 0x1395900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01395900 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1395900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1395900ULL || rel >= 0x1395b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01395b50 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1395b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1395b50ULL || rel >= 0x1395d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01395d60 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1395d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1395d60ULL || rel >= 0x1395fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01395fb0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1395fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1395fb0ULL || rel >= 0x13961c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013961c0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_13961c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13961c0ULL || rel >= 0x1396410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396410 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1396410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396410ULL || rel >= 0x1396620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396620 size=208 callers=0 calls=2
   calls: sub_137e480, sub_1396860
*/
void sub_1396620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396620ULL || rel >= 0x13966f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013966f0 size=144 callers=0 calls=2
   calls: sub_137e480, sub_1396860
*/
void sub_13966f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13966f0ULL || rel >= 0x1396780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396780 size=224 callers=0 calls=2
   calls: sub_137e480, sub_1396c50
*/
void sub_1396780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396780ULL || rel >= 0x1396860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396860 size=320 callers=4 calls=3
   calls: sub_1397160, sub_13972f0, sub_1397540
*/
void sub_1396860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396860ULL || rel >= 0x13969a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013969a0 size=16 callers=10 calls=0
*/
void sub_13969a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13969a0ULL || rel >= 0x13969b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013969b0 size=16 callers=1 calls=0
*/
void sub_13969b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13969b0ULL || rel >= 0x13969c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013969c0 size=16 callers=1 calls=0
*/
void sub_13969c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13969c0ULL || rel >= 0x13969d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013969d0 size=32 callers=1 calls=0
*/
void sub_13969d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13969d0ULL || rel >= 0x13969f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013969f0 size=128 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_13969f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13969f0ULL || rel >= 0x1396a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396a70 size=80 callers=0 calls=0
*/
void sub_1396a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396a70ULL || rel >= 0x1396ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396ac0 size=80 callers=0 calls=0
*/
void sub_1396ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396ac0ULL || rel >= 0x1396b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396b10 size=80 callers=0 calls=0
*/
void sub_1396b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396b10ULL || rel >= 0x1396b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396b60 size=80 callers=0 calls=0
*/
void sub_1396b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396b60ULL || rel >= 0x1396bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396bb0 size=80 callers=0 calls=0
*/
void sub_1396bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396bb0ULL || rel >= 0x1396c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396c00 size=80 callers=0 calls=0
*/
void sub_1396c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396c00ULL || rel >= 0x1396c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396c50 size=544 callers=2 calls=2
   calls: sub_1346730, sub_1396e70
*/
void sub_1396c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396c50ULL || rel >= 0x1396e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396e70 size=384 callers=1 calls=1
   calls: sub_1396ff0
*/
void sub_1396e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396e70ULL || rel >= 0x1396ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01396ff0 size=368 callers=1 calls=0
*/
void sub_1396ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1396ff0ULL || rel >= 0x1397160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01397160 size=400 callers=1 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_1397160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397160ULL || rel >= 0x13972f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013972f0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1397760
*/
void sub_13972f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13972f0ULL || rel >= 0x1397540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01397540 size=544 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_1397760
*/
void sub_1397540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397540ULL || rel >= 0x1397760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01397760 size=384 callers=2 calls=1
   calls: sub_13978e0
*/
void sub_1397760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397760ULL || rel >= 0x13978e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013978e0 size=368 callers=1 calls=0
*/
void sub_13978e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13978e0ULL || rel >= 0x1397a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01397a50 size=16 callers=1 calls=0
*/
void sub_1397a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397a50ULL || rel >= 0x1397a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01397a60 size=128 callers=1 calls=2
   calls: sub_134d370, sub_137e480
*/
void sub_1397a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397a60ULL || rel >= 0x1397ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01397ae0 size=80 callers=0 calls=2
   calls: sub_137e480, sub_1397b30
*/
void sub_1397ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397ae0ULL || rel >= 0x1397b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01397b30 size=304 callers=2 calls=3
   calls: sub_134e4a0, sub_1397cb0, sub_1397ee0
*/
void sub_1397b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397b30ULL || rel >= 0x1397c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01397c60 size=80 callers=0 calls=2
   calls: sub_137e480, sub_1397b30
*/
void sub_1397c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397c60ULL || rel >= 0x1397cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01397cb0 size=560 callers=1 calls=2
   calls: sub_1346730, sub_134ea20
*/
void sub_1397cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397cb0ULL || rel >= 0x1397ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01397ee0 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_134ea20
*/
void sub_1397ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397ee0ULL || rel >= 0x13980e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013980e0 size=416 callers=2 calls=4
   calls: sub_1398280, sub_1398430, sub_139a410, sub_139fee0
*/
void sub_13980e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13980e0ULL || rel >= 0x1398280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01398280 size=432 callers=1 calls=0
*/
void sub_1398280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1398280ULL || rel >= 0x1398430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01398430 size=528 callers=4 calls=0
*/
void sub_1398430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1398430ULL || rel >= 0x1398640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01398640 size=656 callers=5 calls=1
   calls: sub_139a580
*/
void sub_1398640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1398640ULL || rel >= 0x13988d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013988d0 size=48 callers=0 calls=1
   calls: sub_1398640
*/
void sub_13988d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13988d0ULL || rel >= 0x1398900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01398900 size=208 callers=33 calls=1
   calls: sub_139a6e0
*/
void sub_1398900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1398900ULL || rel >= 0x13989d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013989d0 size=1088 callers=1 calls=9
   calls: sub_1398e10, sub_13a0f80, sub_13a0f90, sub_13a1000, sub_13a1050, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0
*/
void sub_13989d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13989d0ULL || rel >= 0x1398e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01398e10 size=2176 callers=1 calls=5
   calls: sub_1346730, sub_13477b0, sub_1347cd0, sub_1347fd0, sub_139ad40
*/
void sub_1398e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1398e10ULL || rel >= 0x1399690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01399690 size=16 callers=0 calls=0
*/
void sub_1399690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1399690ULL || rel >= 0x13996a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013996a0 size=592 callers=1 calls=7
   calls: sub_13998f0, sub_1399b40, sub_13a0f80, sub_13a0f90, sub_13a1000, sub_13a1050, sub_5e8aa0
*/
void sub_13996a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13996a0ULL || rel >= 0x13998f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013998f0 size=592 callers=1 calls=0
*/
void sub_13998f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13998f0ULL || rel >= 0x1399b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01399b40 size=480 callers=1 calls=2
   calls: sub_5e85f0, sub_5e8730
*/
void sub_1399b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1399b40ULL || rel >= 0x1399d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01399d20 size=16 callers=0 calls=0
*/
void sub_1399d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1399d20ULL || rel >= 0x1399d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01399d30 size=304 callers=2 calls=1
   calls: sub_139f860
   ref: load hashdb
*/
void load_hashdb(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1399d30ULL || rel >= 0x1399e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01399e60 size=32 callers=2 calls=0
*/
void sub_1399e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1399e60ULL || rel >= 0x1399e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01399e80 size=16 callers=2 calls=0
*/
void sub_1399e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1399e80ULL || rel >= 0x1399e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01399e90 size=208 callers=2 calls=2
   calls: sub_139cf80, sub_139f9b0
*/
void sub_1399e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1399e90ULL || rel >= 0x1399f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01399f60 size=176 callers=0 calls=1
   calls: sub_139cf80
*/
void sub_1399f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1399f60ULL || rel >= 0x139a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a010 size=304 callers=3 calls=1
   calls: sub_13a0920
   ref: save hashdb
*/
void save_hashdb(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a010ULL || rel >= 0x139a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a140 size=32 callers=6 calls=0
*/
void sub_139a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a140ULL || rel >= 0x139a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a160 size=16 callers=3 calls=0
*/
void sub_139a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a160ULL || rel >= 0x139a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a170 size=64 callers=2 calls=0
*/
void sub_139a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a170ULL || rel >= 0x139a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a1b0 size=176 callers=2 calls=1
   calls: sub_139cf80
*/
void sub_139a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a1b0ULL || rel >= 0x139a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a260 size=176 callers=2 calls=1
   calls: sub_139cf80
*/
void sub_139a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a260ULL || rel >= 0x139a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a310 size=208 callers=1 calls=0
*/
void sub_139a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a310ULL || rel >= 0x139a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a3e0 size=48 callers=0 calls=1
   calls: sub_139a310
*/
void sub_139a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a3e0ULL || rel >= 0x139a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a410 size=368 callers=1 calls=0
*/
void sub_139a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a410ULL || rel >= 0x139a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a580 size=352 callers=1 calls=0
*/
void sub_139a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a580ULL || rel >= 0x139a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a6e0 size=528 callers=1 calls=0
*/
void sub_139a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a6e0ULL || rel >= 0x139a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a8f0 size=16 callers=0 calls=0
*/
void sub_139a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a8f0ULL || rel >= 0x139a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a900 size=16 callers=0 calls=0
*/
void sub_139a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a900ULL || rel >= 0x139a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a910 size=16 callers=0 calls=0
*/
void sub_139a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a910ULL || rel >= 0x139a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a920 size=16 callers=0 calls=0
*/
void sub_139a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a920ULL || rel >= 0x139a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139a930 size=512 callers=0 calls=0
*/
void sub_139a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a930ULL || rel >= 0x139ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ab30 size=512 callers=0 calls=0
*/
void sub_139ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ab30ULL || rel >= 0x139ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ad30 size=16 callers=0 calls=0
*/
void sub_139ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ad30ULL || rel >= 0x139ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ad40 size=816 callers=1 calls=13
   calls: sub_13477b0, sub_139b070, sub_139b1b0, sub_139b4b0, sub_139b690, sub_139b880, sub_139ba70, sub_139bc60, sub_139be40, sub_139c030, sub_139c220, sub_139c410
   ... +1 more
*/
void sub_139ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ad40ULL || rel >= 0x139b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139b070 size=320 callers=1 calls=0
*/
void sub_139b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139b070ULL || rel >= 0x139b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139b1b0 size=384 callers=1 calls=1
   calls: sub_139b330
*/
void sub_139b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139b1b0ULL || rel >= 0x139b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139b330 size=384 callers=1 calls=0
*/
void sub_139b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139b330ULL || rel >= 0x139b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139b4b0 size=480 callers=1 calls=0
*/
void sub_139b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139b4b0ULL || rel >= 0x139b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139b690 size=496 callers=1 calls=0
*/
void sub_139b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139b690ULL || rel >= 0x139b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139b880 size=496 callers=1 calls=0
*/
void sub_139b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139b880ULL || rel >= 0x139ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ba70 size=496 callers=1 calls=0
*/
void sub_139ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ba70ULL || rel >= 0x139bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139bc60 size=480 callers=1 calls=0
*/
void sub_139bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139bc60ULL || rel >= 0x139be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139be40 size=496 callers=1 calls=0
*/
void sub_139be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139be40ULL || rel >= 0x139c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139c030 size=496 callers=1 calls=0
*/
void sub_139c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c030ULL || rel >= 0x139c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139c220 size=496 callers=1 calls=0
*/
void sub_139c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c220ULL || rel >= 0x139c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139c410 size=496 callers=1 calls=0
*/
void sub_139c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c410ULL || rel >= 0x139c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139c600 size=496 callers=1 calls=0
*/
void sub_139c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c600ULL || rel >= 0x139c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139c7f0 size=16 callers=0 calls=0
*/
void sub_139c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c7f0ULL || rel >= 0x139c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139c800 size=16 callers=0 calls=0
*/
void sub_139c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c800ULL || rel >= 0x139c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139c810 size=16 callers=0 calls=0
*/
void sub_139c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c810ULL || rel >= 0x139c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139c820 size=16 callers=0 calls=0
*/
void sub_139c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c820ULL || rel >= 0x139c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139c830 size=896 callers=0 calls=0
*/
void sub_139c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c830ULL || rel >= 0x139cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139cbb0 size=928 callers=0 calls=0
*/
void sub_139cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139cbb0ULL || rel >= 0x139cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139cf50 size=16 callers=0 calls=0
*/
void sub_139cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139cf50ULL || rel >= 0x139cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139cf60 size=16 callers=0 calls=0
*/
void sub_139cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139cf60ULL || rel >= 0x139cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139cf70 size=16 callers=0 calls=0
*/
void sub_139cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139cf70ULL || rel >= 0x139cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139cf80 size=464 callers=4 calls=0
*/
void sub_139cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139cf80ULL || rel >= 0x139d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139d150 size=368 callers=0 calls=0
*/
void sub_139d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139d150ULL || rel >= 0x139d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139d2c0 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139d2c0ULL || rel >= 0x139d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139d490 size=208 callers=0 calls=2
   calls: sub_137e480, sub_139d560
*/
void sub_139d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139d490ULL || rel >= 0x139d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139d560 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_139e380, sub_139e5d0
*/
void sub_139d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139d560ULL || rel >= 0x139d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139d6a0 size=368 callers=0 calls=3
   calls: sub_137e480, sub_139d810, sub_139e7e0
*/
void sub_139d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139d6a0ULL || rel >= 0x139d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139d810 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_139d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139d810ULL || rel >= 0x139d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139d9e0 size=576 callers=0 calls=3
   calls: sub_137e480, sub_139d560, sub_139e050
*/
void sub_139d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139d9e0ULL || rel >= 0x139dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139dc20 size=80 callers=0 calls=0
*/
void sub_139dc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139dc20ULL || rel >= 0x139dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139dc70 size=80 callers=0 calls=0
*/
void sub_139dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139dc70ULL || rel >= 0x139dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139dcc0 size=80 callers=0 calls=0
*/
void sub_139dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139dcc0ULL || rel >= 0x139dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139dd10 size=80 callers=0 calls=0
*/
void sub_139dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139dd10ULL || rel >= 0x139dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139dd60 size=80 callers=0 calls=0
*/
void sub_139dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139dd60ULL || rel >= 0x139ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ddb0 size=80 callers=0 calls=0
*/
void sub_139ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ddb0ULL || rel >= 0x139de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139de00 size=240 callers=0 calls=0
*/
void sub_139de00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139de00ULL || rel >= 0x139def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139def0 size=80 callers=0 calls=0
*/
void sub_139def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139def0ULL || rel >= 0x139df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139df40 size=80 callers=0 calls=0
*/
void sub_139df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139df40ULL || rel >= 0x139df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139df90 size=16 callers=0 calls=0
*/
void sub_139df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139df90ULL || rel >= 0x139dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139dfa0 size=16 callers=0 calls=0
*/
void sub_139dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139dfa0ULL || rel >= 0x139dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139dfb0 size=80 callers=0 calls=0
*/
void sub_139dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139dfb0ULL || rel >= 0x139e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139e000 size=80 callers=0 calls=0
*/
void sub_139e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139e000ULL || rel >= 0x139e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139e050 size=336 callers=3 calls=0
*/
void sub_139e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139e050ULL || rel >= 0x139e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139e1a0 size=480 callers=0 calls=0
*/
void sub_139e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139e1a0ULL || rel >= 0x139e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139e380 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_139e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139e380ULL || rel >= 0x139e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139e5d0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_139e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139e5d0ULL || rel >= 0x139e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139e7e0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_139e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139e7e0ULL || rel >= 0x139ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ea00 size=80 callers=1 calls=1
   calls: sub_139f030
*/
void sub_139ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ea00ULL || rel >= 0x139ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ea50 size=16 callers=4 calls=0
*/
void sub_139ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ea50ULL || rel >= 0x139ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ea60 size=32 callers=1 calls=0
   ref: load process
*/
void load_process(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ea60ULL || rel >= 0x139ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ea80 size=32 callers=1 calls=0
*/
void sub_139ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ea80ULL || rel >= 0x139eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139eaa0 size=64 callers=1 calls=0
*/
void sub_139eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139eaa0ULL || rel >= 0x139eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139eae0 size=112 callers=1 calls=2
   calls: sub_137e480, sub_1399e90
*/
void sub_139eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139eae0ULL || rel >= 0x139eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139eb50 size=608 callers=0 calls=9
   calls: load_hashdb, poke_trade, sub_137e480, sub_1397a50, sub_1397a60, sub_1399e60, sub_1399e80, sub_139a1b0, sub_5d1080
*/
void sub_139eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139eb50ULL || rel >= 0x139edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139edb0 size=96 callers=0 calls=0
*/
void sub_139edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139edb0ULL || rel >= 0x139ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ee10 size=96 callers=0 calls=0
*/
void sub_139ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ee10ULL || rel >= 0x139ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ee70 size=112 callers=0 calls=0
*/
void sub_139ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ee70ULL || rel >= 0x139eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139eee0 size=112 callers=0 calls=0
*/
void sub_139eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139eee0ULL || rel >= 0x139ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ef50 size=112 callers=0 calls=0
*/
void sub_139ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ef50ULL || rel >= 0x139efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139efc0 size=112 callers=0 calls=0
*/
void sub_139efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139efc0ULL || rel >= 0x139f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f030 size=352 callers=1 calls=1
   calls: sub_5d0b10
*/
void sub_139f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f030ULL || rel >= 0x139f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f190 size=64 callers=5 calls=0
   ref: poke_trade
   ref: backup
*/
void poke_trade(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f190ULL || rel >= 0x139f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f1d0 size=432 callers=0 calls=4
   calls: sub_139f6e0, sub_5e6180, sub_5e65a0, sub_d0c0
*/
void sub_139f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f1d0ULL || rel >= 0x139f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f380 size=432 callers=0 calls=4
   calls: sub_139f760, sub_5e6180, sub_5e65a0, sub_d0c0
*/
void sub_139f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f380ULL || rel >= 0x139f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f530 size=432 callers=0 calls=4
   calls: sub_139f7e0, sub_5e6180, sub_5e65a0, sub_d0c0
*/
void sub_139f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f530ULL || rel >= 0x139f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f6e0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_139f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f6e0ULL || rel >= 0x139f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f760 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_139f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f760ULL || rel >= 0x139f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f7e0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_139f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f7e0ULL || rel >= 0x139f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f860 size=336 callers=1 calls=1
   calls: sub_5d0b10
*/
void sub_139f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f860ULL || rel >= 0x139f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f9b0 size=64 callers=1 calls=0
*/
void sub_139f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f9b0ULL || rel >= 0x139f9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139f9f0 size=144 callers=0 calls=2
   calls: sub_13989d0, sub_5e6280
*/
void sub_139f9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139f9f0ULL || rel >= 0x139fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139fa80 size=176 callers=0 calls=0
*/
void sub_139fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139fa80ULL || rel >= 0x139fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139fb30 size=176 callers=0 calls=0
*/
void sub_139fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139fb30ULL || rel >= 0x139fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139fbe0 size=192 callers=0 calls=0
*/
void sub_139fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139fbe0ULL || rel >= 0x139fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139fca0 size=192 callers=0 calls=0
*/
void sub_139fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139fca0ULL || rel >= 0x139fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139fd60 size=192 callers=0 calls=0
*/
void sub_139fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139fd60ULL || rel >= 0x139fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139fe20 size=192 callers=0 calls=0
*/
void sub_139fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139fe20ULL || rel >= 0x139fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139fee0 size=32 callers=1 calls=0
*/
void sub_139fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139fee0ULL || rel >= 0x139ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ff00 size=32 callers=0 calls=0
*/
void sub_139ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ff00ULL || rel >= 0x139ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ff20 size=32 callers=0 calls=0
*/
void sub_139ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ff20ULL || rel >= 0x139ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ff40 size=16 callers=0 calls=0
*/
void sub_139ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ff40ULL || rel >= 0x139ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ff50 size=16 callers=0 calls=0
*/
void sub_139ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ff50ULL || rel >= 0x139ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ff60 size=80 callers=1 calls=1
   calls: sub_13a07c0
*/
void sub_139ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ff60ULL || rel >= 0x139ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ffb0 size=16 callers=4 calls=0
*/
void sub_139ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ffb0ULL || rel >= 0x139ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0139ffc0 size=224 callers=1 calls=3
   calls: sub_137e480, sub_139a260, sub_5d0f90
   ref: save process
*/
void save_process(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139ffc0ULL || rel >= 0x13a00a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a00a0 size=32 callers=1 calls=0
*/
void sub_13a00a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a00a0ULL || rel >= 0x13a00c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a00c0 size=64 callers=1 calls=0
*/
void sub_13a00c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a00c0ULL || rel >= 0x13a0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0100 size=224 callers=1 calls=2
   calls: sub_137e480, sub_139a170
*/
void sub_13a0100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0100ULL || rel >= 0x13a01e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a01e0 size=864 callers=0 calls=7
   calls: poke_trade, save_hashdb, sub_137e480, sub_137fc10, sub_139a140, sub_139a160, sub_5d1080
*/
void sub_13a01e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a01e0ULL || rel >= 0x13a0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0540 size=96 callers=0 calls=0
*/
void sub_13a0540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0540ULL || rel >= 0x13a05a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a05a0 size=96 callers=0 calls=0
*/
void sub_13a05a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a05a0ULL || rel >= 0x13a0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0600 size=112 callers=0 calls=0
*/
void sub_13a0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0600ULL || rel >= 0x13a0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0670 size=112 callers=0 calls=0
*/
void sub_13a0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0670ULL || rel >= 0x13a06e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a06e0 size=112 callers=0 calls=0
*/
void sub_13a06e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a06e0ULL || rel >= 0x13a0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0750 size=112 callers=0 calls=0
*/
void sub_13a0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0750ULL || rel >= 0x13a07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a07c0 size=352 callers=1 calls=1
   calls: sub_5d0b10
*/
void sub_13a07c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a07c0ULL || rel >= 0x13a0920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0920 size=336 callers=1 calls=1
   calls: sub_5d0b10
*/
void sub_13a0920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0920ULL || rel >= 0x13a0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0a70 size=64 callers=0 calls=0
*/
void sub_13a0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0a70ULL || rel >= 0x13a0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0ab0 size=112 callers=0 calls=1
   calls: sub_13996a0
*/
void sub_13a0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0ab0ULL || rel >= 0x13a0b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0b20 size=176 callers=0 calls=0
*/
void sub_13a0b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0b20ULL || rel >= 0x13a0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0bd0 size=176 callers=0 calls=0
*/
void sub_13a0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0bd0ULL || rel >= 0x13a0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0c80 size=192 callers=0 calls=0
*/
void sub_13a0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0c80ULL || rel >= 0x13a0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0d40 size=192 callers=0 calls=0
*/
void sub_13a0d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0d40ULL || rel >= 0x13a0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0e00 size=192 callers=0 calls=0
*/
void sub_13a0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0e00ULL || rel >= 0x13a0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0ec0 size=192 callers=0 calls=0
*/
void sub_13a0ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0ec0ULL || rel >= 0x13a0f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0f80 size=16 callers=2 calls=0
*/
void sub_13a0f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0f80ULL || rel >= 0x13a0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a0f90 size=112 callers=2 calls=0
*/
void sub_13a0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a0f90ULL || rel >= 0x13a1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1000 size=80 callers=2 calls=0
*/
void sub_13a1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1000ULL || rel >= 0x13a1050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1050 size=160 callers=2 calls=0
*/
void sub_13a1050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1050ULL || rel >= 0x13a10f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a10f0 size=16 callers=12 calls=0
*/
void sub_13a10f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a10f0ULL || rel >= 0x13a1100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1100 size=80 callers=62 calls=1
   calls: sub_13a1150
*/
void sub_13a1100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1100ULL || rel >= 0x13a1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1150 size=160 callers=18 calls=6
   calls: sub_137f6b0, sub_137f800, sub_137f870, sub_137f8e0, sub_137f950, sub_137f9c0
*/
void sub_13a1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1150ULL || rel >= 0x13a11f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a11f0 size=16 callers=17 calls=0
*/
void sub_13a11f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a11f0ULL || rel >= 0x13a1200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1200 size=16 callers=1 calls=0
*/
void sub_13a1200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1200ULL || rel >= 0x13a1210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1210 size=272 callers=1 calls=2
   calls: sub_13a1320, sub_13a1870
*/
void sub_13a1210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1210ULL || rel >= 0x13a1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1320 size=272 callers=4 calls=1
   calls: sub_13a1430
*/
void sub_13a1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1320ULL || rel >= 0x13a1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1430 size=80 callers=1 calls=1
   calls: sub_13a2e70
*/
void sub_13a1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1430ULL || rel >= 0x13a1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1480 size=96 callers=0 calls=0
*/
void sub_13a1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1480ULL || rel >= 0x13a14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a14e0 size=96 callers=0 calls=0
*/
void sub_13a14e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a14e0ULL || rel >= 0x13a1540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1540 size=96 callers=0 calls=0
*/
void sub_13a1540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1540ULL || rel >= 0x13a15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a15a0 size=96 callers=0 calls=0
*/
void sub_13a15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a15a0ULL || rel >= 0x13a1600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1600 size=96 callers=0 calls=0
*/
void sub_13a1600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1600ULL || rel >= 0x13a1660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1660 size=96 callers=0 calls=0
*/
void sub_13a1660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1660ULL || rel >= 0x13a16c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a16c0 size=304 callers=3 calls=3
   calls: sub_13a31e0, sub_13e3740, sub_5cfaf0
*/
void sub_13a16c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a16c0ULL || rel >= 0x13a17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a17f0 size=16 callers=0 calls=0
*/
void sub_13a17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a17f0ULL || rel >= 0x13a1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1800 size=112 callers=3 calls=3
   calls: g_command_regist_id, g_mode, sub_66b8c0
*/
void sub_13a1800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1800ULL || rel >= 0x13a1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1870 size=480 callers=2 calls=9
   calls: g_command_regist_id, g_mode, sub_13a2880, sub_13a31e0, sub_13e35d0, sub_13e3690, sub_13e39a0, sub_5cfaf0, sub_66b8c0
*/
void sub_13a1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1870ULL || rel >= 0x13a1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1a50 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13a1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1a50ULL || rel >= 0x13a1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1ac0 size=32 callers=0 calls=0
*/
void sub_13a1ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1ac0ULL || rel >= 0x13a1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1ae0 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13a1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1ae0ULL || rel >= 0x13a1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1b50 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13a1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1b50ULL || rel >= 0x13a1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1bc0 size=304 callers=13 calls=0
*/
void sub_13a1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1bc0ULL || rel >= 0x13a1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1cf0 size=288 callers=2 calls=2
   calls: sub_5e2350, sub_65d700
   ref: script/common_scr.dat
   ref: bin/script/amx/general_dummy.amx
*/
void common_scr_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1cf0ULL || rel >= 0x13a1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a1e10 size=512 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_13a1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a1e10ULL || rel >= 0x13a2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2010 size=16 callers=0 calls=0
*/
void sub_13a2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2010ULL || rel >= 0x13a2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2020 size=16 callers=0 calls=0
*/
void sub_13a2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2020ULL || rel >= 0x13a2030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2030 size=16 callers=0 calls=0
*/
void sub_13a2030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2030ULL || rel >= 0x13a2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2040 size=16 callers=0 calls=0
*/
void sub_13a2040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2040ULL || rel >= 0x13a2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2050 size=16 callers=0 calls=0
*/
void sub_13a2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2050ULL || rel >= 0x13a2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2060 size=704 callers=1 calls=4
   calls: sub_5dd790, sub_5e2930, sub_5e2bc0, sub_8c2c10
*/
void sub_13a2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2060ULL || rel >= 0x13a2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2320 size=80 callers=1 calls=1
   calls: sub_13a2370
*/
void sub_13a2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2320ULL || rel >= 0x13a2370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2370 size=576 callers=1 calls=1
   calls: sub_13a25b0
*/
void sub_13a2370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2370ULL || rel >= 0x13a25b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a25b0 size=720 callers=1 calls=1
   calls: sub_13a2aa0
*/
void sub_13a25b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a25b0ULL || rel >= 0x13a2880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2880 size=224 callers=5 calls=0
*/
void sub_13a2880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2880ULL || rel >= 0x13a2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2960 size=48 callers=2 calls=0
*/
void sub_13a2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2960ULL || rel >= 0x13a2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2990 size=240 callers=0 calls=0
*/
void sub_13a2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2990ULL || rel >= 0x13a2a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2a80 size=16 callers=0 calls=0
*/
void sub_13a2a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2a80ULL || rel >= 0x13a2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2a90 size=16 callers=0 calls=0
*/
void sub_13a2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2a90ULL || rel >= 0x13a2aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2aa0 size=272 callers=1 calls=0
*/
void sub_13a2aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2aa0ULL || rel >= 0x13a2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2bb0 size=704 callers=0 calls=0
*/
void sub_13a2bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2bb0ULL || rel >= 0x13a2e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2e70 size=240 callers=3 calls=1
   calls: sub_66afd0
*/
void sub_13a2e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2e70ULL || rel >= 0x13a2f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2f60 size=96 callers=1 calls=1
   calls: sub_66b0f0
*/
void sub_13a2f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2f60ULL || rel >= 0x13a2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a2fc0 size=112 callers=0 calls=1
   calls: sub_66b0f0
*/
void sub_13a2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2fc0ULL || rel >= 0x13a3030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3030 size=112 callers=0 calls=1
   calls: sub_66b0f0
*/
void sub_13a3030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3030ULL || rel >= 0x13a30a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a30a0 size=96 callers=0 calls=1
   calls: sub_66b0f0
*/
void sub_13a30a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a30a0ULL || rel >= 0x13a3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3100 size=112 callers=0 calls=1
   calls: sub_66b0f0
*/
void sub_13a3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3100ULL || rel >= 0x13a3170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3170 size=112 callers=0 calls=1
   calls: sub_66b0f0
*/
void sub_13a3170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3170ULL || rel >= 0x13a31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a31e0 size=64 callers=5 calls=1
   calls: sub_66b4c0
*/
void sub_13a31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a31e0ULL || rel >= 0x13a3220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3220 size=48 callers=2 calls=1
   calls: sub_66b7d0
   ref: g_mode
*/
void g_mode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3220ULL || rel >= 0x13a3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3250 size=64 callers=1 calls=1
   calls: sub_66b7d0
   ref: g_mode
*/
void g_mode_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3250ULL || rel >= 0x13a3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3290 size=48 callers=3 calls=1
   calls: sub_66b7d0
   ref: g_command_regist_id
*/
void g_command_regist_id(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3290ULL || rel >= 0x13a32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a32c0 size=176 callers=0 calls=10
   calls: sub_13a3530, sub_13ac490, sub_13b91c0, sub_13bd600, sub_13e6560, sub_13e7ee0, sub_13eb1b0, sub_13ed4e0, sub_13ef8a0, sub_66b5f0
*/
void sub_13a32c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a32c0ULL || rel >= 0x13a3370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3370 size=80 callers=0 calls=1
   calls: sub_66b7d0
   ref: g_command_regist_id
*/
void g_command_regist_id_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3370ULL || rel >= 0x13a33c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a33c0 size=64 callers=1 calls=1
   calls: sub_66b7d0
   ref: g_mode
*/
void g_mode_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a33c0ULL || rel >= 0x13a3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3400 size=128 callers=1 calls=2
   calls: sub_66b790, sub_66c9f0
*/
void sub_13a3400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3400ULL || rel >= 0x13a3480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3480 size=16 callers=0 calls=0
*/
void sub_13a3480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3480ULL || rel >= 0x13a3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3490 size=16 callers=0 calls=0
*/
void sub_13a3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3490ULL || rel >= 0x13a34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a34a0 size=16 callers=0 calls=0
*/
void sub_13a34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a34a0ULL || rel >= 0x13a34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a34b0 size=128 callers=0 calls=0
*/
void sub_13a34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a34b0ULL || rel >= 0x13a3530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3530 size=16 callers=1 calls=0
*/
void sub_13a3530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3530ULL || rel >= 0x13a3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3540 size=144 callers=0 calls=3
   calls: sub_13a6eb0, sub_13b1210, sub_66efd0
*/
void sub_13a3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3540ULL || rel >= 0x13a35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a35d0 size=976 callers=0 calls=5
   calls: sub_13a4c20, sub_13a4f20, sub_13b1210, sub_5cfaf0, sub_66efd0
*/
void sub_13a35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a35d0ULL || rel >= 0x13a39a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a39a0 size=224 callers=0 calls=3
   calls: sub_13b1210, sub_66efd0, sub_d98ea0
*/
void sub_13a39a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a39a0ULL || rel >= 0x13a3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3a80 size=512 callers=0 calls=4
   calls: sub_13a5380, sub_13b1210, sub_66efd0, sub_793480
*/
void sub_13a3a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3a80ULL || rel >= 0x13a3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3c80 size=160 callers=0 calls=3
   calls: sub_13faad0, sub_66efd0, sub_d70210
*/
void sub_13a3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3c80ULL || rel >= 0x13a3d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3d20 size=192 callers=0 calls=5
   calls: sub_13a67a0, sub_66efd0, sub_d25bd0, sub_d46d40, sub_f97380
*/
void sub_13a3d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3d20ULL || rel >= 0x13a3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3de0 size=320 callers=0 calls=4
   calls: sub_13a6a10, sub_66efd0, sub_d6c410, sub_e921d0
*/
void sub_13a3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3de0ULL || rel >= 0x13a3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3f20 size=64 callers=0 calls=2
   calls: sub_66efd0, sub_da5b40
*/
void sub_13a3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3f20ULL || rel >= 0x13a3f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a3f60 size=688 callers=0 calls=6
   calls: sub_106dc30, sub_13a6920, sub_13a6b50, sub_13a6cd0, sub_b2d820, sub_d7c340
*/
void sub_13a3f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a3f60ULL || rel >= 0x13a4210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4210 size=192 callers=0 calls=4
   calls: sub_13b1210, sub_5cfaf0, sub_66efd0, sub_d7c880
*/
void sub_13a4210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4210ULL || rel >= 0x13a42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a42d0 size=160 callers=0 calls=2
   calls: sub_66efd0, sub_d72b30
*/
void sub_13a42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a42d0ULL || rel >= 0x13a4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4370 size=80 callers=0 calls=3
   calls: sub_13b12d0, sub_14214e0, sub_66efd0
*/
void sub_13a4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4370ULL || rel >= 0x13a43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a43c0 size=80 callers=0 calls=3
   calls: sub_66efd0, sub_ffa500, sub_ffa640
*/
void sub_13a43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a43c0ULL || rel >= 0x13a4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4410 size=208 callers=0 calls=2
   calls: sub_66efd0, sub_d6d590
*/
void sub_13a4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4410ULL || rel >= 0x13a44e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a44e0 size=192 callers=0 calls=2
   calls: sub_66efd0, sub_c21d50
*/
void sub_13a44e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a44e0ULL || rel >= 0x13a45a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a45a0 size=64 callers=0 calls=2
   calls: sub_66efd0, sub_a74310
*/
void sub_13a45a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a45a0ULL || rel >= 0x13a45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a45e0 size=160 callers=0 calls=2
   calls: sub_66efd0, sub_da4650
*/
void sub_13a45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a45e0ULL || rel >= 0x13a4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4680 size=64 callers=0 calls=2
   calls: sub_14856c0, sub_66efd0
*/
void sub_13a4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4680ULL || rel >= 0x13a46c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a46c0 size=64 callers=0 calls=2
   calls: sub_1296460, sub_66efd0
*/
void sub_13a46c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a46c0ULL || rel >= 0x13a4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4700 size=144 callers=0 calls=2
   calls: sub_66efd0, sub_da88e0
*/
void sub_13a4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4700ULL || rel >= 0x13a4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4790 size=192 callers=0 calls=2
   calls: sub_66efd0, sub_d6ba40
*/
void sub_13a4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4790ULL || rel >= 0x13a4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4850 size=160 callers=0 calls=0
*/
void sub_13a4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4850ULL || rel >= 0x13a48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a48f0 size=48 callers=0 calls=2
   calls: sub_66efd0, sub_d9abd0
*/
void sub_13a48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a48f0ULL || rel >= 0x13a4920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4920 size=96 callers=0 calls=2
   calls: sub_66efd0, sub_da7b20
*/
void sub_13a4920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4920ULL || rel >= 0x13a4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4980 size=672 callers=10 calls=0
*/
void sub_13a4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4980ULL || rel >= 0x13a4c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4c20 size=768 callers=3 calls=3
   calls: sub_13a5530, sub_13a5bb0, sub_c1b030
*/
void sub_13a4c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4c20ULL || rel >= 0x13a4f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a4f20 size=1120 callers=49 calls=0
*/
void sub_13a4f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a4f20ULL || rel >= 0x13a5380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5380 size=432 callers=1 calls=3
   calls: sub_13a5bb0, sub_13a5ca0, sub_5e5560
*/
void sub_13a5380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5380ULL || rel >= 0x13a5530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5530 size=288 callers=1 calls=3
   calls: sub_13a5650, sub_c38350, sub_e9db40
*/
void sub_13a5530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5530ULL || rel >= 0x13a5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5650 size=240 callers=1 calls=2
   calls: sub_13a4980, sub_e9d130
*/
void sub_13a5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5650ULL || rel >= 0x13a5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5740 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_13a5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5740ULL || rel >= 0x13a57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a57a0 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_13a57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a57a0ULL || rel >= 0x13a5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5800 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_13a5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5800ULL || rel >= 0x13a5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5870 size=16 callers=0 calls=0
*/
void sub_13a5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5870ULL || rel >= 0x13a5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5880 size=16 callers=0 calls=0
*/
void sub_13a5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5880ULL || rel >= 0x13a5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5890 size=176 callers=0 calls=4
   calls: demo_data, sub_c1bcb0, sub_c1bce0, sub_c1bd10
*/
void sub_13a5890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5890ULL || rel >= 0x13a5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5940 size=16 callers=0 calls=0
*/
void sub_13a5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5940ULL || rel >= 0x13a5950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5950 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_13a5950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5950ULL || rel >= 0x13a59b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a59b0 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_13a59b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a59b0ULL || rel >= 0x13a5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5a10 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_13a5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5a10ULL || rel >= 0x13a5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5a80 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_13a5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5a80ULL || rel >= 0x13a5af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5af0 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_13a5af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5af0ULL || rel >= 0x13a5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5b50 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_13a5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5b50ULL || rel >= 0x13a5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5bb0 size=240 callers=137 calls=0
*/
void sub_13a5bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5bb0ULL || rel >= 0x13a5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5ca0 size=288 callers=1 calls=3
   calls: sub_13a5dc0, sub_c38350, sub_e9db40
*/
void sub_13a5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5ca0ULL || rel >= 0x13a5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5dc0 size=272 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_13a5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5dc0ULL || rel >= 0x13a5ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5ed0 size=192 callers=0 calls=0
*/
void sub_13a5ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5ed0ULL || rel >= 0x13a5f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a5f90 size=192 callers=0 calls=0
*/
void sub_13a5f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a5f90ULL || rel >= 0x13a6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6050 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_13a6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6050ULL || rel >= 0x13a60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a60c0 size=16 callers=0 calls=0
*/
void sub_13a60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a60c0ULL || rel >= 0x13a60d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a60d0 size=16 callers=0 calls=0
*/
void sub_13a60d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a60d0ULL || rel >= 0x13a60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a60e0 size=304 callers=0 calls=1
   calls: sub_13a6600
*/
void sub_13a60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a60e0ULL || rel >= 0x13a6210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6210 size=16 callers=0 calls=0
*/
void sub_13a6210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6210ULL || rel >= 0x13a6220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6220 size=192 callers=0 calls=0
*/
void sub_13a6220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6220ULL || rel >= 0x13a62e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a62e0 size=192 callers=0 calls=0
*/
void sub_13a62e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a62e0ULL || rel >= 0x13a63a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a63a0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_13a63a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a63a0ULL || rel >= 0x13a6410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6410 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_13a6410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6410ULL || rel >= 0x13a6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6480 size=192 callers=0 calls=0
*/
void sub_13a6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6480ULL || rel >= 0x13a6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6540 size=192 callers=0 calls=0
*/
void sub_13a6540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6540ULL || rel >= 0x13a6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6600 size=416 callers=2 calls=3
   calls: sub_672c10, sub_c386f0, sub_f590c0
*/
void sub_13a6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6600ULL || rel >= 0x13a67a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a67a0 size=384 callers=8 calls=1
   calls: sub_13a6920
*/
void sub_13a67a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a67a0ULL || rel >= 0x13a6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6920 size=240 callers=225 calls=1
   calls: sub_967240
*/
void sub_13a6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6920ULL || rel >= 0x13a6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6a10 size=272 callers=1 calls=0
*/
void sub_13a6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6a10ULL || rel >= 0x13a6b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6b20 size=16 callers=0 calls=0
*/
void sub_13a6b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6b20ULL || rel >= 0x13a6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6b30 size=16 callers=0 calls=0
*/
void sub_13a6b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6b30ULL || rel >= 0x13a6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6b40 size=16 callers=0 calls=0
*/
void sub_13a6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6b40ULL || rel >= 0x13a6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6b50 size=384 callers=4 calls=1
   calls: sub_13a6920
*/
void sub_13a6b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6b50ULL || rel >= 0x13a6cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6cd0 size=240 callers=232 calls=1
   calls: sub_967240
*/
void sub_13a6cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6cd0ULL || rel >= 0x13a6dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6dc0 size=240 callers=0 calls=0
*/
void sub_13a6dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6dc0ULL || rel >= 0x13a6eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6eb0 size=176 callers=1 calls=1
   calls: sub_13a6f60
*/
void sub_13a6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6eb0ULL || rel >= 0x13a6f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a6f60 size=432 callers=2 calls=3
   calls: sub_c38350, sub_e9db40, unnamed_48
*/
void sub_13a6f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a6f60ULL || rel >= 0x13a7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7110 size=304 callers=1 calls=3
   calls: sub_12f4880, sub_13a7240, sub_e9d130
   ref: bin/script/cut_scene/
   ref: .gfbtml
*/
void unnamed_48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7110ULL || rel >= 0x13a7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7240 size=144 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_13a7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7240ULL || rel >= 0x13a72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a72d0 size=16 callers=0 calls=0
*/
void sub_13a72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a72d0ULL || rel >= 0x13a72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a72e0 size=672 callers=0 calls=7
   calls: sub_13a7bd0, sub_13a7cb0, sub_13e2790, sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_67f540
*/
void sub_13a72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a72e0ULL || rel >= 0x13a7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7580 size=720 callers=0 calls=13
   calls: cut_scene, sub_13a7ed0, sub_13a7fd0, sub_13e2b30, sub_13e2b90, sub_5dd790, sub_5e2930, sub_67f0c0, sub_67f470, sub_67f480, sub_67f4a0, sub_67f4b0
   ... +1 more
*/
void sub_13a7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7580ULL || rel >= 0x13a7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7850 size=160 callers=0 calls=0
*/
void sub_13a7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7850ULL || rel >= 0x13a78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a78f0 size=304 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_13a78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a78f0ULL || rel >= 0x13a7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7a20 size=16 callers=0 calls=0
*/
void sub_13a7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7a20ULL || rel >= 0x13a7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7a30 size=16 callers=0 calls=0
*/
void sub_13a7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7a30ULL || rel >= 0x13a7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7a40 size=16 callers=0 calls=0
*/
void sub_13a7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7a40ULL || rel >= 0x13a7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7a50 size=16 callers=0 calls=0
*/
void sub_13a7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7a50ULL || rel >= 0x13a7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7a60 size=16 callers=0 calls=0
*/
void sub_13a7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7a60ULL || rel >= 0x13a7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7a70 size=16 callers=0 calls=0
*/
void sub_13a7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7a70ULL || rel >= 0x13a7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7a80 size=16 callers=0 calls=0
*/
void sub_13a7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7a80ULL || rel >= 0x13a7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7a90 size=16 callers=0 calls=0
*/
void sub_13a7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7a90ULL || rel >= 0x13a7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7aa0 size=304 callers=0 calls=0
*/
void sub_13a7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7aa0ULL || rel >= 0x13a7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

