/* main functions 00828c00..008362b0 (59 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00828c00 size=16 callers=1 calls=0
*/
void sub_828c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828c00ULL || rel >= 0x828c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828c10 size=16 callers=1 calls=0
*/
void sub_828c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828c10ULL || rel >= 0x828c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828c20 size=16 callers=1 calls=0
*/
void sub_828c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828c20ULL || rel >= 0x828c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828c30 size=16 callers=1 calls=0
*/
void sub_828c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828c30ULL || rel >= 0x828c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828c40 size=16 callers=1 calls=0
*/
void sub_828c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828c40ULL || rel >= 0x828c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828c50 size=16 callers=1 calls=0
*/
void sub_828c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828c50ULL || rel >= 0x828c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828c60 size=16 callers=1 calls=0
*/
void sub_828c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828c60ULL || rel >= 0x828c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828c70 size=16 callers=1 calls=0
*/
void sub_828c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828c70ULL || rel >= 0x828c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828c80 size=16 callers=7 calls=0
*/
void sub_828c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828c80ULL || rel >= 0x828c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828c90 size=16 callers=3 calls=0
*/
void sub_828c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828c90ULL || rel >= 0x828ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ca0 size=16 callers=1 calls=0
*/
void sub_828ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ca0ULL || rel >= 0x828cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828cb0 size=16 callers=1 calls=0
*/
void sub_828cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828cb0ULL || rel >= 0x828cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828cc0 size=16 callers=1 calls=0
*/
void sub_828cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828cc0ULL || rel >= 0x828cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828cd0 size=16 callers=1 calls=0
*/
void sub_828cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828cd0ULL || rel >= 0x828ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ce0 size=16 callers=1 calls=0
*/
void sub_828ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ce0ULL || rel >= 0x828cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828cf0 size=16 callers=1 calls=0
*/
void sub_828cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828cf0ULL || rel >= 0x828d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828d00 size=16 callers=1 calls=0
*/
void sub_828d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828d00ULL || rel >= 0x828d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828d10 size=16 callers=1 calls=0
*/
void sub_828d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828d10ULL || rel >= 0x828d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828d20 size=16 callers=1 calls=0
*/
void sub_828d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828d20ULL || rel >= 0x828d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828d30 size=16 callers=1 calls=0
*/
void sub_828d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828d30ULL || rel >= 0x828d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828d40 size=16 callers=7 calls=0
*/
void sub_828d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828d40ULL || rel >= 0x828d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828d50 size=16 callers=1 calls=0
*/
void sub_828d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828d50ULL || rel >= 0x828d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828d60 size=16 callers=1 calls=0
*/
void sub_828d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828d60ULL || rel >= 0x828d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828d70 size=16 callers=1 calls=0
*/
void sub_828d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828d70ULL || rel >= 0x828d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828d80 size=16 callers=1 calls=0
*/
void sub_828d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828d80ULL || rel >= 0x828d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828d90 size=16 callers=3 calls=0
*/
void sub_828d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828d90ULL || rel >= 0x828da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828da0 size=16 callers=3 calls=0
*/
void sub_828da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828da0ULL || rel >= 0x828db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828db0 size=16 callers=1 calls=0
*/
void sub_828db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828db0ULL || rel >= 0x828dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828dc0 size=16 callers=1 calls=0
*/
void sub_828dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828dc0ULL || rel >= 0x828dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828dd0 size=16 callers=4 calls=0
*/
void sub_828dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828dd0ULL || rel >= 0x828de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828de0 size=16 callers=3 calls=0
*/
void sub_828de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828de0ULL || rel >= 0x828df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828df0 size=16 callers=2 calls=0
*/
void sub_828df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828df0ULL || rel >= 0x828e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828e00 size=16 callers=2 calls=0
*/
void sub_828e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828e00ULL || rel >= 0x828e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828e10 size=16 callers=3 calls=0
*/
void sub_828e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828e10ULL || rel >= 0x828e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828e20 size=16 callers=1 calls=0
*/
void sub_828e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828e20ULL || rel >= 0x828e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828e30 size=16 callers=1 calls=0
*/
void sub_828e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828e30ULL || rel >= 0x828e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828e40 size=16 callers=3 calls=0
*/
void sub_828e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828e40ULL || rel >= 0x828e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828e50 size=16 callers=1 calls=0
*/
void sub_828e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828e50ULL || rel >= 0x828e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828e60 size=16 callers=1 calls=0
*/
void sub_828e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828e60ULL || rel >= 0x828e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828e70 size=16 callers=1 calls=0
*/
void sub_828e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828e70ULL || rel >= 0x828e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828e80 size=16 callers=1 calls=0
*/
void sub_828e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828e80ULL || rel >= 0x828e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828e90 size=16 callers=2 calls=0
*/
void sub_828e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828e90ULL || rel >= 0x828ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ea0 size=16 callers=2 calls=0
*/
void sub_828ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ea0ULL || rel >= 0x828eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828eb0 size=16 callers=2 calls=0
*/
void sub_828eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828eb0ULL || rel >= 0x828ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ec0 size=16 callers=3 calls=0
*/
void sub_828ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ec0ULL || rel >= 0x828ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ed0 size=16 callers=2 calls=0
*/
void sub_828ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ed0ULL || rel >= 0x828ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ee0 size=16 callers=1 calls=0
*/
void sub_828ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ee0ULL || rel >= 0x828ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ef0 size=16 callers=1 calls=0
*/
void sub_828ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ef0ULL || rel >= 0x828f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828f00 size=16 callers=3 calls=0
*/
void sub_828f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828f00ULL || rel >= 0x828f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828f10 size=16 callers=14 calls=0
*/
void sub_828f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828f10ULL || rel >= 0x828f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828f20 size=16 callers=7 calls=0
*/
void sub_828f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828f20ULL || rel >= 0x828f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828f30 size=16 callers=1 calls=0
*/
void sub_828f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828f30ULL || rel >= 0x828f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828f40 size=16 callers=6 calls=0
*/
void sub_828f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828f40ULL || rel >= 0x828f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828f50 size=16 callers=1 calls=0
*/
void sub_828f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828f50ULL || rel >= 0x828f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828f60 size=16 callers=1 calls=0
*/
void sub_828f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828f60ULL || rel >= 0x828f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828f70 size=16 callers=1 calls=0
*/
void sub_828f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828f70ULL || rel >= 0x828f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828f80 size=16 callers=4 calls=0
*/
void sub_828f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828f80ULL || rel >= 0x828f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828f90 size=16 callers=1 calls=0
*/
void sub_828f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828f90ULL || rel >= 0x828fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828fa0 size=16 callers=1 calls=0
*/
void sub_828fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828fa0ULL || rel >= 0x828fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828fb0 size=16 callers=1 calls=0
*/
void sub_828fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828fb0ULL || rel >= 0x828fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828fc0 size=16 callers=1 calls=0
*/
void sub_828fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828fc0ULL || rel >= 0x828fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828fd0 size=16 callers=1 calls=0
*/
void sub_828fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828fd0ULL || rel >= 0x828fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828fe0 size=16 callers=1 calls=0
*/
void sub_828fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828fe0ULL || rel >= 0x828ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ff0 size=16 callers=1 calls=0
*/
void sub_828ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ff0ULL || rel >= 0x829000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829000 size=16 callers=2 calls=0
*/
void sub_829000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829000ULL || rel >= 0x829010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829010 size=16 callers=5 calls=0
*/
void sub_829010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829010ULL || rel >= 0x829020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829020 size=16 callers=6 calls=0
*/
void sub_829020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829020ULL || rel >= 0x829030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829030 size=16 callers=4 calls=0
*/
void sub_829030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829030ULL || rel >= 0x829040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829040 size=16 callers=4 calls=0
*/
void sub_829040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829040ULL || rel >= 0x829050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829050 size=16 callers=4 calls=0
*/
void sub_829050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829050ULL || rel >= 0x829060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829060 size=16 callers=2 calls=0
*/
void sub_829060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829060ULL || rel >= 0x829070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829070 size=16 callers=2 calls=0
*/
void sub_829070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829070ULL || rel >= 0x829080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829080 size=16 callers=2 calls=0
*/
void sub_829080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829080ULL || rel >= 0x829090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829090 size=16 callers=2 calls=0
*/
void sub_829090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829090ULL || rel >= 0x8290a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008290a0 size=16 callers=3 calls=0
*/
void sub_8290a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8290a0ULL || rel >= 0x8290b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008290b0 size=16 callers=1 calls=0
*/
void sub_8290b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8290b0ULL || rel >= 0x8290c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008290c0 size=16 callers=1 calls=0
*/
void sub_8290c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8290c0ULL || rel >= 0x8290d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008290d0 size=16 callers=1 calls=0
*/
void sub_8290d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8290d0ULL || rel >= 0x8290e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008290e0 size=16 callers=1 calls=0
*/
void sub_8290e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8290e0ULL || rel >= 0x8290f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008290f0 size=16 callers=1 calls=0
*/
void sub_8290f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8290f0ULL || rel >= 0x829100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829100 size=16 callers=4 calls=0
*/
void sub_829100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829100ULL || rel >= 0x829110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829110 size=16 callers=1 calls=0
*/
void sub_829110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829110ULL || rel >= 0x829120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829120 size=16 callers=2 calls=0
*/
void sub_829120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829120ULL || rel >= 0x829130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829130 size=16 callers=3 calls=0
*/
void sub_829130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829130ULL || rel >= 0x829140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829140 size=16 callers=2 calls=0
*/
void sub_829140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829140ULL || rel >= 0x829150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829150 size=16 callers=2 calls=0
*/
void sub_829150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829150ULL || rel >= 0x829160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829160 size=16 callers=1 calls=0
*/
void sub_829160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829160ULL || rel >= 0x829170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829170 size=16 callers=3 calls=0
*/
void sub_829170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829170ULL || rel >= 0x829180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829180 size=16 callers=4 calls=0
*/
void sub_829180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829180ULL || rel >= 0x829190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829190 size=16 callers=1 calls=0
*/
void sub_829190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829190ULL || rel >= 0x8291a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008291a0 size=16 callers=1 calls=0
*/
void sub_8291a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8291a0ULL || rel >= 0x8291b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008291b0 size=16 callers=1 calls=0
*/
void sub_8291b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8291b0ULL || rel >= 0x8291c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008291c0 size=16 callers=1 calls=0
*/
void sub_8291c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8291c0ULL || rel >= 0x8291d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008291d0 size=16 callers=1 calls=0
*/
void sub_8291d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8291d0ULL || rel >= 0x8291e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008291e0 size=16 callers=1 calls=0
*/
void sub_8291e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8291e0ULL || rel >= 0x8291f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008291f0 size=16 callers=5 calls=0
*/
void sub_8291f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8291f0ULL || rel >= 0x829200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829200 size=16 callers=2 calls=0
*/
void sub_829200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829200ULL || rel >= 0x829210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829210 size=16 callers=1 calls=0
*/
void sub_829210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829210ULL || rel >= 0x829220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829220 size=16 callers=1 calls=0
*/
void sub_829220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829220ULL || rel >= 0x829230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829230 size=16 callers=1 calls=0
*/
void sub_829230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829230ULL || rel >= 0x829240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829240 size=16 callers=1 calls=0
*/
void sub_829240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829240ULL || rel >= 0x829250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829250 size=16 callers=1 calls=0
*/
void sub_829250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829250ULL || rel >= 0x829260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829260 size=16 callers=4 calls=0
*/
void sub_829260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829260ULL || rel >= 0x829270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829270 size=16 callers=2 calls=0
*/
void sub_829270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829270ULL || rel >= 0x829280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829280 size=16 callers=1 calls=0
*/
void sub_829280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829280ULL || rel >= 0x829290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829290 size=16 callers=2 calls=0
*/
void sub_829290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829290ULL || rel >= 0x8292a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008292a0 size=16 callers=1 calls=0
*/
void sub_8292a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8292a0ULL || rel >= 0x8292b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008292b0 size=128 callers=0 calls=0
*/
void sub_8292b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8292b0ULL || rel >= 0x829330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829330 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_829330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829330ULL || rel >= 0x829360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829360 size=144 callers=1 calls=7
   calls: sub_809d50, sub_80fe00, sub_828600, sub_8294b0, sub_82a9e0, sub_82aa10, sub_82aa80
