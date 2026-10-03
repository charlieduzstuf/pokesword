/* main functions 0061a200..00636430 (40 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0061a200 size=288 callers=1 calls=0
*/
void sub_61a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61a200ULL || rel >= 0x61a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061a320 size=528 callers=1 calls=0
*/
void sub_61a320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61a320ULL || rel >= 0x61a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061a530 size=240 callers=1 calls=1
   calls: sub_5ffbb0
*/
void sub_61a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61a530ULL || rel >= 0x61a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061a620 size=80 callers=5 calls=1
   calls: sub_612020
*/
void sub_61a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61a620ULL || rel >= 0x61a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061a670 size=672 callers=0 calls=2
   calls: sub_612050, sub_614680
*/
void sub_61a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61a670ULL || rel >= 0x61a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061a910 size=384 callers=0 calls=1
   calls: sub_60ffc0
*/
void sub_61a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61a910ULL || rel >= 0x61aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061aa90 size=624 callers=0 calls=3
   calls: sub_5e2bc0, sub_60fdb0, sub_6105d0
*/
void sub_61aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61aa90ULL || rel >= 0x61ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061ad00 size=352 callers=0 calls=1
   calls: sub_6119e0
*/
void sub_61ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61ad00ULL || rel >= 0x61ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061ae60 size=304 callers=0 calls=2
   calls: sub_1787440, sub_610a40
*/
void sub_61ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61ae60ULL || rel >= 0x61af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061af90 size=304 callers=0 calls=2
   calls: sub_1787500, sub_610b20
*/
void sub_61af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61af90ULL || rel >= 0x61b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061b0c0 size=288 callers=0 calls=3
   calls: sub_1787490, sub_17874c0, sub_610c20
*/
void sub_61b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b0c0ULL || rel >= 0x61b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061b1e0 size=16 callers=0 calls=0
*/
void sub_61b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b1e0ULL || rel >= 0x61b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061b1f0 size=16 callers=0 calls=0
*/
void sub_61b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b1f0ULL || rel >= 0x61b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061b200 size=656 callers=2 calls=4
   calls: sub_61b490, sub_61c150, sub_61c360, sub_65d700
*/
void sub_61b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b200ULL || rel >= 0x61b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061b490 size=432 callers=1 calls=0
*/
void sub_61b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b490ULL || rel >= 0x61b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061b640 size=80 callers=1 calls=1
   calls: sub_602930
*/
void sub_61b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b640ULL || rel >= 0x61b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061b690 size=96 callers=4 calls=0
*/
void sub_61b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b690ULL || rel >= 0x61b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061b6f0 size=128 callers=1 calls=0
*/
void sub_61b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b6f0ULL || rel >= 0x61b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061b770 size=128 callers=1 calls=0
*/
void sub_61b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b770ULL || rel >= 0x61b7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061b7f0 size=672 callers=1 calls=2
   calls: sub_17874f0, sub_610b20
*/
void sub_61b7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b7f0ULL || rel >= 0x61ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061ba90 size=656 callers=1 calls=2
   calls: sub_17874f0, sub_610b20
*/
void sub_61ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61ba90ULL || rel >= 0x61bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061bd20 size=336 callers=1 calls=1
   calls: sub_5fcfe0
*/
void sub_61bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61bd20ULL || rel >= 0x61be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061be70 size=160 callers=3 calls=1
   calls: sub_61c990
*/
void sub_61be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61be70ULL || rel >= 0x61bf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061bf10 size=208 callers=2 calls=1
   calls: sub_61cb40
*/
void sub_61bf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61bf10ULL || rel >= 0x61bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061bfe0 size=160 callers=6 calls=1
   calls: sub_61ca60
*/
void sub_61bfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61bfe0ULL || rel >= 0x61c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061c080 size=144 callers=2 calls=0
*/
void sub_61c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61c080ULL || rel >= 0x61c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061c110 size=64 callers=6 calls=0
*/
void sub_61c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61c110ULL || rel >= 0x61c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061c150 size=528 callers=1 calls=0
*/
void sub_61c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61c150ULL || rel >= 0x61c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061c360 size=992 callers=1 calls=3
   calls: sub_61c740, sub_61cd20, sub_65d700
*/
void sub_61c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61c360ULL || rel >= 0x61c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061c740 size=480 callers=1 calls=0
*/
void sub_61c740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61c740ULL || rel >= 0x61c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061c920 size=112 callers=1 calls=0
*/
void sub_61c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61c920ULL || rel >= 0x61c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061c990 size=112 callers=1 calls=0
*/
void sub_61c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61c990ULL || rel >= 0x61ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061ca00 size=96 callers=2 calls=1
   calls: sub_6115c0
*/
void sub_61ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61ca00ULL || rel >= 0x61ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061ca60 size=224 callers=1 calls=1
   calls: sub_6115c0
*/
void sub_61ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61ca60ULL || rel >= 0x61cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061cb40 size=96 callers=1 calls=0
*/
void sub_61cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61cb40ULL || rel >= 0x61cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061cba0 size=32 callers=2 calls=0
*/
void sub_61cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61cba0ULL || rel >= 0x61cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061cbc0 size=304 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_61cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61cbc0ULL || rel >= 0x61ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061ccf0 size=16 callers=0 calls=0
*/
void sub_61ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61ccf0ULL || rel >= 0x61cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061cd00 size=16 callers=0 calls=0
*/
void sub_61cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61cd00ULL || rel >= 0x61cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061cd10 size=16 callers=0 calls=0
*/
void sub_61cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61cd10ULL || rel >= 0x61cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061cd20 size=576 callers=1 calls=0
*/
void sub_61cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61cd20ULL || rel >= 0x61cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061cf60 size=560 callers=0 calls=1
   calls: sub_5cfad0
*/
void sub_61cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61cf60ULL || rel >= 0x61d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d190 size=112 callers=2 calls=1
   calls: sub_61a620
*/
void sub_61d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d190ULL || rel >= 0x61d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d200 size=16 callers=0 calls=0
*/
void sub_61d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d200ULL || rel >= 0x61d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d210 size=368 callers=0 calls=2
   calls: sub_5cfad0, sub_619bb0
*/
void sub_61d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d210ULL || rel >= 0x61d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d380 size=656 callers=0 calls=4
   calls: sub_5e2bc0, sub_60fdb0, sub_60feb0, sub_6105d0
*/
void sub_61d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d380ULL || rel >= 0x61d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d610 size=80 callers=0 calls=0
*/
void sub_61d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d610ULL || rel >= 0x61d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d660 size=32 callers=0 calls=0
*/
void sub_61d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d660ULL || rel >= 0x61d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d680 size=16 callers=0 calls=0
*/
void sub_61d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d680ULL || rel >= 0x61d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d690 size=16 callers=0 calls=0
*/
void sub_61d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d690ULL || rel >= 0x61d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d6a0 size=16 callers=0 calls=0
*/
void sub_61d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d6a0ULL || rel >= 0x61d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d6b0 size=704 callers=1 calls=4
   calls: sub_60e880, sub_60eda0, sub_60f110, sub_61f5b0
*/
void sub_61d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d6b0ULL || rel >= 0x61d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061d970 size=592 callers=0 calls=9
   calls: sub_5cfad0, sub_5f32b0, sub_6115c0, sub_61ca00, sub_61e4c0, sub_621410, sub_621630, sub_6829a0, sub_682dd0
*/
void sub_61d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d970ULL || rel >= 0x61dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061dbc0 size=320 callers=0 calls=6
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_5f3730, sub_5f7540, sub_61e6e0
*/
void sub_61dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61dbc0ULL || rel >= 0x61dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061dd00 size=1136 callers=0 calls=11
   calls: sub_5cfad0, sub_5f7110, sub_5f7120, sub_5f7320, sub_60f390, sub_61e4c0, sub_61f890, sub_620180, sub_620790, sub_620820, sub_620830
   ref: worldViewProjConstant
   ref: transformConstant
   ref: lightConstant
   ref: frameConstant
