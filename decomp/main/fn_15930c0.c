/* main functions 015930c0..015b2500 (184 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 015930c0 size=48 callers=0 calls=1
   calls: sub_1589070
*/
void sub_15930c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15930c0ULL || rel >= 0x15930f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015930f0 size=16 callers=0 calls=0
*/
void sub_15930f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15930f0ULL || rel >= 0x1593100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593100 size=16 callers=0 calls=0
*/
void sub_1593100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593100ULL || rel >= 0x1593110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593110 size=16 callers=0 calls=0
*/
void sub_1593110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593110ULL || rel >= 0x1593120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593120 size=832 callers=2 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_1593120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593120ULL || rel >= 0x1593460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593460 size=48 callers=0 calls=1
   calls: sub_1593490
*/
void sub_1593460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593460ULL || rel >= 0x1593490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593490 size=272 callers=5 calls=2
   calls: sub_15b9390, sub_15cf3c0
*/
void sub_1593490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593490ULL || rel >= 0x15935a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015935a0 size=48 callers=0 calls=1
   calls: sub_1593490
*/
void sub_15935a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15935a0ULL || rel >= 0x15935d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015935d0 size=672 callers=2 calls=4
   calls: sub_158b890, sub_1593880, sub_15b9340, sub_15b9390
*/
void sub_15935d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15935d0ULL || rel >= 0x1593870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593870 size=16 callers=0 calls=0
*/
void sub_1593870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593870ULL || rel >= 0x1593880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593880 size=464 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_1593880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593880ULL || rel >= 0x1593a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593a50 size=832 callers=2 calls=5
   calls: sub_158b530, sub_1593d90, sub_1594030, sub_15b9340, sub_15b9390
*/
void sub_1593a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593a50ULL || rel >= 0x1593d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593d90 size=272 callers=1 calls=3
   calls: sub_1593ea0, sub_15b9340, sub_15b9390
*/
void sub_1593d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593d90ULL || rel >= 0x1593ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593ea0 size=400 callers=2 calls=1
   calls: sub_15b9340
*/
void sub_1593ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593ea0ULL || rel >= 0x1594030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01594030 size=592 callers=1 calls=3
   calls: sub_1593ea0, sub_15b9340, sub_15b9390
*/
void sub_1594030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1594030ULL || rel >= 0x1594280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01594280 size=416 callers=1 calls=3
   calls: sub_15913f0, sub_1594420, sub_1594550
*/
void sub_1594280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1594280ULL || rel >= 0x1594420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01594420 size=304 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_1594420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1594420ULL || rel >= 0x1594550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01594550 size=400 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_1594550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1594550ULL || rel >= 0x15946e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015946e0 size=16 callers=0 calls=0
*/
void sub_15946e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15946e0ULL || rel >= 0x15946f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015946f0 size=16 callers=0 calls=0
*/
void sub_15946f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15946f0ULL || rel >= 0x1594700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01594700 size=16 callers=0 calls=0
*/
void sub_1594700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1594700ULL || rel >= 0x1594710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01594710 size=672 callers=2 calls=4
   calls: sub_158b6f0, sub_15949c0, sub_15b9340, sub_15b9390
*/
void sub_1594710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1594710ULL || rel >= 0x15949b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015949b0 size=16 callers=0 calls=0
*/
void sub_15949b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15949b0ULL || rel >= 0x15949c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015949c0 size=464 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_15949c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15949c0ULL || rel >= 0x1594b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01594b90 size=416 callers=1 calls=3
   calls: sub_15911b0, sub_1594d30, sub_1594e80
*/
void sub_1594b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1594b90ULL || rel >= 0x1594d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01594d30 size=336 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_1594d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1594d30ULL || rel >= 0x1594e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01594e80 size=416 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_1594e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1594e80ULL || rel >= 0x1595020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01595020 size=16 callers=0 calls=0
*/
void sub_1595020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1595020ULL || rel >= 0x1595030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01595030 size=640 callers=2 calls=4
   calls: sub_158bf20, sub_15952b0, sub_15b9340, sub_15b9390
*/
void sub_1595030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1595030ULL || rel >= 0x15952b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015952b0 size=384 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_15952b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15952b0ULL || rel >= 0x1595430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01595430 size=16 callers=0 calls=0
*/
void sub_1595430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1595430ULL || rel >= 0x1595440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01595440 size=640 callers=2 calls=4
   calls: sub_158ba20, sub_15956c0, sub_15b9340, sub_15b9390
*/
void sub_1595440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1595440ULL || rel >= 0x15956c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015956c0 size=384 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_15956c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15956c0ULL || rel >= 0x1595840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01595840 size=640 callers=4 calls=4
   calls: sub_158ed50, sub_1595ac0, sub_15b9340, sub_15b9390
*/
void sub_1595840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1595840ULL || rel >= 0x1595ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01595ac0 size=384 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_1595ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1595ac0ULL || rel >= 0x1595c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01595c40 size=912 callers=2 calls=6
   calls: sub_158f850, sub_1595fd0, sub_1596200, sub_15b9340, sub_15b9390, sub_15bc310
*/
void sub_1595c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1595c40ULL || rel >= 0x1595fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01595fd0 size=240 callers=4 calls=3
   calls: sub_15960c0, sub_15b9340, sub_15bc1e0
*/
void sub_1595fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1595fd0ULL || rel >= 0x15960c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015960c0 size=320 callers=1 calls=2
   calls: sub_15b9340, sub_15bc1e0
*/
void sub_15960c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15960c0ULL || rel >= 0x1596200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596200 size=400 callers=1 calls=2
   calls: sub_1595fd0, sub_15b9340
*/
void sub_1596200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596200ULL || rel >= 0x1596390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596390 size=512 callers=2 calls=7
   calls: sub_1591730, sub_1596590, sub_1596730, sub_15cf190, sub_15cf230, sub_15cf3c0, sub_15cf460
*/
void sub_1596390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596390ULL || rel >= 0x1596590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596590 size=416 callers=1 calls=2
   calls: sub_15b9340, sub_15cf230
*/
void sub_1596590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596590ULL || rel >= 0x1596730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596730 size=496 callers=1 calls=2
   calls: sub_15b9340, sub_15cf230
*/
void sub_1596730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596730ULL || rel >= 0x1596920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596920 size=208 callers=2 calls=2
   calls: sub_15b9390, sub_15cf3c0
*/
void sub_1596920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596920ULL || rel >= 0x15969f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015969f0 size=48 callers=0 calls=1
   calls: sub_1596920
*/
void sub_15969f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15969f0ULL || rel >= 0x1596a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596a20 size=48 callers=0 calls=1
   calls: sub_1596920
*/
void sub_1596a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596a20ULL || rel >= 0x1596a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596a50 size=816 callers=2 calls=3
   calls: sub_15b9340, sub_15bc1e0, sub_15cf230
*/
void sub_1596a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596a50ULL || rel >= 0x1596d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596d80 size=48 callers=0 calls=1
   calls: sub_1596db0
*/
void sub_1596d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596d80ULL || rel >= 0x1596db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596db0 size=208 callers=2 calls=3
   calls: sub_1596eb0, sub_15b9390, sub_15cf3c0
*/
void sub_1596db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596db0ULL || rel >= 0x1596e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596e80 size=48 callers=0 calls=1
   calls: sub_1596db0
*/
void sub_1596e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596e80ULL || rel >= 0x1596eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596eb0 size=208 callers=3 calls=2
   calls: sub_15b9390, sub_15cf3c0
*/
void sub_1596eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596eb0ULL || rel >= 0x1596f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596f80 size=48 callers=0 calls=1
   calls: sub_1596eb0
*/
void sub_1596f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596f80ULL || rel >= 0x1596fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596fb0 size=48 callers=0 calls=1
   calls: sub_1596eb0
*/
void sub_1596fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596fb0ULL || rel >= 0x1596fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01596fe0 size=912 callers=2 calls=4
   calls: sub_1597370, sub_15b9340, sub_15bc1e0, sub_15cf230
*/
void sub_1596fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1596fe0ULL || rel >= 0x1597370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01597370 size=832 callers=1 calls=3
   calls: sub_15b9340, sub_15bc1e0, sub_15cf230
*/
void sub_1597370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1597370ULL || rel >= 0x15976b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015976b0 size=1024 callers=4 calls=4
   calls: sub_1597ab0, sub_15b9340, sub_15bc1e0, sub_15cf230
*/
void sub_15976b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15976b0ULL || rel >= 0x1597ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01597ab0 size=304 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_1597ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1597ab0ULL || rel >= 0x1597be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01597be0 size=768 callers=2 calls=4
   calls: sub_15b9340, sub_15b9390, sub_15bab00, sub_15bc1e0
*/
void sub_1597be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1597be0ULL || rel >= 0x1597ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01597ee0 size=1136 callers=4 calls=4
   calls: sub_15b7a80, sub_15b9340, sub_15bc1e0, sub_15cf230
*/
void sub_1597ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1597ee0ULL || rel >= 0x1598350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01598350 size=416 callers=1 calls=2
   calls: sub_1597ee0, sub_15b9340
*/
void sub_1598350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1598350ULL || rel >= 0x15984f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015984f0 size=432 callers=5 calls=2
   calls: sub_15976b0, sub_15b9340
*/
void sub_15984f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15984f0ULL || rel >= 0x15986a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015986a0 size=464 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_15986a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15986a0ULL || rel >= 0x1598870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01598870 size=432 callers=1 calls=2
   calls: sub_1596fe0, sub_15b9340
*/
void sub_1598870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1598870ULL || rel >= 0x1598a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01598a20 size=416 callers=1 calls=2
   calls: sub_1596a50, sub_15b9340
