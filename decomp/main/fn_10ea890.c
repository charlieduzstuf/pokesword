/* main functions 010ea890..010fee10 (141 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 010ea890 size=16 callers=0 calls=0
*/
void sub_10ea890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ea890ULL || rel >= 0x10ea8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ea8a0 size=160 callers=0 calls=1
   calls: sub_10eac20
*/
void sub_10ea8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ea8a0ULL || rel >= 0x10ea940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ea940 size=160 callers=0 calls=1
   calls: sub_10eac20
*/
void sub_10ea940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ea940ULL || rel >= 0x10ea9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ea9e0 size=96 callers=0 calls=2
   calls: sub_1047680, sub_104c0e0
*/
void sub_10ea9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ea9e0ULL || rel >= 0x10eaa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eaa40 size=96 callers=0 calls=2
   calls: sub_1047680, sub_104c0e0
*/
void sub_10eaa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eaa40ULL || rel >= 0x10eaaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eaaa0 size=96 callers=0 calls=0
*/
void sub_10eaaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eaaa0ULL || rel >= 0x10eab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eab00 size=96 callers=0 calls=0
*/
void sub_10eab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eab00ULL || rel >= 0x10eab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eab60 size=64 callers=0 calls=0
*/
void sub_10eab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eab60ULL || rel >= 0x10eaba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eaba0 size=16 callers=0 calls=0
*/
void sub_10eaba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eaba0ULL || rel >= 0x10eabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eabb0 size=16 callers=0 calls=0
*/
void sub_10eabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eabb0ULL || rel >= 0x10eabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eabc0 size=16 callers=0 calls=0
*/
void sub_10eabc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eabc0ULL || rel >= 0x10eabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eabd0 size=16 callers=0 calls=0
*/
void sub_10eabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eabd0ULL || rel >= 0x10eabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eabe0 size=16 callers=0 calls=0
*/
void sub_10eabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eabe0ULL || rel >= 0x10eabf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eabf0 size=48 callers=0 calls=0
*/
void sub_10eabf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eabf0ULL || rel >= 0x10eac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eac20 size=464 callers=3 calls=0
*/
void sub_10eac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eac20ULL || rel >= 0x10eadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eadf0 size=128 callers=0 calls=0
*/
void sub_10eadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eadf0ULL || rel >= 0x10eae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eae70 size=512 callers=0 calls=7
   calls: sub_10eb360, sub_6a3fa0, sub_6a4020, sub_6a4030, sub_6a6fa0, sub_6a7050, sub_6a7400
*/
void sub_10eae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eae70ULL || rel >= 0x10eb070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb070 size=64 callers=0 calls=0
*/
void sub_10eb070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb070ULL || rel >= 0x10eb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb0b0 size=16 callers=0 calls=0
*/
void sub_10eb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb0b0ULL || rel >= 0x10eb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb0c0 size=16 callers=0 calls=0
*/
void sub_10eb0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb0c0ULL || rel >= 0x10eb0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb0d0 size=16 callers=0 calls=0
*/
void sub_10eb0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb0d0ULL || rel >= 0x10eb0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb0e0 size=32 callers=0 calls=0
*/
void sub_10eb0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb0e0ULL || rel >= 0x10eb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb100 size=32 callers=0 calls=0
*/
void sub_10eb100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb100ULL || rel >= 0x10eb120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb120 size=96 callers=0 calls=2
   calls: sub_1047680, sub_104c0e0
*/
void sub_10eb120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb120ULL || rel >= 0x10eb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb180 size=96 callers=0 calls=2
   calls: sub_1047680, sub_104c0e0
*/
void sub_10eb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb180ULL || rel >= 0x10eb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb1e0 size=96 callers=0 calls=0
*/
void sub_10eb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb1e0ULL || rel >= 0x10eb240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb240 size=64 callers=0 calls=0
*/
void sub_10eb240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb240ULL || rel >= 0x10eb280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb280 size=16 callers=0 calls=0
*/
void sub_10eb280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb280ULL || rel >= 0x10eb290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb290 size=16 callers=0 calls=0
*/
void sub_10eb290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb290ULL || rel >= 0x10eb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb2a0 size=16 callers=0 calls=0
*/
void sub_10eb2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb2a0ULL || rel >= 0x10eb2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb2b0 size=16 callers=0 calls=0
*/
void sub_10eb2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb2b0ULL || rel >= 0x10eb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb2c0 size=96 callers=0 calls=0
*/
void sub_10eb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb2c0ULL || rel >= 0x10eb320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb320 size=16 callers=0 calls=0
*/
void sub_10eb320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb320ULL || rel >= 0x10eb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb330 size=48 callers=0 calls=0
*/
void sub_10eb330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb330ULL || rel >= 0x10eb360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb360 size=464 callers=2 calls=0
*/
void sub_10eb360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb360ULL || rel >= 0x10eb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb530 size=128 callers=0 calls=0
*/
void sub_10eb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb530ULL || rel >= 0x10eb5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eb5b0 size=1968 callers=9 calls=8
   calls: sub_10563d0, sub_107e790, sub_10ebd60, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestPostUserData
*/
void RequestPostUserData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eb5b0ULL || rel >= 0x10ebd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ebd60 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10ec9f0, sub_6ce100
*/
void sub_10ebd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ebd60ULL || rel >= 0x10ebee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ebee0 size=2064 callers=2 calls=9
   calls: sub_10ec6f0, sub_10ec870, sub_10ee020, sub_10ee640, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestGetUserData
*/
void RequestGetUserData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ebee0ULL || rel >= 0x10ec6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ec6f0 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10eec20, sub_6ce100
*/
void sub_10ec6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ec6f0ULL || rel >= 0x10ec870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ec870 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10ef7f0, sub_6ce100
*/
void sub_10ec870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ec870ULL || rel >= 0x10ec9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ec9f0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10ec9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ec9f0ULL || rel >= 0x10ecb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ecb50 size=144 callers=0 calls=0
*/
void sub_10ecb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ecb50ULL || rel >= 0x10ecbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ecbe0 size=144 callers=0 calls=0
*/
void sub_10ecbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ecbe0ULL || rel >= 0x10ecc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ecc70 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10ecc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ecc70ULL || rel >= 0x10ecce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ecce0 size=64 callers=0 calls=1
   calls: sub_10ed310