*/
void sub_829360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829360ULL || rel >= 0x8293f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008293f0 size=16 callers=0 calls=0
*/
void sub_8293f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8293f0ULL || rel >= 0x829400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829400 size=128 callers=0 calls=0
*/
void sub_829400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829400ULL || rel >= 0x829480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829480 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_829480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829480ULL || rel >= 0x8294b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008294b0 size=784 callers=12 calls=38
   calls: KNOCKOUT_POKEMON, sub_7cd8b0, sub_7ee6b0, sub_7ee6c0, sub_7ee800, sub_7ef240, sub_7ef250, sub_7ef2b0, sub_7f0540, sub_7fe260, sub_802ac0, sub_80b0f0
   ... +26 more
*/
void sub_8294b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8294b0ULL || rel >= 0x8297c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008297c0 size=144 callers=1 calls=9
   calls: sub_7cb490, sub_7fc2f0, sub_802870, sub_829d70, sub_82a9b0, sub_82a9e0, sub_82aa20, sub_82ac20, sub_82b510
*/
void sub_8297c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8297c0ULL || rel >= 0x829850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829850 size=144 callers=1 calls=7
   calls: sub_7ca1d0, sub_7cb490, sub_7cce80, sub_7ee6b0, sub_811e10, sub_82a9b0, sub_82a9e0
*/
void sub_829850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829850ULL || rel >= 0x8298e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008298e0 size=144 callers=1 calls=6
   calls: sub_7cb490, sub_7cb850, sub_7ee6b0, sub_7eef50, sub_829ba0, sub_82a9b0
*/
void sub_8298e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8298e0ULL || rel >= 0x829970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829970 size=176 callers=1 calls=5
   calls: sub_7c5070, sub_7cb490, sub_7cb850, sub_7cce80, sub_82a9b0
*/
void sub_829970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829970ULL || rel >= 0x829a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829a20 size=128 callers=1 calls=5
   calls: sub_7cb490, sub_7cb850, sub_7cce80, sub_7ee6b0, sub_82a9b0
*/
void sub_829a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829a20ULL || rel >= 0x829aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829aa0 size=256 callers=1 calls=12
   calls: sub_7cb490, sub_7ee6b0, sub_7ee800, sub_7fc2f0, sub_7fe310, sub_801860, sub_811c90, sub_82a9c0, sub_82a9e0, sub_82ac20, sub_82ac50, sub_82aca0
*/
void sub_829aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829aa0ULL || rel >= 0x829ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829ba0 size=208 callers=1 calls=9
   calls: sub_7cb490, sub_7cb850, sub_7cce80, sub_7ee6b0, sub_7eef50, sub_804200, sub_804480, sub_82a9b0, sub_82a9c0
*/
void sub_829ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829ba0ULL || rel >= 0x829c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829c70 size=16 callers=0 calls=0
*/
void sub_829c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829c70ULL || rel >= 0x829c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829c80 size=128 callers=0 calls=0
*/
void sub_829c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829c80ULL || rel >= 0x829d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829d00 size=48 callers=1 calls=0
*/
void sub_829d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829d00ULL || rel >= 0x829d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829d30 size=32 callers=2 calls=0
*/
void sub_829d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829d30ULL || rel >= 0x829d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829d50 size=16 callers=0 calls=0
*/
void sub_829d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829d50ULL || rel >= 0x829d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829d60 size=16 callers=0 calls=0
*/
void sub_829d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829d60ULL || rel >= 0x829d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829d70 size=176 callers=1 calls=0
*/
void sub_829d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829d70ULL || rel >= 0x829e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829e20 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_829e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829e20ULL || rel >= 0x829e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829e50 size=208 callers=2 calls=13
   calls: sub_7eef50, sub_80b190, sub_8288e0, sub_828d90, sub_829f20, sub_829fc0, sub_82a050, sub_82aa10, sub_82aa80, sub_82ad10, sub_82ad30, sub_82c080
   ... +1 more
*/
void sub_829e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829e50ULL || rel >= 0x829f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829f20 size=160 callers=1 calls=5
   calls: sub_7ee6b0, sub_812640, sub_812710, sub_812a50, sub_82a9e0
*/
void sub_829f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829f20ULL || rel >= 0x829fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00829fc0 size=144 callers=1 calls=6
   calls: sub_804200, sub_804480, sub_810170, sub_82a9b0, sub_82a9c0, sub_82a9e0
*/
void sub_829fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829fc0ULL || rel >= 0x82a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a050 size=400 callers=1 calls=3
   calls: sub_828760, sub_82a2a0, sub_82aa80
*/
void sub_82a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a050ULL || rel >= 0x82a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a1e0 size=16 callers=0 calls=0
*/
void sub_82a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a1e0ULL || rel >= 0x82a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a1f0 size=128 callers=0 calls=0
*/
void sub_82a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a1f0ULL || rel >= 0x82a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a270 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a270ULL || rel >= 0x82a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a2a0 size=288 callers=21 calls=13
   calls: sub_7caf60, sub_7f8810, sub_803c60, sub_8129d0, sub_828a20, sub_82a3c0, sub_82a460, sub_82a520, sub_82a5e0, sub_82a9b0, sub_82a9e0, sub_82aa80
   ... +1 more
*/
void sub_82a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a2a0ULL || rel >= 0x82a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a3c0 size=160 callers=1 calls=6
   calls: sub_7caf60, sub_7fe1e0, sub_8003c0, sub_82a9b0, sub_82a9c0, sub_82a9e0
*/
void sub_82a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a3c0ULL || rel >= 0x82a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a460 size=192 callers=1 calls=4
   calls: sub_7fe1e0, sub_8003c0, sub_82a9c0, sub_82a9e0
*/
void sub_82a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a460ULL || rel >= 0x82a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a520 size=192 callers=1 calls=10
   calls: sub_7ee6b0, sub_7ef580, sub_812ec0, sub_813130, sub_813140, sub_828570, sub_828d40, sub_82aa80, sub_82c210, sub_82de70
*/
void sub_82a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a520ULL || rel >= 0x82a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a5e0 size=240 callers=1 calls=14
   calls: sub_7ee6b0, sub_804200, sub_804480, sub_806df0, sub_812ec0, sub_812f00, sub_813130, sub_813140, sub_829030, sub_82a790, sub_82a9b0, sub_82a9c0
   ... +2 more
*/
void sub_82a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a5e0ULL || rel >= 0x82a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a6d0 size=16 callers=0 calls=0
*/
void sub_82a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a6d0ULL || rel >= 0x82a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a6e0 size=128 callers=0 calls=0
*/
void sub_82a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a6e0ULL || rel >= 0x82a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a760 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a760ULL || rel >= 0x82a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a790 size=272 callers=4 calls=6
   calls: sub_7f7690, sub_8076b0, sub_813110, sub_813270, sub_813850, sub_82aa10
