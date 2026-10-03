/* main functions 00858740..00865310 (62 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00858740 size=32 callers=0 calls=0
*/
void sub_858740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858740ULL || rel >= 0x858760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858760 size=32 callers=0 calls=0
*/
void sub_858760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858760ULL || rel >= 0x858780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858780 size=32 callers=0 calls=0
*/
void sub_858780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858780ULL || rel >= 0x8587a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008587a0 size=32 callers=0 calls=0
*/
void sub_8587a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8587a0ULL || rel >= 0x8587c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008587c0 size=32 callers=0 calls=0
*/
void sub_8587c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8587c0ULL || rel >= 0x8587e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008587e0 size=32 callers=0 calls=0
*/
void sub_8587e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8587e0ULL || rel >= 0x858800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858800 size=32 callers=0 calls=0
*/
void sub_858800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858800ULL || rel >= 0x858820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858820 size=32 callers=0 calls=0
*/
void sub_858820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858820ULL || rel >= 0x858840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858840 size=32 callers=0 calls=0
*/
void sub_858840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858840ULL || rel >= 0x858860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858860 size=32 callers=0 calls=0
*/
void sub_858860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858860ULL || rel >= 0x858880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858880 size=32 callers=0 calls=0
*/
void sub_858880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858880ULL || rel >= 0x8588a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008588a0 size=32 callers=0 calls=0
*/
void sub_8588a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8588a0ULL || rel >= 0x8588c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008588c0 size=32 callers=0 calls=0
*/
void sub_8588c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8588c0ULL || rel >= 0x8588e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008588e0 size=32 callers=0 calls=0
*/
void sub_8588e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8588e0ULL || rel >= 0x858900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858900 size=32 callers=0 calls=0
*/
void sub_858900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858900ULL || rel >= 0x858920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858920 size=32 callers=0 calls=0
*/
void sub_858920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858920ULL || rel >= 0x858940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858940 size=32 callers=0 calls=0
*/
void sub_858940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858940ULL || rel >= 0x858960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858960 size=32 callers=0 calls=0
*/
void sub_858960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858960ULL || rel >= 0x858980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858980 size=32 callers=0 calls=0
*/
void sub_858980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858980ULL || rel >= 0x8589a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008589a0 size=32 callers=0 calls=0
*/
void sub_8589a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8589a0ULL || rel >= 0x8589c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008589c0 size=32 callers=0 calls=0
*/
void sub_8589c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8589c0ULL || rel >= 0x8589e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008589e0 size=32 callers=0 calls=0
*/
void sub_8589e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8589e0ULL || rel >= 0x858a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858a00 size=32 callers=0 calls=0
*/
void sub_858a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858a00ULL || rel >= 0x858a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858a20 size=32 callers=0 calls=0
*/
void sub_858a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858a20ULL || rel >= 0x858a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858a40 size=32 callers=0 calls=0
*/
void sub_858a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858a40ULL || rel >= 0x858a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858a60 size=32 callers=0 calls=0
*/
void sub_858a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858a60ULL || rel >= 0x858a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858a80 size=32 callers=0 calls=0
*/
void sub_858a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858a80ULL || rel >= 0x858aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858aa0 size=32 callers=0 calls=0
*/
void sub_858aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858aa0ULL || rel >= 0x858ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858ac0 size=32 callers=0 calls=0
*/
void sub_858ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858ac0ULL || rel >= 0x858ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858ae0 size=32 callers=0 calls=0
*/
void sub_858ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858ae0ULL || rel >= 0x858b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858b00 size=32 callers=0 calls=0
*/
void sub_858b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858b00ULL || rel >= 0x858b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858b20 size=32 callers=0 calls=0
*/
void sub_858b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858b20ULL || rel >= 0x858b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858b40 size=32 callers=0 calls=0
*/
void sub_858b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858b40ULL || rel >= 0x858b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858b60 size=32 callers=0 calls=0
*/
void sub_858b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858b60ULL || rel >= 0x858b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858b80 size=32 callers=0 calls=0
*/
void sub_858b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858b80ULL || rel >= 0x858ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858ba0 size=32 callers=0 calls=0
*/
void sub_858ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858ba0ULL || rel >= 0x858bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858bc0 size=32 callers=0 calls=0
*/
void sub_858bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858bc0ULL || rel >= 0x858be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858be0 size=32 callers=0 calls=0
*/
void sub_858be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858be0ULL || rel >= 0x858c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858c00 size=32 callers=0 calls=0
*/
void sub_858c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858c00ULL || rel >= 0x858c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858c20 size=32 callers=0 calls=0
*/
void sub_858c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858c20ULL || rel >= 0x858c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858c40 size=32 callers=0 calls=0
*/
void sub_858c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858c40ULL || rel >= 0x858c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858c60 size=32 callers=0 calls=0
*/
void sub_858c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858c60ULL || rel >= 0x858c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858c80 size=32 callers=0 calls=0
*/
void sub_858c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858c80ULL || rel >= 0x858ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858ca0 size=32 callers=0 calls=0
*/
void sub_858ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858ca0ULL || rel >= 0x858cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858cc0 size=32 callers=0 calls=0
*/
void sub_858cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858cc0ULL || rel >= 0x858ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858ce0 size=32 callers=0 calls=0
*/
void sub_858ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858ce0ULL || rel >= 0x858d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858d00 size=32 callers=0 calls=0
*/
void sub_858d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858d00ULL || rel >= 0x858d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858d20 size=32 callers=0 calls=0
*/
void sub_858d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858d20ULL || rel >= 0x858d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858d40 size=32 callers=0 calls=0
*/
void sub_858d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858d40ULL || rel >= 0x858d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858d60 size=32 callers=0 calls=0
*/
void sub_858d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858d60ULL || rel >= 0x858d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858d80 size=32 callers=0 calls=0
*/
void sub_858d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858d80ULL || rel >= 0x858da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858da0 size=32 callers=0 calls=0
*/
void sub_858da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858da0ULL || rel >= 0x858dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858dc0 size=32 callers=0 calls=0
*/
void sub_858dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858dc0ULL || rel >= 0x858de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858de0 size=32 callers=0 calls=0
*/
void sub_858de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858de0ULL || rel >= 0x858e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858e00 size=32 callers=0 calls=0
*/
void sub_858e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858e00ULL || rel >= 0x858e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858e20 size=32 callers=0 calls=0
*/
void sub_858e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858e20ULL || rel >= 0x858e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858e40 size=32 callers=0 calls=0
*/
void sub_858e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858e40ULL || rel >= 0x858e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858e60 size=32 callers=0 calls=0
*/
void sub_858e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858e60ULL || rel >= 0x858e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858e80 size=32 callers=0 calls=0
*/
void sub_858e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858e80ULL || rel >= 0x858ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858ea0 size=32 callers=0 calls=0
*/
void sub_858ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858ea0ULL || rel >= 0x858ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858ec0 size=32 callers=0 calls=0
*/
void sub_858ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858ec0ULL || rel >= 0x858ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858ee0 size=32 callers=0 calls=0
*/
void sub_858ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858ee0ULL || rel >= 0x858f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858f00 size=32 callers=0 calls=0
*/
void sub_858f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858f00ULL || rel >= 0x858f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858f20 size=32 callers=0 calls=0
*/
void sub_858f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858f20ULL || rel >= 0x858f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858f40 size=32 callers=0 calls=0
*/
void sub_858f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858f40ULL || rel >= 0x858f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858f60 size=32 callers=0 calls=0
*/
void sub_858f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858f60ULL || rel >= 0x858f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858f80 size=32 callers=0 calls=0
*/
void sub_858f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858f80ULL || rel >= 0x858fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858fa0 size=32 callers=0 calls=0
*/
void sub_858fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858fa0ULL || rel >= 0x858fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858fc0 size=32 callers=0 calls=0
*/
void sub_858fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858fc0ULL || rel >= 0x858fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858fe0 size=32 callers=0 calls=0
*/
void sub_858fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858fe0ULL || rel >= 0x859000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859000 size=32 callers=0 calls=0
*/
void sub_859000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859000ULL || rel >= 0x859020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859020 size=32 callers=0 calls=0
*/
void sub_859020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859020ULL || rel >= 0x859040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859040 size=32 callers=0 calls=0
*/
void sub_859040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859040ULL || rel >= 0x859060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859060 size=32 callers=0 calls=0
*/
void sub_859060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859060ULL || rel >= 0x859080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859080 size=32 callers=0 calls=0
*/
void sub_859080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859080ULL || rel >= 0x8590a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008590a0 size=32 callers=0 calls=0
*/
void sub_8590a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8590a0ULL || rel >= 0x8590c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008590c0 size=32 callers=0 calls=0
*/
void sub_8590c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8590c0ULL || rel >= 0x8590e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008590e0 size=32 callers=0 calls=0
*/
void sub_8590e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8590e0ULL || rel >= 0x859100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859100 size=32 callers=0 calls=0
*/
void sub_859100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859100ULL || rel >= 0x859120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859120 size=32 callers=0 calls=0
*/
void sub_859120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859120ULL || rel >= 0x859140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859140 size=32 callers=0 calls=0
*/
void sub_859140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859140ULL || rel >= 0x859160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859160 size=32 callers=0 calls=0
*/
void sub_859160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859160ULL || rel >= 0x859180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859180 size=256 callers=0 calls=4
   calls: sub_7e8c70, sub_7ee6b0, sub_7ef3d0, sub_7f09c0
