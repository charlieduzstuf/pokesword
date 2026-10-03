/* subsdk1 functions 0041b600..00448790 (21 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0041b600 size=96 callers=0 calls=2
   calls: sub_393430, sub_4497f0
*/
void sub_41b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b600ULL || rel >= 0x41b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b660 size=96 callers=0 calls=2
   calls: sub_393430, sub_449a10
*/
void sub_41b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b660ULL || rel >= 0x41b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b6c0 size=96 callers=0 calls=2
   calls: sub_393430, sub_449c90
*/
void sub_41b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b6c0ULL || rel >= 0x41b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b720 size=96 callers=0 calls=2
   calls: sub_393430, sub_449e40
*/
void sub_41b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b720ULL || rel >= 0x41b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b780 size=96 callers=0 calls=2
   calls: sub_393430, sub_44a090
*/
void sub_41b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b780ULL || rel >= 0x41b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b7e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_449c90
*/
void sub_41b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b7e0ULL || rel >= 0x41b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b840 size=96 callers=0 calls=2
   calls: sub_393430, sub_449e40
*/
void sub_41b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b840ULL || rel >= 0x41b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b8a0 size=96 callers=0 calls=2
   calls: sub_393430, sub_44a090
*/
void sub_41b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b8a0ULL || rel >= 0x41b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b900 size=96 callers=0 calls=2
   calls: sub_393430, sub_44a370
*/
void sub_41b900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b900ULL || rel >= 0x41b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b960 size=96 callers=0 calls=2
   calls: sub_393430, sub_44a370
*/
void sub_41b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b960ULL || rel >= 0x41b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b9c0 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_41b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b9c0ULL || rel >= 0x41bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041bad0 size=256 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_41bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41bad0ULL || rel >= 0x41bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041bbd0 size=592 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_41bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41bbd0ULL || rel >= 0x41be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041be20 size=560 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_41be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41be20ULL || rel >= 0x41c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c050 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a490
*/
void sub_41c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c050ULL || rel >= 0x41c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c0d0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a560
*/
void sub_41c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c0d0ULL || rel >= 0x41c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c150 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_44a650
*/
void sub_41c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c150ULL || rel >= 0x41c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c1d0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a780
*/
void sub_41c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c1d0ULL || rel >= 0x41c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c260 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a8d0
*/
void sub_41c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c260ULL || rel >= 0x41c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c2f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a490
*/
void sub_41c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c2f0ULL || rel >= 0x41c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c370 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a560
*/
void sub_41c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c370ULL || rel >= 0x41c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c3f0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_44a650
*/
void sub_41c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c3f0ULL || rel >= 0x41c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c470 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a780
*/
void sub_41c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c470ULL || rel >= 0x41c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c500 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a8d0
*/
void sub_41c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c500ULL || rel >= 0x41c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c590 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a490
*/
void sub_41c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c590ULL || rel >= 0x41c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c610 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a560
*/
void sub_41c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c610ULL || rel >= 0x41c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c690 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_44a650
*/
void sub_41c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c690ULL || rel >= 0x41c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c710 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a780
*/
void sub_41c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c710ULL || rel >= 0x41c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c7a0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a8d0
*/
void sub_41c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c7a0ULL || rel >= 0x41c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c830 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a490
*/
void sub_41c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c830ULL || rel >= 0x41c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c8b0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a560
*/
void sub_41c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c8b0ULL || rel >= 0x41c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c930 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a490
*/
void sub_41c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c930ULL || rel >= 0x41c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041c9b0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a560
*/
void sub_41c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c9b0ULL || rel >= 0x41ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ca30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a490
*/
void sub_41ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ca30ULL || rel >= 0x41cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041cab0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a560
*/
void sub_41cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41cab0ULL || rel >= 0x41cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041cb30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a490
*/
void sub_41cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41cb30ULL || rel >= 0x41cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041cbb0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a560
*/
void sub_41cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41cbb0ULL || rel >= 0x41cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041cc30 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_44a650
*/
void sub_41cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41cc30ULL || rel >= 0x41ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ccb0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a780
*/
void sub_41ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ccb0ULL || rel >= 0x41cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041cd40 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44a8d0
*/
void sub_41cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41cd40ULL || rel >= 0x41cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041cdd0 size=96 callers=0 calls=2
   calls: sub_393430, sub_44aa30
*/
void sub_41cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41cdd0ULL || rel >= 0x41ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ce30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44ab00
*/
void sub_41ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ce30ULL || rel >= 0x41ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ceb0 size=96 callers=0 calls=2
   calls: sub_393430, sub_44aa30
*/
void sub_41ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ceb0ULL || rel >= 0x41cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041cf10 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44ab00
*/
void sub_41cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41cf10ULL || rel >= 0x41cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041cf90 size=352 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_41cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41cf90ULL || rel >= 0x41d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d0f0 size=368 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_41d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d0f0ULL || rel >= 0x41d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d260 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d260ULL || rel >= 0x41d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d2b0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d2b0ULL || rel >= 0x41d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d300 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d300ULL || rel >= 0x41d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d350 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d350ULL || rel >= 0x41d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d3a0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d3a0ULL || rel >= 0x41d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d3f0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44ac30
*/
void sub_41d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d3f0ULL || rel >= 0x41d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d440 size=144 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_41d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d440ULL || rel >= 0x41d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d4d0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44ac30
*/
void sub_41d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d4d0ULL || rel >= 0x41d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d520 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44ac30
*/
void sub_41d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d520ULL || rel >= 0x41d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d570 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d570ULL || rel >= 0x41d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d5c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d5c0ULL || rel >= 0x41d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d610 size=192 callers=0 calls=4
   calls: atomicCompSwap, sub_2fb460, sub_393430, sub_426860
