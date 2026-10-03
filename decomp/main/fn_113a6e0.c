/* main functions 0113a6e0..01153ec0 (144 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0113a6e0 size=208 callers=1 calls=2
   calls: sub_1138c70, sub_1144340
*/
void sub_113a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a6e0ULL || rel >= 0x113a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a7b0 size=256 callers=1 calls=2
   calls: sub_1138c70, sub_1144340
*/
void sub_113a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a7b0ULL || rel >= 0x113a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a8b0 size=16 callers=2 calls=0
*/
void sub_113a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a8b0ULL || rel >= 0x113a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a8c0 size=16 callers=7 calls=0
*/
void sub_113a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a8c0ULL || rel >= 0x113a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a8d0 size=16 callers=9 calls=0
*/
void sub_113a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a8d0ULL || rel >= 0x113a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a8e0 size=80 callers=2 calls=2
   calls: sub_113e9c0, sub_1160d50
*/
void sub_113a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a8e0ULL || rel >= 0x113a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a930 size=16 callers=1 calls=0
*/
void sub_113a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a930ULL || rel >= 0x113a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a940 size=80 callers=2 calls=2
   calls: sub_113e9c0, sub_1160d50
*/
void sub_113a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a940ULL || rel >= 0x113a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a990 size=16 callers=5 calls=0
*/
void sub_113a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a990ULL || rel >= 0x113a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a9a0 size=256 callers=1 calls=7
   calls: Play_Camp_ClosenessUp, sub_1108720, sub_1161430, sub_116f370, sub_116f450, sub_1172950, sub_1172e40
*/
void sub_113a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a9a0ULL || rel >= 0x113aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113aaa0 size=1008 callers=11 calls=19
   calls: sub_1108720, sub_1108730, sub_1108740, sub_1108a50, sub_1108a80, sub_1108c50, sub_11274b0, sub_1128e40, sub_1129060, sub_1131f60, sub_1139c30, sub_11443c0
   ... +7 more
   ref: Play_Camp_ClosenessUp
*/
void Play_Camp_ClosenessUp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113aaa0ULL || rel >= 0x113ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113ae90 size=16 callers=2 calls=0
*/
void sub_113ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ae90ULL || rel >= 0x113aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113aea0 size=16 callers=1 calls=0
*/
void sub_113aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113aea0ULL || rel >= 0x113aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113aeb0 size=112 callers=3 calls=3
   calls: sub_11091d0, sub_110c890, sub_116a750
*/
void sub_113aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113aeb0ULL || rel >= 0x113af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113af20 size=80 callers=1 calls=1
   calls: sub_110c890
*/
void sub_113af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113af20ULL || rel >= 0x113af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113af70 size=32 callers=1 calls=0
*/
void sub_113af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113af70ULL || rel >= 0x113af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113af90 size=48 callers=1 calls=1
   calls: sub_1136950
*/
void sub_113af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113af90ULL || rel >= 0x113afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113afc0 size=128 callers=1 calls=1
   calls: sub_115f6b0
*/
void sub_113afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113afc0ULL || rel >= 0x113b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113b040 size=16 callers=2 calls=0
*/
void sub_113b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113b040ULL || rel >= 0x113b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113b050 size=16 callers=1 calls=0
*/
void sub_113b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113b050ULL || rel >= 0x113b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113b060 size=2496 callers=0 calls=2
   calls: sub_113e1f0, sub_1160cf0
*/
void sub_113b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113b060ULL || rel >= 0x113ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113ba20 size=2480 callers=1 calls=12
   calls: sub_112e830, sub_112ea00, sub_1136390, sub_11364d0, sub_115f6b0, sub_1165d10, sub_116d900, sub_65d220, sub_967240, sub_971950, sub_972c70, sub_bf05e0
*/
void sub_113ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ba20ULL || rel >= 0x113c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c3d0 size=16 callers=2 calls=0
*/
void sub_113c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c3d0ULL || rel >= 0x113c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c3e0 size=16 callers=2 calls=0
*/
void sub_113c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c3e0ULL || rel >= 0x113c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c3f0 size=48 callers=0 calls=0
*/
void sub_113c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c3f0ULL || rel >= 0x113c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c420 size=16 callers=2 calls=0
*/
void sub_113c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c420ULL || rel >= 0x113c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c430 size=16 callers=2 calls=0
*/
void sub_113c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c430ULL || rel >= 0x113c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c440 size=80 callers=1 calls=2
   calls: sub_113e9c0, sub_1160d50
*/
void sub_113c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c440ULL || rel >= 0x113c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c490 size=32 callers=0 calls=0
*/
void sub_113c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c490ULL || rel >= 0x113c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c4b0 size=16 callers=1 calls=0
*/
void sub_113c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c4b0ULL || rel >= 0x113c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c4c0 size=352 callers=0 calls=2
   calls: sub_113c7c0, sub_116bc20
*/
void sub_113c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c4c0ULL || rel >= 0x113c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c620 size=16 callers=0 calls=0
*/
void sub_113c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c620ULL || rel >= 0x113c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c630 size=16 callers=0 calls=0
*/
void sub_113c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c630ULL || rel >= 0x113c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c640 size=16 callers=0 calls=0
*/
void sub_113c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c640ULL || rel >= 0x113c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c650 size=16 callers=0 calls=0
*/
void sub_113c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c650ULL || rel >= 0x113c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c660 size=16 callers=0 calls=0
*/
void sub_113c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c660ULL || rel >= 0x113c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c670 size=16 callers=0 calls=0
*/
void sub_113c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c670ULL || rel >= 0x113c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c680 size=16 callers=0 calls=0
*/
void sub_113c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c680ULL || rel >= 0x113c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c690 size=16 callers=0 calls=0
*/
void sub_113c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c690ULL || rel >= 0x113c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c6a0 size=288 callers=17 calls=1
   calls: sub_607750
*/
void sub_113c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c6a0ULL || rel >= 0x113c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113c7c0 size=800 callers=1 calls=0
*/
void sub_113c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c7c0ULL || rel >= 0x113cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113cae0 size=80 callers=0 calls=0
*/
void sub_113cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113cae0ULL || rel >= 0x113cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113cb30 size=80 callers=0 calls=0
*/
void sub_113cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113cb30ULL || rel >= 0x113cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113cb80 size=432 callers=0 calls=2
   calls: sub_113cdd0, sub_5cf8d0
*/
void sub_113cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113cb80ULL || rel >= 0x113cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113cd30 size=80 callers=0 calls=0
*/
void sub_113cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113cd30ULL || rel >= 0x113cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113cd80 size=80 callers=0 calls=0
*/
void sub_113cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113cd80ULL || rel >= 0x113cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113cdd0 size=800 callers=1 calls=0
*/
void sub_113cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113cdd0ULL || rel >= 0x113d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d0f0 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_113d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d0f0ULL || rel >= 0x113d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d1e0 size=240 callers=1 calls=0
*/
void sub_113d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d1e0ULL || rel >= 0x113d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d2d0 size=384 callers=1 calls=2
   calls: sub_5cf8c0, sub_5e2350
*/
void sub_113d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d2d0ULL || rel >= 0x113d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d450 size=128 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_113d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d450ULL || rel >= 0x113d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d4d0 size=128 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_113d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d4d0ULL || rel >= 0x113d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d550 size=16 callers=0 calls=0
*/
void sub_113d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d550ULL || rel >= 0x113d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d560 size=128 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_113d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d560ULL || rel >= 0x113d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d5e0 size=128 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_113d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d5e0ULL || rel >= 0x113d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d660 size=16 callers=0 calls=0
*/
void sub_113d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d660ULL || rel >= 0x113d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d670 size=16 callers=0 calls=0
*/
void sub_113d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d670ULL || rel >= 0x113d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d680 size=128 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_113d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d680ULL || rel >= 0x113d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d700 size=128 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_113d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d700ULL || rel >= 0x113d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d780 size=224 callers=1 calls=1
   calls: sub_1171020
*/
void sub_113d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d780ULL || rel >= 0x113d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d860 size=352 callers=7 calls=3
   calls: sub_113d9c0, sub_5cf8e0, sub_5cf8f0
*/
void sub_113d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d860ULL || rel >= 0x113d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113d9c0 size=304 callers=2 calls=1
   calls: sub_607750
*/
void sub_113d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d9c0ULL || rel >= 0x113daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113daf0 size=336 callers=5 calls=3
   calls: sub_113dc40, sub_5cf8e0, sub_5cf8f0