*/
void sub_10ecce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ecce0ULL || rel >= 0x10ecd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ecd20 size=16 callers=0 calls=0
*/
void sub_10ecd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ecd20ULL || rel >= 0x10ecd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ecd30 size=48 callers=0 calls=0
*/
void sub_10ecd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ecd30ULL || rel >= 0x10ecd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ecd60 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10ecd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ecd60ULL || rel >= 0x10ece20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ece20 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10ece20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ece20ULL || rel >= 0x10ece90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ece90 size=144 callers=0 calls=0
*/
void sub_10ece90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ece90ULL || rel >= 0x10ecf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ecf20 size=144 callers=0 calls=0
*/
void sub_10ecf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ecf20ULL || rel >= 0x10ecfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ecfb0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10ecfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ecfb0ULL || rel >= 0x10ed020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed020 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10ed020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed020ULL || rel >= 0x10ed090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed090 size=144 callers=0 calls=0
*/
void sub_10ed090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed090ULL || rel >= 0x10ed120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed120 size=144 callers=0 calls=0
*/
void sub_10ed120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed120ULL || rel >= 0x10ed1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed1b0 size=48 callers=0 calls=0
*/
void sub_10ed1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed1b0ULL || rel >= 0x10ed1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed1e0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10ed1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed1e0ULL || rel >= 0x10ed2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed2a0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10ed2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed2a0ULL || rel >= 0x10ed310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed310 size=560 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10ed310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed310ULL || rel >= 0x10ed540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed540 size=16 callers=0 calls=0
*/
void sub_10ed540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed540ULL || rel >= 0x10ed550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed550 size=16 callers=0 calls=0
*/
void sub_10ed550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed550ULL || rel >= 0x10ed560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed560 size=16 callers=0 calls=0
*/
void sub_10ed560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed560ULL || rel >= 0x10ed570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed570 size=16 callers=0 calls=0
*/
void sub_10ed570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed570ULL || rel >= 0x10ed580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed580 size=64 callers=0 calls=0
*/
void sub_10ed580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed580ULL || rel >= 0x10ed5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed5c0 size=32 callers=0 calls=0
*/
void sub_10ed5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed5c0ULL || rel >= 0x10ed5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed5e0 size=16 callers=0 calls=0
*/
void sub_10ed5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed5e0ULL || rel >= 0x10ed5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed5f0 size=16 callers=0 calls=0
*/
void sub_10ed5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed5f0ULL || rel >= 0x10ed600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed600 size=64 callers=0 calls=0
*/
void sub_10ed600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed600ULL || rel >= 0x10ed640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed640 size=32 callers=0 calls=0
*/
void sub_10ed640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed640ULL || rel >= 0x10ed660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed660 size=16 callers=0 calls=0
*/
void sub_10ed660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed660ULL || rel >= 0x10ed670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed670 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10ed670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed670ULL || rel >= 0x10ed6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed6d0 size=64 callers=0 calls=0
*/
void sub_10ed6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed6d0ULL || rel >= 0x10ed710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed710 size=32 callers=0 calls=0
*/
void sub_10ed710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed710ULL || rel >= 0x10ed730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed730 size=16 callers=0 calls=0
*/
void sub_10ed730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed730ULL || rel >= 0x10ed740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed740 size=144 callers=0 calls=0
*/
void sub_10ed740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed740ULL || rel >= 0x10ed7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed7d0 size=144 callers=0 calls=0
*/
void sub_10ed7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed7d0ULL || rel >= 0x10ed860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed860 size=240 callers=0 calls=0
*/
void sub_10ed860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed860ULL || rel >= 0x10ed950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed950 size=144 callers=0 calls=0
*/
void sub_10ed950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed950ULL || rel >= 0x10ed9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ed9e0 size=144 callers=0 calls=0
*/
void sub_10ed9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ed9e0ULL || rel >= 0x10eda70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eda70 size=16 callers=0 calls=0
*/
void sub_10eda70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eda70ULL || rel >= 0x10eda80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eda80 size=16 callers=0 calls=0
*/
void sub_10eda80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eda80ULL || rel >= 0x10eda90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eda90 size=144 callers=0 calls=0
*/
void sub_10eda90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eda90ULL || rel >= 0x10edb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010edb20 size=144 callers=0 calls=0
*/
void sub_10edb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10edb20ULL || rel >= 0x10edbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010edbb0 size=144 callers=0 calls=0
*/
void sub_10edbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10edbb0ULL || rel >= 0x10edc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010edc40 size=144 callers=0 calls=0
*/
void sub_10edc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10edc40ULL || rel >= 0x10edcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010edcd0 size=240 callers=0 calls=0
*/
void sub_10edcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10edcd0ULL || rel >= 0x10eddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eddc0 size=144 callers=0 calls=0
*/
void sub_10eddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eddc0ULL || rel >= 0x10ede50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ede50 size=144 callers=0 calls=0
*/
void sub_10ede50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ede50ULL || rel >= 0x10edee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010edee0 size=16 callers=0 calls=0
*/
void sub_10edee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10edee0ULL || rel >= 0x10edef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010edef0 size=16 callers=0 calls=0
*/
void sub_10edef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10edef0ULL || rel >= 0x10edf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010edf00 size=144 callers=0 calls=0
*/
void sub_10edf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10edf00ULL || rel >= 0x10edf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010edf90 size=144 callers=0 calls=0
*/
void sub_10edf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10edf90ULL || rel >= 0x10ee020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee020 size=432 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10ee020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee020ULL || rel >= 0x10ee1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee1d0 size=144 callers=0 calls=0
*/
void sub_10ee1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee1d0ULL || rel >= 0x10ee260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee260 size=144 callers=0 calls=0
*/
void sub_10ee260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee260ULL || rel >= 0x10ee2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee2f0 size=240 callers=0 calls=0
*/
void sub_10ee2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee2f0ULL || rel >= 0x10ee3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee3e0 size=144 callers=0 calls=0
*/
void sub_10ee3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee3e0ULL || rel >= 0x10ee470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee470 size=144 callers=0 calls=0
*/
void sub_10ee470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee470ULL || rel >= 0x10ee500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee500 size=16 callers=0 calls=0
*/
void sub_10ee500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee500ULL || rel >= 0x10ee510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee510 size=16 callers=0 calls=0
*/
void sub_10ee510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee510ULL || rel >= 0x10ee520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee520 size=144 callers=0 calls=0
*/
void sub_10ee520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee520ULL || rel >= 0x10ee5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee5b0 size=144 callers=0 calls=0
*/
void sub_10ee5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee5b0ULL || rel >= 0x10ee640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee640 size=304 callers=1 calls=1
   calls: sub_6ce110
*/
void sub_10ee640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee640ULL || rel >= 0x10ee770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee770 size=256 callers=0 calls=0
*/
void sub_10ee770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee770ULL || rel >= 0x10ee870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee870 size=16 callers=0 calls=0
*/
void sub_10ee870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee870ULL || rel >= 0x10ee880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee880 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_10ee880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee880ULL || rel >= 0x10ee8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ee8f0 size=336 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10ee8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ee8f0ULL || rel >= 0x10eea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eea40 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10eea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eea40ULL || rel >= 0x10eeaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eeaa0 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10eeaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eeaa0ULL || rel >= 0x10eeb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eeb00 size=16 callers=0 calls=0
*/
void sub_10eeb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eeb00ULL || rel >= 0x10eeb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eeb10 size=16 callers=0 calls=0
*/
void sub_10eeb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eeb10ULL || rel >= 0x10eeb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eeb20 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_10eeb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eeb20ULL || rel >= 0x10eeb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eeb90 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_10eeb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eeb90ULL || rel >= 0x10eec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eec00 size=16 callers=0 calls=0
*/
void sub_10eec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eec00ULL || rel >= 0x10eec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eec10 size=16 callers=0 calls=0
*/
void sub_10eec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eec10ULL || rel >= 0x10eec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eec20 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10eec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eec20ULL || rel >= 0x10eed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eed80 size=176 callers=0 calls=0
*/
void sub_10eed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eed80ULL || rel >= 0x10eee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eee30 size=176 callers=0 calls=0
*/
void sub_10eee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eee30ULL || rel >= 0x10eeee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eeee0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10eeee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eeee0ULL || rel >= 0x10eef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eef50 size=64 callers=0 calls=1
   calls: sub_10ef580
*/
void sub_10eef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eef50ULL || rel >= 0x10eef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eef90 size=16 callers=0 calls=0
*/
void sub_10eef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eef90ULL || rel >= 0x10eefa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eefa0 size=48 callers=0 calls=0
*/
void sub_10eefa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eefa0ULL || rel >= 0x10eefd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010eefd0 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10eefd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eefd0ULL || rel >= 0x10ef050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef050 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10ef050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef050ULL || rel >= 0x10ef0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef0c0 size=176 callers=0 calls=0
*/
void sub_10ef0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef0c0ULL || rel >= 0x10ef170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef170 size=176 callers=0 calls=0
*/
void sub_10ef170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef170ULL || rel >= 0x10ef220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef220 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10ef220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef220ULL || rel >= 0x10ef290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef290 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10ef290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef290ULL || rel >= 0x10ef300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef300 size=176 callers=0 calls=0
*/
void sub_10ef300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef300ULL || rel >= 0x10ef3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef3b0 size=176 callers=0 calls=0
*/
void sub_10ef3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef3b0ULL || rel >= 0x10ef460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef460 size=48 callers=0 calls=0
*/
void sub_10ef460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef460ULL || rel >= 0x10ef490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef490 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10ef490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef490ULL || rel >= 0x10ef510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef510 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10ef510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef510ULL || rel >= 0x10ef580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef580 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10ef580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef580ULL || rel >= 0x10ef7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef7c0 size=16 callers=0 calls=0
*/
void sub_10ef7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef7c0ULL || rel >= 0x10ef7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef7d0 size=16 callers=0 calls=0
*/
void sub_10ef7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef7d0ULL || rel >= 0x10ef7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef7e0 size=16 callers=0 calls=0
*/
void sub_10ef7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef7e0ULL || rel >= 0x10ef7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef7f0 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10ef7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef7f0ULL || rel >= 0x10ef930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef930 size=176 callers=0 calls=0
*/
void sub_10ef930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef930ULL || rel >= 0x10ef9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ef9e0 size=176 callers=0 calls=0
*/
void sub_10ef9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef9e0ULL || rel >= 0x10efa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efa90 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10efa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efa90ULL || rel >= 0x10efb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efb00 size=64 callers=0 calls=1
   calls: sub_10f01b0