*/
void sub_41d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d610ULL || rel >= 0x41d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d6d0 size=416 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_41d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d6d0ULL || rel >= 0x41d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d870 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_428790
*/
void sub_41d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d870ULL || rel >= 0x41d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d8c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_428790
*/
void sub_41d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d8c0ULL || rel >= 0x41d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041d910 size=752 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_41d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d910ULL || rel >= 0x41dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041dc00 size=176 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_41dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41dc00ULL || rel >= 0x41dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041dcb0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44acb0
*/
void sub_41dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41dcb0ULL || rel >= 0x41dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041dd00 size=96 callers=0 calls=2
   calls: sub_393430, sub_44ae00
*/
void sub_41dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41dd00ULL || rel >= 0x41dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041dd60 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44b000
*/
void sub_41dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41dd60ULL || rel >= 0x41dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041dde0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44b210
*/
void sub_41dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41dde0ULL || rel >= 0x41de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041de30 size=96 callers=0 calls=2
   calls: sub_393430, sub_44b390
*/
void sub_41de30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41de30ULL || rel >= 0x41de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041de90 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44b5f0
*/
void sub_41de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41de90ULL || rel >= 0x41df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041df10 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_44b860
*/
void sub_41df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41df10ULL || rel >= 0x41df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041df80 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44acb0
*/
void sub_41df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41df80ULL || rel >= 0x41dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041dfd0 size=96 callers=0 calls=2
   calls: sub_393430, sub_44ae00
*/
void sub_41dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41dfd0ULL || rel >= 0x41e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e030 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44b000
*/
void sub_41e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e030ULL || rel >= 0x41e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e0b0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44b210
*/
void sub_41e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e0b0ULL || rel >= 0x41e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e100 size=96 callers=0 calls=2
   calls: sub_393430, sub_44b390
*/
void sub_41e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e100ULL || rel >= 0x41e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e160 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44b5f0
*/
void sub_41e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e160ULL || rel >= 0x41e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e1e0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_44b860
*/
void sub_41e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e1e0ULL || rel >= 0x41e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e250 size=320 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_41e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e250ULL || rel >= 0x41e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e390 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44acb0
*/
void sub_41e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e390ULL || rel >= 0x41e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e3e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_44ae00
*/
void sub_41e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e3e0ULL || rel >= 0x41e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e440 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44b000
*/
void sub_41e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e440ULL || rel >= 0x41e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e4c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44b210
*/
void sub_41e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e4c0ULL || rel >= 0x41e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e510 size=96 callers=0 calls=2
   calls: sub_393430, sub_44b390
*/
void sub_41e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e510ULL || rel >= 0x41e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e570 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44b5f0
*/
void sub_41e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e570ULL || rel >= 0x41e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e5f0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_44b860
*/
void sub_41e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e5f0ULL || rel >= 0x41e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e660 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44acb0
*/
void sub_41e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e660ULL || rel >= 0x41e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e6b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_44ae00
*/
void sub_41e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e6b0ULL || rel >= 0x41e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e710 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44b000
*/
void sub_41e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e710ULL || rel >= 0x41e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e790 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44b210
*/
void sub_41e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e790ULL || rel >= 0x41e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e7e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_44b390
*/
void sub_41e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e7e0ULL || rel >= 0x41e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e840 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44b5f0
*/
void sub_41e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e840ULL || rel >= 0x41e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e8c0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_44b860
*/
void sub_41e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e8c0ULL || rel >= 0x41e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e930 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e930ULL || rel >= 0x41e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e980 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e980ULL || rel >= 0x41e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041e9d0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e9d0ULL || rel >= 0x41ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ea20 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_44abf0
*/
void sub_41ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ea20ULL || rel >= 0x41ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ea70 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_41ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ea70ULL || rel >= 0x41eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041eb80 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_41eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41eb80ULL || rel >= 0x41ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ec90 size=208 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_41ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ec90ULL || rel >= 0x41ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ed60 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_41ed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ed60ULL || rel >= 0x41ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ee70 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a70
*/
void sub_41ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ee70ULL || rel >= 0x41eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041eed0 size=96 callers=0 calls=2
   calls: sub_393430, sub_44b950
*/
void sub_41eed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41eed0ULL || rel >= 0x41ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ef30 size=96 callers=0 calls=2
   calls: sub_393430, sub_44b950
*/
void sub_41ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ef30ULL || rel >= 0x41ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ef90 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a70
*/
void sub_41ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ef90ULL || rel >= 0x41eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041eff0 size=208 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_41eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41eff0ULL || rel >= 0x41f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f0c0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_440620
*/
void sub_41f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f0c0ULL || rel >= 0x41f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f140 size=384 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_41f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f140ULL || rel >= 0x41f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f2c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_41f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f2c0ULL || rel >= 0x41f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f310 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_41f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f310ULL || rel >= 0x41f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f360 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_41f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f360ULL || rel >= 0x41f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f3b0 size=352 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_41f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f3b0ULL || rel >= 0x41f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f510 size=208 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_41f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f510ULL || rel >= 0x41f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f5e0 size=224 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_41f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f5e0ULL || rel >= 0x41f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f6c0 size=304 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_41f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f6c0ULL || rel >= 0x41f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f7f0 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_41f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f7f0ULL || rel >= 0x41f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f900 size=96 callers=0 calls=2
   calls: sub_393430, sub_44ba40
