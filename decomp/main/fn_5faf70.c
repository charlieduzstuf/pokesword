/* main functions 005faf70..00619f00 (39 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 005faf70 size=160 callers=0 calls=1
   calls: sub_5fc270
*/
void sub_5faf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5faf70ULL || rel >= 0x5fb010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb010 size=144 callers=0 calls=3
   calls: sub_5e2750, sub_5e2830, sub_5fb120
*/
void sub_5fb010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb010ULL || rel >= 0x5fb0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb0a0 size=128 callers=0 calls=2
   calls: sub_5e2750, sub_5e2830
*/
void sub_5fb0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb0a0ULL || rel >= 0x5fb120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb120 size=544 callers=1 calls=7
   calls: sub_1787370, sub_178e150, sub_178e290, sub_178e5f0, sub_5f2480, sub_5f7130, sub_5fb920
*/
void sub_5fb120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb120ULL || rel >= 0x5fb340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb340 size=80 callers=2 calls=0
*/
void sub_5fb340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb340ULL || rel >= 0x5fb390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb390 size=32 callers=3 calls=0
*/
void sub_5fb390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb390ULL || rel >= 0x5fb3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb3b0 size=32 callers=1 calls=0
*/
void sub_5fb3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb3b0ULL || rel >= 0x5fb3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb3d0 size=144 callers=0 calls=0
*/
void sub_5fb3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb3d0ULL || rel >= 0x5fb460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb460 size=144 callers=0 calls=0
*/
void sub_5fb460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb460ULL || rel >= 0x5fb4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb4f0 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_5fb4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb4f0ULL || rel >= 0x5fb560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb560 size=160 callers=0 calls=1
   calls: sub_5e2850
*/
void sub_5fb560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb560ULL || rel >= 0x5fb600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb600 size=144 callers=0 calls=0
*/
void sub_5fb600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb600ULL || rel >= 0x5fb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb690 size=144 callers=0 calls=0
*/
void sub_5fb690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb690ULL || rel >= 0x5fb720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb720 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_5fb720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb720ULL || rel >= 0x5fb790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb790 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_5fb790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb790ULL || rel >= 0x5fb800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb800 size=144 callers=0 calls=0
*/
void sub_5fb800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb800ULL || rel >= 0x5fb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb890 size=144 callers=0 calls=0
*/
void sub_5fb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb890ULL || rel >= 0x5fb920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fb920 size=576 callers=1 calls=2
   calls: sub_5f4380, sub_5f7130
*/
void sub_5fb920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fb920ULL || rel >= 0x5fbb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbb60 size=96 callers=0 calls=0
*/
void sub_5fbb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbb60ULL || rel >= 0x5fbbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbbc0 size=96 callers=0 calls=0
*/
void sub_5fbbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbbc0ULL || rel >= 0x5fbc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbc20 size=16 callers=0 calls=0
*/
void sub_5fbc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbc20ULL || rel >= 0x5fbc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbc30 size=96 callers=0 calls=1
   calls: sub_5fbf60
*/
void sub_5fbc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbc30ULL || rel >= 0x5fbc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbc90 size=96 callers=0 calls=0
*/
void sub_5fbc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbc90ULL || rel >= 0x5fbcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbcf0 size=96 callers=0 calls=0
*/
void sub_5fbcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbcf0ULL || rel >= 0x5fbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbd50 size=16 callers=0 calls=0
*/
void sub_5fbd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbd50ULL || rel >= 0x5fbd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbd60 size=16 callers=0 calls=0
*/
void sub_5fbd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbd60ULL || rel >= 0x5fbd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbd70 size=96 callers=0 calls=0
*/
void sub_5fbd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbd70ULL || rel >= 0x5fbdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbdd0 size=96 callers=0 calls=0
*/
void sub_5fbdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbdd0ULL || rel >= 0x5fbe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbe30 size=304 callers=15 calls=0
*/
void sub_5fbe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbe30ULL || rel >= 0x5fbf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fbf60 size=400 callers=2 calls=0
*/
void sub_5fbf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fbf60ULL || rel >= 0x5fc0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc0f0 size=96 callers=0 calls=0
*/
void sub_5fc0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc0f0ULL || rel >= 0x5fc150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc150 size=96 callers=0 calls=0
*/
void sub_5fc150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc150ULL || rel >= 0x5fc1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc1b0 size=96 callers=0 calls=0
*/
void sub_5fc1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc1b0ULL || rel >= 0x5fc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc210 size=96 callers=0 calls=0
*/
void sub_5fc210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc210ULL || rel >= 0x5fc270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc270 size=336 callers=2 calls=1
   calls: sub_65d700
*/
void sub_5fc270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc270ULL || rel >= 0x5fc3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc3c0 size=352 callers=0 calls=3
   calls: sub_178e450, sub_178f140, sub_5f7130
*/
void sub_5fc3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc3c0ULL || rel >= 0x5fc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc520 size=16 callers=0 calls=0
*/
void sub_5fc520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc520ULL || rel >= 0x5fc530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc530 size=16 callers=0 calls=0
*/
void sub_5fc530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc530ULL || rel >= 0x5fc540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc540 size=16 callers=0 calls=0
*/
void sub_5fc540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc540ULL || rel >= 0x5fc550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc550 size=176 callers=26 calls=1
   calls: sub_17873f0
*/
void sub_5fc550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc550ULL || rel >= 0x5fc600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc600 size=624 callers=19 calls=3
   calls: sub_17873f0, sub_5fd8e0, sub_5fe100
*/
void sub_5fc600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc600ULL || rel >= 0x5fc870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc870 size=352 callers=2 calls=1
   calls: sub_17873f0
*/
void sub_5fc870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc870ULL || rel >= 0x5fc9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fc9d0 size=624 callers=5 calls=0
*/
void sub_5fc9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fc9d0ULL || rel >= 0x5fcc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fcc40 size=656 callers=2 calls=1
   calls: sub_5fa8d0
*/
void sub_5fcc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fcc40ULL || rel >= 0x5fced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fced0 size=96 callers=2 calls=1
   calls: sub_5fa8d0
*/
void sub_5fced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fced0ULL || rel >= 0x5fcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fcf30 size=48 callers=1 calls=0
*/
void sub_5fcf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fcf30ULL || rel >= 0x5fcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fcf60 size=32 callers=1 calls=0
*/
void sub_5fcf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fcf60ULL || rel >= 0x5fcf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fcf80 size=32 callers=1 calls=0
*/
void sub_5fcf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fcf80ULL || rel >= 0x5fcfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fcfa0 size=32 callers=1 calls=0
*/
void sub_5fcfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fcfa0ULL || rel >= 0x5fcfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fcfc0 size=32 callers=1 calls=0
*/
void sub_5fcfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fcfc0ULL || rel >= 0x5fcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fcfe0 size=16 callers=3 calls=0
*/
void sub_5fcfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fcfe0ULL || rel >= 0x5fcff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fcff0 size=16 callers=1 calls=0
*/
void sub_5fcff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fcff0ULL || rel >= 0x5fd000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd000 size=48 callers=11 calls=0
*/
void sub_5fd000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd000ULL || rel >= 0x5fd030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd030 size=48 callers=9 calls=0
*/
void sub_5fd030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd030ULL || rel >= 0x5fd060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd060 size=224 callers=1 calls=3
   calls: sub_1787340, sub_5fd140, sub_5fd270
*/
void sub_5fd060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd060ULL || rel >= 0x5fd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd140 size=304 callers=1 calls=3
   calls: sub_1789910, sub_5cf8c0, sub_65d700
*/
void sub_5fd140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd140ULL || rel >= 0x5fd270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd270 size=272 callers=1 calls=6
   calls: sub_1789770, sub_1789860, sub_1789940, sub_5f2480, sub_5f7130, sub_5f7190
*/
void sub_5fd270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd270ULL || rel >= 0x5fd380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd380 size=384 callers=0 calls=3
   calls: sub_1789a60, sub_5cf8d0, sub_5f7130
*/
void sub_5fd380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd380ULL || rel >= 0x5fd500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd500 size=16 callers=0 calls=0
*/
void sub_5fd500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd500ULL || rel >= 0x5fd510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd510 size=16 callers=0 calls=0
*/
void sub_5fd510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd510ULL || rel >= 0x5fd520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd520 size=112 callers=0 calls=0
*/
void sub_5fd520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd520ULL || rel >= 0x5fd590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd590 size=16 callers=0 calls=0
*/
void sub_5fd590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd590ULL || rel >= 0x5fd5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd5a0 size=112 callers=0 calls=0
*/
void sub_5fd5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd5a0ULL || rel >= 0x5fd610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd610 size=16 callers=0 calls=0
*/
void sub_5fd610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd610ULL || rel >= 0x5fd620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd620 size=64 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_5fd620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd620ULL || rel >= 0x5fd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd660 size=160 callers=0 calls=1
   calls: sub_5fdee0
