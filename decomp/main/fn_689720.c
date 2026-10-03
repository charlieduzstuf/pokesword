/* main functions 00689720..006a50f0 (44 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00689720 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_689720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x689720ULL || rel >= 0x689770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00689770 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_689770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x689770ULL || rel >= 0x6897c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006897c0 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_6897c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6897c0ULL || rel >= 0x689810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00689810 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_689810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x689810ULL || rel >= 0x689860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00689860 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_689860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x689860ULL || rel >= 0x6898b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006898b0 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_6898b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6898b0ULL || rel >= 0x689900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00689900 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_689900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x689900ULL || rel >= 0x689950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00689950 size=80 callers=48 calls=0
*/
void sub_689950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x689950ULL || rel >= 0x6899a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006899a0 size=4736 callers=0 calls=1
   calls: sub_68ac20
*/
void sub_6899a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6899a0ULL || rel >= 0x68ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068ac20 size=512 callers=8 calls=0
*/
void sub_68ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ac20ULL || rel >= 0x68ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068ae20 size=416 callers=2 calls=3
   calls: sub_5cfad0, sub_608fa0, sub_65d700
*/
void sub_68ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ae20ULL || rel >= 0x68afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068afc0 size=3616 callers=1 calls=23
   calls: sub_10320, sub_1787490, sub_17874c0, sub_1787500, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5f32b0, sub_5f7110, sub_5f7120, sub_60ccb0, sub_60de70
   ... +11 more
   ref: DepthDiscardValue
   ref: DepthBuffer
   ref: LineWidthScale
   ref: shader/outline.bnsh
   ref: VcolorEdgeOffSet
   ref: NormalEdgeOffSet
   ref: EdgePow
   ref: DepthPow
*/
void DepthDiscardValue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68afc0ULL || rel >= 0x68bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068bde0 size=16 callers=1 calls=0
*/
void sub_68bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68bde0ULL || rel >= 0x68bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068bdf0 size=992 callers=0 calls=14
   calls: sub_17876b0, sub_17876c0, sub_17887f0, sub_1789270, sub_5cfad0, sub_5f3260, sub_5f7110, sub_5f7120, sub_5f7320, sub_5f8bc0, sub_5f8c40, sub_609420
   ... +2 more
   ref: outlineConstant
*/
void outlineConstant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68bdf0ULL || rel >= 0x68c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c1d0 size=704 callers=7 calls=1
   calls: sub_68cc60
*/
void sub_68c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c1d0ULL || rel >= 0x68c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c490 size=128 callers=0 calls=0
*/
void sub_68c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c490ULL || rel >= 0x68c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c510 size=128 callers=0 calls=0
*/
void sub_68c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c510ULL || rel >= 0x68c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c590 size=368 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_68c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c590ULL || rel >= 0x68c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c700 size=16 callers=0 calls=0
*/
void sub_68c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c700ULL || rel >= 0x68c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c710 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_68c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c710ULL || rel >= 0x68c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c7c0 size=16 callers=0 calls=0
*/
void sub_68c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c7c0ULL || rel >= 0x68c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c7d0 size=16 callers=0 calls=0
*/
void sub_68c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c7d0ULL || rel >= 0x68c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c7e0 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_68c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c7e0ULL || rel >= 0x68c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c890 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_68c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c890ULL || rel >= 0x68c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c940 size=16 callers=0 calls=0
*/
void sub_68c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c940ULL || rel >= 0x68c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c950 size=16 callers=0 calls=0
*/
void sub_68c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c950ULL || rel >= 0x68c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c960 size=16 callers=0 calls=0
*/
void sub_68c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c960ULL || rel >= 0x68c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068c970 size=192 callers=0 calls=1
   calls: sub_68ca30
*/
void sub_68c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68c970ULL || rel >= 0x68ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068ca30 size=320 callers=6 calls=4
   calls: sub_5f7110, sub_5f7120, sub_5f7320, sub_68cb70
*/
void sub_68ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ca30ULL || rel >= 0x68cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068cb70 size=240 callers=2 calls=2
   calls: sub_5f6f50, sub_5f6fe0
*/
void sub_68cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68cb70ULL || rel >= 0x68cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068cc60 size=272 callers=5 calls=0
*/
void sub_68cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68cc60ULL || rel >= 0x68cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068cd70 size=704 callers=0 calls=0
*/
void sub_68cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68cd70ULL || rel >= 0x68d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d030 size=512 callers=7 calls=1
   calls: sub_68cc60
*/
void sub_68d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d030ULL || rel >= 0x68d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d230 size=320 callers=4 calls=3
   calls: sub_5db8e0, sub_68eb80, sub_969e30
*/
void sub_68d230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d230ULL || rel >= 0x68d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d370 size=304 callers=2 calls=2
   calls: sub_5db8e0, sub_68eb80
*/
void sub_68d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d370ULL || rel >= 0x68d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d4a0 size=400 callers=0 calls=2
   calls: sub_695210, sub_967240
*/
void sub_68d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d4a0ULL || rel >= 0x68d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d630 size=224 callers=39 calls=0
*/
void sub_68d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d630ULL || rel >= 0x68d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d710 size=496 callers=14 calls=3
   calls: sub_59bee0, sub_612ef0, sub_967240
*/
void sub_68d710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d710ULL || rel >= 0x68d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d900 size=16 callers=2 calls=0
*/
void sub_68d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d900ULL || rel >= 0x68d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d910 size=32 callers=19 calls=0
*/
void sub_68d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d910ULL || rel >= 0x68d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d930 size=16 callers=5 calls=0
*/
void sub_68d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d930ULL || rel >= 0x68d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d940 size=16 callers=12 calls=0
*/
void sub_68d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d940ULL || rel >= 0x68d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d950 size=96 callers=68 calls=1
   calls: sub_691260
*/
void sub_68d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d950ULL || rel >= 0x68d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d9b0 size=64 callers=37 calls=1
   calls: sub_691560
*/
void sub_68d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d9b0ULL || rel >= 0x68d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068d9f0 size=64 callers=86 calls=1
   calls: sub_691560
*/
void sub_68d9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d9f0ULL || rel >= 0x68da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068da30 size=16 callers=73 calls=0
*/
void sub_68da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68da30ULL || rel >= 0x68da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068da40 size=32 callers=15 calls=0
*/
void sub_68da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68da40ULL || rel >= 0x68da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068da60 size=16 callers=19 calls=0
*/
void sub_68da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68da60ULL || rel >= 0x68da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068da70 size=16 callers=6 calls=0
*/
void sub_68da70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68da70ULL || rel >= 0x68da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068da80 size=16 callers=1 calls=0
*/
void sub_68da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68da80ULL || rel >= 0x68da90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068da90 size=16 callers=2 calls=0
*/
void sub_68da90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68da90ULL || rel >= 0x68daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068daa0 size=96 callers=3 calls=1
   calls: sub_691560
*/
void sub_68daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68daa0ULL || rel >= 0x68db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068db00 size=880 callers=0 calls=4
   calls: sub_17c1a10, sub_59b970, sub_68de70, sub_691560
*/
void sub_68db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68db00ULL || rel >= 0x68de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068de70 size=2512 callers=1 calls=2
   calls: sub_612f70, sub_967240
*/
void sub_68de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68de70ULL || rel >= 0x68e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068e840 size=16 callers=0 calls=0
*/
void sub_68e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68e840ULL || rel >= 0x68e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068e850 size=400 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_68e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68e850ULL || rel >= 0x68e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068e9e0 size=16 callers=0 calls=0
*/
void sub_68e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68e9e0ULL || rel >= 0x68e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068e9f0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_68e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68e9f0ULL || rel >= 0x68ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068ea60 size=16 callers=0 calls=0
*/
void sub_68ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ea60ULL || rel >= 0x68ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068ea70 size=16 callers=0 calls=0
*/
void sub_68ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ea70ULL || rel >= 0x68ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068ea80 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_68ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ea80ULL || rel >= 0x68eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068eaf0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_68eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68eaf0ULL || rel >= 0x68eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068eb60 size=16 callers=0 calls=0
*/
void sub_68eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68eb60ULL || rel >= 0x68eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068eb70 size=16 callers=0 calls=0
*/
void sub_68eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68eb70ULL || rel >= 0x68eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068eb80 size=224 callers=3 calls=1
   calls: sub_691110
*/
void sub_68eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68eb80ULL || rel >= 0x68ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068ec60 size=336 callers=0 calls=6
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_5f3730, sub_5f7540, sub_690260
*/
void sub_68ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ec60ULL || rel >= 0x68edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068edb0 size=32 callers=0 calls=0
*/
void sub_68edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68edb0ULL || rel >= 0x68edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068edd0 size=320 callers=2 calls=4
   calls: sub_5e2350, sub_65d700, sub_691b40, sub_691b70
