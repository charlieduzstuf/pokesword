/* sdk functions 004d6c68..004f5be0 (51 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 004d6c68 size=24 callers=0 calls=0
*/
void sub_4d6c68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6c68ULL || rel >= 0x4d6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6c80 size=16 callers=0 calls=0
*/
void sub_4d6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6c80ULL || rel >= 0x4d6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6c90 size=16 callers=0 calls=0
*/
void sub_4d6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6c90ULL || rel >= 0x4d6ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6ca0 size=16 callers=0 calls=0
*/
void sub_4d6ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6ca0ULL || rel >= 0x4d6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6cb0 size=16 callers=0 calls=0
*/
void sub_4d6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6cb0ULL || rel >= 0x4d6cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6cc0 size=16 callers=0 calls=0
*/
void sub_4d6cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6cc0ULL || rel >= 0x4d6cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6cd0 size=16 callers=0 calls=0
*/
void sub_4d6cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6cd0ULL || rel >= 0x4d6ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6ce0 size=16 callers=0 calls=0
*/
void sub_4d6ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6ce0ULL || rel >= 0x4d6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6cf0 size=16 callers=0 calls=0
*/
void sub_4d6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6cf0ULL || rel >= 0x4d6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6d00 size=48 callers=0 calls=0
*/
void sub_4d6d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6d00ULL || rel >= 0x4d6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6d30 size=48 callers=0 calls=0
*/
void sub_4d6d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6d30ULL || rel >= 0x4d6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6d60 size=32 callers=0 calls=0
*/
void sub_4d6d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6d60ULL || rel >= 0x4d6d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6d80 size=32 callers=0 calls=0
*/
void sub_4d6d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6d80ULL || rel >= 0x4d6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6da0 size=16 callers=0 calls=0
*/
void sub_4d6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6da0ULL || rel >= 0x4d6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6db0 size=16 callers=0 calls=0
*/
void sub_4d6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6db0ULL || rel >= 0x4d6dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6dc0 size=48 callers=0 calls=0
*/
void sub_4d6dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6dc0ULL || rel >= 0x4d6df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6df0 size=48 callers=0 calls=0
*/
void sub_4d6df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6df0ULL || rel >= 0x4d6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6e20 size=80 callers=0 calls=0
*/
void sub_4d6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6e20ULL || rel >= 0x4d6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6e70 size=80 callers=0 calls=0
*/
void sub_4d6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6e70ULL || rel >= 0x4d6ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6ec0 size=8 callers=0 calls=0
*/
void sub_4d6ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6ec0ULL || rel >= 0x4d6ec8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6ec8 size=8 callers=0 calls=0
*/
void sub_4d6ec8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6ec8ULL || rel >= 0x4d6ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6ed0 size=72 callers=0 calls=0
*/
void sub_4d6ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6ed0ULL || rel >= 0x4d6f18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6f18 size=72 callers=0 calls=0
*/
void sub_4d6f18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6f18ULL || rel >= 0x4d6f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6f60 size=104 callers=0 calls=0
*/
void sub_4d6f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6f60ULL || rel >= 0x4d6fc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6fc8 size=504 callers=0 calls=0
   ref: xdigit