*/
void worldViewProjConstant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61dd00ULL || rel >= 0x61e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e170 size=16 callers=0 calls=0
*/
void sub_61e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e170ULL || rel >= 0x61e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e180 size=384 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_61e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e180ULL || rel >= 0x61e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e300 size=16 callers=0 calls=0
*/
void sub_61e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e300ULL || rel >= 0x61e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e310 size=112 callers=0 calls=1
   calls: sub_61e5b0
*/
void sub_61e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e310ULL || rel >= 0x61e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e380 size=32 callers=0 calls=0
*/
void sub_61e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e380ULL || rel >= 0x61e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e3a0 size=16 callers=0 calls=0
*/
void sub_61e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e3a0ULL || rel >= 0x61e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e3b0 size=16 callers=0 calls=0
*/
void sub_61e3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e3b0ULL || rel >= 0x61e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e3c0 size=112 callers=0 calls=1
   calls: sub_61e5b0
*/
void sub_61e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e3c0ULL || rel >= 0x61e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e430 size=112 callers=0 calls=1
   calls: sub_61e5b0
*/
void sub_61e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e430ULL || rel >= 0x61e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e4a0 size=16 callers=0 calls=0
*/
void sub_61e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e4a0ULL || rel >= 0x61e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e4b0 size=16 callers=0 calls=0
*/
void sub_61e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e4b0ULL || rel >= 0x61e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e4c0 size=240 callers=7 calls=1
   calls: sub_967240
*/
void sub_61e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e4c0ULL || rel >= 0x61e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e5b0 size=304 callers=3 calls=0
*/
void sub_61e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e5b0ULL || rel >= 0x61e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e6e0 size=368 callers=1 calls=7
   calls: sub_17880f0, sub_1788170, sub_5f7100, sub_60d8c0, sub_60f440, sub_60f4d0, sub_61cba0
*/
void sub_61e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e6e0ULL || rel >= 0x61e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e850 size=16 callers=0 calls=0
*/
void sub_61e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e850ULL || rel >= 0x61e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e860 size=16 callers=0 calls=0
*/
void sub_61e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e860ULL || rel >= 0x61e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e870 size=16 callers=0 calls=0
*/
void sub_61e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e870ULL || rel >= 0x61e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e880 size=16 callers=0 calls=0
*/
void sub_61e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e880ULL || rel >= 0x61e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e890 size=80 callers=0 calls=1
   calls: sub_682dd0
*/
void sub_61e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e890ULL || rel >= 0x61e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061e8e0 size=1440 callers=1 calls=7
   calls: sub_5e2350, sub_5fc600, sub_5fda10, sub_5fe6a0, sub_611740, sub_61f120, sub_682dd0
*/
void sub_61e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e8e0ULL || rel >= 0x61ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061ee80 size=320 callers=0 calls=1
   calls: sub_682dd0
*/
void sub_61ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61ee80ULL || rel >= 0x61efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061efc0 size=16 callers=0 calls=0
*/
void sub_61efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61efc0ULL || rel >= 0x61efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061efd0 size=240 callers=0 calls=0
*/
void sub_61efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61efd0ULL || rel >= 0x61f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f0c0 size=16 callers=0 calls=0
*/
void sub_61f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f0c0ULL || rel >= 0x61f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f0d0 size=16 callers=0 calls=0
*/
void sub_61f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f0d0ULL || rel >= 0x61f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f0e0 size=16 callers=0 calls=0
*/
void sub_61f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f0e0ULL || rel >= 0x61f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f0f0 size=16 callers=0 calls=0
*/
void sub_61f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f0f0ULL || rel >= 0x61f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f100 size=16 callers=0 calls=0
*/
void sub_61f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f100ULL || rel >= 0x61f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f110 size=16 callers=0 calls=0
*/
void sub_61f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f110ULL || rel >= 0x61f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f120 size=720 callers=1 calls=3
   calls: sub_5fc550, sub_61f3f0, sub_682dd0
*/
void sub_61f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f120ULL || rel >= 0x61f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f3f0 size=336 callers=1 calls=1
   calls: sub_611bd0
*/
void sub_61f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f3f0ULL || rel >= 0x61f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f540 size=112 callers=0 calls=1
   calls: sub_5fc550
*/
void sub_61f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f540ULL || rel >= 0x61f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f5b0 size=480 callers=2 calls=3
   calls: DefaultPath, sub_612ef0, sub_615d40
*/
void sub_61f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f5b0ULL || rel >= 0x61f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f790 size=160 callers=1 calls=0
*/
void sub_61f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f790ULL || rel >= 0x61f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f830 size=96 callers=0 calls=0
*/
void sub_61f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f830ULL || rel >= 0x61f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061f890 size=1584 callers=2 calls=5
   calls: sub_612f70, sub_615d40, sub_65cd50, sub_65cd90, sub_65cdb0
*/
void sub_61f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f890ULL || rel >= 0x61fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061fec0 size=32 callers=2 calls=0
*/
void sub_61fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61fec0ULL || rel >= 0x61fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061fee0 size=16 callers=1 calls=0
*/
void sub_61fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61fee0ULL || rel >= 0x61fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061fef0 size=256 callers=0 calls=0
*/
void sub_61fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61fef0ULL || rel >= 0x61fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0061fff0 size=256 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_61fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61fff0ULL || rel >= 0x6200f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006200f0 size=16 callers=0 calls=0
*/
void sub_6200f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6200f0ULL || rel >= 0x620100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620100 size=16 callers=0 calls=0
*/
void sub_620100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620100ULL || rel >= 0x620110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620110 size=16 callers=0 calls=0
*/
void sub_620110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620110ULL || rel >= 0x620120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620120 size=16 callers=0 calls=0
*/
void sub_620120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620120ULL || rel >= 0x620130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620130 size=16 callers=0 calls=0
*/
void sub_620130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620130ULL || rel >= 0x620140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620140 size=16 callers=0 calls=0
*/
void sub_620140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620140ULL || rel >= 0x620150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620150 size=16 callers=0 calls=0
*/
void sub_620150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620150ULL || rel >= 0x620160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620160 size=16 callers=0 calls=0
*/
void sub_620160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620160ULL || rel >= 0x620170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620170 size=16 callers=0 calls=0
*/
void sub_620170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620170ULL || rel >= 0x620180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620180 size=1520 callers=2 calls=0
*/
void sub_620180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620180ULL || rel >= 0x620770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620770 size=32 callers=1 calls=0
*/
void sub_620770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620770ULL || rel >= 0x620790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620790 size=144 callers=2 calls=2
   calls: sub_620d60, sub_620ee0
*/
void sub_620790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620790ULL || rel >= 0x620820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620820 size=16 callers=2 calls=0
*/
void sub_620820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620820ULL || rel >= 0x620830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620830 size=544 callers=1 calls=0
*/
void sub_620830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620830ULL || rel >= 0x620a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620a50 size=112 callers=17 calls=2
   calls: sub_5cf8c0, sub_65d700
*/
void sub_620a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620a50ULL || rel >= 0x620ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620ac0 size=336 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_620c10, sub_620ef0
*/
void sub_620ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620ac0ULL || rel >= 0x620c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620c10 size=336 callers=1 calls=1
   calls: sub_620d80
*/
void sub_620c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620c10ULL || rel >= 0x620d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620d60 size=16 callers=4 calls=0
*/
void sub_620d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620d60ULL || rel >= 0x620d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620d70 size=16 callers=28 calls=0
*/
void sub_620d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620d70ULL || rel >= 0x620d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620d80 size=352 callers=3 calls=0
*/
void sub_620d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620d80ULL || rel >= 0x620ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620ee0 size=16 callers=1 calls=0
*/
void sub_620ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620ee0ULL || rel >= 0x620ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00620ef0 size=528 callers=1 calls=0
*/
void sub_620ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620ef0ULL || rel >= 0x621100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621100 size=112 callers=1 calls=2
   calls: sub_5cf8c0, sub_65d700
*/
void sub_621100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621100ULL || rel >= 0x621170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621170 size=336 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_6212c0, sub_6216e0
*/
void sub_621170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621170ULL || rel >= 0x6212c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006212c0 size=336 callers=1 calls=1
   calls: sub_6214d0