*/
void sub_68edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68edd0ULL || rel >= 0x68ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068ef10 size=288 callers=2 calls=1
   calls: sub_601140
*/
void sub_68ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ef10ULL || rel >= 0x68f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068f030 size=304 callers=8 calls=0
*/
void sub_68f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68f030ULL || rel >= 0x68f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068f160 size=16 callers=0 calls=0
*/
void sub_68f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68f160ULL || rel >= 0x68f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068f170 size=176 callers=3 calls=0
*/
void sub_68f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68f170ULL || rel >= 0x68f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068f220 size=528 callers=1 calls=4
   calls: sub_691560, sub_691b50, sub_691d00, sub_692920
*/
void sub_68f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68f220ULL || rel >= 0x68f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068f430 size=544 callers=0 calls=4
   calls: sub_691560, sub_691b50, sub_691d00, sub_692920
*/
void sub_68f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68f430ULL || rel >= 0x68f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068f650 size=32 callers=15 calls=0
*/
void sub_68f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68f650ULL || rel >= 0x68f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068f670 size=1648 callers=22 calls=10
   calls: DefaultPath, sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_602930, sub_6032f0, sub_6903b0, sub_690870, sub_6909c0, sub_691d20
*/
void sub_68f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68f670ULL || rel >= 0x68fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068fce0 size=112 callers=0 calls=0
*/
void sub_68fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68fce0ULL || rel >= 0x68fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068fd50 size=112 callers=0 calls=0
*/
void sub_68fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68fd50ULL || rel >= 0x68fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068fdc0 size=16 callers=0 calls=0
*/
void sub_68fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68fdc0ULL || rel >= 0x68fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068fdd0 size=112 callers=0 calls=0
*/
void sub_68fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68fdd0ULL || rel >= 0x68fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068fe40 size=112 callers=0 calls=0
*/
void sub_68fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68fe40ULL || rel >= 0x68feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068feb0 size=16 callers=0 calls=0
*/
void sub_68feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68feb0ULL || rel >= 0x68fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068fec0 size=16 callers=0 calls=0
*/
void sub_68fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68fec0ULL || rel >= 0x68fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068fed0 size=112 callers=0 calls=0
*/
void sub_68fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68fed0ULL || rel >= 0x68ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068ff40 size=112 callers=0 calls=0
*/
void sub_68ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ff40ULL || rel >= 0x68ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0068ffb0 size=256 callers=0 calls=1
   calls: sub_690740
*/
void sub_68ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ffb0ULL || rel >= 0x6900b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006900b0 size=16 callers=0 calls=0
*/
void sub_6900b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6900b0ULL || rel >= 0x6900c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006900c0 size=16 callers=0 calls=0
*/
void sub_6900c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6900c0ULL || rel >= 0x6900d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006900d0 size=16 callers=0 calls=0
*/
void sub_6900d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6900d0ULL || rel >= 0x6900e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006900e0 size=16 callers=0 calls=0
*/
void sub_6900e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6900e0ULL || rel >= 0x6900f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006900f0 size=16 callers=0 calls=0
*/
void sub_6900f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6900f0ULL || rel >= 0x690100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690100 size=16 callers=0 calls=0
*/
void sub_690100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690100ULL || rel >= 0x690110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690110 size=16 callers=0 calls=0
*/
void sub_690110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690110ULL || rel >= 0x690120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690120 size=16 callers=0 calls=0
*/
void sub_690120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690120ULL || rel >= 0x690130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690130 size=304 callers=0 calls=0
*/
void sub_690130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690130ULL || rel >= 0x690260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690260 size=272 callers=1 calls=2
   calls: sub_691c00, sub_691c20
*/
void sub_690260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690260ULL || rel >= 0x690370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690370 size=16 callers=0 calls=0
*/
void sub_690370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690370ULL || rel >= 0x690380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690380 size=16 callers=0 calls=0
*/
void sub_690380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690380ULL || rel >= 0x690390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690390 size=16 callers=0 calls=0
*/
void sub_690390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690390ULL || rel >= 0x6903a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006903a0 size=16 callers=0 calls=0
*/
void sub_6903a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6903a0ULL || rel >= 0x6903b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006903b0 size=608 callers=1 calls=2
   calls: sub_690610, sub_690740
*/
void sub_6903b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6903b0ULL || rel >= 0x690610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690610 size=304 callers=1 calls=0
*/
void sub_690610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690610ULL || rel >= 0x690740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690740 size=304 callers=3 calls=0
*/
void sub_690740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690740ULL || rel >= 0x690870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690870 size=336 callers=3 calls=1
   calls: DefaultPath
*/
void sub_690870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690870ULL || rel >= 0x6909c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006909c0 size=336 callers=1 calls=1
   calls: DefaultPath
*/
void sub_6909c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6909c0ULL || rel >= 0x690b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690b10 size=752 callers=0 calls=5
   calls: sub_690740, sub_690e40, sub_690f30, sub_691bf0, sub_691c10
*/
void sub_690b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690b10ULL || rel >= 0x690e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690e00 size=64 callers=0 calls=0
*/
void sub_690e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690e00ULL || rel >= 0x690e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690e40 size=240 callers=1 calls=0
*/
void sub_690e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690e40ULL || rel >= 0x690f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00690f30 size=432 callers=2 calls=0
*/
void sub_690f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x690f30ULL || rel >= 0x6910e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006910e0 size=32 callers=0 calls=0
*/
void sub_6910e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6910e0ULL || rel >= 0x691100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691100 size=16 callers=0 calls=0
*/
void sub_691100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691100ULL || rel >= 0x691110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691110 size=192 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_691110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691110ULL || rel >= 0x6911d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006911d0 size=144 callers=0 calls=0
*/
void sub_6911d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6911d0ULL || rel >= 0x691260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691260 size=48 callers=2 calls=0
*/
void sub_691260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691260ULL || rel >= 0x691290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691290 size=144 callers=0 calls=0
*/
void sub_691290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691290ULL || rel >= 0x691320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691320 size=144 callers=0 calls=0
*/
void sub_691320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691320ULL || rel >= 0x6913b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006913b0 size=144 callers=0 calls=0
*/
void sub_6913b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6913b0ULL || rel >= 0x691440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691440 size=144 callers=0 calls=0
*/
void sub_691440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691440ULL || rel >= 0x6914d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006914d0 size=144 callers=0 calls=0
*/
void sub_6914d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6914d0ULL || rel >= 0x691560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691560 size=48 callers=19 calls=0
*/
void sub_691560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691560ULL || rel >= 0x691590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691590 size=176 callers=0 calls=1
   calls: sub_603810
*/
void sub_691590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691590ULL || rel >= 0x691640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691640 size=176 callers=0 calls=1
   calls: sub_603810
*/
void sub_691640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691640ULL || rel >= 0x6916f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006916f0 size=176 callers=0 calls=1
   calls: sub_603810
*/
void sub_6916f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6916f0ULL || rel >= 0x6917a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006917a0 size=800 callers=1 calls=4
   calls: sub_5d1b50, sub_5d76c0, sub_691f80, sub_693070
*/
void sub_6917a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6917a0ULL || rel >= 0x691ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691ac0 size=16 callers=1 calls=0
*/
void sub_691ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691ac0ULL || rel >= 0x691ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691ad0 size=112 callers=1 calls=2
   calls: sub_692930, sub_694a80
*/
void sub_691ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691ad0ULL || rel >= 0x691b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691b40 size=16 callers=1 calls=0
*/
void sub_691b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691b40ULL || rel >= 0x691b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691b50 size=16 callers=2 calls=0
*/
void sub_691b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691b50ULL || rel >= 0x691b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691b60 size=16 callers=0 calls=0
*/
void sub_691b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691b60ULL || rel >= 0x691b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691b70 size=128 callers=1 calls=1
   calls: sub_6952c0
*/
void sub_691b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691b70ULL || rel >= 0x691bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691bf0 size=16 callers=1 calls=0
*/
void sub_691bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691bf0ULL || rel >= 0x691c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691c00 size=16 callers=1 calls=0
*/
void sub_691c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691c00ULL || rel >= 0x691c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691c10 size=16 callers=1 calls=0
*/
void sub_691c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691c10ULL || rel >= 0x691c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691c20 size=224 callers=1 calls=1
   calls: sub_6955c0
*/
void sub_691c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691c20ULL || rel >= 0x691d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691d00 size=16 callers=2 calls=0
*/
void sub_691d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691d00ULL || rel >= 0x691d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691d10 size=16 callers=0 calls=0
*/
void sub_691d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691d10ULL || rel >= 0x691d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691d20 size=496 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010, sub_5f19d0
*/
void sub_691d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691d20ULL || rel >= 0x691f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691f10 size=112 callers=2 calls=1
   calls: sub_696010