*/
void sub_10efb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efb00ULL || rel >= 0x10efb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efb40 size=16 callers=0 calls=0
*/
void sub_10efb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efb40ULL || rel >= 0x10efb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efb50 size=48 callers=0 calls=0
*/
void sub_10efb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efb50ULL || rel >= 0x10efb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efb80 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10efb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efb80ULL || rel >= 0x10efc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efc40 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10efc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efc40ULL || rel >= 0x10efcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efcb0 size=176 callers=0 calls=0
*/
void sub_10efcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efcb0ULL || rel >= 0x10efd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efd60 size=176 callers=0 calls=0
*/
void sub_10efd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efd60ULL || rel >= 0x10efe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efe10 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10efe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efe10ULL || rel >= 0x10efe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efe80 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10efe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efe80ULL || rel >= 0x10efef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010efef0 size=176 callers=0 calls=0
*/
void sub_10efef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10efef0ULL || rel >= 0x10effa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010effa0 size=176 callers=0 calls=0
*/
void sub_10effa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10effa0ULL || rel >= 0x10f0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0050 size=48 callers=0 calls=0
*/
void sub_10f0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0050ULL || rel >= 0x10f0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0080 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10f0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0080ULL || rel >= 0x10f0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0140 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10f0140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0140ULL || rel >= 0x10f01b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f01b0 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10f01b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f01b0ULL || rel >= 0x10f03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f03f0 size=64 callers=0 calls=0
*/
void sub_10f03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f03f0ULL || rel >= 0x10f0430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0430 size=80 callers=0 calls=0
*/
void sub_10f0430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0430ULL || rel >= 0x10f0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0480 size=96 callers=0 calls=0
*/
void sub_10f0480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0480ULL || rel >= 0x10f04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f04e0 size=32 callers=0 calls=0
*/
void sub_10f04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f04e0ULL || rel >= 0x10f0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0500 size=64 callers=0 calls=0
*/
void sub_10f0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0500ULL || rel >= 0x10f0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0540 size=64 callers=0 calls=0
*/
void sub_10f0540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0540ULL || rel >= 0x10f0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0580 size=32 callers=0 calls=0
*/
void sub_10f0580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0580ULL || rel >= 0x10f05a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f05a0 size=16 callers=0 calls=0
*/
void sub_10f05a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f05a0ULL || rel >= 0x10f05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f05b0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10f05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f05b0ULL || rel >= 0x10f0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0610 size=64 callers=0 calls=0
*/
void sub_10f0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0610ULL || rel >= 0x10f0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0650 size=32 callers=0 calls=0
*/
void sub_10f0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0650ULL || rel >= 0x10f0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0670 size=16 callers=0 calls=0
*/
void sub_10f0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0670ULL || rel >= 0x10f0680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0680 size=128 callers=0 calls=0
*/
void sub_10f0680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0680ULL || rel >= 0x10f0700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0700 size=304 callers=0 calls=3
   calls: sub_10f1430, sub_15b9390, sub_b07bb0
*/
void sub_10f0700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0700ULL || rel >= 0x10f0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0830 size=16 callers=0 calls=0
*/
void sub_10f0830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0830ULL || rel >= 0x10f0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0840 size=192 callers=0 calls=2
   calls: sub_104c0e0, sub_15bbc70
*/
void sub_10f0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0840ULL || rel >= 0x10f0900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0900 size=192 callers=0 calls=2
   calls: sub_104c0e0, sub_15bbc70
*/
void sub_10f0900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0900ULL || rel >= 0x10f09c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f09c0 size=768 callers=0 calls=8
   calls: sub_10f1430, sub_10f1600, sub_6a4320, sub_6a43a0, sub_6a43b0, sub_6a4d30, sub_6a6530, sub_6a67c0
*/
void sub_10f09c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f09c0ULL || rel >= 0x10f0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0cc0 size=64 callers=0 calls=0
*/
void sub_10f0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0cc0ULL || rel >= 0x10f0d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0d00 size=16 callers=0 calls=0
*/
void sub_10f0d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0d00ULL || rel >= 0x10f0d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0d10 size=16 callers=0 calls=0
*/
void sub_10f0d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0d10ULL || rel >= 0x10f0d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0d20 size=16 callers=0 calls=0
*/
void sub_10f0d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0d20ULL || rel >= 0x10f0d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0d30 size=144 callers=0 calls=0
*/
void sub_10f0d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0d30ULL || rel >= 0x10f0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0dc0 size=144 callers=0 calls=0
*/
void sub_10f0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0dc0ULL || rel >= 0x10f0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0e50 size=240 callers=0 calls=0
*/
void sub_10f0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0e50ULL || rel >= 0x10f0f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0f40 size=144 callers=0 calls=0
*/
void sub_10f0f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0f40ULL || rel >= 0x10f0fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f0fd0 size=144 callers=0 calls=0
*/
void sub_10f0fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f0fd0ULL || rel >= 0x10f1060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1060 size=16 callers=0 calls=0
*/
void sub_10f1060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1060ULL || rel >= 0x10f1070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1070 size=16 callers=0 calls=0
*/
void sub_10f1070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1070ULL || rel >= 0x10f1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1080 size=144 callers=0 calls=0
*/
void sub_10f1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1080ULL || rel >= 0x10f1110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1110 size=144 callers=0 calls=0
*/
void sub_10f1110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1110ULL || rel >= 0x10f11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f11a0 size=16 callers=0 calls=0
*/
void sub_10f11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f11a0ULL || rel >= 0x10f11b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f11b0 size=16 callers=0 calls=0
*/
void sub_10f11b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f11b0ULL || rel >= 0x10f11c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f11c0 size=16 callers=0 calls=0
*/
void sub_10f11c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f11c0ULL || rel >= 0x10f11d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f11d0 size=16 callers=0 calls=0
*/
void sub_10f11d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f11d0ULL || rel >= 0x10f11e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f11e0 size=144 callers=0 calls=0
*/
void sub_10f11e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f11e0ULL || rel >= 0x10f1270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1270 size=144 callers=0 calls=0
*/
void sub_10f1270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1270ULL || rel >= 0x10f1300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1300 size=64 callers=0 calls=0
*/
void sub_10f1300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1300ULL || rel >= 0x10f1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1340 size=16 callers=0 calls=0
*/
void sub_10f1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1340ULL || rel >= 0x10f1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1350 size=16 callers=0 calls=0
*/
void sub_10f1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1350ULL || rel >= 0x10f1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1360 size=16 callers=0 calls=0
*/
void sub_10f1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1360ULL || rel >= 0x10f1370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1370 size=16 callers=0 calls=0
*/
void sub_10f1370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1370ULL || rel >= 0x10f1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1380 size=16 callers=0 calls=0
*/
void sub_10f1380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1380ULL || rel >= 0x10f1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1390 size=96 callers=0 calls=0
*/
void sub_10f1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1390ULL || rel >= 0x10f13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f13f0 size=16 callers=0 calls=0
*/
void sub_10f13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f13f0ULL || rel >= 0x10f1400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1400 size=48 callers=0 calls=0
*/
void sub_10f1400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1400ULL || rel >= 0x10f1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1430 size=464 callers=2 calls=0
*/
void sub_10f1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1430ULL || rel >= 0x10f1600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1600 size=304 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10f1600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1600ULL || rel >= 0x10f1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1730 size=128 callers=0 calls=0
*/
void sub_10f1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1730ULL || rel >= 0x10f17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f17b0 size=16 callers=0 calls=0
*/
void sub_10f17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f17b0ULL || rel >= 0x10f17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f17c0 size=16 callers=0 calls=0
*/
void sub_10f17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f17c0ULL || rel >= 0x10f17d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f17d0 size=64 callers=0 calls=1
   calls: sub_104c0e0
*/
void sub_10f17d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f17d0ULL || rel >= 0x10f1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1810 size=64 callers=0 calls=1
   calls: sub_104c0e0