*/
void sub_5fd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd660ULL || rel >= 0x5fd700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd700 size=144 callers=0 calls=3
   calls: sub_5e2750, sub_5e2830, sub_5fd790
*/
void sub_5fd700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd700ULL || rel >= 0x5fd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd790 size=336 callers=1 calls=5
   calls: sub_17873b0, sub_1787640, sub_1789c10, sub_1790b60, sub_1790ca0
*/
void sub_5fd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd790ULL || rel >= 0x5fd8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fd8e0 size=304 callers=2 calls=0
*/
void sub_5fd8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fd8e0ULL || rel >= 0x5fda10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fda10 size=32 callers=11 calls=0
*/
void sub_5fda10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fda10ULL || rel >= 0x5fda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fda30 size=144 callers=0 calls=0
*/
void sub_5fda30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fda30ULL || rel >= 0x5fdac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fdac0 size=144 callers=0 calls=0
*/
void sub_5fdac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fdac0ULL || rel >= 0x5fdb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fdb50 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_5fdb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fdb50ULL || rel >= 0x5fdbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fdbc0 size=144 callers=0 calls=0
*/
void sub_5fdbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fdbc0ULL || rel >= 0x5fdc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fdc50 size=144 callers=0 calls=0
*/
void sub_5fdc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fdc50ULL || rel >= 0x5fdce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fdce0 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_5fdce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fdce0ULL || rel >= 0x5fdd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fdd50 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_5fdd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fdd50ULL || rel >= 0x5fddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fddc0 size=144 callers=0 calls=0
*/
void sub_5fddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fddc0ULL || rel >= 0x5fde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fde50 size=144 callers=0 calls=0
*/
void sub_5fde50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fde50ULL || rel >= 0x5fdee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fdee0 size=256 callers=2 calls=0
*/
void sub_5fdee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fdee0ULL || rel >= 0x5fdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fdfe0 size=240 callers=0 calls=3
   calls: sub_1789ca0, sub_1790c30, sub_1790de0
*/
void sub_5fdfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fdfe0ULL || rel >= 0x5fe0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe0d0 size=16 callers=0 calls=0
*/
void sub_5fe0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe0d0ULL || rel >= 0x5fe0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe0e0 size=16 callers=0 calls=0
*/
void sub_5fe0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe0e0ULL || rel >= 0x5fe0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe0f0 size=16 callers=0 calls=0
*/
void sub_5fe0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe0f0ULL || rel >= 0x5fe100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe100 size=16 callers=15 calls=0
*/
void sub_5fe100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe100ULL || rel >= 0x5fe110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe110 size=352 callers=0 calls=7
   calls: sub_1789ac0, sub_1789ad0, sub_1789b50, sub_1789b70, sub_5cf8e0, sub_5cf8f0, sub_5fe3d0
*/
void sub_5fe110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe110ULL || rel >= 0x5fe270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe270 size=304 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5fe4e0
*/
void sub_5fe270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe270ULL || rel >= 0x5fe3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe3a0 size=16 callers=0 calls=0
*/
void sub_5fe3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe3a0ULL || rel >= 0x5fe3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe3b0 size=16 callers=0 calls=0
*/
void sub_5fe3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe3b0ULL || rel >= 0x5fe3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe3c0 size=16 callers=0 calls=0
*/
void sub_5fe3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe3c0ULL || rel >= 0x5fe3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe3d0 size=272 callers=1 calls=0
*/
void sub_5fe3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe3d0ULL || rel >= 0x5fe4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe4e0 size=448 callers=1 calls=0
*/
void sub_5fe4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe4e0ULL || rel >= 0x5fe6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fe6a0 size=2144 callers=26 calls=17
   calls: sub_1787610, sub_1787640, sub_1787670, sub_1790a50, sub_1790ab0, sub_1790b10, sub_1790b60, sub_1790c70, sub_1790ca0, sub_1790df0, sub_1790e10, sub_1790e20
   ... +5 more
*/
void sub_5fe6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fe6a0ULL || rel >= 0x5fef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fef00 size=880 callers=0 calls=7
   calls: sub_1790b50, sub_1790c30, sub_1790c90, sub_1790de0, sub_1790e10, sub_1790f00, sub_5f7130
*/
void sub_5fef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fef00ULL || rel >= 0x5ff270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff270 size=16 callers=0 calls=0
*/
void sub_5ff270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff270ULL || rel >= 0x5ff280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff280 size=16 callers=0 calls=0
*/
void sub_5ff280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff280ULL || rel >= 0x5ff290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff290 size=16 callers=0 calls=0
*/
void sub_5ff290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff290ULL || rel >= 0x5ff2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff2a0 size=48 callers=13 calls=0
*/
void sub_5ff2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff2a0ULL || rel >= 0x5ff2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff2d0 size=64 callers=0 calls=0
*/
void sub_5ff2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff2d0ULL || rel >= 0x5ff310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff310 size=16 callers=0 calls=0
*/
void sub_5ff310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff310ULL || rel >= 0x5ff320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff320 size=16 callers=0 calls=0
*/
void sub_5ff320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff320ULL || rel >= 0x5ff330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff330 size=96 callers=0 calls=0
*/
void sub_5ff330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff330ULL || rel >= 0x5ff390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff390 size=16 callers=0 calls=0
*/
void sub_5ff390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff390ULL || rel >= 0x5ff3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff3a0 size=16 callers=0 calls=0
*/
void sub_5ff3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff3a0ULL || rel >= 0x5ff3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff3b0 size=16 callers=0 calls=0
*/
void sub_5ff3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff3b0ULL || rel >= 0x5ff3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff3c0 size=32 callers=0 calls=0
*/
void sub_5ff3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff3c0ULL || rel >= 0x5ff3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff3e0 size=32 callers=0 calls=0
*/
void sub_5ff3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff3e0ULL || rel >= 0x5ff400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff400 size=496 callers=1 calls=0
*/
void sub_5ff400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff400ULL || rel >= 0x5ff5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff5f0 size=640 callers=3 calls=4
   calls: DefaultPath, sub_1787580, sub_5d1b50, sub_5ffce0
*/
void sub_5ff5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff5f0ULL || rel >= 0x5ff870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff870 size=320 callers=0 calls=6
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_5f3730, sub_5f7540, sub_600390
*/
void sub_5ff870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff870ULL || rel >= 0x5ff9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff9b0 size=32 callers=2 calls=0
*/
void sub_5ff9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff9b0ULL || rel >= 0x5ff9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ff9d0 size=352 callers=1 calls=0
*/
void sub_5ff9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff9d0ULL || rel >= 0x5ffb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffb30 size=16 callers=0 calls=0
*/
void sub_5ffb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffb30ULL || rel >= 0x5ffb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffb40 size=16 callers=0 calls=0
*/
void sub_5ffb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffb40ULL || rel >= 0x5ffb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffb50 size=16 callers=0 calls=0
*/
void sub_5ffb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffb50ULL || rel >= 0x5ffb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffb60 size=16 callers=0 calls=0
*/
void sub_5ffb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffb60ULL || rel >= 0x5ffb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffb70 size=16 callers=0 calls=0
*/
void sub_5ffb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffb70ULL || rel >= 0x5ffb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffb80 size=16 callers=0 calls=0
*/
void sub_5ffb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffb80ULL || rel >= 0x5ffb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffb90 size=16 callers=0 calls=0
*/
void sub_5ffb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffb90ULL || rel >= 0x5ffba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffba0 size=16 callers=0 calls=0
*/
void sub_5ffba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffba0ULL || rel >= 0x5ffbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffbb0 size=304 callers=28 calls=0
*/
void sub_5ffbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffbb0ULL || rel >= 0x5ffce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffce0 size=448 callers=1 calls=4
   calls: sub_5d1b50, sub_5d1d30, sub_5d7670, sub_600900