*/
void sub_691f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691f10ULL || rel >= 0x691f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00691f80 size=688 callers=1 calls=1
   calls: sub_692230
*/
void sub_691f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x691f80ULL || rel >= 0x692230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692230 size=320 callers=1 calls=0
*/
void sub_692230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692230ULL || rel >= 0x692370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692370 size=544 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_692370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692370ULL || rel >= 0x692590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692590 size=16 callers=0 calls=0
*/
void sub_692590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692590ULL || rel >= 0x6925a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006925a0 size=16 callers=0 calls=0
*/
void sub_6925a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6925a0ULL || rel >= 0x6925b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006925b0 size=16 callers=0 calls=0
*/
void sub_6925b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6925b0ULL || rel >= 0x6925c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006925c0 size=160 callers=0 calls=1
   calls: sub_694bd0
*/
void sub_6925c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6925c0ULL || rel >= 0x692660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692660 size=160 callers=0 calls=1
   calls: sub_694bd0
*/
void sub_692660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692660ULL || rel >= 0x692700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692700 size=160 callers=0 calls=1
   calls: sub_694bd0
*/
void sub_692700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692700ULL || rel >= 0x6927a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006927a0 size=160 callers=0 calls=1
   calls: sub_694bd0
*/
void sub_6927a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6927a0ULL || rel >= 0x692840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692840 size=64 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_692840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692840ULL || rel >= 0x692880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692880 size=160 callers=0 calls=3
   calls: sub_5e2750, sub_5e2830, sub_691ad0
*/
void sub_692880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692880ULL || rel >= 0x692920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692920 size=16 callers=2 calls=0
*/
void sub_692920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692920ULL || rel >= 0x692930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692930 size=64 callers=1 calls=0
*/
void sub_692930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692930ULL || rel >= 0x692970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692970 size=144 callers=0 calls=0
*/
void sub_692970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692970ULL || rel >= 0x692a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692a00 size=144 callers=0 calls=0
*/
void sub_692a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692a00ULL || rel >= 0x692a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692a90 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_692a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692a90ULL || rel >= 0x692b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692b00 size=160 callers=0 calls=1
   calls: sub_692ec0
*/
void sub_692b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692b00ULL || rel >= 0x692ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692ba0 size=144 callers=0 calls=0
*/
void sub_692ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692ba0ULL || rel >= 0x692c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692c30 size=144 callers=0 calls=0
*/
void sub_692c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692c30ULL || rel >= 0x692cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692cc0 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_692cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692cc0ULL || rel >= 0x692d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692d30 size=112 callers=0 calls=1
   calls: sub_5fbe30
*/
void sub_692d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692d30ULL || rel >= 0x692da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692da0 size=144 callers=0 calls=0
*/
void sub_692da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692da0ULL || rel >= 0x692e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692e30 size=144 callers=0 calls=0
*/
void sub_692e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692e30ULL || rel >= 0x692ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00692ec0 size=432 callers=2 calls=0
*/
void sub_692ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692ec0ULL || rel >= 0x693070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00693070 size=2432 callers=1 calls=21
   calls: SDK_MW_Nintendo_NintendoWare_Vfx_7_3_2_Release, sub_1787490, sub_17874c0, sub_178f8e0, sub_178f8f0, sub_178f910, sub_178f930, sub_17dfdb0, sub_17dfdd0, sub_5cf8c0, sub_5cf8e0, sub_5cf8f0
   ... +9 more
*/
void sub_693070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x693070ULL || rel >= 0x6939f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006939f0 size=1056 callers=1 calls=1
   calls: sub_178fb50
*/
void sub_6939f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6939f0ULL || rel >= 0x693e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00693e10 size=160 callers=0 calls=2
   calls: sub_5fe100, sub_696080
*/
void sub_693e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x693e10ULL || rel >= 0x693eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00693eb0 size=160 callers=0 calls=2
   calls: sub_5fabc0, sub_696320
*/
void sub_693eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x693eb0ULL || rel >= 0x693f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00693f50 size=528 callers=1 calls=0
*/
void sub_693f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x693f50ULL || rel >= 0x694160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694160 size=16 callers=0 calls=0
*/
void sub_694160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694160ULL || rel >= 0x694170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694170 size=928 callers=0 calls=6
   calls: sub_178f900, sub_178fb40, sub_17dfdc0, sub_17dfde0, sub_5cf8d0, sub_694580
*/
void sub_694170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694170ULL || rel >= 0x694510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694510 size=16 callers=0 calls=0
*/
void sub_694510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694510ULL || rel >= 0x694520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694520 size=48 callers=0 calls=1
   calls: sub_697ac0
*/
void sub_694520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694520ULL || rel >= 0x694550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694550 size=48 callers=0 calls=1
   calls: sub_698120
*/
void sub_694550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694550ULL || rel >= 0x694580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694580 size=1056 callers=1 calls=1
   calls: sub_178fb60
*/
void sub_694580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694580ULL || rel >= 0x6949a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006949a0 size=16 callers=0 calls=0
*/
void sub_6949a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6949a0ULL || rel >= 0x6949b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006949b0 size=16 callers=0 calls=0
*/
void sub_6949b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6949b0ULL || rel >= 0x6949c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006949c0 size=16 callers=0 calls=0
*/
void sub_6949c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6949c0ULL || rel >= 0x6949d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006949d0 size=176 callers=2 calls=0
*/
void sub_6949d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6949d0ULL || rel >= 0x694a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694a80 size=336 callers=1 calls=4
   calls: sub_17d4160, sub_5cf8e0, sub_5cf8f0, vfx_system_deleted_the_registered_binary_resource_id_d_2
*/
void sub_694a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694a80ULL || rel >= 0x694bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694bd0 size=128 callers=4 calls=3
   calls: The_Resource_to_be_cleared_does_not_exist_ResourceId_d, sub_17d4490, sub_694c50
*/
void sub_694bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694bd0ULL || rel >= 0x694c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694c50 size=320 callers=1 calls=1
   calls: sub_5cf8f0
*/
void sub_694c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694c50ULL || rel >= 0x694d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694d90 size=352 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_696da0
*/
void sub_694d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694d90ULL || rel >= 0x694ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00694ef0 size=304 callers=4 calls=1
   calls: sub_5cf8f0
*/
void sub_694ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x694ef0ULL || rel >= 0x695020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00695020 size=304 callers=0 calls=6
   calls: sub_17c1a10, sub_17c1c30, sub_17de780, sub_17df770, sub_5cf8e0, sub_5cf8f0
*/
void sub_695020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x695020ULL || rel >= 0x695150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00695150 size=192 callers=0 calls=2
   calls: EmitterSet_has_been_already_deleted_2, sub_5cf8f0
*/
void sub_695150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x695150ULL || rel >= 0x695210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00695210 size=176 callers=9 calls=2
   calls: sub_5cf8f0, sub_5d2070
*/
void sub_695210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x695210ULL || rel >= 0x6952c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006952c0 size=304 callers=1 calls=2
   calls: sub_5cf8f0, sub_697090
*/
void sub_6952c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6952c0ULL || rel >= 0x6953f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006953f0 size=48 callers=0 calls=0
*/
void sub_6953f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6953f0ULL || rel >= 0x695420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00695420 size=176 callers=6 calls=2
   calls: sub_17c1080, sub_5cf8f0
*/
void sub_695420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x695420ULL || rel >= 0x6954d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006954d0 size=16 callers=0 calls=0
*/
void sub_6954d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6954d0ULL || rel >= 0x6954e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006954e0 size=208 callers=0 calls=1
   calls: sub_17df150
*/
void sub_6954e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6954e0ULL || rel >= 0x6955b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006955b0 size=16 callers=0 calls=0
*/
void sub_6955b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6955b0ULL || rel >= 0x6955c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006955c0 size=1296 callers=1 calls=13
   calls: sub_17876b0, sub_17876c0, sub_17887f0, sub_1788d40, sub_1789270, sub_5f3260, sub_5f32b0, sub_5f8bc0, sub_5f8c40, sub_5fd000, sub_5ff2a0, sub_6829a0
   ... +1 more
*/
void sub_6955c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6955c0ULL || rel >= 0x695ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00695ad0 size=112 callers=0 calls=1
   calls: sub_695b40
*/
void sub_695ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x695ad0ULL || rel >= 0x695b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00695b40 size=672 callers=1 calls=1
   calls: sub_697320