*/
void sub_10f1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1810ULL || rel >= 0x10f1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1850 size=768 callers=0 calls=10
   calls: sub_10f2100, sub_15cf190, sub_15cf3c0, sub_15cf460, sub_15cf570, sub_6a4320, sub_6a43a0, sub_6a43b0, sub_6a6530, sub_6a6590
*/
void sub_10f1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1850ULL || rel >= 0x10f1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1b50 size=64 callers=0 calls=0
*/
void sub_10f1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1b50ULL || rel >= 0x10f1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1b90 size=16 callers=0 calls=0
*/
void sub_10f1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1b90ULL || rel >= 0x10f1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1ba0 size=16 callers=0 calls=0
*/
void sub_10f1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1ba0ULL || rel >= 0x10f1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1bb0 size=16 callers=0 calls=0
*/
void sub_10f1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1bb0ULL || rel >= 0x10f1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1bc0 size=80 callers=0 calls=0
*/
void sub_10f1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1bc0ULL || rel >= 0x10f1c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1c10 size=240 callers=0 calls=0
*/
void sub_10f1c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1c10ULL || rel >= 0x10f1d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1d00 size=80 callers=0 calls=0
*/
void sub_10f1d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1d00ULL || rel >= 0x10f1d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1d50 size=80 callers=0 calls=0
*/
void sub_10f1d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1d50ULL || rel >= 0x10f1da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1da0 size=16 callers=0 calls=0
*/
void sub_10f1da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1da0ULL || rel >= 0x10f1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1db0 size=16 callers=0 calls=0
*/
void sub_10f1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1db0ULL || rel >= 0x10f1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1dc0 size=80 callers=0 calls=0
*/
void sub_10f1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1dc0ULL || rel >= 0x10f1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1e10 size=80 callers=0 calls=0
*/
void sub_10f1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1e10ULL || rel >= 0x10f1e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1e60 size=16 callers=0 calls=0
*/
void sub_10f1e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1e60ULL || rel >= 0x10f1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1e70 size=112 callers=0 calls=0
*/
void sub_10f1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1e70ULL || rel >= 0x10f1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1ee0 size=112 callers=0 calls=0
*/
void sub_10f1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1ee0ULL || rel >= 0x10f1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1f50 size=64 callers=0 calls=0
*/
void sub_10f1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1f50ULL || rel >= 0x10f1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1f90 size=16 callers=0 calls=0
*/
void sub_10f1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1f90ULL || rel >= 0x10f1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1fa0 size=16 callers=0 calls=0
*/
void sub_10f1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1fa0ULL || rel >= 0x10f1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1fb0 size=16 callers=0 calls=0
*/
void sub_10f1fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1fb0ULL || rel >= 0x10f1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1fc0 size=16 callers=0 calls=0
*/
void sub_10f1fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1fc0ULL || rel >= 0x10f1fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f1fd0 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_10f1fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f1fd0ULL || rel >= 0x10f2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2010 size=32 callers=0 calls=0
*/
void sub_10f2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2010ULL || rel >= 0x10f2030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2030 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_10f2030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2030ULL || rel >= 0x10f2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2070 size=80 callers=0 calls=0
*/
void sub_10f2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2070ULL || rel >= 0x10f20c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f20c0 size=16 callers=0 calls=0
*/
void sub_10f20c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f20c0ULL || rel >= 0x10f20d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f20d0 size=48 callers=0 calls=0
*/
void sub_10f20d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f20d0ULL || rel >= 0x10f2100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2100 size=224 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10f2100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2100ULL || rel >= 0x10f21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f21e0 size=128 callers=0 calls=0
*/
void sub_10f21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f21e0ULL || rel >= 0x10f2260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2260 size=128 callers=0 calls=0
*/
void sub_10f2260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2260ULL || rel >= 0x10f22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f22e0 size=2128 callers=5 calls=11
   calls: sub_10563d0, sub_107e790, sub_10ad190, sub_10f2b30, sub_10f3120, sub_10f4660, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestPokemonValidation
*/
void RequestPokemonValidation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f22e0ULL || rel >= 0x10f2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2b30 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10f36a0, sub_6ce100
*/
void sub_10f2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2b30ULL || rel >= 0x10f2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2cb0 size=144 callers=0 calls=0
*/
void sub_10f2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2cb0ULL || rel >= 0x10f2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2d40 size=144 callers=0 calls=0
*/
void sub_10f2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2d40ULL || rel >= 0x10f2dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2dd0 size=240 callers=0 calls=0
*/
void sub_10f2dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2dd0ULL || rel >= 0x10f2ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2ec0 size=144 callers=0 calls=0
*/
void sub_10f2ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2ec0ULL || rel >= 0x10f2f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2f50 size=144 callers=0 calls=0
*/
void sub_10f2f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2f50ULL || rel >= 0x10f2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2fe0 size=16 callers=0 calls=0
*/
void sub_10f2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2fe0ULL || rel >= 0x10f2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f2ff0 size=16 callers=0 calls=0
*/
void sub_10f2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f2ff0ULL || rel >= 0x10f3000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3000 size=144 callers=0 calls=0
*/
void sub_10f3000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3000ULL || rel >= 0x10f3090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3090 size=144 callers=0 calls=0
*/
void sub_10f3090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3090ULL || rel >= 0x10f3120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3120 size=272 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_10f3120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3120ULL || rel >= 0x10f3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3230 size=144 callers=0 calls=0
*/
void sub_10f3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3230ULL || rel >= 0x10f32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f32c0 size=144 callers=0 calls=0
*/
void sub_10f32c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f32c0ULL || rel >= 0x10f3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3350 size=240 callers=0 calls=0
*/
void sub_10f3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3350ULL || rel >= 0x10f3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3440 size=144 callers=0 calls=0
*/
void sub_10f3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3440ULL || rel >= 0x10f34d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f34d0 size=144 callers=0 calls=0
*/
void sub_10f34d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f34d0ULL || rel >= 0x10f3560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3560 size=16 callers=0 calls=0
*/
void sub_10f3560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3560ULL || rel >= 0x10f3570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3570 size=16 callers=0 calls=0
*/
void sub_10f3570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3570ULL || rel >= 0x10f3580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3580 size=144 callers=0 calls=0
*/
void sub_10f3580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3580ULL || rel >= 0x10f3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3610 size=144 callers=0 calls=0
*/
void sub_10f3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3610ULL || rel >= 0x10f36a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f36a0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10f36a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f36a0ULL || rel >= 0x10f3800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3800 size=176 callers=0 calls=0
*/
void sub_10f3800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3800ULL || rel >= 0x10f38b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f38b0 size=176 callers=0 calls=0
*/
void sub_10f38b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f38b0ULL || rel >= 0x10f3960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3960 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10f3960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3960ULL || rel >= 0x10f39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f39d0 size=64 callers=0 calls=1
   calls: sub_10f4080