*/
void sub_82a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a790ULL || rel >= 0x82a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a8a0 size=16 callers=0 calls=0
*/
void sub_82a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a8a0ULL || rel >= 0x82a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a8b0 size=128 callers=0 calls=0
*/
void sub_82a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a8b0ULL || rel >= 0x82a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a930 size=128 callers=239 calls=0
*/
void sub_82a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a930ULL || rel >= 0x82a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a9b0 size=16 callers=205 calls=0
*/
void sub_82a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a9b0ULL || rel >= 0x82a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a9c0 size=16 callers=164 calls=0
*/
void sub_82a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a9c0ULL || rel >= 0x82a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a9d0 size=16 callers=27 calls=0
*/
void sub_82a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a9d0ULL || rel >= 0x82a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a9e0 size=16 callers=562 calls=0
*/
void sub_82a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a9e0ULL || rel >= 0x82a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082a9f0 size=16 callers=9 calls=0
*/
void sub_82a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a9f0ULL || rel >= 0x82aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aa00 size=16 callers=12 calls=0
*/
void sub_82aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aa00ULL || rel >= 0x82aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aa10 size=16 callers=217 calls=0
*/
void sub_82aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aa10ULL || rel >= 0x82aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aa20 size=16 callers=102 calls=0
*/
void sub_82aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aa20ULL || rel >= 0x82aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aa30 size=32 callers=65 calls=1
   calls: sub_82b4f0
*/
void sub_82aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aa30ULL || rel >= 0x82aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aa50 size=16 callers=28 calls=0
*/
void sub_82aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aa50ULL || rel >= 0x82aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aa60 size=16 callers=11 calls=0
*/
void sub_82aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aa60ULL || rel >= 0x82aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aa70 size=16 callers=2 calls=0
*/
void sub_82aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aa70ULL || rel >= 0x82aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aa80 size=16 callers=438 calls=0
*/
void sub_82aa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aa80ULL || rel >= 0x82aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aa90 size=80 callers=2 calls=2
   calls: sub_7ed560, sub_7fe1d0
*/
void sub_82aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aa90ULL || rel >= 0x82aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aae0 size=48 callers=28 calls=1
   calls: sub_7fe1d0
*/
void sub_82aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aae0ULL || rel >= 0x82ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ab10 size=48 callers=93 calls=1
   calls: sub_7fe1d0
*/
void sub_82ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ab10ULL || rel >= 0x82ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ab40 size=48 callers=6 calls=1
   calls: sub_7fe1d0
*/
void sub_82ab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ab40ULL || rel >= 0x82ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ab70 size=64 callers=8 calls=2
   calls: sub_7ee6b0, sub_7fe250
*/
void sub_82ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ab70ULL || rel >= 0x82abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082abb0 size=48 callers=19 calls=1
   calls: sub_7fe250
*/
void sub_82abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82abb0ULL || rel >= 0x82abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082abe0 size=48 callers=9 calls=1
   calls: sub_7ee6b0
*/
void sub_82abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82abe0ULL || rel >= 0x82ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ac10 size=16 callers=7 calls=0
*/
void sub_82ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ac10ULL || rel >= 0x82ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ac20 size=48 callers=23 calls=1
   calls: sub_7fe1d0
*/
void sub_82ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ac20ULL || rel >= 0x82ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ac50 size=16 callers=30 calls=0
*/
void sub_82ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ac50ULL || rel >= 0x82ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ac60 size=16 callers=5 calls=0
*/
void sub_82ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ac60ULL || rel >= 0x82ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ac70 size=16 callers=7 calls=0
*/
void sub_82ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ac70ULL || rel >= 0x82ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ac80 size=32 callers=1 calls=1
   calls: sub_7c4c70
*/
void sub_82ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ac80ULL || rel >= 0x82aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aca0 size=16 callers=16 calls=0
*/
void sub_82aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aca0ULL || rel >= 0x82acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082acb0 size=80 callers=8 calls=1
   calls: sub_7ee6b0
*/
void sub_82acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82acb0ULL || rel >= 0x82ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ad00 size=16 callers=4 calls=0
*/
void sub_82ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ad00ULL || rel >= 0x82ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ad10 size=16 callers=20 calls=0
*/
void sub_82ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ad10ULL || rel >= 0x82ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ad20 size=16 callers=1 calls=0
*/
void sub_82ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ad20ULL || rel >= 0x82ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ad30 size=16 callers=13 calls=0
*/
void sub_82ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ad30ULL || rel >= 0x82ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ad40 size=16 callers=3 calls=0
*/
void sub_82ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ad40ULL || rel >= 0x82ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ad50 size=16 callers=4 calls=0
*/
void sub_82ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ad50ULL || rel >= 0x82ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ad60 size=16 callers=7 calls=0
*/
void sub_82ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ad60ULL || rel >= 0x82ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ad70 size=64 callers=3 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_82ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ad70ULL || rel >= 0x82adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082adb0 size=16 callers=1 calls=0
*/
void sub_82adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82adb0ULL || rel >= 0x82adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082adc0 size=64 callers=2 calls=1
   calls: sub_7fe250
*/
void sub_82adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82adc0ULL || rel >= 0x82ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ae00 size=32 callers=2 calls=1
   calls: sub_780c30
*/
void sub_82ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ae00ULL || rel >= 0x82ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ae20 size=16 callers=2 calls=0
*/
void sub_82ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ae20ULL || rel >= 0x82ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ae30 size=16 callers=1 calls=0
*/
void sub_82ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ae30ULL || rel >= 0x82ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ae40 size=48 callers=8 calls=1
   calls: sub_7fe350
*/
void sub_82ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ae40ULL || rel >= 0x82ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ae70 size=16 callers=0 calls=0
*/
void sub_82ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ae70ULL || rel >= 0x82ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ae80 size=128 callers=0 calls=0
*/
void sub_82ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ae80ULL || rel >= 0x82af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082af00 size=144 callers=1 calls=3
   calls: sub_812cc0, sub_82b090, sub_82b0b0
*/
void sub_82af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82af00ULL || rel >= 0x82af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082af90 size=64 callers=2 calls=2
   calls: sub_812cc0, sub_82b0b0
*/
void sub_82af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82af90ULL || rel >= 0x82afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082afd0 size=32 callers=5 calls=0
*/
void sub_82afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82afd0ULL || rel >= 0x82aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082aff0 size=96 callers=1 calls=2
   calls: sub_812cc0, sub_82b0b0
*/
void sub_82aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aff0ULL || rel >= 0x82b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b050 size=32 callers=1 calls=0
*/
void sub_82b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b050ULL || rel >= 0x82b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b070 size=16 callers=0 calls=0
*/
void sub_82b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b070ULL || rel >= 0x82b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b080 size=16 callers=0 calls=0
*/
void sub_82b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b080ULL || rel >= 0x82b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b090 size=32 callers=6 calls=0
*/
void sub_82b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b090ULL || rel >= 0x82b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b0b0 size=32 callers=3 calls=0
*/
void sub_82b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b0b0ULL || rel >= 0x82b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b0d0 size=16 callers=2 calls=0
*/
void sub_82b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b0d0ULL || rel >= 0x82b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b0e0 size=16 callers=4 calls=0
*/
void sub_82b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b0e0ULL || rel >= 0x82b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b0f0 size=880 callers=1 calls=8
   calls: sub_829d00, sub_829d30, sub_82af00, sub_82af90, sub_82b780, sub_82b790, sub_82b7e0, sub_82b800
*/
void sub_82b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b0f0ULL || rel >= 0x82b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b460 size=96 callers=1 calls=4
   calls: sub_829d30, sub_82af90, sub_82b790, sub_82b800
*/
void sub_82b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b460ULL || rel >= 0x82b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b4c0 size=32 callers=1 calls=0
*/
void sub_82b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b4c0ULL || rel >= 0x82b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b4e0 size=16 callers=0 calls=0
*/
void sub_82b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b4e0ULL || rel >= 0x82b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b4f0 size=16 callers=8 calls=0
*/
void sub_82b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b4f0ULL || rel >= 0x82b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b500 size=16 callers=62 calls=0
*/
void sub_82b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b500ULL || rel >= 0x82b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b510 size=16 callers=1 calls=0
*/
void sub_82b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b510ULL || rel >= 0x82b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b520 size=16 callers=4 calls=0
*/
void sub_82b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b520ULL || rel >= 0x82b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b530 size=16 callers=1 calls=0
*/
void sub_82b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b530ULL || rel >= 0x82b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b540 size=16 callers=17 calls=0
*/
void sub_82b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b540ULL || rel >= 0x82b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b550 size=16 callers=1 calls=0
*/
void sub_82b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b550ULL || rel >= 0x82b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b560 size=32 callers=2 calls=0
*/
void sub_82b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b560ULL || rel >= 0x82b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b580 size=32 callers=0 calls=0
*/
void sub_82b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b580ULL || rel >= 0x82b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b5a0 size=32 callers=5 calls=0
*/
void sub_82b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b5a0ULL || rel >= 0x82b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b5c0 size=32 callers=4 calls=0
*/
void sub_82b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b5c0ULL || rel >= 0x82b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b5e0 size=240 callers=1 calls=0
*/
void sub_82b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b5e0ULL || rel >= 0x82b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b6d0 size=48 callers=0 calls=1
   calls: sub_82b5e0