*/
void sub_6212c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6212c0ULL || rel >= 0x621410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621410 size=16 callers=3 calls=0
*/
void sub_621410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621410ULL || rel >= 0x621420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621420 size=176 callers=2 calls=1
   calls: sub_6214d0
*/
void sub_621420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621420ULL || rel >= 0x6214d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006214d0 size=352 callers=7 calls=0
*/
void sub_6214d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6214d0ULL || rel >= 0x621630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621630 size=176 callers=1 calls=1
   calls: sub_6214d0
*/
void sub_621630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621630ULL || rel >= 0x6216e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006216e0 size=528 callers=1 calls=0
*/
void sub_6216e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6216e0ULL || rel >= 0x6218f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006218f0 size=112 callers=2 calls=1
   calls: sub_621960
*/
void sub_6218f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6218f0ULL || rel >= 0x621960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621960 size=640 callers=1 calls=4
   calls: sub_5cfad0, sub_5f24b0, sub_5fe6a0, sub_608fa0
*/
void sub_621960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621960ULL || rel >= 0x621be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621be0 size=96 callers=0 calls=0
*/
void sub_621be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621be0ULL || rel >= 0x621c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621c40 size=96 callers=0 calls=0
*/
void sub_621c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621c40ULL || rel >= 0x621ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621ca0 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_621ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621ca0ULL || rel >= 0x621d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621d50 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_621d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621d50ULL || rel >= 0x621e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621e50 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_621e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621e50ULL || rel >= 0x621f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00621f50 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_621f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621f50ULL || rel >= 0x622000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00622000 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_622000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x622000ULL || rel >= 0x6220b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006220b0 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_6220b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6220b0ULL || rel >= 0x6221b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006221b0 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_6221b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6221b0ULL || rel >= 0x6222b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006222b0 size=64 callers=4 calls=1
   calls: sub_61a620
*/
void sub_6222b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6222b0ULL || rel >= 0x6222f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006222f0 size=96 callers=0 calls=0
*/
void sub_6222f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6222f0ULL || rel >= 0x622350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00622350 size=16 callers=0 calls=0
*/
void sub_622350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x622350ULL || rel >= 0x622360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00622360 size=704 callers=0 calls=5
   calls: sub_5e2bc0, sub_5fb390, sub_60fdb0, sub_60feb0, sub_6105d0
*/
void sub_622360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x622360ULL || rel >= 0x622620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00622620 size=96 callers=0 calls=3
   calls: sub_1787490, sub_17874c0, sub_610c20
*/
void sub_622620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x622620ULL || rel >= 0x622680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00622680 size=320 callers=0 calls=2
   calls: sub_5cfad0, sub_6227d0
*/
void sub_622680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x622680ULL || rel >= 0x6227c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006227c0 size=16 callers=0 calls=0
*/
void sub_6227c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6227c0ULL || rel >= 0x6227d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006227d0 size=288 callers=1 calls=1
   calls: sub_6228f0
*/
void sub_6227d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6227d0ULL || rel >= 0x6228f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006228f0 size=1008 callers=1 calls=5
   calls: sub_60e880, sub_60eda0, sub_60f110, sub_61f5b0, sub_623900
*/
void sub_6228f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6228f0ULL || rel >= 0x622ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00622ce0 size=752 callers=0 calls=2
   calls: sub_5e2bc0, sub_603900
*/
void sub_622ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x622ce0ULL || rel >= 0x622fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00622fd0 size=16 callers=0 calls=0
*/
void sub_622fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x622fd0ULL || rel >= 0x622fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00622fe0 size=16 callers=0 calls=0
*/
void sub_622fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x622fe0ULL || rel >= 0x622ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00622ff0 size=16 callers=0 calls=0
*/
void sub_622ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x622ff0ULL || rel >= 0x623000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623000 size=16 callers=0 calls=0
*/
void sub_623000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623000ULL || rel >= 0x623010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623010 size=16 callers=0 calls=0
*/
void sub_623010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623010ULL || rel >= 0x623020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623020 size=320 callers=0 calls=6
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_5f3730, sub_5f7540, sub_623a00
*/
void sub_623020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623020ULL || rel >= 0x623160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623160 size=1056 callers=0 calls=11
   calls: sub_5cfad0, sub_5f7110, sub_5f7120, sub_5f7320, sub_60f390, sub_61e4c0, sub_61f890, sub_620180, sub_620770, sub_620790, sub_620820
   ref: worldViewProjConstant
   ref: lightConstant
   ref: frameConstant
*/
void worldViewProjConstant_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623160ULL || rel >= 0x623580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623580 size=16 callers=0 calls=0
*/
void sub_623580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623580ULL || rel >= 0x623590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623590 size=112 callers=0 calls=1
   calls: sub_623600
*/
void sub_623590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623590ULL || rel >= 0x623600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623600 size=240 callers=1 calls=1
   calls: sub_603900
*/
void sub_623600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623600ULL || rel >= 0x6236f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006236f0 size=176 callers=0 calls=1
   calls: sub_603900
*/
void sub_6236f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6236f0ULL || rel >= 0x6237a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006237a0 size=176 callers=0 calls=1
   calls: sub_603900
*/
void sub_6237a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6237a0ULL || rel >= 0x623850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623850 size=176 callers=0 calls=1
   calls: sub_603900
*/
void sub_623850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623850ULL || rel >= 0x623900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623900 size=256 callers=1 calls=1
   calls: sub_60d470
*/
void sub_623900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623900ULL || rel >= 0x623a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623a00 size=368 callers=1 calls=7
   calls: sub_17880f0, sub_1788170, sub_5f7100, sub_60d8c0, sub_60f440, sub_60f4d0, sub_61cba0
*/
void sub_623a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623a00ULL || rel >= 0x623b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623b70 size=16 callers=0 calls=0
*/
void sub_623b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623b70ULL || rel >= 0x623b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623b80 size=16 callers=0 calls=0
*/
void sub_623b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623b80ULL || rel >= 0x623b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623b90 size=16 callers=0 calls=0
*/
void sub_623b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623b90ULL || rel >= 0x623ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623ba0 size=16 callers=0 calls=0
*/
void sub_623ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623ba0ULL || rel >= 0x623bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623bb0 size=16 callers=0 calls=0
*/
void sub_623bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623bb0ULL || rel >= 0x623bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623bc0 size=592 callers=0 calls=0
*/
void sub_623bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623bc0ULL || rel >= 0x623e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623e10 size=416 callers=0 calls=2
   calls: sub_5cfad0, sub_619bb0
*/
void sub_623e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623e10ULL || rel >= 0x623fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00623fb0 size=160 callers=0 calls=3
   calls: sub_1787500, sub_610b20, sub_6240a0
*/
void sub_623fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623fb0ULL || rel >= 0x624050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00624050 size=80 callers=0 calls=0
*/
void sub_624050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624050ULL || rel >= 0x6240a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006240a0 size=688 callers=2 calls=1
   calls: sub_5fb390
*/
void sub_6240a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6240a0ULL || rel >= 0x624350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00624350 size=112 callers=1 calls=1
   calls: sub_61a620
*/
void sub_624350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624350ULL || rel >= 0x6243c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006243c0 size=864 callers=0 calls=3
   calls: sub_5cfad0, sub_619bb0, sub_624a70
*/
void sub_6243c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6243c0ULL || rel >= 0x624720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00624720 size=672 callers=0 calls=4
   calls: sub_5e2bc0, sub_60fdb0, sub_6105d0, sub_6240a0
*/
void sub_624720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624720ULL || rel >= 0x6249c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006249c0 size=96 callers=0 calls=3
   calls: sub_1787490, sub_17874c0, sub_610c20
*/
void sub_6249c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6249c0ULL || rel >= 0x624a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00624a20 size=80 callers=0 calls=0
*/
void sub_624a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624a20ULL || rel >= 0x624a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00624a70 size=256 callers=1 calls=1
   calls: sub_60d470
*/
void sub_624a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624a70ULL || rel >= 0x624b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00624b70 size=336 callers=0 calls=0
*/
void sub_624b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624b70ULL || rel >= 0x624cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00624cc0 size=336 callers=0 calls=2
   calls: sub_5cfad0, sub_619bb0