*/
void sub_113daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113daf0ULL || rel >= 0x113dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113dc40 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_113dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113dc40ULL || rel >= 0x113dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113dd30 size=16 callers=0 calls=0
*/
void sub_113dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113dd30ULL || rel >= 0x113dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113dd40 size=16 callers=0 calls=0
*/
void sub_113dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113dd40ULL || rel >= 0x113dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113dd50 size=16 callers=0 calls=0
*/
void sub_113dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113dd50ULL || rel >= 0x113dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113dd60 size=16 callers=0 calls=0
*/
void sub_113dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113dd60ULL || rel >= 0x113dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113dd70 size=80 callers=0 calls=2
   calls: sub_113ba20, sub_1164130
*/
void sub_113dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113dd70ULL || rel >= 0x113ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113ddc0 size=16 callers=0 calls=0
*/
void sub_113ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ddc0ULL || rel >= 0x113ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113ddd0 size=16 callers=0 calls=0
*/
void sub_113ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ddd0ULL || rel >= 0x113dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113dde0 size=16 callers=0 calls=0
*/
void sub_113dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113dde0ULL || rel >= 0x113ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113ddf0 size=448 callers=1 calls=0
*/
void sub_113ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ddf0ULL || rel >= 0x113dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113dfb0 size=336 callers=2 calls=3
   calls: sub_113e100, sub_5cf8e0, sub_5cf8f0
*/
void sub_113dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113dfb0ULL || rel >= 0x113e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e100 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_113e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e100ULL || rel >= 0x113e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e1f0 size=240 callers=12 calls=0
*/
void sub_113e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e1f0ULL || rel >= 0x113e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e2e0 size=256 callers=0 calls=2
   calls: sub_1160e20, sub_bf05e0
*/
void sub_113e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e2e0ULL || rel >= 0x113e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e3e0 size=16 callers=0 calls=0
*/
void sub_113e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e3e0ULL || rel >= 0x113e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e3f0 size=16 callers=0 calls=0
*/
void sub_113e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e3f0ULL || rel >= 0x113e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e400 size=16 callers=0 calls=0
*/
void sub_113e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e400ULL || rel >= 0x113e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e410 size=272 callers=0 calls=3
   calls: sub_113e530, sub_1169730, sub_12faeb0
   ref: CARE_OTHER_POKEMON