*/
void sub_859180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859180ULL || rel >= 0x859280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859280 size=160 callers=0 calls=6
   calls: sub_7e8c60, sub_7e8d00, sub_7e9a00, sub_7eafc0, sub_7eb050, sub_7ee6b0
*/
void sub_859280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859280ULL || rel >= 0x859320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859320 size=288 callers=1 calls=5
   calls: sub_7e8c70, sub_7e9a10, sub_7e9a20, sub_7ee6b0, sub_7ef3d0
*/
void sub_859320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859320ULL || rel >= 0x859440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859440 size=16 callers=1 calls=0
*/
void sub_859440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859440ULL || rel >= 0x859450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859450 size=16 callers=0 calls=0
*/
void sub_859450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859450ULL || rel >= 0x859460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859460 size=16 callers=0 calls=0
*/
void sub_859460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859460ULL || rel >= 0x859470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859470 size=256 callers=0 calls=8
   calls: sub_7ef4c0, sub_7ef6a0, sub_7f7f90, sub_819600, sub_819670, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_859470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859470ULL || rel >= 0x859570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859570 size=320 callers=2 calls=8
   calls: sub_7ef4c0, sub_7ef6a0, sub_7f7f90, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819c80
*/
void sub_859570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859570ULL || rel >= 0x8596b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008596b0 size=16 callers=0 calls=0
*/
void sub_8596b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8596b0ULL || rel >= 0x8596c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008596c0 size=16 callers=0 calls=0
*/
void sub_8596c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8596c0ULL || rel >= 0x8596d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008596d0 size=16 callers=0 calls=0
*/
void sub_8596d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8596d0ULL || rel >= 0x8596e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008596e0 size=16 callers=0 calls=0
*/
void sub_8596e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8596e0ULL || rel >= 0x8596f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008596f0 size=16 callers=0 calls=0
*/
void sub_8596f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8596f0ULL || rel >= 0x859700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859700 size=16 callers=0 calls=0
*/
void sub_859700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859700ULL || rel >= 0x859710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859710 size=16 callers=0 calls=0
*/
void sub_859710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859710ULL || rel >= 0x859720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859720 size=16 callers=0 calls=0
*/
void sub_859720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859720ULL || rel >= 0x859730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859730 size=16 callers=0 calls=0
*/
void sub_859730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859730ULL || rel >= 0x859740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859740 size=16 callers=0 calls=0
*/
void sub_859740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859740ULL || rel >= 0x859750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859750 size=16 callers=0 calls=0
*/
void sub_859750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859750ULL || rel >= 0x859760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859760 size=16 callers=0 calls=0
*/
void sub_859760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859760ULL || rel >= 0x859770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859770 size=176 callers=0 calls=7
   calls: sub_7f0130, sub_7f0540, sub_7f2540, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_859770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859770ULL || rel >= 0x859820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859820 size=192 callers=0 calls=6
   calls: sub_7efe00, sub_7f0130, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_859820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859820ULL || rel >= 0x8598e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008598e0 size=176 callers=0 calls=6
   calls: sub_7efe00, sub_7f0130, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_8598e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8598e0ULL || rel >= 0x859990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859990 size=144 callers=0 calls=5
   calls: sub_7f0130, sub_7f0540, sub_7f2540, sub_819600, sub_8196d0
*/
void sub_859990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859990ULL || rel >= 0x859a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859a20 size=112 callers=0 calls=2
   calls: sub_819600, sub_859b00
*/
void sub_859a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859a20ULL || rel >= 0x859a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859a90 size=112 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_859b00
*/
void sub_859a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859a90ULL || rel >= 0x859b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859b00 size=272 callers=2 calls=8
   calls: sub_7efef0, sub_803c60, sub_803d20, sub_803d60, sub_819690, sub_8196d0, sub_819c00, sub_859c10
*/
void sub_859b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859b00ULL || rel >= 0x859c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859c10 size=288 callers=1 calls=6
   calls: sub_7efe00, sub_7f00f0, sub_7f0130, sub_7f0540, sub_7f2540, sub_8196d0
*/
void sub_859c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859c10ULL || rel >= 0x859d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859d30 size=128 callers=0 calls=6
   calls: sub_7ef4c0, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0, sub_85b420
*/
void sub_859d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859d30ULL || rel >= 0x859db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859db0 size=80 callers=0 calls=2
   calls: sub_7ef4c0, sub_8196d0
*/
void sub_859db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859db0ULL || rel >= 0x859e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859e00 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_859e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859e00ULL || rel >= 0x859e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859e60 size=256 callers=0 calls=7
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0, sub_85b420
*/
void sub_859e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859e60ULL || rel >= 0x859f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00859f60 size=224 callers=0 calls=8
   calls: sub_7e9ba0, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_819640, sub_819690, sub_819b00
*/
void sub_859f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x859f60ULL || rel >= 0x85a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a040 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_85a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a040ULL || rel >= 0x85a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a090 size=320 callers=0 calls=11
   calls: sub_7e9ba0, sub_7eef50, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_8196d0, sub_819b00
*/
void sub_85a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a090ULL || rel >= 0x85a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a1d0 size=128 callers=0 calls=6
   calls: sub_7f0c00, sub_819630, sub_8196d0, sub_819a10, sub_81a5c0, sub_81acc0
*/
void sub_85a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a1d0ULL || rel >= 0x85a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a250 size=240 callers=0 calls=7
   calls: sub_7f0c00, sub_803c60, sub_819600, sub_819640, sub_819690, sub_8196d0, sub_819df0
*/
void sub_85a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a250ULL || rel >= 0x85a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a340 size=144 callers=0 calls=7
   calls: sub_7ef4c0, sub_819600, sub_8196a0, sub_8196d0, sub_819a10, sub_81a5c0, sub_85b420
*/
void sub_85a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a340ULL || rel >= 0x85a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a3d0 size=96 callers=0 calls=3
   calls: sub_7ef4c0, sub_8196a0, sub_8196d0
*/
void sub_85a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a3d0ULL || rel >= 0x85a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a430 size=16 callers=0 calls=0
*/
void sub_85a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a430ULL || rel >= 0x85a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a440 size=80 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_85a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a440ULL || rel >= 0x85a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a490 size=432 callers=0 calls=17
   calls: sub_767130, sub_7e9ba0, sub_7ef330, sub_7f7770, sub_7f79e0, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690
   ... +5 more
*/
void sub_85a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a490ULL || rel >= 0x85a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a640 size=16 callers=0 calls=0
*/
void sub_85a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a640ULL || rel >= 0x85a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a650 size=80 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_85a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a650ULL || rel >= 0x85a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a6a0 size=16 callers=0 calls=0
*/
void sub_85a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a6a0ULL || rel >= 0x85a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a6b0 size=80 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_85a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a6b0ULL || rel >= 0x85a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a700 size=16 callers=0 calls=0
*/
void sub_85a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a700ULL || rel >= 0x85a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a710 size=80 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_85a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a710ULL || rel >= 0x85a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a760 size=16 callers=0 calls=0
*/
void sub_85a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a760ULL || rel >= 0x85a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a770 size=80 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_85a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a770ULL || rel >= 0x85a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a7c0 size=160 callers=0 calls=6
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600, sub_819a10, sub_81a5c0, sub_85b420
*/
void sub_85a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a7c0ULL || rel >= 0x85a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a860 size=96 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a860ULL || rel >= 0x85a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a8c0 size=192 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_819640, sub_819df0
*/
void sub_85a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a8c0ULL || rel >= 0x85a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085a980 size=208 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_819640, sub_819df0
*/
void sub_85a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a980ULL || rel >= 0x85aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085aa50 size=208 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_819640, sub_819df0
*/
void sub_85aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85aa50ULL || rel >= 0x85ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ab20 size=208 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_819640, sub_819df0
*/
void sub_85ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ab20ULL || rel >= 0x85abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085abf0 size=208 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_819640, sub_819df0
*/
void sub_85abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85abf0ULL || rel >= 0x85acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085acc0 size=224 callers=0 calls=10
   calls: sub_7f05a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_8196d0, sub_81a030, sub_81a0e0