*/
void sub_82b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b6d0ULL || rel >= 0x82b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b700 size=128 callers=0 calls=0
*/
void sub_82b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b700ULL || rel >= 0x82b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b780 size=16 callers=1 calls=0
*/
void sub_82b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b780ULL || rel >= 0x82b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b790 size=16 callers=7 calls=0
*/
void sub_82b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b790ULL || rel >= 0x82b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b7a0 size=16 callers=12 calls=0
*/
void sub_82b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b7a0ULL || rel >= 0x82b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b7b0 size=16 callers=16 calls=0
*/
void sub_82b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b7b0ULL || rel >= 0x82b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b7c0 size=16 callers=13 calls=0
*/
void sub_82b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b7c0ULL || rel >= 0x82b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b7d0 size=16 callers=10 calls=0
*/
void sub_82b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b7d0ULL || rel >= 0x82b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b7e0 size=32 callers=1 calls=0
*/
void sub_82b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b7e0ULL || rel >= 0x82b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b800 size=16 callers=2 calls=0
*/
void sub_82b800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b800ULL || rel >= 0x82b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b810 size=16 callers=0 calls=0
*/
void sub_82b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b810ULL || rel >= 0x82b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b820 size=16 callers=0 calls=0
*/
void sub_82b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b820ULL || rel >= 0x82b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b830 size=32 callers=2 calls=0
*/
void sub_82b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b830ULL || rel >= 0x82b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b850 size=48 callers=1 calls=0
*/
void sub_82b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b850ULL || rel >= 0x82b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b880 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b880ULL || rel >= 0x82b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082b8b0 size=576 callers=4 calls=20
   calls: sub_803c60, sub_803c70, sub_803d10, sub_803d20, sub_80a9f0, sub_80aaa0, sub_80abb0, sub_80dd60, sub_810a70, sub_810ae0, sub_8120c0, sub_8284c0
   ... +8 more
*/
void sub_82b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b8b0ULL || rel >= 0x82baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082baf0 size=208 callers=1 calls=8
   calls: sub_7f88e0, sub_7fe1e0, sub_7ffe20, sub_80ef50, sub_80f050, sub_812980, sub_82a9c0, sub_82a9e0
*/
void sub_82baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82baf0ULL || rel >= 0x82bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bbc0 size=176 callers=1 calls=12
   calls: sub_7fe1e0, sub_800240, sub_812ec0, sub_813130, sub_813140, sub_829030, sub_829080, sub_82a790, sub_82a9c0, sub_82aa80, sub_82bc70, sub_82bf50
*/
void sub_82bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bbc0ULL || rel >= 0x82bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bc70 size=192 callers=1 calls=9
   calls: sub_7eb420, sub_7eef50, sub_7ef4c0, sub_804200, sub_804480, sub_812f00, sub_813270, sub_82a9b0, sub_82a9c0
*/
void sub_82bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bc70ULL || rel >= 0x82bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bd30 size=16 callers=0 calls=0
*/
void sub_82bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bd30ULL || rel >= 0x82bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bd40 size=128 callers=0 calls=0
*/
void sub_82bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bd40ULL || rel >= 0x82bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bdc0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bdc0ULL || rel >= 0x82bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bdf0 size=160 callers=1 calls=6
   calls: sub_80eed0, sub_812010, sub_812080, sub_812980, sub_8129d0, sub_82a9e0
*/
void sub_82bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bdf0ULL || rel >= 0x82be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082be90 size=16 callers=0 calls=0
*/
void sub_82be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82be90ULL || rel >= 0x82bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bea0 size=128 callers=0 calls=0
*/
void sub_82bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bea0ULL || rel >= 0x82bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bf20 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bf20ULL || rel >= 0x82bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bf50 size=112 callers=2 calls=6
   calls: sub_7eef50, sub_80a660, sub_828d90, sub_82aa10, sub_82aa80, sub_82c080
*/
void sub_82bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bf50ULL || rel >= 0x82bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bfc0 size=16 callers=0 calls=0
*/
void sub_82bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bfc0ULL || rel >= 0x82bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082bfd0 size=128 callers=0 calls=0
*/
void sub_82bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82bfd0ULL || rel >= 0x82c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c050 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c050ULL || rel >= 0x82c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c080 size=208 callers=3 calls=9
   calls: sub_7ee6b0, sub_804200, sub_804480, sub_828570, sub_82a9b0, sub_82a9c0, sub_82aa80, sub_82ad00, sub_82c210
*/
void sub_82c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c080ULL || rel >= 0x82c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c150 size=16 callers=0 calls=0
*/
void sub_82c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c150ULL || rel >= 0x82c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c160 size=128 callers=0 calls=0
*/
void sub_82c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c160ULL || rel >= 0x82c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c1e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c1e0ULL || rel >= 0x82c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c210 size=96 callers=15 calls=3
   calls: sub_7f09c0, sub_82aa10, sub_82ab10
*/
void sub_82c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c210ULL || rel >= 0x82c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c270 size=16 callers=0 calls=0
*/
void sub_82c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c270ULL || rel >= 0x82c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c280 size=128 callers=0 calls=0
*/
void sub_82c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c280ULL || rel >= 0x82c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c300 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c300ULL || rel >= 0x82c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c330 size=704 callers=1 calls=25
   calls: sub_7cb420, sub_7ee6b0, sub_7ef4c0, sub_7f05a0, sub_7f0b80, sub_7f8cf0, sub_7f98e0, sub_7fe1d0, sub_803c60, sub_806380, sub_80e230, sub_8288e0
   ... +13 more
*/
void sub_82c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c330ULL || rel >= 0x82c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c5f0 size=16 callers=0 calls=0
*/
void sub_82c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c5f0ULL || rel >= 0x82c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c600 size=128 callers=0 calls=0
*/
void sub_82c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c600ULL || rel >= 0x82c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c680 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c680ULL || rel >= 0x82c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c6b0 size=592 callers=18 calls=19
   calls: sub_7ee6b0, sub_7ef4c0, sub_7ef580, sub_7ef6a0, sub_7f7f90, sub_803a90, sub_803c60, sub_803d10, sub_80a5d0, sub_80dd60, sub_810070, sub_810a70
   ... +7 more
*/
void sub_82c6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c6b0ULL || rel >= 0x82c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c900 size=16 callers=0 calls=0
*/
void sub_82c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c900ULL || rel >= 0x82c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c910 size=128 callers=0 calls=0
*/
void sub_82c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c910ULL || rel >= 0x82c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c990 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c990ULL || rel >= 0x82c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082c9c0 size=304 callers=2 calls=12
   calls: sub_7ee6b0, sub_7ef4c0, sub_7f05a0, sub_803c60, sub_80f7a0, sub_811fe0, sub_8289a0, sub_82a9e0, sub_82aa50, sub_82aa80, sub_82c6b0, sub_82cee0
*/
void sub_82c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c9c0ULL || rel >= 0x82caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082caf0 size=16 callers=0 calls=0
*/
void sub_82caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82caf0ULL || rel >= 0x82cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082cb00 size=128 callers=0 calls=0
*/
void sub_82cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82cb00ULL || rel >= 0x82cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082cb80 size=288 callers=4 calls=1
   calls: sub_803c60
*/
void sub_82cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82cb80ULL || rel >= 0x82cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082cca0 size=16 callers=3 calls=0
*/
void sub_82cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82cca0ULL || rel >= 0x82ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ccb0 size=16 callers=18 calls=0
*/
void sub_82ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ccb0ULL || rel >= 0x82ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ccc0 size=64 callers=2 calls=0
*/
void sub_82ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ccc0ULL || rel >= 0x82cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082cd00 size=144 callers=2 calls=1
   calls: sub_7ee6b0
*/
void sub_82cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82cd00ULL || rel >= 0x82cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082cd90 size=80 callers=8 calls=1
   calls: sub_82d680
*/
void sub_82cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82cd90ULL || rel >= 0x82cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082cde0 size=80 callers=4 calls=0
*/
void sub_82cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82cde0ULL || rel >= 0x82ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ce30 size=80 callers=1 calls=0
*/
void sub_82ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ce30ULL || rel >= 0x82ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ce80 size=32 callers=11 calls=0
*/
void sub_82ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ce80ULL || rel >= 0x82cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082cea0 size=64 callers=1 calls=0
*/
void sub_82cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82cea0ULL || rel >= 0x82cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082cee0 size=272 callers=2 calls=1
   calls: sub_7ee6b0
*/
void sub_82cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82cee0ULL || rel >= 0x82cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082cff0 size=176 callers=1 calls=1
   calls: sub_7ee6b0
*/
void sub_82cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82cff0ULL || rel >= 0x82d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d0a0 size=416 callers=3 calls=4
   calls: sub_7cbf80, sub_7ee6b0, sub_7ef2b0, sub_82d7e0
*/
void sub_82d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d0a0ULL || rel >= 0x82d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d240 size=160 callers=1 calls=2
   calls: sub_7ee6b0, sub_82d960
*/
void sub_82d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d240ULL || rel >= 0x82d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d2e0 size=272 callers=2 calls=2
   calls: sub_7ee6b0, sub_82d960
*/
void sub_82d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d2e0ULL || rel >= 0x82d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d3f0 size=320 callers=1 calls=2
   calls: sub_82d7e0, sub_82d960
*/
void sub_82d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d3f0ULL || rel >= 0x82d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d530 size=160 callers=1 calls=1
   calls: sub_803ce0
*/
void sub_82d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d530ULL || rel >= 0x82d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d5d0 size=16 callers=0 calls=0
*/
void sub_82d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d5d0ULL || rel >= 0x82d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d5e0 size=16 callers=0 calls=0
*/
void sub_82d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d5e0ULL || rel >= 0x82d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d5f0 size=128 callers=0 calls=0
*/
void sub_82d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d5f0ULL || rel >= 0x82d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d670 size=16 callers=6 calls=0
*/
void sub_82d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d670ULL || rel >= 0x82d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d680 size=64 callers=1 calls=0
*/
void sub_82d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d680ULL || rel >= 0x82d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d6c0 size=208 callers=0 calls=1
   calls: sub_803c60
*/
void sub_82d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d6c0ULL || rel >= 0x82d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d790 size=80 callers=2 calls=1
   calls: sub_82d930