*/
void sub_5ffce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffce0ULL || rel >= 0x5ffea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ffea0 size=96 callers=0 calls=0
*/
void sub_5ffea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ffea0ULL || rel >= 0x5fff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fff00 size=176 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_5fff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fff00ULL || rel >= 0x5fffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fffb0 size=96 callers=0 calls=0
*/
void sub_5fffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fffb0ULL || rel >= 0x600010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600010 size=96 callers=0 calls=0
*/
void sub_600010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600010ULL || rel >= 0x600070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600070 size=176 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_600070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600070ULL || rel >= 0x600120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600120 size=176 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_600120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600120ULL || rel >= 0x6001d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006001d0 size=96 callers=0 calls=0
*/
void sub_6001d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6001d0ULL || rel >= 0x600230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600230 size=96 callers=0 calls=0
*/
void sub_600230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600230ULL || rel >= 0x600290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600290 size=208 callers=0 calls=2
   calls: sub_5f8c10, sub_5f8c90
*/
void sub_600290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600290ULL || rel >= 0x600360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600360 size=16 callers=0 calls=0
*/
void sub_600360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600360ULL || rel >= 0x600370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600370 size=16 callers=0 calls=0
*/
void sub_600370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600370ULL || rel >= 0x600380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600380 size=16 callers=0 calls=0
*/
void sub_600380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600380ULL || rel >= 0x600390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600390 size=1328 callers=1 calls=10
   calls: sub_1788560, sub_1788f20, sub_1789130, sub_1789270, sub_17892a0, sub_17893e0, sub_17894b0, sub_5f3280, sub_5f8c10, sub_5f8c90
*/
void sub_600390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600390ULL || rel >= 0x6008c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006008c0 size=16 callers=0 calls=0
*/
void sub_6008c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6008c0ULL || rel >= 0x6008d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006008d0 size=16 callers=0 calls=0
*/
void sub_6008d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6008d0ULL || rel >= 0x6008e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006008e0 size=16 callers=0 calls=0
*/
void sub_6008e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6008e0ULL || rel >= 0x6008f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006008f0 size=16 callers=0 calls=0
*/
void sub_6008f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6008f0ULL || rel >= 0x600900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600900 size=64 callers=3 calls=1
   calls: sub_5d54c0
*/
void sub_600900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600900ULL || rel >= 0x600940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600940 size=176 callers=0 calls=1
   calls: sub_601520
*/
void sub_600940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600940ULL || rel >= 0x6009f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006009f0 size=64 callers=1 calls=0
*/
void sub_6009f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6009f0ULL || rel >= 0x600a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600a30 size=512 callers=12 calls=3
   calls: sub_5e2350, sub_5f34e0, sub_601610
   ref: DefaultPath
*/
void DefaultPath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600a30ULL || rel >= 0x600c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600c30 size=208 callers=1 calls=0
*/
void sub_600c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600c30ULL || rel >= 0x600d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600d00 size=208 callers=0 calls=0
*/
void sub_600d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600d00ULL || rel >= 0x600dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600dd0 size=208 callers=0 calls=0
*/
void sub_600dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600dd0ULL || rel >= 0x600ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600ea0 size=208 callers=0 calls=0
*/
void sub_600ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600ea0ULL || rel >= 0x600f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00600f70 size=208 callers=0 calls=0
*/
void sub_600f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600f70ULL || rel >= 0x601040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601040 size=208 callers=0 calls=0
*/
void sub_601040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601040ULL || rel >= 0x601110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601110 size=48 callers=1 calls=0
*/
void sub_601110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601110ULL || rel >= 0x601140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601140 size=112 callers=23 calls=0
*/
void sub_601140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601140ULL || rel >= 0x6011b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006011b0 size=96 callers=0 calls=0
*/
void sub_6011b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6011b0ULL || rel >= 0x601210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601210 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_601210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601210ULL || rel >= 0x601280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601280 size=96 callers=0 calls=0
*/
void sub_601280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601280ULL || rel >= 0x6012e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006012e0 size=96 callers=0 calls=0
*/
void sub_6012e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6012e0ULL || rel >= 0x601340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601340 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_601340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601340ULL || rel >= 0x6013b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006013b0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_6013b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6013b0ULL || rel >= 0x601420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601420 size=96 callers=0 calls=0
*/
void sub_601420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601420ULL || rel >= 0x601480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601480 size=96 callers=0 calls=0
*/
void sub_601480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601480ULL || rel >= 0x6014e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006014e0 size=16 callers=0 calls=0
*/
void sub_6014e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6014e0ULL || rel >= 0x6014f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006014f0 size=16 callers=0 calls=0
*/
void sub_6014f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6014f0ULL || rel >= 0x601500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601500 size=16 callers=0 calls=0
*/
void sub_601500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601500ULL || rel >= 0x601510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601510 size=16 callers=0 calls=0
*/
void sub_601510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601510ULL || rel >= 0x601520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601520 size=240 callers=1 calls=0
*/
void sub_601520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601520ULL || rel >= 0x601610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601610 size=240 callers=1 calls=2
   calls: sub_5d1b50, sub_5d54c0
*/
void sub_601610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601610ULL || rel >= 0x601700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601700 size=64 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_601700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601700ULL || rel >= 0x601740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601740 size=192 callers=0 calls=4
   calls: Signature_check_failed_c_c_c_c_must_be_c_c_c_c, sub_177c0f0, sub_5e2750, sub_5e2830
*/
void sub_601740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601740ULL || rel >= 0x601800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601800 size=16 callers=1 calls=0
*/
void sub_601800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601800ULL || rel >= 0x601810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601810 size=160 callers=0 calls=1
   calls: sub_601dc0
*/
void sub_601810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601810ULL || rel >= 0x6018b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006018b0 size=144 callers=0 calls=0
*/
void sub_6018b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6018b0ULL || rel >= 0x601940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601940 size=144 callers=0 calls=0
*/
void sub_601940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601940ULL || rel >= 0x6019d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006019d0 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_6019d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6019d0ULL || rel >= 0x601a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601a40 size=144 callers=0 calls=0
*/
void sub_601a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601a40ULL || rel >= 0x601ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601ad0 size=144 callers=0 calls=0
*/
void sub_601ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601ad0ULL || rel >= 0x601b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601b60 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_601b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601b60ULL || rel >= 0x601bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601bd0 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_601bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601bd0ULL || rel >= 0x601c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601c40 size=144 callers=0 calls=0
*/
void sub_601c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601c40ULL || rel >= 0x601cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601cd0 size=144 callers=0 calls=0
*/
void sub_601cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601cd0ULL || rel >= 0x601d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601d60 size=96 callers=0 calls=1
   calls: sub_5fe100
*/
void sub_601d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601d60ULL || rel >= 0x601dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601dc0 size=336 callers=2 calls=1
   calls: sub_177baf0
*/
void sub_601dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601dc0ULL || rel >= 0x601f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601f10 size=208 callers=0 calls=4
   calls: sub_177bb20, sub_177bb80, sub_177bbb0, sub_177c120
*/
void sub_601f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601f10ULL || rel >= 0x601fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601fe0 size=16 callers=0 calls=0
*/
void sub_601fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601fe0ULL || rel >= 0x601ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00601ff0 size=16 callers=0 calls=0
*/
void sub_601ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x601ff0ULL || rel >= 0x602000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00602000 size=16 callers=0 calls=0
*/
void sub_602000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x602000ULL || rel >= 0x602010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00602010 size=32 callers=0 calls=0
*/
void sub_602010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x602010ULL || rel >= 0x602030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00602030 size=1440 callers=9 calls=13
   calls: DefaultPath, sub_5cf8c0, sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_5ea820, sub_6039f0, sub_604360, sub_604440, sub_604530, sub_604740
   ... +1 more
*/
void sub_602030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x602030ULL || rel >= 0x6025d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006025d0 size=320 callers=2 calls=6
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_5f3730, sub_5f7540, sub_604830
*/
void sub_6025d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6025d0ULL || rel >= 0x602710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00602710 size=544 callers=29 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010, sub_604530
*/
void sub_602710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x602710ULL || rel >= 0x602930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00602930 size=736 callers=22 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_601110, sub_603900
*/
void sub_602930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x602930ULL || rel >= 0x602c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00602c10 size=864 callers=2 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_602f70, sub_603810, sub_607340
*/
void sub_602c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x602c10ULL || rel >= 0x602f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00602f70 size=736 callers=1 calls=2
   calls: sub_606f30, sub_6071a0
*/
void sub_602f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x602f70ULL || rel >= 0x603250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603250 size=160 callers=8 calls=2
   calls: sub_607550, sub_607840
*/
void sub_603250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603250ULL || rel >= 0x6032f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006032f0 size=528 callers=8 calls=1
   calls: sub_603900