*/
void sub_85acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85acc0ULL || rel >= 0x85ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ada0 size=448 callers=0 calls=7
   calls: sub_7f0c00, sub_7f7690, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819df0
*/
void sub_85ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ada0ULL || rel >= 0x85af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085af60 size=144 callers=0 calls=5
   calls: sub_7ef4c0, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_85af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85af60ULL || rel >= 0x85aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085aff0 size=240 callers=0 calls=9
   calls: sub_7e9ba0, sub_7f79e0, sub_7f7ae0, sub_803c60, sub_819600, sub_819640, sub_819690, sub_8196d0, sub_819b00
*/
void sub_85aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85aff0ULL || rel >= 0x85b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b0e0 size=16 callers=0 calls=0
*/
void sub_85b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b0e0ULL || rel >= 0x85b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b0f0 size=208 callers=0 calls=9
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196a0, sub_8196b0, sub_81a640, sub_81c370
*/
void sub_85b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b0f0ULL || rel >= 0x85b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b1c0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_85b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b1c0ULL || rel >= 0x85b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b210 size=256 callers=0 calls=5
   calls: sub_819600, sub_819660, sub_8196a0, sub_8196b0, sub_81a060
*/
void sub_85b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b210ULL || rel >= 0x85b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b310 size=16 callers=0 calls=0
*/
void sub_85b310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b310ULL || rel >= 0x85b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b320 size=16 callers=0 calls=0
*/
void sub_85b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b320ULL || rel >= 0x85b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b330 size=16 callers=0 calls=0
*/
void sub_85b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b330ULL || rel >= 0x85b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b340 size=16 callers=0 calls=0
*/
void sub_85b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b340ULL || rel >= 0x85b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b350 size=16 callers=0 calls=0
*/
void sub_85b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b350ULL || rel >= 0x85b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b360 size=16 callers=0 calls=0
*/
void sub_85b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b360ULL || rel >= 0x85b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b370 size=16 callers=0 calls=0
*/
void sub_85b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b370ULL || rel >= 0x85b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b380 size=16 callers=0 calls=0
*/
void sub_85b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b380ULL || rel >= 0x85b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b390 size=16 callers=0 calls=0
*/
void sub_85b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b390ULL || rel >= 0x85b3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b3a0 size=16 callers=0 calls=0
*/
void sub_85b3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b3a0ULL || rel >= 0x85b3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b3b0 size=16 callers=0 calls=0
*/
void sub_85b3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b3b0ULL || rel >= 0x85b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b3c0 size=16 callers=0 calls=0
*/
void sub_85b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b3c0ULL || rel >= 0x85b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b3d0 size=16 callers=0 calls=0
*/
void sub_85b3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b3d0ULL || rel >= 0x85b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b3e0 size=16 callers=0 calls=0
*/
void sub_85b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b3e0ULL || rel >= 0x85b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b3f0 size=16 callers=0 calls=0
*/
void sub_85b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b3f0ULL || rel >= 0x85b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b400 size=16 callers=0 calls=0
*/
void sub_85b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b400ULL || rel >= 0x85b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b410 size=16 callers=0 calls=0
*/
void sub_85b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b410ULL || rel >= 0x85b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b420 size=224 callers=5 calls=4
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196d0
*/
void sub_85b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b420ULL || rel >= 0x85b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b500 size=256 callers=0 calls=8
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_819640, sub_8196d0, sub_819a10, sub_81a5c0, sub_82cd00
*/
void sub_85b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b500ULL || rel >= 0x85b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b600 size=192 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_8196b0, sub_81a030
*/
void sub_85b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b600ULL || rel >= 0x85b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b6c0 size=128 callers=0 calls=6
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600, sub_819a10, sub_81a5c0, sub_85b420
*/
void sub_85b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b6c0ULL || rel >= 0x85b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b740 size=240 callers=0 calls=8
   calls: sub_7e9ba0, sub_7eef50, sub_7f7990, sub_7f7ae0, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_85b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b740ULL || rel >= 0x85b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b830 size=16 callers=0 calls=0
*/
void sub_85b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b830ULL || rel >= 0x85b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b840 size=256 callers=0 calls=8
   calls: sub_7f8820, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_819d00
*/
void sub_85b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b840ULL || rel >= 0x85b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b940 size=64 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_85b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b940ULL || rel >= 0x85b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b980 size=16 callers=0 calls=0
*/
void sub_85b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b980ULL || rel >= 0x85b990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085b990 size=368 callers=0 calls=13
   calls: sub_7e9ba0, sub_7ef2b0, sub_7f79e0, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_8196a0, sub_8196d0
   ... +1 more
*/
void sub_85b990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85b990ULL || rel >= 0x85bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085bb00 size=176 callers=0 calls=6
   calls: sub_7e9a30, sub_7eb230, sub_819600, sub_819630, sub_8196b0, sub_81a5c0
*/
void sub_85bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85bb00ULL || rel >= 0x85bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085bbb0 size=16 callers=0 calls=0
*/
void sub_85bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85bbb0ULL || rel >= 0x85bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085bbc0 size=96 callers=0 calls=2
   calls: sub_819600, sub_819630
*/
void sub_85bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85bbc0ULL || rel >= 0x85bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085bc20 size=160 callers=0 calls=4
   calls: sub_7e9a30, sub_819600, sub_8196b0, sub_81a5c0
*/
void sub_85bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85bc20ULL || rel >= 0x85bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085bcc0 size=336 callers=0 calls=6
   calls: sub_803c60, sub_819600, sub_819640, sub_819690, sub_819df0, sub_81a640
*/
void sub_85bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85bcc0ULL || rel >= 0x85be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085be10 size=128 callers=0 calls=5
   calls: sub_7f0dc0, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_85be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85be10ULL || rel >= 0x85be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085be90 size=80 callers=0 calls=4
   calls: sub_7f0dc0, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_85be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85be90ULL || rel >= 0x85bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085bee0 size=80 callers=0 calls=4
   calls: sub_7f0dc0, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_85bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85bee0ULL || rel >= 0x85bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085bf30 size=112 callers=0 calls=5
   calls: sub_7f0dc0, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_85bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85bf30ULL || rel >= 0x85bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085bfa0 size=208 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_819eb0, sub_81a640
*/
void sub_85bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85bfa0ULL || rel >= 0x85c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c070 size=64 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_85c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c070ULL || rel >= 0x85c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c0b0 size=112 callers=0 calls=5
   calls: sub_7f7f90, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_85c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c0b0ULL || rel >= 0x85c120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c120 size=112 callers=0 calls=3
   calls: sub_803c60, sub_81a640, sub_859570
*/
void sub_85c120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c120ULL || rel >= 0x85c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c190 size=128 callers=0 calls=4
   calls: sub_803c60, sub_8196a0, sub_81a640, sub_859570
*/
void sub_85c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c190ULL || rel >= 0x85c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c210 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_85c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c210ULL || rel >= 0x85c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c270 size=128 callers=0 calls=5
   calls: sub_819600, sub_8196a0, sub_8196b0, sub_819a10, sub_81a5c0
*/
void sub_85c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c270ULL || rel >= 0x85c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c2f0 size=224 callers=0 calls=6
   calls: sub_803c60, sub_819600, sub_819640, sub_819690, sub_819df0, sub_81a640