*/
void xdigit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6fc8ULL || rel >= 0x4d71c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d71c0 size=8 callers=0 calls=0
*/
void sub_4d71c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d71c0ULL || rel >= 0x4d71c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d71c8 size=8 callers=0 calls=0
*/
void sub_4d71c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d71c8ULL || rel >= 0x4d71d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d71d0 size=16 callers=0 calls=0
*/
void sub_4d71d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d71d0ULL || rel >= 0x4d71e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d71e0 size=16 callers=0 calls=0
*/
void sub_4d71e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d71e0ULL || rel >= 0x4d71f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d71f0 size=72 callers=0 calls=0
*/
void sub_4d71f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d71f0ULL || rel >= 0x4d7238ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7238 size=72 callers=0 calls=0
*/
void sub_4d7238(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7238ULL || rel >= 0x4d7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7280 size=40 callers=0 calls=0
*/
void sub_4d7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7280ULL || rel >= 0x4d72a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d72a8 size=40 callers=0 calls=0
*/
void sub_4d72a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d72a8ULL || rel >= 0x4d72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d72d0 size=128 callers=0 calls=0
*/
void sub_4d72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d72d0ULL || rel >= 0x4d7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7350 size=136 callers=0 calls=0
*/
void sub_4d7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7350ULL || rel >= 0x4d73d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d73d8 size=64 callers=0 calls=0
*/
void sub_4d73d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d73d8ULL || rel >= 0x4d7418ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7418 size=64 callers=0 calls=0
*/
void sub_4d7418(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7418ULL || rel >= 0x4d7458ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7458 size=48 callers=0 calls=0
*/
void sub_4d7458(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7458ULL || rel >= 0x4d7488ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7488 size=48 callers=0 calls=0
*/
void sub_4d7488(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7488ULL || rel >= 0x4d74b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d74b8 size=40 callers=0 calls=0
*/
void sub_4d74b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d74b8ULL || rel >= 0x4d74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d74e0 size=40 callers=0 calls=0
*/
void sub_4d74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d74e0ULL || rel >= 0x4d7508ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7508 size=40 callers=0 calls=0
*/
void sub_4d7508(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7508ULL || rel >= 0x4d7530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7530 size=40 callers=0 calls=0
*/
void sub_4d7530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7530ULL || rel >= 0x4d7558ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7558 size=40 callers=0 calls=0
*/
void sub_4d7558(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7558ULL || rel >= 0x4d7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7580 size=40 callers=0 calls=0
*/
void sub_4d7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7580ULL || rel >= 0x4d75a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d75a8 size=8 callers=0 calls=0
*/
void sub_4d75a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d75a8ULL || rel >= 0x4d75b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d75b0 size=24 callers=0 calls=0
*/
void sub_4d75b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d75b0ULL || rel >= 0x4d75c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d75c8 size=24 callers=0 calls=0
*/
void sub_4d75c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d75c8ULL || rel >= 0x4d75e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d75e0 size=24 callers=0 calls=0
*/
void sub_4d75e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d75e0ULL || rel >= 0x4d75f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d75f8 size=24 callers=0 calls=0
*/
void sub_4d75f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d75f8ULL || rel >= 0x4d7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7610 size=24 callers=0 calls=0
*/
void sub_4d7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7610ULL || rel >= 0x4d7628ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7628 size=744 callers=0 calls=0
*/
void sub_4d7628(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7628ULL || rel >= 0x4d7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7910 size=24 callers=0 calls=0
*/
void sub_4d7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7910ULL || rel >= 0x4d7928ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7928 size=24 callers=0 calls=0
*/
void sub_4d7928(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7928ULL || rel >= 0x4d7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7940 size=24 callers=0 calls=0
*/
void sub_4d7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7940ULL || rel >= 0x4d7958ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7958 size=104 callers=0 calls=0
*/
void sub_4d7958(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7958ULL || rel >= 0x4d79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d79c0 size=88 callers=0 calls=0
   ref: toupper
   ref: tolower
*/
void toupper(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d79c0ULL || rel >= 0x4d7a18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7a18 size=32 callers=0 calls=0
*/
void sub_4d7a18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7a18ULL || rel >= 0x4d7a38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7a38 size=88 callers=0 calls=0
   ref: toupper
   ref: tolower
*/
void toupper_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7a38ULL || rel >= 0x4d7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7a90 size=32 callers=0 calls=0
*/
void sub_4d7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7a90ULL || rel >= 0x4d7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7ab0 size=248 callers=0 calls=0
*/
void sub_4d7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7ab0ULL || rel >= 0x4d7ba8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7ba8 size=16 callers=0 calls=0
*/
void sub_4d7ba8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7ba8ULL || rel >= 0x4d7bb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7bb8 size=8 callers=0 calls=0
*/
void sub_4d7bb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7bb8ULL || rel >= 0x4d7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7bc0 size=16 callers=0 calls=0
*/
void sub_4d7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7bc0ULL || rel >= 0x4d7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7bd0 size=16 callers=0 calls=0
*/
void sub_4d7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7bd0ULL || rel >= 0x4d7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7be0 size=24 callers=0 calls=0
*/
void sub_4d7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7be0ULL || rel >= 0x4d7bf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7bf8 size=576 callers=0 calls=0
*/
void sub_4d7bf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7bf8ULL || rel >= 0x4d7e38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7e38 size=24 callers=0 calls=0
*/
void sub_4d7e38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7e38ULL || rel >= 0x4d7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7e50 size=80 callers=0 calls=1
   calls: sub_4d80f8
*/
void sub_4d7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7e50ULL || rel >= 0x4d7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7ea0 size=224 callers=0 calls=1
   calls: sub_4f7ef0
*/
void sub_4d7ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7ea0ULL || rel >= 0x4d7f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7f80 size=296 callers=0 calls=1
   calls: sub_4d80f8
*/
void sub_4d7f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7f80ULL || rel >= 0x4d80a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d80a8 size=80 callers=0 calls=1
   calls: sub_4f7ef0
*/
void sub_4d80a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d80a8ULL || rel >= 0x4d80f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d80f8 size=160 callers=3 calls=0
*/
void sub_4d80f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d80f8ULL || rel >= 0x4d8198ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8198 size=232 callers=0 calls=1
   calls: sub_4f7ef0
*/
void sub_4d8198(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8198ULL || rel >= 0x4d8280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8280 size=240 callers=0 calls=2
   calls: sub_4d80f8, sub_4f7ef0
*/
void sub_4d8280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8280ULL || rel >= 0x4d8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8370 size=88 callers=0 calls=0
   ref: Illegal byte sequence
*/
void Illegal_byte_sequence(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8370ULL || rel >= 0x4d83c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d83c8 size=120 callers=0 calls=0
   ref: Illegal byte sequence
*/
void Illegal_byte_sequence_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d83c8ULL || rel >= 0x4d8440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8440 size=64 callers=0 calls=0
   ref: Assertion failed: %s (%s: %s: %d)
*/
void Assertion_failed_s_s_s_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8440ULL || rel >= 0x4d8480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8480 size=32 callers=0 calls=0
*/
void sub_4d8480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8480ULL || rel >= 0x4d84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d84a0 size=16 callers=0 calls=0
*/
void sub_4d84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d84a0ULL || rel >= 0x4d84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d84b0 size=48 callers=0 calls=0
*/
void sub_4d84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d84b0ULL || rel >= 0x4d84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d84e0 size=32 callers=0 calls=0
*/
void sub_4d84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d84e0ULL || rel >= 0x4d8500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8500 size=64 callers=0 calls=0
*/
void sub_4d8500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8500ULL || rel >= 0x4d8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8540 size=64 callers=0 calls=0
*/
void sub_4d8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8540ULL || rel >= 0x4d8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8580 size=64 callers=0 calls=0
*/
void sub_4d8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8580ULL || rel >= 0x4d85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d85c0 size=8 callers=0 calls=0
*/
void sub_4d85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d85c0ULL || rel >= 0x4d85c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d85c8 size=8 callers=0 calls=0
*/
void sub_4d85c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d85c8ULL || rel >= 0x4d85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d85d0 size=40 callers=0 calls=0
*/
void sub_4d85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d85d0ULL || rel >= 0x4d85f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d85f8 size=88 callers=0 calls=0
*/
void sub_4d85f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d85f8ULL || rel >= 0x4d8650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8650 size=56 callers=0 calls=0
*/
void sub_4d8650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8650ULL || rel >= 0x4d8688ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8688 size=208 callers=0 calls=1
   calls: sub_4d8758
*/
void sub_4d8688(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8688ULL || rel >= 0x4d8758ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8758 size=424 callers=3 calls=0
*/
void sub_4d8758(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8758ULL || rel >= 0x4d8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8900 size=5216 callers=1 calls=2
   calls: sub_4d8758, sub_4d8900
*/
void sub_4d8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8900ULL || rel >= 0x4d9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d9d60 size=32 callers=0 calls=0
*/
void sub_4d9d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d9d60ULL || rel >= 0x4d9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d9d80 size=264 callers=0 calls=0
*/
void sub_4d9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d9d80ULL || rel >= 0x4d9e88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d9e88 size=352 callers=0 calls=0
*/
void sub_4d9e88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d9e88ULL || rel >= 0x4d9fe8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d9fe8 size=16 callers=0 calls=0
*/
void sub_4d9fe8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d9fe8ULL || rel >= 0x4d9ff8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d9ff8 size=56 callers=0 calls=0
*/
void sub_4d9ff8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d9ff8ULL || rel >= 0x4da030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da030 size=808 callers=0 calls=0
*/
void sub_4da030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da030ULL || rel >= 0x4da358ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da358 size=64 callers=1 calls=1
   calls: sub_4da398
*/
void sub_4da358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da358ULL || rel >= 0x4da398ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da398 size=184 callers=4 calls=2
   calls: sub_4da398, unnamed_37
*/
void sub_4da398(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da398ULL || rel >= 0x4da450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da450 size=536 callers=2 calls=2
   calls: sub_4da668, unnamed_37
   ref: |&====
*/
void unnamed_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da450ULL || rel >= 0x4da668ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da668 size=376 callers=2 calls=2
   calls: sub_4da398, sub_4da668
*/
void sub_4da668(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da668ULL || rel >= 0x4da7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da7e0 size=8 callers=0 calls=0
*/
void sub_4da7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da7e0ULL || rel >= 0x4da7e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da7e8 size=48 callers=0 calls=0
*/
void sub_4da7e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da7e8ULL || rel >= 0x4da818ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da818 size=104 callers=0 calls=1
   calls: sub_4da880
*/
void sub_4da818(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da818ULL || rel >= 0x4da880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da880 size=560 callers=2 calls=0
*/
void sub_4da880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da880ULL || rel >= 0x4daab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004daab0 size=152 callers=0 calls=1
   calls: sub_4da880
*/
void sub_4daab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4daab0ULL || rel >= 0x4dab48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dab48 size=80 callers=0 calls=0
*/
void sub_4dab48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dab48ULL || rel >= 0x4dab98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dab98 size=88 callers=0 calls=0
*/
void sub_4dab98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dab98ULL || rel >= 0x4dabf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dabf0 size=32 callers=0 calls=0
   ref: messages
*/
void messages(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dabf0ULL || rel >= 0x4dac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dac10 size=160 callers=0 calls=0
   ref: messages
*/
void messages_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dac10ULL || rel >= 0x4dacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dacb0 size=16 callers=0 calls=0
*/
void sub_4dacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dacb0ULL || rel >= 0x4dacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dacc0 size=24 callers=0 calls=0
*/
void sub_4dacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dacc0ULL || rel >= 0x4dacd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dacd8 size=8 callers=0 calls=0
*/
void sub_4dacd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dacd8ULL || rel >= 0x4dace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dace0 size=48 callers=0 calls=0
*/
void sub_4dace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dace0ULL || rel >= 0x4dad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dad10 size=120 callers=0 calls=0
*/
void sub_4dad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dad10ULL || rel >= 0x4dad88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dad88 size=120 callers=0 calls=0
*/
void sub_4dad88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dad88ULL || rel >= 0x4dae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dae00 size=8 callers=0 calls=0
*/
void sub_4dae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dae00ULL || rel >= 0x4dae08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dae08 size=48 callers=0 calls=0
*/
void sub_4dae08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dae08ULL || rel >= 0x4dae38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dae38 size=600 callers=0 calls=0
*/
void sub_4dae38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dae38ULL || rel >= 0x4db090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db090 size=104 callers=0 calls=1
   calls: sub_507720
*/
void sub_4db090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db090ULL || rel >= 0x4db0f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db0f8 size=8 callers=0 calls=0
*/
void sub_4db0f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db0f8ULL || rel >= 0x4db100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db100 size=8 callers=0 calls=0
*/
void sub_4db100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db100ULL || rel >= 0x4db108ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db108 size=8 callers=0 calls=0
*/
void sub_4db108(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db108ULL || rel >= 0x4db110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db110 size=8 callers=0 calls=0
*/
void sub_4db110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db110ULL || rel >= 0x4db118ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db118 size=8 callers=0 calls=0
*/
void sub_4db118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db118ULL || rel >= 0x4db120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db120 size=8 callers=0 calls=0
*/
void sub_4db120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db120ULL || rel >= 0x4db128ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db128 size=8 callers=0 calls=0
*/
void sub_4db128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db128ULL || rel >= 0x4db130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db130 size=8 callers=0 calls=0
*/
void sub_4db130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db130ULL || rel >= 0x4db138ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db138 size=8 callers=0 calls=0
*/
void sub_4db138(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db138ULL || rel >= 0x4db140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db140 size=8 callers=0 calls=0
*/
void sub_4db140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db140ULL || rel >= 0x4db148ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db148 size=8 callers=0 calls=0
*/
void sub_4db148(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db148ULL || rel >= 0x4db150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db150 size=8 callers=0 calls=0
*/
void sub_4db150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db150ULL || rel >= 0x4db158ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db158 size=16 callers=0 calls=0
*/
void sub_4db158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db158ULL || rel >= 0x4db168ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db168 size=16 callers=0 calls=0
*/
void sub_4db168(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db168ULL || rel >= 0x4db178ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db178 size=8 callers=0 calls=0
*/
void sub_4db178(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db178ULL || rel >= 0x4db180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db180 size=8 callers=0 calls=0
*/
void sub_4db180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db180ULL || rel >= 0x4db188ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db188 size=16 callers=0 calls=0
*/
void sub_4db188(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db188ULL || rel >= 0x4db198ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db198 size=16 callers=0 calls=0
*/
void sub_4db198(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db198ULL || rel >= 0x4db1a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1a8 size=8 callers=0 calls=0
*/
void sub_4db1a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1a8ULL || rel >= 0x4db1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1b0 size=8 callers=0 calls=0
*/
void sub_4db1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1b0ULL || rel >= 0x4db1b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1b8 size=8 callers=0 calls=0
*/
void sub_4db1b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1b8ULL || rel >= 0x4db1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1c0 size=8 callers=0 calls=0
*/
void sub_4db1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1c0ULL || rel >= 0x4db1c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1c8 size=8 callers=0 calls=0
*/
void sub_4db1c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1c8ULL || rel >= 0x4db1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1d0 size=8 callers=0 calls=0
*/
void sub_4db1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1d0ULL || rel >= 0x4db1d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1d8 size=8 callers=0 calls=0
*/
void sub_4db1d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1d8ULL || rel >= 0x4db1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1e0 size=8 callers=0 calls=0
*/
void sub_4db1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1e0ULL || rel >= 0x4db1e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1e8 size=8 callers=0 calls=0
*/
void sub_4db1e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1e8ULL || rel >= 0x4db1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1f0 size=8 callers=0 calls=0
*/
void sub_4db1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1f0ULL || rel >= 0x4db1f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db1f8 size=8 callers=0 calls=0
*/
void sub_4db1f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db1f8ULL || rel >= 0x4db200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db200 size=8 callers=0 calls=0
*/
void sub_4db200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db200ULL || rel >= 0x4db208ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db208 size=208 callers=0 calls=0
*/
void sub_4db208(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db208ULL || rel >= 0x4db2d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db2d8 size=208 callers=0 calls=0
*/
void sub_4db2d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db2d8ULL || rel >= 0x4db3a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db3a8 size=32 callers=0 calls=0
*/
void sub_4db3a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db3a8ULL || rel >= 0x4db3c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db3c8 size=568 callers=0 calls=1
   calls: sub_4e4f08
*/
void sub_4db3c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db3c8ULL || rel >= 0x4db600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db600 size=416 callers=0 calls=0
*/
void sub_4db600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db600ULL || rel >= 0x4db7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db7a0 size=256 callers=0 calls=0
*/
void sub_4db7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db7a0ULL || rel >= 0x4db8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db8a0 size=264 callers=0 calls=0
*/
void sub_4db8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db8a0ULL || rel >= 0x4db9a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db9a8 size=32 callers=0 calls=0
*/
void sub_4db9a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db9a8ULL || rel >= 0x4db9c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db9c8 size=656 callers=0 calls=1
   calls: sub_4e4f08
*/
void sub_4db9c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db9c8ULL || rel >= 0x4dbc58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dbc58 size=528 callers=0 calls=0
*/
void sub_4dbc58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dbc58ULL || rel >= 0x4dbe68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dbe68 size=472 callers=0 calls=0
*/
void sub_4dbe68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dbe68ULL || rel >= 0x4dc040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc040 size=456 callers=0 calls=0
*/
void sub_4dc040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc040ULL || rel >= 0x4dc208ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc208 size=728 callers=0 calls=0
   ref: N7android10AllocationE
*/
void N7android10AllocationE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc208ULL || rel >= 0x4dc4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc4e0 size=424 callers=0 calls=0
*/
void sub_4dc4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc4e0ULL || rel >= 0x4dc688ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc688 size=136 callers=0 calls=0
*/
void sub_4dc688(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc688ULL || rel >= 0x4dc710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc710 size=144 callers=0 calls=0
*/
void sub_4dc710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc710ULL || rel >= 0x4dc7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc7a0 size=272 callers=0 calls=0
*/
void sub_4dc7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc7a0ULL || rel >= 0x4dc8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc8b0 size=1224 callers=0 calls=0
*/
void sub_4dc8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc8b0ULL || rel >= 0x4dcd78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcd78 size=272 callers=0 calls=0
*/
void sub_4dcd78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcd78ULL || rel >= 0x4dce88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dce88 size=192 callers=0 calls=0
*/
void sub_4dce88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dce88ULL || rel >= 0x4dcf48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcf48 size=600 callers=0 calls=0
*/
void sub_4dcf48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcf48ULL || rel >= 0x4dd1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd1a0 size=304 callers=0 calls=0
*/
void sub_4dd1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd1a0ULL || rel >= 0x4dd2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd2d0 size=24 callers=0 calls=0
*/
void sub_4dd2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd2d0ULL || rel >= 0x4dd2e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd2e8 size=24 callers=0 calls=0
*/
void sub_4dd2e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd2e8ULL || rel >= 0x4dd300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd300 size=48 callers=0 calls=0
*/
void sub_4dd300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd300ULL || rel >= 0x4dd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd330 size=264 callers=0 calls=0
*/
void sub_4dd330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd330ULL || rel >= 0x4dd438ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd438 size=504 callers=0 calls=0
*/
void sub_4dd438(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd438ULL || rel >= 0x4dd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd630 size=192 callers=0 calls=0
*/
void sub_4dd630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd630ULL || rel >= 0x4dd6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd6f0 size=192 callers=0 calls=0
*/
void sub_4dd6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd6f0ULL || rel >= 0x4dd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd7b0 size=32 callers=0 calls=0
*/
void sub_4dd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd7b0ULL || rel >= 0x4dd7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd7d0 size=312 callers=0 calls=0
*/
void sub_4dd7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd7d0ULL || rel >= 0x4dd908ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd908 size=384 callers=0 calls=1
   calls: sub_4dda88
*/
void sub_4dd908(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd908ULL || rel >= 0x4dda88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dda88 size=800 callers=2 calls=0
*/
void sub_4dda88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dda88ULL || rel >= 0x4ddda8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddda8 size=416 callers=0 calls=1
   calls: sub_4dda88
*/
void sub_4ddda8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddda8ULL || rel >= 0x4ddf48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddf48 size=384 callers=0 calls=1
   calls: sub_4de0c8
*/
void sub_4ddf48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddf48ULL || rel >= 0x4de0c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de0c8 size=800 callers=2 calls=0
*/
void sub_4de0c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de0c8ULL || rel >= 0x4de3e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de3e8 size=408 callers=0 calls=1
   calls: sub_4de0c8
*/
void sub_4de3e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de3e8ULL || rel >= 0x4de580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de580 size=32 callers=0 calls=0
*/
void sub_4de580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de580ULL || rel >= 0x4de5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de5a0 size=32 callers=0 calls=0
*/
void sub_4de5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de5a0ULL || rel >= 0x4de5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de5c0 size=448 callers=0 calls=0
   ref: >UUUUU
*/
void UUUUU(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de5c0ULL || rel >= 0x4de780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de780 size=176 callers=0 calls=0
*/
void sub_4de780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de780ULL || rel >= 0x4de830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de830 size=192 callers=0 calls=0
*/
void sub_4de830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de830ULL || rel >= 0x4de8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de8f0 size=208 callers=0 calls=0
*/
void sub_4de8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de8f0ULL || rel >= 0x4de9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de9c0 size=408 callers=0 calls=0
*/
void sub_4de9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de9c0ULL || rel >= 0x4deb58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004deb58 size=320 callers=0 calls=0
*/
void sub_4deb58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4deb58ULL || rel >= 0x4dec98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dec98 size=768 callers=0 calls=0
*/
void sub_4dec98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dec98ULL || rel >= 0x4def98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004def98 size=384 callers=0 calls=0
*/
void sub_4def98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4def98ULL || rel >= 0x4df118ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df118 size=32 callers=0 calls=0
*/
void sub_4df118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df118ULL || rel >= 0x4df138ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df138 size=32 callers=0 calls=0
*/
void sub_4df138(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df138ULL || rel >= 0x4df158ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df158 size=32 callers=0 calls=0
*/
void sub_4df158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df158ULL || rel >= 0x4df178ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df178 size=144 callers=0 calls=0
*/
void sub_4df178(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df178ULL || rel >= 0x4df208ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df208 size=24 callers=0 calls=0
*/
void sub_4df208(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df208ULL || rel >= 0x4df220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df220 size=24 callers=0 calls=0
*/
void sub_4df220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df220ULL || rel >= 0x4df238ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df238 size=288 callers=0 calls=0
*/
void sub_4df238(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df238ULL || rel >= 0x4df358ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df358 size=1464 callers=0 calls=0
*/
void sub_4df358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df358ULL || rel >= 0x4df910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df910 size=168 callers=0 calls=0
*/
void sub_4df910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df910ULL || rel >= 0x4df9b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df9b8 size=168 callers=0 calls=0
*/
void sub_4df9b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df9b8ULL || rel >= 0x4dfa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfa60 size=352 callers=0 calls=0
*/
void sub_4dfa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfa60ULL || rel >= 0x4dfbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfbc0 size=336 callers=0 calls=0
*/
void sub_4dfbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfbc0ULL || rel >= 0x4dfd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfd10 size=608 callers=0 calls=0
*/
void sub_4dfd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfd10ULL || rel >= 0x4dff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dff70 size=120 callers=1 calls=1
   calls: sub_4dff70
*/
void sub_4dff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dff70ULL || rel >= 0x4dffe8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dffe8 size=120 callers=1 calls=1
   calls: sub_4dffe8
*/
void sub_4dffe8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dffe8ULL || rel >= 0x4e0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0060 size=208 callers=1 calls=1
   calls: sub_4e0060
*/
void sub_4e0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0060ULL || rel >= 0x4e0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0130 size=344 callers=0 calls=0
*/
void sub_4e0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0130ULL || rel >= 0x4e0288ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0288 size=240 callers=0 calls=0
*/
void sub_4e0288(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0288ULL || rel >= 0x4e0378ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0378 size=768 callers=0 calls=0
*/
void sub_4e0378(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0378ULL || rel >= 0x4e0678ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0678 size=8 callers=0 calls=0
*/
void sub_4e0678(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0678ULL || rel >= 0x4e0680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0680 size=8 callers=0 calls=0
*/
void sub_4e0680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0680ULL || rel >= 0x4e0688ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0688 size=8 callers=0 calls=0
*/
void sub_4e0688(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0688ULL || rel >= 0x4e0690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0690 size=16 callers=0 calls=0
*/
void sub_4e0690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0690ULL || rel >= 0x4e06a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e06a0 size=16 callers=0 calls=0
*/
void sub_4e06a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e06a0ULL || rel >= 0x4e06b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e06b0 size=1816 callers=0 calls=0
*/
void sub_4e06b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e06b0ULL || rel >= 0x4e0dc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0dc8 size=48 callers=0 calls=0
*/
void sub_4e0dc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0dc8ULL || rel >= 0x4e0df8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0df8 size=40 callers=0 calls=0
*/
void sub_4e0df8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0df8ULL || rel >= 0x4e0e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0e20 size=1824 callers=0 calls=0
*/
void sub_4e0e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0e20ULL || rel >= 0x4e1540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1540 size=136 callers=0 calls=0
*/
void sub_4e1540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1540ULL || rel >= 0x4e15c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e15c8 size=24 callers=0 calls=0
*/
void sub_4e15c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e15c8ULL || rel >= 0x4e15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e15e0 size=376 callers=0 calls=0
*/
void sub_4e15e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e15e0ULL || rel >= 0x4e1758ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1758 size=448 callers=0 calls=0
*/
void sub_4e1758(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1758ULL || rel >= 0x4e1918ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1918 size=376 callers=0 calls=0
*/
void sub_4e1918(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1918ULL || rel >= 0x4e1a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1a90 size=32 callers=0 calls=0
*/
void sub_4e1a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1a90ULL || rel >= 0x4e1ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1ab0 size=472 callers=0 calls=0
*/
void sub_4e1ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1ab0ULL || rel >= 0x4e1c88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1c88 size=416 callers=0 calls=0
*/
void sub_4e1c88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1c88ULL || rel >= 0x4e1e28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1e28 size=32 callers=0 calls=0
*/
void sub_4e1e28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1e28ULL || rel >= 0x4e1e48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1e48 size=424 callers=0 calls=0
*/
void sub_4e1e48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1e48ULL || rel >= 0x4e1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1ff0 size=344 callers=0 calls=0
*/
void sub_4e1ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1ff0ULL || rel >= 0x4e2148ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2148 size=32 callers=0 calls=0
*/
void sub_4e2148(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2148ULL || rel >= 0x4e2168ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2168 size=72 callers=0 calls=0
*/
void sub_4e2168(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2168ULL || rel >= 0x4e21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e21b0 size=72 callers=0 calls=0
*/
void sub_4e21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e21b0ULL || rel >= 0x4e21f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e21f8 size=136 callers=0 calls=0
*/
void sub_4e21f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e21f8ULL || rel >= 0x4e2280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2280 size=312 callers=0 calls=0
*/
void sub_4e2280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2280ULL || rel >= 0x4e23b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e23b8 size=32 callers=0 calls=0
*/
void sub_4e23b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e23b8ULL || rel >= 0x4e23d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e23d8 size=136 callers=0 calls=0
*/
void sub_4e23d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e23d8ULL || rel >= 0x4e2460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2460 size=24 callers=0 calls=0
*/
void sub_4e2460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2460ULL || rel >= 0x4e2478ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2478 size=136 callers=0 calls=0
*/
void sub_4e2478(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2478ULL || rel >= 0x4e2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2500 size=136 callers=0 calls=0
*/
void sub_4e2500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2500ULL || rel >= 0x4e2588ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2588 size=376 callers=0 calls=0
*/
void sub_4e2588(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2588ULL || rel >= 0x4e2700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2700 size=16 callers=0 calls=0
*/
void sub_4e2700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2700ULL || rel >= 0x4e2710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2710 size=16 callers=0 calls=0
*/
void sub_4e2710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2710ULL || rel >= 0x4e2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2720 size=16 callers=0 calls=0
*/
void sub_4e2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2720ULL || rel >= 0x4e2730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2730 size=96 callers=0 calls=0
*/
void sub_4e2730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2730ULL || rel >= 0x4e2790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2790 size=200 callers=0 calls=0
*/
void sub_4e2790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2790ULL || rel >= 0x4e2858ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2858 size=208 callers=0 calls=0
*/
void sub_4e2858(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2858ULL || rel >= 0x4e2928ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2928 size=368 callers=0 calls=0
*/
void sub_4e2928(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2928ULL || rel >= 0x4e2a98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2a98 size=264 callers=0 calls=0
*/
void sub_4e2a98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2a98ULL || rel >= 0x4e2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2ba0 size=272 callers=0 calls=0
*/
void sub_4e2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2ba0ULL || rel >= 0x4e2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2cb0 size=8 callers=0 calls=0
*/
void sub_4e2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2cb0ULL || rel >= 0x4e2cb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2cb8 size=32 callers=0 calls=0
*/
void sub_4e2cb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2cb8ULL || rel >= 0x4e2cd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2cd8 size=32 callers=0 calls=0
*/
void sub_4e2cd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2cd8ULL || rel >= 0x4e2cf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2cf8 size=32 callers=0 calls=0
*/
void sub_4e2cf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2cf8ULL || rel >= 0x4e2d18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2d18 size=464 callers=0 calls=0
*/
void sub_4e2d18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2d18ULL || rel >= 0x4e2ee8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2ee8 size=456 callers=0 calls=0
*/
void sub_4e2ee8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2ee8ULL || rel >= 0x4e30b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e30b0 size=824 callers=0 calls=0
*/
void sub_4e30b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e30b0ULL || rel >= 0x4e33e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e33e8 size=160 callers=0 calls=0
*/
void sub_4e33e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e33e8ULL || rel >= 0x4e3488ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3488 size=336 callers=0 calls=0
*/
void sub_4e3488(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3488ULL || rel >= 0x4e35d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e35d8 size=176 callers=0 calls=0
*/
void sub_4e35d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e35d8ULL || rel >= 0x4e3688ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3688 size=176 callers=0 calls=0
*/
void sub_4e3688(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3688ULL || rel >= 0x4e3738ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3738 size=32 callers=0 calls=0
*/
void sub_4e3738(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3738ULL || rel >= 0x4e3758ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3758 size=32 callers=0 calls=0
*/
void sub_4e3758(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3758ULL || rel >= 0x4e3778ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3778 size=32 callers=0 calls=0
*/
void sub_4e3778(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3778ULL || rel >= 0x4e3798ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3798 size=136 callers=0 calls=0
*/
void sub_4e3798(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3798ULL || rel >= 0x4e3820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3820 size=136 callers=0 calls=0
*/
void sub_4e3820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3820ULL || rel >= 0x4e38a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e38a8 size=216 callers=0 calls=0
*/
void sub_4e38a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e38a8ULL || rel >= 0x4e3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3980 size=40 callers=0 calls=0
*/
void sub_4e3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3980ULL || rel >= 0x4e39a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e39a8 size=40 callers=0 calls=0
*/
void sub_4e39a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e39a8ULL || rel >= 0x4e39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e39d0 size=280 callers=0 calls=0
*/
void sub_4e39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e39d0ULL || rel >= 0x4e3ae8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3ae8 size=352 callers=0 calls=0
*/
void sub_4e3ae8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3ae8ULL || rel >= 0x4e3c48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3c48 size=576 callers=0 calls=0
*/
void sub_4e3c48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3c48ULL || rel >= 0x4e3e88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3e88 size=416 callers=0 calls=0
*/
void sub_4e3e88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3e88ULL || rel >= 0x4e4028ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4028 size=472 callers=0 calls=0
*/
void sub_4e4028(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4028ULL || rel >= 0x4e4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4200 size=176 callers=0 calls=0
*/
void sub_4e4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4200ULL || rel >= 0x4e42b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e42b0 size=176 callers=0 calls=0
*/
void sub_4e42b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e42b0ULL || rel >= 0x4e4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4360 size=32 callers=0 calls=0
*/
void sub_4e4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4360ULL || rel >= 0x4e4380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4380 size=344 callers=0 calls=0
*/
void sub_4e4380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4380ULL || rel >= 0x4e44d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e44d8 size=64 callers=0 calls=0
*/
void sub_4e44d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e44d8ULL || rel >= 0x4e4518ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4518 size=184 callers=0 calls=0
*/
void sub_4e4518(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4518ULL || rel >= 0x4e45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e45d0 size=352 callers=0 calls=0
*/
void sub_4e45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e45d0ULL || rel >= 0x4e4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4730 size=224 callers=0 calls=0
*/
void sub_4e4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4730ULL || rel >= 0x4e4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4810 size=224 callers=0 calls=0
*/
void sub_4e4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4810ULL || rel >= 0x4e48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e48f0 size=32 callers=0 calls=0
*/
void sub_4e48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e48f0ULL || rel >= 0x4e4910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4910 size=248 callers=0 calls=0
*/
void sub_4e4910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4910ULL || rel >= 0x4e4a08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4a08 size=32 callers=0 calls=0
*/
void sub_4e4a08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4a08ULL || rel >= 0x4e4a28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4a28 size=288 callers=0 calls=0
*/
void sub_4e4a28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4a28ULL || rel >= 0x4e4b48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4b48 size=152 callers=0 calls=0
   ref: LUUUUU
*/
void LUUUUU(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4b48ULL || rel >= 0x4e4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4be0 size=88 callers=0 calls=0
*/
void sub_4e4be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4be0ULL || rel >= 0x4e4c38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4c38 size=424 callers=0 calls=0
   ref: HUUUUUUUUUUUUU
*/
void HUUUUUUUUUUUUU(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4c38ULL || rel >= 0x4e4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4de0 size=48 callers=0 calls=0
*/
void sub_4e4de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4de0ULL || rel >= 0x4e4e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4e10 size=48 callers=0 calls=0
*/
void sub_4e4e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4e10ULL || rel >= 0x4e4e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4e40 size=56 callers=0 calls=0
*/
void sub_4e4e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4e40ULL || rel >= 0x4e4e78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4e78 size=56 callers=0 calls=0
*/
void sub_4e4e78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4e78ULL || rel >= 0x4e4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4eb0 size=88 callers=0 calls=0
*/
void sub_4e4eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4eb0ULL || rel >= 0x4e4f08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4f08 size=424 callers=5 calls=0
*/
void sub_4e4f08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4f08ULL || rel >= 0x4e50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e50b0 size=72 callers=0 calls=0
*/
void sub_4e50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e50b0ULL || rel >= 0x4e50f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e50f8 size=104 callers=0 calls=0
*/
void sub_4e50f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e50f8ULL || rel >= 0x4e5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e5160 size=936 callers=0 calls=0
*/
void sub_4e5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e5160ULL || rel >= 0x4e5508ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e5508 size=232 callers=0 calls=0
*/
void sub_4e5508(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e5508ULL || rel >= 0x4e55f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e55f0 size=992 callers=0 calls=0
*/
void sub_4e55f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e55f0ULL || rel >= 0x4e59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e59d0 size=2616 callers=0 calls=0
*/
void sub_4e59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e59d0ULL || rel >= 0x4e6408ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6408 size=16 callers=0 calls=0
*/
void sub_4e6408(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6408ULL || rel >= 0x4e6418ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6418 size=16 callers=0 calls=0
*/
void sub_4e6418(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6418ULL || rel >= 0x4e6428ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6428 size=24 callers=0 calls=0
*/
void sub_4e6428(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6428ULL || rel >= 0x4e6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6440 size=168 callers=0 calls=0
   ref: IUUUUU
   ref: IUUUUU
*/
void IUUUUU(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6440ULL || rel >= 0x4e64e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e64e8 size=88 callers=0 calls=0
*/
void sub_4e64e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e64e8ULL || rel >= 0x4e6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6540 size=488 callers=0 calls=0
   ref: UUUUUUUUUUUUUU
   ref: UUUUUUUUUUUUUU
*/
void UUUUUUUUUUUUUU(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6540ULL || rel >= 0x4e6728ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6728 size=472 callers=0 calls=0
*/
void sub_4e6728(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6728ULL || rel >= 0x4e6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6900 size=136 callers=0 calls=0
*/
void sub_4e6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6900ULL || rel >= 0x4e6988ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6988 size=1384 callers=0 calls=0
   ref: SUUUUUUUUUUUUU
*/
void SUUUUUUUUUUUUU(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6988ULL || rel >= 0x4e6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6ef0 size=336 callers=0 calls=0
*/
void sub_4e6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6ef0ULL || rel >= 0x4e7040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7040 size=56 callers=0 calls=0
*/
void sub_4e7040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7040ULL || rel >= 0x4e7078ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7078 size=152 callers=0 calls=0
*/
void sub_4e7078(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7078ULL || rel >= 0x4e7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7110 size=288 callers=0 calls=0
*/
void sub_4e7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7110ULL || rel >= 0x4e7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7230 size=24 callers=0 calls=0
*/
void sub_4e7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7230ULL || rel >= 0x4e7248ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7248 size=24 callers=0 calls=0
*/
void sub_4e7248(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7248ULL || rel >= 0x4e7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7260 size=24 callers=0 calls=0
*/
void sub_4e7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7260ULL || rel >= 0x4e7278ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7278 size=208 callers=0 calls=1
   calls: sub_4bca08
*/
void sub_4e7278(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7278ULL || rel >= 0x4e7348ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7348 size=688 callers=0 calls=0
   ref: : option requires an argument: 
   ref: : unrecognized option: 
*/
void unrecognized_option(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7348ULL || rel >= 0x4e75f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e75f8 size=8 callers=0 calls=0
*/
void sub_4e75f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e75f8ULL || rel >= 0x4e7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7600 size=1472 callers=0 calls=0
   ref: : option requires an argument: 
   ref: : option is ambiguous: 
   ref: : option does not take an argument: 
   ref: : unrecognized option: 
*/
void unrecognized_option_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7600ULL || rel >= 0x4e7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7bc0 size=8 callers=0 calls=0
*/
void sub_4e7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7bc0ULL || rel >= 0x4e7bc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7bc8 size=240 callers=0 calls=0
*/
void sub_4e7bc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7bc8ULL || rel >= 0x4e7cb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7cb8 size=168 callers=0 calls=0
*/
void sub_4e7cb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7cb8ULL || rel >= 0x4e7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7d60 size=8 callers=0 calls=0
*/
void sub_4e7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7d60ULL || rel >= 0x4e7d68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7d68 size=24 callers=0 calls=0
*/
void sub_4e7d68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7d68ULL || rel >= 0x4e7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7d80 size=40 callers=0 calls=0
*/
void sub_4e7d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7d80ULL || rel >= 0x4e7da8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7da8 size=264 callers=0 calls=0
*/
void sub_4e7da8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7da8ULL || rel >= 0x4e7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7eb0 size=112 callers=0 calls=0
*/
void sub_4e7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7eb0ULL || rel >= 0x4e7f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7f20 size=336 callers=0 calls=0
*/
void sub_4e7f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7f20ULL || rel >= 0x4e8070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8070 size=32 callers=0 calls=0
*/
void sub_4e8070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8070ULL || rel >= 0x4e8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8090 size=456 callers=0 calls=0
*/
void sub_4e8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8090ULL || rel >= 0x4e8258ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8258 size=712 callers=0 calls=0
*/
void sub_4e8258(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8258ULL || rel >= 0x4e8520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8520 size=40 callers=0 calls=0
*/
void sub_4e8520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8520ULL || rel >= 0x4e8548ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8548 size=320 callers=0 calls=0
*/
void sub_4e8548(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8548ULL || rel >= 0x4e8688ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8688 size=264 callers=0 calls=0
*/
void sub_4e8688(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8688ULL || rel >= 0x4e8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8790 size=424 callers=0 calls=0
*/
void sub_4e8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8790ULL || rel >= 0x4e8938ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8938 size=464 callers=0 calls=0
*/
void sub_4e8938(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8938ULL || rel >= 0x4e8b08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8b08 size=40 callers=0 calls=0
*/
void sub_4e8b08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8b08ULL || rel >= 0x4e8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8b30 size=16 callers=0 calls=0
*/
void sub_4e8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8b30ULL || rel >= 0x4e8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8b40 size=32 callers=0 calls=0
*/
void sub_4e8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8b40ULL || rel >= 0x4e8b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8b60 size=48 callers=0 calls=1
   calls: sub_4e8d70
*/
void sub_4e8b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8b60ULL || rel >= 0x4e8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8b90 size=56 callers=0 calls=1
   calls: sub_4e8d70
*/
void sub_4e8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8b90ULL || rel >= 0x4e8bc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8bc8 size=32 callers=0 calls=0
*/
void sub_4e8bc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8bc8ULL || rel >= 0x4e8be8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8be8 size=32 callers=0 calls=1
   calls: sub_4e8d70
*/
void sub_4e8be8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8be8ULL || rel >= 0x4e8c08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8c08 size=40 callers=0 calls=1
   calls: sub_4e8d70
*/
void sub_4e8c08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8c08ULL || rel >= 0x4e8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8c30 size=32 callers=0 calls=1
   calls: sub_4e8d70
*/
void sub_4e8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8c30ULL || rel >= 0x4e8c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8c50 size=40 callers=0 calls=1
   calls: sub_4e8d70
*/
void sub_4e8c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8c50ULL || rel >= 0x4e8c78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8c78 size=16 callers=0 calls=0
*/
void sub_4e8c78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8c78ULL || rel >= 0x4e8c88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8c88 size=48 callers=0 calls=0
*/
void sub_4e8c88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8c88ULL || rel >= 0x4e8cb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8cb8 size=72 callers=0 calls=0
*/
void sub_4e8cb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8cb8ULL || rel >= 0x4e8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8d00 size=56 callers=0 calls=0
*/
void sub_4e8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8d00ULL || rel >= 0x4e8d38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8d38 size=56 callers=0 calls=0
*/
void sub_4e8d38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8d38ULL || rel >= 0x4e8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8d70 size=80 callers=6 calls=0
*/
void sub_4e8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8d70ULL || rel >= 0x4e8dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8dc0 size=512 callers=0 calls=2
   calls: sub_4e8fc0, sub_4e9248
*/
void sub_4e8dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8dc0ULL || rel >= 0x4e8fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8fc0 size=648 callers=12 calls=0
*/
void sub_4e8fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8fc0ULL || rel >= 0x4e9248ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e9248 size=2048 callers=4 calls=2
   calls: sub_4e8fc0, sub_4e9a48
*/
void sub_4e9248(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e9248ULL || rel >= 0x4e9a48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e9a48 size=600 callers=6 calls=0
*/
void sub_4e9a48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e9a48ULL || rel >= 0x4e9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e9ca0 size=5464 callers=0 calls=10
   calls: sub_4eb1f8, sub_4ebf28, sub_4ec698, sub_4ec8e8, sub_4edc18, sub_4ee458, sub_4eea50, sub_4f0fa0, sub_4f0fd8, sub_4f1028
*/
void sub_4e9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e9ca0ULL || rel >= 0x4eb1f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eb1f8 size=3376 callers=2 calls=3
   calls: sub_4edc18, sub_4edd00, sub_4ede10
*/
void sub_4eb1f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eb1f8ULL || rel >= 0x4ebf28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ebf28 size=1904 callers=2 calls=3
   calls: sub_4edc18, sub_4edf20, sub_4f1028
*/
void sub_4ebf28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ebf28ULL || rel >= 0x4ec698ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ec698 size=272 callers=4 calls=2
   calls: sub_4ec698, sub_4eed78
*/
void sub_4ec698(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ec698ULL || rel >= 0x4ec7a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ec7a8 size=320 callers=0 calls=0
*/
void sub_4ec7a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ec7a8ULL || rel >= 0x4ec8e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ec8e8 size=4912 callers=2 calls=2
   calls: sub_4ec8e8, sub_4f1028
*/
void sub_4ec8e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ec8e8ULL || rel >= 0x4edc18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004edc18 size=208 callers=86 calls=1
   calls: sub_4edc18
*/
void sub_4edc18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4edc18ULL || rel >= 0x4edce8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004edce8 size=24 callers=0 calls=0
*/
void sub_4edce8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4edce8ULL || rel >= 0x4edd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004edd00 size=272 callers=3 calls=1
   calls: sub_4f1028
*/
void sub_4edd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4edd00ULL || rel >= 0x4ede10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ede10 size=272 callers=2 calls=1
   calls: sub_4f1028
*/
void sub_4ede10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ede10ULL || rel >= 0x4edf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004edf20 size=1336 callers=4 calls=2
   calls: sub_4edc18, sub_4f1028
*/
void sub_4edf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4edf20ULL || rel >= 0x4ee458ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ee458 size=1528 callers=4 calls=1
   calls: sub_4f1028
*/
void sub_4ee458(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ee458ULL || rel >= 0x4eea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eea50 size=808 callers=4 calls=1
   calls: sub_4edc18
*/
void sub_4eea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eea50ULL || rel >= 0x4eed78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eed78 size=792 callers=2 calls=0
*/
void sub_4eed78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eed78ULL || rel >= 0x4ef090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ef090 size=144 callers=0 calls=0
   ref: No error
*/
void No_error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ef090ULL || rel >= 0x4ef120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ef120 size=7440 callers=0 calls=4
   calls: sub_4f0e30, sub_4f0fa0, sub_4f0fd8, sub_4f1028
*/
void sub_4ef120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ef120ULL || rel >= 0x4f0e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f0e30 size=368 callers=2 calls=0
*/
void sub_4f0e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f0e30ULL || rel >= 0x4f0fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f0fa0 size=56 callers=2 calls=0
*/
void sub_4f0fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f0fa0ULL || rel >= 0x4f0fd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f0fd8 size=80 callers=12 calls=0
*/
void sub_4f0fd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f0fd8ULL || rel >= 0x4f1028ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1028 size=296 callers=104 calls=0
*/
void sub_4f1028(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1028ULL || rel >= 0x4f1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1150 size=104 callers=0 calls=1
   calls: sub_4f1460
*/
void sub_4f1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1150ULL || rel >= 0x4f11b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f11b8 size=96 callers=0 calls=1
   calls: sub_4f1460
*/
void sub_4f11b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f11b8ULL || rel >= 0x4f1218ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1218 size=64 callers=0 calls=0
*/
void sub_4f1218(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1218ULL || rel >= 0x4f1258ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1258 size=56 callers=0 calls=0
*/
void sub_4f1258(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1258ULL || rel >= 0x4f1290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1290 size=48 callers=0 calls=1
   calls: sub_4f12c0
*/
void sub_4f1290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1290ULL || rel >= 0x4f12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f12c0 size=416 callers=1 calls=1
   calls: sub_4f1460
*/
void sub_4f12c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f12c0ULL || rel >= 0x4f1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1460 size=288 callers=3 calls=0
*/
void sub_4f1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1460ULL || rel >= 0x4f1580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1580 size=48 callers=0 calls=0
*/
void sub_4f1580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1580ULL || rel >= 0x4f15b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f15b0 size=32 callers=0 calls=0
*/
void sub_4f15b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f15b0ULL || rel >= 0x4f15d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f15d0 size=152 callers=0 calls=0
*/
void sub_4f15d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f15d0ULL || rel >= 0x4f1668ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1668 size=112 callers=0 calls=0
*/
void sub_4f1668(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1668ULL || rel >= 0x4f16d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f16d8 size=344 callers=0 calls=1
   calls: sub_4f18e8
*/
void sub_4f16d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f16d8ULL || rel >= 0x4f1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1830 size=80 callers=2 calls=1
   calls: sub_4f1830
*/
void sub_4f1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1830ULL || rel >= 0x4f1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1880 size=104 callers=0 calls=0
*/
void sub_4f1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1880ULL || rel >= 0x4f18e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f18e8 size=256 callers=1 calls=0
*/
void sub_4f18e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f18e8ULL || rel >= 0x4f19e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f19e8 size=496 callers=0 calls=0
*/
void sub_4f19e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f19e8ULL || rel >= 0x4f1bd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1bd8 size=8 callers=0 calls=0
*/
void sub_4f1bd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1bd8ULL || rel >= 0x4f1be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1be0 size=200 callers=2 calls=1
   calls: sub_4f1be0
*/
void sub_4f1be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1be0ULL || rel >= 0x4f1ca8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1ca8 size=120 callers=0 calls=0
*/
void sub_4f1ca8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1ca8ULL || rel >= 0x4f1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1d20 size=64 callers=0 calls=1
   calls: sub_4bca08
*/
void sub_4f1d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1d20ULL || rel >= 0x4f1d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1d60 size=120 callers=0 calls=0
*/
void sub_4f1d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1d60ULL || rel >= 0x4f1dd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1dd8 size=8 callers=0 calls=0
*/
void sub_4f1dd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1dd8ULL || rel >= 0x4f1de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1de0 size=8 callers=0 calls=0
*/
void sub_4f1de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1de0ULL || rel >= 0x4f1de8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1de8 size=32 callers=0 calls=0
*/
void sub_4f1de8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1de8ULL || rel >= 0x4f1e08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1e08 size=32 callers=0 calls=0
*/
void sub_4f1e08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1e08ULL || rel >= 0x4f1e28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1e28 size=16 callers=0 calls=0
*/
void sub_4f1e28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1e28ULL || rel >= 0x4f1e38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1e38 size=16 callers=0 calls=0
*/
void sub_4f1e38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1e38ULL || rel >= 0x4f1e48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1e48 size=16 callers=0 calls=0
*/
void sub_4f1e48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1e48ULL || rel >= 0x4f1e58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1e58 size=8 callers=0 calls=0
*/
void sub_4f1e58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1e58ULL || rel >= 0x4f1e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1e60 size=32 callers=0 calls=0
*/
void sub_4f1e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1e60ULL || rel >= 0x4f1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1e80 size=24 callers=0 calls=0
*/
void sub_4f1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1e80ULL || rel >= 0x4f1e98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1e98 size=32 callers=0 calls=0
*/
void sub_4f1e98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1e98ULL || rel >= 0x4f1eb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1eb8 size=40 callers=0 calls=0
*/
void sub_4f1eb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1eb8ULL || rel >= 0x4f1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1ee0 size=16 callers=0 calls=0
*/
void sub_4f1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1ee0ULL || rel >= 0x4f1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1ef0 size=16 callers=0 calls=0
*/
void sub_4f1ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1ef0ULL || rel >= 0x4f1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1f00 size=8 callers=0 calls=0
*/
void sub_4f1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1f00ULL || rel >= 0x4f1f08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1f08 size=184 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f1f08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1f08ULL || rel >= 0x4f1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1fc0 size=56 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f1fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1fc0ULL || rel >= 0x4f1ff8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1ff8 size=56 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f1ff8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1ff8ULL || rel >= 0x4f2030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2030 size=464 callers=1 calls=3
   calls: sub_4bca08, sub_4bca20, sub_4f2030
*/
void sub_4f2030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2030ULL || rel >= 0x4f2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2200 size=160 callers=0 calls=3
   calls: sub_4bca08, sub_4bca20, sub_4f5b68
*/
void sub_4f2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2200ULL || rel >= 0x4f22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f22a0 size=240 callers=0 calls=3
   calls: sub_4bca08, sub_4bca20, sub_4f5b68
*/
void sub_4f22a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f22a0ULL || rel >= 0x4f2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2390 size=72 callers=0 calls=0
*/
void sub_4f2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2390ULL || rel >= 0x4f23d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f23d8 size=392 callers=0 calls=3
   calls: sub_4bca08, sub_4bca20, sub_4f5b68
*/
void sub_4f23d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f23d8ULL || rel >= 0x4f2560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2560 size=320 callers=0 calls=1
   calls: sub_4f5b68
*/
void sub_4f2560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2560ULL || rel >= 0x4f26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f26a0 size=72 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f26a0ULL || rel >= 0x4f26e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f26e8 size=184 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f26e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f26e8ULL || rel >= 0x4f27a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f27a0 size=88 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f27a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f27a0ULL || rel >= 0x4f27f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f27f8 size=120 callers=0 calls=0
*/
void sub_4f27f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f27f8ULL || rel >= 0x4f2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2870 size=200 callers=0 calls=3
   calls: sub_4bca08, sub_4bca20, sub_4f57b8
*/
void sub_4f2870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2870ULL || rel >= 0x4f2938ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2938 size=80 callers=0 calls=0
*/
void sub_4f2938(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2938ULL || rel >= 0x4f2988ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2988 size=312 callers=0 calls=1
   calls: sub_4f57b8
*/
void sub_4f2988(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2988ULL || rel >= 0x4f2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2ac0 size=88 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2ac0ULL || rel >= 0x4f2b18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2b18 size=224 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f2b18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2b18ULL || rel >= 0x4f2bf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2bf8 size=264 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f2bf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2bf8ULL || rel >= 0x4f2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2d00 size=120 callers=0 calls=0
*/
void sub_4f2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2d00ULL || rel >= 0x4f2d78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2d78 size=208 callers=0 calls=0
*/
void sub_4f2d78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2d78ULL || rel >= 0x4f2e48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2e48 size=208 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f2e48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2e48ULL || rel >= 0x4f2f18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2f18 size=208 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f2f18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2f18ULL || rel >= 0x4f2fe8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2fe8 size=16 callers=0 calls=0
*/
void sub_4f2fe8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2fe8ULL || rel >= 0x4f2ff8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2ff8 size=112 callers=0 calls=0
*/
void sub_4f2ff8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2ff8ULL || rel >= 0x4f3068ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3068 size=152 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f3068(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3068ULL || rel >= 0x4f3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3100 size=152 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3100ULL || rel >= 0x4f3198ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3198 size=144 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f3198(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3198ULL || rel >= 0x4f3228ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3228 size=120 callers=0 calls=0
*/
void sub_4f3228(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3228ULL || rel >= 0x4f32a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f32a0 size=288 callers=0 calls=0
*/
void sub_4f32a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f32a0ULL || rel >= 0x4f33c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f33c0 size=360 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f33c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f33c0ULL || rel >= 0x4f3528ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3528 size=120 callers=0 calls=0
*/
void sub_4f3528(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3528ULL || rel >= 0x4f35a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f35a0 size=160 callers=0 calls=3
   calls: sub_4bca08, sub_4bca20, sub_4f5b68
*/
void sub_4f35a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f35a0ULL || rel >= 0x4f3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3640 size=16 callers=0 calls=0
*/
void sub_4f3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3640ULL || rel >= 0x4f3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3650 size=32 callers=0 calls=0
*/
void sub_4f3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3650ULL || rel >= 0x4f3670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3670 size=688 callers=0 calls=3
   calls: sub_4bca08, sub_4bca20, sub_4f5b68
*/
void sub_4f3670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3670ULL || rel >= 0x4f3920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3920 size=16 callers=0 calls=0
*/
void sub_4f3920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3920ULL || rel >= 0x4f3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3930 size=88 callers=0 calls=0
*/
void sub_4f3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3930ULL || rel >= 0x4f3988ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3988 size=56 callers=0 calls=0
*/
void sub_4f3988(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3988ULL || rel >= 0x4f39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f39c0 size=8 callers=0 calls=0
*/
void sub_4f39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f39c0ULL || rel >= 0x4f39c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f39c8 size=16 callers=0 calls=0
*/
void sub_4f39c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f39c8ULL || rel >= 0x4f39d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f39d8 size=64 callers=0 calls=0
*/
void sub_4f39d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f39d8ULL || rel >= 0x4f3a18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3a18 size=232 callers=0 calls=1
   calls: sub_4bca08
*/
void sub_4f3a18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3a18ULL || rel >= 0x4f3b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3b00 size=144 callers=0 calls=0
*/
void sub_4f3b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3b00ULL || rel >= 0x4f3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3b90 size=200 callers=0 calls=3
   calls: sub_4bca08, sub_4bca20, sub_4f57b8
*/
void sub_4f3b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3b90ULL || rel >= 0x4f3c58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3c58 size=16 callers=0 calls=0
*/
void sub_4f3c58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3c58ULL || rel >= 0x4f3c68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3c68 size=72 callers=0 calls=0
*/
void sub_4f3c68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3c68ULL || rel >= 0x4f3cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3cb0 size=64 callers=0 calls=0
*/
void sub_4f3cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3cb0ULL || rel >= 0x4f3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3cf0 size=176 callers=0 calls=3
   calls: sub_4bca08, sub_4bca20, sub_4f57b8
*/
void sub_4f3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3cf0ULL || rel >= 0x4f3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3da0 size=56 callers=0 calls=0
*/
void sub_4f3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3da0ULL || rel >= 0x4f3dd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3dd8 size=8 callers=0 calls=0
*/
void sub_4f3dd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3dd8ULL || rel >= 0x4f3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3de0 size=16 callers=0 calls=0
*/
void sub_4f3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3de0ULL || rel >= 0x4f3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3df0 size=88 callers=0 calls=1
   calls: sub_4bca08
*/
void sub_4f3df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3df0ULL || rel >= 0x4f3e48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3e48 size=24 callers=0 calls=0
*/
void sub_4f3e48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3e48ULL || rel >= 0x4f3e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3e60 size=24 callers=0 calls=0
*/
void sub_4f3e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3e60ULL || rel >= 0x4f3e78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3e78 size=16 callers=0 calls=0
*/
void sub_4f3e78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3e78ULL || rel >= 0x4f3e88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3e88 size=96 callers=0 calls=0
*/
void sub_4f3e88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3e88ULL || rel >= 0x4f3ee8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3ee8 size=112 callers=0 calls=0
*/
void sub_4f3ee8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3ee8ULL || rel >= 0x4f3f58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3f58 size=120 callers=0 calls=0
*/
void sub_4f3f58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3f58ULL || rel >= 0x4f3fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3fd0 size=120 callers=0 calls=0
*/
void sub_4f3fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3fd0ULL || rel >= 0x4f4048ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4048 size=120 callers=0 calls=0
*/
void sub_4f4048(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4048ULL || rel >= 0x4f40c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f40c0 size=160 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f40c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f40c0ULL || rel >= 0x4f4160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4160 size=320 callers=0 calls=2
   calls: sub_4bca08, sub_4bca20
*/
void sub_4f4160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4160ULL || rel >= 0x4f42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f42a0 size=144 callers=0 calls=0
*/
void sub_4f42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f42a0ULL || rel >= 0x4f4330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4330 size=136 callers=0 calls=0
*/
void sub_4f4330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4330ULL || rel >= 0x4f43b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f43b8 size=8 callers=0 calls=0
*/
void sub_4f43b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f43b8ULL || rel >= 0x4f43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f43c0 size=3120 callers=0 calls=3
   calls: sub_4bca08, sub_4bca20, sub_4f4ff0
   ref: %.*s%.0d%s%c%%lln
*/
void s_0d_s_c_lln(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f43c0ULL || rel >= 0x4f4ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4ff0 size=160 callers=1 calls=0
*/
void sub_4f4ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4ff0ULL || rel >= 0x4f5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5090 size=64 callers=0 calls=0
*/
void sub_4f5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5090ULL || rel >= 0x4f50d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f50d0 size=232 callers=0 calls=0
*/
void sub_4f50d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f50d0ULL || rel >= 0x4f51b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f51b8 size=184 callers=0 calls=0
*/
void sub_4f51b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f51b8ULL || rel >= 0x4f5270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5270 size=56 callers=0 calls=0
*/
void sub_4f5270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5270ULL || rel >= 0x4f52a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f52a8 size=136 callers=0 calls=0
*/
void sub_4f52a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f52a8ULL || rel >= 0x4f5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5330 size=8 callers=0 calls=0
*/
void sub_4f5330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5330ULL || rel >= 0x4f5338ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5338 size=248 callers=0 calls=1
   calls: sub_4f5430
*/
void sub_4f5338(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5338ULL || rel >= 0x4f5430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5430 size=240 callers=2 calls=1
   calls: sub_4f5430
*/
void sub_4f5430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5430ULL || rel >= 0x4f5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5520 size=144 callers=0 calls=0
*/
void sub_4f5520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5520ULL || rel >= 0x4f55b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f55b0 size=184 callers=0 calls=0
*/
void sub_4f55b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f55b0ULL || rel >= 0x4f5668ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5668 size=64 callers=0 calls=0
*/
void sub_4f5668(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5668ULL || rel >= 0x4f56a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f56a8 size=120 callers=0 calls=0
*/
void sub_4f56a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f56a8ULL || rel >= 0x4f5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5720 size=152 callers=0 calls=0
*/
void sub_4f5720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5720ULL || rel >= 0x4f57b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f57b8 size=208 callers=4 calls=0
*/
void sub_4f57b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f57b8ULL || rel >= 0x4f5888ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5888 size=392 callers=0 calls=1
   calls: sub_4bca08
*/
void sub_4f5888(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5888ULL || rel >= 0x4f5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5a10 size=136 callers=0 calls=0
*/
void sub_4f5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5a10ULL || rel >= 0x4f5a98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5a98 size=136 callers=0 calls=0
*/
void sub_4f5a98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5a98ULL || rel >= 0x4f5b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5b20 size=72 callers=0 calls=0
*/
void sub_4f5b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5b20ULL || rel >= 0x4f5b68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5b68 size=104 callers=7 calls=0
*/
void sub_4f5b68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5b68ULL || rel >= 0x4f5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5bd0 size=16 callers=0 calls=0
*/
void sub_4f5bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5bd0ULL || rel >= 0x4f5be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5be0 size=8 callers=0 calls=0
*/
void sub_4f5be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5be0ULL || rel >= 0x4f5be8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