*/
void sub_6032f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6032f0ULL || rel >= 0x603500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603500 size=352 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_603500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603500ULL || rel >= 0x603660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603660 size=16 callers=0 calls=0
*/
void sub_603660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603660ULL || rel >= 0x603670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603670 size=112 callers=0 calls=1
   calls: sub_603900
*/
void sub_603670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603670ULL || rel >= 0x6036e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006036e0 size=16 callers=0 calls=0
*/
void sub_6036e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6036e0ULL || rel >= 0x6036f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006036f0 size=16 callers=0 calls=0
*/
void sub_6036f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6036f0ULL || rel >= 0x603700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603700 size=16 callers=0 calls=0
*/
void sub_603700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603700ULL || rel >= 0x603710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603710 size=112 callers=0 calls=1
   calls: sub_603900
*/
void sub_603710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603710ULL || rel >= 0x603780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603780 size=112 callers=0 calls=1
   calls: sub_603900
*/
void sub_603780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603780ULL || rel >= 0x6037f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006037f0 size=16 callers=0 calls=0
*/
void sub_6037f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6037f0ULL || rel >= 0x603800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603800 size=16 callers=0 calls=0
*/
void sub_603800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603800ULL || rel >= 0x603810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603810 size=240 callers=15 calls=0
*/
void sub_603810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603810ULL || rel >= 0x603900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603900 size=240 callers=97 calls=0
*/
void sub_603900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603900ULL || rel >= 0x6039f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006039f0 size=432 callers=1 calls=4
   calls: sub_5d1b50, sub_5d1d30, sub_5d7670, sub_600900
*/
void sub_6039f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6039f0ULL || rel >= 0x603ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603ba0 size=384 callers=0 calls=3
   calls: sub_603900, sub_604180, sub_607f80
*/
void sub_603ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603ba0ULL || rel >= 0x603d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603d20 size=96 callers=0 calls=0
*/
void sub_603d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603d20ULL || rel >= 0x603d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603d80 size=176 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_603d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603d80ULL || rel >= 0x603e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603e30 size=96 callers=0 calls=0
*/
void sub_603e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603e30ULL || rel >= 0x603e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603e90 size=96 callers=0 calls=0
*/
void sub_603e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603e90ULL || rel >= 0x603ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603ef0 size=176 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_603ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603ef0ULL || rel >= 0x603fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00603fa0 size=176 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_603fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603fa0ULL || rel >= 0x604050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604050 size=96 callers=0 calls=0
*/
void sub_604050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604050ULL || rel >= 0x6040b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006040b0 size=96 callers=0 calls=0
*/
void sub_6040b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6040b0ULL || rel >= 0x604110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604110 size=32 callers=0 calls=0
*/
void sub_604110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604110ULL || rel >= 0x604130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604130 size=16 callers=0 calls=0
*/
void sub_604130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604130ULL || rel >= 0x604140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604140 size=32 callers=0 calls=0
*/
void sub_604140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604140ULL || rel >= 0x604160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604160 size=32 callers=0 calls=0
*/
void sub_604160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604160ULL || rel >= 0x604180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604180 size=480 callers=1 calls=1
   calls: sub_603810
*/
void sub_604180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604180ULL || rel >= 0x604360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604360 size=224 callers=1 calls=1
   calls: sub_607a40
*/
void sub_604360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604360ULL || rel >= 0x604440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604440 size=240 callers=6 calls=2
   calls: sub_5cfad0, sub_608fa0
*/
void sub_604440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604440ULL || rel >= 0x604530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604530 size=528 callers=3 calls=0
*/
void sub_604530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604530ULL || rel >= 0x604740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604740 size=240 callers=7 calls=2
   calls: sub_5cfad0, sub_609a50
*/
void sub_604740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604740ULL || rel >= 0x604830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604830 size=640 callers=1 calls=3
   calls: sub_17892f0, sub_603900, sub_604ab0
*/
void sub_604830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604830ULL || rel >= 0x604ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00604ab0 size=4064 callers=3 calls=5
   calls: sub_603900, sub_604ab0, sub_605a90, sub_606420, sub_606970
*/
void sub_604ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x604ab0ULL || rel >= 0x605a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00605a90 size=1392 callers=5 calls=1
   calls: sub_603900
*/
void sub_605a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x605a90ULL || rel >= 0x606000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00606000 size=1056 callers=2 calls=2
   calls: sub_603900, sub_605a90
*/
void sub_606000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606000ULL || rel >= 0x606420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00606420 size=1360 callers=2 calls=2
   calls: sub_603900, sub_606000
*/
void sub_606420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606420ULL || rel >= 0x606970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00606970 size=1408 callers=2 calls=4
   calls: sub_603900, sub_605a90, sub_606000, sub_606420
*/
void sub_606970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606970ULL || rel >= 0x606ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00606ef0 size=16 callers=0 calls=0
*/
void sub_606ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606ef0ULL || rel >= 0x606f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00606f00 size=16 callers=0 calls=0
*/
void sub_606f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606f00ULL || rel >= 0x606f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00606f10 size=16 callers=0 calls=0
*/
void sub_606f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606f10ULL || rel >= 0x606f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00606f20 size=16 callers=0 calls=0
*/
void sub_606f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606f20ULL || rel >= 0x606f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00606f30 size=624 callers=1 calls=0
*/
void sub_606f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606f30ULL || rel >= 0x6071a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006071a0 size=416 callers=1 calls=0
*/
void sub_6071a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6071a0ULL || rel >= 0x607340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00607340 size=528 callers=1 calls=0
*/
void sub_607340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x607340ULL || rel >= 0x607550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00607550 size=512 callers=16 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_607550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x607550ULL || rel >= 0x607750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00607750 size=240 callers=578 calls=0
*/
void sub_607750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x607750ULL || rel >= 0x607840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00607840 size=512 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_607840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x607840ULL || rel >= 0x607a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00607a40 size=1344 callers=2 calls=1
   calls: sub_608660
*/
void sub_607a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x607a40ULL || rel >= 0x607f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00607f80 size=1312 callers=1 calls=0
*/
void sub_607f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x607f80ULL || rel >= 0x6084a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006084a0 size=112 callers=0 calls=0
*/
void sub_6084a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6084a0ULL || rel >= 0x608510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608510 size=112 callers=0 calls=0
*/
void sub_608510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608510ULL || rel >= 0x608580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608580 size=112 callers=0 calls=0
*/
void sub_608580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608580ULL || rel >= 0x6085f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006085f0 size=112 callers=0 calls=0
*/
void sub_6085f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6085f0ULL || rel >= 0x608660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608660 size=240 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_608660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608660ULL || rel >= 0x608750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608750 size=944 callers=2 calls=0
*/
void sub_608750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608750ULL || rel >= 0x608b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608b00 size=80 callers=0 calls=0
*/
void sub_608b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608b00ULL || rel >= 0x608b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608b50 size=112 callers=0 calls=1
   calls: sub_603810
*/
void sub_608b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608b50ULL || rel >= 0x608bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608bc0 size=80 callers=0 calls=0
*/
void sub_608bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608bc0ULL || rel >= 0x608c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608c10 size=80 callers=0 calls=0
*/
void sub_608c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608c10ULL || rel >= 0x608c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608c60 size=112 callers=0 calls=1
   calls: sub_603810
*/
void sub_608c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608c60ULL || rel >= 0x608cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608cd0 size=112 callers=0 calls=1
   calls: sub_603810
*/
void sub_608cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608cd0ULL || rel >= 0x608d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608d40 size=80 callers=0 calls=0
*/
void sub_608d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608d40ULL || rel >= 0x608d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608d90 size=80 callers=0 calls=0
*/
void sub_608d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608d90ULL || rel >= 0x608de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608de0 size=80 callers=0 calls=0
*/
void sub_608de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608de0ULL || rel >= 0x608e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608e30 size=16 callers=0 calls=0
*/
void sub_608e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608e30ULL || rel >= 0x608e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608e40 size=80 callers=0 calls=0
*/
void sub_608e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608e40ULL || rel >= 0x608e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608e90 size=80 callers=0 calls=0
*/
void sub_608e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608e90ULL || rel >= 0x608ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608ee0 size=16 callers=0 calls=0
*/
void sub_608ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608ee0ULL || rel >= 0x608ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608ef0 size=16 callers=0 calls=0
*/
void sub_608ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608ef0ULL || rel >= 0x608f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608f00 size=80 callers=0 calls=0
*/
void sub_608f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608f00ULL || rel >= 0x608f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608f50 size=80 callers=0 calls=0
*/
void sub_608f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608f50ULL || rel >= 0x608fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00608fa0 size=512 callers=16 calls=7
   calls: sub_5cf8c0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_5ff5f0, sub_60bb40, sub_65d700