*/
void sub_85c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c2f0ULL || rel >= 0x85c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c3d0 size=144 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c3d0ULL || rel >= 0x85c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c460 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_85c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c460ULL || rel >= 0x85c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c4b0 size=256 callers=0 calls=10
   calls: sub_7e9ba0, sub_7f7ae0, sub_7f7ff0, sub_819600, sub_819640, sub_8196a0, sub_8196b0, sub_819a10, sub_81a5c0, sub_82cd00
*/
void sub_85c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c4b0ULL || rel >= 0x85c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c5b0 size=192 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_8196b0, sub_81a030
*/
void sub_85c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c5b0ULL || rel >= 0x85c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c670 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196b0
*/
void sub_85c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c670ULL || rel >= 0x85c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c6e0 size=112 callers=0 calls=2
   calls: sub_819600, sub_819a60
*/
void sub_85c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c6e0ULL || rel >= 0x85c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c750 size=112 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c750ULL || rel >= 0x85c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c7c0 size=112 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_81a7d0
*/
void sub_85c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c7c0ULL || rel >= 0x85c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c830 size=144 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c830ULL || rel >= 0x85c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c8c0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_85c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c8c0ULL || rel >= 0x85c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c920 size=128 callers=0 calls=3
   calls: sub_7eef40, sub_819600, sub_8196d0
*/
void sub_85c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c920ULL || rel >= 0x85c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085c9a0 size=128 callers=0 calls=3
   calls: sub_7eef40, sub_819600, sub_8196d0
*/
void sub_85c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85c9a0ULL || rel >= 0x85ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ca20 size=192 callers=0 calls=5
   calls: sub_7e9ba0, sub_7f0aa0, sub_7f7ae0, sub_819600, sub_8196d0
*/
void sub_85ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ca20ULL || rel >= 0x85cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085cae0 size=160 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85cae0ULL || rel >= 0x85cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085cb80 size=160 callers=0 calls=4
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600, sub_819630
*/
void sub_85cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85cb80ULL || rel >= 0x85cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085cc20 size=160 callers=0 calls=4
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600, sub_819630
*/
void sub_85cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85cc20ULL || rel >= 0x85ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ccc0 size=128 callers=0 calls=4
   calls: sub_7eef40, sub_819600, sub_819630, sub_8196d0
*/
void sub_85ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ccc0ULL || rel >= 0x85cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085cd40 size=128 callers=0 calls=4
   calls: sub_7eef40, sub_819600, sub_819630, sub_8196d0
*/
void sub_85cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85cd40ULL || rel >= 0x85cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085cdc0 size=144 callers=0 calls=5
   calls: sub_7eef40, sub_7ef220, sub_819600, sub_819630, sub_8196d0
*/
void sub_85cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85cdc0ULL || rel >= 0x85ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ce50 size=128 callers=0 calls=4
   calls: sub_7eef40, sub_7ef220, sub_819600, sub_8196d0
*/
void sub_85ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ce50ULL || rel >= 0x85ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ced0 size=128 callers=0 calls=4
   calls: sub_7eef40, sub_819600, sub_819630, sub_8196d0
*/
void sub_85ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ced0ULL || rel >= 0x85cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085cf50 size=144 callers=0 calls=2
   calls: sub_819600, sub_819d40
*/
void sub_85cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85cf50ULL || rel >= 0x85cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085cfe0 size=176 callers=0 calls=5
   calls: sub_803c60, sub_819600, sub_819690, sub_8196b0, sub_819c80
*/
void sub_85cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85cfe0ULL || rel >= 0x85d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d090 size=112 callers=0 calls=4
   calls: sub_7ee6c0, sub_819600, sub_819630, sub_8196d0
*/
void sub_85d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d090ULL || rel >= 0x85d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d100 size=112 callers=0 calls=4
   calls: sub_7ef4c0, sub_819600, sub_8196a0, sub_8196d0
*/
void sub_85d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d100ULL || rel >= 0x85d170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d170 size=112 callers=0 calls=4
   calls: sub_7ee6c0, sub_819600, sub_819630, sub_8196d0
*/
void sub_85d170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d170ULL || rel >= 0x85d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d1e0 size=96 callers=0 calls=3
   calls: sub_7ee6c0, sub_819600, sub_8196d0
*/
void sub_85d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d1e0ULL || rel >= 0x85d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d240 size=128 callers=0 calls=4
   calls: sub_7ef540, sub_819600, sub_819640, sub_8196d0
*/
void sub_85d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d240ULL || rel >= 0x85d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d2c0 size=208 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196a0, sub_8196b0, sub_81a640
*/
void sub_85d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d2c0ULL || rel >= 0x85d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d390 size=128 callers=0 calls=5
   calls: sub_7e9ba0, sub_7f7ae0, sub_7f7ff0, sub_819600, sub_819640
*/
void sub_85d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d390ULL || rel >= 0x85d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d410 size=128 callers=0 calls=5
   calls: sub_819600, sub_8196a0, sub_8196b0, sub_819a10, sub_81a5c0
*/
void sub_85d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d410ULL || rel >= 0x85d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d490 size=176 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_81a030
*/
void sub_85d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d490ULL || rel >= 0x85d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d540 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d540ULL || rel >= 0x85d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d5f0 size=224 callers=0 calls=7
   calls: sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819b80
*/
void sub_85d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d5f0ULL || rel >= 0x85d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d6d0 size=144 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d6d0ULL || rel >= 0x85d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d760 size=240 callers=0 calls=7
   calls: sub_7e9ba0, sub_7eb230, sub_7f2510, sub_7f2520, sub_7f7ae0, sub_819600, sub_8196d0
*/
void sub_85d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d760ULL || rel >= 0x85d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d850 size=96 callers=0 calls=2
   calls: sub_819600, sub_819680
*/
void sub_85d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d850ULL || rel >= 0x85d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d8b0 size=272 callers=0 calls=8
   calls: sub_7e9ba0, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_819b00
*/
void sub_85d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d8b0ULL || rel >= 0x85d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085d9c0 size=160 callers=0 calls=5
   calls: sub_7e9ba0, sub_7f7ae0, sub_7f8ab0, sub_819600, sub_819680
*/
void sub_85d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85d9c0ULL || rel >= 0x85da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085da60 size=112 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_85da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85da60ULL || rel >= 0x85dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085dad0 size=112 callers=0 calls=4
   calls: sub_819600, sub_8196a0, sub_819a10, sub_81a5c0
*/
void sub_85dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85dad0ULL || rel >= 0x85db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085db40 size=192 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_81a640
*/
void sub_85db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85db40ULL || rel >= 0x85dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085dc00 size=112 callers=0 calls=5
   calls: sub_7ef540, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_85dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85dc00ULL || rel >= 0x85dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085dc70 size=256 callers=0 calls=10
   calls: sub_7ef540, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_8196d0, sub_819b00
*/
void sub_85dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85dc70ULL || rel >= 0x85dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085dd70 size=496 callers=0 calls=14
   calls: sub_7e9ba0, sub_7f05d0, sub_7f79e0, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196d0, sub_8198c0, sub_819b00
   ... +2 more
*/
void sub_85dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85dd70ULL || rel >= 0x85df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085df60 size=272 callers=0 calls=7
   calls: sub_7f87f0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_819d00
*/
void sub_85df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85df60ULL || rel >= 0x85e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e070 size=224 callers=0 calls=6
   calls: sub_7f09c0, sub_803c60, sub_819600, sub_8196d0, sub_819790, sub_81a550
*/
void sub_85e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e070ULL || rel >= 0x85e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e150 size=304 callers=0 calls=11
   calls: sub_7e9ba0, sub_7f79e0, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196d0, sub_8198c0, sub_819b80
*/
void sub_85e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e150ULL || rel >= 0x85e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e280 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_85e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e280ULL || rel >= 0x85e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e2d0 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e2d0ULL || rel >= 0x85e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e380 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e380ULL || rel >= 0x85e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e430 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e430ULL || rel >= 0x85e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e4e0 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e4e0ULL || rel >= 0x85e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e590 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e590ULL || rel >= 0x85e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e640 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e640ULL || rel >= 0x85e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e6f0 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e6f0ULL || rel >= 0x85e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e7a0 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e7a0ULL || rel >= 0x85e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e850 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e850ULL || rel >= 0x85e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e900 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e900ULL || rel >= 0x85e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085e9b0 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85e9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85e9b0ULL || rel >= 0x85ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ea60 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ea60ULL || rel >= 0x85eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085eb10 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85eb10ULL || rel >= 0x85ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ebc0 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ebc0ULL || rel >= 0x85ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ec70 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ec70ULL || rel >= 0x85ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ed20 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ed20ULL || rel >= 0x85edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085edd0 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85edd0ULL || rel >= 0x85ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ee80 size=144 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ee80ULL || rel >= 0x85ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ef10 size=16 callers=0 calls=0
*/
void sub_85ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ef10ULL || rel >= 0x85ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ef20 size=160 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_803dd0, sub_819690, sub_81a030, sub_81b5b0
*/
void sub_85ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ef20ULL || rel >= 0x85efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085efc0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_85efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85efc0ULL || rel >= 0x85f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f010 size=128 callers=0 calls=3
   calls: sub_7eef40, sub_819600, sub_8196d0