*/
void sub_41f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f900ULL || rel >= 0x41f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f960 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_44bbc0
*/
void sub_41f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f960ULL || rel >= 0x41f9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f9d0 size=576 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_41f9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f9d0ULL || rel >= 0x41fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041fc10 size=736 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_3936f0, sub_426860
*/
void sub_41fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41fc10ULL || rel >= 0x41fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041fef0 size=288 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_41fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41fef0ULL || rel >= 0x420010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420010 size=400 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_420010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420010ULL || rel >= 0x4201a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004201a0 size=336 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_4201a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4201a0ULL || rel >= 0x4202f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004202f0 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_4202f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4202f0ULL || rel >= 0x420450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420450 size=96 callers=0 calls=2
   calls: sub_393430, sub_44ba40
*/
void sub_420450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420450ULL || rel >= 0x4204b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004204b0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_44bbc0
*/
void sub_4204b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4204b0ULL || rel >= 0x420520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420520 size=576 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_420520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420520ULL || rel >= 0x420760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420760 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_440620
*/
void sub_420760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420760ULL || rel >= 0x4207e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004207e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_440620
*/
void sub_4207e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4207e0ULL || rel >= 0x420860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420860 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_440620
*/
void sub_420860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420860ULL || rel >= 0x4208e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004208e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_440620
*/
void sub_4208e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4208e0ULL || rel >= 0x420960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420960 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_440620
*/
void sub_420960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420960ULL || rel >= 0x4209e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004209e0 size=288 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_4209e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4209e0ULL || rel >= 0x420b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420b00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44bc60
*/
void sub_420b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420b00ULL || rel >= 0x420b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420b80 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44bc60
*/
void sub_420b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420b80ULL || rel >= 0x420c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420c00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44bc60
*/
void sub_420c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420c00ULL || rel >= 0x420c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420c80 size=496 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_420c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420c80ULL || rel >= 0x420e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420e70 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_420e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420e70ULL || rel >= 0x420f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420f10 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_428830
*/
void sub_420f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420f10ULL || rel >= 0x420f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420f60 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
   ref: /@0@1@
*/
void f_0_1_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420f60ULL || rel >= 0x421000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421000 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_421000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421000ULL || rel >= 0x4210a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004210a0 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
   ref: /@0@1@
*/
void f_0_1_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4210a0ULL || rel >= 0x421140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421140 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_421140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421140ULL || rel >= 0x4211e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004211e0 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
   ref: /@0@1@
*/
void f_0_1_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4211e0ULL || rel >= 0x421280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421280 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_421280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421280ULL || rel >= 0x421320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421320 size=592 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_421320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421320ULL || rel >= 0x421570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421570 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44bd00
*/
void sub_421570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421570ULL || rel >= 0x421600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421600 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_421600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421600ULL || rel >= 0x421680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421680 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44bd00
*/
void sub_421680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421680ULL || rel >= 0x421710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421710 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_421710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421710ULL || rel >= 0x421790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421790 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44bd00
*/
void sub_421790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421790ULL || rel >= 0x421820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421820 size=5696 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_3936f0, sub_426860
*/
void sub_421820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421820ULL || rel >= 0x422e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422e60 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_422e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422e60ULL || rel >= 0x422ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422ee0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44bd00
*/
void sub_422ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422ee0ULL || rel >= 0x422f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422f70 size=5696 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_3936f0, sub_426860
*/
void sub_422f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422f70ULL || rel >= 0x4245b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004245b0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_4245b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4245b0ULL || rel >= 0x424630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424630 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44bd00
*/
void sub_424630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424630ULL || rel >= 0x4246c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004246c0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_4246c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4246c0ULL || rel >= 0x424740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424740 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44bd00
*/
void sub_424740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424740ULL || rel >= 0x4247d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004247d0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_4247d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4247d0ULL || rel >= 0x424850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424850 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44bd00
*/
void sub_424850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424850ULL || rel >= 0x4248e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004248e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_4248e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4248e0ULL || rel >= 0x424960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424960 size=144 callers=0 calls=2
   calls: sub_393430, sub_44d320
*/
void sub_424960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424960ULL || rel >= 0x4249f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004249f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_4249f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4249f0ULL || rel >= 0x424a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424a70 size=144 callers=0 calls=2
   calls: sub_393430, sub_44d320
*/
void sub_424a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424a70ULL || rel >= 0x424b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424b00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_424b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424b00ULL || rel >= 0x424b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424b80 size=144 callers=0 calls=2
   calls: sub_393430, sub_44d320
*/
void sub_424b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424b80ULL || rel >= 0x424c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424c10 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_424c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424c10ULL || rel >= 0x424c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424c90 size=144 callers=0 calls=2
   calls: sub_393430, sub_44d320
*/
void sub_424c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424c90ULL || rel >= 0x424d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424d20 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_424d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424d20ULL || rel >= 0x424da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424da0 size=144 callers=0 calls=2
   calls: sub_393430, sub_44d320
*/
void sub_424da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424da0ULL || rel >= 0x424e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424e30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_424e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424e30ULL || rel >= 0x424eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424eb0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d7d0
*/
void sub_424eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424eb0ULL || rel >= 0x424f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424f30 size=144 callers=0 calls=2
   calls: sub_393430, sub_44d320
*/
void sub_424f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424f30ULL || rel >= 0x424fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424fc0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_424fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424fc0ULL || rel >= 0x425040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425040 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d7d0
*/
void sub_425040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425040ULL || rel >= 0x4250c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004250c0 size=144 callers=0 calls=2
   calls: sub_393430, sub_44d320