*/
void sub_82d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d790ULL || rel >= 0x82d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d7e0 size=112 callers=10 calls=1
   calls: sub_7ee6c0
*/
void sub_82d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d7e0ULL || rel >= 0x82d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d850 size=80 callers=1 calls=1
   calls: sub_7ee800
*/
void sub_82d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d850ULL || rel >= 0x82d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d8a0 size=144 callers=1 calls=2
   calls: sub_7ee6c0, sub_7ee800
*/
void sub_82d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d8a0ULL || rel >= 0x82d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d930 size=32 callers=2 calls=0
*/
void sub_82d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d930ULL || rel >= 0x82d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d950 size=16 callers=1 calls=0
*/
void sub_82d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d950ULL || rel >= 0x82d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d960 size=16 callers=3 calls=0
*/
void sub_82d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d960ULL || rel >= 0x82d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d970 size=16 callers=1 calls=0
*/
void sub_82d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d970ULL || rel >= 0x82d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d980 size=16 callers=1 calls=0
*/
void sub_82d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d980ULL || rel >= 0x82d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d990 size=16 callers=19 calls=0
*/
void sub_82d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d990ULL || rel >= 0x82d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082d9a0 size=144 callers=13 calls=2
   calls: sub_780d40, sub_780d70
*/
void sub_82d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d9a0ULL || rel >= 0x82da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082da30 size=48 callers=7 calls=0
*/
void sub_82da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82da30ULL || rel >= 0x82da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082da60 size=16 callers=1 calls=0
*/
void sub_82da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82da60ULL || rel >= 0x82da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082da70 size=16 callers=1 calls=0
*/
void sub_82da70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82da70ULL || rel >= 0x82da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082da80 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82da80ULL || rel >= 0x82dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082dab0 size=208 callers=3 calls=7
   calls: sub_7ee6b0, sub_7ef2b0, sub_7f0ba0, sub_80f880, sub_82a9e0, sub_82ab10, sub_82db80
*/
void sub_82dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82dab0ULL || rel >= 0x82db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082db80 size=240 callers=1 calls=10
   calls: sub_7ee6b0, sub_7ef4c0, sub_803c60, sub_80f7a0, sub_828480, sub_8289a0, sub_82a9e0, sub_82aa80, sub_82c6b0, sub_82dd30
*/
void sub_82db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82db80ULL || rel >= 0x82dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082dc70 size=16 callers=0 calls=0
*/
void sub_82dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82dc70ULL || rel >= 0x82dc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082dc80 size=128 callers=0 calls=0
*/
void sub_82dc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82dc80ULL || rel >= 0x82dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082dd00 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82dd00ULL || rel >= 0x82dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082dd30 size=128 callers=1 calls=6
   calls: sub_7fe250, sub_803560, sub_811fe0, sub_82a9c0, sub_82a9e0, sub_82ab10
*/
void sub_82dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82dd30ULL || rel >= 0x82ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ddb0 size=16 callers=0 calls=0
*/
void sub_82ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ddb0ULL || rel >= 0x82ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ddc0 size=128 callers=0 calls=0
*/
void sub_82ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ddc0ULL || rel >= 0x82de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082de40 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82de40ULL || rel >= 0x82de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082de70 size=80 callers=7 calls=4
   calls: sub_829030, sub_82a790, sub_82aa80, sub_82dec0
*/
void sub_82de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82de70ULL || rel >= 0x82dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082dec0 size=144 callers=1 calls=6
   calls: sub_804200, sub_804480, sub_812ee0, sub_812f00, sub_82a9b0, sub_82a9c0
*/
void sub_82dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82dec0ULL || rel >= 0x82df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082df50 size=16 callers=0 calls=0
*/
void sub_82df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82df50ULL || rel >= 0x82df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082df60 size=128 callers=0 calls=0
*/
void sub_82df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82df60ULL || rel >= 0x82dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082dfe0 size=176 callers=1 calls=3
   calls: sub_12fafe0, sub_7caa70, sub_7ef320
   ref: INEFFECTIVE_SKILL