*/
void sub_85f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f010ULL || rel >= 0x85f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f090 size=112 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f090ULL || rel >= 0x85f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f100 size=112 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f100ULL || rel >= 0x85f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f170 size=112 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f170ULL || rel >= 0x85f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f1e0 size=112 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f1e0ULL || rel >= 0x85f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f250 size=112 callers=0 calls=3
   calls: sub_7eef40, sub_819600, sub_8196d0
*/
void sub_85f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f250ULL || rel >= 0x85f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f2c0 size=176 callers=0 calls=5
   calls: sub_7f78c0, sub_803c60, sub_819600, sub_819640, sub_819d00
*/
void sub_85f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f2c0ULL || rel >= 0x85f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f370 size=208 callers=0 calls=7
   calls: sub_7f88a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_819d00
*/
void sub_85f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f370ULL || rel >= 0x85f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f440 size=176 callers=0 calls=5
   calls: sub_7f88a0, sub_803c60, sub_819600, sub_819640, sub_819d00
*/
void sub_85f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f440ULL || rel >= 0x85f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f4f0 size=208 callers=0 calls=7
   calls: sub_7f78c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_819d00
*/
void sub_85f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f4f0ULL || rel >= 0x85f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f5c0 size=192 callers=0 calls=5
   calls: sub_7f78c0, sub_803c60, sub_819600, sub_819640, sub_819d00
*/
void sub_85f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f5c0ULL || rel >= 0x85f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f680 size=176 callers=0 calls=5
   calls: sub_7f78c0, sub_803c60, sub_819600, sub_819640, sub_819d00
*/
void sub_85f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f680ULL || rel >= 0x85f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f730 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f730ULL || rel >= 0x85f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f7e0 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f7e0ULL || rel >= 0x85f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f890 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f890ULL || rel >= 0x85f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f940 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f940ULL || rel >= 0x85f9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085f9f0 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85f9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85f9f0ULL || rel >= 0x85faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085faa0 size=176 callers=0 calls=3
   calls: sub_7e9ba0, sub_7f7ae0, sub_819600
*/
void sub_85faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85faa0ULL || rel >= 0x85fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085fb50 size=144 callers=0 calls=3
   calls: sub_7eef40, sub_819600, sub_8196d0
*/
void sub_85fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85fb50ULL || rel >= 0x85fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085fbe0 size=208 callers=0 calls=5
   calls: sub_7e9ba0, sub_7eef40, sub_7f7ae0, sub_819600, sub_8196d0
*/
void sub_85fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85fbe0ULL || rel >= 0x85fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085fcb0 size=208 callers=0 calls=5
   calls: sub_7e9ba0, sub_7eef40, sub_7f7ae0, sub_819600, sub_8196d0
*/
void sub_85fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85fcb0ULL || rel >= 0x85fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085fd80 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_85fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85fd80ULL || rel >= 0x85fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085fdd0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_85fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85fdd0ULL || rel >= 0x85fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085fe20 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_85fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85fe20ULL || rel >= 0x85fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085fe70 size=144 callers=0 calls=4
   calls: sub_7eef40, sub_819600, sub_8196d0, sub_81bf90
*/
void sub_85fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85fe70ULL || rel >= 0x85ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0085ff00 size=288 callers=0 calls=9
   calls: sub_7e9ba0, sub_7f79e0, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819b80
*/
void sub_85ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85ff00ULL || rel >= 0x860020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860020 size=160 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819970, sub_81a030
*/
void sub_860020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860020ULL || rel >= 0x8600c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008600c0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8600c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8600c0ULL || rel >= 0x860110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860110 size=160 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a510
*/
void sub_860110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860110ULL || rel >= 0x8601b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008601b0 size=288 callers=0 calls=11
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8199a0, sub_81a640, sub_81a840, sub_81acc0, sub_81be40, sub_81bf40, sub_81c220
*/
void sub_8601b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8601b0ULL || rel >= 0x8602d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008602d0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8602d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8602d0ULL || rel >= 0x860320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860320 size=80 callers=0 calls=2
   calls: sub_819600, sub_819680
*/
void sub_860320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860320ULL || rel >= 0x860370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860370 size=160 callers=0 calls=5
   calls: sub_7f0c00, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_860370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860370ULL || rel >= 0x860410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860410 size=224 callers=0 calls=6
   calls: sub_803c60, sub_819600, sub_819640, sub_819690, sub_819df0, sub_81a640
*/
void sub_860410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860410ULL || rel >= 0x8604f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008604f0 size=128 callers=0 calls=6
   calls: sub_7f0c00, sub_819630, sub_8196d0, sub_819a10, sub_81a5c0, sub_81acc0
*/
void sub_8604f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8604f0ULL || rel >= 0x860570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860570 size=240 callers=0 calls=7
   calls: sub_7f0c00, sub_803c60, sub_819600, sub_819640, sub_819690, sub_8196d0, sub_819df0
*/
void sub_860570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860570ULL || rel >= 0x860660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860660 size=160 callers=0 calls=5
   calls: sub_7f0c00, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_860660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860660ULL || rel >= 0x860700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860700 size=224 callers=0 calls=6
   calls: sub_803c60, sub_819600, sub_819640, sub_819690, sub_819df0, sub_81a640
*/
void sub_860700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860700ULL || rel >= 0x8607e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008607e0 size=16 callers=0 calls=0
*/
void sub_8607e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8607e0ULL || rel >= 0x8607f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008607f0 size=224 callers=0 calls=6
   calls: sub_803c60, sub_819600, sub_819640, sub_819690, sub_819df0, sub_81a640
*/
void sub_8607f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8607f0ULL || rel >= 0x8608d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008608d0 size=176 callers=0 calls=5
   calls: sub_7f0c00, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_8608d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8608d0ULL || rel >= 0x860980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860980 size=16 callers=0 calls=0
*/
void sub_860980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860980ULL || rel >= 0x860990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860990 size=144 callers=0 calls=6
   calls: sub_780c60, sub_7f0c00, sub_819600, sub_8196d0, sub_819a10, sub_81a5c0
*/
void sub_860990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860990ULL || rel >= 0x860a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860a20 size=224 callers=0 calls=6
   calls: sub_803c60, sub_819600, sub_819640, sub_819690, sub_819df0, sub_81a640
*/
void sub_860a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860a20ULL || rel >= 0x860b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860b00 size=176 callers=0 calls=10
   calls: sub_819600, sub_8199a0, sub_819a10, sub_819a20, sub_81a5c0, sub_81acc0, sub_81bd20, sub_81be10, sub_81be40, sub_81c220
*/
void sub_860b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860b00ULL || rel >= 0x860bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860bb0 size=256 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a030, sub_81a640, sub_81a760
*/
void sub_860bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860bb0ULL || rel >= 0x860cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860cb0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_860cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860cb0ULL || rel >= 0x860d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860d10 size=192 callers=0 calls=10
   calls: sub_8196a0, sub_8196b0, sub_8199a0, sub_819a10, sub_819a20, sub_81a5c0, sub_81bd20, sub_81be10, sub_81be40, sub_81c220
*/
void sub_860d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860d10ULL || rel >= 0x860dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860dd0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_860dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860dd0ULL || rel >= 0x860e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860e20 size=256 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a030, sub_81a640, sub_81a760
*/
void sub_860e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860e20ULL || rel >= 0x860f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860f20 size=16 callers=0 calls=0
*/
void sub_860f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860f20ULL || rel >= 0x860f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00860f30 size=240 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_81a030, sub_81b750
*/
void sub_860f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860f30ULL || rel >= 0x861020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861020 size=128 callers=0 calls=1
   calls: sub_819600