*/
void sub_624cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624cc0ULL || rel >= 0x624e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00624e10 size=80 callers=0 calls=0
*/
void sub_624e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624e10ULL || rel >= 0x624e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00624e60 size=32 callers=2 calls=0
*/
void sub_624e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624e60ULL || rel >= 0x624e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00624e80 size=448 callers=0 calls=1
   calls: sub_5e2180
*/
void sub_624e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624e80ULL || rel >= 0x625040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00625040 size=1024 callers=0 calls=10
   calls: sub_5e2750, sub_5e2830, sub_625480, sub_625730, sub_6264e0, sub_626ee0, sub_6271b0, sub_627ca0, sub_628100, sub_6286e0
   ref: .bnsh_fsh
   ref: .bnsh_vsh
   ref: OutLineRenderPath
   ref: .bnsh_gsh
*/
void OutLineRenderPath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x625040ULL || rel >= 0x625440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00625440 size=64 callers=0 calls=2
   calls: sub_5e2750, sub_5e2830
*/
void sub_625440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x625440ULL || rel >= 0x625480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00625480 size=688 callers=1 calls=7
   calls: sub_5e25c0, sub_5e26a0, sub_5e2930, sub_6283a0, sub_6284d0, sub_62b1d0, sub_ec20
*/
void sub_625480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x625480ULL || rel >= 0x625730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00625730 size=3504 callers=1 calls=6
   calls: sub_5dd4d0, sub_628c20, sub_628dd0, sub_62a4d0, sub_62cb80, sub_62d630
*/
void sub_625730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x625730ULL || rel >= 0x6264e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006264e0 size=2560 callers=1 calls=11
   calls: sub_5f7110, sub_5f7120, sub_60ccb0, sub_6293e0, sub_62dcb0, sub_62dde0, sub_62df40, sub_62e190, sub_62e420, sub_65d700, sub_689610
*/
void sub_6264e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6264e0ULL || rel >= 0x626ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00626ee0 size=720 callers=1 calls=2
   calls: sub_629610, sub_6301a0
*/
void sub_626ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x626ee0ULL || rel >= 0x6271b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006271b0 size=2800 callers=1 calls=7
   calls: sub_6133a0, sub_630490, sub_65cd50, sub_65cd70, sub_65cd90, sub_65cdb0, sub_65cf90
*/
void sub_6271b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6271b0ULL || rel >= 0x627ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00627ca0 size=1120 callers=1 calls=4
   calls: sub_629860, sub_629df0, sub_630ac0, sub_630fa0
*/
void sub_627ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x627ca0ULL || rel >= 0x628100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00628100 size=672 callers=1 calls=2
   calls: sub_631160, sub_631620
*/
void sub_628100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x628100ULL || rel >= 0x6283a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006283a0 size=304 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_6283a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6283a0ULL || rel >= 0x6284d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006284d0 size=528 callers=3 calls=3
   calls: sub_5e6180, sub_62b4b0, sub_d0c0
*/
void sub_6284d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6284d0ULL || rel >= 0x6286e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006286e0 size=512 callers=3 calls=6
   calls: sub_5e25c0, sub_5e26a0, sub_5e2930, sub_6288e0, sub_628a10, sub_62c2a0
*/
void sub_6286e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6286e0ULL || rel >= 0x6288e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006288e0 size=304 callers=3 calls=1
   calls: sub_5e2bc0
*/
void sub_6288e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6288e0ULL || rel >= 0x628a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00628a10 size=528 callers=1 calls=3
   calls: sub_5e6180, sub_62be10, sub_d0c0
*/
void sub_628a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x628a10ULL || rel >= 0x628c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00628c20 size=432 callers=2 calls=2
   calls: sub_5dd4d0, sub_62d630
*/
void sub_628c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x628c20ULL || rel >= 0x628dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00628dd0 size=1552 callers=1 calls=11
   calls: sub_5e2bc0, sub_5fc600, sub_5fcf60, sub_5fcf80, sub_5fcfa0, sub_5fcfc0, sub_5fcfe0, sub_5fcff0, sub_611740, sub_62d890, sub_682dd0
*/
void sub_628dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x628dd0ULL || rel >= 0x6293e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006293e0 size=560 callers=1 calls=0
*/
void sub_6293e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6293e0ULL || rel >= 0x629610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629610 size=592 callers=1 calls=0
*/
void sub_629610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629610ULL || rel >= 0x629860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629860 size=352 callers=1 calls=0
*/
void sub_629860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629860ULL || rel >= 0x6299c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006299c0 size=304 callers=0 calls=3
   calls: sub_629ef0, sub_62a010, sub_62a130
*/
void sub_6299c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6299c0ULL || rel >= 0x629af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629af0 size=16 callers=0 calls=0
*/
void sub_629af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629af0ULL || rel >= 0x629b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629b00 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_629b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629b00ULL || rel >= 0x629bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629bb0 size=160 callers=0 calls=1
   calls: sub_5e2850
*/
void sub_629bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629bb0ULL || rel >= 0x629c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629c50 size=16 callers=0 calls=0
*/
void sub_629c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629c50ULL || rel >= 0x629c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629c60 size=16 callers=0 calls=0
*/
void sub_629c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629c60ULL || rel >= 0x629c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629c70 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_629c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629c70ULL || rel >= 0x629d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629d20 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_629d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629d20ULL || rel >= 0x629dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629dd0 size=16 callers=0 calls=0
*/
void sub_629dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629dd0ULL || rel >= 0x629de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629de0 size=16 callers=0 calls=0
*/
void sub_629de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629de0ULL || rel >= 0x629df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629df0 size=256 callers=2 calls=0
*/
void sub_629df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629df0ULL || rel >= 0x629ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00629ef0 size=288 callers=5 calls=1
   calls: sub_5e2bc0
*/
void sub_629ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629ef0ULL || rel >= 0x62a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062a010 size=288 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_62a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62a010ULL || rel >= 0x62a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062a130 size=624 callers=1 calls=2
   calls: sub_62a3a0, sub_62a4d0
*/
void sub_62a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62a130ULL || rel >= 0x62a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062a3a0 size=304 callers=1 calls=0
*/
void sub_62a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62a3a0ULL || rel >= 0x62a4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062a4d0 size=1184 callers=3 calls=2
   calls: sub_5e2bc0, sub_682dd0
*/
void sub_62a4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62a4d0ULL || rel >= 0x62a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062a970 size=96 callers=0 calls=0
*/
void sub_62a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62a970ULL || rel >= 0x62a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062a9d0 size=96 callers=0 calls=0
*/
void sub_62a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62a9d0ULL || rel >= 0x62aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062aa30 size=112 callers=0 calls=1
   calls: sub_5de540
*/
void sub_62aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62aa30ULL || rel >= 0x62aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062aaa0 size=96 callers=0 calls=0
*/
void sub_62aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62aaa0ULL || rel >= 0x62ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062ab00 size=96 callers=0 calls=0
*/
void sub_62ab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62ab00ULL || rel >= 0x62ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062ab60 size=112 callers=0 calls=1
   calls: sub_5de540
*/
void sub_62ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62ab60ULL || rel >= 0x62abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062abd0 size=112 callers=0 calls=1
   calls: sub_5de540
*/
void sub_62abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62abd0ULL || rel >= 0x62ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062ac40 size=96 callers=0 calls=0
*/
void sub_62ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62ac40ULL || rel >= 0x62aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062aca0 size=96 callers=0 calls=0
*/
void sub_62aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62aca0ULL || rel >= 0x62ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062ad00 size=800 callers=0 calls=2
   calls: sub_5e2bc0, sub_62b020
*/
void sub_62ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62ad00ULL || rel >= 0x62b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062b020 size=432 callers=1 calls=0
*/
void sub_62b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62b020ULL || rel >= 0x62b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062b1d0 size=736 callers=3 calls=0
*/
void sub_62b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62b1d0ULL || rel >= 0x62b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062b4b0 size=672 callers=2 calls=4
   calls: sub_5e6180, sub_62b750, sub_62b800, sub_62b8b0