*/
void INEFFECTIVE_SKILL(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82dfe0ULL || rel >= 0x82e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082e090 size=192 callers=1 calls=4
   calls: sub_12faeb0, sub_7caa70, sub_7eef40, sub_7ef320
   ref: USE_WARUAGAKI
*/
void USE_WARUAGAKI(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e090ULL || rel >= 0x82e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082e150 size=192 callers=1 calls=4
   calls: sub_12faeb0, sub_7caa70, sub_7eef40, sub_7ef320
   ref: KNOCKOUT_POKEMON
*/
void KNOCKOUT_POKEMON(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e150ULL || rel >= 0x82e210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082e210 size=192 callers=2 calls=4
   calls: sub_12faeb0, sub_7caa70, sub_7eef40, sub_7ef320
   ref: BATTLE_DAIMAX
*/
void BATTLE_DAIMAX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e210ULL || rel >= 0x82e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082e2d0 size=192 callers=1 calls=4
   calls: sub_12faeb0, sub_7caa70, sub_7eef40, sub_7ef320
   ref: CHANGE_DAIMAX
*/
void CHANGE_DAIMAX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e2d0ULL || rel >= 0x82e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082e390 size=128 callers=0 calls=0
*/
void sub_82e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e390ULL || rel >= 0x82e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082e410 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e410ULL || rel >= 0x82e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082e440 size=240 callers=1 calls=10
   calls: sub_7ee810, sub_7f36f0, sub_7f7690, sub_7f7ff0, sub_7fc800, sub_80e1b0, sub_80f410, sub_82a9e0, sub_82aae0, sub_82ac50
*/
void sub_82e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e440ULL || rel >= 0x82e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082e530 size=608 callers=0 calls=20
   calls: sub_7cac80, sub_7ee810, sub_7f36f0, sub_7f87a0, sub_7fc800, sub_803c60, sub_803d20, sub_816460, sub_816680, sub_828c80, sub_828ed0, sub_82a9b0
   ... +8 more
*/
void sub_82e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e530ULL || rel >= 0x82e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082e790 size=368 callers=1 calls=14
   calls: sub_7cb490, sub_7cce80, sub_7ee6b0, sub_7eef50, sub_803c60, sub_803d20, sub_803d60, sub_804200, sub_804480, sub_828f40, sub_82a9b0, sub_82a9c0
   ... +2 more
*/
void sub_82e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e790ULL || rel >= 0x82e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082e900 size=272 callers=1 calls=11
   calls: sub_7cb490, sub_7cce80, sub_7ee6b0, sub_803c60, sub_804200, sub_804480, sub_8289a0, sub_82a9b0, sub_82a9c0, sub_82aa80, sub_82c6b0
*/
void sub_82e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e900ULL || rel >= 0x82ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ea10 size=336 callers=1 calls=11
   calls: sub_7cb490, sub_7cce80, sub_7ee6b0, sub_7f7690, sub_804200, sub_804480, sub_828f10, sub_82a9b0, sub_82a9c0, sub_82aa80, sub_82f210
*/
void sub_82ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ea10ULL || rel >= 0x82eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082eb60 size=16 callers=0 calls=0
*/
void sub_82eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82eb60ULL || rel >= 0x82eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082eb70 size=128 callers=0 calls=0
*/
void sub_82eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82eb70ULL || rel >= 0x82ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ebf0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ebf0ULL || rel >= 0x82ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ec20 size=400 callers=6 calls=16
   calls: sub_7ef540, sub_803d50, sub_80dd60, sub_80e1f0, sub_80e250, sub_810a70, sub_810ae0, sub_828f50, sub_828f60, sub_828f70, sub_82a9e0, sub_82aa80
   ... +4 more
*/
void sub_82ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ec20ULL || rel >= 0x82edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082edb0 size=16 callers=0 calls=0
*/
void sub_82edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82edb0ULL || rel >= 0x82edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082edc0 size=128 callers=0 calls=0
*/
void sub_82edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82edc0ULL || rel >= 0x82ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ee40 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82ee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ee40ULL || rel >= 0x82ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ee70 size=144 callers=1 calls=4
   calls: sub_7ee6b0, sub_80f3e0, sub_82a9e0, sub_82abb0
*/
void sub_82ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ee70ULL || rel >= 0x82ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ef00 size=16 callers=0 calls=0
*/
void sub_82ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ef00ULL || rel >= 0x82ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ef10 size=128 callers=0 calls=0
*/
void sub_82ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ef10ULL || rel >= 0x82ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ef90 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ef90ULL || rel >= 0x82efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082efc0 size=128 callers=1 calls=4
   calls: sub_7ee6b0, sub_7ef4c0, sub_80e230, sub_82a9e0
*/
void sub_82efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82efc0ULL || rel >= 0x82f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f040 size=16 callers=0 calls=0
*/
void sub_82f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f040ULL || rel >= 0x82f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f050 size=128 callers=0 calls=0
*/
void sub_82f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f050ULL || rel >= 0x82f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f0d0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f0d0ULL || rel >= 0x82f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f100 size=80 callers=1 calls=2
   calls: sub_7ef540, sub_7ef580
*/
void sub_82f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f100ULL || rel >= 0x82f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f150 size=16 callers=0 calls=0
*/
void sub_82f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f150ULL || rel >= 0x82f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f160 size=128 callers=0 calls=0
*/
void sub_82f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f160ULL || rel >= 0x82f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f1e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f1e0ULL || rel >= 0x82f210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f210 size=384 callers=14 calls=12
   calls: sub_7ee6b0, sub_807250, sub_807300, sub_8073a0, sub_807490, sub_80dd60, sub_810200, sub_828f20, sub_82a9e0, sub_82aa10, sub_82aa80, sub_82f450
*/
void sub_82f210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f210ULL || rel >= 0x82f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f390 size=16 callers=0 calls=0
*/
void sub_82f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f390ULL || rel >= 0x82f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f3a0 size=128 callers=0 calls=0
*/
void sub_82f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f3a0ULL || rel >= 0x82f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f420 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f420ULL || rel >= 0x82f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f450 size=656 callers=7 calls=20
   calls: sub_7ee6b0, sub_7f0c00, sub_7f12d0, sub_7f2e70, sub_7fe250, sub_803560, sub_8070e0, sub_807150, sub_807250, sub_80e1b0, sub_80e1f0, sub_80e250
   ... +8 more
*/
void sub_82f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f450ULL || rel >= 0x82f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f6e0 size=128 callers=1 calls=5
   calls: sub_7ee800, sub_7ee810, sub_7f36f0, sub_7fc7f0, sub_7fc820
*/
void sub_82f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f6e0ULL || rel >= 0x82f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f760 size=16 callers=0 calls=0
*/
void sub_82f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f760ULL || rel >= 0x82f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f770 size=128 callers=0 calls=0
*/
void sub_82f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f770ULL || rel >= 0x82f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f7f0 size=16 callers=2 calls=0
*/
void sub_82f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f7f0ULL || rel >= 0x82f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f800 size=16 callers=2 calls=0
*/
void sub_82f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f800ULL || rel >= 0x82f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f810 size=32 callers=1 calls=0
*/
void sub_82f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f810ULL || rel >= 0x82f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f830 size=16 callers=1 calls=0
*/
void sub_82f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f830ULL || rel >= 0x82f840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f840 size=48 callers=2 calls=0
*/
void sub_82f840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f840ULL || rel >= 0x82f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f870 size=240 callers=1 calls=0
*/
void sub_82f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f870ULL || rel >= 0x82f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f960 size=128 callers=0 calls=0
*/
void sub_82f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f960ULL || rel >= 0x82f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082f9e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f9e0ULL || rel >= 0x82fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082fa10 size=320 callers=7 calls=11
   calls: sub_7cb360, sub_803c80, sub_803d90, sub_80cc80, sub_80dd60, sub_80f100, sub_8120c0, sub_812820, sub_82a9b0, sub_82a9e0, sub_82aa10
*/
void sub_82fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fa10ULL || rel >= 0x82fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082fb50 size=16 callers=0 calls=0
*/
void sub_82fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fb50ULL || rel >= 0x82fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082fb60 size=128 callers=0 calls=0
*/
void sub_82fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fb60ULL || rel >= 0x82fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082fbe0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fbe0ULL || rel >= 0x82fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082fc10 size=432 callers=2 calls=17
   calls: sub_7ee6b0, sub_7f79e0, sub_80e1b0, sub_80f370, sub_80f6c0, sub_811b40, sub_828f10, sub_829020, sub_82a9e0, sub_82aa20, sub_82aa80, sub_82aae0
   ... +5 more
*/
void sub_82fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fc10ULL || rel >= 0x82fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082fdc0 size=16 callers=0 calls=0
*/
void sub_82fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fdc0ULL || rel >= 0x82fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082fdd0 size=128 callers=0 calls=0
*/
void sub_82fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fdd0ULL || rel >= 0x82fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082fe50 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_82fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fe50ULL || rel >= 0x82fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082fe80 size=320 callers=6 calls=14
   calls: sub_7ee6b0, sub_7f1400, sub_803d10, sub_806810, sub_806880, sub_80dd60, sub_80fb90, sub_828570, sub_828600, sub_8294b0, sub_82a9e0, sub_82aa10
   ... +2 more
*/
void sub_82fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fe80ULL || rel >= 0x82ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ffc0 size=16 callers=0 calls=0
*/
void sub_82ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ffc0ULL || rel >= 0x82ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0082ffd0 size=128 callers=0 calls=0
*/
void sub_82ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ffd0ULL || rel >= 0x830050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830050 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_830050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830050ULL || rel >= 0x830080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830080 size=672 callers=1 calls=25
   calls: INEFFECTIVE_SKILL, USE_WARUAGAKI, sub_7ef4c0, sub_7f0b30, sub_812ec0, sub_813110, sub_8138c0, sub_828db0, sub_829180, sub_829240, sub_829250, sub_829280
   ... +13 more
*/
void sub_830080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830080ULL || rel >= 0x830320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830320 size=224 callers=1 calls=11
   calls: sub_7ee6b0, sub_7eef50, sub_80b430, sub_8124b0, sub_812520, sub_82a9e0, sub_82aa10, sub_82aa50, sub_82ccb0, sub_82ce80, sub_82d7e0
*/
void sub_830320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830320ULL || rel >= 0x830400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830400 size=208 callers=1 calls=5
   calls: sub_7ee6b0, sub_812e20, sub_82a9f0, sub_82aa30, sub_82b0e0
*/
void sub_830400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830400ULL || rel >= 0x8304d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008304d0 size=16 callers=0 calls=0
*/
void sub_8304d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8304d0ULL || rel >= 0x8304e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008304e0 size=128 callers=0 calls=0
*/
void sub_8304e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8304e0ULL || rel >= 0x830560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830560 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_830560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830560ULL || rel >= 0x830590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830590 size=352 callers=1 calls=13
   calls: sub_780c60, sub_7ef4c0, sub_804ad0, sub_808230, sub_80e920, sub_812ec0, sub_828f80, sub_82a9e0, sub_82aa10, sub_82aa80, sub_82ab10, sub_8306f0
   ... +1 more
*/
void sub_830590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830590ULL || rel >= 0x8306f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008306f0 size=256 callers=1 calls=13
   calls: sub_7ee6b0, sub_7eef50, sub_7fe2a0, sub_8025a0, sub_803c60, sub_8124b0, sub_812570, sub_829180, sub_82a9c0, sub_82a9e0, sub_82aa80, sub_82d670
   ... +1 more
*/
void sub_8306f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8306f0ULL || rel >= 0x8307f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008307f0 size=16 callers=0 calls=0
*/
void sub_8307f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8307f0ULL || rel >= 0x830800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830800 size=128 callers=0 calls=0
*/
void sub_830800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830800ULL || rel >= 0x830880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830880 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_830880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830880ULL || rel >= 0x8308b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008308b0 size=944 callers=4 calls=36
   calls: sub_780c60, sub_780da0, sub_7c5070, sub_7c56e0, sub_7ee6b0, sub_7f0540, sub_7fe250, sub_7fe290, sub_806e40, sub_808f20, sub_80b770, sub_811860
   ... +24 more
*/
void sub_8308b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8308b0ULL || rel >= 0x830c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830c60 size=208 callers=0 calls=9
   calls: sub_80e190, sub_813110, sub_813270, sub_82a9e0, sub_82a9f0, sub_82aa30, sub_82ab70, sub_830fa0, sub_831020
*/
void sub_830c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830c60ULL || rel >= 0x830d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830d30 size=16 callers=0 calls=0
*/
void sub_830d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830d30ULL || rel >= 0x830d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830d40 size=128 callers=0 calls=0
*/
void sub_830d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830d40ULL || rel >= 0x830dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830dc0 size=48 callers=1 calls=0
*/
void sub_830dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830dc0ULL || rel >= 0x830df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830df0 size=48 callers=1 calls=1
   calls: sub_816460
*/
void sub_830df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830df0ULL || rel >= 0x830e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830e20 size=96 callers=0 calls=2
   calls: sub_82b0d0, sub_82b0e0
*/
void sub_830e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830e20ULL || rel >= 0x830e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830e80 size=192 callers=0 calls=5
   calls: sub_80e270, sub_80e2a0, sub_813a30, sub_813a40, sub_82b0e0
*/
void sub_830e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830e80ULL || rel >= 0x830f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830f40 size=96 callers=1 calls=1
   calls: sub_82b0d0
*/
void sub_830f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830f40ULL || rel >= 0x830fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00830fa0 size=96 callers=5 calls=2
   calls: sub_813a30, sub_831030
*/
void sub_830fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830fa0ULL || rel >= 0x831000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831000 size=16 callers=0 calls=0
*/
void sub_831000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831000ULL || rel >= 0x831010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831010 size=16 callers=0 calls=0
*/
void sub_831010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831010ULL || rel >= 0x831020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831020 size=16 callers=6 calls=0
*/
void sub_831020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831020ULL || rel >= 0x831030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831030 size=16 callers=3 calls=0
*/
void sub_831030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831030ULL || rel >= 0x831040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831040 size=64 callers=3 calls=1
   calls: sub_816460
*/
void sub_831040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831040ULL || rel >= 0x831080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831080 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_831080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831080ULL || rel >= 0x8310b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008310b0 size=368 callers=1 calls=17
   calls: sub_780c60, sub_7ee6b0, sub_7ef2b0, sub_7fe270, sub_803890, sub_80f730, sub_812e10, sub_812e20, sub_829200, sub_82a9c0, sub_82a9e0, sub_82a9f0
   ... +5 more
*/
void sub_8310b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8310b0ULL || rel >= 0x831220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831220 size=16 callers=0 calls=0
*/
void sub_831220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831220ULL || rel >= 0x831230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831230 size=128 callers=0 calls=0
*/
void sub_831230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831230ULL || rel >= 0x8312b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008312b0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8312b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8312b0ULL || rel >= 0x8312e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008312e0 size=48 callers=2 calls=1
   calls: sub_82aa10
*/
void sub_8312e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8312e0ULL || rel >= 0x831310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831310 size=16 callers=0 calls=0
*/
void sub_831310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831310ULL || rel >= 0x831320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831320 size=128 callers=0 calls=0
*/
void sub_831320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831320ULL || rel >= 0x8313a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008313a0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8313a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8313a0ULL || rel >= 0x8313d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008313d0 size=512 callers=1 calls=19
   calls: sub_807530, sub_828790, sub_8287a0, sub_8287b0, sub_8287d0, sub_8287e0, sub_8287f0, sub_828800, sub_828880, sub_82aa10, sub_82aa80, sub_831690
   ... +7 more
*/
void sub_8313d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8313d0ULL || rel >= 0x8315d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008315d0 size=16 callers=0 calls=0
*/
void sub_8315d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8315d0ULL || rel >= 0x8315e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008315e0 size=128 callers=0 calls=0
*/
void sub_8315e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8315e0ULL || rel >= 0x831660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831660 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_831660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831660ULL || rel >= 0x831690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831690 size=416 callers=2 calls=22
   calls: sub_8097c0, sub_80c300, sub_812df0, sub_812eb0, sub_812ec0, sub_828840, sub_828870, sub_8288c0, sub_828ed0, sub_82a9f0, sub_82aa10, sub_82aa30
   ... +10 more
*/
void sub_831690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831690ULL || rel >= 0x831830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831830 size=400 callers=1 calls=13
   calls: sub_780da0, sub_7fe280, sub_813270, sub_813280, sub_828850, sub_828860, sub_8288b0, sub_82a9c0, sub_82aa80, sub_831020, sub_831fc0, sub_833470
   ... +1 more
*/
void sub_831830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831830ULL || rel >= 0x8319c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008319c0 size=192 callers=1 calls=7
   calls: sub_7ee6b0, sub_80dbd0, sub_813130, sub_813140, sub_82a9b0, sub_82a9c0, sub_82a9e0
*/
void sub_8319c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8319c0ULL || rel >= 0x831a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831a80 size=16 callers=0 calls=0
*/
void sub_831a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831a80ULL || rel >= 0x831a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831a90 size=128 callers=0 calls=0
*/
void sub_831a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831a90ULL || rel >= 0x831b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831b10 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_831b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831b10ULL || rel >= 0x831b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831b40 size=288 callers=1 calls=5
   calls: sub_8098b0, sub_82aa10, sub_831c60, sub_831d80, sub_831e80
*/
void sub_831b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831b40ULL || rel >= 0x831c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831c60 size=288 callers=1 calls=9
   calls: sub_7ee6b0, sub_7ef6a0, sub_803c60, sub_813130, sub_813140, sub_813230, sub_8289a0, sub_82aa80, sub_82c6b0
*/
void sub_831c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831c60ULL || rel >= 0x831d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831d80 size=256 callers=1 calls=9
   calls: sub_14db420, sub_7ee6b0, sub_7eef50, sub_7ef2b0, sub_812040, sub_813110, sub_813270, sub_82a9e0, sub_82ad50
*/
void sub_831d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831d80ULL || rel >= 0x831e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831e80 size=128 callers=1 calls=6
   calls: sub_7ee6b0, sub_813130, sub_813140, sub_828570, sub_82aa80, sub_82c210
*/
void sub_831e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831e80ULL || rel >= 0x831f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831f00 size=16 callers=0 calls=0
*/
void sub_831f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831f00ULL || rel >= 0x831f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831f10 size=128 callers=0 calls=0
*/
void sub_831f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831f10ULL || rel >= 0x831f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831f90 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_831f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831f90ULL || rel >= 0x831fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00831fc0 size=464 callers=1 calls=19
   calls: sub_7ee6b0, sub_7ee800, sub_7ef2b0, sub_7f2e70, sub_804db0, sub_812de0, sub_812eb0, sub_813110, sub_828600, sub_828f00, sub_829170, sub_8294b0
   ... +7 more
*/
void sub_831fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831fc0ULL || rel >= 0x832190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832190 size=624 callers=1 calls=22
   calls: sub_7ee6b0, sub_7ee800, sub_7eef50, sub_7f2e80, sub_7f7fe0, sub_806ba0, sub_8094f0, sub_80fcb0, sub_812090, sub_8120a0, sub_812f80, sub_828430
   ... +10 more
*/
void sub_832190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832190ULL || rel >= 0x832400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832400 size=208 callers=1 calls=7
   calls: sub_7ee6b0, sub_7eef50, sub_80fcb0, sub_812090, sub_8120a0, sub_82a9e0, sub_82aa10
*/
void sub_832400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832400ULL || rel >= 0x8324d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008324d0 size=16 callers=0 calls=0
*/
void sub_8324d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8324d0ULL || rel >= 0x8324e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008324e0 size=128 callers=0 calls=0
*/
void sub_8324e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8324e0ULL || rel >= 0x832560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832560 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_832560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832560ULL || rel >= 0x832590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832590 size=224 callers=3 calls=5
   calls: sub_7cb490, sub_7ee6b0, sub_80e1d0, sub_82a9e0, sub_82aa10
*/
void sub_832590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832590ULL || rel >= 0x832670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832670 size=16 callers=0 calls=0
*/
void sub_832670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832670ULL || rel >= 0x832680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832680 size=128 callers=0 calls=0
*/
void sub_832680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832680ULL || rel >= 0x832700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832700 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_832700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832700ULL || rel >= 0x832730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832730 size=128 callers=3 calls=5
   calls: sub_7ee6b0, sub_80e1f0, sub_8108c0, sub_82a9e0, sub_82abb0
*/
void sub_832730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832730ULL || rel >= 0x8327b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008327b0 size=16 callers=0 calls=0
*/
void sub_8327b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8327b0ULL || rel >= 0x8327c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008327c0 size=128 callers=0 calls=0
*/
void sub_8327c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8327c0ULL || rel >= 0x832840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832840 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_832840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832840ULL || rel >= 0x832870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832870 size=64 callers=3 calls=1
   calls: sub_82aa10
*/
void sub_832870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832870ULL || rel >= 0x8328b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008328b0 size=16 callers=0 calls=0
*/
void sub_8328b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8328b0ULL || rel >= 0x8328c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008328c0 size=128 callers=0 calls=0
*/
void sub_8328c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8328c0ULL || rel >= 0x832940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832940 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_832940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832940ULL || rel >= 0x832970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832970 size=64 callers=2 calls=1
   calls: sub_82a9e0
*/
void sub_832970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832970ULL || rel >= 0x8329b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008329b0 size=16 callers=0 calls=0
*/
void sub_8329b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8329b0ULL || rel >= 0x8329c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008329c0 size=128 callers=0 calls=0
*/
void sub_8329c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8329c0ULL || rel >= 0x832a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832a40 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_832a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832a40ULL || rel >= 0x832a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832a70 size=192 callers=3 calls=6
   calls: sub_7ee800, sub_7ef2b0, sub_813130, sub_813140, sub_82ac50, sub_832b30
*/
void sub_832a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832a70ULL || rel >= 0x832b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832b30 size=240 callers=1 calls=10
   calls: sub_780da0, sub_7ee6b0, sub_7ee6c0, sub_7ee810, sub_7f3700, sub_7fc7f0, sub_7fc820, sub_80e190, sub_811b80, sub_82a9e0
*/
void sub_832b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832b30ULL || rel >= 0x832c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832c20 size=16 callers=0 calls=0
*/
void sub_832c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832c20ULL || rel >= 0x832c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832c30 size=128 callers=0 calls=0
*/
void sub_832c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832c30ULL || rel >= 0x832cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832cb0 size=256 callers=2 calls=0
*/
void sub_832cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832cb0ULL || rel >= 0x832db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832db0 size=256 callers=1 calls=0
*/
void sub_832db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832db0ULL || rel >= 0x832eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832eb0 size=48 callers=1 calls=0
*/
void sub_832eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832eb0ULL || rel >= 0x832ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832ee0 size=48 callers=2 calls=0
*/
void sub_832ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832ee0ULL || rel >= 0x832f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832f10 size=48 callers=2 calls=0
*/
void sub_832f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832f10ULL || rel >= 0x832f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832f40 size=48 callers=1 calls=0
*/
void sub_832f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832f40ULL || rel >= 0x832f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832f70 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_832f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832f70ULL || rel >= 0x832fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00832fa0 size=416 callers=1 calls=13
   calls: sub_7ee6b0, sub_7ef2b0, sub_803c60, sub_803d20, sub_803d60, sub_806590, sub_829010, sub_829020, sub_82aa10, sub_82aa80, sub_82abb0, sub_82fe80
   ... +1 more
*/
void sub_832fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832fa0ULL || rel >= 0x833140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833140 size=16 callers=0 calls=0
*/
void sub_833140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833140ULL || rel >= 0x833150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833150 size=128 callers=0 calls=0
*/
void sub_833150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833150ULL || rel >= 0x8331d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008331d0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8331d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8331d0ULL || rel >= 0x833200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833200 size=80 callers=5 calls=2
   calls: sub_806770, sub_82aa10
*/
void sub_833200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833200ULL || rel >= 0x833250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833250 size=16 callers=0 calls=0
*/
void sub_833250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833250ULL || rel >= 0x833260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833260 size=128 callers=0 calls=0
*/
void sub_833260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833260ULL || rel >= 0x8332e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008332e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8332e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8332e0ULL || rel >= 0x833310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833310 size=160 callers=1 calls=8
   calls: sub_80bf00, sub_80bfd0, sub_812de0, sub_8130b0, sub_813130, sub_813140, sub_82aa10, sub_82aa30
*/
void sub_833310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833310ULL || rel >= 0x8333b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008333b0 size=16 callers=0 calls=0
*/
void sub_8333b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8333b0ULL || rel >= 0x8333c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008333c0 size=128 callers=0 calls=0
*/
void sub_8333c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8333c0ULL || rel >= 0x833440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833440 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_833440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833440ULL || rel >= 0x833470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833470 size=1664 callers=1 calls=45
   calls: sub_7ee6b0, sub_7ee800, sub_7ef2b0, sub_7ef6a0, sub_7fe250, sub_7fe280, sub_803560, sub_808b60, sub_80d3a0, sub_80dbd0, sub_80e1b0, sub_80e1f0
   ... +33 more
*/
void sub_833470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833470ULL || rel >= 0x833af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833af0 size=304 callers=1 calls=7
   calls: sub_7ee6b0, sub_7ef2b0, sub_7fe250, sub_803560, sub_813110, sub_813270, sub_82a9c0
*/
void sub_833af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833af0ULL || rel >= 0x833c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833c20 size=16 callers=0 calls=0
*/
void sub_833c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833c20ULL || rel >= 0x833c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833c30 size=128 callers=0 calls=0
*/
void sub_833c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833c30ULL || rel >= 0x833cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833cb0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_833cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833cb0ULL || rel >= 0x833ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833ce0 size=752 callers=3 calls=17
   calls: sub_7cb320, sub_7ee6b0, sub_7eef50, sub_7f2e70, sub_7f2e80, sub_7fe870, sub_804db0, sub_804e90, sub_8094f0, sub_813130, sub_813140, sub_82a9b0
   ... +5 more
*/
void sub_833ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833ce0ULL || rel >= 0x833fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00833fd0 size=272 callers=1 calls=9
   calls: sub_7ee6b0, sub_7ee800, sub_7eef50, sub_7fcc70, sub_805000, sub_828a60, sub_82aa10, sub_82aa80, sub_8341a0
*/
void sub_833fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833fd0ULL || rel >= 0x8340e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008340e0 size=16 callers=0 calls=0
*/
void sub_8340e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8340e0ULL || rel >= 0x8340f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008340f0 size=128 callers=0 calls=0
*/
void sub_8340f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8340f0ULL || rel >= 0x834170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00834170 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_834170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x834170ULL || rel >= 0x8341a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008341a0 size=96 callers=8 calls=3
   calls: sub_805dc0, sub_805e40, sub_82aa10
*/
void sub_8341a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8341a0ULL || rel >= 0x834200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00834200 size=16 callers=0 calls=0
*/
void sub_834200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x834200ULL || rel >= 0x834210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00834210 size=128 callers=0 calls=0
*/
void sub_834210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x834210ULL || rel >= 0x834290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00834290 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_834290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x834290ULL || rel >= 0x8342c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008342c0 size=976 callers=3 calls=32
   calls: sub_7ee6b0, sub_8096b0, sub_810e20, sub_812ea0, sub_828530, sub_828540, sub_828610, sub_8286c0, sub_828750, sub_8288a0, sub_828da0, sub_828e50
   ... +20 more
*/
void sub_8342c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8342c0ULL || rel >= 0x834690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00834690 size=16 callers=0 calls=0
*/
void sub_834690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x834690ULL || rel >= 0x8346a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008346a0 size=128 callers=0 calls=0
*/
void sub_8346a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8346a0ULL || rel >= 0x834720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00834720 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_834720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x834720ULL || rel >= 0x834750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00834750 size=288 callers=2 calls=16
   calls: sub_7ee6c0, sub_7ee800, sub_7ee810, sub_7f3700, sub_7fc800, sub_804630, sub_82a9b0, sub_82a9c0, sub_82a9d0, sub_82d990, sub_834870, sub_837350
   ... +4 more
*/
void sub_834750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x834750ULL || rel >= 0x834870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00834870 size=1856 callers=1 calls=22
   calls: sub_7ee6b0, sub_7f7690, sub_7f7770, sub_7f78c0, sub_7f7940, sub_7f87a0, sub_7f87c0, sub_803c60, sub_803d20, sub_80a950, sub_8284e0, sub_828a20
   ... +10 more
*/
void sub_834870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x834870ULL || rel >= 0x834fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00834fb0 size=256 callers=0 calls=11
   calls: sub_7ee6b0, sub_7f8cf0, sub_7f98e0, sub_7fe1d0, sub_82a9c0, sub_82ab10, sub_82abb0, sub_82ac50, sub_82ac60, sub_835d30, sub_8384c0
*/
void sub_834fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x834fb0ULL || rel >= 0x8350b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008350b0 size=288 callers=0 calls=11
   calls: sub_7ee6b0, sub_7f87a0, sub_803c60, sub_803cb0, sub_803d20, sub_803d60, sub_828c80, sub_82aa80, sub_82ac10, sub_82fa10, sub_8384c0
*/
void sub_8350b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8350b0ULL || rel >= 0x8351d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008351d0 size=320 callers=0 calls=12
   calls: sub_7ee6b0, sub_7f87a0, sub_803c60, sub_803cb0, sub_803d20, sub_803d60, sub_828c80, sub_82aa80, sub_82ac10, sub_82fa10, sub_8384c0, sub_8384d0
*/
void sub_8351d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8351d0ULL || rel >= 0x835310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835310 size=320 callers=0 calls=12
   calls: sub_7ee6b0, sub_7f87a0, sub_803c60, sub_803cb0, sub_803d20, sub_803d60, sub_828c80, sub_82aa80, sub_82ac10, sub_82fa10, sub_8384c0, sub_8384d0
*/
void sub_835310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835310ULL || rel >= 0x835450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835450 size=288 callers=0 calls=12
   calls: sub_7cc030, sub_7ee6b0, sub_7f8810, sub_803c60, sub_803cb0, sub_803d20, sub_803d60, sub_828c80, sub_82a9b0, sub_82aa80, sub_82fa10, sub_8384c0
*/
void sub_835450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835450ULL || rel >= 0x835570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835570 size=288 callers=0 calls=12
   calls: sub_7cc030, sub_7ee6b0, sub_7f8810, sub_803c60, sub_803cb0, sub_803d20, sub_803d60, sub_828c80, sub_82a9b0, sub_82aa80, sub_82fa10, sub_8384c0
*/
void sub_835570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835570ULL || rel >= 0x835690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835690 size=192 callers=0 calls=8
   calls: sub_7f7690, sub_804200, sub_804480, sub_82a9b0, sub_82a9c0, sub_82acb0, sub_8362b0, sub_8384c0
*/
void sub_835690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835690ULL || rel >= 0x835750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835750 size=448 callers=0 calls=11
   calls: sub_7ebf20, sub_7ebf50, sub_7ee6b0, sub_828760, sub_828c90, sub_82a2a0, sub_82aa80, sub_82ac10, sub_8384c0, sub_8384d0, sub_839560
*/
void sub_835750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835750ULL || rel >= 0x835910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835910 size=432 callers=0 calls=17
   calls: sub_7ee6b0, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_804200, sub_804480, sub_828f40, sub_82a9b0, sub_82a9c0, sub_82aa80, sub_82ab70
   ... +5 more
*/
void sub_835910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835910ULL || rel >= 0x835ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835ac0 size=400 callers=0 calls=16
   calls: sub_7ee6b0, sub_7ef6a0, sub_803c60, sub_804200, sub_804480, sub_8289a0, sub_82a9b0, sub_82a9c0, sub_82aa80, sub_82ab10, sub_82abb0, sub_82acb0
   ... +4 more
*/
void sub_835ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835ac0ULL || rel >= 0x835c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835c50 size=224 callers=0 calls=9
   calls: sub_804200, sub_804480, sub_82a9b0, sub_82a9c0, sub_82ab70, sub_82acb0, sub_8363b0, sub_8384c0, sub_838650
*/
void sub_835c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835c50ULL || rel >= 0x835d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835d30 size=256 callers=1 calls=9
   calls: sub_7ee6b0, sub_828f10, sub_82aa80, sub_82ab70, sub_82f210, sub_838420, sub_8384b0, sub_8384c0, sub_8386a0
*/
void sub_835d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835d30ULL || rel >= 0x835e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835e30 size=256 callers=0 calls=10
   calls: sub_7ee6b0, sub_7f7690, sub_7f78c0, sub_804200, sub_804480, sub_82a9b0, sub_82a9c0, sub_82acb0, sub_835f30, sub_8384c0
*/
void sub_835e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835e30ULL || rel >= 0x835f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00835f30 size=480 callers=3 calls=15
   calls: sub_7ee6b0, sub_7eef50, sub_803c60, sub_803cb0, sub_803d20, sub_803d60, sub_80a0d0, sub_8288f0, sub_82aa10, sub_82aa80, sub_82ab70, sub_836520
   ... +3 more
*/
void sub_835f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835f30ULL || rel >= 0x836110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836110 size=208 callers=2 calls=7
   calls: sub_804200, sub_804480, sub_82a9b0, sub_82a9c0, sub_82acb0, sub_835f30, sub_8384c0
*/
void sub_836110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836110ULL || rel >= 0x8361e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008361e0 size=208 callers=1 calls=10
   calls: sub_7caaf0, sub_7cbcf0, sub_7ee6b0, sub_7eef50, sub_7f2750, sub_80e190, sub_80f9c0, sub_82a9b0, sub_82a9e0, sub_8384c0
*/
void sub_8361e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8361e0ULL || rel >= 0x8362b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008362b0 size=256 callers=1 calls=10
   calls: sub_786d90, sub_7ee6b0, sub_7f09c0, sub_7f24b0, sub_803c60, sub_803d20, sub_803d60, sub_828bf0, sub_82aa80, sub_838f90
*/
void sub_8362b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8362b0ULL || rel >= 0x8363b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

