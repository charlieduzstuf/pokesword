/* main functions 003b3b50..003d37d0 (23 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003b3b50 size=16 callers=0 calls=0
*/
void sub_3b3b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3b50ULL || rel >= 0x3b3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3b60 size=96 callers=1 calls=0
*/
void sub_3b3b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3b60ULL || rel >= 0x3b3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3bc0 size=256 callers=2 calls=0
*/
void sub_3b3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3bc0ULL || rel >= 0x3b3cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3cc0 size=16 callers=0 calls=0
*/
void sub_3b3cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3cc0ULL || rel >= 0x3b3cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3cd0 size=16 callers=0 calls=0
*/
void sub_3b3cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3cd0ULL || rel >= 0x3b3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3ce0 size=96 callers=1 calls=0
*/
void sub_3b3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3ce0ULL || rel >= 0x3b3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3d40 size=16 callers=1 calls=0
*/
void sub_3b3d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3d40ULL || rel >= 0x3b3d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3d50 size=208 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3b3d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3d50ULL || rel >= 0x3b3e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3e20 size=544 callers=1 calls=3
   calls: sub_3047c0, sub_3b4190, sub_3b42a0
*/
void sub_3b3e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3e20ULL || rel >= 0x3b4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4040 size=336 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3b4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4040ULL || rel >= 0x3b4190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4190 size=272 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3b4190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4190ULL || rel >= 0x3b42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b42a0 size=272 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3b42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b42a0ULL || rel >= 0x3b43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b43b0 size=672 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3b43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b43b0ULL || rel >= 0x3b4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4650 size=128 callers=1 calls=0
*/
void sub_3b4650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4650ULL || rel >= 0x3b46d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b46d0 size=112 callers=1 calls=0
*/
void sub_3b46d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b46d0ULL || rel >= 0x3b4740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4740 size=192 callers=2 calls=0
*/
void sub_3b4740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4740ULL || rel >= 0x3b4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4800 size=1088 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3b4800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4800ULL || rel >= 0x3b4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b4c40 size=1248 callers=2 calls=8
   calls: sub_3045e0, sub_3047c0, sub_3b3b60, sub_3b3bc0, sub_3b5120, sub_3bdd90, sub_3be1a0, sub_3be290
*/
void sub_3b4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b4c40ULL || rel >= 0x3b5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b5120 size=352 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3b5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b5120ULL || rel >= 0x3b5280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b5280 size=96 callers=2 calls=0
*/
void sub_3b5280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b5280ULL || rel >= 0x3b52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b52e0 size=224 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_3b52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b52e0ULL || rel >= 0x3b53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b53c0 size=288 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3b53c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b53c0ULL || rel >= 0x3b54e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b54e0 size=192 callers=3 calls=1
   calls: sub_3045e0
*/
void sub_3b54e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b54e0ULL || rel >= 0x3b55a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b55a0 size=832 callers=5 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3b55a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b55a0ULL || rel >= 0x3b58e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b58e0 size=192 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_3b58e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b58e0ULL || rel >= 0x3b59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b59a0 size=224 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3b59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b59a0ULL || rel >= 0x3b5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b5a80 size=176 callers=3 calls=0
*/
void sub_3b5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b5a80ULL || rel >= 0x3b5b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b5b30 size=784 callers=1 calls=3
   calls: sub_3045e0, sub_3b5e40, sub_3b6120
*/
void sub_3b5b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b5b30ULL || rel >= 0x3b5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b5e40 size=736 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3b5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b5e40ULL || rel >= 0x3b6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b6120 size=1120 callers=3 calls=4
   calls: sub_3047c0, sub_35f9a0, sub_3b6ee0, sub_3b71c0
*/
void sub_3b6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6120ULL || rel >= 0x3b6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b6580 size=672 callers=1 calls=3
   calls: sub_3047c0, sub_3b6820, sub_3b6a70
*/
void sub_3b6580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6580ULL || rel >= 0x3b6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b6820 size=592 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_3b6820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6820ULL || rel >= 0x3b6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b6a70 size=176 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_3b6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6a70ULL || rel >= 0x3b6b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b6b20 size=480 callers=2 calls=3
   calls: sub_3047c0, sub_3b6820, sub_3b6a70
*/
void sub_3b6b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6b20ULL || rel >= 0x3b6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b6d00 size=480 callers=0 calls=1
   calls: sub_3b6120
*/
void sub_3b6d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6d00ULL || rel >= 0x3b6ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b6ee0 size=736 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3b6ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6ee0ULL || rel >= 0x3b71c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b71c0 size=736 callers=1 calls=4
   calls: sub_3045e0, sub_3b74a0, sub_3b7880, sub_3b7900
*/
void sub_3b71c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b71c0ULL || rel >= 0x3b74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b74a0 size=640 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3b74a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b74a0ULL || rel >= 0x3b7720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7720 size=64 callers=0 calls=1
   calls: sub_3b78c0
*/
void sub_3b7720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7720ULL || rel >= 0x3b7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7760 size=64 callers=0 calls=2
   calls: sub_3b78a0, sub_3b78c0
*/
void sub_3b7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7760ULL || rel >= 0x3b77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b77a0 size=32 callers=0 calls=0
*/
void sub_3b77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b77a0ULL || rel >= 0x3b77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b77c0 size=96 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3b77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b77c0ULL || rel >= 0x3b7820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7820 size=96 callers=0 calls=1
   calls: sub_1c0
*/
void sub_3b7820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7820ULL || rel >= 0x3b7880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7880 size=32 callers=6 calls=0
*/
void sub_3b7880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7880ULL || rel >= 0x3b78a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b78a0 size=16 callers=10 calls=0
*/
void sub_3b78a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b78a0ULL || rel >= 0x3b78b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b78b0 size=16 callers=0 calls=0
*/
void sub_3b78b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b78b0ULL || rel >= 0x3b78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b78c0 size=64 callers=8 calls=1
   calls: sub_3bb8e0
*/
void sub_3b78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b78c0ULL || rel >= 0x3b7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7900 size=192 callers=4 calls=2
   calls: sub_3b53c0, sub_3bb8e0
*/
void sub_3b7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7900ULL || rel >= 0x3b79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b79c0 size=64 callers=4 calls=0
*/
void sub_3b79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b79c0ULL || rel >= 0x3b7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7a00 size=96 callers=0 calls=2
   calls: sub_3b78a0, sub_3b7a60
*/
void sub_3b7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7a00ULL || rel >= 0x3b7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7a60 size=592 callers=6 calls=2
   calls: sub_3047c0, sub_3b78c0
*/
void sub_3b7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7a60ULL || rel >= 0x3b7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7cb0 size=112 callers=0 calls=2
   calls: sub_3b78a0, sub_3b7a60
*/
void sub_3b7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7cb0ULL || rel >= 0x3b7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7d20 size=96 callers=0 calls=2
   calls: sub_3b78a0, sub_3b7a60
*/
void sub_3b7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7d20ULL || rel >= 0x3b7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7d80 size=112 callers=0 calls=3
   calls: sub_379eb0, sub_3b78a0, sub_3b7a60
*/
void sub_3b7d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7d80ULL || rel >= 0x3b7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7df0 size=112 callers=0 calls=3
   calls: sub_379eb0, sub_3b78a0, sub_3b7a60
*/
void sub_3b7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7df0ULL || rel >= 0x3b7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7e60 size=112 callers=0 calls=3
   calls: sub_379eb0, sub_3b78a0, sub_3b7a60
*/
void sub_3b7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7e60ULL || rel >= 0x3b7ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7ed0 size=1184 callers=1 calls=5
   calls: sub_3045e0, sub_349be0, sub_385430, sub_3b7900, sub_3b8370
*/
void sub_3b7ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7ed0ULL || rel >= 0x3b8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8370 size=400 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3b8370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8370ULL || rel >= 0x3b8500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8500 size=784 callers=0 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3351b0, sub_3b79c0
*/
void sub_3b8500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8500ULL || rel >= 0x3b8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8810 size=16 callers=0 calls=0
*/
void sub_3b8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8810ULL || rel >= 0x3b8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8820 size=48 callers=0 calls=1
   calls: sub_3b8850
*/
void sub_3b8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8820ULL || rel >= 0x3b8850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8850 size=400 callers=1 calls=3
   calls: sub_3047c0, sub_331150, sub_38fcb0
*/
void sub_3b8850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8850ULL || rel >= 0x3b89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b89e0 size=192 callers=1 calls=4
   calls: sub_3045e0, sub_379e60, sub_379f40, sub_3b7880
*/
void sub_3b89e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b89e0ULL || rel >= 0x3b8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8aa0 size=2064 callers=0 calls=22
   calls: sub_3045e0, sub_3047c0, sub_331150, sub_3351b0, sub_35b580, sub_35b5d0, sub_365390, sub_379d20, sub_379db0, sub_379e00, sub_37a260, sub_37a460
   ... +10 more
*/
void sub_3b8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8aa0ULL || rel >= 0x3b92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b92b0 size=592 callers=0 calls=1
   calls: sub_3b9500
*/
void sub_3b92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b92b0ULL || rel >= 0x3b9500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9500 size=672 callers=2 calls=4
   calls: sub_3047c0, sub_331150, sub_38fcb0, sub_399200
*/
void sub_3b9500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9500ULL || rel >= 0x3b97a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b97a0 size=256 callers=0 calls=1
   calls: sub_3b9500