*/
void sub_62b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62b4b0ULL || rel >= 0x62b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062b750 size=176 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_62b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62b750ULL || rel >= 0x62b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062b800 size=176 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_62b800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62b800ULL || rel >= 0x62b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062b8b0 size=144 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_62b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62b8b0ULL || rel >= 0x62b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062b940 size=800 callers=0 calls=2
   calls: sub_5e2bc0, sub_62bc60
*/
void sub_62b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62b940ULL || rel >= 0x62bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062bc60 size=432 callers=1 calls=0
*/
void sub_62bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62bc60ULL || rel >= 0x62be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062be10 size=672 callers=1 calls=4
   calls: sub_5e6180, sub_62c0b0, sub_62c160, sub_62c210
*/
void sub_62be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62be10ULL || rel >= 0x62c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062c0b0 size=176 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_62c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62c0b0ULL || rel >= 0x62c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062c160 size=176 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_62c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62c160ULL || rel >= 0x62c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062c210 size=144 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_62c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62c210ULL || rel >= 0x62c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062c2a0 size=2272 callers=2 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_5faf20, sub_df90
*/
void sub_62c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62c2a0ULL || rel >= 0x62cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062cb80 size=720 callers=1 calls=3
   calls: sub_62a4d0, sub_62ce50, sub_62d060
*/
void sub_62cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62cb80ULL || rel >= 0x62ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062ce50 size=528 callers=2 calls=1
   calls: sub_65d700
*/
void sub_62ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62ce50ULL || rel >= 0x62d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062d060 size=944 callers=1 calls=2
   calls: sub_62d410, sub_62d4f0
*/
void sub_62d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62d060ULL || rel >= 0x62d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062d410 size=224 callers=1 calls=1
   calls: sub_611bd0
*/
void sub_62d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62d410ULL || rel >= 0x62d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062d4f0 size=320 callers=6 calls=0
*/
void sub_62d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62d4f0ULL || rel >= 0x62d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062d630 size=608 callers=4 calls=0
*/
void sub_62d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62d630ULL || rel >= 0x62d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062d890 size=832 callers=1 calls=3
   calls: sub_5fc550, sub_62dbd0, sub_682dd0
*/
void sub_62d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62d890ULL || rel >= 0x62dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062dbd0 size=224 callers=1 calls=1
   calls: sub_611bd0
*/
void sub_62dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62dbd0ULL || rel >= 0x62dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062dcb0 size=304 callers=2 calls=0
*/
void sub_62dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62dcb0ULL || rel >= 0x62dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062dde0 size=352 callers=2 calls=0
*/
void sub_62dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62dde0ULL || rel >= 0x62df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062df40 size=592 callers=1 calls=3
   calls: sub_62dcb0, sub_62dde0, sub_65d700
*/
void sub_62df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62df40ULL || rel >= 0x62e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062e190 size=656 callers=1 calls=0
*/
void sub_62e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62e190ULL || rel >= 0x62e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062e420 size=3648 callers=3 calls=4
   calls: sub_62e420, sub_62f260, sub_62f9d0, sub_62fde0
*/
void sub_62e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62e420ULL || rel >= 0x62f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062f260 size=1104 callers=5 calls=0
*/
void sub_62f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62f260ULL || rel >= 0x62f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062f6b0 size=800 callers=2 calls=1
   calls: sub_62f260
*/
void sub_62f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62f6b0ULL || rel >= 0x62f9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062f9d0 size=1040 callers=2 calls=1
   calls: sub_62f6b0
*/
void sub_62f9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62f9d0ULL || rel >= 0x62fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0062fde0 size=960 callers=2 calls=3
   calls: sub_62f260, sub_62f6b0, sub_62f9d0
*/
void sub_62fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62fde0ULL || rel >= 0x6301a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006301a0 size=752 callers=1 calls=0
*/
void sub_6301a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6301a0ULL || rel >= 0x630490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00630490 size=512 callers=1 calls=2
   calls: sub_6307d0, sub_630920
*/
void sub_630490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x630490ULL || rel >= 0x630690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00630690 size=320 callers=0 calls=2
   calls: sub_65ccf0, sub_65d700
*/
void sub_630690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x630690ULL || rel >= 0x6307d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006307d0 size=336 callers=1 calls=2
   calls: sub_65ccf0, sub_65d700
*/
void sub_6307d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6307d0ULL || rel >= 0x630920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00630920 size=416 callers=1 calls=1
   calls: sub_629df0
*/
void sub_630920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x630920ULL || rel >= 0x630ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00630ac0 size=784 callers=1 calls=2
   calls: sub_630ea0, sub_65d700
*/
void sub_630ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x630ac0ULL || rel >= 0x630dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00630dd0 size=208 callers=0 calls=1
   calls: sub_65d700
*/
void sub_630dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x630dd0ULL || rel >= 0x630ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00630ea0 size=256 callers=1 calls=0
*/
void sub_630ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x630ea0ULL || rel >= 0x630fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00630fa0 size=448 callers=1 calls=0
*/
void sub_630fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x630fa0ULL || rel >= 0x631160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00631160 size=752 callers=1 calls=2
   calls: sub_631520, sub_65d700
*/
void sub_631160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x631160ULL || rel >= 0x631450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00631450 size=208 callers=0 calls=1
   calls: sub_65d700
*/
void sub_631450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x631450ULL || rel >= 0x631520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00631520 size=256 callers=1 calls=0
*/
void sub_631520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x631520ULL || rel >= 0x631620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00631620 size=544 callers=1 calls=0
*/
void sub_631620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x631620ULL || rel >= 0x631840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00631840 size=240 callers=8 calls=2
   calls: sub_5d8ee0, sub_633fe0
*/
void sub_631840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x631840ULL || rel >= 0x631930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00631930 size=96 callers=2 calls=2
   calls: nn_ldn_SetStationAcceptPolicy, sub_637e80
*/
void sub_631930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x631930ULL || rel >= 0x631990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00631990 size=2352 callers=13 calls=0
   ref: _ZN2nn3ldn22SetStationAcceptPolicyENS0_12AcceptPolicyE