*/
void sub_695b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x695b40ULL || rel >= 0x695de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00695de0 size=224 callers=0 calls=0
*/
void sub_695de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x695de0ULL || rel >= 0x695ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00695ec0 size=240 callers=1 calls=2
   calls: sub_1787500, sub_178fb70
*/
void sub_695ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x695ec0ULL || rel >= 0x695fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00695fb0 size=64 callers=1 calls=0
*/
void sub_695fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x695fb0ULL || rel >= 0x695ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00695ff0 size=32 callers=0 calls=0
*/
void sub_695ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x695ff0ULL || rel >= 0x696010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696010 size=96 callers=1 calls=0
*/
void sub_696010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696010ULL || rel >= 0x696070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696070 size=16 callers=1 calls=0
*/
void sub_696070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696070ULL || rel >= 0x696080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696080 size=672 callers=1 calls=1
   calls: sub_6976f0
*/
void sub_696080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696080ULL || rel >= 0x696320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696320 size=672 callers=1 calls=1
   calls: sub_697d50
*/
void sub_696320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696320ULL || rel >= 0x6965c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006965c0 size=16 callers=0 calls=0
*/
void sub_6965c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6965c0ULL || rel >= 0x6965d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006965d0 size=16 callers=0 calls=0
*/
void sub_6965d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6965d0ULL || rel >= 0x6965e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006965e0 size=32 callers=0 calls=0
*/
void sub_6965e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6965e0ULL || rel >= 0x696600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696600 size=16 callers=0 calls=0
*/
void sub_696600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696600ULL || rel >= 0x696610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696610 size=16 callers=0 calls=0
*/
void sub_696610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696610ULL || rel >= 0x696620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696620 size=544 callers=1 calls=0
*/
void sub_696620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696620ULL || rel >= 0x696840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696840 size=944 callers=0 calls=4
   calls: sub_17deb60, sub_17df710, sub_5cf8f0, sub_696c00
*/
void sub_696840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696840ULL || rel >= 0x696bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696bf0 size=16 callers=0 calls=0
*/
void sub_696bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696bf0ULL || rel >= 0x696c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696c00 size=384 callers=1 calls=0
*/
void sub_696c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696c00ULL || rel >= 0x696d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696d80 size=16 callers=0 calls=0
*/
void sub_696d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696d80ULL || rel >= 0x696d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696d90 size=16 callers=0 calls=0
*/
void sub_696d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696d90ULL || rel >= 0x696da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696da0 size=304 callers=1 calls=0
*/
void sub_696da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696da0ULL || rel >= 0x696ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696ed0 size=112 callers=0 calls=2
   calls: sub_5f71b0, sub_694ef0
*/
void sub_696ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696ed0ULL || rel >= 0x696f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696f40 size=112 callers=0 calls=2
   calls: sub_5f71b0, sub_694ef0
*/
void sub_696f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696f40ULL || rel >= 0x696fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00696fb0 size=112 callers=0 calls=2
   calls: sub_5f71b0, sub_694ef0
*/
void sub_696fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696fb0ULL || rel >= 0x697020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00697020 size=112 callers=0 calls=2
   calls: sub_5f71b0, sub_694ef0
*/
void sub_697020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x697020ULL || rel >= 0x697090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00697090 size=656 callers=1 calls=0
*/
void sub_697090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x697090ULL || rel >= 0x697320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00697320 size=272 callers=1 calls=0
*/
void sub_697320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x697320ULL || rel >= 0x697430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00697430 size=704 callers=0 calls=0
*/
void sub_697430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x697430ULL || rel >= 0x6976f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006976f0 size=272 callers=1 calls=0
*/
void sub_6976f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6976f0ULL || rel >= 0x697800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00697800 size=704 callers=0 calls=0
*/
void sub_697800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x697800ULL || rel >= 0x697ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00697ac0 size=656 callers=1 calls=0
*/
void sub_697ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x697ac0ULL || rel >= 0x697d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00697d50 size=272 callers=1 calls=0
*/
void sub_697d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x697d50ULL || rel >= 0x697e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00697e60 size=704 callers=0 calls=0
*/
void sub_697e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x697e60ULL || rel >= 0x698120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00698120 size=656 callers=1 calls=0
*/
void sub_698120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x698120ULL || rel >= 0x6983b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006983b0 size=272 callers=2 calls=2
   calls: sub_5cfad0, sub_608fa0
*/
void sub_6983b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6983b0ULL || rel >= 0x6984c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006984c0 size=752 callers=0 calls=15
   calls: sub_17876e0, sub_1788980, sub_1789270, sub_17892a0, sub_5cfad0, sub_5f7110, sub_5f7120, sub_5f7320, sub_5f8bc0, sub_5f8c40, sub_5ff2a0, sub_607550
   ... +3 more
   ref: fogConstant
*/
void fogConstant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6984c0ULL || rel >= 0x6987b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006987b0 size=112 callers=1 calls=1
   calls: sub_60e2c0
   ref: u_DepthBuffer
*/
void u_DepthBuffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6987b0ULL || rel >= 0x698820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00698820 size=256 callers=1 calls=3
   calls: sub_60e320, sub_6829a0, sub_682dd0
   ref: u_FalloffLut