*/
void sub_3b97a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b97a0ULL || rel >= 0x3b98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b98a0 size=576 callers=0 calls=0
*/
void sub_3b98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b98a0ULL || rel >= 0x3b9ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9ae0 size=128 callers=0 calls=1
   calls: sub_3b9b60
*/
void sub_3b9ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9ae0ULL || rel >= 0x3b9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9b60 size=352 callers=2 calls=4
   calls: sub_3045e0, sub_3047c0, sub_399200, sub_3ba2a0
*/
void sub_3b9b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9b60ULL || rel >= 0x3b9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9cc0 size=128 callers=0 calls=1
   calls: sub_3b9b60
*/
void sub_3b9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9cc0ULL || rel >= 0x3b9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9d40 size=224 callers=0 calls=2
   calls: sub_382d00, sub_382d80
*/
void sub_3b9d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9d40ULL || rel >= 0x3b9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9e20 size=224 callers=0 calls=2
   calls: sub_382d00, sub_382d80
*/
void sub_3b9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9e20ULL || rel >= 0x3b9f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9f00 size=624 callers=0 calls=4
   calls: sub_382d00, sub_382d80, sub_3baa80, sub_3baab0
*/
void sub_3b9f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9f00ULL || rel >= 0x3ba170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba170 size=304 callers=0 calls=2
   calls: sub_382d80, sub_3baa80
*/
void sub_3ba170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba170ULL || rel >= 0x3ba2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba2a0 size=640 callers=2 calls=5
   calls: sub_398e20, sub_398ec0, sub_399200, sub_3ba520, sub_3ba6a0
*/
void sub_3ba2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba2a0ULL || rel >= 0x3ba520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba520 size=384 callers=1 calls=1
   calls: sub_3ba930
*/
void sub_3ba520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba520ULL || rel >= 0x3ba6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba6a0 size=656 callers=2 calls=6
   calls: sub_3047c0, sub_331150, sub_3351b0, sub_37f560, sub_380dd0, sub_38e5c0
*/
void sub_3ba6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba6a0ULL || rel >= 0x3ba930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba930 size=272 callers=2 calls=2
   calls: sub_3351b0, sub_339930
*/
void sub_3ba930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba930ULL || rel >= 0x3baa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003baa40 size=32 callers=0 calls=0
*/
void sub_3baa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3baa40ULL || rel >= 0x3baa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003baa60 size=16 callers=0 calls=0
*/
void sub_3baa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3baa60ULL || rel >= 0x3baa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003baa70 size=16 callers=0 calls=0
*/
void sub_3baa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3baa70ULL || rel >= 0x3baa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003baa80 size=48 callers=4 calls=1
   calls: sub_3b54e0
*/
void sub_3baa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3baa80ULL || rel >= 0x3baab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003baab0 size=128 callers=2 calls=1
   calls: sub_3b54e0
*/
void sub_3baab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3baab0ULL || rel >= 0x3bab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bab30 size=144 callers=1 calls=1
   calls: sub_3b54e0
*/
void sub_3bab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bab30ULL || rel >= 0x3babc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003babc0 size=32 callers=1 calls=0
*/
void sub_3babc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3babc0ULL || rel >= 0x3babe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003babe0 size=16 callers=1 calls=0
*/
void sub_3babe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3babe0ULL || rel >= 0x3babf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003babf0 size=96 callers=1 calls=2
   calls: sub_3bac50, sub_3bada0
*/
void sub_3babf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3babf0ULL || rel >= 0x3bac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bac50 size=336 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3bac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bac50ULL || rel >= 0x3bada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bada0 size=336 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3bada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bada0ULL || rel >= 0x3baef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003baef0 size=832 callers=1 calls=2
   calls: sub_3047c0, sub_3bc040
*/
void sub_3baef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3baef0ULL || rel >= 0x3bb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb230 size=80 callers=0 calls=1
   calls: sub_3bb6a0
*/
void sub_3bb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb230ULL || rel >= 0x3bb280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb280 size=1056 callers=1 calls=5
   calls: sub_3045e0, sub_3047c0, sub_3bb7d0, sub_3bc420, sub_3bc7c0
*/
void sub_3bb280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb280ULL || rel >= 0x3bb6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb6a0 size=304 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3bb6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb6a0ULL || rel >= 0x3bb7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb7d0 size=272 callers=4 calls=2
   calls: sub_3045e0, sub_3bcaa0
*/
void sub_3bb7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb7d0ULL || rel >= 0x3bb8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb8e0 size=96 callers=2 calls=2
   calls: sub_3bb6a0, sub_3bb940
*/
void sub_3bb8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb8e0ULL || rel >= 0x3bb940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb940 size=464 callers=2 calls=0
*/
void sub_3bb940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb940ULL || rel >= 0x3bbb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bbb10 size=192 callers=1 calls=3
   calls: sub_3047c0, sub_39b8b0, sub_3bb7d0
*/
void sub_3bbb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bbb10ULL || rel >= 0x3bbbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bbbd0 size=672 callers=0 calls=3
   calls: sub_3045e0, sub_3047c0, sub_39b840
*/
void sub_3bbbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bbbd0ULL || rel >= 0x3bbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bbe70 size=272 callers=1 calls=2
   calls: sub_3657c0, sub_39d550
*/
void sub_3bbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bbe70ULL || rel >= 0x3bbf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bbf80 size=192 callers=2 calls=1
   calls: sub_39a100
*/
void sub_3bbf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bbf80ULL || rel >= 0x3bc040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc040 size=336 callers=1 calls=4
   calls: sub_3047c0, sub_39a100, sub_39b8b0, sub_39f8e0
*/
void sub_3bc040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc040ULL || rel >= 0x3bc190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc190 size=240 callers=2 calls=1
   calls: sub_39c830
*/
void sub_3bc190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc190ULL || rel >= 0x3bc280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc280 size=208 callers=2 calls=0
*/
void sub_3bc280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc280ULL || rel >= 0x3bc350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc350 size=32 callers=4 calls=0
*/
void sub_3bc350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc350ULL || rel >= 0x3bc370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc370 size=176 callers=4 calls=2
   calls: sub_3bb280, sub_3bb940
*/
void sub_3bc370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc370ULL || rel >= 0x3bc420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc420 size=928 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3bc420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc420ULL || rel >= 0x3bc7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc7c0 size=736 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3bc7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc7c0ULL || rel >= 0x3bcaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcaa0 size=928 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3bcaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcaa0ULL || rel >= 0x3bce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bce40 size=112 callers=1 calls=1
   calls: sub_342920
*/
void sub_3bce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bce40ULL || rel >= 0x3bceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bceb0 size=64 callers=0 calls=0
*/
void sub_3bceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bceb0ULL || rel >= 0x3bcef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcef0 size=64 callers=0 calls=1
   calls: sub_342990
*/
void sub_3bcef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcef0ULL || rel >= 0x3bcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcf30 size=160 callers=0 calls=2
   calls: sub_3045e0, sub_342ab0
*/
void sub_3bcf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcf30ULL || rel >= 0x3bcfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcfd0 size=224 callers=0 calls=1
   calls: sub_673320
   ref: AK::BankManager