*/
void sub_861020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861020ULL || rel >= 0x8610a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008610a0 size=16 callers=0 calls=0
*/
void sub_8610a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8610a0ULL || rel >= 0x8610b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008610b0 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_8610b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8610b0ULL || rel >= 0x861130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861130 size=96 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861130ULL || rel >= 0x861190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861190 size=272 callers=0 calls=11
   calls: sub_780ec0, sub_7e9aa0, sub_7e9ab0, sub_7eb330, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196b0, sub_81a640
*/
void sub_861190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861190ULL || rel >= 0x8612a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008612a0 size=16 callers=0 calls=0
*/
void sub_8612a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8612a0ULL || rel >= 0x8612b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008612b0 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_8612b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8612b0ULL || rel >= 0x861330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861330 size=16 callers=0 calls=0
*/
void sub_861330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861330ULL || rel >= 0x861340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861340 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861340ULL || rel >= 0x8613c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008613c0 size=16 callers=0 calls=0
*/
void sub_8613c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8613c0ULL || rel >= 0x8613d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008613d0 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_8613d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8613d0ULL || rel >= 0x861450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861450 size=16 callers=0 calls=0
*/
void sub_861450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861450ULL || rel >= 0x861460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861460 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861460ULL || rel >= 0x8614e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008614e0 size=16 callers=0 calls=0
*/
void sub_8614e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8614e0ULL || rel >= 0x8614f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008614f0 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_8614f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8614f0ULL || rel >= 0x861570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861570 size=16 callers=0 calls=0
*/
void sub_861570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861570ULL || rel >= 0x861580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861580 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861580ULL || rel >= 0x861600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861600 size=16 callers=0 calls=0
*/
void sub_861600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861600ULL || rel >= 0x861610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861610 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861610ULL || rel >= 0x861690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861690 size=16 callers=0 calls=0
*/
void sub_861690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861690ULL || rel >= 0x8616a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008616a0 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_8616a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8616a0ULL || rel >= 0x861720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861720 size=16 callers=0 calls=0
*/
void sub_861720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861720ULL || rel >= 0x861730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861730 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861730ULL || rel >= 0x8617b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008617b0 size=16 callers=0 calls=0
*/
void sub_8617b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8617b0ULL || rel >= 0x8617c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008617c0 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_8617c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8617c0ULL || rel >= 0x861840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861840 size=16 callers=0 calls=0
*/
void sub_861840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861840ULL || rel >= 0x861850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861850 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861850ULL || rel >= 0x8618d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008618d0 size=16 callers=0 calls=0
*/
void sub_8618d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8618d0ULL || rel >= 0x8618e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008618e0 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_8618e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8618e0ULL || rel >= 0x861960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861960 size=16 callers=0 calls=0
*/
void sub_861960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861960ULL || rel >= 0x861970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861970 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861970ULL || rel >= 0x8619f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008619f0 size=16 callers=0 calls=0
*/
void sub_8619f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8619f0ULL || rel >= 0x861a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861a00 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861a00ULL || rel >= 0x861a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861a80 size=16 callers=0 calls=0
*/
void sub_861a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861a80ULL || rel >= 0x861a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861a90 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861a90ULL || rel >= 0x861b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861b10 size=16 callers=0 calls=0
*/
void sub_861b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861b10ULL || rel >= 0x861b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861b20 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861b20ULL || rel >= 0x861b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861b90 size=16 callers=0 calls=0
*/
void sub_861b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861b90ULL || rel >= 0x861ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861ba0 size=128 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861ba0ULL || rel >= 0x861c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861c20 size=16 callers=0 calls=0
*/
void sub_861c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861c20ULL || rel >= 0x861c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861c30 size=16 callers=0 calls=0
*/
void sub_861c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861c30ULL || rel >= 0x861c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861c40 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_861c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861c40ULL || rel >= 0x861ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861ca0 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_861ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861ca0ULL || rel >= 0x861d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861d10 size=128 callers=0 calls=5
   calls: sub_819600, sub_8196a0, sub_8196b0, sub_819a10, sub_81a5c0
*/
void sub_861d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861d10ULL || rel >= 0x861d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861d90 size=224 callers=0 calls=6
   calls: sub_803c60, sub_819600, sub_819640, sub_819690, sub_819df0, sub_81a640
*/
void sub_861d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861d90ULL || rel >= 0x861e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861e70 size=112 callers=0 calls=4
   calls: sub_819600, sub_819810, sub_819a10, sub_81a5c0
*/
void sub_861e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861e70ULL || rel >= 0x861ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861ee0 size=96 callers=0 calls=3
   calls: sub_819600, sub_819a10, sub_81a5c0
*/
void sub_861ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861ee0ULL || rel >= 0x861f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861f40 size=16 callers=0 calls=0
*/
void sub_861f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861f40ULL || rel >= 0x861f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00861f50 size=224 callers=0 calls=6
   calls: sub_803c60, sub_819600, sub_819640, sub_819690, sub_819df0, sub_81a640
*/
void sub_861f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x861f50ULL || rel >= 0x862030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862030 size=112 callers=0 calls=4
   calls: sub_819600, sub_819810, sub_819a10, sub_81a5c0
*/
void sub_862030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862030ULL || rel >= 0x8620a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008620a0 size=96 callers=0 calls=3
   calls: sub_819600, sub_819a10, sub_81a5c0
*/
void sub_8620a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8620a0ULL || rel >= 0x862100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862100 size=16 callers=0 calls=0
*/
void sub_862100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862100ULL || rel >= 0x862110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862110 size=112 callers=0 calls=4
   calls: sub_819600, sub_819810, sub_819a10, sub_81a5c0
*/
void sub_862110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862110ULL || rel >= 0x862180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862180 size=96 callers=0 calls=3
   calls: sub_819600, sub_819a10, sub_81a5c0
*/
void sub_862180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862180ULL || rel >= 0x8621e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008621e0 size=16 callers=0 calls=0
*/
void sub_8621e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8621e0ULL || rel >= 0x8621f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008621f0 size=112 callers=0 calls=4
   calls: sub_819600, sub_819810, sub_819a10, sub_81a5c0
*/
void sub_8621f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8621f0ULL || rel >= 0x862260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862260 size=96 callers=0 calls=3
   calls: sub_819600, sub_819a10, sub_81a5c0
*/
void sub_862260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862260ULL || rel >= 0x8622c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008622c0 size=16 callers=0 calls=0
*/
void sub_8622c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8622c0ULL || rel >= 0x8622d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008622d0 size=112 callers=0 calls=4
   calls: sub_819600, sub_819970, sub_819a10, sub_81a5c0
*/
void sub_8622d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8622d0ULL || rel >= 0x862340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862340 size=80 callers=0 calls=3
   calls: sub_819970, sub_819a10, sub_81a5c0
*/
void sub_862340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862340ULL || rel >= 0x862390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862390 size=224 callers=0 calls=6
   calls: sub_803c60, sub_819600, sub_819640, sub_819690, sub_819df0, sub_81a640
*/
void sub_862390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862390ULL || rel >= 0x862470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862470 size=208 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8196b0
*/
void sub_862470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862470ULL || rel >= 0x862540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862540 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_862540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862540ULL || rel >= 0x862590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862590 size=144 callers=0 calls=1
   calls: sub_819600
*/
void sub_862590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862590ULL || rel >= 0x862620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862620 size=160 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8196b0
*/
void sub_862620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862620ULL || rel >= 0x8626c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008626c0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8626c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8626c0ULL || rel >= 0x862710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862710 size=144 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8196b0
*/
void sub_862710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862710ULL || rel >= 0x8627a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008627a0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8627a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8627a0ULL || rel >= 0x8627f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008627f0 size=192 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_803e10, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_8627f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8627f0ULL || rel >= 0x8628b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008628b0 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_8628b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8628b0ULL || rel >= 0x862920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862920 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_862920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862920ULL || rel >= 0x862980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862980 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_862980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862980ULL || rel >= 0x8629e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008629e0 size=128 callers=0 calls=0
*/
void sub_8629e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8629e0ULL || rel >= 0x862a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862a60 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_862a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862a60ULL || rel >= 0x862a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862a90 size=352 callers=1 calls=16
   calls: sub_7eb5d0, sub_7eef40, sub_7ef2b0, sub_7f05d0, sub_7fe250, sub_803560, sub_803d10, sub_80dd60, sub_80e190, sub_80e250, sub_810650, sub_810a90
   ... +4 more