*/
void sub_4250c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4250c0ULL || rel >= 0x425150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425150 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_425150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425150ULL || rel >= 0x4251d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004251d0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44dca0
*/
void sub_4251d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4251d0ULL || rel >= 0x425260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425260 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_425260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425260ULL || rel >= 0x4252e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004252e0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44dca0
*/
void sub_4252e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4252e0ULL || rel >= 0x425370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425370 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_425370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425370ULL || rel >= 0x4253f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004253f0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44dca0
*/
void sub_4253f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4253f0ULL || rel >= 0x425480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425480 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44e820
*/
void sub_425480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425480ULL || rel >= 0x425510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425510 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_425510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425510ULL || rel >= 0x425590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425590 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44dca0
*/
void sub_425590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425590ULL || rel >= 0x425620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425620 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44e820
*/
void sub_425620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425620ULL || rel >= 0x4256b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004256b0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_4256b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4256b0ULL || rel >= 0x425730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425730 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44dca0
*/
void sub_425730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425730ULL || rel >= 0x4257c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004257c0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_4257c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4257c0ULL || rel >= 0x425840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425840 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44dca0
*/
void sub_425840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425840ULL || rel >= 0x4258d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004258d0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_4258d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4258d0ULL || rel >= 0x425950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425950 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44dca0
*/
void sub_425950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425950ULL || rel >= 0x4259e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004259e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44d240
*/
void sub_4259e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4259e0ULL || rel >= 0x425a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425a60 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425a60ULL || rel >= 0x425ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425ae0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425ae0ULL || rel >= 0x425b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425b60 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425b60ULL || rel >= 0x425be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425be0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425be0ULL || rel >= 0x425c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425c60 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425c60ULL || rel >= 0x425ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425ce0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425ce0ULL || rel >= 0x425d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425d60 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425d60ULL || rel >= 0x425de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425de0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425de0ULL || rel >= 0x425e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425e60 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425e60ULL || rel >= 0x425ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425ee0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425ee0ULL || rel >= 0x425f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425f60 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425f60ULL || rel >= 0x425fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425fe0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_425fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425fe0ULL || rel >= 0x426060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426060 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
   ref: /@0@1@
*/
void f_0_1_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426060ULL || rel >= 0x4260e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004260e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
   ref: /@0@1@
*/
void f_0_1_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4260e0ULL || rel >= 0x426160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426160 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_426160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426160ULL || rel >= 0x4261e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004261e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_4261e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4261e0ULL || rel >= 0x426260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426260 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_426260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426260ULL || rel >= 0x4262e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004262e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_4262e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4262e0ULL || rel >= 0x426360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426360 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_426360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426360ULL || rel >= 0x4263e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004263e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_4263e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4263e0ULL || rel >= 0x426460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426460 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f3a0
*/
void sub_426460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426460ULL || rel >= 0x4264e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004264e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f4b0
*/
void sub_4264e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4264e0ULL || rel >= 0x426560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426560 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f4b0
*/
void sub_426560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426560ULL || rel >= 0x4265e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004265e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f4b0
*/
void sub_4265e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4265e0ULL || rel >= 0x426660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426660 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f4b0
*/
void sub_426660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426660ULL || rel >= 0x4266e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004266e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f4b0
*/
void sub_4266e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4266e0ULL || rel >= 0x426760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426760 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f4b0
*/
void sub_426760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426760ULL || rel >= 0x4267e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004267e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_44f4b0
*/
void sub_4267e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4267e0ULL || rel >= 0x426860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426860 size=176 callers=8440 calls=3
   calls: s__d, sub_302e20, sub_307ee0
*/
void sub_426860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426860ULL || rel >= 0x426910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426910 size=272 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_426910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426910ULL || rel >= 0x426a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426a20 size=240 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_426a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426a20ULL || rel >= 0x426b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426b10 size=208 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_426b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426b10ULL || rel >= 0x426be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426be0 size=192 callers=7 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_426be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426be0ULL || rel >= 0x426ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426ca0 size=192 callers=11 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_426ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426ca0ULL || rel >= 0x426d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426d60 size=336 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_426d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426d60ULL || rel >= 0x426eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426eb0 size=464 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_426eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426eb0ULL || rel >= 0x427080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427080 size=592 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_427080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427080ULL || rel >= 0x4272d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004272d0 size=192 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4272d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4272d0ULL || rel >= 0x427390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427390 size=320 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_427390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427390ULL || rel >= 0x4274d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004274d0 size=448 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4274d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4274d0ULL || rel >= 0x427690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427690 size=576 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_427690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427690ULL || rel >= 0x4278d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004278d0 size=160 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4278d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4278d0ULL || rel >= 0x427970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427970 size=128 callers=5 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_427970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427970ULL || rel >= 0x4279f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004279f0 size=128 callers=12 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_4279f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4279f0ULL || rel >= 0x427a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427a70 size=160 callers=5 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_427a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427a70ULL || rel >= 0x427b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427b10 size=320 callers=5 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_427b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427b10ULL || rel >= 0x427c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427c50 size=448 callers=5 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_427c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427c50ULL || rel >= 0x427e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427e10 size=576 callers=5 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_427e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427e10ULL || rel >= 0x428050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428050 size=192 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_428050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428050ULL || rel >= 0x428110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428110 size=320 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_428110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428110ULL || rel >= 0x428250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428250 size=448 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_428250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428250ULL || rel >= 0x428410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428410 size=576 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_428410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428410ULL || rel >= 0x428650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428650 size=160 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_428650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428650ULL || rel >= 0x4286f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004286f0 size=160 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_4286f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4286f0ULL || rel >= 0x428790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428790 size=64 callers=4 calls=1
   calls: sub_426860