*/
void sub_10f39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f39d0ULL || rel >= 0x10f3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3a10 size=16 callers=0 calls=0
*/
void sub_10f3a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3a10ULL || rel >= 0x10f3a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3a20 size=48 callers=0 calls=0
*/
void sub_10f3a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3a20ULL || rel >= 0x10f3a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3a50 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10f3a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3a50ULL || rel >= 0x10f3b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3b10 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10f3b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3b10ULL || rel >= 0x10f3b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3b80 size=176 callers=0 calls=0
*/
void sub_10f3b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3b80ULL || rel >= 0x10f3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3c30 size=176 callers=0 calls=0
*/
void sub_10f3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3c30ULL || rel >= 0x10f3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3ce0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10f3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3ce0ULL || rel >= 0x10f3d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3d50 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10f3d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3d50ULL || rel >= 0x10f3dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3dc0 size=176 callers=0 calls=0
*/
void sub_10f3dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3dc0ULL || rel >= 0x10f3e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3e70 size=176 callers=0 calls=0
*/
void sub_10f3e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3e70ULL || rel >= 0x10f3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3f20 size=48 callers=0 calls=0
*/
void sub_10f3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3f20ULL || rel >= 0x10f3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f3f50 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10f3f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f3f50ULL || rel >= 0x10f4010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4010 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10f4010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4010ULL || rel >= 0x10f4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4080 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10f4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4080ULL || rel >= 0x10f42c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f42c0 size=16 callers=0 calls=0
*/
void sub_10f42c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f42c0ULL || rel >= 0x10f42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f42d0 size=16 callers=0 calls=0
*/
void sub_10f42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f42d0ULL || rel >= 0x10f42e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f42e0 size=16 callers=0 calls=0
*/
void sub_10f42e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f42e0ULL || rel >= 0x10f42f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f42f0 size=80 callers=0 calls=0
*/
void sub_10f42f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f42f0ULL || rel >= 0x10f4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4340 size=80 callers=0 calls=0
*/
void sub_10f4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4340ULL || rel >= 0x10f4390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4390 size=96 callers=0 calls=0
*/
void sub_10f4390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4390ULL || rel >= 0x10f43f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f43f0 size=32 callers=0 calls=0
*/
void sub_10f43f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f43f0ULL || rel >= 0x10f4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4410 size=48 callers=0 calls=0
*/
void sub_10f4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4410ULL || rel >= 0x10f4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4440 size=80 callers=0 calls=0
*/
void sub_10f4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4440ULL || rel >= 0x10f4490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4490 size=96 callers=0 calls=0
*/
void sub_10f4490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4490ULL || rel >= 0x10f44f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f44f0 size=32 callers=0 calls=0
*/
void sub_10f44f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f44f0ULL || rel >= 0x10f4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4510 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10f4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4510ULL || rel >= 0x10f4570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4570 size=64 callers=0 calls=0
*/
void sub_10f4570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4570ULL || rel >= 0x10f45b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f45b0 size=32 callers=0 calls=0
*/
void sub_10f45b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f45b0ULL || rel >= 0x10f45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f45d0 size=16 callers=0 calls=0
*/
void sub_10f45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f45d0ULL || rel >= 0x10f45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f45e0 size=128 callers=0 calls=0
*/
void sub_10f45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f45e0ULL || rel >= 0x10f4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4660 size=304 callers=1 calls=1
   calls: sub_783bd0
*/
void sub_10f4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4660ULL || rel >= 0x10f4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4790 size=160 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10f4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4790ULL || rel >= 0x10f4830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4830 size=272 callers=0 calls=1
   calls: sub_6ddfe0
*/
void sub_10f4830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4830ULL || rel >= 0x10f4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4940 size=16 callers=0 calls=0
*/
void sub_10f4940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4940ULL || rel >= 0x10f4950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4950 size=16 callers=0 calls=0
*/
void sub_10f4950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4950ULL || rel >= 0x10f4960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4960 size=16 callers=0 calls=0
*/
void sub_10f4960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4960ULL || rel >= 0x10f4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4970 size=16 callers=0 calls=0
*/
void sub_10f4970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4970ULL || rel >= 0x10f4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4980 size=16 callers=0 calls=0
*/
void sub_10f4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4980ULL || rel >= 0x10f4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4990 size=736 callers=3 calls=13
   calls: HttpThread, sub_104c140, sub_104c590, sub_10f4c70, sub_10f4da0, sub_10f4fa0, sub_1391b50, sub_6ddfe0, sub_6de5b0, sub_6de620, sub_6de640, sub_6de660
   ... +1 more
   ref: https://v3-lp1.vp.n.srv.nintendo.net/v1/validate
*/
void validate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4990ULL || rel >= 0x10f4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4c70 size=304 callers=1 calls=3
   calls: sub_10f57c0, sub_6dde00, sub_6ddfe0
*/
void sub_10f4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4c70ULL || rel >= 0x10f4da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4da0 size=512 callers=1 calls=3
   calls: public_key, sub_10f57c0, sub_6de640
*/
void sub_10f4da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4da0ULL || rel >= 0x10f4fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f4fa0 size=560 callers=1 calls=5
   calls: sub_10f57c0, sub_6a3240, sub_76f7f0, sub_7847d0, sub_7c2d80
*/
void sub_10f4fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f4fa0ULL || rel >= 0x10f51d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f51d0 size=192 callers=1 calls=1
   calls: sub_6a3240
   ref: https://v3-lp1.vp.n.srv.nintendo.net/v1/public_key