*/
void sub_862a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862a90ULL || rel >= 0x862bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862bf0 size=16 callers=0 calls=0
*/
void sub_862bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862bf0ULL || rel >= 0x862c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862c00 size=128 callers=0 calls=0
*/
void sub_862c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862c00ULL || rel >= 0x862c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862c80 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_862c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862c80ULL || rel >= 0x862cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862cb0 size=176 callers=1 calls=9
   calls: sub_7ef2b0, sub_7f0670, sub_7fe250, sub_803560, sub_80e250, sub_8106b0, sub_82a9c0, sub_82a9e0, sub_82ab10
*/
void sub_862cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862cb0ULL || rel >= 0x862d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862d60 size=16 callers=0 calls=0
*/
void sub_862d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862d60ULL || rel >= 0x862d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862d70 size=128 callers=0 calls=0
*/
void sub_862d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862d70ULL || rel >= 0x862df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862df0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_862df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862df0ULL || rel >= 0x862e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862e20 size=80 callers=1 calls=2
   calls: sub_810d10, sub_82a9e0
*/
void sub_862e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862e20ULL || rel >= 0x862e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862e70 size=16 callers=0 calls=0
*/
void sub_862e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862e70ULL || rel >= 0x862e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862e80 size=128 callers=0 calls=0
*/
void sub_862e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862e80ULL || rel >= 0x862f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862f00 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_862f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862f00ULL || rel >= 0x862f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862f30 size=96 callers=1 calls=4
   calls: sub_80dd60, sub_82a9e0, sub_82aa50, sub_82d240
*/
void sub_862f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862f30ULL || rel >= 0x862f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862f90 size=16 callers=0 calls=0
*/
void sub_862f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862f90ULL || rel >= 0x862fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00862fa0 size=128 callers=0 calls=0
*/
void sub_862fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x862fa0ULL || rel >= 0x863020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863020 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_863020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863020ULL || rel >= 0x863050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863050 size=160 callers=1 calls=7
   calls: sub_7ef2b0, sub_80dd60, sub_829060, sub_82a9e0, sub_82aa80, sub_82ab10, sub_82c9c0
*/
void sub_863050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863050ULL || rel >= 0x8630f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008630f0 size=16 callers=0 calls=0
*/
void sub_8630f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8630f0ULL || rel >= 0x863100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863100 size=128 callers=0 calls=0
*/
void sub_863100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863100ULL || rel >= 0x863180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863180 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_863180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863180ULL || rel >= 0x8631b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008631b0 size=432 callers=1 calls=29
   calls: sub_7e9550, sub_807cd0, sub_8139d0, sub_8286a0, sub_828e90, sub_828ea0, sub_829050, sub_829090, sub_829100, sub_82a9d0, sub_82aa00, sub_82aa10
   ... +17 more
*/
void sub_8631b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8631b0ULL || rel >= 0x863360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863360 size=16 callers=0 calls=0
*/
void sub_863360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863360ULL || rel >= 0x863370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863370 size=128 callers=0 calls=0
*/
void sub_863370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863370ULL || rel >= 0x8633f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008633f0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8633f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8633f0ULL || rel >= 0x863420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863420 size=160 callers=2 calls=10
   calls: sub_812bd0, sub_828450, sub_828550, sub_82aa20, sub_82aa80, sub_82b500, sub_82b7a0, sub_83d280, sub_84d3a0, sub_8634c0
*/
void sub_863420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863420ULL || rel >= 0x8634c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008634c0 size=288 callers=1 calls=11
   calls: sub_7cb490, sub_7ee6b0, sub_7fc430, sub_812c50, sub_828dd0, sub_82a9b0, sub_82aa80, sub_82ac20, sub_82ccb0, sub_82ce80, sub_850c30
*/
void sub_8634c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8634c0ULL || rel >= 0x8635e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008635e0 size=16 callers=0 calls=0
*/
void sub_8635e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8635e0ULL || rel >= 0x8635f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008635f0 size=128 callers=0 calls=0
*/
void sub_8635f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8635f0ULL || rel >= 0x863670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863670 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_863670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863670ULL || rel >= 0x8636a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008636a0 size=560 callers=1 calls=26
   calls: sub_7fe250, sub_803c60, sub_804ad0, sub_80e820, sub_812cc0, sub_812d00, sub_812db0, sub_812e10, sub_812e30, sub_812ec0, sub_812f00, sub_813320
   ... +14 more
*/
void sub_8636a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8636a0ULL || rel >= 0x8638d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008638d0 size=16 callers=0 calls=0
*/
void sub_8638d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8638d0ULL || rel >= 0x8638e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008638e0 size=128 callers=0 calls=0
*/
void sub_8638e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8638e0ULL || rel >= 0x863960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863960 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_863960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863960ULL || rel >= 0x863990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863990 size=96 callers=1 calls=4
   calls: sub_80dd60, sub_82a9e0, sub_82aa50, sub_82d2e0
*/
void sub_863990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863990ULL || rel >= 0x8639f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008639f0 size=16 callers=0 calls=0
*/
void sub_8639f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8639f0ULL || rel >= 0x863a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863a00 size=128 callers=0 calls=0
*/
void sub_863a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863a00ULL || rel >= 0x863a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863a80 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_863a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863a80ULL || rel >= 0x863ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863ab0 size=96 callers=1 calls=4
   calls: sub_7ef2b0, sub_811370, sub_82a9e0, sub_82ab10
*/
void sub_863ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863ab0ULL || rel >= 0x863b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863b10 size=16 callers=0 calls=0
*/
void sub_863b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863b10ULL || rel >= 0x863b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863b20 size=128 callers=0 calls=0
*/
void sub_863b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863b20ULL || rel >= 0x863ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863ba0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_863ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863ba0ULL || rel >= 0x863bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863bd0 size=96 callers=1 calls=6
   calls: sub_7fe230, sub_8017d0, sub_8127d0, sub_82a9c0, sub_82a9d0, sub_82a9e0
*/
void sub_863bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863bd0ULL || rel >= 0x863c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863c30 size=16 callers=0 calls=0
*/
void sub_863c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863c30ULL || rel >= 0x863c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863c40 size=128 callers=0 calls=0
*/
void sub_863c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863c40ULL || rel >= 0x863cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863cc0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_863cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863cc0ULL || rel >= 0x863cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863cf0 size=272 callers=3 calls=8
   calls: sub_7ee6b0, sub_804200, sub_804480, sub_828930, sub_82a9b0, sub_82a9c0, sub_82aa80, sub_855f20
*/
void sub_863cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863cf0ULL || rel >= 0x863e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863e00 size=16 callers=0 calls=0
*/
void sub_863e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863e00ULL || rel >= 0x863e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863e10 size=128 callers=0 calls=0
*/
void sub_863e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863e10ULL || rel >= 0x863e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863e90 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_863e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863e90ULL || rel >= 0x863ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863ec0 size=240 callers=1 calls=9
   calls: sub_7cb490, sub_803c60, sub_803ce0, sub_828490, sub_82aa50, sub_82aa80, sub_82ab10, sub_82d530, sub_83c2b0
*/
void sub_863ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863ec0ULL || rel >= 0x863fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863fb0 size=16 callers=0 calls=0
*/
void sub_863fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863fb0ULL || rel >= 0x863fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00863fc0 size=128 callers=0 calls=0
*/
void sub_863fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863fc0ULL || rel >= 0x864040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864040 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864040ULL || rel >= 0x864070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864070 size=112 callers=1 calls=6
   calls: sub_7fe250, sub_803560, sub_810a90, sub_82a9c0, sub_82a9e0, sub_82ab10
*/
void sub_864070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864070ULL || rel >= 0x8640e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008640e0 size=16 callers=0 calls=0
*/
void sub_8640e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8640e0ULL || rel >= 0x8640f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008640f0 size=128 callers=0 calls=0
*/
void sub_8640f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8640f0ULL || rel >= 0x864170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864170 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864170ULL || rel >= 0x8641a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008641a0 size=80 callers=1 calls=3
   calls: sub_810b00, sub_82a9e0, sub_82ab10