*/
void sub_608fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608fa0ULL || rel >= 0x6091a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006091a0 size=272 callers=2 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010, sub_6092b0, sub_60c0a0
*/
void sub_6091a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6091a0ULL || rel >= 0x6092b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006092b0 size=368 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_60ac80
*/
void sub_6092b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6092b0ULL || rel >= 0x609420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00609420 size=1568 callers=8 calls=6
   calls: sub_1787580, sub_17892f0, sub_17893e0, sub_5ff9b0, sub_603900, sub_60af40
*/
void sub_609420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x609420ULL || rel >= 0x609a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00609a40 size=16 callers=0 calls=0
*/
void sub_609a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x609a40ULL || rel >= 0x609a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00609a50 size=64 callers=1 calls=1
   calls: sub_608fa0
*/
void sub_609a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x609a50ULL || rel >= 0x609a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00609a90 size=1184 callers=0 calls=13
   calls: sub_17876b0, sub_17876c0, sub_17887f0, sub_1788d40, sub_1789270, sub_5f3260, sub_5f3280, sub_5f4190, sub_5f41b0, sub_5f8bc0, sub_5f8c40, sub_5ff2a0
   ... +1 more
*/
void sub_609a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x609a90ULL || rel >= 0x609f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00609f30 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_609f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x609f30ULL || rel >= 0x60a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a000 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_60a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a000ULL || rel >= 0x60a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a0d0 size=176 callers=0 calls=1
   calls: sub_603900
*/
void sub_60a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a0d0ULL || rel >= 0x60a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a180 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_60a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a180ULL || rel >= 0x60a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a250 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_60a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a250ULL || rel >= 0x60a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a320 size=176 callers=0 calls=1
   calls: sub_603900
*/
void sub_60a320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a320ULL || rel >= 0x60a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a3d0 size=176 callers=0 calls=1
   calls: sub_603900
*/
void sub_60a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a3d0ULL || rel >= 0x60a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a480 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_60a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a480ULL || rel >= 0x60a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a550 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_60a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a550ULL || rel >= 0x60a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a620 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_60a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a620ULL || rel >= 0x60a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a6f0 size=112 callers=0 calls=1
   calls: sub_60ae90
*/
void sub_60a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a6f0ULL || rel >= 0x60a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a760 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_60a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a760ULL || rel >= 0x60a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a830 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_60a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a830ULL || rel >= 0x60a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a900 size=240 callers=0 calls=1
   calls: sub_603900
*/
void sub_60a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a900ULL || rel >= 0x60a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060a9f0 size=240 callers=0 calls=1
   calls: sub_603900
*/
void sub_60a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a9f0ULL || rel >= 0x60aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060aae0 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_60aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60aae0ULL || rel >= 0x60abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060abb0 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_60abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60abb0ULL || rel >= 0x60ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ac80 size=528 callers=2 calls=0
*/
void sub_60ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ac80ULL || rel >= 0x60ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ae90 size=176 callers=2 calls=1
   calls: sub_603900
*/
void sub_60ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ae90ULL || rel >= 0x60af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060af40 size=1504 callers=18 calls=4
   calls: sub_60af40, sub_60b520, sub_60b7c0, sub_60b920
*/
void sub_60af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60af40ULL || rel >= 0x60b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060b520 size=400 callers=5 calls=0
*/
void sub_60b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60b520ULL || rel >= 0x60b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060b6b0 size=272 callers=2 calls=1
   calls: sub_60b520
*/
void sub_60b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60b6b0ULL || rel >= 0x60b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060b7c0 size=352 callers=2 calls=1
   calls: sub_60b6b0
*/
void sub_60b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60b7c0ULL || rel >= 0x60b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060b920 size=544 callers=2 calls=3
   calls: sub_60b520, sub_60b6b0, sub_60b7c0
*/
void sub_60b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60b920ULL || rel >= 0x60bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060bb40 size=160 callers=2 calls=2
   calls: sub_5d54c0, sub_65d700
*/
void sub_60bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60bb40ULL || rel >= 0x60bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060bbe0 size=848 callers=0 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d1ea0, sub_5d2010, sub_5ecb70, sub_60c650
*/
void sub_60bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60bbe0ULL || rel >= 0x60bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060bf30 size=368 callers=0 calls=0
*/
void sub_60bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60bf30ULL || rel >= 0x60c0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c0a0 size=208 callers=2 calls=1
   calls: sub_60c440
*/
void sub_60c0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c0a0ULL || rel >= 0x60c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c170 size=304 callers=0 calls=0
*/
void sub_60c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c170ULL || rel >= 0x60c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c2a0 size=16 callers=0 calls=0
*/
void sub_60c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c2a0ULL || rel >= 0x60c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c2b0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_60c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c2b0ULL || rel >= 0x60c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c320 size=16 callers=0 calls=0
*/
void sub_60c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c320ULL || rel >= 0x60c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c330 size=16 callers=0 calls=0
*/
void sub_60c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c330ULL || rel >= 0x60c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c340 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_60c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c340ULL || rel >= 0x60c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c3b0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_60c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c3b0ULL || rel >= 0x60c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c420 size=16 callers=0 calls=0
*/
void sub_60c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c420ULL || rel >= 0x60c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c430 size=16 callers=0 calls=0
*/
void sub_60c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c430ULL || rel >= 0x60c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c440 size=528 callers=1 calls=0
*/
void sub_60c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c440ULL || rel >= 0x60c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c650 size=288 callers=3 calls=2
   calls: sub_5d1b50, sub_5d5560
*/
void sub_60c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c650ULL || rel >= 0x60c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c770 size=96 callers=0 calls=0
*/
void sub_60c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c770ULL || rel >= 0x60c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c7d0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_60c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c7d0ULL || rel >= 0x60c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c840 size=176 callers=0 calls=2
   calls: sub_6009f0, sub_60cb50
*/
void sub_60c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c840ULL || rel >= 0x60c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c8f0 size=96 callers=0 calls=0
*/
void sub_60c8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c8f0ULL || rel >= 0x60c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c950 size=96 callers=0 calls=0
*/
void sub_60c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c950ULL || rel >= 0x60c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060c9b0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_60c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c9b0ULL || rel >= 0x60ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ca20 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_60ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ca20ULL || rel >= 0x60ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ca90 size=96 callers=0 calls=0
*/
void sub_60ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ca90ULL || rel >= 0x60caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060caf0 size=96 callers=0 calls=0
*/
void sub_60caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60caf0ULL || rel >= 0x60cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060cb50 size=352 callers=1 calls=0
*/
void sub_60cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60cb50ULL || rel >= 0x60ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ccb0 size=1120 callers=9 calls=6
   calls: sub_178fda0, sub_5f6f50, sub_5f6f80, sub_5f6fe0, sub_60d110, sub_60d9a0
*/
void sub_60ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ccb0ULL || rel >= 0x60d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060d110 size=864 callers=1 calls=6
   calls: sub_1787540, sub_1787560, sub_1787570, sub_178fd30, sub_178fdc0, sub_178fde0
*/
void sub_60d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60d110ULL || rel >= 0x60d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060d470 size=496 callers=2 calls=1
   calls: sub_178fda0
*/
void sub_60d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60d470ULL || rel >= 0x60d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060d660 size=144 callers=0 calls=2
   calls: sub_178fdb0, sub_1790120
*/
void sub_60d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60d660ULL || rel >= 0x60d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060d6f0 size=160 callers=0 calls=2
   calls: sub_178fdb0, sub_1790120
*/
void sub_60d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60d6f0ULL || rel >= 0x60d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060d790 size=144 callers=0 calls=2
   calls: sub_178fdb0, sub_1790120
*/
void sub_60d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60d790ULL || rel >= 0x60d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060d820 size=160 callers=0 calls=2
   calls: sub_178fdb0, sub_1790120
*/
void sub_60d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60d820ULL || rel >= 0x60d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060d8c0 size=224 callers=4 calls=3
   calls: sub_17884a0, sub_1788610, sub_5f7100