*/
void CARE_OTHER_POKEMON(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e410ULL || rel >= 0x113e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e520 size=16 callers=0 calls=0
*/
void sub_113e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e520ULL || rel >= 0x113e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e530 size=288 callers=4 calls=2
   calls: sub_113e650, sub_1c0
*/
void sub_113e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e530ULL || rel >= 0x113e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e650 size=304 callers=1 calls=0
*/
void sub_113e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e650ULL || rel >= 0x113e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e780 size=16 callers=0 calls=0
*/
void sub_113e780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e780ULL || rel >= 0x113e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e790 size=16 callers=0 calls=0
*/
void sub_113e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e790ULL || rel >= 0x113e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e7a0 size=240 callers=2 calls=1
   calls: sub_607750
*/
void sub_113e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e7a0ULL || rel >= 0x113e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e890 size=240 callers=0 calls=0
*/
void sub_113e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e890ULL || rel >= 0x113e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e980 size=16 callers=33 calls=0
*/
void sub_113e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e980ULL || rel >= 0x113e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e990 size=48 callers=19 calls=0
*/
void sub_113e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e990ULL || rel >= 0x113e9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e9c0 size=32 callers=19 calls=0
*/
void sub_113e9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e9c0ULL || rel >= 0x113e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113e9e0 size=32 callers=3 calls=0
*/
void sub_113e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113e9e0ULL || rel >= 0x113ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113ea00 size=16 callers=2 calls=0
*/
void sub_113ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ea00ULL || rel >= 0x113ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113ea10 size=16 callers=1 calls=0
*/
void sub_113ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ea10ULL || rel >= 0x113ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113ea20 size=80 callers=3 calls=0
*/
void sub_113ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ea20ULL || rel >= 0x113ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113ea70 size=832 callers=1 calls=11
   calls: sub_1061810, sub_113edb0, sub_113f020, sub_1146360, sub_1149100, sub_11492a0, sub_1398430, sub_5cf8c0, sub_5e2350, sub_f17920, sub_f1d5c0
*/
void sub_113ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ea70ULL || rel >= 0x113edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113edb0 size=624 callers=1 calls=3
   calls: sub_1113c90, sub_1146440, sub_1c0
*/
void sub_113edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113edb0ULL || rel >= 0x113f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113f020 size=400 callers=1 calls=1
   calls: sub_1146540
*/
void sub_113f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113f020ULL || rel >= 0x113f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113f1b0 size=16 callers=1 calls=0
*/
void sub_113f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113f1b0ULL || rel >= 0x113f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113f1c0 size=16 callers=6 calls=0
*/
void sub_113f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113f1c0ULL || rel >= 0x113f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113f1d0 size=320 callers=6 calls=2
   calls: sub_11469a0, sub_5cf8f0
*/
void sub_113f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113f1d0ULL || rel >= 0x113f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113f310 size=96 callers=6 calls=3
   calls: sub_113f370, sub_113f6c0, sub_113fa30
*/
void sub_113f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113f310ULL || rel >= 0x113f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113f370 size=848 callers=1 calls=5
   calls: sub_1061830, sub_5cf8e0, sub_5cf8f0, sub_6ba6a0, sub_6bb230
*/
void sub_113f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113f370ULL || rel >= 0x113f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113f6c0 size=880 callers=1 calls=2
   calls: sub_1142ae0, sub_1144890
*/
void sub_113f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113f6c0ULL || rel >= 0x113fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113fa30 size=3024 callers=1 calls=16
   calls: Play_Camp_ClosenessUp, sub_1141100, sub_1141680, sub_1142250, sub_1142540, sub_11425d0, sub_11428f0, sub_1142ae0, sub_11434c0, sub_1158640, sub_115a6e0, sub_115bc10
   ... +4 more
*/
void sub_113fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113fa30ULL || rel >= 0x1140600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01140600 size=624 callers=0 calls=5
   calls: sub_1140870, sub_1140af0, sub_1145810, sub_5cf8e0, sub_5cf8f0
*/
void sub_1140600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1140600ULL || rel >= 0x1140870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01140870 size=640 callers=1 calls=14
   calls: sub_1108720, sub_1108960, sub_1108a50, sub_110ca80, sub_110ca90, sub_1134fa0, sub_1136910, sub_1145bd0, sub_1149550, sub_114ed90, sub_11611a0, sub_65da00
   ... +2 more
*/
void sub_1140870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1140870ULL || rel >= 0x1140af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01140af0 size=1552 callers=1 calls=17
   calls: sub_1061800, sub_1108730, sub_1127360, sub_1134fa0, sub_1136910, sub_1136fc0, sub_11390c0, sub_113ae90, sub_1145b50, sub_1149550, sub_114ed90, sub_115a6e0
   ... +5 more
*/
void sub_1140af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1140af0ULL || rel >= 0x1141100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01141100 size=1408 callers=19 calls=16
   calls: Play_Camp_recover, sub_1136450, sub_1138c70, sub_11390c0, sub_1139180, sub_11393a0, sub_1139e90, sub_113a7b0, sub_113a8d0, sub_113ae90, sub_1142ae0, sub_115a6e0
   ... +4 more
*/
void sub_1141100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1141100ULL || rel >= 0x1141680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01141680 size=3024 callers=2 calls=36
   calls: sub_1108720, sub_1108730, sub_1108960, sub_1108a50, sub_110c4f0, sub_110c6a0, sub_110ca90, sub_11157b0, sub_1127360, sub_1134fa0, sub_1136450, sub_1136910
   ... +24 more
*/
void sub_1141680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1141680ULL || rel >= 0x1142250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01142250 size=752 callers=1 calls=16
   calls: contents_kw_sync_data_7, sub_1108730, sub_110c4f0, sub_110c6a0, sub_1115490, sub_1134fa0, sub_1139f10, sub_11428f0, sub_1142ae0, sub_11434c0, sub_1148a70, sub_114d200
   ... +4 more
*/
void sub_1142250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142250ULL || rel >= 0x1142540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01142540 size=144 callers=1 calls=5
   calls: sub_1108940, sub_1108a30, sub_1108a70, sub_1134fa0, sub_1142ae0
*/
void sub_1142540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142540ULL || rel >= 0x11425d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011425d0 size=800 callers=1 calls=8
   calls: sub_1139e90, sub_113a530, sub_113a580, sub_113f1d0, sub_1142ae0, sub_1143690, sub_1165340, sub_1165890
*/
void sub_11425d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11425d0ULL || rel >= 0x11428f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011428f0 size=496 callers=2 calls=1
   calls: sub_115a6e0
*/
void sub_11428f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11428f0ULL || rel >= 0x1142ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01142ae0 size=288 callers=18 calls=1
   calls: sub_1136910
*/
void sub_1142ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142ae0ULL || rel >= 0x1142c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01142c00 size=112 callers=1 calls=1
   calls: sub_1144890
*/
void sub_1142c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142c00ULL || rel >= 0x1142c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01142c70 size=112 callers=1 calls=1
   calls: sub_1144890
*/
void sub_1142c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142c70ULL || rel >= 0x1142ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01142ce0 size=16 callers=0 calls=0
*/
void sub_1142ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142ce0ULL || rel >= 0x1142cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01142cf0 size=16 callers=0 calls=0
*/
void sub_1142cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142cf0ULL || rel >= 0x1142d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01142d00 size=704 callers=0 calls=8
   calls: sub_1141680, sub_1146c50, sub_114ed90, sub_1151020, sub_5cf8e0, sub_5cf8f0, sub_65da00, sub_65daf0
*/
void sub_1142d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142d00ULL || rel >= 0x1142fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01142fc0 size=16 callers=0 calls=0
*/
void sub_1142fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142fc0ULL || rel >= 0x1142fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01142fd0 size=560 callers=1 calls=6
   calls: sub_1145b50, sub_1149550, sub_114ed90, sub_65da00, sub_65daf0, sub_722e50
*/
void sub_1142fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1142fd0ULL || rel >= 0x1143200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01143200 size=112 callers=1 calls=1
   calls: sub_1144890
*/
void sub_1143200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1143200ULL || rel >= 0x1143270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01143270 size=592 callers=1 calls=0
*/
void sub_1143270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1143270ULL || rel >= 0x11434c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011434c0 size=464 callers=2 calls=0
*/
void sub_11434c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11434c0ULL || rel >= 0x1143690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01143690 size=928 callers=1 calls=7
   calls: sub_1136910, sub_113a4d0, sub_1145d50, sub_1145e80, sub_1165de0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1143690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1143690ULL || rel >= 0x1143a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01143a30 size=432 callers=13 calls=2
   calls: sub_1113c90, sub_1c0
*/
void sub_1143a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1143a30ULL || rel >= 0x1143be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01143be0 size=400 callers=1 calls=3
   calls: sub_1143a30, sub_1143d70, sub_1146270
*/
void sub_1143be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1143be0ULL || rel >= 0x1143d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01143d70 size=464 callers=15 calls=4
   calls: sub_113f1d0, sub_1143a30, sub_1144590, sub_1146270
*/
void sub_1143d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1143d70ULL || rel >= 0x1143f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01143f40 size=512 callers=1 calls=2
   calls: sub_1143a30, sub_1146270
*/
void sub_1143f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1143f40ULL || rel >= 0x1144140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144140 size=128 callers=2 calls=1
   calls: sub_1143d70
*/
void sub_1144140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144140ULL || rel >= 0x11441c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011441c0 size=128 callers=3 calls=1
   calls: sub_1143d70
*/
void sub_11441c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11441c0ULL || rel >= 0x1144240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144240 size=128 callers=1 calls=1
   calls: sub_1143d70
*/
void sub_1144240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144240ULL || rel >= 0x11442c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011442c0 size=128 callers=1 calls=1
   calls: sub_1143d70
*/
void sub_11442c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11442c0ULL || rel >= 0x1144340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144340 size=128 callers=2 calls=1
   calls: sub_1143d70
*/
void sub_1144340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144340ULL || rel >= 0x11443c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011443c0 size=464 callers=1 calls=4
   calls: sub_113f1d0, sub_1143a30, sub_1144590, sub_1146270
*/
void sub_11443c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11443c0ULL || rel >= 0x1144590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144590 size=416 callers=5 calls=1
   calls: sub_1146270
*/
void sub_1144590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144590ULL || rel >= 0x1144730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144730 size=128 callers=3 calls=1
   calls: sub_1143d70
*/
void sub_1144730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144730ULL || rel >= 0x11447b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011447b0 size=192 callers=2 calls=3
   calls: sub_113a4d0, sub_1143d70, sub_1165de0
*/
void sub_11447b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11447b0ULL || rel >= 0x1144870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144870 size=32 callers=1 calls=0
*/
void sub_1144870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144870ULL || rel >= 0x1144890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144890 size=816 callers=7 calls=6
   calls: sub_113f1d0, sub_1143a30, sub_1144590, sub_1146050, sub_1146270, sub_1148010
*/
void sub_1144890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144890ULL || rel >= 0x1144bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144bc0 size=112 callers=1 calls=1
   calls: sub_1144890
*/
void sub_1144bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144bc0ULL || rel >= 0x1144c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144c30 size=32 callers=1 calls=0
*/
void sub_1144c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144c30ULL || rel >= 0x1144c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144c50 size=112 callers=1 calls=1
   calls: sub_1144890
*/
void sub_1144c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144c50ULL || rel >= 0x1144cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144cc0 size=32 callers=1 calls=0
*/
void sub_1144cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144cc0ULL || rel >= 0x1144ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144ce0 size=464 callers=1 calls=4
   calls: sub_113f1d0, sub_1143a30, sub_1144590, sub_1146270
*/
void sub_1144ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144ce0ULL || rel >= 0x1144eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01144eb0 size=464 callers=1 calls=4
   calls: sub_113f1d0, sub_1143a30, sub_1144590, sub_1146270
*/
void sub_1144eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1144eb0ULL || rel >= 0x1145080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145080 size=608 callers=0 calls=2
   calls: sub_1146170, sub_5cf8d0
*/
void sub_1145080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145080ULL || rel >= 0x11452e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011452e0 size=16 callers=0 calls=0
*/
void sub_11452e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11452e0ULL || rel >= 0x11452f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011452f0 size=16 callers=0 calls=0
*/
void sub_11452f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11452f0ULL || rel >= 0x1145300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145300 size=16 callers=0 calls=0
*/
void sub_1145300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145300ULL || rel >= 0x1145310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145310 size=16 callers=0 calls=0
*/
void sub_1145310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145310ULL || rel >= 0x1145320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145320 size=16 callers=0 calls=0
*/
void sub_1145320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145320ULL || rel >= 0x1145330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145330 size=16 callers=0 calls=0
*/
void sub_1145330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145330ULL || rel >= 0x1145340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145340 size=16 callers=0 calls=0
*/
void sub_1145340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145340ULL || rel >= 0x1145350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145350 size=16 callers=0 calls=0
*/
void sub_1145350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145350ULL || rel >= 0x1145360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145360 size=144 callers=0 calls=0
*/
void sub_1145360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145360ULL || rel >= 0x11453f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011453f0 size=144 callers=0 calls=0
*/
void sub_11453f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11453f0ULL || rel >= 0x1145480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145480 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1145480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145480ULL || rel >= 0x11454f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011454f0 size=144 callers=0 calls=0
*/
void sub_11454f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11454f0ULL || rel >= 0x1145580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145580 size=144 callers=0 calls=0
*/
void sub_1145580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145580ULL || rel >= 0x1145610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145610 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1145610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145610ULL || rel >= 0x1145680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145680 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1145680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145680ULL || rel >= 0x11456f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011456f0 size=144 callers=0 calls=0
*/
void sub_11456f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11456f0ULL || rel >= 0x1145780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145780 size=144 callers=0 calls=0
*/
void sub_1145780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145780ULL || rel >= 0x1145810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145810 size=832 callers=1 calls=0
*/
void sub_1145810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145810ULL || rel >= 0x1145b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145b50 size=112 callers=5 calls=4
   calls: sub_114c8a0, sub_70da70, sub_70db70, sub_c70
*/
void sub_1145b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145b50ULL || rel >= 0x1145bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145bc0 size=16 callers=0 calls=0
*/
void sub_1145bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145bc0ULL || rel >= 0x1145bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145bd0 size=112 callers=4 calls=4
   calls: sub_114bcf0, sub_70da70, sub_70db70, sub_c70
*/
void sub_1145bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145bd0ULL || rel >= 0x1145c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145c40 size=16 callers=0 calls=0
*/
void sub_1145c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145c40ULL || rel >= 0x1145c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145c50 size=112 callers=8 calls=4
   calls: sub_114e470, sub_70da70, sub_70db70, sub_c70
*/
void sub_1145c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145c50ULL || rel >= 0x1145cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145cc0 size=16 callers=0 calls=0
*/
void sub_1145cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145cc0ULL || rel >= 0x1145cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145cd0 size=112 callers=3 calls=4
   calls: sub_114d180, sub_70da70, sub_70db70, sub_c70
*/
void sub_1145cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145cd0ULL || rel >= 0x1145d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145d40 size=16 callers=0 calls=0
*/
void sub_1145d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145d40ULL || rel >= 0x1145d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145d50 size=304 callers=1 calls=0
*/
void sub_1145d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145d50ULL || rel >= 0x1145e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01145e80 size=400 callers=1 calls=0
*/
void sub_1145e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1145e80ULL || rel >= 0x1146010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146010 size=64 callers=0 calls=0
*/
void sub_1146010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146010ULL || rel >= 0x1146050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146050 size=288 callers=2 calls=0
*/
void sub_1146050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146050ULL || rel >= 0x1146170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146170 size=256 callers=1 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_1146170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146170ULL || rel >= 0x1146270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146270 size=240 callers=16 calls=0
*/
void sub_1146270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146270ULL || rel >= 0x1146360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146360 size=224 callers=1 calls=1
   calls: sub_11490b0
*/
void sub_1146360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146360ULL || rel >= 0x1146440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146440 size=256 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1146440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146440ULL || rel >= 0x1146540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146540 size=256 callers=2 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_1146540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146540ULL || rel >= 0x1146640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146640 size=432 callers=0 calls=2
   calls: sub_1124d10, sub_1146800
*/
void sub_1146640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146640ULL || rel >= 0x11467f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011467f0 size=16 callers=0 calls=0
*/
void sub_11467f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11467f0ULL || rel >= 0x1146800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146800 size=96 callers=1 calls=0
*/
void sub_1146800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146800ULL || rel >= 0x1146860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146860 size=16 callers=0 calls=0
*/
void sub_1146860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146860ULL || rel >= 0x1146870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146870 size=16 callers=0 calls=0
*/
void sub_1146870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146870ULL || rel >= 0x1146880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146880 size=16 callers=0 calls=0
*/
void sub_1146880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146880ULL || rel >= 0x1146890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146890 size=16 callers=0 calls=0
*/
void sub_1146890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146890ULL || rel >= 0x11468a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011468a0 size=16 callers=0 calls=0
*/
void sub_11468a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11468a0ULL || rel >= 0x11468b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011468b0 size=160 callers=0 calls=3
   calls: sub_1124520, sub_11611a0, sub_bf0730
*/
void sub_11468b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11468b0ULL || rel >= 0x1146950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146950 size=16 callers=0 calls=0
*/
void sub_1146950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146950ULL || rel >= 0x1146960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146960 size=32 callers=0 calls=0
*/
void sub_1146960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146960ULL || rel >= 0x1146980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146980 size=32 callers=0 calls=0
*/
void sub_1146980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146980ULL || rel >= 0x11469a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011469a0 size=688 callers=1 calls=0
*/
void sub_11469a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11469a0ULL || rel >= 0x1146c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146c50 size=608 callers=1 calls=1
   calls: sub_1146540
*/
void sub_1146c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146c50ULL || rel >= 0x1146eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01146eb0 size=528 callers=0 calls=7
   calls: sub_1143a30, sub_11470d0, sub_11493a0, sub_114ed90, sub_65da00, sub_65daf0, sub_722e50
*/
void sub_1146eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1146eb0ULL || rel >= 0x11470c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011470c0 size=16 callers=0 calls=0
*/
void sub_11470c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11470c0ULL || rel >= 0x11470d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011470d0 size=112 callers=4 calls=4
   calls: sub_114af50, sub_70da70, sub_70db70, sub_c70
*/
void sub_11470d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11470d0ULL || rel >= 0x1147140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147140 size=16 callers=0 calls=0
*/
void sub_1147140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147140ULL || rel >= 0x1147150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147150 size=16 callers=0 calls=0
*/
void sub_1147150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147150ULL || rel >= 0x1147160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147160 size=16 callers=0 calls=0
*/
void sub_1147160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147160ULL || rel >= 0x1147170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147170 size=688 callers=0 calls=9
   calls: sub_1136910, sub_1143a30, sub_1146270, sub_1147470, sub_11493a0, sub_114ed90, sub_65da00, sub_65daf0, sub_722e50
*/
void sub_1147170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147170ULL || rel >= 0x1147420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147420 size=80 callers=0 calls=0
*/
void sub_1147420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147420ULL || rel >= 0x1147470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147470 size=112 callers=3 calls=4
   calls: sub_114b640, sub_70da70, sub_70db70, sub_c70
*/
void sub_1147470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147470ULL || rel >= 0x11474e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011474e0 size=16 callers=0 calls=0
*/
void sub_11474e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11474e0ULL || rel >= 0x11474f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011474f0 size=96 callers=0 calls=0
*/
void sub_11474f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11474f0ULL || rel >= 0x1147550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147550 size=48 callers=0 calls=0
*/
void sub_1147550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147550ULL || rel >= 0x1147580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147580 size=672 callers=0 calls=9
   calls: sub_1143a30, sub_1145c50, sub_1146270, sub_1149550, sub_114ed90, sub_115a6e0, sub_65da00, sub_65daf0, sub_722e50
*/
void sub_1147580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147580ULL || rel >= 0x1147820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147820 size=80 callers=0 calls=0
*/
void sub_1147820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147820ULL || rel >= 0x1147870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147870 size=96 callers=0 calls=0
*/
void sub_1147870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147870ULL || rel >= 0x11478d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011478d0 size=48 callers=0 calls=0
*/
void sub_11478d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11478d0ULL || rel >= 0x1147900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147900 size=688 callers=0 calls=9
   calls: sub_1143a30, sub_1145c50, sub_1146270, sub_1149550, sub_114ed90, sub_115a6e0, sub_65da00, sub_65daf0, sub_722e50
*/
void sub_1147900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147900ULL || rel >= 0x1147bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147bb0 size=80 callers=0 calls=0
*/
void sub_1147bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147bb0ULL || rel >= 0x1147c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147c00 size=96 callers=0 calls=0
*/
void sub_1147c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147c00ULL || rel >= 0x1147c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147c60 size=48 callers=0 calls=0
*/
void sub_1147c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147c60ULL || rel >= 0x1147c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147c90 size=672 callers=0 calls=9
   calls: sub_1136910, sub_1143a30, sub_1146270, sub_11470d0, sub_11493a0, sub_114ed90, sub_65da00, sub_65daf0, sub_722e50
*/
void sub_1147c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147c90ULL || rel >= 0x1147f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147f30 size=80 callers=0 calls=0
*/
void sub_1147f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147f30ULL || rel >= 0x1147f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147f80 size=96 callers=0 calls=0
*/
void sub_1147f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147f80ULL || rel >= 0x1147fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01147fe0 size=48 callers=0 calls=0
*/
void sub_1147fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1147fe0ULL || rel >= 0x1148010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148010 size=752 callers=1 calls=0
*/
void sub_1148010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148010ULL || rel >= 0x1148300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148300 size=960 callers=0 calls=9
   calls: sub_1136910, sub_1143a30, sub_1146270, sub_11487a0, sub_1149550, sub_114ed90, sub_65da00, sub_65daf0, sub_722e50
*/
void sub_1148300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148300ULL || rel >= 0x11486c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011486c0 size=176 callers=0 calls=0
*/
void sub_11486c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11486c0ULL || rel >= 0x1148770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148770 size=16 callers=0 calls=0
*/
void sub_1148770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148770ULL || rel >= 0x1148780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148780 size=16 callers=0 calls=0
*/
void sub_1148780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148780ULL || rel >= 0x1148790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148790 size=16 callers=0 calls=0
*/
void sub_1148790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148790ULL || rel >= 0x11487a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011487a0 size=112 callers=3 calls=4
   calls: sub_114d8e0, sub_70da70, sub_70db70, sub_c70
*/
void sub_11487a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11487a0ULL || rel >= 0x1148810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148810 size=16 callers=0 calls=0
*/
void sub_1148810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148810ULL || rel >= 0x1148820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148820 size=112 callers=0 calls=1
   calls: sub_1146050
*/
void sub_1148820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148820ULL || rel >= 0x1148890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148890 size=96 callers=0 calls=0
*/
void sub_1148890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148890ULL || rel >= 0x11488f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011488f0 size=208 callers=0 calls=0
*/
void sub_11488f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11488f0ULL || rel >= 0x11489c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011489c0 size=176 callers=2 calls=3
   calls: sub_1119140, sub_5e2350, sub_eaf6b0
*/
void sub_11489c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11489c0ULL || rel >= 0x1148a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148a70 size=128 callers=1 calls=1
   calls: sub_1119140
*/
void sub_1148a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148a70ULL || rel >= 0x1148af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148af0 size=256 callers=0 calls=2
   calls: sub_c5ad40, sub_e91100
*/
void sub_1148af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148af0ULL || rel >= 0x1148bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148bf0 size=16 callers=0 calls=0
*/
void sub_1148bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148bf0ULL || rel >= 0x1148c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148c00 size=16 callers=0 calls=0
*/
void sub_1148c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148c00ULL || rel >= 0x1148c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148c10 size=16 callers=0 calls=0
*/
void sub_1148c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148c10ULL || rel >= 0x1148c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148c20 size=16 callers=0 calls=0
*/
void sub_1148c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148c20ULL || rel >= 0x1148c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148c30 size=16 callers=0 calls=0
*/
void sub_1148c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148c30ULL || rel >= 0x1148c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148c40 size=16 callers=14 calls=0
*/
void sub_1148c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148c40ULL || rel >= 0x1148c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148c50 size=288 callers=3 calls=3
   calls: sub_c583e0, sub_c5acf0, sub_e91100
*/
void sub_1148c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148c50ULL || rel >= 0x1148d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148d70 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1148d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148d70ULL || rel >= 0x1148de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148de0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1148de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148de0ULL || rel >= 0x1148e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148e50 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1148e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148e50ULL || rel >= 0x1148ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148ec0 size=288 callers=0 calls=3
   calls: sub_c583e0, sub_c5acf0, sub_e91100
*/
void sub_1148ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148ec0ULL || rel >= 0x1148fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148fe0 size=16 callers=0 calls=0
*/
void sub_1148fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148fe0ULL || rel >= 0x1148ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01148ff0 size=16 callers=0 calls=0
*/
void sub_1148ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1148ff0ULL || rel >= 0x1149000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149000 size=16 callers=0 calls=0
*/
void sub_1149000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149000ULL || rel >= 0x1149010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149010 size=160 callers=0 calls=0
*/
void sub_1149010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149010ULL || rel >= 0x11490b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011490b0 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_11490b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11490b0ULL || rel >= 0x1149100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149100 size=416 callers=1 calls=2
   calls: sub_5e2350, sub_6be8b0
*/
void sub_1149100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149100ULL || rel >= 0x11492a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011492a0 size=16 callers=1 calls=0
*/
void sub_11492a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11492a0ULL || rel >= 0x11492b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011492b0 size=32 callers=1 calls=0
*/
void sub_11492b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11492b0ULL || rel >= 0x11492d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011492d0 size=208 callers=0 calls=4
   calls: sub_114a0e0, sub_114a200, sub_65da00, sub_65daf0
*/
void sub_11492d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11492d0ULL || rel >= 0x11493a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011493a0 size=80 callers=3 calls=1
   calls: sub_11493f0
*/
void sub_11493a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11493a0ULL || rel >= 0x11493f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011493f0 size=352 callers=1 calls=3
   calls: sub_1061800, sub_1061830, sub_6ba6a0
*/
void sub_11493f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11493f0ULL || rel >= 0x1149550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149550 size=32 callers=6 calls=0
*/
void sub_1149550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149550ULL || rel >= 0x1149570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149570 size=208 callers=0 calls=4
   calls: sub_114a200, sub_114a4a0, sub_65da00, sub_65daf0
*/
void sub_1149570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149570ULL || rel >= 0x1149640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149640 size=48 callers=0 calls=0
*/
void sub_1149640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149640ULL || rel >= 0x1149670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149670 size=48 callers=0 calls=0
*/
void sub_1149670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149670ULL || rel >= 0x11496a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011496a0 size=144 callers=0 calls=0
*/
void sub_11496a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11496a0ULL || rel >= 0x1149730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149730 size=144 callers=0 calls=0
*/
void sub_1149730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149730ULL || rel >= 0x11497c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011497c0 size=240 callers=0 calls=0
*/
void sub_11497c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11497c0ULL || rel >= 0x11498b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011498b0 size=144 callers=0 calls=0
*/
void sub_11498b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11498b0ULL || rel >= 0x1149940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149940 size=144 callers=0 calls=0
*/
void sub_1149940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149940ULL || rel >= 0x11499d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011499d0 size=16 callers=0 calls=0
*/
void sub_11499d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11499d0ULL || rel >= 0x11499e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011499e0 size=16 callers=0 calls=0
*/
void sub_11499e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11499e0ULL || rel >= 0x11499f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011499f0 size=144 callers=0 calls=0
*/
void sub_11499f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11499f0ULL || rel >= 0x1149a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149a80 size=144 callers=0 calls=0
*/
void sub_1149a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149a80ULL || rel >= 0x1149b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149b10 size=16 callers=0 calls=0
*/
void sub_1149b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149b10ULL || rel >= 0x1149b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149b20 size=16 callers=0 calls=0
*/
void sub_1149b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149b20ULL || rel >= 0x1149b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149b30 size=16 callers=0 calls=0
*/
void sub_1149b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149b30ULL || rel >= 0x1149b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149b40 size=16 callers=0 calls=0
*/
void sub_1149b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149b40ULL || rel >= 0x1149b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149b50 size=160 callers=0 calls=0
*/
void sub_1149b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149b50ULL || rel >= 0x1149bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149bf0 size=624 callers=0 calls=9
   calls: contents_cooking_data_4, contents_cooking_matching_data_5, contents_cooking_spiece_5, contents_cooking_transform_5, gflnet3_message_lite_2, sub_114f160, sub_1152d60, sub_65da00, sub_65daf0
*/
void sub_1149bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149bf0ULL || rel >= 0x1149e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149e60 size=160 callers=0 calls=0
*/
void sub_1149e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149e60ULL || rel >= 0x1149f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149f00 size=160 callers=0 calls=0
*/
void sub_1149f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149f00ULL || rel >= 0x1149fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01149fa0 size=160 callers=0 calls=0
*/
void sub_1149fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1149fa0ULL || rel >= 0x114a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114a040 size=160 callers=0 calls=0
*/
void sub_114a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114a040ULL || rel >= 0x114a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114a0e0 size=288 callers=7 calls=3
   calls: sub_114a330, sub_65da00, sub_65daf0
*/
void sub_114a0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114a0e0ULL || rel >= 0x114a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114a200 size=304 callers=2 calls=7
   calls: sub_114ed90, sub_1151020, sub_1152d60, sub_1153160, sub_65da00, sub_65daf0, sub_c70
*/
void sub_114a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114a200ULL || rel >= 0x114a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114a330 size=368 callers=2 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_114a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114a330ULL || rel >= 0x114a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114a4a0 size=272 callers=2 calls=3
   calls: sub_114a330, sub_65da00, sub_65daf0
*/
void sub_114a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114a4a0ULL || rel >= 0x114a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114a5b0 size=160 callers=0 calls=0
*/
void sub_114a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114a5b0ULL || rel >= 0x114a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114a650 size=800 callers=0 calls=9
   calls: contents_kw_sync_data_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: kw_sync_data.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114a650ULL || rel >= 0x114a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114a970 size=624 callers=19 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: kw_sync_data.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114a970ULL || rel >= 0x114abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114abe0 size=448 callers=0 calls=0
*/
void sub_114abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114abe0ULL || rel >= 0x114ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ada0 size=432 callers=0 calls=4
   calls: contents_kw_sync_data_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_114ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ada0ULL || rel >= 0x114af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114af50 size=32 callers=2 calls=0
*/
void sub_114af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114af50ULL || rel >= 0x114af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114af70 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114af70ULL || rel >= 0x114afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114afd0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114afd0ULL || rel >= 0x114b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b030 size=16 callers=0 calls=0
*/
void sub_114b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b030ULL || rel >= 0x114b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b040 size=96 callers=0 calls=2
   calls: sub_114b0a0, sub_c70
*/
void sub_114b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b040ULL || rel >= 0x114b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b0a0 size=32 callers=1 calls=0
*/
void sub_114b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b0a0ULL || rel >= 0x114b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b0c0 size=16 callers=0 calls=0
*/
void sub_114b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b0c0ULL || rel >= 0x114b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b0d0 size=512 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_114b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b0d0ULL || rel >= 0x114b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b2d0 size=80 callers=0 calls=1
   calls: sub_714090
*/
void sub_114b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b2d0ULL || rel >= 0x114b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b320 size=192 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_114b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b320ULL || rel >= 0x114b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b3e0 size=160 callers=0 calls=1
   calls: sub_70d000
*/
void sub_114b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b3e0ULL || rel >= 0x114b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b480 size=240 callers=0 calls=2
   calls: contents_kw_sync_data_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b480ULL || rel >= 0x114b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b570 size=80 callers=0 calls=0
*/
void sub_114b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b570ULL || rel >= 0x114b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b5c0 size=16 callers=0 calls=0
*/
void sub_114b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b5c0ULL || rel >= 0x114b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b5d0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_114b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b5d0ULL || rel >= 0x114b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b640 size=32 callers=2 calls=0
*/
void sub_114b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b640ULL || rel >= 0x114b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b660 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b660ULL || rel >= 0x114b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b6c0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b6c0ULL || rel >= 0x114b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b720 size=16 callers=0 calls=0
*/
void sub_114b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b720ULL || rel >= 0x114b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b730 size=96 callers=0 calls=2
   calls: sub_114b790, sub_c70
*/
void sub_114b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b730ULL || rel >= 0x114b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b790 size=32 callers=1 calls=0
*/
void sub_114b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b790ULL || rel >= 0x114b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b7b0 size=16 callers=0 calls=0
*/
void sub_114b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b7b0ULL || rel >= 0x114b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b7c0 size=512 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_114b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b7c0ULL || rel >= 0x114b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114b9c0 size=80 callers=0 calls=1
   calls: sub_713860
*/
void sub_114b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114b9c0ULL || rel >= 0x114ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ba10 size=144 callers=0 calls=0
*/
void sub_114ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ba10ULL || rel >= 0x114baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114baa0 size=144 callers=0 calls=1
   calls: sub_70d000
*/
void sub_114baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114baa0ULL || rel >= 0x114bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114bb30 size=240 callers=0 calls=2
   calls: contents_kw_sync_data_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114bb30ULL || rel >= 0x114bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114bc20 size=80 callers=0 calls=0
*/
void sub_114bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114bc20ULL || rel >= 0x114bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114bc70 size=16 callers=0 calls=0
*/
void sub_114bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114bc70ULL || rel >= 0x114bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114bc80 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_114bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114bc80ULL || rel >= 0x114bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114bcf0 size=48 callers=2 calls=0
*/
void sub_114bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114bcf0ULL || rel >= 0x114bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114bd20 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114bd20ULL || rel >= 0x114bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114bd80 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114bd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114bd80ULL || rel >= 0x114bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114bde0 size=16 callers=0 calls=0
*/
void sub_114bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114bde0ULL || rel >= 0x114bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114bdf0 size=96 callers=0 calls=2
   calls: sub_114be50, sub_c70
*/
void sub_114bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114bdf0ULL || rel >= 0x114be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114be50 size=32 callers=1 calls=0
*/
void sub_114be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114be50ULL || rel >= 0x114be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114be70 size=16 callers=0 calls=0
*/
void sub_114be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114be70ULL || rel >= 0x114be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114be80 size=1056 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_114be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114be80ULL || rel >= 0x114c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c2a0 size=160 callers=0 calls=2
   calls: sub_713690, sub_713860
*/
void sub_114c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c2a0ULL || rel >= 0x114c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c340 size=544 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_114c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c340ULL || rel >= 0x114c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c560 size=336 callers=1 calls=1
   calls: sub_70d000
*/
void sub_114c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c560ULL || rel >= 0x114c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c6b0 size=288 callers=0 calls=2
   calls: contents_kw_sync_data_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c6b0ULL || rel >= 0x114c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c7d0 size=80 callers=0 calls=0
*/
void sub_114c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c7d0ULL || rel >= 0x114c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c820 size=16 callers=0 calls=0
*/
void sub_114c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c820ULL || rel >= 0x114c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c830 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_114c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c830ULL || rel >= 0x114c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c8a0 size=32 callers=2 calls=0
*/
void sub_114c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c8a0ULL || rel >= 0x114c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c8c0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c8c0ULL || rel >= 0x114c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c920 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c920ULL || rel >= 0x114c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c980 size=16 callers=0 calls=0
*/
void sub_114c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c980ULL || rel >= 0x114c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c990 size=96 callers=0 calls=2
   calls: sub_114c9f0, sub_c70
*/
void sub_114c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c990ULL || rel >= 0x114c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114c9f0 size=32 callers=1 calls=0
*/
void sub_114c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114c9f0ULL || rel >= 0x114ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ca10 size=16 callers=0 calls=0
*/
void sub_114ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ca10ULL || rel >= 0x114ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ca20 size=800 callers=1 calls=4
   calls: sub_70bfa0, sub_70c190, sub_70c480, sub_713480
*/
void sub_114ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ca20ULL || rel >= 0x114cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114cd40 size=128 callers=0 calls=3
   calls: sub_713860, sub_713970, sub_714090
*/
void sub_114cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114cd40ULL || rel >= 0x114cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114cdc0 size=272 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_114cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114cdc0ULL || rel >= 0x114ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ced0 size=208 callers=0 calls=2
   calls: sub_70d000, sub_70d040
*/
void sub_114ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ced0ULL || rel >= 0x114cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114cfa0 size=272 callers=0 calls=2
   calls: contents_kw_sync_data_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114cfa0ULL || rel >= 0x114d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d0b0 size=80 callers=0 calls=0
*/
void sub_114d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d0b0ULL || rel >= 0x114d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d100 size=16 callers=0 calls=0
*/
void sub_114d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d100ULL || rel >= 0x114d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d110 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_114d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d110ULL || rel >= 0x114d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d180 size=32 callers=2 calls=0
*/
void sub_114d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d180ULL || rel >= 0x114d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d1a0 size=96 callers=1 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d1a0ULL || rel >= 0x114d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d200 size=96 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d200ULL || rel >= 0x114d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d260 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d260ULL || rel >= 0x114d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d2c0 size=16 callers=0 calls=0
*/
void sub_114d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d2c0ULL || rel >= 0x114d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d2d0 size=96 callers=0 calls=2
   calls: sub_114d330, sub_c70
*/
void sub_114d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d2d0ULL || rel >= 0x114d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d330 size=32 callers=1 calls=0
*/
void sub_114d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d330ULL || rel >= 0x114d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d350 size=16 callers=0 calls=0
*/
void sub_114d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d350ULL || rel >= 0x114d360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d360 size=512 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_114d360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d360ULL || rel >= 0x114d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d560 size=80 callers=0 calls=1
   calls: sub_713690
*/
void sub_114d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d560ULL || rel >= 0x114d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d5b0 size=208 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_114d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d5b0ULL || rel >= 0x114d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d680 size=160 callers=0 calls=1
   calls: sub_70d000
*/
void sub_114d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d680ULL || rel >= 0x114d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d720 size=240 callers=0 calls=2
   calls: contents_kw_sync_data_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d720ULL || rel >= 0x114d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d810 size=80 callers=0 calls=0
*/
void sub_114d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d810ULL || rel >= 0x114d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d860 size=16 callers=0 calls=0
*/
void sub_114d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d860ULL || rel >= 0x114d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d870 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_114d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d870ULL || rel >= 0x114d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d8e0 size=48 callers=2 calls=0
*/
void sub_114d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d8e0ULL || rel >= 0x114d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d910 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d910ULL || rel >= 0x114d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d970 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d970ULL || rel >= 0x114d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d9d0 size=16 callers=0 calls=0
*/
void sub_114d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d9d0ULL || rel >= 0x114d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114d9e0 size=96 callers=0 calls=2
   calls: sub_114da40, sub_c70
*/
void sub_114d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114d9e0ULL || rel >= 0x114da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114da40 size=32 callers=1 calls=0
*/
void sub_114da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114da40ULL || rel >= 0x114da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114da60 size=32 callers=0 calls=0
*/
void sub_114da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114da60ULL || rel >= 0x114da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114da80 size=1152 callers=1 calls=4
   calls: sub_70bdc0, sub_70c190, sub_70c480, sub_713480
*/
void sub_114da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114da80ULL || rel >= 0x114df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114df00 size=192 callers=0 calls=3
   calls: sub_713860, sub_713e50, sub_714090
*/
void sub_114df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114df00ULL || rel >= 0x114dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114dfc0 size=400 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_114dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114dfc0ULL || rel >= 0x114e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e150 size=272 callers=1 calls=1
   calls: sub_70d000
*/
void sub_114e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e150ULL || rel >= 0x114e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e260 size=320 callers=0 calls=2
   calls: contents_kw_sync_data_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e260ULL || rel >= 0x114e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e3a0 size=80 callers=0 calls=0
*/
void sub_114e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e3a0ULL || rel >= 0x114e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e3f0 size=16 callers=0 calls=0
*/
void sub_114e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e3f0ULL || rel >= 0x114e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e400 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_114e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e400ULL || rel >= 0x114e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e470 size=32 callers=2 calls=0
*/
void sub_114e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e470ULL || rel >= 0x114e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e490 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e490ULL || rel >= 0x114e4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e4f0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114e4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e4f0ULL || rel >= 0x114e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e550 size=16 callers=0 calls=0
*/
void sub_114e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e550ULL || rel >= 0x114e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e560 size=96 callers=0 calls=2
   calls: sub_114e5c0, sub_c70
*/
void sub_114e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e560ULL || rel >= 0x114e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e5c0 size=32 callers=1 calls=0
*/
void sub_114e5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e5c0ULL || rel >= 0x114e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e5e0 size=16 callers=0 calls=0
*/
void sub_114e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e5e0ULL || rel >= 0x114e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e5f0 size=784 callers=1 calls=4
   calls: sub_70bfa0, sub_70c190, sub_70c480, sub_713480
*/
void sub_114e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e5f0ULL || rel >= 0x114e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e900 size=128 callers=0 calls=2
   calls: sub_713970, sub_714090
*/
void sub_114e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e900ULL || rel >= 0x114e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114e980 size=336 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_114e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114e980ULL || rel >= 0x114ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ead0 size=224 callers=1 calls=2
   calls: sub_70d000, sub_70d040
*/
void sub_114ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ead0ULL || rel >= 0x114ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ebb0 size=272 callers=0 calls=2
   calls: contents_kw_sync_data_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ebb0ULL || rel >= 0x114ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ecc0 size=80 callers=0 calls=0
*/
void sub_114ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ecc0ULL || rel >= 0x114ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ed10 size=16 callers=0 calls=0
*/
void sub_114ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ed10ULL || rel >= 0x114ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ed20 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_114ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ed20ULL || rel >= 0x114ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ed90 size=80 callers=14 calls=0
*/
void sub_114ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ed90ULL || rel >= 0x114ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ede0 size=160 callers=0 calls=8
   calls: gflnet3_generated_message_util, sub_11507f0, sub_1150910, sub_1150a30, sub_1150b50, sub_1150c70, sub_1150d90, sub_1150eb0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ede0ULL || rel >= 0x114ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114ee80 size=672 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_114ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114ee80ULL || rel >= 0x114f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114f120 size=48 callers=0 calls=1
   calls: sub_114ee80
*/
void sub_114f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114f120ULL || rel >= 0x114f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114f150 size=16 callers=0 calls=0
*/
void sub_114f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114f150ULL || rel >= 0x114f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114f160 size=64 callers=3 calls=1
   calls: contents_kw_sync_data_2
*/
void sub_114f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114f160ULL || rel >= 0x114f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114f1a0 size=128 callers=0 calls=2
   calls: sub_114f220, sub_c70
*/
void sub_114f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114f1a0ULL || rel >= 0x114f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114f220 size=32 callers=1 calls=0
*/
void sub_114f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114f220ULL || rel >= 0x114f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114f240 size=384 callers=0 calls=0
*/
void sub_114f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114f240ULL || rel >= 0x114f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114f3c0 size=2288 callers=1 calls=20
   calls: sub_1145b50, sub_1145bd0, sub_1145c50, sub_1145cd0, sub_11470d0, sub_1147470, sub_11487a0, sub_114b0d0, sub_114b7c0, sub_114be80, sub_114ca20, sub_114d360
   ... +8 more
*/
void sub_114f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114f3c0ULL || rel >= 0x114fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114fcb0 size=416 callers=0 calls=2
   calls: sub_714090, sub_714af0
*/
void sub_114fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114fcb0ULL || rel >= 0x114fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0114fe50 size=896 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_114fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x114fe50ULL || rel >= 0x11501d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011501d0 size=1360 callers=1 calls=5
   calls: sub_114c560, sub_114e150, sub_114ead0, sub_70d000, sub_70d040
*/
void sub_11501d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11501d0ULL || rel >= 0x1150720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01150720 size=208 callers=0 calls=2
   calls: contents_kw_sync_data_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1150720ULL || rel >= 0x11507f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011507f0 size=288 callers=1 calls=3
   calls: contents_kw_sync_data_13, sub_11470d0, sub_722d70
*/
void sub_11507f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11507f0ULL || rel >= 0x1150910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01150910 size=288 callers=1 calls=3
   calls: contents_kw_sync_data_14, sub_1147470, sub_722d70
*/
void sub_1150910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1150910ULL || rel >= 0x1150a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01150a30 size=288 callers=1 calls=3
   calls: contents_kw_sync_data_15, sub_1145bd0, sub_722d70
*/
void sub_1150a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1150a30ULL || rel >= 0x1150b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01150b50 size=288 callers=1 calls=3
   calls: contents_kw_sync_data_16, sub_1145b50, sub_722d70
*/
void sub_1150b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1150b50ULL || rel >= 0x1150c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01150c70 size=288 callers=1 calls=3
   calls: contents_kw_sync_data_17, sub_1145cd0, sub_722d70
*/
void sub_1150c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1150c70ULL || rel >= 0x1150d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01150d90 size=288 callers=1 calls=3
   calls: contents_kw_sync_data_18, sub_11487a0, sub_722d70
*/
void sub_1150d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1150d90ULL || rel >= 0x1150eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01150eb0 size=288 callers=1 calls=3
   calls: contents_kw_sync_data_19, sub_1145c50, sub_722d70
*/
void sub_1150eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1150eb0ULL || rel >= 0x1150fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01150fd0 size=80 callers=0 calls=0
*/
void sub_1150fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1150fd0ULL || rel >= 0x1151020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151020 size=64 callers=2 calls=0
*/
void sub_1151020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151020ULL || rel >= 0x1151060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151060 size=16 callers=0 calls=0
*/
void sub_1151060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151060ULL || rel >= 0x1151070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151070 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1151070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151070ULL || rel >= 0x11510e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011510e0 size=16 callers=0 calls=0
*/
void sub_11510e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11510e0ULL || rel >= 0x11510f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011510f0 size=32 callers=0 calls=0
*/
void sub_11510f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11510f0ULL || rel >= 0x1151110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151110 size=16 callers=0 calls=0
*/
void sub_1151110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151110ULL || rel >= 0x1151120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151120 size=16 callers=0 calls=0
*/
void sub_1151120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151120ULL || rel >= 0x1151130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151130 size=16 callers=0 calls=0
*/
void sub_1151130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151130ULL || rel >= 0x1151140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151140 size=32 callers=0 calls=0
*/
void sub_1151140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151140ULL || rel >= 0x1151160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151160 size=16 callers=0 calls=0
*/
void sub_1151160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151160ULL || rel >= 0x1151170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151170 size=16 callers=0 calls=0
*/
void sub_1151170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151170ULL || rel >= 0x1151180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151180 size=16 callers=0 calls=0
*/
void sub_1151180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151180ULL || rel >= 0x1151190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151190 size=32 callers=0 calls=0
*/
void sub_1151190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151190ULL || rel >= 0x11511b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011511b0 size=16 callers=0 calls=0
*/
void sub_11511b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11511b0ULL || rel >= 0x11511c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011511c0 size=16 callers=0 calls=0
*/
void sub_11511c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11511c0ULL || rel >= 0x11511d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011511d0 size=16 callers=0 calls=0
*/
void sub_11511d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11511d0ULL || rel >= 0x11511e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011511e0 size=32 callers=0 calls=0
*/
void sub_11511e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11511e0ULL || rel >= 0x1151200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151200 size=16 callers=0 calls=0
*/
void sub_1151200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151200ULL || rel >= 0x1151210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151210 size=16 callers=0 calls=0
*/
void sub_1151210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151210ULL || rel >= 0x1151220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151220 size=16 callers=0 calls=0
*/
void sub_1151220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151220ULL || rel >= 0x1151230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151230 size=32 callers=0 calls=0
*/
void sub_1151230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151230ULL || rel >= 0x1151250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151250 size=16 callers=0 calls=0
*/
void sub_1151250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151250ULL || rel >= 0x1151260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151260 size=16 callers=0 calls=0
*/
void sub_1151260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151260ULL || rel >= 0x1151270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151270 size=16 callers=0 calls=0
*/
void sub_1151270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151270ULL || rel >= 0x1151280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151280 size=32 callers=0 calls=0
*/
void sub_1151280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151280ULL || rel >= 0x11512a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011512a0 size=16 callers=0 calls=0
*/
void sub_11512a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11512a0ULL || rel >= 0x11512b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011512b0 size=16 callers=0 calls=0
*/
void sub_11512b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11512b0ULL || rel >= 0x11512c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011512c0 size=16 callers=0 calls=0
*/
void sub_11512c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11512c0ULL || rel >= 0x11512d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011512d0 size=32 callers=0 calls=0
*/
void sub_11512d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11512d0ULL || rel >= 0x11512f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011512f0 size=16 callers=0 calls=0
*/
void sub_11512f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11512f0ULL || rel >= 0x1151300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151300 size=16 callers=0 calls=0
*/
void sub_1151300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151300ULL || rel >= 0x1151310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151310 size=16 callers=0 calls=0
*/
void sub_1151310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151310ULL || rel >= 0x1151320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151320 size=32 callers=0 calls=0
*/
void sub_1151320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151320ULL || rel >= 0x1151340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151340 size=16 callers=0 calls=0
*/
void sub_1151340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151340ULL || rel >= 0x1151350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151350 size=16 callers=0 calls=0
*/
void sub_1151350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151350ULL || rel >= 0x1151360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151360 size=64 callers=2 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151360ULL || rel >= 0x11513a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011513a0 size=64 callers=2 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11513a0ULL || rel >= 0x11513e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011513e0 size=112 callers=2 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11513e0ULL || rel >= 0x1151450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151450 size=96 callers=2 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151450ULL || rel >= 0x11514b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011514b0 size=64 callers=2 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11514b0ULL || rel >= 0x11514f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011514f0 size=144 callers=2 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11514f0ULL || rel >= 0x1151580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151580 size=96 callers=2 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_kw_sync_data_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151580ULL || rel >= 0x11515e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011515e0 size=48 callers=0 calls=0
*/
void sub_11515e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11515e0ULL || rel >= 0x1151610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151610 size=400 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: CHECK failed: file != NULL: 
   ref: cooking_data.proto
*/
void contents_cooking_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151610ULL || rel >= 0x11517a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011517a0 size=192 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_data.proto
*/
void contents_cooking_data_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11517a0ULL || rel >= 0x1151860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151860 size=80 callers=0 calls=0
*/
void sub_1151860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151860ULL || rel >= 0x11518b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011518b0 size=128 callers=0 calls=4
   calls: contents_cooking_data_4, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_11518b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11518b0ULL || rel >= 0x1151930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151930 size=48 callers=8 calls=0
*/
void sub_1151930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151930ULL || rel >= 0x1151960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151960 size=128 callers=0 calls=2
   calls: gflnet3_generated_message_util, gflnet3_repeated_field
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_data_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151960ULL || rel >= 0x11519e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011519e0 size=144 callers=4 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_11519e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11519e0ULL || rel >= 0x1151a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151a70 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1151a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151a70ULL || rel >= 0x1151b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151b00 size=16 callers=0 calls=0
*/
void sub_1151b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151b00ULL || rel >= 0x1151b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151b10 size=224 callers=5 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_data.proto
*/
void contents_cooking_data_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151b10ULL || rel >= 0x1151bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151bf0 size=112 callers=0 calls=2
   calls: sub_1151c60, sub_c70
*/
void sub_1151bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151bf0ULL || rel >= 0x1151c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151c60 size=32 callers=1 calls=0
*/
void sub_1151c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151c60ULL || rel >= 0x1151c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151c80 size=32 callers=0 calls=0
*/
void sub_1151c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151c80ULL || rel >= 0x1151ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01151ca0 size=1088 callers=1 calls=10
   calls: sub_6f67b0, sub_70b510, sub_70b590, sub_70b820, sub_70bfa0, sub_70c190, sub_70c2e0, sub_70c480, sub_713480, sub_75bcb0
*/
void sub_1151ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1151ca0ULL || rel >= 0x11520e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011520e0 size=560 callers=0 calls=4
   calls: sub_70cb60, sub_70cc80, sub_713690, sub_713860
*/
void sub_11520e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11520e0ULL || rel >= 0x1152310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152310 size=464 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_1152310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152310ULL || rel >= 0x11524e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011524e0 size=368 callers=1 calls=1
   calls: sub_70d000
*/
void sub_11524e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11524e0ULL || rel >= 0x1152650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152650 size=272 callers=0 calls=3
   calls: contents_cooking_data_4, gflnet3_generated_message_util, gflnet3_repeated_field
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_data_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152650ULL || rel >= 0x1152760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152760 size=80 callers=0 calls=0
*/
void sub_1152760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152760ULL || rel >= 0x11527b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011527b0 size=128 callers=1 calls=1
   calls: gflnet3_repeated_field
*/
void sub_11527b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11527b0ULL || rel >= 0x1152830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152830 size=16 callers=0 calls=0
*/
void sub_1152830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152830ULL || rel >= 0x1152840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152840 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1152840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152840ULL || rel >= 0x11528b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011528b0 size=16 callers=0 calls=0
*/
void sub_11528b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11528b0ULL || rel >= 0x11528c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011528c0 size=32 callers=0 calls=0
*/
void sub_11528c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11528c0ULL || rel >= 0x11528e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011528e0 size=16 callers=0 calls=0
*/
void sub_11528e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11528e0ULL || rel >= 0x11528f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011528f0 size=16 callers=0 calls=0
*/
void sub_11528f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11528f0ULL || rel >= 0x1152900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152900 size=224 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_data.proto
*/
void contents_cooking_data_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152900ULL || rel >= 0x11529e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011529e0 size=368 callers=0 calls=10
   calls: contents_pokecamp_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: CHECK failed: file != NULL: 
   ref: pokecamp_data_holder.proto
*/
void contents_pokecamp_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11529e0ULL || rel >= 0x1152b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152b50 size=288 callers=3 calls=14
   calls: contents_cooking_data_2, contents_cooking_data_4, contents_cooking_matching_data_2, contents_cooking_matching_data_5, contents_cooking_spiece_2, contents_cooking_spiece_5, contents_cooking_transform_2, contents_cooking_transform_5, contents_kw_sync_data_2, gflnet3_common, gflnet3_descriptor, gflnet3_message_3
   ... +2 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: pokecamp_data_holder.proto
*/
void contents_pokecamp_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152b50ULL || rel >= 0x1152c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152c70 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_1152c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152c70ULL || rel >= 0x1152cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152cd0 size=144 callers=0 calls=4
   calls: contents_pokecamp_data_holder_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_1152cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152cd0ULL || rel >= 0x1152d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152d60 size=32 callers=5 calls=0
*/
void sub_1152d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152d60ULL || rel >= 0x1152d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01152d80 size=784 callers=0 calls=12
   calls: contents_cooking_data_4, contents_cooking_matching_data_5, contents_cooking_spiece_5, contents_cooking_transform_5, gflnet3_generated_message_util, sub_114ed90, sub_114f160, sub_1151930, sub_1154300, sub_11555c0, sub_1156350, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_pokecamp_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1152d80ULL || rel >= 0x1153090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153090 size=160 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1153090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153090ULL || rel >= 0x1153130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153130 size=48 callers=0 calls=1
   calls: sub_1153090
*/
void sub_1153130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153130ULL || rel >= 0x1153160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153160 size=96 callers=4 calls=0
*/
void sub_1153160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153160ULL || rel >= 0x11531c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011531c0 size=16 callers=0 calls=0
*/
void sub_11531c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11531c0ULL || rel >= 0x11531d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011531d0 size=96 callers=0 calls=2
   calls: sub_1153230, sub_c70
*/
void sub_11531d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11531d0ULL || rel >= 0x1153230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153230 size=32 callers=1 calls=0
*/
void sub_1153230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153230ULL || rel >= 0x1153250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153250 size=96 callers=0 calls=0
*/
void sub_1153250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153250ULL || rel >= 0x11532b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011532b0 size=1648 callers=0 calls=16
   calls: sub_114ed90, sub_114f3c0, sub_1151930, sub_1151ca0, sub_1154300, sub_11545f0, sub_11555c0, sub_1155850, sub_1156350, sub_1156650, sub_70b5e0, sub_70b750
   ... +4 more
*/
void sub_11532b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11532b0ULL || rel >= 0x1153920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153920 size=224 callers=0 calls=1
   calls: sub_714af0
*/
void sub_1153920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153920ULL || rel >= 0x1153a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153a00 size=512 callers=0 calls=0
*/
void sub_1153a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153a00ULL || rel >= 0x1153c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153c00 size=224 callers=0 calls=6
   calls: sub_11501d0, sub_11524e0, sub_1154c90, sub_1155b60, sub_1156b00, sub_70d000
*/
void sub_1153c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153c00ULL || rel >= 0x1153ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153ce0 size=208 callers=0 calls=2
   calls: contents_pokecamp_data_holder_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_pokecamp_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153ce0ULL || rel >= 0x1153db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153db0 size=80 callers=0 calls=0
*/
void sub_1153db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153db0ULL || rel >= 0x1153e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153e00 size=16 callers=0 calls=0
*/
void sub_1153e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153e00ULL || rel >= 0x1153e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153e10 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1153e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153e10ULL || rel >= 0x1153e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153e80 size=16 callers=0 calls=0
*/
void sub_1153e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153e80ULL || rel >= 0x1153e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153e90 size=32 callers=0 calls=0
*/
void sub_1153e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153e90ULL || rel >= 0x1153eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153eb0 size=16 callers=0 calls=0
*/
void sub_1153eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153eb0ULL || rel >= 0x1153ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153ec0 size=16 callers=0 calls=0
*/
void sub_1153ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153ec0ULL || rel >= 0x1153ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