*/
void sub_428790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428790ULL || rel >= 0x4287d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004287d0 size=96 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_4287d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4287d0ULL || rel >= 0x428830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428830 size=128 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_428830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428830ULL || rel >= 0x4288b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004288b0 size=176 callers=7 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_4288b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4288b0ULL || rel >= 0x428960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428960 size=160 callers=7 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_428960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428960ULL || rel >= 0x428a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428a00 size=96 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_428a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428a00ULL || rel >= 0x428a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428a60 size=16 callers=3 calls=0
*/
void sub_428a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428a60ULL || rel >= 0x428a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428a70 size=192 callers=9 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_428a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428a70ULL || rel >= 0x428b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428b30 size=320 callers=9 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_428b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428b30ULL || rel >= 0x428c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428c70 size=448 callers=7 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_428c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428c70ULL || rel >= 0x428e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428e30 size=576 callers=7 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_428e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428e30ULL || rel >= 0x429070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429070 size=128 callers=11 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_429070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429070ULL || rel >= 0x4290f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004290f0 size=208 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4290f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4290f0ULL || rel >= 0x4291c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004291c0 size=208 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4291c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4291c0ULL || rel >= 0x429290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429290 size=96 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_429290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429290ULL || rel >= 0x4292f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004292f0 size=336 callers=2 calls=3
   calls: atomicCompSwap, sub_2fade0, sub_426860
*/
void sub_4292f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4292f0ULL || rel >= 0x429440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429440 size=352 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_429440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429440ULL || rel >= 0x4295a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004295a0 size=384 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4295a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4295a0ULL || rel >= 0x429720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429720 size=432 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_429720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429720ULL || rel >= 0x4298d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004298d0 size=400 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4298d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4298d0ULL || rel >= 0x429a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429a60 size=368 callers=4 calls=3
   calls: atomicCompSwap, sub_2fade0, sub_426860
*/
void sub_429a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429a60ULL || rel >= 0x429bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429bd0 size=448 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_429bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429bd0ULL || rel >= 0x429d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429d90 size=416 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_429d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429d90ULL || rel >= 0x429f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429f30 size=400 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_429f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429f30ULL || rel >= 0x42a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042a0c0 size=448 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42a0c0ULL || rel >= 0x42a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042a280 size=432 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42a280ULL || rel >= 0x42a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042a430 size=384 callers=2 calls=3
   calls: atomicCompSwap, sub_2fade0, sub_426860
*/
void sub_42a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42a430ULL || rel >= 0x42a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042a5b0 size=480 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42a5b0ULL || rel >= 0x42a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042a790 size=448 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42a790ULL || rel >= 0x42a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042a950 size=400 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42a950ULL || rel >= 0x42aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042aae0 size=496 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42aae0ULL || rel >= 0x42acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042acd0 size=464 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42acd0ULL || rel >= 0x42aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042aea0 size=432 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42aea0ULL || rel >= 0x42b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042b050 size=688 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42b050ULL || rel >= 0x42b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042b300 size=432 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42b300ULL || rel >= 0x42b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042b4b0 size=400 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42b4b0ULL || rel >= 0x42b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042b640 size=400 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42b640ULL || rel >= 0x42b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042b7d0 size=384 callers=4 calls=3
   calls: atomicCompSwap, sub_2fade0, sub_426860
*/
void sub_42b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42b7d0ULL || rel >= 0x42b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042b950 size=448 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42b950ULL || rel >= 0x42bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042bb10 size=432 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42bb10ULL || rel >= 0x42bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042bcc0 size=416 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42bcc0ULL || rel >= 0x42be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042be60 size=400 callers=4 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42be60ULL || rel >= 0x42bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042bff0 size=480 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42bff0ULL || rel >= 0x42c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c1d0 size=448 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c1d0ULL || rel >= 0x42c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c390 size=448 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c390ULL || rel >= 0x42c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c550 size=496 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c550ULL || rel >= 0x42c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c740 size=480 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42c740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c740ULL || rel >= 0x42c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c920 size=464 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c920ULL || rel >= 0x42caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042caf0 size=496 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42caf0ULL || rel >= 0x42cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042cce0 size=432 callers=2 calls=3
   calls: atomicCompSwap, sub_2fade0, sub_426860
*/
void sub_42cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42cce0ULL || rel >= 0x42ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042ce90 size=448 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42ce90ULL || rel >= 0x42d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042d050 size=480 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42d050ULL || rel >= 0x42d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042d230 size=384 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42d230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42d230ULL || rel >= 0x42d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042d3b0 size=368 callers=2 calls=3
   calls: atomicCompSwap, sub_2fade0, sub_426860
*/
void sub_42d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42d3b0ULL || rel >= 0x42d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042d520 size=384 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42d520ULL || rel >= 0x42d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042d6a0 size=416 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42d6a0ULL || rel >= 0x42d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042d840 size=432 callers=2 calls=3
   calls: atomicCompSwap, sub_2fade0, sub_426860
*/
void sub_42d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42d840ULL || rel >= 0x42d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042d9f0 size=416 callers=2 calls=3
   calls: atomicCompSwap, sub_2fade0, sub_426860