*/
void u_FalloffLut(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x698820ULL || rel >= 0x698920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00698920 size=1888 callers=1 calls=22
   calls: sub_1787490, sub_17874c0, sub_1787500, sub_5cf8e0, sub_5cf8f0, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5f7110, sub_5f7120, sub_602710, sub_602930
   ... +10 more
   ref: shader/fog.bnsh
*/
void unnamed_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x698920ULL || rel >= 0x699080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699080 size=304 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_699080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699080ULL || rel >= 0x6991b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006991b0 size=16 callers=0 calls=0
*/
void sub_6991b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6991b0ULL || rel >= 0x6991c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006991c0 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_6991c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6991c0ULL || rel >= 0x699270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699270 size=16 callers=0 calls=0
*/
void sub_699270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699270ULL || rel >= 0x699280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699280 size=16 callers=0 calls=0
*/
void sub_699280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699280ULL || rel >= 0x699290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699290 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_699290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699290ULL || rel >= 0x699340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699340 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_699340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699340ULL || rel >= 0x6993f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006993f0 size=16 callers=0 calls=0
*/
void sub_6993f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6993f0ULL || rel >= 0x699400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699400 size=16 callers=0 calls=0
*/
void sub_699400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699400ULL || rel >= 0x699410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699410 size=304 callers=0 calls=0
*/
void sub_699410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699410ULL || rel >= 0x699540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699540 size=352 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_699540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699540ULL || rel >= 0x6996a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006996a0 size=112 callers=0 calls=2
   calls: sub_607550, sub_61e4c0
*/
void sub_6996a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6996a0ULL || rel >= 0x699710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699710 size=16 callers=0 calls=0
*/
void sub_699710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699710ULL || rel >= 0x699720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699720 size=16 callers=0 calls=0
*/
void sub_699720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699720ULL || rel >= 0x699730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699730 size=16 callers=0 calls=0
*/
void sub_699730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699730ULL || rel >= 0x699740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699740 size=704 callers=2 calls=7
   calls: sub_5cf8f0, sub_5d1b50, sub_5d2070, sub_5d7670, sub_5ed5e0, sub_69bde0, sub_69bdf0
*/
void sub_699740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699740ULL || rel >= 0x699a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699a00 size=320 callers=1 calls=3
   calls: sub_5fc550, sub_5ff5f0, sub_699740
   ref: PfxRenderPath
*/
void PfxRenderPath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699a00ULL || rel >= 0x699b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699b40 size=560 callers=0 calls=10
   calls: sub_5f32b0, sub_5fd030, sub_5ff9d0, sub_619770, sub_682dd0, sub_69c1f0, sub_69c280, sub_69c2f0, sub_69c350, sub_69c3b0
*/
void sub_699b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699b40ULL || rel >= 0x699d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699d70 size=16 callers=0 calls=0
*/
void sub_699d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699d70ULL || rel >= 0x699d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699d80 size=16 callers=0 calls=0
*/
void sub_699d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699d80ULL || rel >= 0x699d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699d90 size=16 callers=0 calls=0
*/
void sub_699d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699d90ULL || rel >= 0x699da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699da0 size=16 callers=0 calls=0
*/
void sub_699da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699da0ULL || rel >= 0x699db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699db0 size=16 callers=0 calls=0
*/
void sub_699db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699db0ULL || rel >= 0x699dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699dc0 size=400 callers=0 calls=12
   calls: sub_5f32b0, sub_5f8bc0, sub_5fd030, sub_682dd0, sub_69bdf0, sub_69be30, sub_69bed0, sub_69bfb0, sub_69c090, sub_69c140, sub_69c1e0, sub_69c250
*/
void sub_699dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699dc0ULL || rel >= 0x699f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699f50 size=16 callers=1 calls=0
*/
void sub_699f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699f50ULL || rel >= 0x699f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00699f60 size=688 callers=4 calls=0
*/
void sub_699f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x699f60ULL || rel >= 0x69a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a210 size=16 callers=3 calls=0
*/
void sub_69a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a210ULL || rel >= 0x69a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a220 size=16 callers=1 calls=0
*/
void sub_69a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a220ULL || rel >= 0x69a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a230 size=112 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_69a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a230ULL || rel >= 0x69a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a2a0 size=16 callers=0 calls=0
*/
void sub_69a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a2a0ULL || rel >= 0x69a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a2b0 size=112 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_69a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a2b0ULL || rel >= 0x69a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a320 size=112 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_69a320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a320ULL || rel >= 0x69a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a390 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_69a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a390ULL || rel >= 0x69a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a3e0 size=96 callers=0 calls=0
*/
void sub_69a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a3e0ULL || rel >= 0x69a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a440 size=80 callers=0 calls=0
*/
void sub_69a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a440ULL || rel >= 0x69a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a490 size=16 callers=0 calls=0
*/
void sub_69a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a490ULL || rel >= 0x69a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a4a0 size=16 callers=0 calls=0
*/
void sub_69a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a4a0ULL || rel >= 0x69a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a4b0 size=16 callers=0 calls=0
*/
void sub_69a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a4b0ULL || rel >= 0x69a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a4c0 size=80 callers=0 calls=1
   calls: sub_69be00
*/
void sub_69a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a4c0ULL || rel >= 0x69a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a510 size=16 callers=0 calls=0
*/
void sub_69a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a510ULL || rel >= 0x69a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a520 size=16 callers=0 calls=0
*/
void sub_69a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a520ULL || rel >= 0x69a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a530 size=16 callers=0 calls=0
*/
void sub_69a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a530ULL || rel >= 0x69a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a540 size=1072 callers=0 calls=1
   calls: f_2f_MB
*/
void sub_69a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a540ULL || rel >= 0x69a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069a970 size=880 callers=0 calls=4
   calls: sub_1790c70, sub_1790c90, sub_5fe100, sub_69c5b0
*/
void sub_69a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a970ULL || rel >= 0x69ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069ace0 size=896 callers=0 calls=4
   calls: sub_178e4c0, sub_178e4f0, sub_5fabc0, sub_69c980
*/
void sub_69ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69ace0ULL || rel >= 0x69b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069b060 size=80 callers=0 calls=1
   calls: sub_69cd50
*/
void sub_69b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69b060ULL || rel >= 0x69b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069b0b0 size=80 callers=0 calls=1
   calls: sub_69cfe0
*/
void sub_69b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69b0b0ULL || rel >= 0x69b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069b100 size=2928 callers=0 calls=63
   calls: sub_410f90, sub_4182e0, sub_4182f0, sub_418300, sub_418320, sub_418330, sub_418340, sub_418350, sub_418360, sub_418370, sub_418380, sub_418390
   ... +51 more
*/
void sub_69b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69b100ULL || rel >= 0x69bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069bc70 size=368 callers=1 calls=1
   calls: FeatureId_YEBIS_SISDK3_NX_BeginYear_0_BeginMonth_0_Begin
*/
void sub_69bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69bc70ULL || rel >= 0x69bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069bde0 size=16 callers=1 calls=0
*/
void sub_69bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69bde0ULL || rel >= 0x69bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069bdf0 size=16 callers=2 calls=0
*/
void sub_69bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69bdf0ULL || rel >= 0x69be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069be00 size=48 callers=1 calls=1
   calls: ppfx_cpp_d_PPFX_2
*/
void sub_69be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69be00ULL || rel >= 0x69be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069be30 size=160 callers=1 calls=1
   calls: sub_418c50
*/
void sub_69be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69be30ULL || rel >= 0x69bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069bed0 size=224 callers=2 calls=1
   calls: sub_418db0
*/
void sub_69bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69bed0ULL || rel >= 0x69bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069bfb0 size=224 callers=1 calls=1
   calls: sub_418d40
*/
void sub_69bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69bfb0ULL || rel >= 0x69c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c090 size=176 callers=1 calls=1
   calls: sub_418cb0
*/
void sub_69c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c090ULL || rel >= 0x69c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c140 size=160 callers=1 calls=1
   calls: sub_418bd0
*/
void sub_69c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c140ULL || rel >= 0x69c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c1e0 size=16 callers=1 calls=0
*/
void sub_69c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c1e0ULL || rel >= 0x69c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c1f0 size=96 callers=1 calls=2
   calls: sub_418610, sub_418bb0
*/
void sub_69c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c1f0ULL || rel >= 0x69c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c250 size=48 callers=1 calls=1
   calls: sub_418310
*/
void sub_69c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c250ULL || rel >= 0x69c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c280 size=112 callers=1 calls=2
   calls: sub_418640, sub_418bb0
*/
void sub_69c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c280ULL || rel >= 0x69c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c2f0 size=96 callers=1 calls=2
   calls: sub_418730, sub_418bb0
*/
void sub_69c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c2f0ULL || rel >= 0x69c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c350 size=96 callers=1 calls=2
   calls: sub_4186a0, sub_418bb0
*/
void sub_69c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c350ULL || rel >= 0x69c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c3b0 size=96 callers=1 calls=2
   calls: sub_4185e0, sub_418b90
*/
void sub_69c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c3b0ULL || rel >= 0x69c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c410 size=80 callers=0 calls=0
*/
void sub_69c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c410ULL || rel >= 0x69c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c460 size=80 callers=0 calls=0
*/
void sub_69c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c460ULL || rel >= 0x69c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c4b0 size=16 callers=0 calls=0
*/
void sub_69c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c4b0ULL || rel >= 0x69c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c4c0 size=112 callers=0 calls=0
*/
void sub_69c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c4c0ULL || rel >= 0x69c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c530 size=16 callers=0 calls=0
*/
void sub_69c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c530ULL || rel >= 0x69c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c540 size=112 callers=0 calls=0
*/
void sub_69c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c540ULL || rel >= 0x69c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c5b0 size=272 callers=1 calls=0
*/
void sub_69c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c5b0ULL || rel >= 0x69c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c6c0 size=704 callers=0 calls=0
*/
void sub_69c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c6c0ULL || rel >= 0x69c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069c980 size=272 callers=1 calls=0
*/
void sub_69c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69c980ULL || rel >= 0x69ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069ca90 size=704 callers=0 calls=0
*/
void sub_69ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69ca90ULL || rel >= 0x69cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069cd50 size=656 callers=1 calls=0
*/
void sub_69cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69cd50ULL || rel >= 0x69cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069cfe0 size=656 callers=1 calls=0
*/
void sub_69cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69cfe0ULL || rel >= 0x69d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d270 size=576 callers=1 calls=5
   calls: ppfx, ppfxMemoryAllocator_cpp_d_PPFX_ERROR, sub_418b70, sub_4b9980, sub_65d700
   ref: FeatureId = YEBIS_SISDK3_NX, BeginYear = 0, BeginMonth = 0, BeginDay = 0, EndYear = 0, EndMonth = 0,
*/
void FeatureId_YEBIS_SISDK3_NX_BeginYear_0_BeginMonth_0_Begin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d270ULL || rel >= 0x69d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d4b0 size=352 callers=0 calls=0
*/
void sub_69d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d4b0ULL || rel >= 0x69d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d610 size=16 callers=0 calls=0
*/
void sub_69d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d610ULL || rel >= 0x69d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d620 size=16 callers=0 calls=0
*/
void sub_69d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d620ULL || rel >= 0x69d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d630 size=16 callers=0 calls=0
*/
void sub_69d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d630ULL || rel >= 0x69d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d640 size=16 callers=0 calls=0
*/
void sub_69d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d640ULL || rel >= 0x69d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d650 size=16 callers=0 calls=0
*/
void sub_69d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d650ULL || rel >= 0x69d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d660 size=32 callers=0 calls=0
*/
void sub_69d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d660ULL || rel >= 0x69d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d680 size=32 callers=0 calls=0
*/
void sub_69d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d680ULL || rel >= 0x69d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d6a0 size=64 callers=0 calls=1
   calls: sub_410f90
*/
void sub_69d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d6a0ULL || rel >= 0x69d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d6e0 size=80 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_69d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d6e0ULL || rel >= 0x69d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d730 size=64 callers=0 calls=2
   calls: sub_5e2750, sub_5e2830
*/
void sub_69d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d730ULL || rel >= 0x69d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d770 size=32 callers=4 calls=0
*/
void sub_69d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d770ULL || rel >= 0x69d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d790 size=96 callers=0 calls=0
*/
void sub_69d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d790ULL || rel >= 0x69d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d7f0 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_69d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d7f0ULL || rel >= 0x69d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d860 size=96 callers=0 calls=0
*/
void sub_69d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d860ULL || rel >= 0x69d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d8c0 size=96 callers=0 calls=0
*/
void sub_69d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d8c0ULL || rel >= 0x69d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d920 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_69d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d920ULL || rel >= 0x69d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069d990 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_69d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69d990ULL || rel >= 0x69da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069da00 size=96 callers=0 calls=0
*/
void sub_69da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69da00ULL || rel >= 0x69da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069da60 size=96 callers=0 calls=0
*/
void sub_69da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69da60ULL || rel >= 0x69dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069dac0 size=1184 callers=1 calls=0
*/
void sub_69dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69dac0ULL || rel >= 0x69df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069df60 size=272 callers=1 calls=0
*/
void sub_69df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69df60ULL || rel >= 0x69e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e070 size=160 callers=2 calls=0
*/
void sub_69e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e070ULL || rel >= 0x69e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e110 size=112 callers=0 calls=1
   calls: sub_69ea20
*/
void sub_69e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e110ULL || rel >= 0x69e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e180 size=112 callers=0 calls=1
   calls: sub_69ea20
*/
void sub_69e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e180ULL || rel >= 0x69e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e1f0 size=288 callers=1 calls=2
   calls: sub_69dac0, sub_69ea20
*/
void sub_69e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e1f0ULL || rel >= 0x69e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e310 size=80 callers=2 calls=1
   calls: sub_69ea20
*/
void sub_69e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e310ULL || rel >= 0x69e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e360 size=48 callers=3 calls=1
   calls: sub_69df60
*/
void sub_69e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e360ULL || rel >= 0x69e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e390 size=32 callers=2 calls=0
*/
void sub_69e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e390ULL || rel >= 0x69e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e3b0 size=16 callers=1 calls=0
*/
void sub_69e3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e3b0ULL || rel >= 0x69e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e3c0 size=432 callers=1 calls=1
   calls: sub_69eb70
*/
void sub_69e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e3c0ULL || rel >= 0x69e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e570 size=640 callers=1 calls=3
   calls: sub_69eb70, sub_69f3d0, sub_69fa10
*/
void sub_69e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e570ULL || rel >= 0x69e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e7f0 size=224 callers=1 calls=1
   calls: sub_69e570
*/
void sub_69e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e7f0ULL || rel >= 0x69e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e8d0 size=80 callers=1 calls=0
*/
void sub_69e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e8d0ULL || rel >= 0x69e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e920 size=16 callers=0 calls=0
*/
void sub_69e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e920ULL || rel >= 0x69e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e930 size=112 callers=0 calls=0
*/
void sub_69e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e930ULL || rel >= 0x69e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e9a0 size=16 callers=0 calls=0
*/
void sub_69e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e9a0ULL || rel >= 0x69e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069e9b0 size=112 callers=0 calls=0
*/
void sub_69e9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e9b0ULL || rel >= 0x69ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069ea20 size=336 callers=4 calls=0
*/
void sub_69ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69ea20ULL || rel >= 0x69eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069eb70 size=784 callers=2 calls=0
*/
void sub_69eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69eb70ULL || rel >= 0x69ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069ee80 size=80 callers=0 calls=0
*/
void sub_69ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69ee80ULL || rel >= 0x69eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069eed0 size=80 callers=0 calls=0
*/
void sub_69eed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69eed0ULL || rel >= 0x69ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069ef20 size=320 callers=0 calls=1
   calls: sub_69f070
*/
void sub_69ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69ef20ULL || rel >= 0x69f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f060 size=16 callers=0 calls=0
*/
void sub_69f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f060ULL || rel >= 0x69f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f070 size=352 callers=3 calls=0
*/
void sub_69f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f070ULL || rel >= 0x69f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f1d0 size=96 callers=0 calls=0
*/
void sub_69f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f1d0ULL || rel >= 0x69f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f230 size=96 callers=0 calls=0
*/
void sub_69f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f230ULL || rel >= 0x69f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f290 size=272 callers=0 calls=3
   calls: sub_5d0f90, sub_69f4b0, sub_69fa40
   ref: bcat file load thread
*/
void bcat_file_load_thread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f290ULL || rel >= 0x69f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f3a0 size=48 callers=0 calls=0
*/
void sub_69f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f3a0ULL || rel >= 0x69f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f3d0 size=224 callers=1 calls=1
   calls: sub_69f690
*/
void sub_69f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f3d0ULL || rel >= 0x69f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f4b0 size=352 callers=3 calls=0
*/
void sub_69f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f4b0ULL || rel >= 0x69f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f610 size=128 callers=0 calls=0
*/
void sub_69f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f610ULL || rel >= 0x69f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f690 size=128 callers=2 calls=1
   calls: sub_5d0b10
*/
void sub_69f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f690ULL || rel >= 0x69f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f710 size=128 callers=0 calls=0
*/
void sub_69f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f710ULL || rel >= 0x69f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f790 size=128 callers=0 calls=0
*/
void sub_69f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f790ULL || rel >= 0x69f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f810 size=128 callers=0 calls=0
*/
void sub_69f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f810ULL || rel >= 0x69f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f890 size=128 callers=0 calls=0
*/
void sub_69f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f890ULL || rel >= 0x69f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f910 size=128 callers=0 calls=0
*/
void sub_69f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f910ULL || rel >= 0x69f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069f990 size=128 callers=0 calls=0
*/
void sub_69f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f990ULL || rel >= 0x69fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069fa10 size=48 callers=1 calls=0
*/
void sub_69fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69fa10ULL || rel >= 0x69fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069fa40 size=336 callers=1 calls=2
   calls: sub_5d0e50, sub_69f4b0
*/
void sub_69fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69fa40ULL || rel >= 0x69fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069fb90 size=16 callers=0 calls=0
*/
void sub_69fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69fb90ULL || rel >= 0x69fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0069fba0 size=1200 callers=1 calls=2
   calls: sub_6a0050, sub_6a0140
*/
void sub_69fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69fba0ULL || rel >= 0x6a0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0050 size=240 callers=4 calls=0
*/
void sub_6a0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0050ULL || rel >= 0x6a0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0140 size=400 callers=3 calls=1
   calls: sub_6a0050
*/
void sub_6a0140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0140ULL || rel >= 0x6a02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a02d0 size=144 callers=0 calls=1
   calls: sub_69fba0
*/
void sub_6a02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a02d0ULL || rel >= 0x6a0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0360 size=16 callers=0 calls=0
*/
void sub_6a0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0360ULL || rel >= 0x6a0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0370 size=16 callers=0 calls=0
*/
void sub_6a0370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0370ULL || rel >= 0x6a0380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0380 size=304 callers=0 calls=0
*/
void sub_6a0380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0380ULL || rel >= 0x6a04b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a04b0 size=128 callers=0 calls=0
*/
void sub_6a04b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a04b0ULL || rel >= 0x6a0530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0530 size=96 callers=0 calls=0
*/
void sub_6a0530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0530ULL || rel >= 0x6a0590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0590 size=1088 callers=1 calls=10
   calls: sub_5cf9c0, sub_6a11a0, sub_6a1280, sub_6a1360, sub_6a1720, sub_6a1800, sub_6a1d40, sub_6a2a20, sub_6ad590, sub_6cdc10
*/
void sub_6a0590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0590ULL || rel >= 0x6a09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a09d0 size=224 callers=1 calls=4
   calls: sub_6a1bd0, sub_6a2a30, sub_6ae4c0, sub_6cde20
*/
void sub_6a09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a09d0ULL || rel >= 0x6a0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0ab0 size=208 callers=3 calls=6
   calls: InstanceTable_2, sub_6a1d70, sub_6ac220, sub_6ae720, sub_6ae870, sub_6bedb0
*/
void sub_6a0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0ab0ULL || rel >= 0x6a0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0b80 size=304 callers=1 calls=6
   calls: sub_6a2a40, sub_6a2c90, sub_6a3260, sub_6a3c90, sub_6ac3f0, sub_6ad930
*/
void sub_6a0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0b80ULL || rel >= 0x6a0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0cb0 size=144 callers=2 calls=5
   calls: sub_6a2b70, sub_6a3260, sub_6a3a60, sub_6acab0, sub_6ae4c0
*/
void sub_6a0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0cb0ULL || rel >= 0x6a0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0d40 size=16 callers=39 calls=0
*/
void sub_6a0d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0d40ULL || rel >= 0x6a0d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0d50 size=64 callers=4 calls=0
*/
void sub_6a0d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0d50ULL || rel >= 0x6a0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0d90 size=16 callers=15 calls=0
*/
void sub_6a0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0d90ULL || rel >= 0x6a0da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0da0 size=176 callers=3 calls=0
*/
void sub_6a0da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0da0ULL || rel >= 0x6a0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0e50 size=32 callers=1 calls=0
*/
void sub_6a0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0e50ULL || rel >= 0x6a0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0e70 size=32 callers=4 calls=0
*/
void sub_6a0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0e70ULL || rel >= 0x6a0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0e90 size=48 callers=3 calls=0
*/
void sub_6a0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0e90ULL || rel >= 0x6a0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0ec0 size=16 callers=2 calls=0
*/
void sub_6a0ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0ec0ULL || rel >= 0x6a0ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0ed0 size=16 callers=1 calls=0
*/
void sub_6a0ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0ed0ULL || rel >= 0x6a0ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0ee0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6a0ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0ee0ULL || rel >= 0x6a0f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0f30 size=96 callers=0 calls=0
*/
void sub_6a0f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0f30ULL || rel >= 0x6a0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0f90 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6a0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0f90ULL || rel >= 0x6a0fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a0fe0 size=96 callers=0 calls=0
*/
void sub_6a0fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a0fe0ULL || rel >= 0x6a1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1040 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6a1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1040ULL || rel >= 0x6a1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1090 size=96 callers=0 calls=0
*/
void sub_6a1090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1090ULL || rel >= 0x6a10f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a10f0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6a10f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a10f0ULL || rel >= 0x6a1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1140 size=96 callers=0 calls=0
*/
void sub_6a1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1140ULL || rel >= 0x6a11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a11a0 size=224 callers=1 calls=1
   calls: sub_6a27f0
*/
void sub_6a11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a11a0ULL || rel >= 0x6a1280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1280 size=224 callers=1 calls=1
   calls: sub_6a3660
*/
void sub_6a1280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1280ULL || rel >= 0x6a1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1360 size=352 callers=1 calls=0
*/
void sub_6a1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1360ULL || rel >= 0x6a14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a14c0 size=176 callers=0 calls=0
*/
void sub_6a14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a14c0ULL || rel >= 0x6a1570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1570 size=176 callers=0 calls=0
*/
void sub_6a1570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1570ULL || rel >= 0x6a1620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1620 size=16 callers=0 calls=0
*/
void sub_6a1620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1620ULL || rel >= 0x6a1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1630 size=112 callers=0 calls=0
*/
void sub_6a1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1630ULL || rel >= 0x6a16a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a16a0 size=16 callers=0 calls=0
*/
void sub_6a16a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a16a0ULL || rel >= 0x6a16b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a16b0 size=112 callers=0 calls=0
*/
void sub_6a16b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a16b0ULL || rel >= 0x6a1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1720 size=224 callers=1 calls=1
   calls: sub_6be5a0
*/
void sub_6a1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1720ULL || rel >= 0x6a1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1800 size=224 callers=1 calls=1
   calls: sub_6a19b0
*/
void sub_6a1800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1800ULL || rel >= 0x6a18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a18e0 size=208 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6a18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a18e0ULL || rel >= 0x6a19b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a19b0 size=256 callers=2 calls=0
*/
void sub_6a19b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a19b0ULL || rel >= 0x6a1ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1ab0 size=288 callers=0 calls=1
   calls: sub_6a1bd0
*/
void sub_6a1ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1ab0ULL || rel >= 0x6a1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1bd0 size=352 callers=4 calls=1
   calls: sub_6a1d70
*/
void sub_6a1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1bd0ULL || rel >= 0x6a1d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1d30 size=16 callers=0 calls=0
*/
void sub_6a1d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1d30ULL || rel >= 0x6a1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1d40 size=48 callers=1 calls=1
   calls: sub_6a1bd0
*/
void sub_6a1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1d40ULL || rel >= 0x6a1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1d70 size=368 callers=3 calls=0
*/
void sub_6a1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1d70ULL || rel >= 0x6a1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1ee0 size=144 callers=0 calls=0
*/
void sub_6a1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1ee0ULL || rel >= 0x6a1f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1f70 size=16 callers=65 calls=0
*/
void sub_6a1f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1f70ULL || rel >= 0x6a1f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a1f80 size=256 callers=65 calls=2
   calls: sub_6a1d70, sub_6a23e0
*/
void sub_6a1f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a1f80ULL || rel >= 0x6a2080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2080 size=16 callers=0 calls=0
*/
void sub_6a2080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2080ULL || rel >= 0x6a2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2090 size=112 callers=0 calls=0
*/
void sub_6a2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2090ULL || rel >= 0x6a2100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2100 size=16 callers=0 calls=0
*/
void sub_6a2100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2100ULL || rel >= 0x6a2110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2110 size=112 callers=0 calls=0
*/
void sub_6a2110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2110ULL || rel >= 0x6a2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2180 size=608 callers=0 calls=0
*/
void sub_6a2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2180ULL || rel >= 0x6a23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a23e0 size=336 callers=1 calls=0
*/
void sub_6a23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a23e0ULL || rel >= 0x6a2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2530 size=576 callers=0 calls=0
*/
void sub_6a2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2530ULL || rel >= 0x6a2770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2770 size=128 callers=0 calls=0
*/
void sub_6a2770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2770ULL || rel >= 0x6a27f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a27f0 size=240 callers=2 calls=0
*/
void sub_6a27f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a27f0ULL || rel >= 0x6a28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a28e0 size=160 callers=0 calls=0
*/
void sub_6a28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a28e0ULL || rel >= 0x6a2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2980 size=160 callers=0 calls=0
*/
void sub_6a2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2980ULL || rel >= 0x6a2a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2a20 size=16 callers=1 calls=0
*/
void sub_6a2a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2a20ULL || rel >= 0x6a2a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2a30 size=16 callers=1 calls=0
*/
void sub_6a2a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2a30ULL || rel >= 0x6a2a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2a40 size=288 callers=2 calls=1
   calls: sub_1750ea0
*/
void sub_6a2a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2a40ULL || rel >= 0x6a2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2b60 size=16 callers=1 calls=0
*/
void sub_6a2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2b60ULL || rel >= 0x6a2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2b70 size=192 callers=1 calls=2
   calls: sub_1750fb0, sub_5d0e50
*/
void sub_6a2b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2b70ULL || rel >= 0x6a2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2c30 size=96 callers=1 calls=1
   calls: sub_5d0e50
*/
void sub_6a2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2c30ULL || rel >= 0x6a2c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2c90 size=32 callers=3 calls=0
*/
void sub_6a2c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2c90ULL || rel >= 0x6a2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2cb0 size=96 callers=3 calls=0
*/
void sub_6a2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2cb0ULL || rel >= 0x6a2d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2d10 size=528 callers=1 calls=2
   calls: sub_5d0b10, sub_5d0f90
   ref: SubmitNetworkRequest
*/
void SubmitNetworkRequest(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2d10ULL || rel >= 0x6a2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a2f20 size=448 callers=1 calls=0
*/
void sub_6a2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a2f20ULL || rel >= 0x6a30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a30e0 size=48 callers=1 calls=0
*/
void sub_6a30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a30e0ULL || rel >= 0x6a3110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3110 size=64 callers=2 calls=0
*/
void sub_6a3110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3110ULL || rel >= 0x6a3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3150 size=240 callers=1 calls=0
*/
void sub_6a3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3150ULL || rel >= 0x6a3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3240 size=16 callers=3 calls=0
*/
void sub_6a3240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3240ULL || rel >= 0x6a3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3250 size=16 callers=1 calls=0
*/
void sub_6a3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3250ULL || rel >= 0x6a3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3260 size=32 callers=3 calls=0
*/
void sub_6a3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3260ULL || rel >= 0x6a3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3280 size=32 callers=0 calls=0
*/
void sub_6a3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3280ULL || rel >= 0x6a32a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a32a0 size=48 callers=0 calls=0
*/
void sub_6a32a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a32a0ULL || rel >= 0x6a32d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a32d0 size=208 callers=0 calls=1
   calls: sub_27d0
*/
void sub_6a32d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a32d0ULL || rel >= 0x6a33a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a33a0 size=112 callers=0 calls=0
*/
void sub_6a33a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a33a0ULL || rel >= 0x6a3410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3410 size=96 callers=0 calls=0
*/
void sub_6a3410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3410ULL || rel >= 0x6a3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3470 size=16 callers=0 calls=0
*/
void sub_6a3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3470ULL || rel >= 0x6a3480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3480 size=112 callers=0 calls=0
*/
void sub_6a3480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3480ULL || rel >= 0x6a34f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a34f0 size=16 callers=0 calls=0
*/
void sub_6a34f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a34f0ULL || rel >= 0x6a3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3500 size=112 callers=0 calls=0
*/
void sub_6a3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3500ULL || rel >= 0x6a3570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3570 size=64 callers=0 calls=0
*/
void sub_6a3570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3570ULL || rel >= 0x6a35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a35b0 size=16 callers=0 calls=0
*/
void sub_6a35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a35b0ULL || rel >= 0x6a35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a35c0 size=16 callers=0 calls=0
*/
void sub_6a35c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a35c0ULL || rel >= 0x6a35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a35d0 size=16 callers=0 calls=0
*/
void sub_6a35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a35d0ULL || rel >= 0x6a35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a35e0 size=128 callers=0 calls=0
*/
void sub_6a35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a35e0ULL || rel >= 0x6a3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3660 size=448 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_6a3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3660ULL || rel >= 0x6a3820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3820 size=576 callers=0 calls=3
   calls: sub_5cf8f0, sub_65f110, sub_6a3a60
*/
void sub_6a3820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3820ULL || rel >= 0x6a3a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3a60 size=544 callers=2 calls=4
   calls: sub_15a1030, sub_15b9390, sub_15bffa0, sub_15c00d0
*/
void sub_6a3a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3a60ULL || rel >= 0x6a3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3c80 size=16 callers=0 calls=0
*/
void sub_6a3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3c80ULL || rel >= 0x6a3c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3c90 size=448 callers=1 calls=5
   calls: InstanceTable_135, SDK_MW_Nintendo_NEX_4_6_8_appor, sub_15b9340, sub_15b9950, sub_65f1c0
*/
void sub_6a3c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3c90ULL || rel >= 0x6a3e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3e50 size=192 callers=0 calls=0
*/
void sub_6a3e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3e50ULL || rel >= 0x6a3f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3f10 size=48 callers=0 calls=0
*/
void sub_6a3f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3f10ULL || rel >= 0x6a3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3f40 size=96 callers=28 calls=3
   calls: sub_15b9340, sub_15bead0, sub_1633be0
*/
void sub_6a3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3f40ULL || rel >= 0x6a3fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a3fa0 size=128 callers=9 calls=2
   calls: sub_15b9340, sub_6a6b50
*/
void sub_6a3fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a3fa0ULL || rel >= 0x6a4020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4020 size=16 callers=18 calls=0
*/
void sub_6a4020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4020ULL || rel >= 0x6a4030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4030 size=80 callers=9 calls=2
   calls: sub_15b9390, sub_6a6bb0
*/
void sub_6a4030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4030ULL || rel >= 0x6a4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4080 size=128 callers=2 calls=2
   calls: sub_15b9340, sub_6a8740
*/
void sub_6a4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4080ULL || rel >= 0x6a4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4100 size=16 callers=2 calls=0
*/
void sub_6a4100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4100ULL || rel >= 0x6a4110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4110 size=80 callers=2 calls=2
   calls: sub_15b9390, sub_6a89f0
*/
void sub_6a4110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4110ULL || rel >= 0x6a4160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4160 size=128 callers=5 calls=2
   calls: sub_15b9340, sub_6a9270
*/
void sub_6a4160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4160ULL || rel >= 0x6a41e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a41e0 size=16 callers=5 calls=0
*/
void sub_6a41e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a41e0ULL || rel >= 0x6a41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a41f0 size=80 callers=5 calls=2
   calls: sub_15b9390, sub_6a9640
*/
void sub_6a41f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a41f0ULL || rel >= 0x6a4240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4240 size=128 callers=3 calls=2
   calls: sub_15b9340, sub_6a5770
*/
void sub_6a4240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4240ULL || rel >= 0x6a42c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a42c0 size=16 callers=3 calls=0
*/
void sub_6a42c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a42c0ULL || rel >= 0x6a42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a42d0 size=80 callers=3 calls=2
   calls: sub_15b9390, sub_6a5900
*/
void sub_6a42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a42d0ULL || rel >= 0x6a4320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4320 size=128 callers=2 calls=2
   calls: sub_15b9340, sub_6a6250
*/
void sub_6a4320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4320ULL || rel >= 0x6a43a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a43a0 size=16 callers=2 calls=0
*/
void sub_6a43a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a43a0ULL || rel >= 0x6a43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a43b0 size=80 callers=2 calls=2
   calls: sub_15b9390, sub_6a64e0
*/
void sub_6a43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a43b0ULL || rel >= 0x6a4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4400 size=128 callers=5 calls=2
   calls: sub_15b9340, sub_6aaa70
*/
void sub_6a4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4400ULL || rel >= 0x6a4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4480 size=16 callers=5 calls=0
*/
void sub_6a4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4480ULL || rel >= 0x6a4490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4490 size=80 callers=5 calls=2
   calls: sub_15b9390, sub_6aade0
*/
void sub_6a4490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4490ULL || rel >= 0x6a44e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a44e0 size=544 callers=1 calls=13
   calls: Result_2, Result_3, sub_159ad00, sub_15a0eb0, sub_15b9340, sub_15b9390, sub_15bbd30, sub_15bc1e0, sub_15bc310, sub_15ca0c0, sub_15caa30, sub_1633be0
   ... +1 more
*/
void sub_6a44e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a44e0ULL || rel >= 0x6a4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4700 size=16 callers=0 calls=0
*/
void sub_6a4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4700ULL || rel >= 0x6a4710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4710 size=32 callers=0 calls=0
*/
void sub_6a4710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4710ULL || rel >= 0x6a4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4730 size=288 callers=0 calls=3
   calls: InstanceTable_386, f_2_03d_04d, sub_159afe0
*/
void sub_6a4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4730ULL || rel >= 0x6a4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4850 size=640 callers=1 calls=13
   calls: Result_2, Result_3, sub_159ae30, sub_15a1030, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15ca0c0, sub_15caa30, sub_15cdab0, sub_1633be0, sub_6a5230
   ... +1 more
   ref: c:/projects/env/NintendoSDK/NintendoSDK/../NintendoSDK-Pia/../NintendoSDK-NEX//Include\OnlineCore/sr
*/
void InstanceTable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4850ULL || rel >= 0x6a4ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4ad0 size=176 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a4ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4ad0ULL || rel >= 0x6a4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4b80 size=16 callers=3 calls=0
*/
void sub_6a4b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4b80ULL || rel >= 0x6a4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4b90 size=16 callers=4 calls=0
*/
void sub_6a4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4b90ULL || rel >= 0x6a4ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4ba0 size=96 callers=1 calls=0
*/
void sub_6a4ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4ba0ULL || rel >= 0x6a4c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4c00 size=96 callers=1 calls=0
*/
void sub_6a4c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4c00ULL || rel >= 0x6a4c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4c60 size=96 callers=2 calls=0
*/
void sub_6a4c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4c60ULL || rel >= 0x6a4cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4cc0 size=16 callers=3 calls=0
*/
void sub_6a4cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4cc0ULL || rel >= 0x6a4cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4cd0 size=16 callers=1 calls=0
*/
void sub_6a4cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4cd0ULL || rel >= 0x6a4ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4ce0 size=80 callers=4 calls=1
   calls: InstanceTable_386
*/
void sub_6a4ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4ce0ULL || rel >= 0x6a4d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4d30 size=32 callers=14 calls=0
*/
void sub_6a4d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4d30ULL || rel >= 0x6a4d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4d50 size=16 callers=15 calls=0
*/
void sub_6a4d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4d50ULL || rel >= 0x6a4d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4d60 size=352 callers=1 calls=8
   calls: InstanceTable_386, sub_159aeb0, sub_15b9340, sub_15b9390, sub_15bead0, sub_15ca0c0, sub_15caa30, sub_1633be0
*/
void sub_6a4d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4d60ULL || rel >= 0x6a4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4ec0 size=160 callers=0 calls=2
   calls: Result, sub_15bbd10
*/
void sub_6a4ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4ec0ULL || rel >= 0x6a4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a4f60 size=384 callers=1 calls=4
   calls: InstanceTable_386, sub_15b8dc0, sub_15d0d70, sub_6a5230
   ref: c:/projects/env/NintendoSDK/NintendoSDK/../NintendoSDK-Pia/../NintendoSDK-NEX//Include\OnlineCore/sr
*/
void InstanceTable_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a4f60ULL || rel >= 0x6a50e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a50e0 size=16 callers=0 calls=0
*/
void sub_6a50e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a50e0ULL || rel >= 0x6a50f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a50f0 size=112 callers=0 calls=0
*/
void sub_6a50f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a50f0ULL || rel >= 0x6a5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