*/
void sub_1598a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1598a20ULL || rel >= 0x1598bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01598bc0 size=368 callers=2 calls=1
   calls: sub_15b9340
*/
void sub_1598bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1598bc0ULL || rel >= 0x1598d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01598d30 size=608 callers=1 calls=3
   calls: sub_15ac280, sub_15b9340, sub_15bc1e0
*/
void sub_1598d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1598d30ULL || rel >= 0x1598f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01598f90 size=352 callers=1 calls=3
   calls: sub_15990f0, sub_15b9340, sub_6a8500
*/
void sub_1598f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1598f90ULL || rel >= 0x15990f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015990f0 size=368 callers=3 calls=3
   calls: sub_1599260, sub_15b9340, sub_6a54a0
*/
void sub_15990f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15990f0ULL || rel >= 0x1599260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599260 size=496 callers=1 calls=0
*/
void sub_1599260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599260ULL || rel >= 0x1599450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599450 size=16 callers=0 calls=0
*/
void sub_1599450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599450ULL || rel >= 0x1599460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599460 size=16 callers=0 calls=0
*/
void sub_1599460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599460ULL || rel >= 0x1599470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599470 size=64 callers=0 calls=0
*/
void sub_1599470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599470ULL || rel >= 0x15994b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015994b0 size=16 callers=0 calls=0
*/
void sub_15994b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15994b0ULL || rel >= 0x15994c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015994c0 size=16 callers=0 calls=0
*/
void sub_15994c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15994c0ULL || rel >= 0x15994d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015994d0 size=16 callers=0 calls=0
*/
void sub_15994d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15994d0ULL || rel >= 0x15994e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015994e0 size=16 callers=0 calls=0
*/
void sub_15994e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15994e0ULL || rel >= 0x15994f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015994f0 size=64 callers=0 calls=0
*/
void sub_15994f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15994f0ULL || rel >= 0x1599530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599530 size=16 callers=0 calls=0
*/
void sub_1599530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599530ULL || rel >= 0x1599540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599540 size=16 callers=0 calls=0
*/
void sub_1599540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599540ULL || rel >= 0x1599550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599550 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_1599550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599550ULL || rel >= 0x15995d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015995d0 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_15995d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15995d0ULL || rel >= 0x15996e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015996e0 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15996e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15996e0ULL || rel >= 0x1599770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599770 size=32 callers=0 calls=0
*/
void sub_1599770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599770ULL || rel >= 0x1599790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599790 size=16 callers=0 calls=0
*/
void sub_1599790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599790ULL || rel >= 0x15997a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015997a0 size=16 callers=0 calls=0
*/
void sub_15997a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15997a0ULL || rel >= 0x15997b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015997b0 size=144 callers=0 calls=0
*/
void sub_15997b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15997b0ULL || rel >= 0x1599840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599840 size=352 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_1599840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599840ULL || rel >= 0x15999a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015999a0 size=464 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_15999a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15999a0ULL || rel >= 0x1599b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599b70 size=480 callers=1 calls=2
   calls: sub_15b9340, sub_15bc1e0
*/
void sub_1599b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599b70ULL || rel >= 0x1599d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599d50 size=624 callers=1 calls=2
   calls: sub_15b9340, sub_15bc1e0
*/
void sub_1599d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599d50ULL || rel >= 0x1599fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01599fc0 size=368 callers=0 calls=5
   calls: sub_15b7a90, sub_15cee20, sub_15cef80, sub_162ce30, sub_1c0