*/
void sub_60d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60d8c0ULL || rel >= 0x60d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060d9a0 size=272 callers=1 calls=0
*/
void sub_60d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60d9a0ULL || rel >= 0x60dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060dab0 size=240 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_60dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60dab0ULL || rel >= 0x60dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060dba0 size=240 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_60dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60dba0ULL || rel >= 0x60dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060dc90 size=240 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_60dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60dc90ULL || rel >= 0x60dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060dd80 size=240 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_60dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60dd80ULL || rel >= 0x60de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060de70 size=144 callers=7 calls=2
   calls: DefaultPath, sub_65d700
*/
void sub_60de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60de70ULL || rel >= 0x60df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060df00 size=560 callers=1 calls=11
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_5cfad0, sub_5f3730, sub_5f7110, sub_5f7120, sub_5f7320, sub_5f7540, sub_60e6d0, sub_60f390
   ref: VectorConstantVS
*/
void VectorConstantVS(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60df00ULL || rel >= 0x60e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e130 size=384 callers=1 calls=3
   calls: sub_60e880, sub_60eda0, sub_60f110
*/
void sub_60e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e130ULL || rel >= 0x60e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e2b0 size=16 callers=1 calls=0
*/
void sub_60e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e2b0ULL || rel >= 0x60e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e2c0 size=96 callers=12 calls=1
   calls: sub_6119e0
*/
void sub_60e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e2c0ULL || rel >= 0x60e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e320 size=32 callers=1 calls=0
*/
void sub_60e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e320ULL || rel >= 0x60e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e340 size=80 callers=1 calls=1
   calls: sub_610a40
*/
void sub_60e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e340ULL || rel >= 0x60e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e390 size=80 callers=7 calls=1
   calls: sub_610b20
*/
void sub_60e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e390ULL || rel >= 0x60e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e3e0 size=80 callers=2 calls=1
   calls: sub_610c20
*/
void sub_60e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e3e0ULL || rel >= 0x60e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e430 size=240 callers=0 calls=0
*/
void sub_60e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e430ULL || rel >= 0x60e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e520 size=16 callers=0 calls=0
*/
void sub_60e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e520ULL || rel >= 0x60e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e530 size=16 callers=0 calls=0
*/
void sub_60e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e530ULL || rel >= 0x60e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e540 size=16 callers=0 calls=0
*/
void sub_60e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e540ULL || rel >= 0x60e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e550 size=16 callers=0 calls=0
*/
void sub_60e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e550ULL || rel >= 0x60e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e560 size=16 callers=0 calls=0
*/
void sub_60e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e560ULL || rel >= 0x60e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e570 size=16 callers=0 calls=0
*/
void sub_60e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e570ULL || rel >= 0x60e580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e580 size=16 callers=0 calls=0
*/
void sub_60e580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e580ULL || rel >= 0x60e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e590 size=16 callers=0 calls=0
*/
void sub_60e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e590ULL || rel >= 0x60e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e5a0 size=304 callers=0 calls=0
*/
void sub_60e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e5a0ULL || rel >= 0x60e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e6d0 size=368 callers=1 calls=8
   calls: sub_17880f0, sub_1788170, sub_17893c0, sub_5f7100, sub_60d8c0, sub_60f440, sub_60f4d0, sub_611290
*/
void sub_60e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e6d0ULL || rel >= 0x60e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e840 size=16 callers=0 calls=0
*/
void sub_60e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e840ULL || rel >= 0x60e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e850 size=16 callers=0 calls=0
*/
void sub_60e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e850ULL || rel >= 0x60e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e860 size=16 callers=0 calls=0
*/
void sub_60e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e860ULL || rel >= 0x60e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e870 size=16 callers=0 calls=0
*/
void sub_60e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e870ULL || rel >= 0x60e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e880 size=288 callers=6 calls=2
   calls: sub_1789910, sub_65d700
*/
void sub_60e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e880ULL || rel >= 0x60e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060e9a0 size=480 callers=0 calls=0
*/
void sub_60e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e9a0ULL || rel >= 0x60eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060eb80 size=368 callers=0 calls=3
   calls: sub_1789930, sub_1789a60, sub_5f7130
*/
void sub_60eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60eb80ULL || rel >= 0x60ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ecf0 size=16 callers=0 calls=0
*/
void sub_60ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ecf0ULL || rel >= 0x60ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ed00 size=16 callers=0 calls=0
*/
void sub_60ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ed00ULL || rel >= 0x60ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ed10 size=16 callers=0 calls=0
*/
void sub_60ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ed10ULL || rel >= 0x60ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ed20 size=128 callers=0 calls=1
   calls: sub_60fbf0
*/
void sub_60ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ed20ULL || rel >= 0x60eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060eda0 size=704 callers=6 calls=4
   calls: sub_60f510, sub_60f850, sub_60fa90, sub_60ffa0
*/
void sub_60eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60eda0ULL || rel >= 0x60f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060f060 size=176 callers=0 calls=1
   calls: sub_60ffa0
*/
void sub_60f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f060ULL || rel >= 0x60f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060f110 size=640 callers=6 calls=10
   calls: sub_1787340, sub_1789770, sub_1789860, sub_1789940, sub_1789ac0, sub_1789ad0, sub_5f2480, sub_5f7130, sub_5f7190, sub_60fb00
*/
void sub_60f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f110ULL || rel >= 0x60f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060f390 size=96 callers=18 calls=0
*/
void sub_60f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f390ULL || rel >= 0x60f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060f3f0 size=80 callers=1 calls=0
*/
void sub_60f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f3f0ULL || rel >= 0x60f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060f440 size=144 callers=4 calls=1
   calls: sub_1789530
*/
void sub_60f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f440ULL || rel >= 0x60f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060f4d0 size=64 callers=3 calls=0
*/
void sub_60f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f4d0ULL || rel >= 0x60f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060f510 size=496 callers=1 calls=2
   calls: sub_60f700, sub_60fa90
*/
void sub_60f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f510ULL || rel >= 0x60f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060f700 size=336 callers=1 calls=0
*/
void sub_60f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f700ULL || rel >= 0x60f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060f850 size=576 callers=1 calls=0
*/
void sub_60f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f850ULL || rel >= 0x60fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060fa90 size=112 callers=2 calls=0
*/
void sub_60fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60fa90ULL || rel >= 0x60fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060fb00 size=240 callers=1 calls=3
   calls: sub_1789ae0, sub_1789b70, sub_5f7100
*/
void sub_60fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60fb00ULL || rel >= 0x60fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060fbf0 size=32 callers=1 calls=0
*/
void sub_60fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60fbf0ULL || rel >= 0x60fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060fc10 size=80 callers=1 calls=0
*/
void sub_60fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60fc10ULL || rel >= 0x60fc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060fc60 size=96 callers=0 calls=0
*/
void sub_60fc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60fc60ULL || rel >= 0x60fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060fcc0 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_60fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60fcc0ULL || rel >= 0x60fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060fd10 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_60fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60fd10ULL || rel >= 0x60fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060fd60 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_60fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60fd60ULL || rel >= 0x60fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060fdb0 size=256 callers=17 calls=1
   calls: sub_5fb340
*/
void sub_60fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60fdb0ULL || rel >= 0x60feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060feb0 size=48 callers=2 calls=0
*/
void sub_60feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60feb0ULL || rel >= 0x60fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060fee0 size=192 callers=6 calls=2
   calls: sub_5f7190, sub_5fb3b0
*/
void sub_60fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60fee0ULL || rel >= 0x60ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ffa0 size=32 callers=4 calls=0
*/
void sub_60ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ffa0ULL || rel >= 0x60ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0060ffc0 size=960 callers=2 calls=11
   calls: sub_1787440, sub_1787490, sub_17874c0, sub_1787500, sub_178f6e0, sub_178f700, sub_178f8f0, sub_178fb50, sub_178fb70, sub_5cf8c0, sub_65d700
*/
void sub_60ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ffc0ULL || rel >= 0x610380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00610380 size=416 callers=0 calls=2
   calls: sub_611bd0, sub_682dd0
*/
void sub_610380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x610380ULL || rel >= 0x610520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00610520 size=176 callers=3 calls=2
   calls: sub_1c0, sub_60ffc0
*/
void sub_610520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x610520ULL || rel >= 0x6105d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006105d0 size=560 callers=12 calls=2
   calls: sub_5cf8f0, sub_60ffa0
*/
void sub_6105d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6105d0ULL || rel >= 0x610800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00610800 size=576 callers=0 calls=3
   calls: sub_5e2bc0, sub_5f71c0, sub_682dd0
*/
void sub_610800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x610800ULL || rel >= 0x610a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00610a40 size=224 callers=2 calls=1
   calls: sub_5cf8f0
*/
void sub_610a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x610a40ULL || rel >= 0x610b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00610b20 size=256 callers=11 calls=1
   calls: sub_5cf8f0
*/
void sub_610b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x610b20ULL || rel >= 0x610c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00610c20 size=240 callers=4 calls=1
   calls: sub_5cf8f0
*/
void sub_610c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x610c20ULL || rel >= 0x610d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00610d10 size=368 callers=0 calls=9
   calls: sub_178f6f0, sub_178f8d0, sub_178f900, sub_178fb40, sub_178fb60, sub_178fd20, sub_5cf8d0, sub_610e80, sub_682dd0
*/
void sub_610d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x610d10ULL || rel >= 0x610e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00610e80 size=928 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_610e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x610e80ULL || rel >= 0x611220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00611220 size=64 callers=0 calls=0
*/
void sub_611220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x611220ULL || rel >= 0x611260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00611260 size=16 callers=0 calls=0
*/
void sub_611260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x611260ULL || rel >= 0x611270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00611270 size=16 callers=0 calls=0
*/
void sub_611270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x611270ULL || rel >= 0x611280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00611280 size=16 callers=0 calls=0
*/
void sub_611280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x611280ULL || rel >= 0x611290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00611290 size=816 callers=2 calls=16
   calls: sub_1788210, sub_1788310, sub_17883c0, sub_1789590, sub_178f700, sub_178f8d0, sub_178f8e0, sub_178f910, sub_178f930, sub_178fb40, sub_178fb70, sub_178fd20
   ... +4 more
*/
void sub_611290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x611290ULL || rel >= 0x6115c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006115c0 size=384 callers=4 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5fcc40, sub_611740, sub_682dd0
*/
void sub_6115c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6115c0ULL || rel >= 0x611740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00611740 size=672 callers=18 calls=0
*/
void sub_611740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x611740ULL || rel >= 0x6119e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006119e0 size=496 callers=4 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5fc9d0, sub_60ffa0, sub_611740, sub_611dd0, sub_682dd0
*/
void sub_6119e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6119e0ULL || rel >= 0x611bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00611bd0 size=512 callers=16 calls=0
*/
void sub_611bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x611bd0ULL || rel >= 0x611dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00611dd0 size=592 callers=1 calls=3
   calls: sub_5fc9d0, sub_611bd0, sub_682dd0
*/
void sub_611dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x611dd0ULL || rel >= 0x612020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00612020 size=48 callers=10 calls=0
*/
void sub_612020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x612020ULL || rel >= 0x612050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00612050 size=752 callers=1 calls=1
   calls: sub_612360
*/
void sub_612050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x612050ULL || rel >= 0x612340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00612340 size=16 callers=0 calls=0
*/
void sub_612340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x612340ULL || rel >= 0x612350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00612350 size=16 callers=0 calls=0
*/
void sub_612350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x612350ULL || rel >= 0x612360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00612360 size=496 callers=1 calls=5
   calls: sub_5f6f50, sub_5f6fe0, sub_5f7110, sub_5f7120, sub_5f7320
*/
void sub_612360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x612360ULL || rel >= 0x612550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00612550 size=2048 callers=1 calls=9
   calls: sub_5f7110, sub_5f7120, sub_5f7320, sub_612d50, sub_6133a0, sub_6135c0, sub_6139e0, sub_65ccf0, sub_65d700
*/
void sub_612550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x612550ULL || rel >= 0x612d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00612d50 size=416 callers=1 calls=0
*/
void sub_612d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x612d50ULL || rel >= 0x612ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00612ef0 size=128 callers=76 calls=0
*/
void sub_612ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x612ef0ULL || rel >= 0x612f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00612f70 size=400 callers=83 calls=3
   calls: sub_612f70, sub_65cdb0, sub_65cf90
*/
void sub_612f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x612f70ULL || rel >= 0x613100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00613100 size=320 callers=1 calls=3
   calls: sub_5f7110, sub_5f7320, sub_612f70
*/
void sub_613100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x613100ULL || rel >= 0x613240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00613240 size=304 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_613240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x613240ULL || rel >= 0x613370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00613370 size=16 callers=0 calls=0
*/
void sub_613370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x613370ULL || rel >= 0x613380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00613380 size=16 callers=0 calls=0
*/
void sub_613380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x613380ULL || rel >= 0x613390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00613390 size=16 callers=0 calls=0
*/
void sub_613390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x613390ULL || rel >= 0x6133a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006133a0 size=544 callers=2 calls=0
*/
void sub_6133a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6133a0ULL || rel >= 0x6135c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006135c0 size=1056 callers=1 calls=1
   calls: sub_65ccf0
*/
void sub_6135c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6135c0ULL || rel >= 0x6139e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006139e0 size=496 callers=5 calls=5
   calls: sub_5f6f50, sub_5f6fe0, sub_5f7110, sub_5f7120, sub_5f7320
*/
void sub_6139e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6139e0ULL || rel >= 0x613bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00613bd0 size=2176 callers=1 calls=9
   calls: sub_5a1d00, sub_6139e0, sub_6146f0, sub_615280, sub_615370, sub_6154d0, sub_615690, sub_6157f0, sub_65d700
*/
void sub_613bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x613bd0ULL || rel >= 0x614450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00614450 size=560 callers=1 calls=3
   calls: sub_5f7110, sub_5f7120, sub_5f7320
*/
void sub_614450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x614450ULL || rel >= 0x614680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00614680 size=112 callers=33 calls=0
*/
void sub_614680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x614680ULL || rel >= 0x6146f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006146f0 size=784 callers=1 calls=3
   calls: sub_614a00, sub_614af0, sub_615280
*/
void sub_6146f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6146f0ULL || rel >= 0x614a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00614a00 size=240 callers=2 calls=1
   calls: sub_65d700
*/
void sub_614a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x614a00ULL || rel >= 0x614af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00614af0 size=352 callers=1 calls=3
   calls: sub_614c50, sub_615070, sub_615170
*/
void sub_614af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x614af0ULL || rel >= 0x614c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00614c50 size=368 callers=3 calls=1
   calls: sub_614dc0
*/
void sub_614c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x614c50ULL || rel >= 0x614dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00614dc0 size=688 callers=1 calls=0
*/
void sub_614dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x614dc0ULL || rel >= 0x615070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615070 size=256 callers=1 calls=0
*/
void sub_615070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615070ULL || rel >= 0x615170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615170 size=272 callers=1 calls=0
*/
void sub_615170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615170ULL || rel >= 0x615280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615280 size=240 callers=3 calls=0
*/
void sub_615280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615280ULL || rel >= 0x615370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615370 size=352 callers=1 calls=0
*/
void sub_615370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615370ULL || rel >= 0x6154d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006154d0 size=448 callers=1 calls=0
*/
void sub_6154d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6154d0ULL || rel >= 0x615690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615690 size=352 callers=1 calls=0
*/
void sub_615690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615690ULL || rel >= 0x6157f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006157f0 size=448 callers=1 calls=0
*/
void sub_6157f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6157f0ULL || rel >= 0x6159b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006159b0 size=544 callers=1 calls=2
   calls: sub_5a0ed0, sub_65d700
*/
void sub_6159b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6159b0ULL || rel >= 0x615bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615bd0 size=128 callers=20 calls=0
*/
void sub_615bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615bd0ULL || rel >= 0x615c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615c50 size=240 callers=28 calls=0
*/
void sub_615c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615c50ULL || rel >= 0x615d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615d40 size=32 callers=2 calls=0
*/
void sub_615d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615d40ULL || rel >= 0x615d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615d60 size=16 callers=1 calls=0
*/
void sub_615d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615d60ULL || rel >= 0x615d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615d70 size=16 callers=1 calls=0
*/
void sub_615d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615d70ULL || rel >= 0x615d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615d80 size=272 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_615d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615d80ULL || rel >= 0x615e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615e90 size=16 callers=0 calls=0
*/
void sub_615e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615e90ULL || rel >= 0x615ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615ea0 size=16 callers=0 calls=0
*/
void sub_615ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615ea0ULL || rel >= 0x615eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615eb0 size=16 callers=0 calls=0
*/
void sub_615eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615eb0ULL || rel >= 0x615ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00615ec0 size=544 callers=0 calls=0
*/
void sub_615ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615ec0ULL || rel >= 0x6160e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006160e0 size=1584 callers=3 calls=12
   calls: sub_5cfad0, sub_5db8e0, sub_5ed5e0, sub_612550, sub_613bd0, sub_6159b0, sub_615c50, sub_615d70, sub_616710, sub_616b60, sub_617bc0, sub_65d700
*/
void sub_6160e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6160e0ULL || rel >= 0x616710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00616710 size=1104 callers=1 calls=5
   calls: sub_5f7110, sub_5f7120, sub_5f7320, sub_6139e0, sub_61a320
*/
void sub_616710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x616710ULL || rel >= 0x616b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00616b60 size=2208 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5cfad0, sub_619d00
*/
void sub_616b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x616b60ULL || rel >= 0x617400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617400 size=400 callers=0 calls=3
   calls: sub_5cf8f0, sub_5d2070, sub_967240
*/
void sub_617400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617400ULL || rel >= 0x617590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617590 size=1168 callers=0 calls=4
   calls: sub_5e2bc0, sub_615280, sub_617a20, sub_619770
*/
void sub_617590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617590ULL || rel >= 0x617a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617a20 size=336 callers=1 calls=1
   calls: sub_5cf8f0
*/
void sub_617a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617a20ULL || rel >= 0x617b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617b70 size=16 callers=0 calls=0
*/
void sub_617b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617b70ULL || rel >= 0x617b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617b80 size=16 callers=0 calls=0
*/
void sub_617b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617b80ULL || rel >= 0x617b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617b90 size=16 callers=0 calls=0
*/
void sub_617b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617b90ULL || rel >= 0x617ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617ba0 size=16 callers=0 calls=0
*/
void sub_617ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617ba0ULL || rel >= 0x617bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617bb0 size=16 callers=0 calls=0
*/
void sub_617bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617bb0ULL || rel >= 0x617bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617bc0 size=832 callers=3 calls=5
   calls: sub_617ff0, sub_61a620, sub_61d190, sub_6222b0, sub_624350
*/
void sub_617bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617bc0ULL || rel >= 0x617f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617f00 size=240 callers=1 calls=0
*/
void sub_617f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617f00ULL || rel >= 0x617ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00617ff0 size=368 callers=9 calls=2
   calls: sub_619f00, sub_61b200
*/
void sub_617ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617ff0ULL || rel >= 0x618160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618160 size=64 callers=1 calls=0
*/
void sub_618160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618160ULL || rel >= 0x6181a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006181a0 size=624 callers=1 calls=1
   calls: sub_5cfad0
*/
void sub_6181a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6181a0ULL || rel >= 0x618410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618410 size=224 callers=2 calls=0
*/
void sub_618410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618410ULL || rel >= 0x6184f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006184f0 size=128 callers=1 calls=0
*/
void sub_6184f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6184f0ULL || rel >= 0x618570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618570 size=1040 callers=2 calls=0
*/
void sub_618570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618570ULL || rel >= 0x618980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618980 size=48 callers=2 calls=0
*/
void sub_618980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618980ULL || rel >= 0x6189b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006189b0 size=32 callers=1 calls=0
*/
void sub_6189b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6189b0ULL || rel >= 0x6189d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006189d0 size=208 callers=1 calls=2
   calls: sub_615c50, sub_615d60
*/
void sub_6189d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6189d0ULL || rel >= 0x618aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618aa0 size=64 callers=0 calls=2
   calls: sub_59b970, sub_5db430
*/
void sub_618aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618aa0ULL || rel >= 0x618ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618ae0 size=64 callers=0 calls=2
   calls: sub_59b970, sub_5db430
*/
void sub_618ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618ae0ULL || rel >= 0x618b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618b20 size=304 callers=0 calls=10
   calls: sub_59b970, sub_5db450, sub_5f7110, sub_5f7120, sub_5f7320, sub_613100, sub_614450, sub_617f00, sub_6181a0, sub_618570
*/
void sub_618b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618b20ULL || rel >= 0x618c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618c50 size=16 callers=0 calls=0
*/
void sub_618c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618c50ULL || rel >= 0x618c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618c60 size=16 callers=1 calls=0
*/
void sub_618c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618c60ULL || rel >= 0x618c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618c70 size=64 callers=0 calls=1
   calls: sub_612f70
*/
void sub_618c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618c70ULL || rel >= 0x618cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618cb0 size=144 callers=2 calls=2
   calls: sub_59b970, sub_612f70
*/
void sub_618cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618cb0ULL || rel >= 0x618d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618d40 size=80 callers=9 calls=1
   calls: sub_61b6f0
*/
void sub_618d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618d40ULL || rel >= 0x618d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618d90 size=112 callers=5 calls=1
   calls: sub_61b7f0
*/
void sub_618d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618d90ULL || rel >= 0x618e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618e00 size=112 callers=5 calls=1
   calls: sub_61ba90
*/
void sub_618e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618e00ULL || rel >= 0x618e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618e70 size=80 callers=2 calls=1
   calls: sub_61bd20
*/
void sub_618e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618e70ULL || rel >= 0x618ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618ec0 size=128 callers=28 calls=2
   calls: sub_61b640, sub_61c110
*/
void sub_618ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618ec0ULL || rel >= 0x618f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00618f40 size=288 callers=0 calls=7
   calls: sub_5cfad0, sub_6032f0, sub_61a530, sub_61bfe0, sub_61c110, sub_6829a0, sub_682dd0
*/
void sub_618f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x618f40ULL || rel >= 0x619060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619060 size=208 callers=83 calls=2
   calls: sub_61b690, sub_61c110
*/
void sub_619060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619060ULL || rel >= 0x619130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619130 size=144 callers=13 calls=2
   calls: sub_61b690, sub_61c110
*/
void sub_619130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619130ULL || rel >= 0x6191c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006191c0 size=144 callers=23 calls=2
   calls: sub_61b690, sub_61c110
*/
void sub_6191c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6191c0ULL || rel >= 0x619250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619250 size=176 callers=1 calls=1
   calls: sub_61bfe0
   ref: DepthBuffer
*/
void DepthBuffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619250ULL || rel >= 0x619300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619300 size=400 callers=7 calls=1
   calls: sub_5cfad0
*/
void sub_619300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619300ULL || rel >= 0x619490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619490 size=16 callers=3 calls=0
*/
void sub_619490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619490ULL || rel >= 0x6194a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006194a0 size=80 callers=24 calls=1
   calls: sub_61c920
*/
void sub_6194a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6194a0ULL || rel >= 0x6194f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006194f0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_6194f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6194f0ULL || rel >= 0x619560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619560 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_619560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619560ULL || rel >= 0x6195d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006195d0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_6195d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6195d0ULL || rel >= 0x619640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619640 size=304 callers=48 calls=0
*/
void sub_619640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619640ULL || rel >= 0x619770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619770 size=464 callers=19 calls=0
*/
void sub_619770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619770ULL || rel >= 0x619940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619940 size=64 callers=0 calls=1
   calls: sub_61b770
*/
void sub_619940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619940ULL || rel >= 0x619980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619980 size=16 callers=0 calls=0
*/
void sub_619980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619980ULL || rel >= 0x619990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619990 size=16 callers=0 calls=0
*/
void sub_619990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619990ULL || rel >= 0x6199a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006199a0 size=16 callers=0 calls=0
*/
void sub_6199a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6199a0ULL || rel >= 0x6199b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006199b0 size=80 callers=0 calls=0
*/
void sub_6199b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6199b0ULL || rel >= 0x619a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619a00 size=128 callers=0 calls=0
*/
void sub_619a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619a00ULL || rel >= 0x619a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619a80 size=16 callers=0 calls=0
*/
void sub_619a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619a80ULL || rel >= 0x619a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619a90 size=224 callers=0 calls=1
   calls: sub_619bb0
*/
void sub_619a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619a90ULL || rel >= 0x619b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619b70 size=16 callers=0 calls=0
*/
void sub_619b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619b70ULL || rel >= 0x619b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619b80 size=16 callers=0 calls=0
*/
void sub_619b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619b80ULL || rel >= 0x619b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619b90 size=16 callers=0 calls=0
*/
void sub_619b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619b90ULL || rel >= 0x619ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619ba0 size=16 callers=0 calls=0
*/
void sub_619ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619ba0ULL || rel >= 0x619bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619bb0 size=288 callers=5 calls=1
   calls: sub_61d6b0
*/
void sub_619bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619bb0ULL || rel >= 0x619cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619cd0 size=48 callers=0 calls=0
*/
void sub_619cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619cd0ULL || rel >= 0x619d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619d00 size=512 callers=1 calls=0
*/
void sub_619d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619d00ULL || rel >= 0x619f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00619f00 size=768 callers=1 calls=2
   calls: sub_61a200, sub_61b200
*/
void sub_619f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619f00ULL || rel >= 0x61a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