*/
void sub_8641a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8641a0ULL || rel >= 0x8641f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008641f0 size=16 callers=0 calls=0
*/
void sub_8641f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8641f0ULL || rel >= 0x864200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864200 size=128 callers=0 calls=0
*/
void sub_864200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864200ULL || rel >= 0x864280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864280 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864280ULL || rel >= 0x8642b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008642b0 size=80 callers=1 calls=3
   calls: sub_828760, sub_82a2a0, sub_82aa80
*/
void sub_8642b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8642b0ULL || rel >= 0x864300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864300 size=16 callers=0 calls=0
*/
void sub_864300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864300ULL || rel >= 0x864310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864310 size=128 callers=0 calls=0
*/
void sub_864310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864310ULL || rel >= 0x864390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864390 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864390ULL || rel >= 0x8643c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008643c0 size=48 callers=1 calls=1
   calls: sub_82aa30
*/
void sub_8643c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8643c0ULL || rel >= 0x8643f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008643f0 size=16 callers=0 calls=0
*/
void sub_8643f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8643f0ULL || rel >= 0x864400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864400 size=128 callers=0 calls=0
*/
void sub_864400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864400ULL || rel >= 0x864480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864480 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864480ULL || rel >= 0x8644b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008644b0 size=32 callers=1 calls=1
   calls: sub_82aa30
*/
void sub_8644b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8644b0ULL || rel >= 0x8644d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008644d0 size=16 callers=0 calls=0
*/
void sub_8644d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8644d0ULL || rel >= 0x8644e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008644e0 size=128 callers=0 calls=0
*/
void sub_8644e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8644e0ULL || rel >= 0x864560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864560 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864560ULL || rel >= 0x864590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864590 size=16 callers=0 calls=0
*/
void sub_864590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864590ULL || rel >= 0x8645a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008645a0 size=128 callers=0 calls=0
*/
void sub_8645a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8645a0ULL || rel >= 0x864620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864620 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864620ULL || rel >= 0x864650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864650 size=128 callers=1 calls=5
   calls: sub_7f80f0, sub_7fe1d0, sub_82a9b0, sub_82a9c0, sub_82ab10
*/
void sub_864650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864650ULL || rel >= 0x8646d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008646d0 size=16 callers=0 calls=0
*/
void sub_8646d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8646d0ULL || rel >= 0x8646e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008646e0 size=128 callers=0 calls=0
*/
void sub_8646e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8646e0ULL || rel >= 0x864760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864760 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864760ULL || rel >= 0x864790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864790 size=80 callers=1 calls=4
   calls: sub_7fe230, sub_8017c0, sub_82a9c0, sub_82a9d0
*/
void sub_864790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864790ULL || rel >= 0x8647e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008647e0 size=16 callers=0 calls=0
*/
void sub_8647e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8647e0ULL || rel >= 0x8647f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008647f0 size=128 callers=0 calls=0
*/
void sub_8647f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8647f0ULL || rel >= 0x864870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864870 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864870ULL || rel >= 0x8648a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008648a0 size=288 callers=1 calls=21
   calls: sub_7e9550, sub_807cd0, sub_8139d0, sub_8288d0, sub_828e90, sub_829050, sub_82a9d0, sub_82aa00, sub_82aa10, sub_82aa20, sub_82aa60, sub_82aa80
   ... +9 more
*/
void sub_8648a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8648a0ULL || rel >= 0x8649c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008649c0 size=16 callers=0 calls=0
*/
void sub_8649c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8649c0ULL || rel >= 0x8649d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008649d0 size=128 callers=0 calls=0
*/
void sub_8649d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8649d0ULL || rel >= 0x864a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864a50 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864a50ULL || rel >= 0x864a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864a80 size=64 callers=1 calls=2
   calls: sub_82aa50, sub_82d3f0
*/
void sub_864a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864a80ULL || rel >= 0x864ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864ac0 size=16 callers=0 calls=0
*/
void sub_864ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864ac0ULL || rel >= 0x864ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864ad0 size=128 callers=0 calls=0
*/
void sub_864ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864ad0ULL || rel >= 0x864b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864b50 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_864b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864b50ULL || rel >= 0x864b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864b80 size=16 callers=0 calls=0
*/
void sub_864b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864b80ULL || rel >= 0x864b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864b90 size=128 callers=0 calls=0
*/
void sub_864b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864b90ULL || rel >= 0x864c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864c10 size=32 callers=0 calls=0
*/
void sub_864c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864c10ULL || rel >= 0x864c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864c30 size=32 callers=0 calls=0
*/
void sub_864c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864c30ULL || rel >= 0x864c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864c50 size=32 callers=0 calls=0
*/
void sub_864c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864c50ULL || rel >= 0x864c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864c70 size=32 callers=0 calls=0
*/
void sub_864c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864c70ULL || rel >= 0x864c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864c90 size=32 callers=0 calls=0
*/
void sub_864c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864c90ULL || rel >= 0x864cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864cb0 size=32 callers=0 calls=0
*/
void sub_864cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864cb0ULL || rel >= 0x864cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864cd0 size=32 callers=0 calls=0
*/
void sub_864cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864cd0ULL || rel >= 0x864cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864cf0 size=32 callers=0 calls=0
*/
void sub_864cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864cf0ULL || rel >= 0x864d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864d10 size=32 callers=0 calls=0
*/
void sub_864d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864d10ULL || rel >= 0x864d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864d30 size=32 callers=0 calls=0
*/
void sub_864d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864d30ULL || rel >= 0x864d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864d50 size=32 callers=0 calls=0
*/
void sub_864d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864d50ULL || rel >= 0x864d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864d70 size=32 callers=0 calls=0
*/
void sub_864d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864d70ULL || rel >= 0x864d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864d90 size=32 callers=0 calls=0
*/
void sub_864d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864d90ULL || rel >= 0x864db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864db0 size=32 callers=0 calls=0
*/
void sub_864db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864db0ULL || rel >= 0x864dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864dd0 size=32 callers=0 calls=0
*/
void sub_864dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864dd0ULL || rel >= 0x864df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864df0 size=32 callers=0 calls=0
*/
void sub_864df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864df0ULL || rel >= 0x864e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864e10 size=32 callers=0 calls=0
*/
void sub_864e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864e10ULL || rel >= 0x864e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864e30 size=32 callers=0 calls=0
*/
void sub_864e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864e30ULL || rel >= 0x864e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864e50 size=32 callers=0 calls=0
*/
void sub_864e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864e50ULL || rel >= 0x864e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864e70 size=32 callers=0 calls=0
*/
void sub_864e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864e70ULL || rel >= 0x864e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864e90 size=32 callers=0 calls=0
*/
void sub_864e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864e90ULL || rel >= 0x864eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864eb0 size=32 callers=0 calls=0
*/
void sub_864eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864eb0ULL || rel >= 0x864ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864ed0 size=288 callers=0 calls=7
   calls: sub_7e8c60, sub_7e8c70, sub_7e9a10, sub_7e9ba0, sub_7eafc0, sub_7eb050, sub_7f8ba0
*/
void sub_864ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864ed0ULL || rel >= 0x864ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00864ff0 size=160 callers=0 calls=5
   calls: sub_7e8c60, sub_7e8d00, sub_7e9ba0, sub_7eafc0, sub_7eb050
*/
void sub_864ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x864ff0ULL || rel >= 0x865090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865090 size=144 callers=0 calls=4
   calls: sub_7e8c60, sub_7e9ba0, sub_7eafc0, sub_7eb050
*/
void sub_865090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865090ULL || rel >= 0x865120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865120 size=144 callers=0 calls=4
   calls: sub_7e8c60, sub_7e9ba0, sub_7eafc0, sub_7eb050
*/
void sub_865120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865120ULL || rel >= 0x8651b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008651b0 size=128 callers=25 calls=4
   calls: sub_7e8c60, sub_7e9ba0, sub_7eafc0, sub_7eb050
*/
void sub_8651b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8651b0ULL || rel >= 0x865230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865230 size=16 callers=0 calls=0
*/
void sub_865230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865230ULL || rel >= 0x865240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865240 size=192 callers=1 calls=4
   calls: sub_819600, sub_819660, sub_819790, sub_8197b0
*/
void sub_865240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865240ULL || rel >= 0x865300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865300 size=16 callers=0 calls=0
*/
void sub_865300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865300ULL || rel >= 0x865310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865310 size=64 callers=0 calls=1
   calls: sub_865240
*/
void sub_865310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865310ULL || rel >= 0x865350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