*/
void sub_1599fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1599fc0ULL || rel >= 0x159a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159a130 size=640 callers=1 calls=12
   calls: Result_2, sub_1570900, sub_15b6dc0, sub_15b8dc0, sub_15bb6c0, sub_15bbd10, sub_15bc1e0, sub_15e8d50, sub_162fa40, sub_163f4a0, sub_1647c30, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_135(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159a130ULL || rel >= 0x159a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159a3b0 size=16 callers=0 calls=0
*/
void sub_159a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159a3b0ULL || rel >= 0x159a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159a3c0 size=672 callers=1 calls=7
   calls: CallContext_2, InstanceTable_205, Result_2, sub_15bc310, sub_15c5ee0, sub_163da10, sub_163dda0
*/
void sub_159a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159a3c0ULL || rel >= 0x159a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159a660 size=48 callers=0 calls=1
   calls: sub_159a3c0
*/
void sub_159a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159a660ULL || rel >= 0x159a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159a690 size=1648 callers=1 calls=19
   calls: InstanceTable_137, InstanceTable_201, Result_2, sub_15b6dc0, sub_15b8d60, sub_15b8dc0, sub_15bb6c0, sub_15bbd10, sub_15c5460, sub_15cbfc0, sub_15cc060, sub_15cc1c0
   ... +7 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_136(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159a690ULL || rel >= 0x159ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159ad00 size=64 callers=1 calls=1
   calls: InstanceTable_136
*/
void sub_159ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159ad00ULL || rel >= 0x159ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159ad40 size=240 callers=1 calls=7
   calls: sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15d85b0, sub_15d8620, sub_163e120, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_137(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159ad40ULL || rel >= 0x159ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159ae30 size=128 callers=1 calls=2
   calls: Result_2, sub_1647dc0
*/
void sub_159ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159ae30ULL || rel >= 0x159aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159aeb0 size=128 callers=2 calls=3
   calls: InstanceTable_207, Result_2, sub_163e430
*/
void sub_159aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159aeb0ULL || rel >= 0x159af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159af30 size=176 callers=1 calls=2
   calls: Result_2, sub_15b87a0
   ref: 2%03d%04d
*/
void f_2_03d_04d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159af30ULL || rel >= 0x159afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159afe0 size=96 callers=1 calls=2
   calls: Result_2, sub_15bbd30
*/
void sub_159afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159afe0ULL || rel >= 0x159b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b040 size=912 callers=0 calls=8
   calls: InstanceTable_201, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_15cbfc0, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_138(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b040ULL || rel >= 0x159b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b3d0 size=16 callers=0 calls=0
*/
void sub_159b3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b3d0ULL || rel >= 0x159b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b3e0 size=32 callers=0 calls=0
*/
void sub_159b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b3e0ULL || rel >= 0x159b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b400 size=16 callers=0 calls=0
*/
void sub_159b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b400ULL || rel >= 0x159b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b410 size=16 callers=0 calls=0
*/
void sub_159b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b410ULL || rel >= 0x159b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b420 size=96 callers=0 calls=1
   calls: sub_163e430
*/
void sub_159b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b420ULL || rel >= 0x159b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b480 size=96 callers=0 calls=1
   calls: sub_163e430
*/
void sub_159b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b480ULL || rel >= 0x159b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b4e0 size=16 callers=0 calls=0
*/
void sub_159b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b4e0ULL || rel >= 0x159b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b4f0 size=144 callers=0 calls=2
   calls: InstanceTable_363, sub_15bc310
*/
void sub_159b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b4f0ULL || rel >= 0x159b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b580 size=144 callers=0 calls=3
   calls: InstanceTable_363, sub_15bc310, sub_15cc040
*/
void sub_159b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b580ULL || rel >= 0x159b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b610 size=336 callers=6 calls=6
   calls: InstanceTable_208, sub_15b8dc0, sub_15bbd10, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_139(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b610ULL || rel >= 0x159b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b760 size=144 callers=0 calls=3
   calls: InstanceTable_363, sub_15bc310, sub_15cc040
*/
void sub_159b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b760ULL || rel >= 0x159b7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159b7f0 size=560 callers=0 calls=14
   calls: CallContext, InstanceTable_139, Result_2, f_016llx, sub_15b6dc0, sub_15bab00, sub_15bb6c0, sub_15bc1e0, sub_15bc310, sub_15bd810, sub_15bd850, sub_15cc060
   ... +2 more
*/
void sub_159b7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b7f0ULL || rel >= 0x159ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159ba20 size=272 callers=0 calls=5
   calls: InstanceTable_139, sub_15b8dc0, sub_15c5e40, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159ba20ULL || rel >= 0x159bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159bb30 size=304 callers=0 calls=7
   calls: InstanceTable_208, Result_2, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_141(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159bb30ULL || rel >= 0x159bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159bc60 size=64 callers=0 calls=1
   calls: InstanceTable_205
*/
void sub_159bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159bc60ULL || rel >= 0x159bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159bca0 size=64 callers=0 calls=2
   calls: InstanceTable_205, sub_15cc040
*/
void sub_159bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159bca0ULL || rel >= 0x159bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159bce0 size=176 callers=0 calls=3
   calls: InstanceTable_363, sub_15bc310, sub_15cc230
*/
void sub_159bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159bce0ULL || rel >= 0x159bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159bd90 size=192 callers=0 calls=4
   calls: InstanceTable_363, sub_15bc310, sub_15cc040, sub_15cc230
*/
void sub_159bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159bd90ULL || rel >= 0x159be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159be50 size=336 callers=0 calls=10
   calls: CallContext, InstanceTable_143, sub_15b6dc0, sub_15b8d60, sub_15b8dc0, sub_15bead0, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_142(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159be50ULL || rel >= 0x159bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159bfa0 size=784 callers=0 calls=20
   calls: CallContext, Chrono, InstanceTable_139, Result_2, f_016llx, sub_15b6dc0, sub_15b74e0, sub_15b8d60, sub_15bab00, sub_15bb6c0, sub_15bc1e0, sub_15bc310
   ... +8 more
   ref: g%08x-%%.s.n.srv.nintendo.net
   ref: https://%s/
*/
void unnamed_67(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159bfa0ULL || rel >= 0x159c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c2b0 size=656 callers=1 calls=9
   calls: InstanceTable_145, InstanceTable_201, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_15cbfc0, sub_15cc1c0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_143(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c2b0ULL || rel >= 0x159c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c540 size=144 callers=0 calls=2
   calls: InstanceTable_139, sub_15cc060
*/
void sub_159c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c540ULL || rel >= 0x159c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c5d0 size=288 callers=0 calls=6
   calls: InstanceTable_139, sub_15b8dc0, sub_15c5e40, sub_15cc320, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_144(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c5d0ULL || rel >= 0x159c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c6f0 size=16 callers=0 calls=0
*/
void sub_159c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c6f0ULL || rel >= 0x159c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c700 size=16 callers=0 calls=0
*/
void sub_159c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c700ULL || rel >= 0x159c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c710 size=336 callers=1 calls=3
   calls: sub_15b8dc0, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_145(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c710ULL || rel >= 0x159c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c860 size=64 callers=0 calls=0
*/
void sub_159c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c860ULL || rel >= 0x159c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c8a0 size=80 callers=0 calls=0
*/
void sub_159c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c8a0ULL || rel >= 0x159c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c8f0 size=16 callers=0 calls=0
*/
void sub_159c8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c8f0ULL || rel >= 0x159c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c900 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_159c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c900ULL || rel >= 0x159c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c950 size=80 callers=0 calls=2
   calls: sub_15bc310, sub_1638210
*/
void sub_159c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c950ULL || rel >= 0x159c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c9a0 size=64 callers=0 calls=0
*/
void sub_159c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c9a0ULL || rel >= 0x159c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159c9e0 size=176 callers=1 calls=2
   calls: sub_15cc040, sub_15cc230
*/
void sub_159c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c9e0ULL || rel >= 0x159ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159ca90 size=48 callers=0 calls=1
   calls: sub_159c9e0
*/
void sub_159ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159ca90ULL || rel >= 0x159cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159cac0 size=336 callers=0 calls=8
   calls: Chrono, InstanceTable_147, Result_2, sub_15b8dc0, sub_15c5e40, sub_15cc060, sub_15cc220, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_146(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159cac0ULL || rel >= 0x159cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159cc10 size=320 callers=2 calls=5
   calls: InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_147(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159cc10ULL || rel >= 0x159cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159cd50 size=560 callers=0 calls=9
   calls: InstanceTable_147, Result_2, sub_15b8dc0, sub_15bb6c0, sub_15c5e40, sub_15cc060, sub_15cc320, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_148(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159cd50ULL || rel >= 0x159cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159cf80 size=176 callers=17 calls=3
   calls: sub_10ff360, sub_15b9390, sub_15bc310
*/
void sub_159cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159cf80ULL || rel >= 0x159d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d030 size=304 callers=2 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_159d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d030ULL || rel >= 0x159d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d160 size=48 callers=1 calls=1
   calls: InstanceTable_159
*/
void sub_159d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d160ULL || rel >= 0x159d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d190 size=352 callers=10 calls=8
   calls: DynamicGathering, InstanceTable_181, sub_15a5450, sub_15a71f0, sub_15b1780, sub_15b37c0, sub_15b6dc0, sub_15b7a70
*/
void sub_159d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d190ULL || rel >= 0x159d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d2f0 size=64 callers=0 calls=1
   calls: sub_1638220
*/
void sub_159d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d2f0ULL || rel >= 0x159d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d330 size=64 callers=0 calls=2
   calls: sub_15b1790, sub_1638220
*/
void sub_159d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d330ULL || rel >= 0x159d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d370 size=48 callers=0 calls=1
   calls: sub_15b1990
*/
void sub_159d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d370ULL || rel >= 0x159d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d3a0 size=16 callers=2 calls=0
*/
void sub_159d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d3a0ULL || rel >= 0x159d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d3b0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a1f30, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_149(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d3b0ULL || rel >= 0x159d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d5a0 size=16 callers=2 calls=0
*/
void sub_159d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d5a0ULL || rel >= 0x159d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d5b0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a3220, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d5b0ULL || rel >= 0x159d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d7a0 size=16 callers=2 calls=0
*/
void sub_159d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d7a0ULL || rel >= 0x159d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d7b0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a3640, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_151(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d7b0ULL || rel >= 0x159d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d9a0 size=48 callers=1 calls=1
   calls: InstanceTable_152
*/
void sub_159d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d9a0ULL || rel >= 0x159d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159d9d0 size=480 callers=1 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_152(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d9d0ULL || rel >= 0x159dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159dbb0 size=48 callers=1 calls=1
   calls: InstanceTable_153
*/
void sub_159dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159dbb0ULL || rel >= 0x159dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159dbe0 size=480 callers=1 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_153(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159dbe0ULL || rel >= 0x159ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159ddc0 size=64 callers=1 calls=1
   calls: InstanceTable_154
*/
void sub_159ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159ddc0ULL || rel >= 0x159de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159de00 size=608 callers=1 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_154(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159de00ULL || rel >= 0x159e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159e060 size=528 callers=1 calls=3
   calls: InstanceTable_155, sub_15b9340, sub_15b9390
*/
void sub_159e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159e060ULL || rel >= 0x159e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159e270 size=592 callers=1 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_155(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159e270ULL || rel >= 0x159e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159e4c0 size=256 callers=0 calls=5
   calls: InstanceTable_156, InstanceTable_211, Result_2, sub_15bde80, sub_15be030
*/
void sub_159e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159e4c0ULL || rel >= 0x159e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159e5c0 size=544 callers=1 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_156(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159e5c0ULL || rel >= 0x159e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159e7e0 size=112 callers=1 calls=3
   calls: sub_15b6dc0, sub_15caa30, sub_1633be0
*/
void sub_159e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159e7e0ULL || rel >= 0x159e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159e850 size=16 callers=1 calls=0
*/
void sub_159e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159e850ULL || rel >= 0x159e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159e860 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a8b70, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_157(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159e860ULL || rel >= 0x159ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159ea40 size=48 callers=1 calls=1
   calls: InstanceTable_158
*/
void sub_159ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159ea40ULL || rel >= 0x159ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159ea70 size=576 callers=1 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159ea70ULL || rel >= 0x159ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159ecb0 size=496 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_159(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159ecb0ULL || rel >= 0x159eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159eea0 size=16 callers=1 calls=0
*/
void sub_159eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159eea0ULL || rel >= 0x159eeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159eeb0 size=544 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159eeb0ULL || rel >= 0x159f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159f0d0 size=48 callers=2 calls=1
   calls: InstanceTable_161
*/
void sub_159f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f0d0ULL || rel >= 0x159f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159f100 size=496 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_161(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f100ULL || rel >= 0x159f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159f2f0 size=48 callers=1 calls=1
   calls: InstanceTable_162
*/
void sub_159f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f2f0ULL || rel >= 0x159f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159f320 size=560 callers=1 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_162(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f320ULL || rel >= 0x159f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159f550 size=16 callers=1 calls=0
*/
void sub_159f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f550ULL || rel >= 0x159f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159f560 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a3380, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_163(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f560ULL || rel >= 0x159f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159f750 size=16 callers=1 calls=0
*/
void sub_159f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f750ULL || rel >= 0x159f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159f760 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a6e50, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_164(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f760ULL || rel >= 0x159f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159f950 size=16 callers=1 calls=0
*/
void sub_159f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f950ULL || rel >= 0x159f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159f960 size=560 callers=0 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a7420, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_162cec0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_165(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f960ULL || rel >= 0x159fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159fb90 size=48 callers=1 calls=1
   calls: InstanceTable_166
*/
void sub_159fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159fb90ULL || rel >= 0x159fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159fbc0 size=592 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_162cec0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_166(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159fbc0ULL || rel >= 0x159fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159fe10 size=16 callers=1 calls=0
*/
void sub_159fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159fe10ULL || rel >= 0x159fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0159fe20 size=544 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_167(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159fe20ULL || rel >= 0x15a0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0040 size=64 callers=1 calls=1
   calls: InstanceTable_168
*/
void sub_15a0040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0040ULL || rel >= 0x15a0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0080 size=560 callers=1 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_168(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0080ULL || rel >= 0x15a02b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a02b0 size=64 callers=1 calls=1
   calls: InstanceTable_169
*/
void sub_15a02b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a02b0ULL || rel >= 0x15a02f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a02f0 size=560 callers=1 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_169(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a02f0ULL || rel >= 0x15a0520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0520 size=64 callers=1 calls=1
   calls: InstanceTable_170
*/
void sub_15a0520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0520ULL || rel >= 0x15a0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0560 size=560 callers=1 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0560ULL || rel >= 0x15a0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0790 size=16 callers=1 calls=0
*/
void sub_15a0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0790ULL || rel >= 0x15a07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a07a0 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a7420, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_171(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a07a0ULL || rel >= 0x15a0980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0980 size=48 callers=1 calls=1
   calls: InstanceTable_172
*/
void sub_15a0980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0980ULL || rel >= 0x15a09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a09b0 size=496 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_172(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a09b0ULL || rel >= 0x15a0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0ba0 size=48 callers=1 calls=1
   calls: InstanceTable_173
*/
void sub_15a0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0ba0ULL || rel >= 0x15a0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0bd0 size=480 callers=1 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_173(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0bd0ULL || rel >= 0x15a0db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0db0 size=112 callers=1 calls=0
*/
void sub_15a0db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0db0ULL || rel >= 0x15a0e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0e20 size=144 callers=1 calls=0
*/
void sub_15a0e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0e20ULL || rel >= 0x15a0eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a0eb0 size=384 callers=2 calls=16
   calls: sub_15b6dc0, sub_15ba6a0, sub_15ba780, sub_15bca70, sub_15c3ed0, sub_15c3ee0, sub_15c3fe0, sub_15c63b0, sub_15c6480, sub_15c64b0, sub_15c66f0, sub_15c7dc0
   ... +4 more
*/
void sub_15a0eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a0eb0ULL || rel >= 0x15a1030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1030 size=80 callers=3 calls=0
*/
void sub_15a1030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1030ULL || rel >= 0x15a1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1080 size=16 callers=1 calls=0
*/
void sub_15a1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1080ULL || rel >= 0x15a1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1090 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a8550, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_174(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1090ULL || rel >= 0x15a1280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1280 size=64 callers=1 calls=1
   calls: InstanceTable_175
*/
void sub_15a1280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1280ULL || rel >= 0x15a12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a12c0 size=560 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_175(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a12c0ULL || rel >= 0x15a14f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a14f0 size=16 callers=1 calls=0
*/
void sub_15a14f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a14f0ULL || rel >= 0x15a1500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1500 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a2c60, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_176(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1500ULL || rel >= 0x15a16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a16f0 size=48 callers=1 calls=1
   calls: InstanceTable_177
*/
void sub_15a16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a16f0ULL || rel >= 0x15a1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1720 size=496 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_177(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1720ULL || rel >= 0x15a1910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1910 size=16 callers=1 calls=0
*/
void sub_15a1910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1910ULL || rel >= 0x15a1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1920 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a8db0, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_178(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1920ULL || rel >= 0x15a1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1b10 size=48 callers=1 calls=1
   calls: InstanceTable_179
*/
void sub_15a1b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1b10ULL || rel >= 0x15a1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1b40 size=496 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_179(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1b40ULL || rel >= 0x15a1d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1d30 size=16 callers=1 calls=0
*/
void sub_15a1d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1d30ULL || rel >= 0x15a1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1d40 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15a2850, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1d40ULL || rel >= 0x15a1f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a1f30 size=496 callers=1 calls=6
   calls: sub_15a3800, sub_15a5a50, sub_15a6e50, sub_15c8aa0, sub_15c8ad0, sub_162cec0
*/
void sub_15a1f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a1f30ULL || rel >= 0x15a2120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a2120 size=176 callers=5 calls=3
   calls: sub_10a7870, sub_15b7b20, sub_15cf360
*/
void sub_15a2120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a2120ULL || rel >= 0x15a21d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a21d0 size=1056 callers=3 calls=3
   calls: sub_15a25f0, sub_15b7b20, sub_162d6a0
*/
void sub_15a21d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a21d0ULL || rel >= 0x15a25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a25f0 size=608 callers=3 calls=3
   calls: sub_15b9340, sub_6a54a0, sub_6a8ff0
*/
void sub_15a25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a25f0ULL || rel >= 0x15a2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a2850 size=224 callers=1 calls=3
   calls: sub_15c8aa0, sub_15c8ad0, sub_162cec0
*/
void sub_15a2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a2850ULL || rel >= 0x15a2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a2930 size=512 callers=1 calls=3
   calls: Buffer_2, sub_15aa220, sub_15c8ce0
*/
void sub_15a2930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a2930ULL || rel >= 0x15a2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a2b30 size=304 callers=6 calls=2
   calls: sub_15b9340, sub_6a54a0
*/
void sub_15a2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a2b30ULL || rel >= 0x15a2c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a2c60 size=448 callers=1 calls=4
   calls: sub_15c8aa0, sub_15c8ad0, sub_162cec0, sub_16345b0
*/
void sub_15a2c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a2c60ULL || rel >= 0x15a2e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a2e20 size=416 callers=1 calls=1
   calls: sub_15a2fc0
*/
void sub_15a2e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a2e20ULL || rel >= 0x15a2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a2fc0 size=608 callers=1 calls=8
   calls: sub_15a21d0, sub_15aa3c0, sub_15ad290, sub_15b9340, sub_15b9390, sub_15cf3c0, sub_6a8ff0, sub_6a9530
*/
void sub_15a2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a2fc0ULL || rel >= 0x15a3220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3220 size=352 callers=1 calls=4
   calls: sub_15a5a50, sub_15c8aa0, sub_15c8ad0, sub_162cec0
*/
void sub_15a3220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3220ULL || rel >= 0x15a3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3380 size=304 callers=1 calls=3
   calls: sub_15a3800, sub_15c8aa0, sub_15c8ad0
*/
void sub_15a3380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3380ULL || rel >= 0x15a34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a34b0 size=400 callers=1 calls=1
   calls: sub_15a5ca0
*/
void sub_15a34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a34b0ULL || rel >= 0x15a3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3640 size=416 callers=1 calls=4
   calls: sub_15a3800, sub_15c8aa0, sub_15c8ad0, sub_162cec0
*/
void sub_15a3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3640ULL || rel >= 0x15a37e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a37e0 size=32 callers=3 calls=0
*/
void sub_15a37e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a37e0ULL || rel >= 0x15a3800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3800 size=240 callers=3 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_15a3800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3800ULL || rel >= 0x15a38f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a38f0 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_15a38f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a38f0ULL || rel >= 0x15a3960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3960 size=16 callers=0 calls=0
*/
void sub_15a3960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3960ULL || rel >= 0x15a3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3970 size=256 callers=1 calls=4
   calls: sub_15b8dc0, sub_1630a10, sub_6a5230, unknown_5
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_181(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3970ULL || rel >= 0x15a3a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3a70 size=16 callers=0 calls=0
*/
void sub_15a3a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3a70ULL || rel >= 0x15a3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3a80 size=16 callers=0 calls=0
*/
void sub_15a3a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3a80ULL || rel >= 0x15a3a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3a90 size=16 callers=0 calls=0
*/
void sub_15a3a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3a90ULL || rel >= 0x15a3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3aa0 size=16 callers=0 calls=0
*/
void sub_15a3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3aa0ULL || rel >= 0x15a3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3ab0 size=16 callers=0 calls=0
*/
void sub_15a3ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3ab0ULL || rel >= 0x15a3ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3ac0 size=160 callers=0 calls=1
   calls: sub_16340b0
*/
void sub_15a3ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3ac0ULL || rel >= 0x15a3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3b60 size=16 callers=0 calls=0
*/
void sub_15a3b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3b60ULL || rel >= 0x15a3b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3b70 size=16 callers=0 calls=0
*/
void sub_15a3b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3b70ULL || rel >= 0x15a3b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3b80 size=208 callers=0 calls=3
   calls: sub_15aa5a0, sub_15b9390, sub_16340b0
*/
void sub_15a3b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3b80ULL || rel >= 0x15a3c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3c50 size=208 callers=0 calls=3
   calls: sub_15aa5a0, sub_15b9390, sub_16340b0
*/
void sub_15a3c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3c50ULL || rel >= 0x15a3d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3d20 size=208 callers=0 calls=3
   calls: sub_15aa5a0, sub_15b9390, sub_16340b0
*/
void sub_15a3d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3d20ULL || rel >= 0x15a3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3df0 size=16 callers=0 calls=0
*/
void sub_15a3df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3df0ULL || rel >= 0x15a3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3e00 size=144 callers=0 calls=3
   calls: sub_15bc310, sub_162d000, sub_16340b0
*/
void sub_15a3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3e00ULL || rel >= 0x15a3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3e90 size=16 callers=0 calls=0
*/
void sub_15a3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3e90ULL || rel >= 0x15a3ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3ea0 size=288 callers=0 calls=6
   calls: sub_159cf80, sub_15a5450, sub_15a5ca0, sub_15b37c0, sub_15b7a70, sub_16340b0
*/
void sub_15a3ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3ea0ULL || rel >= 0x15a3fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a3fc0 size=288 callers=0 calls=6
   calls: sub_159cf80, sub_15a5450, sub_15a5ca0, sub_15b37c0, sub_15b7a70, sub_16340b0
*/
void sub_15a3fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a3fc0ULL || rel >= 0x15a40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a40e0 size=288 callers=0 calls=6
   calls: sub_159cf80, sub_15a5450, sub_15a5ca0, sub_15b37c0, sub_15b7a70, sub_16340b0
*/
void sub_15a40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a40e0ULL || rel >= 0x15a4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4200 size=288 callers=0 calls=6
   calls: sub_159cf80, sub_15a5450, sub_15a5ca0, sub_15b37c0, sub_15b7a70, sub_16340b0
*/
void sub_15a4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4200ULL || rel >= 0x15a4320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4320 size=16 callers=0 calls=0
*/
void sub_15a4320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4320ULL || rel >= 0x15a4330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4330 size=208 callers=0 calls=3
   calls: sub_15aaa50, sub_15b9390, sub_16340b0
*/
void sub_15a4330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4330ULL || rel >= 0x15a4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4400 size=288 callers=0 calls=6
   calls: sub_159cf80, sub_15a5450, sub_15a5ca0, sub_15b37c0, sub_15b7a70, sub_16340b0
*/
void sub_15a4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4400ULL || rel >= 0x15a4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4520 size=208 callers=0 calls=3
   calls: sub_15aaa50, sub_15b9390, sub_16340b0
*/
void sub_15a4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4520ULL || rel >= 0x15a45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a45f0 size=208 callers=0 calls=3
   calls: sub_15ab090, sub_15b9390, sub_16340b0
*/
void sub_15a45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a45f0ULL || rel >= 0x15a46c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a46c0 size=208 callers=0 calls=3
   calls: sub_15aaa50, sub_15b9390, sub_16340b0
*/
void sub_15a46c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a46c0ULL || rel >= 0x15a4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4790 size=208 callers=0 calls=3
   calls: sub_15aa5a0, sub_15b9390, sub_16340b0
*/
void sub_15a4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4790ULL || rel >= 0x15a4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4860 size=208 callers=0 calls=3
   calls: sub_15a86c0, sub_15b9390, sub_16340b0
*/
void sub_15a4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4860ULL || rel >= 0x15a4930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4930 size=336 callers=0 calls=8
   calls: sub_15a7f10, sub_15b7a70, sub_15b7b20, sub_15cf190, sub_15cf3c0, sub_15cf460, sub_16340b0, sub_6a8ff0
*/
void sub_15a4930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4930ULL || rel >= 0x15a4a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4a80 size=208 callers=0 calls=3
   calls: sub_15a2e20, sub_15b9390, sub_16340b0
*/
void sub_15a4a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4a80ULL || rel >= 0x15a4b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4b50 size=144 callers=0 calls=5
   calls: sub_15a21d0, sub_15cf3c0, sub_16340b0, sub_6a8ff0, sub_6a9530
*/
void sub_15a4b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4b50ULL || rel >= 0x15a4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4be0 size=144 callers=0 calls=5
   calls: sub_15a21d0, sub_15cf3c0, sub_16340b0, sub_6a8ff0, sub_6a9530
*/
void sub_15a4be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4be0ULL || rel >= 0x15a4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4c70 size=144 callers=0 calls=3
   calls: sub_15a7d60, sub_16340b0, sub_6aa730
*/
void sub_15a4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4c70ULL || rel >= 0x15a4d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4d00 size=160 callers=0 calls=3
   calls: sub_15a2930, sub_15b9390, sub_16340b0
*/
void sub_15a4d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4d00ULL || rel >= 0x15a4da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4da0 size=144 callers=0 calls=3
   calls: Result_2, sub_162efb0, sub_1630ba0
*/
void sub_15a4da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4da0ULL || rel >= 0x15a4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4e30 size=256 callers=3 calls=7
   calls: sub_15ac3e0, sub_15bc1e0, sub_15bc310, sub_15bca70, sub_15becc0, sub_15bee80, sub_15bef40
*/
void sub_15a4e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4e30ULL || rel >= 0x15a4f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4f30 size=80 callers=2 calls=1
   calls: sub_15ac520
*/
void sub_15a4f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4f30ULL || rel >= 0x15a4f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a4f80 size=352 callers=3 calls=4
   calls: sub_15c8aa0, sub_15c8ad0, sub_162cec0, sub_162d1b0
*/
void sub_15a4f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a4f80ULL || rel >= 0x15a50e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a50e0 size=336 callers=1 calls=1
   calls: sub_15a5230
*/
void sub_15a50e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a50e0ULL || rel >= 0x15a5230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5230 size=352 callers=2 calls=8
   calls: sub_10ff360, sub_15ac3e0, sub_15bc310, sub_15beca0, sub_15becc0, sub_15bee80, sub_162d000, sub_162d2e0
*/
void sub_15a5230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5230ULL || rel >= 0x15a5390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5390 size=192 callers=5 calls=2
   calls: sub_15b37c0, sub_15b7a70
*/
void sub_15a5390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5390ULL || rel >= 0x15a5450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5450 size=304 callers=41 calls=7
   calls: sub_10ff360, sub_15a5580, sub_15ac520, sub_15b3830, sub_15b38b0, sub_15b7b20, sub_15bb6c0
*/
void sub_15a5450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5450ULL || rel >= 0x15a5580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5580 size=608 callers=3 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15a5580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5580ULL || rel >= 0x15a57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a57e0 size=32 callers=0 calls=0
*/
void sub_15a57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a57e0ULL || rel >= 0x15a5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5800 size=64 callers=1 calls=0
*/
void sub_15a5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5800ULL || rel >= 0x15a5840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5840 size=16 callers=1 calls=0
*/
void sub_15a5840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5840ULL || rel >= 0x15a5850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5850 size=16 callers=12 calls=0
*/
void sub_15a5850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5850ULL || rel >= 0x15a5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5860 size=32 callers=1 calls=0
*/
void sub_15a5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5860ULL || rel >= 0x15a5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5880 size=16 callers=1 calls=0
*/
void sub_15a5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5880ULL || rel >= 0x15a5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5890 size=16 callers=6 calls=0
*/
void sub_15a5890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5890ULL || rel >= 0x15a58a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a58a0 size=32 callers=1 calls=0
*/
void sub_15a58a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a58a0ULL || rel >= 0x15a58c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a58c0 size=96 callers=1 calls=4
   calls: sub_15bab00, sub_15bb6c0, sub_15bc520, sub_15bca70
*/
void sub_15a58c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a58c0ULL || rel >= 0x15a5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5920 size=32 callers=1 calls=1
   calls: sub_15bc520
*/
void sub_15a5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5920ULL || rel >= 0x15a5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5940 size=272 callers=4 calls=6
   calls: sub_15aa0d0, sub_15ac520, sub_15ac880, sub_15b38f0, sub_15b7b20, sub_15bab00
*/
void sub_15a5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5940ULL || rel >= 0x15a5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5a50 size=592 callers=2 calls=7
   calls: sub_15a4f80, sub_15b2dc0, sub_15b7d40, sub_15c8aa0, sub_15c8ad0, sub_15c8ca0, sub_162cec0
*/
void sub_15a5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5a50ULL || rel >= 0x15a5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a5ca0 size=1248 callers=7 calls=8
   calls: Buffer_2, sub_15a50e0, sub_15a6180, sub_15aa220, sub_15b2f20, sub_15b7b20, sub_15c8ce0, sub_162d000
*/
void sub_15a5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a5ca0ULL || rel >= 0x15a6180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6180 size=800 callers=2 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15a6180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6180ULL || rel >= 0x15a64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a64a0 size=224 callers=0 calls=4
   calls: sub_15a5450, sub_15b37c0, sub_15b6dc0, sub_15b7a70
*/
void sub_15a64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a64a0ULL || rel >= 0x15a6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6580 size=64 callers=0 calls=0
   ref: MatchmakeSession
*/
void MatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6580ULL || rel >= 0x15a65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a65c0 size=32 callers=0 calls=0
   ref: MatchmakeSession
*/
void MatchmakeSession_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a65c0ULL || rel >= 0x15a65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a65e0 size=80 callers=0 calls=1
   calls: sub_15bc5d0
   ref: MatchmakeSession
*/
void MatchmakeSession_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a65e0ULL || rel >= 0x15a6630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6630 size=16 callers=0 calls=0
*/
void sub_15a6630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6630ULL || rel >= 0x15a6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6640 size=16 callers=0 calls=0
*/
void sub_15a6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6640ULL || rel >= 0x15a6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6650 size=192 callers=1 calls=0
*/
void sub_15a6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6650ULL || rel >= 0x15a6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6710 size=288 callers=1 calls=5
   calls: sub_15a6b50, sub_15bb6c0, sub_15bc1e0, sub_15bc310, sub_1634590
*/
void sub_15a6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6710ULL || rel >= 0x15a6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6830 size=32 callers=1 calls=0
*/
void sub_15a6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6830ULL || rel >= 0x15a6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6850 size=32 callers=1 calls=0
*/
void sub_15a6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6850ULL || rel >= 0x15a6870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6870 size=32 callers=1 calls=0
*/
void sub_15a6870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6870ULL || rel >= 0x15a6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6890 size=32 callers=1 calls=0
*/
void sub_15a6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6890ULL || rel >= 0x15a68b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a68b0 size=32 callers=1 calls=0
*/
void sub_15a68b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a68b0ULL || rel >= 0x15a68d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a68d0 size=32 callers=1 calls=0
*/
void sub_15a68d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a68d0ULL || rel >= 0x15a68f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a68f0 size=32 callers=1 calls=0
*/
void sub_15a68f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a68f0ULL || rel >= 0x15a6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6910 size=304 callers=1 calls=4
   calls: sub_15b74e0, sub_15bc1e0, sub_15bc310, sub_15bc680
*/
void sub_15a6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6910ULL || rel >= 0x15a6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6a40 size=32 callers=1 calls=0
*/
void sub_15a6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6a40ULL || rel >= 0x15a6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6a60 size=16 callers=1 calls=0
*/
void sub_15a6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6a60ULL || rel >= 0x15a6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6a70 size=32 callers=1 calls=0
*/
void sub_15a6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6a70ULL || rel >= 0x15a6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6a90 size=16 callers=1 calls=0
*/
void sub_15a6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6a90ULL || rel >= 0x15a6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6aa0 size=16 callers=1 calls=0
*/
void sub_15a6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6aa0ULL || rel >= 0x15a6ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6ab0 size=16 callers=1 calls=0
*/
void sub_15a6ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6ab0ULL || rel >= 0x15a6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6ac0 size=48 callers=1 calls=0
*/
void sub_15a6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6ac0ULL || rel >= 0x15a6af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6af0 size=96 callers=1 calls=4
   calls: sub_15bab00, sub_15bb6c0, sub_15bc520, sub_15bca70
*/
void sub_15a6af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6af0ULL || rel >= 0x15a6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6b50 size=528 callers=1 calls=4
   calls: sub_15b9340, sub_15b9390, sub_15bab00, sub_15bc1e0
*/
void sub_15a6b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6b50ULL || rel >= 0x15a6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6d60 size=240 callers=1 calls=4
   calls: sub_107b670, sub_15ac520, sub_15bab00, sub_1634590
*/
void sub_15a6d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6d60ULL || rel >= 0x15a6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a6e50 size=480 callers=2 calls=6
   calls: sub_15a4f80, sub_15c8aa0, sub_15c8ad0, sub_15c8ca0, sub_162cec0, sub_16345b0
*/
void sub_15a6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a6e50ULL || rel >= 0x15a7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7030 size=448 callers=1 calls=5
   calls: sub_15ad6f0, sub_15ad870, sub_15bc1e0, sub_15bc310, sub_162d000
*/
void sub_15a7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7030ULL || rel >= 0x15a71f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a71f0 size=288 callers=4 calls=7
   calls: sub_15a5580, sub_15b37c0, sub_15b3830, sub_15b38b0, sub_15b7a70, sub_15b7b20, sub_15bb6c0
*/
void sub_15a71f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a71f0ULL || rel >= 0x15a7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7310 size=160 callers=9 calls=5
   calls: sub_15a5580, sub_15b3830, sub_15b38b0, sub_15b7b20, sub_15bb6c0
*/
void sub_15a7310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7310ULL || rel >= 0x15a73b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a73b0 size=16 callers=2 calls=0
*/
void sub_15a73b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a73b0ULL || rel >= 0x15a73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a73c0 size=16 callers=2 calls=0
*/
void sub_15a73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a73c0ULL || rel >= 0x15a73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a73d0 size=32 callers=12 calls=0
*/
void sub_15a73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a73d0ULL || rel >= 0x15a73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a73f0 size=48 callers=6 calls=0
*/
void sub_15a73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a73f0ULL || rel >= 0x15a7420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7420 size=464 callers=2 calls=5
   calls: sub_15b2dc0, sub_15b7d40, sub_15c8aa0, sub_15c8ad0, sub_162cec0
*/
void sub_15a7420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7420ULL || rel >= 0x15a75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a75f0 size=896 callers=1 calls=6
   calls: Buffer_2, sub_15a6180, sub_15aa220, sub_15b2f20, sub_15b7b20, sub_162d000
*/
void sub_15a75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a75f0ULL || rel >= 0x15a7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7970 size=64 callers=0 calls=2
   calls: sub_15a71f0, sub_15b6dc0
*/
void sub_15a7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7970ULL || rel >= 0x15a79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a79b0 size=64 callers=0 calls=0
   ref: PersistentGathering
*/
void PersistentGathering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a79b0ULL || rel >= 0x15a79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a79f0 size=32 callers=0 calls=0
   ref: PersistentGathering
*/
void PersistentGathering_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a79f0ULL || rel >= 0x15a7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7a10 size=80 callers=0 calls=1
   calls: sub_15bc5d0
   ref: PersistentGathering
*/
void PersistentGathering_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7a10ULL || rel >= 0x15a7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7a60 size=16 callers=0 calls=0
*/
void sub_15a7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7a60ULL || rel >= 0x15a7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7a70 size=16 callers=0 calls=0
*/
void sub_15a7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7a70ULL || rel >= 0x15a7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7a80 size=640 callers=2 calls=5
   calls: sub_15ada30, sub_15adc30, sub_15adf60, sub_15b9340, sub_15b9390
*/
void sub_15a7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7a80ULL || rel >= 0x15a7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7d00 size=96 callers=2 calls=1
   calls: sub_15acad0
*/
void sub_15a7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7d00ULL || rel >= 0x15a7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7d60 size=432 callers=1 calls=1
   calls: sub_15a7a80
*/
void sub_15a7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7d60ULL || rel >= 0x15a7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a7f10 size=704 callers=1 calls=3
   calls: sub_15a25f0, sub_15b7b20, sub_162d6a0
*/
void sub_15a7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a7f10ULL || rel >= 0x15a81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a81d0 size=592 callers=1 calls=3
   calls: sub_15a25f0, sub_15b7b20, sub_162d6a0
*/
void sub_15a81d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a81d0ULL || rel >= 0x15a8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a8420 size=304 callers=6 calls=2
   calls: sub_15b9340, sub_6a54a0
*/
void sub_15a8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a8420ULL || rel >= 0x15a8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a8550 size=368 callers=1 calls=4
   calls: sub_15c8aa0, sub_15c8ad0, sub_162cec0, sub_16345b0
*/
void sub_15a8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a8550ULL || rel >= 0x15a86c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a86c0 size=416 callers=1 calls=1
   calls: sub_15a8860
*/
void sub_15a86c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a86c0ULL || rel >= 0x15a8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a8860 size=784 callers=1 calls=11
   calls: sub_15a81d0, sub_15ad0e0, sub_15ae280, sub_15b7a70, sub_15b7b20, sub_15b9340, sub_15b9390, sub_15cf190, sub_15cf3c0, sub_15cf460, sub_6a8ff0
*/
void sub_15a8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a8860ULL || rel >= 0x15a8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a8b70 size=576 callers=1 calls=6
   calls: sub_15a4f80, sub_15b7d40, sub_15c8aa0, sub_15c8ad0, sub_15c8ca0, sub_162cec0
*/
void sub_15a8b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a8b70ULL || rel >= 0x15a8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a8db0 size=512 callers=1 calls=4
   calls: sub_15b7d40, sub_15c8aa0, sub_15c8ad0, sub_162d630
*/
void sub_15a8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a8db0ULL || rel >= 0x15a8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a8fb0 size=48 callers=0 calls=1
   calls: sub_159cf80
*/
void sub_15a8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a8fb0ULL || rel >= 0x15a8fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a8fe0 size=112 callers=0 calls=3
   calls: sub_15b4240, sub_15b9390, sub_15bc310
*/
void sub_15a8fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a8fe0ULL || rel >= 0x15a9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9050 size=16 callers=0 calls=0
   ref: ServerProtocol
*/
void ServerProtocol(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9050ULL || rel >= 0x15a9060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9060 size=128 callers=0 calls=0
   ref: ServerProtocol
   ref: Protocol
   ref: SystemComponent
*/
void SystemComponent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9060ULL || rel >= 0x15a90e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a90e0 size=16 callers=0 calls=0
*/
void sub_15a90e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a90e0ULL || rel >= 0x15a90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a90f0 size=16 callers=0 calls=0
*/
void sub_15a90f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a90f0ULL || rel >= 0x15a9100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9100 size=16 callers=0 calls=0
*/
void sub_15a9100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9100ULL || rel >= 0x15a9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9110 size=16 callers=0 calls=0
*/
void sub_15a9110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9110ULL || rel >= 0x15a9120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9120 size=16 callers=0 calls=0
*/
void sub_15a9120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9120ULL || rel >= 0x15a9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9130 size=16 callers=0 calls=0
*/
void sub_15a9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9130ULL || rel >= 0x15a9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9140 size=16 callers=0 calls=0
*/
void sub_15a9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9140ULL || rel >= 0x15a9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9150 size=16 callers=0 calls=0
*/
void sub_15a9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9150ULL || rel >= 0x15a9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9160 size=16 callers=0 calls=0
*/
void sub_15a9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9160ULL || rel >= 0x15a9170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9170 size=16 callers=0 calls=0
*/
void sub_15a9170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9170ULL || rel >= 0x15a9180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9180 size=16 callers=0 calls=0
*/
void sub_15a9180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9180ULL || rel >= 0x15a9190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9190 size=16 callers=0 calls=0
*/
void sub_15a9190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9190ULL || rel >= 0x15a91a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a91a0 size=16 callers=0 calls=0
*/
void sub_15a91a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a91a0ULL || rel >= 0x15a91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a91b0 size=16 callers=0 calls=0
*/
void sub_15a91b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a91b0ULL || rel >= 0x15a91c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a91c0 size=16 callers=0 calls=0
*/
void sub_15a91c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a91c0ULL || rel >= 0x15a91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a91d0 size=16 callers=0 calls=0
*/
void sub_15a91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a91d0ULL || rel >= 0x15a91e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a91e0 size=16 callers=0 calls=0
*/
void sub_15a91e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a91e0ULL || rel >= 0x15a91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a91f0 size=16 callers=0 calls=0
*/
void sub_15a91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a91f0ULL || rel >= 0x15a9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9200 size=16 callers=0 calls=0
*/
void sub_15a9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9200ULL || rel >= 0x15a9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9210 size=16 callers=0 calls=0
*/
void sub_15a9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9210ULL || rel >= 0x15a9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9220 size=16 callers=0 calls=0
*/
void sub_15a9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9220ULL || rel >= 0x15a9230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9230 size=16 callers=0 calls=0
*/
void sub_15a9230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9230ULL || rel >= 0x15a9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9240 size=48 callers=0 calls=1
   calls: sub_1638220
*/
void sub_15a9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9240ULL || rel >= 0x15a9270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9270 size=16 callers=0 calls=0
   ref: ClientProtocol
*/
void ClientProtocol(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9270ULL || rel >= 0x15a9280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9280 size=128 callers=0 calls=0
   ref: Protocol
   ref: SystemComponent
   ref: ClientProtocol
*/
void SystemComponent_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9280ULL || rel >= 0x15a9300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9300 size=16 callers=0 calls=0
*/
void sub_15a9300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9300ULL || rel >= 0x15a9310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9310 size=16 callers=0 calls=0
*/
void sub_15a9310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9310ULL || rel >= 0x15a9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9320 size=80 callers=0 calls=2
   calls: sub_15b6dc0, unknown_5
*/
void sub_15a9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9320ULL || rel >= 0x15a9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9370 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_15a9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9370ULL || rel >= 0x15a93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a93a0 size=48 callers=0 calls=1
   calls: sub_159cf80
*/
void sub_15a93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a93a0ULL || rel >= 0x15a93d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a93d0 size=240 callers=4 calls=2
   calls: sub_10ff360, sub_15bc310
*/
void sub_15a93d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a93d0ULL || rel >= 0x15a94c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a94c0 size=48 callers=0 calls=1
   calls: sub_15a93d0
*/
void sub_15a94c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a94c0ULL || rel >= 0x15a94f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a94f0 size=112 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_15a94f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a94f0ULL || rel >= 0x15a9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9560 size=112 callers=0 calls=3
   calls: sub_15b4240, sub_15b9390, sub_15bc310
*/
void sub_15a9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9560ULL || rel >= 0x15a95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a95d0 size=672 callers=5 calls=11
   calls: sub_159cf80, sub_15a5450, sub_15a5940, sub_15a9930, sub_15a9a70, sub_15a9f90, sub_15b37c0, sub_15b7a70, sub_15b9390, sub_15bab00, sub_15bc310
*/
void sub_15a95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a95d0ULL || rel >= 0x15a9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9870 size=48 callers=0 calls=1
   calls: sub_159d030
*/
void sub_15a9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9870ULL || rel >= 0x15a98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a98a0 size=48 callers=0 calls=1
   calls: sub_159d030
*/
void sub_15a98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a98a0ULL || rel >= 0x15a98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a98d0 size=16 callers=0 calls=0
*/
void sub_15a98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a98d0ULL || rel >= 0x15a98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a98e0 size=16 callers=0 calls=0
*/
void sub_15a98e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a98e0ULL || rel >= 0x15a98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a98f0 size=32 callers=0 calls=0
*/
void sub_15a98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a98f0ULL || rel >= 0x15a9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9910 size=32 callers=0 calls=0
*/
void sub_15a9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9910ULL || rel >= 0x15a9930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9930 size=320 callers=10 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15a9930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9930ULL || rel >= 0x15a9a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9a70 size=400 callers=2 calls=4
   calls: sub_15a6d60, sub_15a9c00, sub_15b9340, sub_15b9390
*/
void sub_15a9a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9a70ULL || rel >= 0x15a9c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9c00 size=736 callers=3 calls=3
   calls: sub_10ff050, sub_15b9340, sub_15bc1e0
*/
void sub_15a9c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9c00ULL || rel >= 0x15a9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9ee0 size=48 callers=0 calls=1
   calls: sub_15a93d0
*/
void sub_15a9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9ee0ULL || rel >= 0x15a9f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9f10 size=64 callers=0 calls=1
   calls: sub_10ff360
*/
void sub_15a9f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9f10ULL || rel >= 0x15a9f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9f50 size=64 callers=0 calls=1
   calls: sub_10ff360
*/
void sub_15a9f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9f50ULL || rel >= 0x15a9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015a9f90 size=320 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15a9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a9f90ULL || rel >= 0x15aa0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aa0d0 size=336 callers=16 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15aa0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aa0d0ULL || rel >= 0x15aa220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aa220 size=416 callers=15 calls=1
   calls: sub_15b9340
*/
void sub_15aa220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aa220ULL || rel >= 0x15aa3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aa3c0 size=480 callers=4 calls=5
   calls: sub_10a5230, sub_15b7a80, sub_15b9340, sub_15cf230, sub_6a54a0
*/
void sub_15aa3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aa3c0ULL || rel >= 0x15aa5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aa5a0 size=608 callers=4 calls=7
   calls: sub_15a71f0, sub_15a75f0, sub_15aa800, sub_15b4240, sub_15b9340, sub_15b9390, sub_15bc310
*/
void sub_15aa5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aa5a0ULL || rel >= 0x15aa800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aa800 size=592 callers=1 calls=3
   calls: sub_15b7a80, sub_15b9340, sub_15bc1e0
*/
void sub_15aa800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aa800ULL || rel >= 0x15aaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aaa50 size=640 callers=3 calls=8
   calls: sub_159cf80, sub_15a5450, sub_15a5ca0, sub_15aacd0, sub_15b37c0, sub_15b7a70, sub_15b9340, sub_15b9390
*/
void sub_15aaa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aaa50ULL || rel >= 0x15aacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aacd0 size=960 callers=2 calls=4
   calls: sub_10ff050, sub_15b7a80, sub_15b9340, sub_15bc1e0
*/
void sub_15aacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aacd0ULL || rel >= 0x15ab090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab090 size=768 callers=1 calls=8
   calls: sub_159cf80, sub_15a34b0, sub_15a5450, sub_15aacd0, sub_15b37c0, sub_15b7a70, sub_15b9340, sub_15b9390
*/
void sub_15ab090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab090ULL || rel >= 0x15ab390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab390 size=64 callers=0 calls=1
   calls: sub_159cf80
*/
void sub_15ab390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab390ULL || rel >= 0x15ab3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab3d0 size=32 callers=0 calls=0
*/
void sub_15ab3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab3d0ULL || rel >= 0x15ab3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab3f0 size=64 callers=0 calls=1
   calls: sub_159cf80
*/
void sub_15ab3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab3f0ULL || rel >= 0x15ab430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab430 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_15ab430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab430ULL || rel >= 0x15ab470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab470 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_15ab470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab470ULL || rel >= 0x15ab4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab4b0 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_15ab4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab4b0ULL || rel >= 0x15ab4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab4f0 size=416 callers=5 calls=9
   calls: sub_159cf80, sub_15a5450, sub_15a5940, sub_15a9930, sub_15b37c0, sub_15b7a70, sub_15b9390, sub_15bab00, sub_15bc310
*/
void sub_15ab4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab4f0ULL || rel >= 0x15ab690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab690 size=160 callers=0 calls=3
   calls: sub_159cf80, sub_15b9390, sub_15bc310
*/
void sub_15ab690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab690ULL || rel >= 0x15ab730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab730 size=160 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_15ab730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab730ULL || rel >= 0x15ab7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab7d0 size=160 callers=0 calls=3
   calls: sub_159cf80, sub_15b9390, sub_15bc310
*/
void sub_15ab7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab7d0ULL || rel >= 0x15ab870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab870 size=176 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_15ab870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab870ULL || rel >= 0x15ab920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ab920 size=368 callers=5 calls=5
   calls: sub_15a9930, sub_15b9390, sub_15bab00, sub_15bc1e0, sub_15bc310
*/
void sub_15ab920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab920ULL || rel >= 0x15aba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aba90 size=176 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_15aba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aba90ULL || rel >= 0x15abb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015abb40 size=176 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_15abb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15abb40ULL || rel >= 0x15abbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015abbf0 size=448 callers=4 calls=11
   calls: sub_10ff360, sub_15aa0d0, sub_15abec0, sub_15ac520, sub_15b7b20, sub_15bab00, sub_15bb6c0, sub_15bc1e0, sub_15bc310, sub_15bc520, sub_15bca70
*/
void sub_15abbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15abbf0ULL || rel >= 0x15abdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015abdb0 size=48 callers=0 calls=1
   calls: sub_15abde0
*/
void sub_15abdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15abdb0ULL || rel >= 0x15abde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015abde0 size=176 callers=2 calls=3
   calls: sub_10ff360, sub_15b9390, sub_15bc310
*/
void sub_15abde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15abde0ULL || rel >= 0x15abe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015abe90 size=48 callers=0 calls=1
   calls: sub_15abde0
*/
void sub_15abe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15abe90ULL || rel >= 0x15abec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015abec0 size=592 callers=2 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15abec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15abec0ULL || rel >= 0x15ac110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ac110 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15ac110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ac110ULL || rel >= 0x15ac190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ac190 size=112 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15ac190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ac190ULL || rel >= 0x15ac200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ac200 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15ac200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ac200ULL || rel >= 0x15ac280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ac280 size=352 callers=5 calls=0
*/
void sub_15ac280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ac280ULL || rel >= 0x15ac3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ac3e0 size=320 callers=23 calls=5
   calls: sub_15b9340, sub_15bc1e0, sub_15bc650, sub_15beca0, sub_6a54a0
*/
void sub_15ac3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ac3e0ULL || rel >= 0x15ac520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ac520 size=608 callers=5 calls=5
   calls: sub_15ac780, sub_15bab00, sub_15bc650, sub_15becc0, sub_6a54a0
*/
void sub_15ac520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ac520ULL || rel >= 0x15ac780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ac780 size=256 callers=1 calls=5
   calls: sub_15b9340, sub_15bc1e0, sub_15bc650, sub_15becb0, sub_6a54a0
*/
void sub_15ac780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ac780ULL || rel >= 0x15ac880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ac880 size=592 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15ac880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ac880ULL || rel >= 0x15acad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015acad0 size=976 callers=2 calls=3
   calls: sub_15acea0, sub_15b9340, sub_15b9390
*/
void sub_15acad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15acad0ULL || rel >= 0x15acea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015acea0 size=576 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15acea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15acea0ULL || rel >= 0x15ad0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad0e0 size=432 callers=4 calls=5
   calls: sub_10a5230, sub_15b7a80, sub_15b9340, sub_15cf230, sub_6a54a0
*/
void sub_15ad0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad0e0ULL || rel >= 0x15ad290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad290 size=368 callers=1 calls=2
   calls: sub_15aa3c0, sub_15b9340
*/
void sub_15ad290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad290ULL || rel >= 0x15ad400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad400 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_15ad400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad400ULL || rel >= 0x15ad480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad480 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_15ad480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad480ULL || rel >= 0x15ad590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad590 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15ad590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad590ULL || rel >= 0x15ad620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad620 size=32 callers=0 calls=0
*/
void sub_15ad620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad620ULL || rel >= 0x15ad640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad640 size=16 callers=0 calls=0
*/
void sub_15ad640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad640ULL || rel >= 0x15ad650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad650 size=16 callers=0 calls=0
*/
void sub_15ad650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad650ULL || rel >= 0x15ad660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad660 size=144 callers=0 calls=0
*/
void sub_15ad660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad660ULL || rel >= 0x15ad6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad6f0 size=384 callers=1 calls=2
   calls: sub_15ac280, sub_15b9340
*/
void sub_15ad6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad6f0ULL || rel >= 0x15ad870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ad870 size=448 callers=1 calls=3
   calls: sub_15ac280, sub_15b9340, sub_15bc1e0
*/
void sub_15ad870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad870ULL || rel >= 0x15ada30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ada30 size=512 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15ada30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ada30ULL || rel >= 0x15adc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015adc30 size=816 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15adc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15adc30ULL || rel >= 0x15adf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015adf60 size=800 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15adf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15adf60ULL || rel >= 0x15ae280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae280 size=368 callers=1 calls=2
   calls: sub_15ad0e0, sub_15b9340
*/
void sub_15ae280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae280ULL || rel >= 0x15ae3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae3f0 size=208 callers=0 calls=3
   calls: sub_15cee20, sub_15cef80, sub_162ce30
*/
void sub_15ae3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae3f0ULL || rel >= 0x15ae4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae4c0 size=64 callers=1 calls=1
   calls: InstanceTable_375
*/
void sub_15ae4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae4c0ULL || rel >= 0x15ae500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae500 size=64 callers=0 calls=1
   calls: sub_1638220
*/
void sub_15ae500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae500ULL || rel >= 0x15ae540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae540 size=64 callers=0 calls=2
   calls: InstanceTable_376, sub_1638220
*/
void sub_15ae540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae540ULL || rel >= 0x15ae580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae580 size=16 callers=0 calls=0
*/
void sub_15ae580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae580ULL || rel >= 0x15ae590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae590 size=16 callers=1 calls=0
*/
void sub_15ae590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae590ULL || rel >= 0x15ae5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae5a0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15af9d0, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_182(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae5a0ULL || rel >= 0x15ae790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae790 size=16 callers=1 calls=0
*/
void sub_15ae790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae790ULL || rel >= 0x15ae7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae7a0 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15af2e0, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_183(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae7a0ULL || rel >= 0x15ae980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae980 size=16 callers=1 calls=0
*/
void sub_15ae980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae980ULL || rel >= 0x15ae990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ae990 size=576 callers=0 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b05c0, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_184(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ae990ULL || rel >= 0x15aebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aebd0 size=16 callers=1 calls=0
*/
void sub_15aebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aebd0ULL || rel >= 0x15aebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aebe0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b04b0, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_185(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aebe0ULL || rel >= 0x15aedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aedd0 size=16 callers=1 calls=0
*/
void sub_15aedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aedd0ULL || rel >= 0x15aede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aede0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15aefd0, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_186(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aede0ULL || rel >= 0x15aefd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015aefd0 size=240 callers=1 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_15aefd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aefd0ULL || rel >= 0x15af0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af0c0 size=416 callers=1 calls=0
*/
void sub_15af0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af0c0ULL || rel >= 0x15af260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af260 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_15af260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af260ULL || rel >= 0x15af2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af2d0 size=16 callers=0 calls=0
*/
void sub_15af2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af2d0ULL || rel >= 0x15af2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af2e0 size=304 callers=1 calls=3
   calls: sub_15af470, sub_15c8aa0, sub_15c8ad0
*/
void sub_15af2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af2e0ULL || rel >= 0x15af410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af410 size=96 callers=1 calls=1
   calls: sub_15cf360
*/
void sub_15af410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af410ULL || rel >= 0x15af470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af470 size=272 callers=1 calls=3
   calls: sub_15c8aa0, sub_15c8ad0, sub_162d630
*/
void sub_15af470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af470ULL || rel >= 0x15af580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af580 size=256 callers=0 calls=4
   calls: sub_15b8dc0, sub_1630a10, sub_6a5230, unknown_5
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_187(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af580ULL || rel >= 0x15af680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af680 size=160 callers=0 calls=1
   calls: sub_16340b0
*/
void sub_15af680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af680ULL || rel >= 0x15af720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af720 size=16 callers=0 calls=0
*/
void sub_15af720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af720ULL || rel >= 0x15af730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af730 size=256 callers=0 calls=4
   calls: sub_15b0760, sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_15af730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af730ULL || rel >= 0x15af830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af830 size=144 callers=0 calls=2
   calls: sub_15afef0, sub_16340b0
*/
void sub_15af830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af830ULL || rel >= 0x15af8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af8c0 size=128 callers=0 calls=2
   calls: sub_15af0c0, sub_16340b0
*/
void sub_15af8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af8c0ULL || rel >= 0x15af940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af940 size=144 callers=0 calls=3
   calls: Result_2, sub_162efb0, sub_1630ba0
*/
void sub_15af940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af940ULL || rel >= 0x15af9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015af9d0 size=320 callers=1 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_15af9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15af9d0ULL || rel >= 0x15afb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015afb10 size=800 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15afb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15afb10ULL || rel >= 0x15afe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015afe30 size=192 callers=7 calls=0
*/
void sub_15afe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15afe30ULL || rel >= 0x15afef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015afef0 size=1472 callers=2 calls=0
*/
void sub_15afef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15afef0ULL || rel >= 0x15b04b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b04b0 size=240 callers=1 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_15b04b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b04b0ULL || rel >= 0x15b05a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b05a0 size=32 callers=1 calls=0
*/
void sub_15b05a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b05a0ULL || rel >= 0x15b05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b05c0 size=240 callers=1 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_15b05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b05c0ULL || rel >= 0x15b06b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b06b0 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_15b06b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b06b0ULL || rel >= 0x15b06e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b06e0 size=48 callers=0 calls=1
   calls: sub_1638220
*/
void sub_15b06e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b06e0ULL || rel >= 0x15b0710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b0710 size=80 callers=0 calls=2
   calls: sub_15b6dc0, unknown_5
*/
void sub_15b0710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b0710ULL || rel >= 0x15b0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b0760 size=720 callers=2 calls=5
   calls: sub_15afef0, sub_15b0c90, sub_15b0dd0, sub_15b9340, sub_15b9390
*/
void sub_15b0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b0760ULL || rel >= 0x15b0a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b0a30 size=608 callers=25 calls=4
   calls: Result, sub_15b9340, sub_15b9390, sub_162d130
*/
void sub_15b0a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b0a30ULL || rel >= 0x15b0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b0c90 size=320 callers=2 calls=0
*/
void sub_15b0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b0c90ULL || rel >= 0x15b0dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b0dd0 size=496 callers=1 calls=3
   calls: sub_15b0c90, sub_15b9340, sub_15b9390
*/
void sub_15b0dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b0dd0ULL || rel >= 0x15b0fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b0fc0 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_15b0fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b0fc0ULL || rel >= 0x15b1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1040 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_15b1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1040ULL || rel >= 0x15b1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1150 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15b1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1150ULL || rel >= 0x15b11e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b11e0 size=32 callers=0 calls=0
*/
void sub_15b11e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b11e0ULL || rel >= 0x15b1200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1200 size=16 callers=0 calls=0
*/
void sub_15b1200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1200ULL || rel >= 0x15b1210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1210 size=16 callers=0 calls=0
*/
void sub_15b1210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1210ULL || rel >= 0x15b1220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1220 size=144 callers=0 calls=0
*/
void sub_15b1220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1220ULL || rel >= 0x15b12b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b12b0 size=208 callers=0 calls=3
   calls: sub_15cee20, sub_15cef80, sub_162ce30
*/
void sub_15b12b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b12b0ULL || rel >= 0x15b1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1380 size=1024 callers=1 calls=11
   calls: InstanceTable_193, InstanceTable_194, InstanceTable_375, sub_15b19c0, sub_15b6dc0, sub_15b8dc0, sub_15bb6c0, sub_15bc1e0, sub_15c7dc0, sub_15c7dd0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: DynamicGathering
   ref: SDK MW+Nintendo+NEX_MM-4_6_8
*/
void DynamicGathering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1380ULL || rel >= 0x15b1780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1780 size=16 callers=2 calls=0
*/
void sub_15b1780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1780ULL || rel >= 0x15b1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1790 size=80 callers=1 calls=2
   calls: sub_15b17e0, sub_1638220
*/
void sub_15b1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1790ULL || rel >= 0x15b17e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b17e0 size=352 callers=2 calls=4
   calls: sub_15b1be0, sub_15b6e10, sub_15b9390, sub_15bc310
*/
void sub_15b17e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b17e0ULL || rel >= 0x15b1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1940 size=80 callers=0 calls=3
   calls: InstanceTable_376, sub_15b17e0, sub_1638220
*/
void sub_15b1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1940ULL || rel >= 0x15b1990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1990 size=48 callers=1 calls=1
   calls: sub_162f760
*/
void sub_15b1990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1990ULL || rel >= 0x15b19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b19c0 size=544 callers=4 calls=3
   calls: sub_15b9340, sub_15bc310, sub_15bc5d0
*/
void sub_15b19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b19c0ULL || rel >= 0x15b1be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1be0 size=272 callers=1 calls=3
   calls: sub_15b9390, sub_15bc310, sub_15bc5d0
*/
void sub_15b1be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1be0ULL || rel >= 0x15b1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1cf0 size=496 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_188(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1cf0ULL || rel >= 0x15b1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1ee0 size=48 callers=1 calls=1
   calls: InstanceTable_188
*/
void sub_15b1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1ee0ULL || rel >= 0x15b1f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b1f10 size=560 callers=1 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_162cec0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_189(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b1f10ULL || rel >= 0x15b2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b2140 size=112 callers=2 calls=3
   calls: InstanceTable_189, InstanceTable_211, Result_2
*/
void sub_15b2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b2140ULL || rel >= 0x15b21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b21b0 size=128 callers=1 calls=3
   calls: InstanceTable_190, InstanceTable_211, Result_2
*/
void sub_15b21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b21b0ULL || rel >= 0x15b2230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b2230 size=656 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b2230ULL || rel >= 0x15b24c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b24c0 size=64 callers=2 calls=1
   calls: InstanceTable_191
*/
void sub_15b24c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b24c0ULL || rel >= 0x15b2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b2500 size=528 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_191(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b2500ULL || rel >= 0x15b2710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