*/
void sub_42d9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42d9f0ULL || rel >= 0x42db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042db90 size=448 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42db90ULL || rel >= 0x42dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042dd50 size=432 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42dd50ULL || rel >= 0x42df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042df00 size=464 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42df00ULL || rel >= 0x42e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042e0d0 size=1264 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42e0d0ULL || rel >= 0x42e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042e5c0 size=1248 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42e5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42e5c0ULL || rel >= 0x42eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042eaa0 size=1296 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42eaa0ULL || rel >= 0x42efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042efb0 size=1264 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42efb0ULL || rel >= 0x42f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042f4a0 size=1312 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_42f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42f4a0ULL || rel >= 0x42f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042f9c0 size=352 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_42f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42f9c0ULL || rel >= 0x42fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042fb20 size=400 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_42fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42fb20ULL || rel >= 0x42fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042fcb0 size=432 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_42fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42fcb0ULL || rel >= 0x42fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042fe60 size=432 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_42fe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42fe60ULL || rel >= 0x430010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430010 size=496 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_430010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430010ULL || rel >= 0x430200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430200 size=464 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_430200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430200ULL || rel >= 0x4303d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004303d0 size=432 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4303d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4303d0ULL || rel >= 0x430580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430580 size=368 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_430580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430580ULL || rel >= 0x4306f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004306f0 size=368 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4306f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4306f0ULL || rel >= 0x430860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430860 size=544 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_430860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430860ULL || rel >= 0x430a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430a80 size=480 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_430a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430a80ULL || rel >= 0x430c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430c60 size=416 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_430c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430c60ULL || rel >= 0x430e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430e00 size=416 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_430e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430e00ULL || rel >= 0x430fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430fa0 size=496 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_430fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430fa0ULL || rel >= 0x431190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431190 size=480 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_431190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431190ULL || rel >= 0x431370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431370 size=512 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_431370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431370ULL || rel >= 0x431570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431570 size=512 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_431570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431570ULL || rel >= 0x431770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431770 size=528 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_431770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431770ULL || rel >= 0x431980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431980 size=544 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_431980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431980ULL || rel >= 0x431ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431ba0 size=576 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_431ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431ba0ULL || rel >= 0x431de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431de0 size=560 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_431de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431de0ULL || rel >= 0x432010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432010 size=608 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_432010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432010ULL || rel >= 0x432270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432270 size=592 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_432270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432270ULL || rel >= 0x4324c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004324c0 size=496 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4324c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4324c0ULL || rel >= 0x4326b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004326b0 size=528 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4326b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4326b0ULL || rel >= 0x4328c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004328c0 size=592 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4328c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4328c0ULL || rel >= 0x432b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432b10 size=560 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_432b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432b10ULL || rel >= 0x432d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432d40 size=400 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_432d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432d40ULL || rel >= 0x432ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432ed0 size=448 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_432ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432ed0ULL || rel >= 0x433090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433090 size=448 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_433090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433090ULL || rel >= 0x433250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433250 size=480 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_433250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433250ULL || rel >= 0x433430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433430 size=528 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_433430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433430ULL || rel >= 0x433640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433640 size=496 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_433640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433640ULL || rel >= 0x433830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433830 size=464 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_433830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433830ULL || rel >= 0x433a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433a00 size=576 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_433a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433a00ULL || rel >= 0x433c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433c40 size=512 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_433c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433c40ULL || rel >= 0x433e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433e40 size=544 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_433e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433e40ULL || rel >= 0x434060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434060 size=560 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_434060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434060ULL || rel >= 0x434290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434290 size=576 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_434290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434290ULL || rel >= 0x4344d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004344d0 size=576 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4344d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4344d0ULL || rel >= 0x434710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434710 size=624 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_434710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434710ULL || rel >= 0x434980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434980 size=608 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_434980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434980ULL || rel >= 0x434be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434be0 size=656 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_434be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434be0ULL || rel >= 0x434e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434e70 size=640 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_434e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434e70ULL || rel >= 0x4350f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004350f0 size=640 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4350f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4350f0ULL || rel >= 0x435370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435370 size=416 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_435370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435370ULL || rel >= 0x435510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435510 size=384 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_435510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435510ULL || rel >= 0x435690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435690 size=352 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_435690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435690ULL || rel >= 0x4357f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004357f0 size=496 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4357f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4357f0ULL || rel >= 0x4359e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004359e0 size=400 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4359e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4359e0ULL || rel >= 0x435b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435b70 size=464 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_435b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435b70ULL || rel >= 0x435d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435d40 size=432 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_435d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435d40ULL || rel >= 0x435ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435ef0 size=400 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_435ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435ef0ULL || rel >= 0x436080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436080 size=464 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_436080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436080ULL || rel >= 0x436250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436250 size=432 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_436250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436250ULL || rel >= 0x436400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436400 size=544 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_436400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436400ULL || rel >= 0x436620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436620 size=512 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_436620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436620ULL || rel >= 0x436820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436820 size=480 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_436820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436820ULL || rel >= 0x436a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436a00 size=528 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_436a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436a00ULL || rel >= 0x436c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436c10 size=496 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_436c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436c10ULL || rel >= 0x436e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436e00 size=544 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_436e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436e00ULL || rel >= 0x437020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437020 size=512 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_437020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437020ULL || rel >= 0x437220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437220 size=544 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_437220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437220ULL || rel >= 0x437440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437440 size=576 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_437440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437440ULL || rel >= 0x437680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437680 size=544 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_437680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437680ULL || rel >= 0x4378a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004378a0 size=576 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4378a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4378a0ULL || rel >= 0x437ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437ae0 size=560 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_437ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437ae0ULL || rel >= 0x437d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437d10 size=592 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_437d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437d10ULL || rel >= 0x437f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437f60 size=624 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_437f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437f60ULL || rel >= 0x4381d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004381d0 size=480 callers=2 calls=3
   calls: atomicCompSwap, sub_2fade0, sub_426860