*/
void nn_ldn_SetStationAcceptPolicy(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x631990ULL || rel >= 0x6322c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006322c0 size=32 callers=0 calls=0
*/
void sub_6322c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6322c0ULL || rel >= 0x6322e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006322e0 size=32 callers=0 calls=0
*/
void sub_6322e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6322e0ULL || rel >= 0x632300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632300 size=32 callers=0 calls=0
*/
void sub_632300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632300ULL || rel >= 0x632320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632320 size=48 callers=0 calls=0
*/
void sub_632320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632320ULL || rel >= 0x632350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632350 size=16 callers=0 calls=0
*/
void sub_632350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632350ULL || rel >= 0x632360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632360 size=16 callers=0 calls=0
*/
void sub_632360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632360ULL || rel >= 0x632370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632370 size=16 callers=0 calls=0
*/
void sub_632370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632370ULL || rel >= 0x632380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632380 size=16 callers=0 calls=0
*/
void sub_632380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632380ULL || rel >= 0x632390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632390 size=16 callers=0 calls=0
*/
void sub_632390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632390ULL || rel >= 0x6323a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006323a0 size=16 callers=15 calls=0
*/
void sub_6323a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6323a0ULL || rel >= 0x6323b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006323b0 size=144 callers=0 calls=0
*/
void sub_6323b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6323b0ULL || rel >= 0x632440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632440 size=144 callers=0 calls=0
*/
void sub_632440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632440ULL || rel >= 0x6324d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006324d0 size=32 callers=0 calls=0
*/
void sub_6324d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6324d0ULL || rel >= 0x6324f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006324f0 size=80 callers=0 calls=0
*/
void sub_6324f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6324f0ULL || rel >= 0x632540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632540 size=48 callers=0 calls=0
*/
void sub_632540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632540ULL || rel >= 0x632570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632570 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_632570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632570ULL || rel >= 0x632620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632620 size=16 callers=0 calls=0
*/
void sub_632620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632620ULL || rel >= 0x632630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632630 size=16 callers=0 calls=0
*/
void sub_632630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632630ULL || rel >= 0x632640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632640 size=16 callers=0 calls=0
*/
void sub_632640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632640ULL || rel >= 0x632650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632650 size=16 callers=0 calls=0
*/
void sub_632650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632650ULL || rel >= 0x632660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632660 size=352 callers=0 calls=0
*/
void sub_632660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632660ULL || rel >= 0x6327c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006327c0 size=16 callers=0 calls=0
*/
void sub_6327c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6327c0ULL || rel >= 0x6327d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006327d0 size=16 callers=0 calls=0
*/
void sub_6327d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6327d0ULL || rel >= 0x6327e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006327e0 size=16 callers=0 calls=0
*/
void sub_6327e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6327e0ULL || rel >= 0x6327f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006327f0 size=16 callers=0 calls=0
*/
void sub_6327f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6327f0ULL || rel >= 0x632800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632800 size=32 callers=0 calls=0
*/
void sub_632800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632800ULL || rel >= 0x632820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632820 size=80 callers=0 calls=0
*/
void sub_632820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632820ULL || rel >= 0x632870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632870 size=16 callers=0 calls=0
*/
void sub_632870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632870ULL || rel >= 0x632880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632880 size=16 callers=0 calls=0
*/
void sub_632880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632880ULL || rel >= 0x632890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632890 size=16 callers=0 calls=0
*/
void sub_632890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632890ULL || rel >= 0x6328a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006328a0 size=32 callers=0 calls=0
*/
void sub_6328a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6328a0ULL || rel >= 0x6328c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006328c0 size=16 callers=0 calls=0
*/
void sub_6328c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6328c0ULL || rel >= 0x6328d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006328d0 size=16 callers=0 calls=0
*/
void sub_6328d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6328d0ULL || rel >= 0x6328e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006328e0 size=16 callers=0 calls=0
*/
void sub_6328e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6328e0ULL || rel >= 0x6328f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006328f0 size=16 callers=0 calls=0
*/
void sub_6328f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6328f0ULL || rel >= 0x632900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632900 size=16 callers=0 calls=0
*/
void sub_632900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632900ULL || rel >= 0x632910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632910 size=32 callers=0 calls=0
*/
void sub_632910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632910ULL || rel >= 0x632930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632930 size=16 callers=0 calls=0
*/
void sub_632930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632930ULL || rel >= 0x632940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632940 size=32 callers=0 calls=0
*/
void sub_632940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632940ULL || rel >= 0x632960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632960 size=16 callers=0 calls=0
*/
void sub_632960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632960ULL || rel >= 0x632970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632970 size=144 callers=0 calls=0
*/
void sub_632970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632970ULL || rel >= 0x632a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632a00 size=144 callers=0 calls=0
*/
void sub_632a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632a00ULL || rel >= 0x632a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632a90 size=80 callers=0 calls=0
*/
void sub_632a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632a90ULL || rel >= 0x632ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632ae0 size=64 callers=0 calls=0
*/
void sub_632ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632ae0ULL || rel >= 0x632b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632b20 size=32 callers=0 calls=0
*/
void sub_632b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632b20ULL || rel >= 0x632b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632b40 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_632b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632b40ULL || rel >= 0x632bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632bf0 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_632bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632bf0ULL || rel >= 0x632ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632ca0 size=144 callers=0 calls=0
*/
void sub_632ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632ca0ULL || rel >= 0x632d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632d30 size=144 callers=0 calls=0
*/
void sub_632d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632d30ULL || rel >= 0x632dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632dc0 size=160 callers=0 calls=0
*/
void sub_632dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632dc0ULL || rel >= 0x632e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632e60 size=160 callers=0 calls=0
*/
void sub_632e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632e60ULL || rel >= 0x632f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632f00 size=80 callers=0 calls=0
*/
void sub_632f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632f00ULL || rel >= 0x632f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632f50 size=64 callers=0 calls=0
*/
void sub_632f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632f50ULL || rel >= 0x632f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632f90 size=32 callers=0 calls=0
*/
void sub_632f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632f90ULL || rel >= 0x632fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632fb0 size=16 callers=0 calls=0
*/
void sub_632fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632fb0ULL || rel >= 0x632fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632fc0 size=16 callers=0 calls=0
*/
void sub_632fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632fc0ULL || rel >= 0x632fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632fd0 size=16 callers=0 calls=0
*/
void sub_632fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632fd0ULL || rel >= 0x632fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632fe0 size=16 callers=0 calls=0
*/
void sub_632fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632fe0ULL || rel >= 0x632ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00632ff0 size=16 callers=0 calls=0
*/
void sub_632ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x632ff0ULL || rel >= 0x633000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633000 size=16 callers=0 calls=0
*/
void sub_633000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633000ULL || rel >= 0x633010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633010 size=16 callers=0 calls=0
*/
void sub_633010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633010ULL || rel >= 0x633020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633020 size=16 callers=0 calls=0
*/
void sub_633020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633020ULL || rel >= 0x633030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633030 size=16 callers=0 calls=0
*/
void sub_633030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633030ULL || rel >= 0x633040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633040 size=16 callers=0 calls=0
*/
void sub_633040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633040ULL || rel >= 0x633050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633050 size=16 callers=0 calls=0
*/
void sub_633050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633050ULL || rel >= 0x633060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633060 size=16 callers=0 calls=0
*/
void sub_633060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633060ULL || rel >= 0x633070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633070 size=32 callers=0 calls=0
*/
void sub_633070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633070ULL || rel >= 0x633090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633090 size=16 callers=0 calls=0
*/
void sub_633090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633090ULL || rel >= 0x6330a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006330a0 size=32 callers=0 calls=0
*/
void sub_6330a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6330a0ULL || rel >= 0x6330c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006330c0 size=16 callers=0 calls=0
*/
void sub_6330c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6330c0ULL || rel >= 0x6330d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006330d0 size=32 callers=0 calls=0
*/
void sub_6330d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6330d0ULL || rel >= 0x6330f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006330f0 size=32 callers=0 calls=0
*/
void sub_6330f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6330f0ULL || rel >= 0x633110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633110 size=160 callers=0 calls=0
*/
void sub_633110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633110ULL || rel >= 0x6331b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006331b0 size=160 callers=0 calls=0
*/
void sub_6331b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6331b0ULL || rel >= 0x633250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633250 size=80 callers=0 calls=0
*/
void sub_633250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633250ULL || rel >= 0x6332a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006332a0 size=64 callers=0 calls=0
*/
void sub_6332a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6332a0ULL || rel >= 0x6332e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006332e0 size=32 callers=0 calls=0
*/
void sub_6332e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6332e0ULL || rel >= 0x633300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633300 size=16 callers=0 calls=0
*/
void sub_633300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633300ULL || rel >= 0x633310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633310 size=16 callers=0 calls=0
*/
void sub_633310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633310ULL || rel >= 0x633320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633320 size=16 callers=0 calls=0
*/
void sub_633320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633320ULL || rel >= 0x633330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633330 size=16 callers=0 calls=0
*/
void sub_633330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633330ULL || rel >= 0x633340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633340 size=16 callers=0 calls=0
*/
void sub_633340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633340ULL || rel >= 0x633350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633350 size=16 callers=0 calls=0
*/
void sub_633350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633350ULL || rel >= 0x633360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633360 size=16 callers=0 calls=0
*/
void sub_633360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633360ULL || rel >= 0x633370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633370 size=16 callers=0 calls=0
*/
void sub_633370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633370ULL || rel >= 0x633380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633380 size=16 callers=0 calls=0
*/
void sub_633380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633380ULL || rel >= 0x633390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633390 size=16 callers=0 calls=0
*/
void sub_633390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633390ULL || rel >= 0x6333a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006333a0 size=16 callers=0 calls=0
*/
void sub_6333a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6333a0ULL || rel >= 0x6333b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006333b0 size=16 callers=0 calls=0
*/
void sub_6333b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6333b0ULL || rel >= 0x6333c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006333c0 size=32 callers=0 calls=0
*/
void sub_6333c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6333c0ULL || rel >= 0x6333e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006333e0 size=16 callers=0 calls=0
*/
void sub_6333e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6333e0ULL || rel >= 0x6333f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006333f0 size=32 callers=0 calls=0
*/
void sub_6333f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6333f0ULL || rel >= 0x633410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633410 size=16 callers=0 calls=0
*/
void sub_633410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633410ULL || rel >= 0x633420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633420 size=32 callers=0 calls=0
*/
void sub_633420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633420ULL || rel >= 0x633440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633440 size=352 callers=0 calls=0
*/
void sub_633440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633440ULL || rel >= 0x6335a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006335a0 size=16 callers=0 calls=0
*/
void sub_6335a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6335a0ULL || rel >= 0x6335b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006335b0 size=32 callers=0 calls=0
*/
void sub_6335b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6335b0ULL || rel >= 0x6335d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006335d0 size=16 callers=0 calls=0
*/
void sub_6335d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6335d0ULL || rel >= 0x6335e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006335e0 size=48 callers=0 calls=0
*/
void sub_6335e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6335e0ULL || rel >= 0x633610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633610 size=16 callers=0 calls=0
*/
void sub_633610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633610ULL || rel >= 0x633620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633620 size=16 callers=0 calls=0
*/
void sub_633620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633620ULL || rel >= 0x633630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633630 size=16 callers=0 calls=0
*/
void sub_633630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633630ULL || rel >= 0x633640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633640 size=32 callers=0 calls=0
*/
void sub_633640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633640ULL || rel >= 0x633660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633660 size=16 callers=0 calls=0
*/
void sub_633660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633660ULL || rel >= 0x633670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633670 size=160 callers=0 calls=0
*/
void sub_633670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633670ULL || rel >= 0x633710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633710 size=160 callers=0 calls=0
*/
void sub_633710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633710ULL || rel >= 0x6337b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006337b0 size=80 callers=0 calls=0
*/
void sub_6337b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6337b0ULL || rel >= 0x633800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633800 size=64 callers=0 calls=0
*/
void sub_633800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633800ULL || rel >= 0x633840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633840 size=32 callers=0 calls=0
*/
void sub_633840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633840ULL || rel >= 0x633860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633860 size=16 callers=0 calls=0
*/
void sub_633860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633860ULL || rel >= 0x633870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633870 size=16 callers=0 calls=0
*/
void sub_633870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633870ULL || rel >= 0x633880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633880 size=16 callers=0 calls=0
*/
void sub_633880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633880ULL || rel >= 0x633890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633890 size=16 callers=0 calls=0
*/
void sub_633890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633890ULL || rel >= 0x6338a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006338a0 size=16 callers=0 calls=0
*/
void sub_6338a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6338a0ULL || rel >= 0x6338b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006338b0 size=16 callers=0 calls=0
*/
void sub_6338b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6338b0ULL || rel >= 0x6338c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006338c0 size=16 callers=0 calls=0
*/
void sub_6338c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6338c0ULL || rel >= 0x6338d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006338d0 size=16 callers=0 calls=0
*/
void sub_6338d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6338d0ULL || rel >= 0x6338e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006338e0 size=16 callers=0 calls=0
*/
void sub_6338e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6338e0ULL || rel >= 0x6338f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006338f0 size=16 callers=0 calls=0
*/
void sub_6338f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6338f0ULL || rel >= 0x633900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633900 size=16 callers=0 calls=0
*/
void sub_633900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633900ULL || rel >= 0x633910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633910 size=16 callers=0 calls=0
*/
void sub_633910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633910ULL || rel >= 0x633920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633920 size=32 callers=0 calls=0
*/
void sub_633920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633920ULL || rel >= 0x633940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633940 size=16 callers=0 calls=0
*/
void sub_633940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633940ULL || rel >= 0x633950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633950 size=32 callers=0 calls=0
*/
void sub_633950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633950ULL || rel >= 0x633970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633970 size=16 callers=0 calls=0
*/
void sub_633970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633970ULL || rel >= 0x633980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633980 size=32 callers=0 calls=0
*/
void sub_633980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633980ULL || rel >= 0x6339a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006339a0 size=32 callers=0 calls=0
*/
void sub_6339a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6339a0ULL || rel >= 0x6339c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006339c0 size=80 callers=0 calls=0
*/
void sub_6339c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6339c0ULL || rel >= 0x633a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633a10 size=16 callers=0 calls=0
*/
void sub_633a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633a10ULL || rel >= 0x633a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633a20 size=16 callers=0 calls=0
*/
void sub_633a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633a20ULL || rel >= 0x633a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633a30 size=160 callers=0 calls=0
*/
void sub_633a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633a30ULL || rel >= 0x633ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633ad0 size=160 callers=0 calls=0
*/
void sub_633ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633ad0ULL || rel >= 0x633b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633b70 size=80 callers=0 calls=0
*/
void sub_633b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633b70ULL || rel >= 0x633bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633bc0 size=64 callers=0 calls=0
*/
void sub_633bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633bc0ULL || rel >= 0x633c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633c00 size=32 callers=0 calls=0
*/
void sub_633c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633c00ULL || rel >= 0x633c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633c20 size=16 callers=0 calls=0
*/
void sub_633c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633c20ULL || rel >= 0x633c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633c30 size=16 callers=0 calls=0
*/
void sub_633c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633c30ULL || rel >= 0x633c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633c40 size=16 callers=0 calls=0
*/
void sub_633c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633c40ULL || rel >= 0x633c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633c50 size=16 callers=0 calls=0
*/
void sub_633c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633c50ULL || rel >= 0x633c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633c60 size=16 callers=0 calls=0
*/
void sub_633c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633c60ULL || rel >= 0x633c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633c70 size=16 callers=0 calls=0
*/
void sub_633c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633c70ULL || rel >= 0x633c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633c80 size=16 callers=0 calls=0
*/
void sub_633c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633c80ULL || rel >= 0x633c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633c90 size=16 callers=0 calls=0
*/
void sub_633c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633c90ULL || rel >= 0x633ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633ca0 size=16 callers=0 calls=0
*/
void sub_633ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633ca0ULL || rel >= 0x633cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633cb0 size=16 callers=0 calls=0
*/
void sub_633cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633cb0ULL || rel >= 0x633cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633cc0 size=16 callers=0 calls=0
*/
void sub_633cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633cc0ULL || rel >= 0x633cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633cd0 size=16 callers=0 calls=0
*/
void sub_633cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633cd0ULL || rel >= 0x633ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633ce0 size=32 callers=0 calls=0
*/
void sub_633ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633ce0ULL || rel >= 0x633d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633d00 size=16 callers=0 calls=0
*/
void sub_633d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633d00ULL || rel >= 0x633d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633d10 size=32 callers=0 calls=0
*/
void sub_633d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633d10ULL || rel >= 0x633d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633d30 size=16 callers=0 calls=0
*/
void sub_633d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633d30ULL || rel >= 0x633d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633d40 size=32 callers=0 calls=0
*/
void sub_633d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633d40ULL || rel >= 0x633d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633d60 size=352 callers=0 calls=0
*/
void sub_633d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633d60ULL || rel >= 0x633ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633ec0 size=16 callers=0 calls=0
*/
void sub_633ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633ec0ULL || rel >= 0x633ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633ed0 size=32 callers=0 calls=0
*/
void sub_633ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633ed0ULL || rel >= 0x633ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633ef0 size=16 callers=0 calls=0
*/
void sub_633ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633ef0ULL || rel >= 0x633f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633f00 size=48 callers=0 calls=0
*/
void sub_633f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633f00ULL || rel >= 0x633f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633f30 size=16 callers=0 calls=0
*/
void sub_633f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633f30ULL || rel >= 0x633f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633f40 size=16 callers=0 calls=0
*/
void sub_633f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633f40ULL || rel >= 0x633f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633f50 size=16 callers=0 calls=0
*/
void sub_633f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633f50ULL || rel >= 0x633f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633f60 size=32 callers=0 calls=0
*/
void sub_633f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633f60ULL || rel >= 0x633f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633f80 size=80 callers=0 calls=0
*/
void sub_633f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633f80ULL || rel >= 0x633fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633fd0 size=16 callers=0 calls=0
*/
void sub_633fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633fd0ULL || rel >= 0x633fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00633fe0 size=304 callers=1 calls=2
   calls: sub_5d99d0, sub_634110
*/
void sub_633fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x633fe0ULL || rel >= 0x634110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00634110 size=416 callers=3 calls=2
   calls: sub_5db1b0, sub_608660
*/
void sub_634110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x634110ULL || rel >= 0x6342b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006342b0 size=224 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_602c10, sub_634390
*/
void sub_6342b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6342b0ULL || rel >= 0x634390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00634390 size=416 callers=13 calls=1
   calls: sub_603810
*/
void sub_634390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x634390ULL || rel >= 0x634530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00634530 size=16 callers=0 calls=0
*/
void sub_634530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x634530ULL || rel >= 0x634540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00634540 size=3264 callers=4 calls=3
   calls: sub_603810, sub_637d00, sub_971950
*/
void sub_634540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x634540ULL || rel >= 0x635200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635200 size=16 callers=0 calls=0
*/
void sub_635200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635200ULL || rel >= 0x635210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635210 size=128 callers=0 calls=2
   calls: sub_634540, sub_637d00
*/
void sub_635210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635210ULL || rel >= 0x635290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635290 size=128 callers=0 calls=2
   calls: sub_634540, sub_637d00
*/
void sub_635290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635290ULL || rel >= 0x635310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635310 size=16 callers=0 calls=0
*/
void sub_635310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635310ULL || rel >= 0x635320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635320 size=16 callers=0 calls=0
*/
void sub_635320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635320ULL || rel >= 0x635330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635330 size=16 callers=0 calls=0
*/
void sub_635330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635330ULL || rel >= 0x635340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635340 size=240 callers=0 calls=0
*/
void sub_635340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635340ULL || rel >= 0x635430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635430 size=240 callers=0 calls=0
*/
void sub_635430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635430ULL || rel >= 0x635520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635520 size=32 callers=0 calls=0
*/
void sub_635520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635520ULL || rel >= 0x635540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635540 size=80 callers=0 calls=0
*/
void sub_635540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635540ULL || rel >= 0x635590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635590 size=48 callers=0 calls=0
*/
void sub_635590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635590ULL || rel >= 0x6355c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006355c0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_6355c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6355c0ULL || rel >= 0x635630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635630 size=16 callers=0 calls=0
*/
void sub_635630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635630ULL || rel >= 0x635640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635640 size=16 callers=0 calls=0
*/
void sub_635640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635640ULL || rel >= 0x635650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635650 size=16 callers=0 calls=0
*/
void sub_635650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635650ULL || rel >= 0x635660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635660 size=16 callers=0 calls=0
*/
void sub_635660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635660ULL || rel >= 0x635670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635670 size=16 callers=0 calls=0
*/
void sub_635670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635670ULL || rel >= 0x635680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635680 size=16 callers=0 calls=0
*/
void sub_635680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635680ULL || rel >= 0x635690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635690 size=16 callers=0 calls=0
*/
void sub_635690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635690ULL || rel >= 0x6356a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006356a0 size=16 callers=0 calls=0
*/
void sub_6356a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6356a0ULL || rel >= 0x6356b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006356b0 size=352 callers=0 calls=0
*/
void sub_6356b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6356b0ULL || rel >= 0x635810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635810 size=32 callers=0 calls=0
*/
void sub_635810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635810ULL || rel >= 0x635830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635830 size=16 callers=0 calls=0
*/
void sub_635830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635830ULL || rel >= 0x635840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635840 size=32 callers=0 calls=0
*/
void sub_635840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635840ULL || rel >= 0x635860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635860 size=16 callers=0 calls=0
*/
void sub_635860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635860ULL || rel >= 0x635870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635870 size=16 callers=0 calls=0
*/
void sub_635870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635870ULL || rel >= 0x635880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635880 size=32 callers=0 calls=0
*/
void sub_635880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635880ULL || rel >= 0x6358a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006358a0 size=80 callers=0 calls=0
*/
void sub_6358a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6358a0ULL || rel >= 0x6358f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006358f0 size=16 callers=0 calls=0
*/
void sub_6358f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6358f0ULL || rel >= 0x635900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635900 size=16 callers=0 calls=0
*/
void sub_635900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635900ULL || rel >= 0x635910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635910 size=16 callers=0 calls=0
*/
void sub_635910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635910ULL || rel >= 0x635920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635920 size=32 callers=0 calls=0
*/
void sub_635920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635920ULL || rel >= 0x635940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635940 size=16 callers=0 calls=0
*/
void sub_635940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635940ULL || rel >= 0x635950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635950 size=32 callers=0 calls=0
*/
void sub_635950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635950ULL || rel >= 0x635970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635970 size=16 callers=0 calls=0
*/
void sub_635970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635970ULL || rel >= 0x635980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635980 size=32 callers=0 calls=0
*/
void sub_635980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635980ULL || rel >= 0x6359a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006359a0 size=16 callers=0 calls=0
*/
void sub_6359a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6359a0ULL || rel >= 0x6359b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006359b0 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_6359b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6359b0ULL || rel >= 0x635a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635a10 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_635a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635a10ULL || rel >= 0x635a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635a70 size=32 callers=0 calls=0
*/
void sub_635a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635a70ULL || rel >= 0x635a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635a90 size=16 callers=0 calls=0
*/
void sub_635a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635a90ULL || rel >= 0x635aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635aa0 size=32 callers=0 calls=0
*/
void sub_635aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635aa0ULL || rel >= 0x635ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635ac0 size=16 callers=0 calls=0
*/
void sub_635ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635ac0ULL || rel >= 0x635ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635ad0 size=240 callers=0 calls=0
*/
void sub_635ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635ad0ULL || rel >= 0x635bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635bc0 size=240 callers=0 calls=0
*/
void sub_635bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635bc0ULL || rel >= 0x635cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635cb0 size=80 callers=0 calls=0
*/
void sub_635cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635cb0ULL || rel >= 0x635d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635d00 size=64 callers=0 calls=0
*/
void sub_635d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635d00ULL || rel >= 0x635d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635d40 size=32 callers=0 calls=0
*/
void sub_635d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635d40ULL || rel >= 0x635d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635d60 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_635d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635d60ULL || rel >= 0x635dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635dd0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_635dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635dd0ULL || rel >= 0x635e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635e40 size=256 callers=0 calls=0
*/
void sub_635e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635e40ULL || rel >= 0x635f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00635f40 size=256 callers=0 calls=0
*/
void sub_635f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635f40ULL || rel >= 0x636040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636040 size=240 callers=0 calls=0
*/
void sub_636040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636040ULL || rel >= 0x636130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636130 size=240 callers=0 calls=0
*/
void sub_636130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636130ULL || rel >= 0x636220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636220 size=80 callers=0 calls=0
*/
void sub_636220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636220ULL || rel >= 0x636270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636270 size=64 callers=0 calls=0
*/
void sub_636270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636270ULL || rel >= 0x6362b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006362b0 size=32 callers=0 calls=0
*/
void sub_6362b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6362b0ULL || rel >= 0x6362d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006362d0 size=16 callers=0 calls=0
*/
void sub_6362d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6362d0ULL || rel >= 0x6362e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006362e0 size=16 callers=0 calls=0
*/
void sub_6362e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6362e0ULL || rel >= 0x6362f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006362f0 size=16 callers=0 calls=0
*/
void sub_6362f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6362f0ULL || rel >= 0x636300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636300 size=16 callers=0 calls=0
*/
void sub_636300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636300ULL || rel >= 0x636310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636310 size=16 callers=0 calls=0
*/
void sub_636310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636310ULL || rel >= 0x636320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636320 size=16 callers=0 calls=0
*/
void sub_636320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636320ULL || rel >= 0x636330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636330 size=16 callers=0 calls=0
*/
void sub_636330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636330ULL || rel >= 0x636340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636340 size=16 callers=0 calls=0
*/
void sub_636340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636340ULL || rel >= 0x636350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636350 size=16 callers=0 calls=0
*/
void sub_636350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636350ULL || rel >= 0x636360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636360 size=16 callers=0 calls=0
*/
void sub_636360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636360ULL || rel >= 0x636370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636370 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_636370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636370ULL || rel >= 0x6363d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006363d0 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_6363d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6363d0ULL || rel >= 0x636430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636430 size=32 callers=0 calls=0
*/
void sub_636430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636430ULL || rel >= 0x636450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