*/
void public_key(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f51d0ULL || rel >= 0x10f5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5290 size=368 callers=0 calls=3
   calls: sub_10f57c0, sub_10f5990, validate
*/
void sub_10f5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5290ULL || rel >= 0x10f5400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5400 size=64 callers=0 calls=0
*/
void sub_10f5400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5400ULL || rel >= 0x10f5440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5440 size=16 callers=0 calls=0
*/
void sub_10f5440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5440ULL || rel >= 0x10f5450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5450 size=240 callers=0 calls=0
*/
void sub_10f5450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5450ULL || rel >= 0x10f5540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5540 size=16 callers=0 calls=0
*/
void sub_10f5540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5540ULL || rel >= 0x10f5550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5550 size=16 callers=0 calls=0
*/
void sub_10f5550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5550ULL || rel >= 0x10f5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5560 size=144 callers=0 calls=0
*/
void sub_10f5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5560ULL || rel >= 0x10f55f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f55f0 size=144 callers=0 calls=0
*/
void sub_10f55f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f55f0ULL || rel >= 0x10f5680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5680 size=64 callers=0 calls=0
*/
void sub_10f5680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5680ULL || rel >= 0x10f56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f56c0 size=16 callers=0 calls=0
*/
void sub_10f56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f56c0ULL || rel >= 0x10f56d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f56d0 size=16 callers=0 calls=0
*/
void sub_10f56d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f56d0ULL || rel >= 0x10f56e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f56e0 size=16 callers=0 calls=0
*/
void sub_10f56e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f56e0ULL || rel >= 0x10f56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f56f0 size=16 callers=0 calls=0
*/
void sub_10f56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f56f0ULL || rel >= 0x10f5700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5700 size=16 callers=0 calls=0
*/
void sub_10f5700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5700ULL || rel >= 0x10f5710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5710 size=16 callers=0 calls=0
*/
void sub_10f5710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5710ULL || rel >= 0x10f5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5720 size=96 callers=0 calls=0
*/
void sub_10f5720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5720ULL || rel >= 0x10f5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5780 size=16 callers=0 calls=0
*/
void sub_10f5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5780ULL || rel >= 0x10f5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5790 size=48 callers=0 calls=0
*/
void sub_10f5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5790ULL || rel >= 0x10f57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f57c0 size=464 callers=6 calls=0
*/
void sub_10f57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f57c0ULL || rel >= 0x10f5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5990 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10f5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5990ULL || rel >= 0x10f5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5ae0 size=128 callers=0 calls=0
*/
void sub_10f5ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5ae0ULL || rel >= 0x10f5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5b60 size=144 callers=2 calls=2
   calls: sub_5e2350, sub_f7c700
*/
void sub_10f5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5b60ULL || rel >= 0x10f5bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5bf0 size=32 callers=78 calls=0
*/
void sub_10f5bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5bf0ULL || rel >= 0x10f5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5c10 size=32 callers=2 calls=0
*/
void sub_10f5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5c10ULL || rel >= 0x10f5c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5c30 size=32 callers=8 calls=0
*/
void sub_10f5c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5c30ULL || rel >= 0x10f5c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5c50 size=32 callers=2 calls=0
*/
void sub_10f5c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5c50ULL || rel >= 0x10f5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5c70 size=240 callers=0 calls=0
*/
void sub_10f5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5c70ULL || rel >= 0x10f5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5d60 size=240 callers=0 calls=0
*/
void sub_10f5d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5d60ULL || rel >= 0x10f5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5e50 size=240 callers=0 calls=0
*/
void sub_10f5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5e50ULL || rel >= 0x10f5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f5f40 size=240 callers=0 calls=0
*/
void sub_10f5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f5f40ULL || rel >= 0x10f6030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f6030 size=240 callers=0 calls=0
*/
void sub_10f6030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f6030ULL || rel >= 0x10f6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f6120 size=16 callers=0 calls=0
*/
void sub_10f6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f6120ULL || rel >= 0x10f6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f6130 size=16 callers=0 calls=0
*/
void sub_10f6130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f6130ULL || rel >= 0x10f6140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f6140 size=240 callers=0 calls=0
*/
void sub_10f6140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f6140ULL || rel >= 0x10f6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f6230 size=240 callers=0 calls=0
*/
void sub_10f6230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f6230ULL || rel >= 0x10f6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f6320 size=128 callers=0 calls=0
*/
void sub_10f6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f6320ULL || rel >= 0x10f63a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f63a0 size=896 callers=2 calls=6
   calls: sub_10f7f60, sub_10f88c0, sub_10f9400, sub_10fa5f0, sub_5cf9c0, sub_f17920
*/
void sub_10f63a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f63a0ULL || rel >= 0x10f6720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f6720 size=160 callers=1 calls=4
   calls: sub_10f67d0, sub_10fa920, sub_10fad30, sub_10fb9f0
*/
void sub_10f6720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f6720ULL || rel >= 0x10f67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f67c0 size=16 callers=13 calls=0
*/
void sub_10f67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f67c0ULL || rel >= 0x10f67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f67d0 size=2384 callers=1 calls=9
   calls: sub_1063fe0, sub_1064a20, sub_106b600, sub_106dec0, sub_106eb30, sub_10f82b0, sub_10f8520, sub_10fae50, sub_10faec0
*/
void sub_10f67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f67d0ULL || rel >= 0x10f7120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7120 size=1744 callers=0 calls=15
   calls: sub_1063fe0, sub_1064a20, sub_1064d00, sub_106b600, sub_106b660, sub_106dd10, sub_106fc70, sub_1075f10, sub_10f80b0, sub_10fc840, sub_10fc8b0, sub_10fcd90
   ... +3 more
*/
void sub_10f7120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7120ULL || rel >= 0x10f77f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f77f0 size=240 callers=1 calls=8
   calls: sub_1063f50, sub_1063fe0, sub_10faa50, sub_10fad30, sub_10fad50, sub_10fadb0, sub_10fae10, sub_136b590
*/
void sub_10f77f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f77f0ULL || rel >= 0x10f78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f78e0 size=16 callers=1 calls=0
*/
void sub_10f78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f78e0ULL || rel >= 0x10f78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f78f0 size=256 callers=1 calls=3
   calls: sub_1063f50, sub_10facb0, sub_10fad30
*/
void sub_10f78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f78f0ULL || rel >= 0x10f79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f79f0 size=16 callers=3 calls=0
*/
void sub_10f79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f79f0ULL || rel >= 0x10f7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7a00 size=16 callers=2 calls=0
*/
void sub_10f7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7a00ULL || rel >= 0x10f7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7a10 size=16 callers=2 calls=0
*/
void sub_10f7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7a10ULL || rel >= 0x10f7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7a20 size=272 callers=1 calls=1
   calls: sub_6bb230
*/
void sub_10f7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7a20ULL || rel >= 0x10f7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7b30 size=96 callers=1 calls=0
*/
void sub_10f7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7b30ULL || rel >= 0x10f7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7b90 size=144 callers=1 calls=0
*/
void sub_10f7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7b90ULL || rel >= 0x10f7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7c20 size=16 callers=0 calls=0
*/
void sub_10f7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7c20ULL || rel >= 0x10f7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7c30 size=16 callers=0 calls=0
*/
void sub_10f7c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7c30ULL || rel >= 0x10f7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7c40 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_10f7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7c40ULL || rel >= 0x10f7c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7c90 size=96 callers=0 calls=0
*/
void sub_10f7c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7c90ULL || rel >= 0x10f7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7cf0 size=352 callers=0 calls=0
*/
void sub_10f7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7cf0ULL || rel >= 0x10f7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7e50 size=16 callers=0 calls=0
*/
void sub_10f7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7e50ULL || rel >= 0x10f7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7e60 size=16 callers=0 calls=0
*/
void sub_10f7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7e60ULL || rel >= 0x10f7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7e70 size=112 callers=0 calls=0
*/
void sub_10f7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7e70ULL || rel >= 0x10f7ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7ee0 size=16 callers=0 calls=0
*/
void sub_10f7ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7ee0ULL || rel >= 0x10f7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7ef0 size=112 callers=0 calls=0
*/
void sub_10f7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7ef0ULL || rel >= 0x10f7f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f7f60 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10f7f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f7f60ULL || rel >= 0x10f80b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f80b0 size=256 callers=2 calls=3
   calls: sub_106b6b0, sub_106dec0, sub_10f81b0
*/
void sub_10f80b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f80b0ULL || rel >= 0x10f81b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f81b0 size=256 callers=1 calls=2
   calls: sub_106fd60, sub_1076270
*/
void sub_10f81b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f81b0ULL || rel >= 0x10f82b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f82b0 size=624 callers=1 calls=6
   calls: sub_10482f0, sub_106b660, sub_106dd10, sub_106e890, sub_106f1c0, sub_106fc70
*/
void sub_10f82b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f82b0ULL || rel >= 0x10f8520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8520 size=272 callers=1 calls=3
   calls: sub_106b6b0, sub_106fd60, sub_10f8630
*/
void sub_10f8520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8520ULL || rel >= 0x10f8630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8630 size=272 callers=1 calls=3
   calls: sub_106eb70, sub_106f400, sub_10f8740
*/
void sub_10f8630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8630ULL || rel >= 0x10f8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8740 size=256 callers=1 calls=2
   calls: sub_10485f0, sub_106db30
*/
void sub_10f8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8740ULL || rel >= 0x10f8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8840 size=128 callers=0 calls=0
*/
void sub_10f8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8840ULL || rel >= 0x10f88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f88c0 size=128 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10f88c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f88c0ULL || rel >= 0x10f8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8940 size=192 callers=0 calls=4
   calls: sub_1062ad0, sub_1062cc0, sub_15b9390, sub_b07bb0
*/
void sub_10f8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8940ULL || rel >= 0x10f8a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8a00 size=192 callers=0 calls=4
   calls: sub_1062ad0, sub_1062cc0, sub_15b9390, sub_b07bb0
*/
void sub_10f8a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8a00ULL || rel >= 0x10f8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8ac0 size=32 callers=0 calls=0
*/
void sub_10f8ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8ac0ULL || rel >= 0x10f8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8ae0 size=800 callers=0 calls=16
   calls: sub_10631b0, sub_10633b0, sub_1064e60, sub_106b5a0, sub_106dc40, sub_106deb0, sub_106f8b0, sub_10759b0, sub_1075ee0, sub_1076130, sub_1076260, sub_10f9c50
   ... +4 more
*/
void sub_10f8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8ae0ULL || rel >= 0x10f8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8e00 size=16 callers=0 calls=0
*/
void sub_10f8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8e00ULL || rel >= 0x10f8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8e10 size=144 callers=0 calls=0
*/
void sub_10f8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8e10ULL || rel >= 0x10f8ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8ea0 size=144 callers=0 calls=0
*/
void sub_10f8ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8ea0ULL || rel >= 0x10f8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f8f30 size=240 callers=0 calls=0
*/
void sub_10f8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f8f30ULL || rel >= 0x10f9020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9020 size=144 callers=0 calls=0
*/
void sub_10f9020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9020ULL || rel >= 0x10f90b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f90b0 size=144 callers=0 calls=0
*/
void sub_10f90b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f90b0ULL || rel >= 0x10f9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9140 size=16 callers=0 calls=0
*/
void sub_10f9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9140ULL || rel >= 0x10f9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9150 size=16 callers=0 calls=0
*/
void sub_10f9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9150ULL || rel >= 0x10f9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9160 size=144 callers=0 calls=0
*/
void sub_10f9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9160ULL || rel >= 0x10f91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f91f0 size=144 callers=0 calls=0
*/
void sub_10f91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f91f0ULL || rel >= 0x10f9280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9280 size=16 callers=0 calls=0
*/
void sub_10f9280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9280ULL || rel >= 0x10f9290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9290 size=16 callers=0 calls=0
*/
void sub_10f9290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9290ULL || rel >= 0x10f92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f92a0 size=16 callers=0 calls=0
*/
void sub_10f92a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f92a0ULL || rel >= 0x10f92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f92b0 size=16 callers=0 calls=0
*/
void sub_10f92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f92b0ULL || rel >= 0x10f92c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f92c0 size=16 callers=0 calls=0
*/
void sub_10f92c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f92c0ULL || rel >= 0x10f92d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f92d0 size=128 callers=0 calls=0
*/
void sub_10f92d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f92d0ULL || rel >= 0x10f9350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9350 size=16 callers=0 calls=0
*/
void sub_10f9350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9350ULL || rel >= 0x10f9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9360 size=16 callers=0 calls=0
*/
void sub_10f9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9360ULL || rel >= 0x10f9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9370 size=16 callers=0 calls=0
*/
void sub_10f9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9370ULL || rel >= 0x10f9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9380 size=128 callers=0 calls=0
*/
void sub_10f9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9380ULL || rel >= 0x10f9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9400 size=448 callers=1 calls=1
   calls: sub_e4afa0
*/
void sub_10f9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9400ULL || rel >= 0x10f95c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f95c0 size=64 callers=0 calls=0
*/
void sub_10f95c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f95c0ULL || rel >= 0x10f9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9600 size=1616 callers=0 calls=13
   calls: sub_10466c0, sub_1047180, sub_10633b0, sub_106b5a0, sub_106dc40, sub_106dea0, sub_106deb0, sub_106f8b0, sub_10759b0, sub_1075ee0, sub_1076130, sub_1076260
   ... +1 more
*/
void sub_10f9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9600ULL || rel >= 0x10f9c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010f9c50 size=1104 callers=2 calls=3
   calls: sub_1048890, sub_106deb0, sub_6bb230
*/
void sub_10f9c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f9c50ULL || rel >= 0x10fa0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fa0a0 size=432 callers=0 calls=0
*/
void sub_10fa0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa0a0ULL || rel >= 0x10fa250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fa250 size=16 callers=0 calls=0
*/
void sub_10fa250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa250ULL || rel >= 0x10fa260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fa260 size=16 callers=0 calls=0
*/
void sub_10fa260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa260ULL || rel >= 0x10fa270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fa270 size=16 callers=0 calls=0
*/
void sub_10fa270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa270ULL || rel >= 0x10fa280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fa280 size=752 callers=1 calls=1
   calls: sub_e53140
*/
void sub_10fa280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa280ULL || rel >= 0x10fa570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fa570 size=128 callers=0 calls=0
*/
void sub_10fa570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa570ULL || rel >= 0x10fa5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fa5f0 size=352 callers=1 calls=0
*/
void sub_10fa5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa5f0ULL || rel >= 0x10fa750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fa750 size=464 callers=0 calls=0
*/
void sub_10fa750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa750ULL || rel >= 0x10fa920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fa920 size=304 callers=1 calls=3
   calls: InstanceTable_4, sub_10fd570, sub_10fd680
*/
void sub_10fa920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fa920ULL || rel >= 0x10faa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010faa50 size=80 callers=1 calls=2
   calls: sub_10faaa0, sub_6a0d40
*/
void sub_10faa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10faa50ULL || rel >= 0x10faaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010faaa0 size=528 callers=1 calls=5
   calls: sub_10fe910, sub_163ece0, sub_164c460, sub_6a4d30, sub_6a4d50
*/
void sub_10faaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10faaa0ULL || rel >= 0x10facb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010facb0 size=128 callers=1 calls=2
   calls: sub_10ff510, sub_10ff520
*/
void sub_10facb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10facb0ULL || rel >= 0x10fad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fad30 size=16 callers=3 calls=0
*/
void sub_10fad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fad30ULL || rel >= 0x10fad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fad40 size=16 callers=0 calls=0
*/
void sub_10fad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fad40ULL || rel >= 0x10fad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fad50 size=96 callers=1 calls=0
*/
void sub_10fad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fad50ULL || rel >= 0x10fadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fadb0 size=96 callers=1 calls=0
*/
void sub_10fadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fadb0ULL || rel >= 0x10fae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fae10 size=64 callers=1 calls=0
*/
void sub_10fae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fae10ULL || rel >= 0x10fae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fae50 size=112 callers=1 calls=0
*/
void sub_10fae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fae50ULL || rel >= 0x10faec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010faec0 size=1376 callers=1 calls=17
   calls: sub_1062cc0, sub_10fb420, sub_10fb680, sub_10fb8d0, sub_10ff520, sub_10ff800, sub_15b9340, sub_15b9390, sub_15ca0c0, sub_15caa30, sub_15cf190, sub_15cf3c0
   ... +5 more
*/
void sub_10faec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10faec0ULL || rel >= 0x10fb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fb420 size=608 callers=1 calls=5
   calls: sub_65c700, sub_6c1ce0, sub_6c1f00, sub_6c1f40, sub_6c2b60
*/
void sub_10fb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fb420ULL || rel >= 0x10fb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fb680 size=576 callers=6 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_10fb680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fb680ULL || rel >= 0x10fb8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fb8c0 size=16 callers=0 calls=0
*/
void sub_10fb8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fb8c0ULL || rel >= 0x10fb8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fb8d0 size=224 callers=7 calls=1
   calls: sub_10fe660
*/
void sub_10fb8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fb8d0ULL || rel >= 0x10fb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fb9b0 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_10fb9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fb9b0ULL || rel >= 0x10fb9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fb9f0 size=864 callers=1 calls=8
   calls: sub_10fb8d0, sub_10fbd50, sub_10ff520, sub_15b9340, sub_15b9390, sub_15ca0c0, sub_15caa30, sub_6a3f40
*/
void sub_10fb9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fb9f0ULL || rel >= 0x10fbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fbd50 size=1184 callers=2 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_10fbd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fbd50ULL || rel >= 0x10fc1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fc1f0 size=800 callers=0 calls=7
   calls: sub_10fb8d0, sub_10ff520, sub_15b9340, sub_15b9390, sub_15ca0c0, sub_15caa30, sub_6a3f40
*/
void sub_10fc1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fc1f0ULL || rel >= 0x10fc510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fc510 size=816 callers=0 calls=7
   calls: sub_10fb8d0, sub_10ff520, sub_15b9340, sub_15b9390, sub_15ca0c0, sub_15caa30, sub_6a3f40
*/
void sub_10fc510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fc510ULL || rel >= 0x10fc840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fc840 size=112 callers=2 calls=0
*/
void sub_10fc840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fc840ULL || rel >= 0x10fc8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fc8b0 size=816 callers=1 calls=10
   calls: sub_10fb8d0, sub_10fcbe0, sub_10ff520, sub_15b9340, sub_15b9390, sub_15ca0c0, sub_15caa30, sub_15cf3c0, sub_1638210, sub_6a3f40
*/
void sub_10fc8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fc8b0ULL || rel >= 0x10fcbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fcbe0 size=368 callers=2 calls=9
   calls: sub_10633b0, sub_10fb680, sub_10fde10, sub_15b9340, sub_15b9390, sub_15cf190, sub_15cf460, sub_15cf570, sub_162fa40
*/
void sub_10fcbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fcbe0ULL || rel >= 0x10fcd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fcd50 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_10fcd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fcd50ULL || rel >= 0x10fcd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fcd90 size=112 callers=1 calls=0
*/
void sub_10fcd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fcd90ULL || rel >= 0x10fce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fce00 size=928 callers=1 calls=10
   calls: sub_10fb8d0, sub_10fcbe0, sub_10ff520, sub_15b9340, sub_15b9390, sub_15ca0c0, sub_15caa30, sub_15cf3c0, sub_1638210, sub_6a3f40
*/
void sub_10fce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fce00ULL || rel >= 0x10fd1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fd1a0 size=112 callers=1 calls=0
*/
void sub_10fd1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fd1a0ULL || rel >= 0x10fd210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fd210 size=864 callers=1 calls=9
   calls: sub_10fb8d0, sub_10fbd50, sub_10ff520, sub_10ffc00, sub_15b9340, sub_15b9390, sub_15ca0c0, sub_15caa30, sub_6a3f40
*/
void sub_10fd210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fd210ULL || rel >= 0x10fd570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fd570 size=272 callers=1 calls=2
   calls: sub_163ecf0, sub_6a4d50
*/
void sub_10fd570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fd570ULL || rel >= 0x10fd680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fd680 size=496 callers=2 calls=1
   calls: sub_10ff520
*/
void sub_10fd680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fd680ULL || rel >= 0x10fd870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fd870 size=96 callers=0 calls=0
*/
void sub_10fd870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fd870ULL || rel >= 0x10fd8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fd8d0 size=48 callers=1 calls=0
*/
void sub_10fd8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fd8d0ULL || rel >= 0x10fd900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fd900 size=64 callers=1 calls=0
*/
void sub_10fd900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fd900ULL || rel >= 0x10fd940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fd940 size=96 callers=0 calls=0
*/
void sub_10fd940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fd940ULL || rel >= 0x10fd9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fd9a0 size=48 callers=1 calls=0
*/
void sub_10fd9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fd9a0ULL || rel >= 0x10fd9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fd9d0 size=96 callers=0 calls=0
*/
void sub_10fd9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fd9d0ULL || rel >= 0x10fda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fda30 size=48 callers=1 calls=0
*/
void sub_10fda30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fda30ULL || rel >= 0x10fda60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fda60 size=96 callers=0 calls=0
*/
void sub_10fda60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fda60ULL || rel >= 0x10fdac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fdac0 size=48 callers=1 calls=0
*/
void sub_10fdac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fdac0ULL || rel >= 0x10fdaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fdaf0 size=464 callers=0 calls=0
*/
void sub_10fdaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fdaf0ULL || rel >= 0x10fdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fdcc0 size=16 callers=0 calls=0
*/
void sub_10fdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fdcc0ULL || rel >= 0x10fdcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fdcd0 size=16 callers=0 calls=0
*/
void sub_10fdcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fdcd0ULL || rel >= 0x10fdce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fdce0 size=112 callers=0 calls=0
*/
void sub_10fdce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fdce0ULL || rel >= 0x10fdd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fdd50 size=16 callers=0 calls=0
*/
void sub_10fdd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fdd50ULL || rel >= 0x10fdd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fdd60 size=112 callers=0 calls=0
*/
void sub_10fdd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fdd60ULL || rel >= 0x10fddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fddd0 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_1638210
*/
void sub_10fddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fddd0ULL || rel >= 0x10fde10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fde10 size=624 callers=1 calls=5
   calls: sub_65c700, sub_6c1ce0, sub_6c1f00, sub_6c1f40, sub_6c2b60
*/
void sub_10fde10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fde10ULL || rel >= 0x10fe080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe080 size=16 callers=0 calls=0
*/
void sub_10fe080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe080ULL || rel >= 0x10fe090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe090 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_1638210
*/
void sub_10fe090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe090ULL || rel >= 0x10fe0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe0d0 size=16 callers=0 calls=0
*/
void sub_10fe0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe0d0ULL || rel >= 0x10fe0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe0e0 size=16 callers=0 calls=0
*/
void sub_10fe0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe0e0ULL || rel >= 0x10fe0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe0f0 size=16 callers=0 calls=0
*/
void sub_10fe0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe0f0ULL || rel >= 0x10fe100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe100 size=48 callers=0 calls=0
*/
void sub_10fe100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe100ULL || rel >= 0x10fe130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe130 size=80 callers=0 calls=0
*/
void sub_10fe130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe130ULL || rel >= 0x10fe180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe180 size=16 callers=0 calls=0
*/
void sub_10fe180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe180ULL || rel >= 0x10fe190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe190 size=32 callers=0 calls=0
*/
void sub_10fe190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe190ULL || rel >= 0x10fe1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe1b0 size=32 callers=0 calls=0
*/
void sub_10fe1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe1b0ULL || rel >= 0x10fe1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe1d0 size=16 callers=0 calls=0
*/
void sub_10fe1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe1d0ULL || rel >= 0x10fe1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe1e0 size=48 callers=0 calls=0
*/
void sub_10fe1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe1e0ULL || rel >= 0x10fe210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe210 size=80 callers=0 calls=1
   calls: sub_10ff940
*/
void sub_10fe210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe210ULL || rel >= 0x10fe260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe260 size=16 callers=0 calls=0
*/
void sub_10fe260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe260ULL || rel >= 0x10fe270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe270 size=32 callers=0 calls=0
*/
void sub_10fe270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe270ULL || rel >= 0x10fe290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe290 size=32 callers=0 calls=0
*/
void sub_10fe290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe290ULL || rel >= 0x10fe2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe2b0 size=64 callers=0 calls=1
   calls: sub_10ff940
*/
void sub_10fe2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe2b0ULL || rel >= 0x10fe2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe2f0 size=16 callers=0 calls=0
*/
void sub_10fe2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe2f0ULL || rel >= 0x10fe300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe300 size=16 callers=0 calls=0
*/
void sub_10fe300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe300ULL || rel >= 0x10fe310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe310 size=16 callers=0 calls=0
*/
void sub_10fe310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe310ULL || rel >= 0x10fe320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe320 size=16 callers=0 calls=0
*/
void sub_10fe320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe320ULL || rel >= 0x10fe330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe330 size=48 callers=0 calls=0
*/
void sub_10fe330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe330ULL || rel >= 0x10fe360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe360 size=112 callers=0 calls=1
   calls: sub_10ff9c0
*/
void sub_10fe360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe360ULL || rel >= 0x10fe3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe3d0 size=16 callers=0 calls=0
*/
void sub_10fe3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe3d0ULL || rel >= 0x10fe3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe3e0 size=32 callers=0 calls=0
*/
void sub_10fe3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe3e0ULL || rel >= 0x10fe400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe400 size=32 callers=0 calls=0
*/
void sub_10fe400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe400ULL || rel >= 0x10fe420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe420 size=16 callers=0 calls=0
*/
void sub_10fe420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe420ULL || rel >= 0x10fe430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe430 size=48 callers=0 calls=0
*/
void sub_10fe430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe430ULL || rel >= 0x10fe460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe460 size=16 callers=0 calls=0
*/
void sub_10fe460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe460ULL || rel >= 0x10fe470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe470 size=16 callers=0 calls=0
*/
void sub_10fe470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe470ULL || rel >= 0x10fe480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe480 size=16 callers=0 calls=0
*/
void sub_10fe480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe480ULL || rel >= 0x10fe490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe490 size=16 callers=0 calls=0
*/
void sub_10fe490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe490ULL || rel >= 0x10fe4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe4a0 size=16 callers=0 calls=0
*/
void sub_10fe4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe4a0ULL || rel >= 0x10fe4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe4b0 size=48 callers=0 calls=0
*/
void sub_10fe4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe4b0ULL || rel >= 0x10fe4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe4e0 size=80 callers=0 calls=1
   calls: sub_10ffb10
*/
void sub_10fe4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe4e0ULL || rel >= 0x10fe530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe530 size=16 callers=0 calls=0
*/
void sub_10fe530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe530ULL || rel >= 0x10fe540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe540 size=32 callers=0 calls=0
*/
void sub_10fe540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe540ULL || rel >= 0x10fe560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe560 size=32 callers=0 calls=0
*/
void sub_10fe560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe560ULL || rel >= 0x10fe580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe580 size=16 callers=0 calls=0
*/
void sub_10fe580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe580ULL || rel >= 0x10fe590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe590 size=48 callers=0 calls=0
*/
void sub_10fe590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe590ULL || rel >= 0x10fe5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe5c0 size=80 callers=0 calls=1
   calls: sub_10ffcf0
*/
void sub_10fe5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe5c0ULL || rel >= 0x10fe610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe610 size=16 callers=0 calls=0
*/
void sub_10fe610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe610ULL || rel >= 0x10fe620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe620 size=32 callers=0 calls=0
*/
void sub_10fe620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe620ULL || rel >= 0x10fe640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe640 size=32 callers=0 calls=0
*/
void sub_10fe640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe640ULL || rel >= 0x10fe660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe660 size=560 callers=1 calls=0
*/
void sub_10fe660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe660ULL || rel >= 0x10fe890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe890 size=128 callers=0 calls=0
*/
void sub_10fe890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe890ULL || rel >= 0x10fe910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fe910 size=272 callers=1 calls=0
*/
void sub_10fe910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fe910ULL || rel >= 0x10fea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fea20 size=320 callers=0 calls=4
   calls: sub_10fee40, sub_15b8dc0, sub_15b9340, sub_6a5230
   ref: c:/projects/env/NintendoSDK/NintendoSDK/../NintendoSDK-Pia/../NintendoSDK-NEX//Include\OnlineCore/sr
*/
void InstanceTable_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fea20ULL || rel >= 0x10feb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010feb60 size=368 callers=1 calls=3
   calls: sub_15b8dc0, sub_15b9390, sub_6a5230
   ref: c:/projects/env/NintendoSDK/NintendoSDK/../NintendoSDK-Pia/../NintendoSDK-NEX//Include\OnlineCore/sr
*/
void InstanceTable_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10feb60ULL || rel >= 0x10fecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fecd0 size=320 callers=1 calls=1
   calls: sub_15b9390
*/
void sub_10fecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fecd0ULL || rel >= 0x10fee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fee10 size=48 callers=0 calls=1
   calls: sub_10fecd0
*/
void sub_10fee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fee10ULL || rel >= 0x10fee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