*/
void sub_4381d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4381d0ULL || rel >= 0x4383b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004383b0 size=496 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4383b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4383b0ULL || rel >= 0x4385a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004385a0 size=528 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4385a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4385a0ULL || rel >= 0x4387b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004387b0 size=64 callers=197 calls=1
   calls: sub_302e20
*/
void sub_4387b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4387b0ULL || rel >= 0x4387f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004387f0 size=640 callers=4 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_4387f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4387f0ULL || rel >= 0x438a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438a70 size=480 callers=4 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_438a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438a70ULL || rel >= 0x438c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438c50 size=608 callers=4 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_438c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438c50ULL || rel >= 0x438eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438eb0 size=592 callers=4 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_438eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438eb0ULL || rel >= 0x439100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439100 size=544 callers=7 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_439100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439100ULL || rel >= 0x439320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439320 size=384 callers=7 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_439320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439320ULL || rel >= 0x4394a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004394a0 size=512 callers=7 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_4394a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4394a0ULL || rel >= 0x4396a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004396a0 size=480 callers=7 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_4396a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4396a0ULL || rel >= 0x439880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439880 size=544 callers=2 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_439880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439880ULL || rel >= 0x439aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439aa0 size=384 callers=2 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_439aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439aa0ULL || rel >= 0x439c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439c20 size=512 callers=2 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_439c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439c20ULL || rel >= 0x439e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439e20 size=480 callers=2 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860, sub_4387b0
*/
void sub_439e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439e20ULL || rel >= 0x43a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a000 size=240 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_43a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a000ULL || rel >= 0x43a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a0f0 size=16 callers=5 calls=0
*/
void sub_43a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a0f0ULL || rel >= 0x43a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a100 size=160 callers=12 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_43a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a100ULL || rel >= 0x43a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a1a0 size=720 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a1a0ULL || rel >= 0x43a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a470 size=1232 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a470ULL || rel >= 0x43a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a940 size=1616 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a940ULL || rel >= 0x43af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043af90 size=2000 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43af90ULL || rel >= 0x43b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b760 size=672 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b760ULL || rel >= 0x43ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ba00 size=496 callers=3 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ba00ULL || rel >= 0x43bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bbf0 size=1184 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bbf0ULL || rel >= 0x43c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c090 size=1008 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c090ULL || rel >= 0x43c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c480 size=1536 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c480ULL || rel >= 0x43ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ca80 size=1360 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ca80ULL || rel >= 0x43cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cfd0 size=1904 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cfd0ULL || rel >= 0x43d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d740 size=1728 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d740ULL || rel >= 0x43de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043de00 size=688 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43de00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43de00ULL || rel >= 0x43e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e0b0 size=512 callers=3 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e0b0ULL || rel >= 0x43e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e2b0 size=1216 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e2b0ULL || rel >= 0x43e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e770 size=1040 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e770ULL || rel >= 0x43eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043eb80 size=1600 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43eb80ULL || rel >= 0x43f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f1c0 size=1424 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f1c0ULL || rel >= 0x43f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f750 size=1984 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f750ULL || rel >= 0x43ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ff10 size=1808 callers=3 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_43ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ff10ULL || rel >= 0x440620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440620 size=224 callers=7 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_440620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440620ULL || rel >= 0x440700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440700 size=336 callers=3 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_440700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440700ULL || rel >= 0x440850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440850 size=304 callers=5 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_440850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440850ULL || rel >= 0x440980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440980 size=288 callers=7 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_440980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440980ULL || rel >= 0x440aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440aa0 size=336 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_440aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440aa0ULL || rel >= 0x440bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440bf0 size=256 callers=7 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_440bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440bf0ULL || rel >= 0x440cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440cf0 size=304 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_440cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440cf0ULL || rel >= 0x440e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440e20 size=192 callers=3 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_440e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440e20ULL || rel >= 0x440ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440ee0 size=272 callers=3 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_440ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440ee0ULL || rel >= 0x440ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440ff0 size=256 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_440ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440ff0ULL || rel >= 0x4410f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004410f0 size=176 callers=26 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_4410f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4410f0ULL || rel >= 0x4411a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004411a0 size=2496 callers=6 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_4411a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4411a0ULL || rel >= 0x441b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441b60 size=2800 callers=6 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_426860
*/
void sub_441b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441b60ULL || rel >= 0x442650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442650 size=192 callers=13 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_442650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442650ULL || rel >= 0x442710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442710 size=320 callers=6 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_442710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442710ULL || rel >= 0x442850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442850 size=208 callers=4 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_442850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442850ULL || rel >= 0x442920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442920 size=448 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_442920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442920ULL || rel >= 0x442ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442ae0 size=224 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_442ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442ae0ULL || rel >= 0x442bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442bc0 size=448 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_442bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442bc0ULL || rel >= 0x442d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442d80 size=448 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_442d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442d80ULL || rel >= 0x442f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442f40 size=448 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_442f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442f40ULL || rel >= 0x443100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443100 size=288 callers=6 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_443100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443100ULL || rel >= 0x443220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443220 size=288 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_426860, sub_4387b0
*/
void sub_443220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443220ULL || rel >= 0x443340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443340 size=416 callers=5 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_443340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443340ULL || rel >= 0x4434e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004434e0 size=416 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4434e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4434e0ULL || rel >= 0x443680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443680 size=256 callers=8 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_443680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443680ULL || rel >= 0x443780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443780 size=368 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_443780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443780ULL || rel >= 0x4438f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004438f0 size=368 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4438f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4438f0ULL || rel >= 0x443a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443a60 size=272 callers=7 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_443a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443a60ULL || rel >= 0x443b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443b70 size=416 callers=4 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_443b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443b70ULL || rel >= 0x443d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443d10 size=240 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_443d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443d10ULL || rel >= 0x443e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443e00 size=336 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_443e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443e00ULL || rel >= 0x443f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443f50 size=208 callers=6 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_443f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443f50ULL || rel >= 0x444020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444020 size=272 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_444020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444020ULL || rel >= 0x444130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444130 size=416 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_444130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444130ULL || rel >= 0x4442d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004442d0 size=384 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4442d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4442d0ULL || rel >= 0x444450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444450 size=288 callers=5 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_444450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444450ULL || rel >= 0x444570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444570 size=416 callers=3 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_444570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444570ULL || rel >= 0x444710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444710 size=336 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_444710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444710ULL || rel >= 0x444860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444860 size=416 callers=6 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_444860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444860ULL || rel >= 0x444a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444a00 size=304 callers=8 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_444a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444a00ULL || rel >= 0x444b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444b30 size=272 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_444b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444b30ULL || rel >= 0x444c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444c40 size=368 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_444c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444c40ULL || rel >= 0x444db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444db0 size=320 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_444db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444db0ULL || rel >= 0x444ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444ef0 size=304 callers=5 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_444ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444ef0ULL || rel >= 0x445020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445020 size=224 callers=7 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_445020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445020ULL || rel >= 0x445100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445100 size=192 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_445100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445100ULL || rel >= 0x4451c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004451c0 size=288 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_4451c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4451c0ULL || rel >= 0x4452e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004452e0 size=240 callers=13 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_4452e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4452e0ULL || rel >= 0x4453d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004453d0 size=336 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4453d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4453d0ULL || rel >= 0x445520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445520 size=336 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_445520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445520ULL || rel >= 0x445670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445670 size=240 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_445670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445670ULL || rel >= 0x445760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445760 size=208 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_445760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445760ULL || rel >= 0x445830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445830 size=272 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_445830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445830ULL || rel >= 0x445940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445940 size=256 callers=7 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_445940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445940ULL || rel >= 0x445a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445a40 size=320 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_445a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445a40ULL || rel >= 0x445b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445b80 size=352 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_445b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445b80ULL || rel >= 0x445ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445ce0 size=368 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_445ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445ce0ULL || rel >= 0x445e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445e50 size=272 callers=3 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_445e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445e50ULL || rel >= 0x445f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445f60 size=496 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_445f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445f60ULL || rel >= 0x446150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446150 size=496 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_446150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446150ULL || rel >= 0x446340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446340 size=336 callers=4 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_446340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446340ULL || rel >= 0x446490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446490 size=464 callers=3 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_446490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446490ULL || rel >= 0x446660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446660 size=464 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_446660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446660ULL || rel >= 0x446830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446830 size=416 callers=4 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_446830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446830ULL || rel >= 0x4469d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004469d0 size=288 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4469d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4469d0ULL || rel >= 0x446af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446af0 size=352 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_446af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446af0ULL || rel >= 0x446c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446c50 size=432 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_446c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446c50ULL || rel >= 0x446e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446e00 size=464 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_446e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446e00ULL || rel >= 0x446fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446fd0 size=176 callers=4 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_446fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446fd0ULL || rel >= 0x447080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447080 size=256 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447080ULL || rel >= 0x447180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447180 size=528 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447180ULL || rel >= 0x447390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447390 size=240 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447390ULL || rel >= 0x447480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447480 size=128 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_447480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447480ULL || rel >= 0x447500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447500 size=288 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447500ULL || rel >= 0x447620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447620 size=256 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447620ULL || rel >= 0x447720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447720 size=336 callers=2 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_426860, sub_4387b0
*/
void sub_447720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447720ULL || rel >= 0x447870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447870 size=176 callers=2 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_447870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447870ULL || rel >= 0x447920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447920 size=256 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447920ULL || rel >= 0x447a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447a20 size=272 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447a20ULL || rel >= 0x447b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447b30 size=368 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447b30ULL || rel >= 0x447ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447ca0 size=304 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447ca0ULL || rel >= 0x447dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447dd0 size=240 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447dd0ULL || rel >= 0x447ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447ec0 size=304 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_447ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447ec0ULL || rel >= 0x447ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447ff0 size=176 callers=4 calls=2
   calls: atomicCompSwap, sub_426860
*/
void sub_447ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447ff0ULL || rel >= 0x4480a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004480a0 size=352 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4480a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4480a0ULL || rel >= 0x448200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448200 size=224 callers=2 calls=3
   calls: atomicCompSwap, sub_426860, sub_4387b0
*/
void sub_448200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448200ULL || rel >= 0x4482e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004482e0 size=448 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4482e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4482e0ULL || rel >= 0x4484a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004484a0 size=416 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_4484a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4484a0ULL || rel >= 0x448640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448640 size=336 callers=2 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_448640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448640ULL || rel >= 0x448790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448790 size=304 callers=3 calls=3
   calls: atomicCompSwap, sub_2fab10, sub_426860
*/
void sub_448790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448790ULL || rel >= 0x4488c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