*/
void AK_BankManager(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcfd0ULL || rel >= 0x3bd0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd0b0 size=256 callers=0 calls=4
   calls: sub_3047c0, sub_341f80, sub_342af0, sub_3bd1b0
*/
void sub_3bd0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd0b0ULL || rel >= 0x3bd1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd1b0 size=272 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3bd1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd1b0ULL || rel >= 0x3bd2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd2c0 size=96 callers=0 calls=1
   calls: sub_3bd3a0
*/
void sub_3bd2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd2c0ULL || rel >= 0x3bd320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd320 size=128 callers=0 calls=1
   calls: sub_6733a0
*/
void sub_3bd320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd320ULL || rel >= 0x3bd3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd3a0 size=288 callers=1 calls=3
   calls: sub_3047c0, sub_341f80, sub_342ea0
*/
void sub_3bd3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd3a0ULL || rel >= 0x3bd4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd4c0 size=304 callers=0 calls=5
   calls: sub_3045e0, sub_341f80, sub_343eb0, sub_34d0c0, sub_34d280
*/
void sub_3bd4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd4c0ULL || rel >= 0x3bd5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd5f0 size=48 callers=0 calls=0
*/
void sub_3bd5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd5f0ULL || rel >= 0x3bd620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd620 size=112 callers=0 calls=0
*/
void sub_3bd620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd620ULL || rel >= 0x3bd690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd690 size=16 callers=0 calls=0
*/
void sub_3bd690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd690ULL || rel >= 0x3bd6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd6a0 size=16 callers=0 calls=0
*/
void sub_3bd6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd6a0ULL || rel >= 0x3bd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd6b0 size=48 callers=1 calls=0
*/
void sub_3bd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd6b0ULL || rel >= 0x3bd6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd6e0 size=16 callers=4 calls=0
*/
void sub_3bd6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd6e0ULL || rel >= 0x3bd6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd6f0 size=64 callers=4 calls=1
   calls: sub_3047c0
*/
void sub_3bd6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd6f0ULL || rel >= 0x3bd730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd730 size=96 callers=1 calls=0
*/
void sub_3bd730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd730ULL || rel >= 0x3bd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd790 size=48 callers=4 calls=0
*/
void sub_3bd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd790ULL || rel >= 0x3bd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd7c0 size=384 callers=3 calls=1
   calls: sub_32e950
*/
void sub_3bd7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd7c0ULL || rel >= 0x3bd940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd940 size=864 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3bd940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd940ULL || rel >= 0x3bdca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdca0 size=48 callers=1 calls=1
   calls: sub_3bdcd0
*/
void sub_3bdca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdca0ULL || rel >= 0x3bdcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdcd0 size=192 callers=1 calls=4
   calls: sub_3047c0, sub_3bd6e0, sub_3bd6f0, sub_3bd7c0
*/
void sub_3bdcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdcd0ULL || rel >= 0x3bdd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdd90 size=480 callers=11 calls=6
   calls: sub_3045e0, sub_3047c0, sub_3bd6b0, sub_3bd6e0, sub_3bd6f0, sub_3bd940
*/
void sub_3bdd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdd90ULL || rel >= 0x3bdf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdf70 size=80 callers=1 calls=0
*/
void sub_3bdf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdf70ULL || rel >= 0x3bdfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdfc0 size=80 callers=1 calls=0
*/
void sub_3bdfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdfc0ULL || rel >= 0x3be010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be010 size=384 callers=4 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3be010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be010ULL || rel >= 0x3be190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be190 size=16 callers=2 calls=0
*/
void sub_3be190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be190ULL || rel >= 0x3be1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be1a0 size=144 callers=31 calls=0
*/
void sub_3be1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be1a0ULL || rel >= 0x3be230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be230 size=48 callers=3 calls=0
*/
void sub_3be230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be230ULL || rel >= 0x3be260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be260 size=48 callers=1 calls=0
*/
void sub_3be260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be260ULL || rel >= 0x3be290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be290 size=736 callers=6 calls=1
   calls: sub_3bd730
*/
void sub_3be290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be290ULL || rel >= 0x3be570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be570 size=48 callers=1 calls=1
   calls: sub_3be5a0
*/
void sub_3be570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be570ULL || rel >= 0x3be5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be5a0 size=688 callers=1 calls=4
   calls: sub_3047c0, sub_3bd6e0, sub_3bd6f0, sub_3bd7c0
*/
void sub_3be5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be5a0ULL || rel >= 0x3be850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be850 size=160 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3be850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be850ULL || rel >= 0x3be8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be8f0 size=304 callers=1 calls=4
   calls: sub_3047c0, sub_3339a0, sub_367fe0, sub_3bea20
*/
void sub_3be8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be8f0ULL || rel >= 0x3bea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bea20 size=272 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3bea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bea20ULL || rel >= 0x3beb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003beb30 size=464 callers=2 calls=4
   calls: sub_32c040, sub_3694a0, sub_384650, sub_395920
*/
void sub_3beb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3beb30ULL || rel >= 0x3bed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bed00 size=208 callers=1 calls=2
   calls: sub_32c040, sub_3694a0
*/
void sub_3bed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bed00ULL || rel >= 0x3bedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bedd0 size=144 callers=1 calls=1
   calls: sub_3802b0
*/
void sub_3bedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bedd0ULL || rel >= 0x3bee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bee60 size=224 callers=1 calls=0
*/
void sub_3bee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bee60ULL || rel >= 0x3bef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bef40 size=176 callers=1 calls=0
*/
void sub_3bef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bef40ULL || rel >= 0x3beff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003beff0 size=1456 callers=1 calls=16
   calls: sub_3047c0, sub_34ea40, sub_379b00, sub_3802b0, sub_38be00, sub_38c2f0, sub_38d4a0, sub_38fae0, sub_3a7b70, sub_3a7bb0, sub_3a7c20, sub_3a7dc0
   ... +4 more
*/
void sub_3beff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3beff0ULL || rel >= 0x3bf5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bf5a0 size=96 callers=1 calls=1
   calls: sub_3bfa20
*/
void sub_3bf5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bf5a0ULL || rel >= 0x3bf600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bf600 size=64 callers=1 calls=0
*/
void sub_3bf600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bf600ULL || rel >= 0x3bf640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bf640 size=32 callers=1 calls=0
*/
void sub_3bf640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bf640ULL || rel >= 0x3bf660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bf660 size=32 callers=1 calls=0
*/
void sub_3bf660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bf660ULL || rel >= 0x3bf680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bf680 size=32 callers=1 calls=0
*/
void sub_3bf680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bf680ULL || rel >= 0x3bf6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bf6a0 size=896 callers=2 calls=2
   calls: sub_38d180, sub_38dfb0
*/
void sub_3bf6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bf6a0ULL || rel >= 0x3bfa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bfa20 size=304 callers=2 calls=2
   calls: sub_304950, sub_38dfb0
*/
void sub_3bfa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bfa20ULL || rel >= 0x3bfb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bfb50 size=400 callers=1 calls=2
   calls: sub_38d180, sub_38dfb0
*/
void sub_3bfb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bfb50ULL || rel >= 0x3bfce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bfce0 size=240 callers=0 calls=2
   calls: sub_3045e0, sub_3bfdd0
*/
void sub_3bfce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bfce0ULL || rel >= 0x3bfdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bfdd0 size=416 callers=2 calls=3
   calls: sub_3047c0, sub_367fe0, sub_38d330
*/
void sub_3bfdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bfdd0ULL || rel >= 0x3bff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bff70 size=160 callers=1 calls=4
   calls: sub_339930, sub_38c050, sub_38e160, sub_3c5960
*/
void sub_3bff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bff70ULL || rel >= 0x3c0010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0010 size=64 callers=1 calls=1
   calls: sub_3c0050
*/
void sub_3c0010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0010ULL || rel >= 0x3c0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0050 size=752 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3c0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0050ULL || rel >= 0x3c0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0340 size=240 callers=1 calls=0
*/
void sub_3c0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0340ULL || rel >= 0x3c0430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0430 size=208 callers=1 calls=2
   calls: sub_381b90, sub_38bc20
*/
void sub_3c0430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0430ULL || rel >= 0x3c0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0500 size=80 callers=0 calls=0
*/
void sub_3c0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0500ULL || rel >= 0x3c0550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0550 size=928 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3c08f0
*/
void sub_3c0550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0550ULL || rel >= 0x3c08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c08f0 size=320 callers=1 calls=0
*/
void sub_3c08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c08f0ULL || rel >= 0x3c0a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0a30 size=1024 callers=2 calls=0
*/
void sub_3c0a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0a30ULL || rel >= 0x3c0e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0e30 size=384 callers=3 calls=2
   calls: sub_3045e0, sub_3c0fb0
*/
void sub_3c0e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0e30ULL || rel >= 0x3c0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0fb0 size=272 callers=5 calls=1
   calls: sub_3047c0
*/
void sub_3c0fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0fb0ULL || rel >= 0x3c10c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c10c0 size=912 callers=3 calls=1
   calls: sub_3c0550
*/
void sub_3c10c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c10c0ULL || rel >= 0x3c1450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1450 size=272 callers=2 calls=1
   calls: sub_3c1560
*/
void sub_3c1450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1450ULL || rel >= 0x3c1560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1560 size=624 callers=2 calls=2
   calls: sub_3c0a30, sub_3c17d0
*/
void sub_3c1560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1560ULL || rel >= 0x3c17d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c17d0 size=432 callers=2 calls=0
*/
void sub_3c17d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c17d0ULL || rel >= 0x3c1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1980 size=736 callers=5 calls=2
   calls: sub_3c0a30, sub_3c17d0
*/
void sub_3c1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1980ULL || rel >= 0x3c1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1c60 size=272 callers=1 calls=3
   calls: sub_3045e0, sub_335420, sub_363510
*/
void sub_3c1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1c60ULL || rel >= 0x3c1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1d70 size=96 callers=0 calls=0
*/
void sub_3c1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1d70ULL || rel >= 0x3c1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1dd0 size=288 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3c1dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1dd0ULL || rel >= 0x3c1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1ef0 size=80 callers=0 calls=0
*/
void sub_3c1ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1ef0ULL || rel >= 0x3c1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1f40 size=16 callers=0 calls=0
*/
void sub_3c1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1f40ULL || rel >= 0x3c1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1f50 size=240 callers=1 calls=1
   calls: sub_3c1c60
*/
void sub_3c1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1f50ULL || rel >= 0x3c2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2040 size=160 callers=0 calls=0
*/
void sub_3c2040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2040ULL || rel >= 0x3c20e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c20e0 size=16 callers=0 calls=0
*/
void sub_3c20e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c20e0ULL || rel >= 0x3c20f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c20f0 size=48 callers=0 calls=1
   calls: sub_363530
*/
void sub_3c20f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c20f0ULL || rel >= 0x3c2120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2120 size=224 callers=0 calls=0
*/
void sub_3c2120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2120ULL || rel >= 0x3c2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2200 size=176 callers=0 calls=0
*/
void sub_3c2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2200ULL || rel >= 0x3c22b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c22b0 size=64 callers=0 calls=0
*/
void sub_3c22b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c22b0ULL || rel >= 0x3c22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c22f0 size=64 callers=0 calls=0
*/
void sub_3c22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c22f0ULL || rel >= 0x3c2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2330 size=112 callers=0 calls=0
*/
void sub_3c2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2330ULL || rel >= 0x3c23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c23a0 size=16 callers=1 calls=0
*/
void sub_3c23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c23a0ULL || rel >= 0x3c23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c23b0 size=64 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_3c23b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c23b0ULL || rel >= 0x3c23f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c23f0 size=160 callers=1 calls=3
   calls: sub_3045e0, sub_3323d0, sub_3c2cb0
*/
void sub_3c23f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c23f0ULL || rel >= 0x3c2490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2490 size=144 callers=0 calls=2
   calls: sub_3c2f40, sub_3c4370
*/
void sub_3c2490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2490ULL || rel >= 0x3c2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2520 size=144 callers=1 calls=3
   calls: sub_3326d0, sub_3c2cd0, sub_3c4480
*/
void sub_3c2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2520ULL || rel >= 0x3c25b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c25b0 size=320 callers=1 calls=6
   calls: sub_3045e0, sub_3047c0, sub_331150, sub_397bc0, sub_3c2c30, sub_3c4070
*/
void sub_3c25b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c25b0ULL || rel >= 0x3c26f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c26f0 size=208 callers=1 calls=2
   calls: sub_3c25b0, sub_3c42a0
*/
void sub_3c26f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c26f0ULL || rel >= 0x3c27c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c27c0 size=304 callers=2 calls=1
   calls: sub_3c4480
*/
void sub_3c27c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c27c0ULL || rel >= 0x3c28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c28f0 size=16 callers=0 calls=0
*/
void sub_3c28f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c28f0ULL || rel >= 0x3c2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2900 size=144 callers=2 calls=0
*/
void sub_3c2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2900ULL || rel >= 0x3c2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2990 size=176 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3c2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2990ULL || rel >= 0x3c2a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2a40 size=16 callers=0 calls=0
*/
void sub_3c2a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2a40ULL || rel >= 0x3c2a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2a50 size=48 callers=2 calls=0
*/
void sub_3c2a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2a50ULL || rel >= 0x3c2a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2a80 size=320 callers=4 calls=1
   calls: sub_3045e0
*/
void sub_3c2a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2a80ULL || rel >= 0x3c2bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2bc0 size=80 callers=1 calls=0
*/
void sub_3c2bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2bc0ULL || rel >= 0x3c2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2c10 size=32 callers=5 calls=0
*/
void sub_3c2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2c10ULL || rel >= 0x3c2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2c30 size=96 callers=12 calls=1
   calls: sub_3047c0
*/
void sub_3c2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2c30ULL || rel >= 0x3c2c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2c90 size=16 callers=0 calls=0
*/
void sub_3c2c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2c90ULL || rel >= 0x3c2ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2ca0 size=16 callers=0 calls=0
*/
void sub_3c2ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2ca0ULL || rel >= 0x3c2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2cb0 size=32 callers=2 calls=0
*/
void sub_3c2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2cb0ULL || rel >= 0x3c2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2cd0 size=496 callers=1 calls=3
   calls: sub_3047c0, sub_3c4880, sub_3c5180
*/
void sub_3c2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2cd0ULL || rel >= 0x3c2ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2ec0 size=32 callers=2 calls=0
*/
void sub_3c2ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2ec0ULL || rel >= 0x3c2ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2ee0 size=96 callers=4 calls=0
*/
void sub_3c2ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2ee0ULL || rel >= 0x3c2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2f40 size=224 callers=2 calls=3
   calls: sub_3047c0, sub_3c2c30, sub_3c3020
*/
void sub_3c2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2f40ULL || rel >= 0x3c3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3020 size=976 callers=39 calls=7
   calls: sub_3045e0, sub_3047c0, sub_38f8d0, sub_3c3b10, sub_3c4810, sub_3c4930, sub_3c4a90
*/
void sub_3c3020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3020ULL || rel >= 0x3c33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c33f0 size=544 callers=1 calls=4
   calls: sub_3c3c90, sub_3c4880, sub_3c4bd0, sub_3c5180
*/
void sub_3c33f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c33f0ULL || rel >= 0x3c3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3610 size=1024 callers=1 calls=4
   calls: sub_3c3020, sub_3c33f0, sub_3c4880, sub_3c5180
*/
void sub_3c3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3610ULL || rel >= 0x3c3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3a10 size=256 callers=0 calls=1
   calls: sub_3c3020
*/
void sub_3c3a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3a10ULL || rel >= 0x3c3b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3b10 size=384 callers=1 calls=1
   calls: sub_3c3020
*/
void sub_3c3b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3b10ULL || rel >= 0x3c3c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3c90 size=432 callers=1 calls=2
   calls: sub_39ea90, sub_39ebc0
*/
void sub_3c3c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3c90ULL || rel >= 0x3c3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3e40 size=112 callers=0 calls=0
*/
void sub_3c3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3e40ULL || rel >= 0x3c3eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3eb0 size=224 callers=0 calls=1
   calls: sub_3c51e0
*/
void sub_3c3eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3eb0ULL || rel >= 0x3c3f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3f90 size=224 callers=0 calls=1
   calls: sub_3c5260
*/
void sub_3c3f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3f90ULL || rel >= 0x3c4070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4070 size=96 callers=1 calls=1
   calls: sub_3c2900
*/
void sub_3c4070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4070ULL || rel >= 0x3c40d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c40d0 size=144 callers=0 calls=2
   calls: sub_3047c0, sub_3c2ee0
*/
void sub_3c40d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c40d0ULL || rel >= 0x3c4160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4160 size=160 callers=0 calls=3
   calls: sub_3047c0, sub_3c2990, sub_3c2ee0
*/
void sub_3c4160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4160ULL || rel >= 0x3c4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4200 size=64 callers=0 calls=2
   calls: sub_3c2a50, sub_3c2ec0
*/
void sub_3c4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4200ULL || rel >= 0x3c4240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4240 size=16 callers=0 calls=0
*/
void sub_3c4240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4240ULL || rel >= 0x3c4250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4250 size=80 callers=0 calls=1
   calls: sub_3351b0
*/
void sub_3c4250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4250ULL || rel >= 0x3c42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c42a0 size=208 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3c42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c42a0ULL || rel >= 0x3c4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4370 size=272 callers=1 calls=3
   calls: sub_3047c0, sub_3c2a80, sub_3c2c10
*/
void sub_3c4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4370ULL || rel >= 0x3c4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4480 size=96 callers=5 calls=2
   calls: sub_3c2ee0, sub_3c3610
*/
void sub_3c4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4480ULL || rel >= 0x3c44e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c44e0 size=688 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_3c44e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c44e0ULL || rel >= 0x3c4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4790 size=32 callers=3 calls=0
*/
void sub_3c4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4790ULL || rel >= 0x3c47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c47b0 size=96 callers=3 calls=2
   calls: sub_3047c0, sub_3c44e0
*/
void sub_3c47b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c47b0ULL || rel >= 0x3c4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4810 size=112 callers=1 calls=1
   calls: sub_3c2c10
*/
void sub_3c4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4810ULL || rel >= 0x3c4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4880 size=176 callers=4 calls=3
   calls: sub_3047c0, sub_3c2c30, sub_3c44e0
*/
void sub_3c4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4880ULL || rel >= 0x3c4930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4930 size=352 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3c4930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4930ULL || rel >= 0x3c4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4a90 size=320 callers=2 calls=0
*/
void sub_3c4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4a90ULL || rel >= 0x3c4bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4bd0 size=240 callers=1 calls=2
   calls: sub_3c4cc0, sub_3c4de0
*/
void sub_3c4bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4bd0ULL || rel >= 0x3c4cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4cc0 size=288 callers=1 calls=3
   calls: sub_33ac80, sub_379760, sub_38c050
*/
void sub_3c4cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4cc0ULL || rel >= 0x3c4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4de0 size=352 callers=1 calls=1
   calls: sub_3c4f40
*/
void sub_3c4de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4de0ULL || rel >= 0x3c4f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4f40 size=576 callers=1 calls=6
   calls: sub_3047c0, sub_331150, sub_37f560, sub_380dd0, sub_380fd0, sub_38e5c0
*/
void sub_3c4f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4f40ULL || rel >= 0x3c5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5180 size=96 callers=3 calls=1
   calls: sub_38c050
*/
void sub_3c5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5180ULL || rel >= 0x3c51e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c51e0 size=128 callers=2 calls=2
   calls: sub_33a8a0, sub_38c1a0
*/
void sub_3c51e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c51e0ULL || rel >= 0x3c5260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5260 size=144 callers=2 calls=2
   calls: sub_33bb80, sub_38c220
*/
void sub_3c5260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5260ULL || rel >= 0x3c52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c52f0 size=112 callers=1 calls=5
   calls: sub_3044e0, sub_35e990, sub_367e30, sub_368900, sub_3a8030
*/
void sub_3c52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c52f0ULL || rel >= 0x3c5360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5360 size=144 callers=1 calls=5
   calls: sub_3047c0, sub_35ef60, sub_367eb0, sub_368ff0, sub_37c450
*/
void sub_3c5360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5360ULL || rel >= 0x3c53f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c53f0 size=208 callers=1 calls=5
   calls: sub_369930, sub_37b050, sub_37d6b0, sub_3d4880, sub_3d4be0
*/
void sub_3c53f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c53f0ULL || rel >= 0x3c54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c54c0 size=144 callers=1 calls=2
   calls: sub_368a60, sub_3c5550
*/
void sub_3c54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c54c0ULL || rel >= 0x3c5550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5550 size=192 callers=1 calls=4
   calls: sub_3047c0, sub_37af50, sub_37d6b0, sub_3d4310
*/
void sub_3c5550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5550ULL || rel >= 0x3c5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5610 size=160 callers=0 calls=0
*/
void sub_3c5610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5610ULL || rel >= 0x3c56b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c56b0 size=144 callers=1 calls=0
*/
void sub_3c56b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c56b0ULL || rel >= 0x3c5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5740 size=160 callers=0 calls=0
*/
void sub_3c5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5740ULL || rel >= 0x3c57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c57e0 size=240 callers=0 calls=1
   calls: sub_3d2290
*/
void sub_3c57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c57e0ULL || rel >= 0x3c58d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c58d0 size=144 callers=0 calls=1
   calls: sub_34f7b0
*/
void sub_3c58d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c58d0ULL || rel >= 0x3c5960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5960 size=112 callers=1 calls=2
   calls: sub_3c59d0, sub_3d1930
*/
void sub_3c5960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5960ULL || rel >= 0x3c59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c59d0 size=160 callers=1 calls=1
   calls: sub_3c9ae0
*/
void sub_3c59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c59d0ULL || rel >= 0x3c5a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5a70 size=144 callers=0 calls=1
   calls: sub_3d45f0
*/
void sub_3c5a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5a70ULL || rel >= 0x3c5b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5b00 size=16 callers=1 calls=0
*/
void sub_3c5b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5b00ULL || rel >= 0x3c5b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5b10 size=832 callers=13 calls=6
   calls: sub_3047c0, sub_37af50, sub_37d6b0, sub_3c6390, sub_3c74d0, sub_3d4310
*/
void sub_3c5b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5b10ULL || rel >= 0x3c5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5e50 size=192 callers=1 calls=0
*/
void sub_3c5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5e50ULL || rel >= 0x3c5f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5f10 size=80 callers=2 calls=1
   calls: sub_3c5f60
*/
void sub_3c5f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5f10ULL || rel >= 0x3c5f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5f60 size=608 callers=1 calls=4
   calls: sub_369920, sub_3c69a0, sub_3d0b30, sub_3d1190
*/
void sub_3c5f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5f60ULL || rel >= 0x3c61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c61c0 size=464 callers=1 calls=3
   calls: sub_368a60, sub_3c6390, sub_3db3f0
*/
void sub_3c61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c61c0ULL || rel >= 0x3c6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6390 size=896 callers=2 calls=7
   calls: sub_3045e0, sub_34fba0, sub_369920, sub_37d390, sub_395830, sub_3c69a0, sub_3d0b30
*/
void sub_3c6390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6390ULL || rel >= 0x3c6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6710 size=352 callers=1 calls=8
   calls: sub_3045e0, sub_368a60, sub_38d280, sub_38d310, sub_3c61c0, sub_3daaa0, sub_3dabb0, sub_3dc0c0
*/
void sub_3c6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6710ULL || rel >= 0x3c6870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6870 size=192 callers=1 calls=2
   calls: sub_368a60, sub_3da690
*/
void sub_3c6870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6870ULL || rel >= 0x3c6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6930 size=112 callers=1 calls=0
*/
void sub_3c6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6930ULL || rel >= 0x3c69a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c69a0 size=784 callers=5 calls=10
   calls: sub_3045e0, sub_384e70, sub_395830, sub_3c69a0, sub_3c6cb0, sub_3ca240, sub_3ca450, sub_3ca4b0, sub_3d0b30, sub_3e9e60
*/
void sub_3c69a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c69a0ULL || rel >= 0x3c6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6cb0 size=1856 callers=2 calls=11
   calls: sub_3045e0, sub_3047c0, sub_37ad50, sub_37aeb0, sub_37af50, sub_37d6b0, sub_3c73f0, sub_3c7fa0, sub_3d0b30, sub_3d15d0, sub_3d4310
*/
void sub_3c6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6cb0ULL || rel >= 0x3c73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c73f0 size=224 callers=2 calls=4
   calls: sub_37d6b0, sub_3ca2e0, sub_3d0b30, sub_3d3f70
*/
void sub_3c73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c73f0ULL || rel >= 0x3c74d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c74d0 size=528 callers=2 calls=3
   calls: sub_3045e0, sub_395830, sub_3cf8e0
*/
void sub_3c74d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c74d0ULL || rel >= 0x3c76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c76e0 size=304 callers=2 calls=3
   calls: sub_3dac80, sub_3db3f0, sub_3dc150
*/
void sub_3c76e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c76e0ULL || rel >= 0x3c7810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7810 size=528 callers=1 calls=7
   calls: sub_3c7a20, sub_3c7da0, sub_3c94c0, sub_3cfb50, sub_3d0050, sub_3d0150, sub_3dc000
*/
void sub_3c7810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7810ULL || rel >= 0x3c7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7a20 size=896 callers=1 calls=5
   calls: sub_357310, sub_357370, sub_39d140, sub_3c8160, sub_3c8340
*/
void sub_3c7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7a20ULL || rel >= 0x3c7da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7da0 size=512 callers=1 calls=3
   calls: sub_3047c0, sub_397bc0, sub_39b910
*/
void sub_3c7da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7da0ULL || rel >= 0x3c7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7fa0 size=448 callers=1 calls=3
   calls: sub_39d140, sub_3c8160, sub_3d15d0
*/
void sub_3c7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7fa0ULL || rel >= 0x3c8160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8160 size=480 callers=2 calls=1
   calls: sub_39d140
*/
void sub_3c8160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8160ULL || rel >= 0x3c8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8340 size=784 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3c8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8340ULL || rel >= 0x3c8650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8650 size=464 callers=0 calls=4
   calls: sub_3047c0, sub_37af50, sub_37d6b0, sub_3d4310
*/
void sub_3c8650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8650ULL || rel >= 0x3c8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8820 size=560 callers=1 calls=9
   calls: sub_369930, sub_38f560, sub_3d1330, sub_3d4880, sub_3d6320, sub_3d63c0, sub_3da830, sub_3db7e0, sub_3e0ae0
*/
void sub_3c8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8820ULL || rel >= 0x3c8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8a50 size=288 callers=0 calls=4
   calls: sub_37b0e0, sub_3c53f0, sub_3c8b70, sub_3d4430
*/
void sub_3c8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8a50ULL || rel >= 0x3c8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8b70 size=560 callers=1 calls=9
   calls: sub_3686a0, sub_368a60, sub_3c0430, sub_3c76e0, sub_3c7810, sub_3c8820, sub_3dada0, sub_3db8a0, sub_3dc310
*/
void sub_3c8b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8b70ULL || rel >= 0x3c8da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8da0 size=224 callers=0 calls=3
   calls: sub_3c99e0, sub_3ca380, sub_3ca3b0
*/
void sub_3c8da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8da0ULL || rel >= 0x3c8e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8e80 size=64 callers=1 calls=1
   calls: sub_34e5d0
*/
void sub_3c8e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8e80ULL || rel >= 0x3c8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8ec0 size=16 callers=0 calls=0
*/
void sub_3c8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8ec0ULL || rel >= 0x3c8ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8ed0 size=48 callers=0 calls=1
   calls: sub_34e6e0
*/
void sub_3c8ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8ed0ULL || rel >= 0x3c8f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8f00 size=144 callers=0 calls=1
   calls: sub_3a4560
*/
void sub_3c8f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8f00ULL || rel >= 0x3c8f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8f90 size=224 callers=0 calls=2
   calls: sub_34e7b0, sub_3a45b0
*/
void sub_3c8f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8f90ULL || rel >= 0x3c9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9070 size=16 callers=0 calls=0
*/
void sub_3c9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9070ULL || rel >= 0x3c9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9080 size=32 callers=0 calls=0
*/
void sub_3c9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9080ULL || rel >= 0x3c90a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c90a0 size=32 callers=0 calls=0
*/
void sub_3c90a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c90a0ULL || rel >= 0x3c90c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c90c0 size=352 callers=0 calls=4
   calls: sub_351500, sub_352df0, sub_3888e0, sub_3c9220
*/
void sub_3c90c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c90c0ULL || rel >= 0x3c9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9220 size=464 callers=1 calls=2
   calls: sub_356a80, sub_385e80
*/
void sub_3c9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9220ULL || rel >= 0x3c93f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c93f0 size=208 callers=0 calls=0
*/
void sub_3c93f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c93f0ULL || rel >= 0x3c94c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c94c0 size=144 callers=1 calls=1
   calls: sub_3d0460
*/
void sub_3c94c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c94c0ULL || rel >= 0x3c9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9550 size=176 callers=2 calls=2
   calls: sub_3047c0, sub_3490d0
*/
void sub_3c9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9550ULL || rel >= 0x3c9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9600 size=720 callers=5 calls=4
   calls: sub_3045e0, sub_3047c0, sub_348f10, sub_3490d0
*/
void sub_3c9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9600ULL || rel >= 0x3c98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c98d0 size=192 callers=0 calls=2
   calls: sub_3047c0, sub_3490d0
*/
void sub_3c98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c98d0ULL || rel >= 0x3c9990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9990 size=16 callers=0 calls=0
*/
void sub_3c9990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9990ULL || rel >= 0x3c99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c99a0 size=16 callers=0 calls=0
*/
void sub_3c99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c99a0ULL || rel >= 0x3c99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c99b0 size=16 callers=0 calls=0
*/
void sub_3c99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c99b0ULL || rel >= 0x3c99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c99c0 size=32 callers=0 calls=0
*/
void sub_3c99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c99c0ULL || rel >= 0x3c99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c99e0 size=256 callers=3 calls=2
   calls: sub_348f10, sub_3490d0
*/
void sub_3c99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c99e0ULL || rel >= 0x3c9ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9ae0 size=144 callers=8 calls=1
   calls: sub_3c99e0
*/
void sub_3c9ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9ae0ULL || rel >= 0x3c9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9b70 size=80 callers=4 calls=0
*/
void sub_3c9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9b70ULL || rel >= 0x3c9bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9bc0 size=32 callers=1 calls=0
*/
void sub_3c9bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9bc0ULL || rel >= 0x3c9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9be0 size=192 callers=0 calls=2
   calls: sub_3047c0, sub_3490d0
*/
void sub_3c9be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9be0ULL || rel >= 0x3c9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9ca0 size=16 callers=0 calls=0
*/
void sub_3c9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9ca0ULL || rel >= 0x3c9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9cb0 size=16 callers=0 calls=0
*/
void sub_3c9cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9cb0ULL || rel >= 0x3c9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9cc0 size=16 callers=0 calls=0
*/
void sub_3c9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9cc0ULL || rel >= 0x3c9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9cd0 size=16 callers=0 calls=0
*/
void sub_3c9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9cd0ULL || rel >= 0x3c9ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9ce0 size=16 callers=0 calls=0
*/
void sub_3c9ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9ce0ULL || rel >= 0x3c9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9cf0 size=16 callers=0 calls=0
*/
void sub_3c9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9cf0ULL || rel >= 0x3c9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9d00 size=240 callers=0 calls=2
   calls: sub_38e020, sub_3c9600
*/
void sub_3c9d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9d00ULL || rel >= 0x3c9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9df0 size=16 callers=0 calls=0
*/
void sub_3c9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9df0ULL || rel >= 0x3c9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9e00 size=128 callers=0 calls=0
*/
void sub_3c9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9e00ULL || rel >= 0x3c9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9e80 size=80 callers=0 calls=2
   calls: sub_369910, sub_3cfb30
*/
void sub_3c9e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9e80ULL || rel >= 0x3c9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9ed0 size=16 callers=0 calls=0
*/
void sub_3c9ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9ed0ULL || rel >= 0x3c9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9ee0 size=16 callers=0 calls=0
*/
void sub_3c9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9ee0ULL || rel >= 0x3c9ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9ef0 size=48 callers=1 calls=0
*/
void sub_3c9ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9ef0ULL || rel >= 0x3c9f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9f20 size=192 callers=0 calls=2
   calls: sub_3047c0, sub_3490d0
*/
void sub_3c9f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9f20ULL || rel >= 0x3c9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9fe0 size=16 callers=0 calls=0
*/
void sub_3c9fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9fe0ULL || rel >= 0x3c9ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9ff0 size=16 callers=0 calls=0
*/
void sub_3c9ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9ff0ULL || rel >= 0x3ca000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca000 size=32 callers=0 calls=1
   calls: sub_3d14e0
*/
void sub_3ca000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca000ULL || rel >= 0x3ca020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca020 size=16 callers=0 calls=0
*/
void sub_3ca020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca020ULL || rel >= 0x3ca030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca030 size=16 callers=0 calls=0
*/
void sub_3ca030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca030ULL || rel >= 0x3ca040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca040 size=16 callers=0 calls=0
*/
void sub_3ca040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca040ULL || rel >= 0x3ca050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca050 size=224 callers=0 calls=2
   calls: sub_3c9600, sub_3ca360
*/
void sub_3ca050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca050ULL || rel >= 0x3ca130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca130 size=32 callers=0 calls=0
*/
void sub_3ca130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca130ULL || rel >= 0x3ca150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca150 size=128 callers=0 calls=0
*/
void sub_3ca150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca150ULL || rel >= 0x3ca1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca1d0 size=16 callers=0 calls=0
*/
void sub_3ca1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca1d0ULL || rel >= 0x3ca1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca1e0 size=16 callers=0 calls=0
*/
void sub_3ca1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca1e0ULL || rel >= 0x3ca1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca1f0 size=16 callers=0 calls=0
*/
void sub_3ca1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca1f0ULL || rel >= 0x3ca200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca200 size=16 callers=0 calls=0
*/
void sub_3ca200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca200ULL || rel >= 0x3ca210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca210 size=16 callers=0 calls=0
*/
void sub_3ca210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca210ULL || rel >= 0x3ca220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca220 size=16 callers=0 calls=0
*/
void sub_3ca220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca220ULL || rel >= 0x3ca230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca230 size=16 callers=0 calls=0
*/
void sub_3ca230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca230ULL || rel >= 0x3ca240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca240 size=128 callers=1 calls=0
*/
void sub_3ca240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca240ULL || rel >= 0x3ca2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca2c0 size=32 callers=1 calls=0
*/
void sub_3ca2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca2c0ULL || rel >= 0x3ca2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca2e0 size=32 callers=2 calls=0
*/
void sub_3ca2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca2e0ULL || rel >= 0x3ca300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca300 size=96 callers=1 calls=0
*/
void sub_3ca300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca300ULL || rel >= 0x3ca360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca360 size=32 callers=1 calls=0
*/
void sub_3ca360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca360ULL || rel >= 0x3ca380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca380 size=48 callers=2 calls=0
*/
void sub_3ca380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca380ULL || rel >= 0x3ca3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca3b0 size=80 callers=2 calls=0
*/
void sub_3ca3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca3b0ULL || rel >= 0x3ca400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca400 size=32 callers=2 calls=0
*/
void sub_3ca400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca400ULL || rel >= 0x3ca420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca420 size=48 callers=0 calls=0
*/
void sub_3ca420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca420ULL || rel >= 0x3ca450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca450 size=96 callers=5 calls=0
*/
void sub_3ca450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca450ULL || rel >= 0x3ca4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca4b0 size=160 callers=4 calls=2
   calls: sub_3047c0, sub_397bc0
*/
void sub_3ca4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca4b0ULL || rel >= 0x3ca550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca550 size=640 callers=1 calls=0
*/
void sub_3ca550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca550ULL || rel >= 0x3ca7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca7d0 size=624 callers=0 calls=0
*/
void sub_3ca7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca7d0ULL || rel >= 0x3caa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003caa40 size=832 callers=0 calls=0
*/
void sub_3caa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3caa40ULL || rel >= 0x3cad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cad80 size=16 callers=2 calls=0
*/
void sub_3cad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cad80ULL || rel >= 0x3cad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cad90 size=464 callers=3 calls=1
   calls: sub_3cb890
*/
void sub_3cad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cad90ULL || rel >= 0x3caf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003caf60 size=160 callers=1 calls=1
   calls: sub_3cb890
*/
void sub_3caf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3caf60ULL || rel >= 0x3cb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cb000 size=848 callers=1 calls=2
   calls: sub_3cb890, sub_3d1350
*/
void sub_3cb000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cb000ULL || rel >= 0x3cb350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cb350 size=576 callers=1 calls=2
   calls: sub_3cb890, sub_3d1360
*/
void sub_3cb350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cb350ULL || rel >= 0x3cb590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cb590 size=768 callers=1 calls=0
*/
void sub_3cb590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cb590ULL || rel >= 0x3cb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cb890 size=160 callers=7 calls=0
*/
void sub_3cb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cb890ULL || rel >= 0x3cb930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cb930 size=144 callers=0 calls=0
*/
void sub_3cb930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cb930ULL || rel >= 0x3cb9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cb9c0 size=272 callers=0 calls=0
*/
void sub_3cb9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cb9c0ULL || rel >= 0x3cbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbad0 size=352 callers=0 calls=0
*/
void sub_3cbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbad0ULL || rel >= 0x3cbc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbc30 size=112 callers=4 calls=2
   calls: sub_369090, sub_3dd7b0
*/
void sub_3cbc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbc30ULL || rel >= 0x3cbca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbca0 size=32 callers=3 calls=0
*/
void sub_3cbca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbca0ULL || rel >= 0x3cbcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbcc0 size=16 callers=0 calls=0
*/
void sub_3cbcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbcc0ULL || rel >= 0x3cbcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbcd0 size=16 callers=0 calls=0
*/
void sub_3cbcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbcd0ULL || rel >= 0x3cbce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbce0 size=16 callers=0 calls=0
*/
void sub_3cbce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbce0ULL || rel >= 0x3cbcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbcf0 size=240 callers=0 calls=2
   calls: sub_369380, sub_390a10
*/
void sub_3cbcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbcf0ULL || rel >= 0x3cbde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbde0 size=112 callers=0 calls=2
   calls: sub_390a10, sub_3ddc20
*/
void sub_3cbde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbde0ULL || rel >= 0x3cbe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbe50 size=16 callers=0 calls=0
*/
void sub_3cbe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbe50ULL || rel >= 0x3cbe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbe60 size=112 callers=0 calls=0
*/
void sub_3cbe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbe60ULL || rel >= 0x3cbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbed0 size=288 callers=0 calls=0
*/
void sub_3cbed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbed0ULL || rel >= 0x3cbff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbff0 size=240 callers=3 calls=1
   calls: sub_369240
*/
void sub_3cbff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbff0ULL || rel >= 0x3cc0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc0e0 size=496 callers=13 calls=1
   calls: sub_369430
*/
void sub_3cc0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc0e0ULL || rel >= 0x3cc2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc2d0 size=16 callers=0 calls=0
*/
void sub_3cc2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc2d0ULL || rel >= 0x3cc2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc2e0 size=16 callers=0 calls=0
*/
void sub_3cc2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc2e0ULL || rel >= 0x3cc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc2f0 size=16 callers=0 calls=0
*/
void sub_3cc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc2f0ULL || rel >= 0x3cc300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc300 size=16 callers=0 calls=0
*/
void sub_3cc300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc300ULL || rel >= 0x3cc310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc310 size=16 callers=0 calls=0
*/
void sub_3cc310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc310ULL || rel >= 0x3cc320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc320 size=48 callers=0 calls=0
*/
void sub_3cc320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc320ULL || rel >= 0x3cc350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc350 size=80 callers=3 calls=1
   calls: sub_3cbc30
*/
void sub_3cc350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc350ULL || rel >= 0x3cc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc3a0 size=112 callers=3 calls=1
   calls: sub_3047c0
*/
void sub_3cc3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc3a0ULL || rel >= 0x3cc410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc410 size=16 callers=0 calls=0
*/
void sub_3cc410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc410ULL || rel >= 0x3cc420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc420 size=176 callers=1 calls=4
   calls: sub_3cc4d0, sub_3cc6a0, sub_3cc7b0, sub_405700
*/
void sub_3cc420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc420ULL || rel >= 0x3cc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc4d0 size=464 callers=2 calls=3
   calls: sub_3cc0e0, sub_3cc970, sub_3ccf50
*/
void sub_3cc4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc4d0ULL || rel >= 0x3cc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc6a0 size=272 callers=2 calls=0
*/
void sub_3cc6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc6a0ULL || rel >= 0x3cc7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc7b0 size=320 callers=2 calls=1
   calls: sub_3cc970
*/
void sub_3cc7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc7b0ULL || rel >= 0x3cc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc8f0 size=48 callers=0 calls=1
   calls: sub_3cc420
*/
void sub_3cc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc8f0ULL || rel >= 0x3cc920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc920 size=16 callers=0 calls=0
*/
void sub_3cc920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc920ULL || rel >= 0x3cc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc930 size=32 callers=0 calls=0
*/
void sub_3cc930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc930ULL || rel >= 0x3cc950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc950 size=32 callers=0 calls=0
*/
void sub_3cc950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc950ULL || rel >= 0x3cc970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc970 size=352 callers=5 calls=0
*/
void sub_3cc970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc970ULL || rel >= 0x3ccad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ccad0 size=64 callers=0 calls=0
*/
void sub_3ccad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ccad0ULL || rel >= 0x3ccb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ccb10 size=112 callers=0 calls=0
*/
void sub_3ccb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ccb10ULL || rel >= 0x3ccb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ccb80 size=208 callers=4 calls=1
   calls: sub_3cc970
*/
void sub_3ccb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ccb80ULL || rel >= 0x3ccc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ccc50 size=128 callers=1 calls=2
   calls: sub_3cc0e0, sub_3ccf50
*/
void sub_3ccc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ccc50ULL || rel >= 0x3cccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cccd0 size=320 callers=2 calls=1
   calls: sub_390d80
*/
void sub_3cccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cccd0ULL || rel >= 0x3cce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cce10 size=320 callers=1 calls=2
   calls: sub_3cc0e0, sub_3ccf50
*/
void sub_3cce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cce10ULL || rel >= 0x3ccf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ccf50 size=320 callers=7 calls=0
*/
void sub_3ccf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ccf50ULL || rel >= 0x3cd090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd090 size=48 callers=1 calls=0
*/
void sub_3cd090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd090ULL || rel >= 0x3cd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd0c0 size=176 callers=1 calls=2
   calls: sub_3cc0e0, sub_3ccf50
*/
void sub_3cd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd0c0ULL || rel >= 0x3cd170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd170 size=128 callers=3 calls=1
   calls: sub_3045e0
*/
void sub_3cd170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd170ULL || rel >= 0x3cd1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd1f0 size=64 callers=0 calls=0
*/
void sub_3cd1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd1f0ULL || rel >= 0x3cd230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd230 size=208 callers=2 calls=0
*/
void sub_3cd230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd230ULL || rel >= 0x3cd300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd300 size=32 callers=7 calls=0
*/
void sub_3cd300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd300ULL || rel >= 0x3cd320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd320 size=16 callers=0 calls=0
*/
void sub_3cd320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd320ULL || rel >= 0x3cd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd330 size=320 callers=3 calls=0
*/
void sub_3cd330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd330ULL || rel >= 0x3cd470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd470 size=96 callers=6 calls=0
*/
void sub_3cd470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd470ULL || rel >= 0x3cd4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd4d0 size=96 callers=1 calls=0
*/
void sub_3cd4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd4d0ULL || rel >= 0x3cd530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd530 size=96 callers=0 calls=1
   calls: sub_3cd590
*/
void sub_3cd530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd530ULL || rel >= 0x3cd590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd590 size=1840 callers=1 calls=2
   calls: sub_3cf1b0, sub_3cf630
*/
void sub_3cd590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd590ULL || rel >= 0x3cdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cdcc0 size=1824 callers=0 calls=2
   calls: sub_3cf1b0, sub_3cf6f0
*/
void sub_3cdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cdcc0ULL || rel >= 0x3ce3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ce3e0 size=176 callers=0 calls=0
*/
void sub_3ce3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ce3e0ULL || rel >= 0x3ce490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ce490 size=736 callers=0 calls=1
   calls: sub_3ce770
*/
void sub_3ce490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ce490ULL || rel >= 0x3ce770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ce770 size=704 callers=1 calls=2
   calls: sub_3cf3e0, sub_3cf630
*/
void sub_3ce770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ce770ULL || rel >= 0x3cea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cea30 size=624 callers=0 calls=2
   calls: sub_3cf1b0, sub_3cf6f0
*/
void sub_3cea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cea30ULL || rel >= 0x3ceca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ceca0 size=1296 callers=1 calls=2
   calls: sub_3cf630, sub_3cf6f0
*/
void sub_3ceca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ceca0ULL || rel >= 0x3cf1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf1b0 size=560 callers=8 calls=0
*/
void sub_3cf1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf1b0ULL || rel >= 0x3cf3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf3e0 size=592 callers=2 calls=0
*/
void sub_3cf3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf3e0ULL || rel >= 0x3cf630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf630 size=192 callers=4 calls=0
*/
void sub_3cf630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf630ULL || rel >= 0x3cf6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf6f0 size=192 callers=4 calls=0
*/
void sub_3cf6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf6f0ULL || rel >= 0x3cf7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf7b0 size=304 callers=1 calls=3
   calls: sub_304740, sub_3047c0, sub_3cf8e0
*/
void sub_3cf7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf7b0ULL || rel >= 0x3cf8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf8e0 size=400 callers=6 calls=2
   calls: sub_304740, sub_369930
*/
void sub_3cf8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf8e0ULL || rel >= 0x3cfa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfa70 size=16 callers=0 calls=0
*/
void sub_3cfa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfa70ULL || rel >= 0x3cfa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfa80 size=176 callers=1 calls=2
   calls: sub_369930, sub_3cf8e0
*/
void sub_3cfa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfa80ULL || rel >= 0x3cfb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfb30 size=32 callers=1 calls=0
*/
void sub_3cfb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfb30ULL || rel >= 0x3cfb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfb50 size=1280 callers=2 calls=4
   calls: sub_369920, sub_379a70, sub_3ca2c0, sub_3cf8e0
*/
void sub_3cfb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfb50ULL || rel >= 0x3d0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0050 size=256 callers=2 calls=0
*/
void sub_3d0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0050ULL || rel >= 0x3d0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0150 size=784 callers=3 calls=7
   calls: sub_3045e0, sub_350030, sub_350c50, sub_351550, sub_359880, sub_395830, sub_395920
*/
void sub_3d0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0150ULL || rel >= 0x3d0460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0460 size=400 callers=1 calls=5
   calls: sub_3351b0, sub_350d40, sub_351500, sub_3536a0, sub_3c5f10
*/
void sub_3d0460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0460ULL || rel >= 0x3d05f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d05f0 size=720 callers=4 calls=9
   calls: sub_32c410, sub_32cae0, sub_32df70, sub_32e270, sub_369910, sub_36a530, sub_36a5e0, sub_3cd330, sub_3cd470
*/
void sub_3d05f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d05f0ULL || rel >= 0x3d08c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d08c0 size=320 callers=1 calls=0
*/
void sub_3d08c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d08c0ULL || rel >= 0x3d0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0a00 size=304 callers=3 calls=0
*/
void sub_3d0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0a00ULL || rel >= 0x3d0b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0b30 size=848 callers=6 calls=7
   calls: sub_3697a0, sub_369910, sub_369920, sub_37b470, sub_37d6b0, sub_3cf8e0, sub_3d0e80
*/
void sub_3d0b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0b30ULL || rel >= 0x3d0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0e80 size=736 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3d0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0e80ULL || rel >= 0x3d1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1160 size=48 callers=1 calls=0
*/
void sub_3d1160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1160ULL || rel >= 0x3d1190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1190 size=48 callers=4 calls=0
*/
void sub_3d1190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1190ULL || rel >= 0x3d11c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d11c0 size=16 callers=0 calls=0
*/
void sub_3d11c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d11c0ULL || rel >= 0x3d11d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d11d0 size=16 callers=0 calls=0
*/
void sub_3d11d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d11d0ULL || rel >= 0x3d11e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d11e0 size=16 callers=0 calls=0
*/
void sub_3d11e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d11e0ULL || rel >= 0x3d11f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d11f0 size=32 callers=0 calls=0
*/
void sub_3d11f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d11f0ULL || rel >= 0x3d1210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1210 size=16 callers=0 calls=0
*/
void sub_3d1210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1210ULL || rel >= 0x3d1220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1220 size=32 callers=0 calls=0
*/
void sub_3d1220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1220ULL || rel >= 0x3d1240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1240 size=32 callers=0 calls=0
*/
void sub_3d1240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1240ULL || rel >= 0x3d1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1260 size=160 callers=0 calls=1
   calls: sub_395920
*/
void sub_3d1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1260ULL || rel >= 0x3d1300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1300 size=16 callers=0 calls=0
*/
void sub_3d1300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1300ULL || rel >= 0x3d1310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1310 size=16 callers=0 calls=0
*/
void sub_3d1310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1310ULL || rel >= 0x3d1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1320 size=16 callers=0 calls=0
*/
void sub_3d1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1320ULL || rel >= 0x3d1330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1330 size=32 callers=2 calls=0
*/
void sub_3d1330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1330ULL || rel >= 0x3d1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1350 size=16 callers=3 calls=0
*/
void sub_3d1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1350ULL || rel >= 0x3d1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1360 size=16 callers=3 calls=0
*/
void sub_3d1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1360ULL || rel >= 0x3d1370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1370 size=16 callers=0 calls=0
*/
void sub_3d1370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1370ULL || rel >= 0x3d1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1380 size=32 callers=0 calls=0
*/
void sub_3d1380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1380ULL || rel >= 0x3d13a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d13a0 size=16 callers=0 calls=0
*/
void sub_3d13a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d13a0ULL || rel >= 0x3d13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d13b0 size=80 callers=0 calls=1
   calls: sub_3cd4d0
*/
void sub_3d13b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d13b0ULL || rel >= 0x3d1400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1400 size=32 callers=0 calls=0
*/
void sub_3d1400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1400ULL || rel >= 0x3d1420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1420 size=64 callers=0 calls=1
   calls: sub_3cd300
*/
void sub_3d1420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1420ULL || rel >= 0x3d1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1460 size=32 callers=0 calls=0
*/
void sub_3d1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1460ULL || rel >= 0x3d1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1480 size=32 callers=0 calls=0
*/
void sub_3d1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1480ULL || rel >= 0x3d14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d14a0 size=32 callers=0 calls=0
*/
void sub_3d14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d14a0ULL || rel >= 0x3d14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d14c0 size=16 callers=0 calls=0
*/
void sub_3d14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d14c0ULL || rel >= 0x3d14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d14d0 size=16 callers=0 calls=0
*/
void sub_3d14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d14d0ULL || rel >= 0x3d14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d14e0 size=96 callers=1 calls=1
   calls: sub_37d6b0
*/
void sub_3d14e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d14e0ULL || rel >= 0x3d1540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1540 size=144 callers=0 calls=0
*/
void sub_3d1540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1540ULL || rel >= 0x3d15d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d15d0 size=544 callers=3 calls=1
   calls: sub_3cad80
*/
void sub_3d15d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d15d0ULL || rel >= 0x3d17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d17f0 size=320 callers=2 calls=3
   calls: sub_3047c0, sub_3c9550, sub_3d1930
*/
void sub_3d17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d17f0ULL || rel >= 0x3d1930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1930 size=640 callers=3 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_3d1930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1930ULL || rel >= 0x3d1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1bb0 size=16 callers=0 calls=0
*/
void sub_3d1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1bb0ULL || rel >= 0x3d1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1bc0 size=48 callers=0 calls=1
   calls: sub_3d17f0
*/
void sub_3d1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1bc0ULL || rel >= 0x3d1bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1bf0 size=48 callers=0 calls=1
   calls: sub_3d17f0
*/
void sub_3d1bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1bf0ULL || rel >= 0x3d1c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1c20 size=1072 callers=4 calls=11
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_3047c0, sub_35f000, sub_35f280, sub_361750, sub_3c9ef0, sub_3ca300, sub_3ca450, sub_3ca4b0
*/
void sub_3d1c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1c20ULL || rel >= 0x3d2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2050 size=576 callers=1 calls=4
   calls: sub_35f000, sub_35f280, sub_361750, sub_3ca3b0
*/
void sub_3d2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2050ULL || rel >= 0x3d2290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2290 size=336 callers=2 calls=0
*/
void sub_3d2290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2290ULL || rel >= 0x3d23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d23e0 size=480 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3d25c0
*/
void sub_3d23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d23e0ULL || rel >= 0x3d25c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d25c0 size=1440 callers=1 calls=2
   calls: sub_3045e0, sub_3046a0
*/
void sub_3d25c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d25c0ULL || rel >= 0x3d2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2b60 size=128 callers=0 calls=0
*/
void sub_3d2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2b60ULL || rel >= 0x3d2be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2be0 size=80 callers=0 calls=1
   calls: sub_37d6b0
*/
void sub_3d2be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2be0ULL || rel >= 0x3d2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2c30 size=80 callers=0 calls=1
   calls: sub_37d6b0
*/
void sub_3d2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2c30ULL || rel >= 0x3d2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2c80 size=224 callers=0 calls=2
   calls: sub_3c9600, sub_3ca400
*/
void sub_3d2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2c80ULL || rel >= 0x3d2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2d60 size=224 callers=0 calls=2
   calls: sub_3c9600, sub_3ca400
*/
void sub_3d2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2d60ULL || rel >= 0x3d2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2e40 size=128 callers=0 calls=0
*/
void sub_3d2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2e40ULL || rel >= 0x3d2ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2ec0 size=128 callers=0 calls=0
*/
void sub_3d2ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2ec0ULL || rel >= 0x3d2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2f40 size=112 callers=0 calls=0
*/
void sub_3d2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2f40ULL || rel >= 0x3d2fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2fb0 size=16 callers=0 calls=0
*/
void sub_3d2fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2fb0ULL || rel >= 0x3d2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2fc0 size=16 callers=0 calls=0
*/
void sub_3d2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2fc0ULL || rel >= 0x3d2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2fd0 size=16 callers=0 calls=0
*/
void sub_3d2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2fd0ULL || rel >= 0x3d2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2fe0 size=16 callers=0 calls=0
*/
void sub_3d2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2fe0ULL || rel >= 0x3d2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2ff0 size=16 callers=0 calls=0
*/
void sub_3d2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2ff0ULL || rel >= 0x3d3000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3000 size=16 callers=0 calls=0
*/
void sub_3d3000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3000ULL || rel >= 0x3d3010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3010 size=128 callers=0 calls=0
*/
void sub_3d3010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3010ULL || rel >= 0x3d3090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3090 size=128 callers=0 calls=0
*/
void sub_3d3090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3090ULL || rel >= 0x3d3110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3110 size=96 callers=0 calls=1
   calls: sub_369930
*/
void sub_3d3110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3110ULL || rel >= 0x3d3170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3170 size=96 callers=0 calls=1
   calls: sub_369930
*/
void sub_3d3170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3170ULL || rel >= 0x3d31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d31d0 size=16 callers=0 calls=0
*/
void sub_3d31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d31d0ULL || rel >= 0x3d31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d31e0 size=16 callers=0 calls=0
*/
void sub_3d31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d31e0ULL || rel >= 0x3d31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d31f0 size=96 callers=0 calls=1
   calls: sub_37d6b0
*/
void sub_3d31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d31f0ULL || rel >= 0x3d3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3250 size=96 callers=0 calls=1
   calls: sub_37d6b0
*/
void sub_3d3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3250ULL || rel >= 0x3d32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d32b0 size=144 callers=0 calls=1
   calls: sub_3ad110
*/
void sub_3d32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d32b0ULL || rel >= 0x3d3340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3340 size=144 callers=0 calls=1
   calls: sub_3ad110
*/
void sub_3d3340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3340ULL || rel >= 0x3d33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d33d0 size=336 callers=0 calls=2
   calls: sub_37d6b0, sub_3ad140
*/
void sub_3d33d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d33d0ULL || rel >= 0x3d3520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3520 size=16 callers=0 calls=0
*/
void sub_3d3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3520ULL || rel >= 0x3d3530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3530 size=96 callers=0 calls=1
   calls: sub_37d6b0
*/
void sub_3d3530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3530ULL || rel >= 0x3d3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3590 size=96 callers=0 calls=1
   calls: sub_37d6b0
*/
void sub_3d3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3590ULL || rel >= 0x3d35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d35f0 size=192 callers=0 calls=2
   calls: sub_3c0e30, sub_3c10c0
*/
void sub_3d35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d35f0ULL || rel >= 0x3d36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d36b0 size=192 callers=0 calls=2
   calls: sub_3c0e30, sub_3c10c0
*/
void sub_3d36b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d36b0ULL || rel >= 0x3d3770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3770 size=48 callers=0 calls=1
   calls: sub_3c1450
*/
void sub_3d3770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3770ULL || rel >= 0x3d37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d37a0 size=48 callers=0 calls=1
   calls: sub_3c1450
*/
void sub_3d37a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d37a0ULL || rel >= 0x3d37d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d37d0 size=64 callers=0 calls=1
   calls: sub_3c0fb0
*/
void sub_3d37d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d37d0ULL || rel >= 0x3d3810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

