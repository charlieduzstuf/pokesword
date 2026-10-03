/* main functions 011fdcd0..0121fee0 (151 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 011fdcd0 size=2752 callers=0 calls=26
   calls: sub_1108730, sub_1108740, sub_1108c50, sub_1127360, sub_11274b0, sub_1128e40, sub_1129060, sub_1131f60, sub_1134fa0, sub_1136950, sub_1136f20, sub_115b710
   ... +14 more
*/
void sub_11fdcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fdcd0ULL || rel >= 0x11fe790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fe790 size=1648 callers=0 calls=14
   calls: Play_Camp_ClosenessUp, sub_1127d00, sub_1127fc0, sub_11393a0, sub_113a8e0, sub_1160e20, sub_117dca0, sub_11fee00, sub_11feed0, sub_11feff0, sub_11ff480, sub_12007d0
   ... +2 more
*/
void sub_11fe790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fe790ULL || rel >= 0x11fee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fee00 size=208 callers=1 calls=4
   calls: sub_11397d0, sub_115bd30, sub_11f2be0, sub_11ffd80
*/
void sub_11fee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fee00ULL || rel >= 0x11feed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011feed0 size=272 callers=1 calls=6
   calls: sub_110c320, sub_110c3b0, sub_1134fa0, sub_1137490, sub_11397d0, sub_1160e20
*/
void sub_11feed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11feed0ULL || rel >= 0x11fefe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fefe0 size=16 callers=0 calls=0
*/
void sub_11fefe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fefe0ULL || rel >= 0x11feff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011feff0 size=1168 callers=2 calls=9
   calls: Play_UI_Emotional_Hungry_4, sub_110a370, sub_1134fa0, sub_113aeb0, sub_1157ef0, sub_117dca0, sub_11ff6c0, sub_1200ca0, sub_ead150
*/
void sub_11feff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11feff0ULL || rel >= 0x11ff480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ff480 size=576 callers=2 calls=7
   calls: sub_110a8a0, sub_1134fa0, sub_117dca0, sub_11ff6c0, sub_11fff10, sub_1200ca0, sub_ead150
*/
void sub_11ff480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ff480ULL || rel >= 0x11ff6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ff6c0 size=1200 callers=3 calls=5
   calls: sub_1108730, sub_1134fa0, sub_1157ef0, sub_115b9f0, sub_117dca0
*/
void sub_11ff6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ff6c0ULL || rel >= 0x11ffb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ffb70 size=528 callers=2 calls=10
   calls: sub_1108730, sub_1128e40, sub_1134fa0, sub_11397d0, sub_11398f0, sub_117dca0, sub_11ff6c0, sub_11ffe60, sub_1200ca0, sub_762930
   ref: @Play_UI_Emotional_Hungry
   ref: @Play_UI_Emotional_Confuse
*/
void Play_UI_Emotional_Hungry_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ffb70ULL || rel >= 0x11ffd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ffd80 size=224 callers=1 calls=5
   calls: Play_UI_Emotional_Hungry_4, sub_110bec0, sub_110c010, sub_1134fa0, sub_11397d0
*/
void sub_11ffd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ffd80ULL || rel >= 0x11ffe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ffe60 size=176 callers=1 calls=7
   calls: sub_1108720, sub_112ea00, sub_1134fa0, sub_11365c0, sub_115b870, sub_11706e0, sub_11f2be0
*/
void sub_11ffe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ffe60ULL || rel >= 0x11fff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011fff10 size=288 callers=2 calls=0
*/
void sub_11fff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fff10ULL || rel >= 0x1200030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200030 size=208 callers=0 calls=0
*/
void sub_1200030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200030ULL || rel >= 0x1200100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200100 size=208 callers=0 calls=0
*/
void sub_1200100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200100ULL || rel >= 0x12001d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012001d0 size=16 callers=0 calls=0
*/
void sub_12001d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12001d0ULL || rel >= 0x12001e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012001e0 size=208 callers=0 calls=0
*/
void sub_12001e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12001e0ULL || rel >= 0x12002b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012002b0 size=208 callers=0 calls=0
*/
void sub_12002b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12002b0ULL || rel >= 0x1200380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200380 size=16 callers=0 calls=0
*/
void sub_1200380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200380ULL || rel >= 0x1200390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200390 size=16 callers=0 calls=0
*/
void sub_1200390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200390ULL || rel >= 0x12003a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012003a0 size=208 callers=0 calls=0
*/
void sub_12003a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12003a0ULL || rel >= 0x1200470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200470 size=208 callers=0 calls=0
*/
void sub_1200470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200470ULL || rel >= 0x1200540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200540 size=304 callers=0 calls=0
*/
void sub_1200540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200540ULL || rel >= 0x1200670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200670 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1200670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200670ULL || rel >= 0x12007d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012007d0 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12007d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12007d0ULL || rel >= 0x1200930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200930 size=64 callers=0 calls=1
   calls: sub_11611a0
*/
void sub_1200930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200930ULL || rel >= 0x1200970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200970 size=16 callers=0 calls=0
*/
void sub_1200970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200970ULL || rel >= 0x1200980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200980 size=16 callers=0 calls=0
*/
void sub_1200980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200980ULL || rel >= 0x1200990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200990 size=16 callers=0 calls=0
*/
void sub_1200990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200990ULL || rel >= 0x12009a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012009a0 size=720 callers=0 calls=4
   calls: sub_1136f20, sub_1136fc0, sub_11611a0, sub_967240
*/
void sub_12009a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12009a0ULL || rel >= 0x1200c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200c70 size=16 callers=0 calls=0
*/
void sub_1200c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200c70ULL || rel >= 0x1200c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200c80 size=16 callers=0 calls=0
*/
void sub_1200c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200c80ULL || rel >= 0x1200c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200c90 size=16 callers=0 calls=0
*/
void sub_1200c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200c90ULL || rel >= 0x1200ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200ca0 size=400 callers=3 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1200ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200ca0ULL || rel >= 0x1200e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200e30 size=160 callers=0 calls=0
*/
void sub_1200e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200e30ULL || rel >= 0x1200ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200ed0 size=80 callers=0 calls=0
*/
void sub_1200ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200ed0ULL || rel >= 0x1200f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200f20 size=96 callers=0 calls=0
*/
void sub_1200f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200f20ULL || rel >= 0x1200f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200f80 size=96 callers=0 calls=0
*/
void sub_1200f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200f80ULL || rel >= 0x1200fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01200fe0 size=896 callers=0 calls=16
   calls: place_name_3, sub_1108730, sub_11094a0, sub_1134fa0, sub_1136f20, sub_1136fc0, sub_113aea0, sub_113c3e0, sub_1157ef0, sub_762930, sub_762fe0, sub_763380
   ... +4 more
*/
void sub_1200fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200fe0ULL || rel >= 0x1201360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201360 size=16 callers=0 calls=0
*/
void sub_1201360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201360ULL || rel >= 0x1201370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201370 size=128 callers=0 calls=4
   calls: sub_1108730, sub_1134fa0, sub_11611a0, sub_762930
*/
void sub_1201370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201370ULL || rel >= 0x12013f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012013f0 size=16 callers=0 calls=0
*/
void sub_12013f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12013f0ULL || rel >= 0x1201400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201400 size=32 callers=0 calls=0
*/
void sub_1201400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201400ULL || rel >= 0x1201420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201420 size=32 callers=0 calls=0
*/
void sub_1201420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201420ULL || rel >= 0x1201440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201440 size=32 callers=0 calls=0
*/
void sub_1201440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201440ULL || rel >= 0x1201460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201460 size=32 callers=0 calls=0
*/
void sub_1201460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201460ULL || rel >= 0x1201480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201480 size=128 callers=0 calls=4
   calls: sub_112ea00, sub_11365c0, sub_1137490, sub_11397d0
*/
void sub_1201480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201480ULL || rel >= 0x1201500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201500 size=16 callers=0 calls=0
*/
void sub_1201500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201500ULL || rel >= 0x1201510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201510 size=32 callers=0 calls=0
*/
void sub_1201510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201510ULL || rel >= 0x1201530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201530 size=32 callers=0 calls=0
*/
void sub_1201530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201530ULL || rel >= 0x1201550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201550 size=1456 callers=0 calls=5
   calls: sub_1136f20, sub_1136fc0, sub_11611a0, sub_1201b10, sub_967240
*/
void sub_1201550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201550ULL || rel >= 0x1201b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201b00 size=16 callers=0 calls=0
*/
void sub_1201b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201b00ULL || rel >= 0x1201b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201b10 size=448 callers=1 calls=0
*/
void sub_1201b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201b10ULL || rel >= 0x1201cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201cd0 size=16 callers=0 calls=0
*/
void sub_1201cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201cd0ULL || rel >= 0x1201ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201ce0 size=16 callers=0 calls=0
*/
void sub_1201ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201ce0ULL || rel >= 0x1201cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201cf0 size=224 callers=0 calls=2
   calls: sub_11611a0, sub_1201de0
*/
void sub_1201cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201cf0ULL || rel >= 0x1201dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201dd0 size=16 callers=0 calls=0
*/
void sub_1201dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201dd0ULL || rel >= 0x1201de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201de0 size=448 callers=1 calls=0
*/
void sub_1201de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201de0ULL || rel >= 0x1201fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201fa0 size=16 callers=0 calls=0
*/
void sub_1201fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201fa0ULL || rel >= 0x1201fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201fb0 size=16 callers=0 calls=0
*/
void sub_1201fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201fb0ULL || rel >= 0x1201fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01201fc0 size=208 callers=0 calls=0
*/
void sub_1201fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1201fc0ULL || rel >= 0x1202090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202090 size=80 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_1202090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202090ULL || rel >= 0x12020e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012020e0 size=192 callers=0 calls=1
   calls: sub_791da0
*/
void sub_12020e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12020e0ULL || rel >= 0x12021a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012021a0 size=192 callers=0 calls=1
   calls: sub_791da0
*/
void sub_12021a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12021a0ULL || rel >= 0x1202260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202260 size=192 callers=0 calls=1
   calls: sub_791da0
*/
void sub_1202260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202260ULL || rel >= 0x1202320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202320 size=192 callers=0 calls=1
   calls: sub_791da0
*/
void sub_1202320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202320ULL || rel >= 0x12023e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012023e0 size=192 callers=0 calls=1
   calls: sub_791da0
*/
void sub_12023e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12023e0ULL || rel >= 0x12024a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012024a0 size=192 callers=0 calls=1
   calls: sub_791da0
*/
void sub_12024a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12024a0ULL || rel >= 0x1202560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202560 size=880 callers=0 calls=4
   calls: sub_1202b00, sub_791d50, sub_791da0, sub_967240
*/
void sub_1202560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202560ULL || rel >= 0x12028d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012028d0 size=32 callers=0 calls=0
*/
void sub_12028d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12028d0ULL || rel >= 0x12028f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012028f0 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_12028f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12028f0ULL || rel >= 0x12029a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012029a0 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_12029a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12029a0ULL || rel >= 0x1202a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202a50 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1202a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202a50ULL || rel >= 0x1202b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202b00 size=240 callers=4 calls=1
   calls: sub_967240
*/
void sub_1202b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202b00ULL || rel >= 0x1202bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202bf0 size=208 callers=1 calls=1
   calls: sub_11bf7a0
*/
void sub_1202bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202bf0ULL || rel >= 0x1202cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202cc0 size=240 callers=0 calls=3
   calls: Set_State_Camp_Playground, sub_115b4a0, sub_12052c0
*/
void sub_1202cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202cc0ULL || rel >= 0x1202db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202db0 size=272 callers=0 calls=9
   calls: Play_Camp_Zoom_Appear, sub_11361a0, sub_113b040, sub_116cce0, sub_116e650, sub_11bffb0, sub_11c0030, sub_1202f80, to_kw34_lonely01
*/
void sub_1202db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202db0ULL || rel >= 0x1202ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202ec0 size=192 callers=0 calls=8
   calls: sub_11365d0, sub_11383d0, sub_113b050, sub_115c680, sub_1160e20, sub_116f1c0, sub_11c01a0, sub_12052c0
*/
void sub_1202ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202ec0ULL || rel >= 0x1202f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01202f80 size=2000 callers=1 calls=13
   calls: EffOverHead01_4, sub_1108730, sub_1134fa0, sub_1136950, sub_117dca0, sub_1204160, sub_59a5a0, sub_59a650, sub_59a670, sub_59a6d0, sub_967240, sub_972c70
   ... +1 more
*/
void sub_1202f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1202f80ULL || rel >= 0x1203750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01203750 size=1872 callers=1 calls=13
   calls: f_33s_fff, sub_11361a0, sub_1136950, sub_116cd90, sub_117dca0, sub_12052c0, sub_59a5a0, sub_59a650, sub_59a670, sub_59a6d0, sub_967240, sub_972c70
   ... +1 more
   ref: to_kw34_lonely01
*/
void to_kw34_lonely01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1203750ULL || rel >= 0x1203ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01203ea0 size=704 callers=1 calls=6
   calls: f_33s_fff, sub_1129060, sub_11365d0, sub_116f1d0, sub_117dca0, sub_12052c0
   ref: @Play_Camp_Zoom_Appear
*/
void Play_Camp_Zoom_Appear(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1203ea0ULL || rel >= 0x1204160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01204160 size=1776 callers=2 calls=3
   calls: sub_762930, sub_762940, sub_7670a0
*/
void sub_1204160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1204160ULL || rel >= 0x1204850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01204850 size=1408 callers=1 calls=7
   calls: sub_117dca0, sub_1204dd0, sub_59bee0, sub_612ef0, sub_612f70, sub_967240, sub_9ad100
   ref: EffOverHead01
   ref: EffMouth00
*/
void EffOverHead01_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1204850ULL || rel >= 0x1204dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01204dd0 size=1184 callers=4 calls=1
   calls: sub_967240
*/
void sub_1204dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1204dd0ULL || rel >= 0x1205270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205270 size=16 callers=0 calls=0
*/
void sub_1205270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205270ULL || rel >= 0x1205280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205280 size=16 callers=0 calls=0
*/
void sub_1205280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205280ULL || rel >= 0x1205290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205290 size=16 callers=0 calls=0
*/
void sub_1205290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205290ULL || rel >= 0x12052a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012052a0 size=16 callers=0 calls=0
*/
void sub_12052a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12052a0ULL || rel >= 0x12052b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012052b0 size=16 callers=0 calls=0
*/
void sub_12052b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12052b0ULL || rel >= 0x12052c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012052c0 size=464 callers=4 calls=1
   calls: sub_607750
*/
void sub_12052c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12052c0ULL || rel >= 0x1205490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205490 size=112 callers=0 calls=2
   calls: sub_1139e80, sub_bf05e0
*/
void sub_1205490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205490ULL || rel >= 0x1205500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205500 size=16 callers=0 calls=0
*/
void sub_1205500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205500ULL || rel >= 0x1205510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205510 size=16 callers=0 calls=0
*/
void sub_1205510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205510ULL || rel >= 0x1205520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205520 size=16 callers=0 calls=0
*/
void sub_1205520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205520ULL || rel >= 0x1205530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205530 size=208 callers=0 calls=0
*/
void sub_1205530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205530ULL || rel >= 0x1205600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205600 size=128 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_1205600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205600ULL || rel >= 0x1205680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205680 size=208 callers=0 calls=1
   calls: sub_c5ad80
*/
void sub_1205680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205680ULL || rel >= 0x1205750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205750 size=208 callers=0 calls=1
   calls: sub_c5ad80
*/
void sub_1205750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205750ULL || rel >= 0x1205820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205820 size=208 callers=0 calls=1
   calls: sub_c5ad80
*/
void sub_1205820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205820ULL || rel >= 0x12058f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012058f0 size=208 callers=0 calls=1
   calls: sub_c5ad80
*/
void sub_12058f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12058f0ULL || rel >= 0x12059c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012059c0 size=208 callers=0 calls=1
   calls: sub_c5ad80
*/
void sub_12059c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12059c0ULL || rel >= 0x1205a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205a90 size=208 callers=0 calls=1
   calls: sub_c5ad80
*/
void sub_1205a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205a90ULL || rel >= 0x1205b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205b60 size=496 callers=2 calls=1
   calls: sub_c5ad80
*/
void sub_1205b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205b60ULL || rel >= 0x1205d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205d50 size=368 callers=0 calls=3
   calls: sub_1202b00, sub_967240, sub_e91100
*/
void sub_1205d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205d50ULL || rel >= 0x1205ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01205ec0 size=608 callers=0 calls=3
   calls: sub_971950, sub_972c70, sub_c5ad80
*/
void sub_1205ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205ec0ULL || rel >= 0x1206120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01206120 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1206120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1206120ULL || rel >= 0x1206190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01206190 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1206190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1206190ULL || rel >= 0x1206200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01206200 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1206200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1206200ULL || rel >= 0x1206270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01206270 size=96 callers=0 calls=1
   calls: sub_972c70
*/
void sub_1206270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1206270ULL || rel >= 0x12062d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012062d0 size=1280 callers=1 calls=3
   calls: anonymous, sub_117dca0, sub_120b710
*/
void sub_12062d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12062d0ULL || rel >= 0x12067d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012067d0 size=1744 callers=0 calls=11
   calls: sub_10617a0, sub_1061810, sub_1179ee0, sub_117a6c0, sub_117a9c0, sub_117aaf0, sub_117dca0, sub_117faf0, sub_1206ea0, sub_1211680, sub_6aea40
*/
void sub_12067d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12067d0ULL || rel >= 0x1206ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01206ea0 size=448 callers=4 calls=3
   calls: sub_115ba20, sub_117a6c0, sub_bf0820
*/
void sub_1206ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1206ea0ULL || rel >= 0x1207060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01207060 size=112 callers=0 calls=0
*/
void sub_1207060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1207060ULL || rel >= 0x12070d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012070d0 size=176 callers=0 calls=1
   calls: sub_6aeb70
*/
void sub_12070d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12070d0ULL || rel >= 0x1207180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01207180 size=320 callers=0 calls=5
   calls: sub_1151930, sub_11519e0, sub_117a6c0, sub_12072c0, sub_6d1070
*/
void sub_1207180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1207180ULL || rel >= 0x12072c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012072c0 size=480 callers=6 calls=4
   calls: sub_11f5c80, sub_11f6cb0, sub_65da00, sub_65daf0
*/
void sub_12072c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12072c0ULL || rel >= 0x12074a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012074a0 size=544 callers=0 calls=6
   calls: sub_1127d00, sub_117a6c0, sub_117dca0, sub_1206ea0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12074a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12074a0ULL || rel >= 0x12076c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012076c0 size=816 callers=1 calls=6
   calls: sub_1127d00, sub_117dca0, sub_1207b30, sub_5cf8e0, sub_5cf8f0, sub_89b390
*/
void sub_12076c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12076c0ULL || rel >= 0x12079f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012079f0 size=320 callers=1 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_12079f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12079f0ULL || rel >= 0x1207b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01207b30 size=336 callers=2 calls=2
   calls: sub_120d980, sub_89b390
*/
void sub_1207b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1207b30ULL || rel >= 0x1207c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01207c80 size=592 callers=0 calls=5
   calls: sub_117a6c0, sub_117dca0, sub_1207ed0, sub_135a1a0, sub_135a760
*/
void sub_1207c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1207c80ULL || rel >= 0x1207ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01207ed0 size=1904 callers=3 calls=15
   calls: rare_grade, rare_grade_2, sub_112e920, sub_112ea00, sub_1136910, sub_1157ef0, sub_1179ee0, sub_117ab20, sub_117ae70, sub_117dca0, sub_117faf0, sub_1206ea0
   ... +3 more
*/
void sub_1207ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1207ed0ULL || rel >= 0x1208640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01208640 size=736 callers=0 calls=6
   calls: sub_1127d00, sub_117a6c0, sub_117dca0, sub_1211280, sub_5cf8e0, sub_5cf8f0
*/
void sub_1208640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1208640ULL || rel >= 0x1208920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01208920 size=864 callers=0 calls=5
   calls: sub_117dca0, sub_1183870, sub_11853f0, sub_1185480, sub_1207ed0
*/
void sub_1208920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1208920ULL || rel >= 0x1208c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01208c80 size=1920 callers=0 calls=3
   calls: sub_117dca0, sub_12079f0, sub_89b390
   ref: OnLimitTimeChanged
*/
void OnLimitTimeChanged(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1208c80ULL || rel >= 0x1209400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01209400 size=16 callers=0 calls=0
*/
void sub_1209400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1209400ULL || rel >= 0x1209410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01209410 size=320 callers=3 calls=4
   calls: sub_11f5c80, sub_6d1530, sub_6d7910, sub_89a0f0
*/
void sub_1209410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1209410ULL || rel >= 0x1209550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01209550 size=496 callers=0 calls=5
   calls: sub_1127d00, sub_117dca0, sub_5cf8e0, sub_5cf8f0, sub_6d1070
*/
void sub_1209550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1209550ULL || rel >= 0x1209740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01209740 size=112 callers=0 calls=1
   calls: sub_12097b0
*/
void sub_1209740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1209740ULL || rel >= 0x12097b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012097b0 size=1248 callers=2 calls=8
   calls: sub_5e2350, sub_6be8b0, sub_6bee70, sub_6d0a20, sub_6d1530, sub_6d1540, sub_6d7840, sub_6d7aa0
*/
void sub_12097b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12097b0ULL || rel >= 0x1209c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01209c90 size=112 callers=0 calls=1
   calls: sub_12097b0
*/
void sub_1209c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1209c90ULL || rel >= 0x1209d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01209d00 size=1856 callers=0 calls=7
   calls: sub_1151930, sub_12072c0, sub_135a1a0, sub_135a760, sub_65da00, sub_65daf0, sub_6f67b0
*/
void sub_1209d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1209d00ULL || rel >= 0x120a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120a440 size=864 callers=0 calls=5
   calls: sub_115ba20, sub_117a970, sub_117dca0, sub_6d7ac0, sub_bf0820
*/
void sub_120a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120a440ULL || rel >= 0x120a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120a7a0 size=16 callers=0 calls=0
*/
void sub_120a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120a7a0ULL || rel >= 0x120a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120a7b0 size=608 callers=0 calls=5
   calls: sub_117dca0, sub_1206ea0, sub_1207b30, sub_1207ed0, sub_89b390
*/
void sub_120a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120a7b0ULL || rel >= 0x120aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120aa10 size=16 callers=0 calls=0
*/
void sub_120aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120aa10ULL || rel >= 0x120aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120aa20 size=304 callers=1 calls=2
   calls: sub_1157ef0, sub_117dca0
*/
void sub_120aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120aa20ULL || rel >= 0x120ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ab50 size=816 callers=0 calls=8
   calls: sub_1127d00, sub_117a970, sub_117b010, sub_117dca0, sub_120f370, sub_5cf8e0, sub_5cf8f0, sub_6d1070
*/
void sub_120ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ab50ULL || rel >= 0x120ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ae80 size=16 callers=0 calls=0
*/
void sub_120ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ae80ULL || rel >= 0x120ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ae90 size=16 callers=0 calls=0
*/
void sub_120ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ae90ULL || rel >= 0x120aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120aea0 size=16 callers=0 calls=0
*/
void sub_120aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120aea0ULL || rel >= 0x120aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120aeb0 size=544 callers=0 calls=0
*/
void sub_120aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120aeb0ULL || rel >= 0x120b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b0d0 size=16 callers=0 calls=0
*/
void sub_120b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b0d0ULL || rel >= 0x120b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b0e0 size=16 callers=0 calls=0
*/
void sub_120b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b0e0ULL || rel >= 0x120b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b0f0 size=16 callers=0 calls=0
*/
void sub_120b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b0f0ULL || rel >= 0x120b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b100 size=16 callers=0 calls=0
*/
void sub_120b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b100ULL || rel >= 0x120b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b110 size=16 callers=0 calls=0
*/
void sub_120b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b110ULL || rel >= 0x120b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b120 size=16 callers=0 calls=0
*/
void sub_120b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b120ULL || rel >= 0x120b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b130 size=16 callers=0 calls=0
*/
void sub_120b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b130ULL || rel >= 0x120b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b140 size=16 callers=0 calls=0
*/
void sub_120b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b140ULL || rel >= 0x120b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b150 size=16 callers=0 calls=0
*/
void sub_120b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b150ULL || rel >= 0x120b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b160 size=16 callers=0 calls=0
*/
void sub_120b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b160ULL || rel >= 0x120b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b170 size=16 callers=0 calls=0
*/
void sub_120b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b170ULL || rel >= 0x120b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b180 size=16 callers=0 calls=0
*/
void sub_120b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b180ULL || rel >= 0x120b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b190 size=16 callers=0 calls=0
*/
void sub_120b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b190ULL || rel >= 0x120b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b1a0 size=16 callers=0 calls=0
*/
void sub_120b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b1a0ULL || rel >= 0x120b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b1b0 size=16 callers=0 calls=0
*/
void sub_120b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b1b0ULL || rel >= 0x120b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b1c0 size=16 callers=0 calls=0
*/
void sub_120b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b1c0ULL || rel >= 0x120b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b1d0 size=16 callers=0 calls=0
*/
void sub_120b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b1d0ULL || rel >= 0x120b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b1e0 size=672 callers=0 calls=2
   calls: sub_120c730, sub_6d7610
*/
void sub_120b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b1e0ULL || rel >= 0x120b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b480 size=96 callers=0 calls=1
   calls: sub_120d220
*/
void sub_120b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b480ULL || rel >= 0x120b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b4e0 size=96 callers=0 calls=1
   calls: sub_1209410
*/
void sub_120b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b4e0ULL || rel >= 0x120b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b540 size=16 callers=0 calls=0
*/
void sub_120b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b540ULL || rel >= 0x120b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b550 size=16 callers=0 calls=0
*/
void sub_120b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b550ULL || rel >= 0x120b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b560 size=16 callers=0 calls=0
*/
void sub_120b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b560ULL || rel >= 0x120b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b570 size=96 callers=0 calls=0
*/
void sub_120b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b570ULL || rel >= 0x120b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b5d0 size=16 callers=0 calls=0
*/
void sub_120b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b5d0ULL || rel >= 0x120b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b5e0 size=304 callers=0 calls=0
*/
void sub_120b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b5e0ULL || rel >= 0x120b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b710 size=480 callers=1 calls=4
   calls: sub_5e2350, sub_6d04c0, sub_6d70e0, sub_899e80
*/
void sub_120b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b710ULL || rel >= 0x120b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120b8f0 size=496 callers=0 calls=3
   calls: sub_11f5c80, sub_6d0670, sub_89a0f0
*/
void sub_120b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b8f0ULL || rel >= 0x120bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120bae0 size=16 callers=0 calls=0
*/
void sub_120bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120bae0ULL || rel >= 0x120baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120baf0 size=240 callers=0 calls=0
*/
void sub_120baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120baf0ULL || rel >= 0x120bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120bbe0 size=32 callers=0 calls=0
*/
void sub_120bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120bbe0ULL || rel >= 0x120bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120bc00 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_120bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120bc00ULL || rel >= 0x120bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120bc60 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_120bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120bc60ULL || rel >= 0x120bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120bcf0 size=368 callers=0 calls=2
   calls: sub_6ae9d0, sub_89a310
*/
void sub_120bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120bcf0ULL || rel >= 0x120be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120be60 size=384 callers=0 calls=3
   calls: sub_6ae9d0, sub_6d7e60, sub_89a310
*/
void sub_120be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120be60ULL || rel >= 0x120bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120bfe0 size=464 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7aa0, sub_6d7e60, sub_89a310
*/
void sub_120bfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120bfe0ULL || rel >= 0x120c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c1b0 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_120c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c1b0ULL || rel >= 0x120c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c260 size=16 callers=0 calls=0
*/
void sub_120c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c260ULL || rel >= 0x120c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c270 size=16 callers=0 calls=0
*/
void sub_120c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c270ULL || rel >= 0x120c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c280 size=16 callers=0 calls=0
*/
void sub_120c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c280ULL || rel >= 0x120c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c290 size=16 callers=0 calls=0
*/
void sub_120c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c290ULL || rel >= 0x120c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c2a0 size=16 callers=0 calls=0
*/
void sub_120c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c2a0ULL || rel >= 0x120c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c2b0 size=16 callers=0 calls=0
*/
void sub_120c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c2b0ULL || rel >= 0x120c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c2c0 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_120c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c2c0ULL || rel >= 0x120c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c320 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_120c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c320ULL || rel >= 0x120c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c3b0 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_120c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c3b0ULL || rel >= 0x120c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c460 size=16 callers=0 calls=0
*/
void sub_120c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c460ULL || rel >= 0x120c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c470 size=16 callers=0 calls=0
*/
void sub_120c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c470ULL || rel >= 0x120c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c480 size=16 callers=0 calls=0
*/
void sub_120c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c480ULL || rel >= 0x120c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c490 size=32 callers=0 calls=0
*/
void sub_120c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c490ULL || rel >= 0x120c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c4b0 size=80 callers=0 calls=1
   calls: sub_6d12e0
*/
void sub_120c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c4b0ULL || rel >= 0x120c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c500 size=16 callers=0 calls=0
*/
void sub_120c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c500ULL || rel >= 0x120c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c510 size=16 callers=0 calls=0
*/
void sub_120c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c510ULL || rel >= 0x120c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c520 size=16 callers=0 calls=0
*/
void sub_120c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c520ULL || rel >= 0x120c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c530 size=128 callers=0 calls=4
   calls: sub_6d7ac0, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_120c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c530ULL || rel >= 0x120c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c5b0 size=16 callers=0 calls=0
*/
void sub_120c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c5b0ULL || rel >= 0x120c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c5c0 size=32 callers=0 calls=0
*/
void sub_120c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c5c0ULL || rel >= 0x120c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c5e0 size=32 callers=0 calls=0
*/
void sub_120c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c5e0ULL || rel >= 0x120c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c600 size=224 callers=0 calls=5
   calls: sub_6d7aa0, sub_6d7d80, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_120c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c600ULL || rel >= 0x120c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c6e0 size=16 callers=0 calls=0
*/
void sub_120c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c6e0ULL || rel >= 0x120c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c6f0 size=32 callers=0 calls=0
*/
void sub_120c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c6f0ULL || rel >= 0x120c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c710 size=32 callers=0 calls=0
*/
void sub_120c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c710ULL || rel >= 0x120c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c730 size=352 callers=1 calls=2
   calls: sub_120c890, sub_89b480
*/
void sub_120c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c730ULL || rel >= 0x120c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120c890 size=592 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_120c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120c890ULL || rel >= 0x120cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cae0 size=80 callers=0 calls=0
*/
void sub_120cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cae0ULL || rel >= 0x120cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cb30 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_120cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cb30ULL || rel >= 0x120cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cba0 size=16 callers=0 calls=0
*/
void sub_120cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cba0ULL || rel >= 0x120cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cbb0 size=48 callers=0 calls=0
*/
void sub_120cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cbb0ULL || rel >= 0x120cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cbe0 size=64 callers=0 calls=0
*/
void sub_120cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cbe0ULL || rel >= 0x120cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cc20 size=80 callers=0 calls=0
*/
void sub_120cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cc20ULL || rel >= 0x120cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cc70 size=80 callers=0 calls=0
*/
void sub_120cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cc70ULL || rel >= 0x120ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ccc0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_120ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ccc0ULL || rel >= 0x120cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cd30 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_120cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cd30ULL || rel >= 0x120cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cda0 size=80 callers=0 calls=0
*/
void sub_120cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cda0ULL || rel >= 0x120cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cdf0 size=80 callers=0 calls=0
*/
void sub_120cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cdf0ULL || rel >= 0x120ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ce40 size=16 callers=0 calls=0
*/
void sub_120ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ce40ULL || rel >= 0x120ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ce50 size=16 callers=0 calls=0
*/
void sub_120ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ce50ULL || rel >= 0x120ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ce60 size=16 callers=0 calls=0
*/
void sub_120ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ce60ULL || rel >= 0x120ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ce70 size=16 callers=0 calls=0
*/
void sub_120ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ce70ULL || rel >= 0x120ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ce80 size=16 callers=0 calls=0
*/
void sub_120ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ce80ULL || rel >= 0x120ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ce90 size=16 callers=0 calls=0
*/
void sub_120ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ce90ULL || rel >= 0x120cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cea0 size=16 callers=0 calls=0
*/
void sub_120cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cea0ULL || rel >= 0x120ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ceb0 size=16 callers=0 calls=0
*/
void sub_120ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ceb0ULL || rel >= 0x120cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cec0 size=144 callers=0 calls=1
   calls: sub_117dca0
*/
void sub_120cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cec0ULL || rel >= 0x120cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cf50 size=16 callers=0 calls=0
*/
void sub_120cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cf50ULL || rel >= 0x120cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cf60 size=16 callers=0 calls=0
*/
void sub_120cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cf60ULL || rel >= 0x120cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cf70 size=16 callers=0 calls=0
*/
void sub_120cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cf70ULL || rel >= 0x120cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cf80 size=16 callers=0 calls=0
*/
void sub_120cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cf80ULL || rel >= 0x120cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cf90 size=16 callers=0 calls=0
*/
void sub_120cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cf90ULL || rel >= 0x120cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cfa0 size=16 callers=0 calls=0
*/
void sub_120cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cfa0ULL || rel >= 0x120cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cfb0 size=16 callers=0 calls=0
*/
void sub_120cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cfb0ULL || rel >= 0x120cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120cfc0 size=192 callers=0 calls=1
   calls: sub_117dca0
*/
void sub_120cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120cfc0ULL || rel >= 0x120d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d080 size=16 callers=0 calls=0
*/
void sub_120d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d080ULL || rel >= 0x120d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d090 size=16 callers=0 calls=0
*/
void sub_120d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d090ULL || rel >= 0x120d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d0a0 size=16 callers=0 calls=0
*/
void sub_120d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d0a0ULL || rel >= 0x120d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d0b0 size=16 callers=0 calls=0
*/
void sub_120d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d0b0ULL || rel >= 0x120d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d0c0 size=16 callers=0 calls=0
*/
void sub_120d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d0c0ULL || rel >= 0x120d0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d0d0 size=16 callers=0 calls=0
*/
void sub_120d0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d0d0ULL || rel >= 0x120d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d0e0 size=16 callers=0 calls=0
*/
void sub_120d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d0e0ULL || rel >= 0x120d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d0f0 size=16 callers=0 calls=0
*/
void sub_120d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d0f0ULL || rel >= 0x120d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d100 size=16 callers=0 calls=0
*/
void sub_120d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d100ULL || rel >= 0x120d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d110 size=16 callers=0 calls=0
*/
void sub_120d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d110ULL || rel >= 0x120d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d120 size=16 callers=0 calls=0
*/
void sub_120d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d120ULL || rel >= 0x120d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d130 size=192 callers=0 calls=1
   calls: sub_117dca0
*/
void sub_120d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d130ULL || rel >= 0x120d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d1f0 size=16 callers=0 calls=0
*/
void sub_120d1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d1f0ULL || rel >= 0x120d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d200 size=16 callers=0 calls=0
*/
void sub_120d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d200ULL || rel >= 0x120d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d210 size=16 callers=0 calls=0
*/
void sub_120d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d210ULL || rel >= 0x120d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d220 size=1120 callers=1 calls=16
   calls: sub_114a0e0, sub_120d680, sub_120d7c0, sub_172bd80, sub_6cf5a0, sub_6cf8f0, sub_6cfbd0, sub_6d1070, sub_6d12e0, sub_6d13b0, sub_6d1450, sub_6d1490
   ... +4 more
*/
void sub_120d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d220ULL || rel >= 0x120d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d680 size=320 callers=1 calls=0
*/
void sub_120d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d680ULL || rel >= 0x120d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d7c0 size=240 callers=3 calls=3
   calls: sub_11f5c80, sub_6d7d80, sub_89a0f0
*/
void sub_120d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d7c0ULL || rel >= 0x120d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d8b0 size=16 callers=0 calls=0
*/
void sub_120d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d8b0ULL || rel >= 0x120d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d8c0 size=16 callers=0 calls=0
*/
void sub_120d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d8c0ULL || rel >= 0x120d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d8d0 size=16 callers=0 calls=0
*/
void sub_120d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d8d0ULL || rel >= 0x120d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d8e0 size=16 callers=0 calls=0
*/
void sub_120d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d8e0ULL || rel >= 0x120d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d8f0 size=32 callers=0 calls=1
   calls: sub_12076c0
*/
void sub_120d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d8f0ULL || rel >= 0x120d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d910 size=16 callers=0 calls=0
*/
void sub_120d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d910ULL || rel >= 0x120d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d920 size=16 callers=0 calls=0
*/
void sub_120d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d920ULL || rel >= 0x120d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d930 size=16 callers=0 calls=0
*/
void sub_120d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d930ULL || rel >= 0x120d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d940 size=16 callers=0 calls=0
*/
void sub_120d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d940ULL || rel >= 0x120d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d950 size=16 callers=0 calls=0
*/
void sub_120d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d950ULL || rel >= 0x120d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d960 size=16 callers=0 calls=0
*/
void sub_120d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d960ULL || rel >= 0x120d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d970 size=16 callers=0 calls=0
*/
void sub_120d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d970ULL || rel >= 0x120d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120d980 size=304 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_120d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120d980ULL || rel >= 0x120dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dab0 size=32 callers=0 calls=0
*/
void sub_120dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dab0ULL || rel >= 0x120dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dad0 size=16 callers=0 calls=0
*/
void sub_120dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dad0ULL || rel >= 0x120dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dae0 size=32 callers=0 calls=0
*/
void sub_120dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dae0ULL || rel >= 0x120db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120db00 size=32 callers=0 calls=0
*/
void sub_120db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120db00ULL || rel >= 0x120db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120db20 size=208 callers=0 calls=1
   calls: sub_1209410
*/
void sub_120db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120db20ULL || rel >= 0x120dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dbf0 size=16 callers=0 calls=0
*/
void sub_120dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dbf0ULL || rel >= 0x120dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dc00 size=16 callers=0 calls=0
*/
void sub_120dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dc00ULL || rel >= 0x120dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dc10 size=16 callers=0 calls=0
*/
void sub_120dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dc10ULL || rel >= 0x120dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dc20 size=192 callers=0 calls=3
   calls: sub_1151930, sub_11519e0, sub_12072c0
*/
void sub_120dc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dc20ULL || rel >= 0x120dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dce0 size=16 callers=0 calls=0
*/
void sub_120dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dce0ULL || rel >= 0x120dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dcf0 size=16 callers=0 calls=0
*/
void sub_120dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dcf0ULL || rel >= 0x120dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dd00 size=16 callers=0 calls=0
*/
void sub_120dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dd00ULL || rel >= 0x120dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dd10 size=64 callers=0 calls=1
   calls: sub_1160e20
*/
void sub_120dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dd10ULL || rel >= 0x120dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dd50 size=16 callers=0 calls=0
*/
void sub_120dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dd50ULL || rel >= 0x120dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dd60 size=16 callers=0 calls=0
*/
void sub_120dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dd60ULL || rel >= 0x120dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dd70 size=16 callers=0 calls=0
*/
void sub_120dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dd70ULL || rel >= 0x120dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120dd80 size=176 callers=0 calls=1
   calls: sub_112e920
*/
void sub_120dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120dd80ULL || rel >= 0x120de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120de30 size=16 callers=0 calls=0
*/
void sub_120de30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120de30ULL || rel >= 0x120de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120de40 size=16 callers=0 calls=0
*/
void sub_120de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120de40ULL || rel >= 0x120de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120de50 size=16 callers=0 calls=0
*/
void sub_120de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120de50ULL || rel >= 0x120de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120de60 size=2608 callers=3 calls=7
   calls: sub_1108720, sub_1108a50, sub_1134fa0, sub_120de60, sub_120e890, sub_120ed80, sub_120f010
*/
void sub_120de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120de60ULL || rel >= 0x120e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120e890 size=752 callers=5 calls=3
   calls: sub_1108720, sub_1108a50, sub_1134fa0
*/
void sub_120e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120e890ULL || rel >= 0x120eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120eb80 size=512 callers=2 calls=4
   calls: sub_1108720, sub_1108a50, sub_1134fa0, sub_120e890
*/
void sub_120eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120eb80ULL || rel >= 0x120ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ed80 size=656 callers=2 calls=4
   calls: sub_1108720, sub_1108a50, sub_1134fa0, sub_120eb80
*/
void sub_120ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ed80ULL || rel >= 0x120f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f010 size=832 callers=2 calls=6
   calls: sub_1108720, sub_1108a50, sub_1134fa0, sub_120e890, sub_120eb80, sub_120ed80
*/
void sub_120f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f010ULL || rel >= 0x120f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f350 size=16 callers=0 calls=0
*/
void sub_120f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f350ULL || rel >= 0x120f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f360 size=16 callers=0 calls=0
*/
void sub_120f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f360ULL || rel >= 0x120f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f370 size=352 callers=1 calls=3
   calls: sub_117dca0, sub_1180360, sub_12104b0
*/
void sub_120f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f370ULL || rel >= 0x120f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f4d0 size=16 callers=0 calls=0
*/
void sub_120f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f4d0ULL || rel >= 0x120f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f4e0 size=16 callers=0 calls=0
*/
void sub_120f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f4e0ULL || rel >= 0x120f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f4f0 size=240 callers=0 calls=0
*/
void sub_120f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f4f0ULL || rel >= 0x120f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f5e0 size=144 callers=2 calls=2
   calls: sub_1154300, sub_5e2350
*/
void sub_120f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f5e0ULL || rel >= 0x120f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f670 size=304 callers=0 calls=1
   calls: sub_11543a0
*/
void sub_120f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f670ULL || rel >= 0x120f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f7a0 size=16 callers=0 calls=0
*/
void sub_120f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f7a0ULL || rel >= 0x120f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f7b0 size=16 callers=0 calls=0
*/
void sub_120f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f7b0ULL || rel >= 0x120f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f7c0 size=16 callers=0 calls=0
*/
void sub_120f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f7c0ULL || rel >= 0x120f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f7d0 size=16 callers=0 calls=0
*/
void sub_120f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f7d0ULL || rel >= 0x120f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f7e0 size=16 callers=0 calls=0
*/
void sub_120f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f7e0ULL || rel >= 0x120f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f7f0 size=416 callers=1 calls=2
   calls: sub_5e2350, sub_6be8b0
*/
void sub_120f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f7f0ULL || rel >= 0x120f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f990 size=80 callers=1 calls=0
*/
void sub_120f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f990ULL || rel >= 0x120f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f9e0 size=16 callers=5 calls=0
*/
void sub_120f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f9e0ULL || rel >= 0x120f9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120f9f0 size=208 callers=3 calls=4
   calls: sub_114a0e0, sub_1210de0, sub_65da00, sub_65daf0
*/
void sub_120f9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f9f0ULL || rel >= 0x120fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120fac0 size=208 callers=3 calls=4
   calls: sub_114a4a0, sub_1210de0, sub_65da00, sub_65daf0
*/
void sub_120fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120fac0ULL || rel >= 0x120fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120fb90 size=624 callers=1 calls=2
   calls: sub_1061830, sub_6ba6a0
*/
void sub_120fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120fb90ULL || rel >= 0x120fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120fe00 size=176 callers=1 calls=0
*/
void sub_120fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120fe00ULL || rel >= 0x120feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120feb0 size=80 callers=1 calls=1
   calls: sub_120fac0
*/
void sub_120feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120feb0ULL || rel >= 0x120ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ff00 size=64 callers=1 calls=1
   calls: sub_120fac0
*/
void sub_120ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ff00ULL || rel >= 0x120ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0120ff40 size=256 callers=5 calls=4
   calls: sub_1154300, sub_11543a0, sub_120f9f0, sub_1210040
*/
void sub_120ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120ff40ULL || rel >= 0x1210040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210040 size=416 callers=2 calls=3
   calls: sub_1061800, sub_1061830, sub_6ba6a0
*/
void sub_1210040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210040ULL || rel >= 0x12101e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012101e0 size=80 callers=1 calls=3
   calls: sub_1154300, sub_11543a0, sub_120fac0
*/
void sub_12101e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12101e0ULL || rel >= 0x1210230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210230 size=16 callers=2 calls=0
*/
void sub_1210230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210230ULL || rel >= 0x1210240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210240 size=16 callers=3 calls=0
*/
void sub_1210240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210240ULL || rel >= 0x1210250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210250 size=608 callers=1 calls=2
   calls: sub_1061830, sub_6ba6a0
*/
void sub_1210250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210250ULL || rel >= 0x12104b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012104b0 size=176 callers=2 calls=0
*/
void sub_12104b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12104b0ULL || rel >= 0x1210560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210560 size=880 callers=0 calls=5
   calls: sub_1061800, sub_1154300, sub_11543a0, sub_120f9f0, sub_12108d0
*/
void sub_1210560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210560ULL || rel >= 0x12108d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012108d0 size=608 callers=4 calls=3
   calls: sub_1061800, sub_1061830, sub_6ba6a0
*/
void sub_12108d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12108d0ULL || rel >= 0x1210b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210b30 size=16 callers=0 calls=0
*/
void sub_1210b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210b30ULL || rel >= 0x1210b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210b40 size=400 callers=0 calls=4
   calls: sub_10617a0, sub_1061830, sub_1210040, sub_6ba6a0
*/
void sub_1210b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210b40ULL || rel >= 0x1210cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210cd0 size=240 callers=0 calls=0
*/
void sub_1210cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210cd0ULL || rel >= 0x1210dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210dc0 size=16 callers=0 calls=0
*/
void sub_1210dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210dc0ULL || rel >= 0x1210dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210dd0 size=16 callers=0 calls=0
*/
void sub_1210dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210dd0ULL || rel >= 0x1210de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210de0 size=304 callers=2 calls=7
   calls: sub_1152d60, sub_1153160, sub_1154300, sub_1154fd0, sub_65da00, sub_65daf0, sub_c70
*/
void sub_1210de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210de0ULL || rel >= 0x1210f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210f10 size=64 callers=0 calls=0
*/
void sub_1210f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210f10ULL || rel >= 0x1210f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210f50 size=16 callers=0 calls=0
*/
void sub_1210f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210f50ULL || rel >= 0x1210f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210f60 size=16 callers=0 calls=0
*/
void sub_1210f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210f60ULL || rel >= 0x1210f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210f70 size=16 callers=0 calls=0
*/
void sub_1210f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210f70ULL || rel >= 0x1210f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210f80 size=16 callers=0 calls=0
*/
void sub_1210f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210f80ULL || rel >= 0x1210f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210f90 size=16 callers=0 calls=0
*/
void sub_1210f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210f90ULL || rel >= 0x1210fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210fa0 size=16 callers=0 calls=0
*/
void sub_1210fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210fa0ULL || rel >= 0x1210fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210fb0 size=16 callers=0 calls=0
*/
void sub_1210fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210fb0ULL || rel >= 0x1210fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01210fc0 size=160 callers=0 calls=0
*/
void sub_1210fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1210fc0ULL || rel >= 0x1211060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01211060 size=544 callers=1 calls=4
   calls: sub_1133c30, sub_1306f20, sub_5dd790, sub_5e2930
*/
void sub_1211060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1211060ULL || rel >= 0x1211280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01211280 size=384 callers=4 calls=3
   calls: sub_117a610, sub_5cf8e0, sub_5cf8f0
*/
void sub_1211280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1211280ULL || rel >= 0x1211400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01211400 size=48 callers=1 calls=1
   calls: sub_117a630
*/
void sub_1211400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1211400ULL || rel >= 0x1211430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01211430 size=592 callers=2 calls=3
   calls: sub_1181a90, sub_5cf8f0, sub_5e2bc0
*/
void sub_1211430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1211430ULL || rel >= 0x1211680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01211680 size=544 callers=2 calls=4
   calls: sub_1133c30, sub_1306f20, sub_5dd790, sub_5e2930
*/
void sub_1211680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1211680ULL || rel >= 0x12118a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012118a0 size=896 callers=2 calls=3
   calls: sub_1181d00, sub_5cf8f0, sub_5e2bc0
*/
void sub_12118a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12118a0ULL || rel >= 0x1211c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01211c20 size=1488 callers=0 calls=11
   calls: sub_117a230, sub_117ba30, sub_1181a90, sub_1212200, sub_1212480, sub_12126d0, sub_1212920, sub_1213040, sub_5cf8e0, sub_5cf8f0, sub_5e2bc0
*/
void sub_1211c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1211c20ULL || rel >= 0x12121f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012121f0 size=16 callers=0 calls=0
*/
void sub_12121f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12121f0ULL || rel >= 0x1212200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01212200 size=640 callers=1 calls=4
   calls: sub_1306f20, sub_5e2930, sub_5e3870, sub_96a5a0
*/
void sub_1212200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1212200ULL || rel >= 0x1212480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01212480 size=592 callers=1 calls=4
   calls: sub_1306f20, sub_5e2930, sub_5e3870, sub_b77710
*/
void sub_1212480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1212480ULL || rel >= 0x12126d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012126d0 size=592 callers=1 calls=4
   calls: sub_1306f20, sub_5e2930, sub_5e3870, sub_96bb80
*/
void sub_12126d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12126d0ULL || rel >= 0x1212920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01212920 size=368 callers=1 calls=1
   calls: sub_11061d0
*/
void sub_1212920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1212920ULL || rel >= 0x1212a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01212a90 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1212a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1212a90ULL || rel >= 0x1212b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01212b60 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1212b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1212b60ULL || rel >= 0x1212c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01212c30 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1212c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1212c30ULL || rel >= 0x1212d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01212d00 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1212d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1212d00ULL || rel >= 0x1212dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01212dd0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1212dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1212dd0ULL || rel >= 0x1212ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01212ea0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1212ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1212ea0ULL || rel >= 0x1212f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01212f70 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1212f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1212f70ULL || rel >= 0x1213040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01213040 size=368 callers=1 calls=1
   calls: sub_11061d0
*/
void sub_1213040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1213040ULL || rel >= 0x12131b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012131b0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_12131b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12131b0ULL || rel >= 0x1213280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01213280 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1213280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1213280ULL || rel >= 0x1213350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01213350 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1213350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1213350ULL || rel >= 0x1213420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01213420 size=16 callers=0 calls=0
*/
void sub_1213420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1213420ULL || rel >= 0x1213430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01213430 size=16 callers=0 calls=0
*/
void sub_1213430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1213430ULL || rel >= 0x1213440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01213440 size=2208 callers=0 calls=11
   calls: sub_1181d00, sub_1213cf0, sub_1213f70, sub_1214360, sub_12145d0, sub_12147c0, sub_1214a40, sub_1214c30, sub_5cf8e0, sub_5cf8f0, sub_5e2bc0
*/
void sub_1213440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1213440ULL || rel >= 0x1213ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01213ce0 size=16 callers=0 calls=0
*/
void sub_1213ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1213ce0ULL || rel >= 0x1213cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01213cf0 size=640 callers=1 calls=4
   calls: sub_1306f20, sub_5e2930, sub_5e3870, sub_96a5a0
*/
void sub_1213cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1213cf0ULL || rel >= 0x1213f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01213f70 size=1008 callers=1 calls=0
*/
void sub_1213f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1213f70ULL || rel >= 0x1214360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01214360 size=624 callers=1 calls=4
   calls: sub_1306f20, sub_5e2930, sub_5e3870, sub_96bb80
*/
void sub_1214360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1214360ULL || rel >= 0x12145d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012145d0 size=496 callers=1 calls=0
*/
void sub_12145d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12145d0ULL || rel >= 0x12147c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012147c0 size=640 callers=1 calls=4
   calls: sub_1306f20, sub_5e2930, sub_5e3870, sub_96a5a0
*/
void sub_12147c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12147c0ULL || rel >= 0x1214a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01214a40 size=496 callers=1 calls=0
*/
void sub_1214a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1214a40ULL || rel >= 0x1214c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01214c30 size=640 callers=1 calls=4
   calls: sub_1306f20, sub_5e2930, sub_5e3870, sub_b77710
*/
void sub_1214c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1214c30ULL || rel >= 0x1214eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01214eb0 size=16 callers=0 calls=0
*/
void sub_1214eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1214eb0ULL || rel >= 0x1214ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01214ec0 size=16 callers=0 calls=0
*/
void sub_1214ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1214ec0ULL || rel >= 0x1214ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01214ed0 size=208 callers=3 calls=1
   calls: anonymous
*/
void sub_1214ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1214ed0ULL || rel >= 0x1214fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01214fa0 size=320 callers=5 calls=4
   calls: sub_117dca0, sub_1180360, sub_120f9e0, sub_6aea40
*/
void sub_1214fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1214fa0ULL || rel >= 0x12150e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012150e0 size=624 callers=0 calls=5
   calls: sub_1127d00, sub_117dca0, sub_127db90, sub_5cf8e0, sub_5cf8f0
*/
void sub_12150e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12150e0ULL || rel >= 0x1215350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215350 size=16 callers=17 calls=0
*/
void sub_1215350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215350ULL || rel >= 0x1215360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215360 size=304 callers=0 calls=4
   calls: sub_117dca0, sub_1180360, sub_120f9e0, sub_6aeb70
*/
void sub_1215360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215360ULL || rel >= 0x1215490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215490 size=32 callers=0 calls=0
*/
void sub_1215490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215490ULL || rel >= 0x12154b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012154b0 size=32 callers=0 calls=0
*/
void sub_12154b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12154b0ULL || rel >= 0x12154d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012154d0 size=1280 callers=0 calls=9
   calls: sub_1127d00, sub_115a6e0, sub_115b9f0, sub_117dca0, sub_11bd2b0, sub_11f2be0, sub_1210240, sub_5cf8e0, sub_5cf8f0
*/
void sub_12154d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12154d0ULL || rel >= 0x12159d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012159d0 size=16 callers=0 calls=0
*/
void sub_12159d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12159d0ULL || rel >= 0x12159e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012159e0 size=32 callers=0 calls=0
*/
void sub_12159e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12159e0ULL || rel >= 0x1215a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215a00 size=32 callers=0 calls=0
*/
void sub_1215a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215a00ULL || rel >= 0x1215a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215a20 size=336 callers=0 calls=2
   calls: sub_1157ef0, sub_117dca0
*/
void sub_1215a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215a20ULL || rel >= 0x1215b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215b70 size=16 callers=0 calls=0
*/
void sub_1215b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215b70ULL || rel >= 0x1215b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215b80 size=32 callers=0 calls=0
*/
void sub_1215b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215b80ULL || rel >= 0x1215ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215ba0 size=32 callers=0 calls=0
*/
void sub_1215ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215ba0ULL || rel >= 0x1215bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215bc0 size=336 callers=0 calls=2
   calls: sub_1157ef0, sub_117dca0
*/
void sub_1215bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215bc0ULL || rel >= 0x1215d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215d10 size=16 callers=0 calls=0
*/
void sub_1215d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215d10ULL || rel >= 0x1215d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215d20 size=32 callers=0 calls=0
*/
void sub_1215d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215d20ULL || rel >= 0x1215d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215d40 size=32 callers=0 calls=0
*/
void sub_1215d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215d40ULL || rel >= 0x1215d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215d60 size=16 callers=3 calls=0
*/
void sub_1215d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215d60ULL || rel >= 0x1215d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215d70 size=128 callers=1 calls=0
*/
void sub_1215d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215d70ULL || rel >= 0x1215df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01215df0 size=1312 callers=0 calls=4
   calls: sub_115a6e0, sub_117dca0, sub_11f2be0, sub_1210240
*/
void sub_1215df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1215df0ULL || rel >= 0x1216310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216310 size=112 callers=1 calls=2
   calls: sub_10617a0, sub_10619f0
*/
void sub_1216310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216310ULL || rel >= 0x1216380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216380 size=80 callers=45 calls=1
   calls: sub_5e2350
*/
void sub_1216380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216380ULL || rel >= 0x12163d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012163d0 size=48 callers=6 calls=0
*/
void sub_12163d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12163d0ULL || rel >= 0x1216400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216400 size=48 callers=0 calls=0
*/
void sub_1216400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216400ULL || rel >= 0x1216430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216430 size=96 callers=1 calls=0
*/
void sub_1216430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216430ULL || rel >= 0x1216490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216490 size=16 callers=4 calls=0
*/
void sub_1216490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216490ULL || rel >= 0x12164a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012164a0 size=160 callers=37 calls=1
   calls: sub_117dca0
*/
void sub_12164a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12164a0ULL || rel >= 0x1216540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216540 size=16 callers=0 calls=0
*/
void sub_1216540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216540ULL || rel >= 0x1216550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216550 size=96 callers=9 calls=0
*/
void sub_1216550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216550ULL || rel >= 0x12165b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012165b0 size=16 callers=10 calls=0
*/
void sub_12165b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12165b0ULL || rel >= 0x12165c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012165c0 size=16 callers=1 calls=0
*/
void sub_12165c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12165c0ULL || rel >= 0x12165d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012165d0 size=640 callers=8 calls=4
   calls: sub_1127fc0, sub_117dca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12165d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12165d0ULL || rel >= 0x1216850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216850 size=256 callers=0 calls=3
   calls: sub_117a9c0, sub_117b010, sub_117dca0
*/
void sub_1216850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216850ULL || rel >= 0x1216950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216950 size=256 callers=0 calls=3
   calls: sub_117a9c0, sub_117b010, sub_117dca0
*/
void sub_1216950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216950ULL || rel >= 0x1216a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216a50 size=16 callers=0 calls=0
*/
void sub_1216a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216a50ULL || rel >= 0x1216a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216a60 size=16 callers=0 calls=0
*/
void sub_1216a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216a60ULL || rel >= 0x1216a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216a70 size=128 callers=0 calls=0
*/
void sub_1216a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216a70ULL || rel >= 0x1216af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216af0 size=128 callers=0 calls=0
*/
void sub_1216af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216af0ULL || rel >= 0x1216b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216b70 size=16 callers=0 calls=0
*/
void sub_1216b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216b70ULL || rel >= 0x1216b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216b80 size=128 callers=0 calls=0
*/
void sub_1216b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216b80ULL || rel >= 0x1216c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216c00 size=128 callers=0 calls=0
*/
void sub_1216c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216c00ULL || rel >= 0x1216c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216c80 size=16 callers=0 calls=0
*/
void sub_1216c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216c80ULL || rel >= 0x1216c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216c90 size=16 callers=0 calls=0
*/
void sub_1216c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216c90ULL || rel >= 0x1216ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216ca0 size=144 callers=0 calls=0
*/
void sub_1216ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216ca0ULL || rel >= 0x1216d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216d30 size=144 callers=0 calls=0
*/
void sub_1216d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216d30ULL || rel >= 0x1216dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216dc0 size=160 callers=0 calls=0
*/
void sub_1216dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216dc0ULL || rel >= 0x1216e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216e60 size=160 callers=0 calls=0
*/
void sub_1216e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216e60ULL || rel >= 0x1216f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216f00 size=240 callers=0 calls=0
*/
void sub_1216f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216f00ULL || rel >= 0x1216ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01216ff0 size=16 callers=0 calls=0
*/
void sub_1216ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1216ff0ULL || rel >= 0x1217000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217000 size=16 callers=0 calls=0
*/
void sub_1217000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217000ULL || rel >= 0x1217010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217010 size=16 callers=0 calls=0
*/
void sub_1217010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217010ULL || rel >= 0x1217020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217020 size=16 callers=0 calls=0
*/
void sub_1217020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217020ULL || rel >= 0x1217030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217030 size=16 callers=0 calls=0
*/
void sub_1217030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217030ULL || rel >= 0x1217040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217040 size=16 callers=0 calls=0
*/
void sub_1217040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217040ULL || rel >= 0x1217050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217050 size=16 callers=0 calls=0
*/
void sub_1217050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217050ULL || rel >= 0x1217060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217060 size=160 callers=0 calls=0
*/
void sub_1217060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217060ULL || rel >= 0x1217100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217100 size=160 callers=0 calls=0
*/
void sub_1217100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217100ULL || rel >= 0x12171a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012171a0 size=16 callers=0 calls=0
*/
void sub_12171a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12171a0ULL || rel >= 0x12171b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012171b0 size=16 callers=0 calls=0
*/
void sub_12171b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12171b0ULL || rel >= 0x12171c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012171c0 size=160 callers=0 calls=0
*/
void sub_12171c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12171c0ULL || rel >= 0x1217260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217260 size=160 callers=0 calls=0
*/
void sub_1217260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217260ULL || rel >= 0x1217300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217300 size=304 callers=9 calls=0
*/
void sub_1217300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217300ULL || rel >= 0x1217430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217430 size=16 callers=0 calls=0
*/
void sub_1217430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217430ULL || rel >= 0x1217440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217440 size=16 callers=0 calls=0
*/
void sub_1217440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217440ULL || rel >= 0x1217450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217450 size=16 callers=0 calls=0
*/
void sub_1217450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217450ULL || rel >= 0x1217460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217460 size=16 callers=0 calls=0
*/
void sub_1217460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217460ULL || rel >= 0x1217470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217470 size=16 callers=0 calls=0
*/
void sub_1217470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217470ULL || rel >= 0x1217480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217480 size=16 callers=0 calls=0
*/
void sub_1217480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217480ULL || rel >= 0x1217490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217490 size=16 callers=0 calls=0
*/
void sub_1217490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217490ULL || rel >= 0x12174a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012174a0 size=16 callers=0 calls=0
*/
void sub_12174a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12174a0ULL || rel >= 0x12174b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012174b0 size=80 callers=0 calls=1
   calls: sub_115a6e0
*/
void sub_12174b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12174b0ULL || rel >= 0x1217500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217500 size=16 callers=0 calls=0
*/
void sub_1217500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217500ULL || rel >= 0x1217510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217510 size=16 callers=0 calls=0
*/
void sub_1217510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217510ULL || rel >= 0x1217520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217520 size=16 callers=0 calls=0
*/
void sub_1217520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217520ULL || rel >= 0x1217530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217530 size=208 callers=0 calls=0
*/
void sub_1217530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217530ULL || rel >= 0x1217600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217600 size=256 callers=1 calls=2
   calls: anonymous, sub_121e590
*/
void sub_1217600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217600ULL || rel >= 0x1217700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217700 size=896 callers=0 calls=14
   calls: sub_1128e20, sub_115bc10, sub_115bfb0, sub_115c230, sub_117dca0, sub_1180360, sub_11f2be0, sub_120f9e0, sub_1217a80, sub_1217f70, sub_c43ed0, sub_ea3d20
   ... +2 more
   ref: Set_State_Camp_Playground
*/
void Set_State_Camp_Playground_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217700ULL || rel >= 0x1217a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217a80 size=1264 callers=1 calls=9
   calls: sub_113daf0, sub_115f020, sub_11726b0, sub_11726c0, sub_11731a0, sub_117dca0, sub_11b2e00, sub_11f2be0, sub_967240
*/
void sub_1217a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217a80ULL || rel >= 0x1217f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01217f70 size=368 callers=2 calls=4
   calls: sub_115bfa0, sub_115bfc0, sub_11b2a40, sub_11f2be0
*/
void sub_1217f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1217f70ULL || rel >= 0x12180e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012180e0 size=256 callers=0 calls=1
   calls: sub_117dca0
*/
void sub_12180e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12180e0ULL || rel >= 0x12181e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012181e0 size=304 callers=0 calls=1
   calls: sub_121f910
*/
void sub_12181e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12181e0ULL || rel >= 0x1218310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01218310 size=7600 callers=0 calls=44
   calls: Play_Camp_Switching_Toy, f_33s_fff, sub_1127d00, sub_1127fc0, sub_1128340, sub_11289e0, sub_1128af0, sub_1136450, sub_1136950, sub_1139720, sub_1139c30, sub_113a580
   ... +32 more
*/
void sub_1218310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1218310ULL || rel >= 0x121a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121a0c0 size=816 callers=1 calls=8
   calls: sub_1127fc0, sub_1179ec0, sub_1179ee0, sub_117dca0, sub_117faf0, sub_11802a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_121a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121a0c0ULL || rel >= 0x121a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121a3f0 size=1936 callers=1 calls=10
   calls: sub_1136950, sub_1139710, sub_1139720, sub_113a8c0, sub_113a990, sub_1157ef0, sub_115b4a0, sub_117dca0, sub_11f2be0, sub_bf05e0
*/
void sub_121a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121a3f0ULL || rel >= 0x121ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121ab80 size=240 callers=1 calls=8
   calls: Play_Camp_Pass_Ball, sub_1128340, sub_1172950, sub_117dca0, sub_11b2a40, sub_11b2f90, sub_121cfc0, sub_121d3b0
*/
void sub_121ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121ab80ULL || rel >= 0x121ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121ac70 size=1008 callers=1 calls=20
   calls: sub_1128440, sub_11284a0, sub_11285b0, sub_1128e40, sub_115bbd0, sub_1172950, sub_11729c0, sub_1173990, sub_117bf10, sub_117bf20, sub_117bfa0, sub_117bfb0
   ... +8 more
   ref: Play_Camp_Switching_Toy
*/
void Play_Camp_Switching_Toy(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121ac70ULL || rel >= 0x121b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121b060 size=5088 callers=1 calls=25
   calls: Play_Camp_Throw_Ball_2, sub_11284a0, sub_11285b0, sub_11286c0, sub_11287d0, sub_1172690, sub_1172730, sub_1172770, sub_1172950, sub_1172c40, sub_1172d30, sub_1173090
   ... +13 more
*/
void sub_121b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121b060ULL || rel >= 0x121c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121c440 size=160 callers=5 calls=6
   calls: sub_1172950, sub_1172e40, sub_11730e0, sub_117dca0, sub_11b2a40, sub_11b2ba0
*/
void sub_121c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121c440ULL || rel >= 0x121c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121c4e0 size=592 callers=2 calls=8
   calls: sub_1128e40, sub_115b4a0, sub_115bd30, sub_1172690, sub_1172eb0, sub_1173990, sub_117dca0, sub_11f2be0
   ref: Play_Camp_Throw_Ball
*/
void Play_Camp_Throw_Ball_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121c4e0ULL || rel >= 0x121c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121c730 size=560 callers=1 calls=1
   calls: sub_972c70
*/
void sub_121c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121c730ULL || rel >= 0x121c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121c960 size=320 callers=1 calls=6
   calls: sub_11284a0, sub_11285b0, sub_117dca0, sub_11b2a40, sub_11b2ba0, sub_11b2ec0
*/
void sub_121c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121c960ULL || rel >= 0x121caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121caa0 size=1312 callers=1 calls=22
   calls: sub_1108730, sub_1127d00, sub_1128440, sub_1128e40, sub_1134fa0, sub_1136950, sub_1136c10, sub_1139720, sub_113a990, sub_113a9a0, sub_115b710, sub_115c4c0
   ... +10 more
   ref: Play_Camp_Pass_Ball
*/
void Play_Camp_Pass_Ball(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121caa0ULL || rel >= 0x121cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121cfc0 size=1008 callers=1 calls=9
   calls: sub_1136f20, sub_1139710, sub_113a8c0, sub_1160e20, sub_11611e0, sub_117dca0, sub_121d3b0, sub_1220790, sub_967240
*/
void sub_121cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121cfc0ULL || rel >= 0x121d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121d3b0 size=1808 callers=2 calls=15
   calls: Play_Camp_Call, sub_1136390, sub_1136450, sub_1138c70, sub_1139710, sub_1139720, sub_113a580, sub_113a8c0, sub_1157ef0, sub_1160e20, sub_117dca0, sub_11f2be0
   ... +3 more
*/
void sub_121d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121d3b0ULL || rel >= 0x121dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121dac0 size=448 callers=0 calls=7
   calls: sub_1136390, sub_1136450, sub_1138c70, sub_113a530, sub_115ace0, sub_11f2be0, sub_967240
*/
void sub_121dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121dac0ULL || rel >= 0x121dc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121dc80 size=256 callers=0 calls=7
   calls: sub_117dca0, sub_1180360, sub_120f9e0, sub_121c440, sub_ea3d20, sub_ea5de0, sub_ea5e60
*/
void sub_121dc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121dc80ULL || rel >= 0x121dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121dd80 size=224 callers=0 calls=3
   calls: sub_1179ec0, sub_117dca0, sub_117faf0
*/
void sub_121dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121dd80ULL || rel >= 0x121de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121de60 size=16 callers=0 calls=0
*/
void sub_121de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121de60ULL || rel >= 0x121de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121de70 size=320 callers=0 calls=2
   calls: sub_1157ef0, sub_117dca0
*/
void sub_121de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121de70ULL || rel >= 0x121dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121dfb0 size=16 callers=0 calls=0
*/
void sub_121dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121dfb0ULL || rel >= 0x121dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121dfc0 size=304 callers=0 calls=2
   calls: sub_1157ef0, sub_117dca0
*/
void sub_121dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121dfc0ULL || rel >= 0x121e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e0f0 size=16 callers=0 calls=0
*/
void sub_121e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e0f0ULL || rel >= 0x121e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e100 size=464 callers=0 calls=0
*/
void sub_121e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e100ULL || rel >= 0x121e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e2d0 size=16 callers=0 calls=0
*/
void sub_121e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e2d0ULL || rel >= 0x121e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e2e0 size=16 callers=0 calls=0
*/
void sub_121e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e2e0ULL || rel >= 0x121e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e2f0 size=16 callers=0 calls=0
*/
void sub_121e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e2f0ULL || rel >= 0x121e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e300 size=16 callers=0 calls=0
*/
void sub_121e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e300ULL || rel >= 0x121e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e310 size=16 callers=0 calls=0
*/
void sub_121e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e310ULL || rel >= 0x121e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e320 size=16 callers=0 calls=0
*/
void sub_121e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e320ULL || rel >= 0x121e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e330 size=16 callers=0 calls=0
*/
void sub_121e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e330ULL || rel >= 0x121e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e340 size=16 callers=0 calls=0
*/
void sub_121e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e340ULL || rel >= 0x121e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e350 size=16 callers=0 calls=0
*/
void sub_121e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e350ULL || rel >= 0x121e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e360 size=16 callers=0 calls=0
*/
void sub_121e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e360ULL || rel >= 0x121e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e370 size=16 callers=0 calls=0
*/
void sub_121e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e370ULL || rel >= 0x121e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e380 size=16 callers=0 calls=0
*/
void sub_121e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e380ULL || rel >= 0x121e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e390 size=160 callers=0 calls=0
*/
void sub_121e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e390ULL || rel >= 0x121e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e430 size=16 callers=0 calls=0
*/
void sub_121e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e430ULL || rel >= 0x121e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e440 size=16 callers=0 calls=0
*/
void sub_121e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e440ULL || rel >= 0x121e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e450 size=16 callers=0 calls=0
*/
void sub_121e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e450ULL || rel >= 0x121e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e460 size=304 callers=0 calls=0
*/
void sub_121e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e460ULL || rel >= 0x121e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e590 size=336 callers=1 calls=1
   calls: sub_121e6e0
*/
void sub_121e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e590ULL || rel >= 0x121e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121e6e0 size=2288 callers=1 calls=4
   calls: sub_121efd0, sub_121f1d0, sub_121f3d0, sub_121f5e0
*/
void sub_121e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e6e0ULL || rel >= 0x121efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121efd0 size=512 callers=2 calls=0
*/
void sub_121efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121efd0ULL || rel >= 0x121f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121f1d0 size=512 callers=2 calls=0
*/
void sub_121f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121f1d0ULL || rel >= 0x121f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121f3d0 size=528 callers=2 calls=0
*/
void sub_121f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121f3d0ULL || rel >= 0x121f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121f5e0 size=528 callers=2 calls=0
*/
void sub_121f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121f5e0ULL || rel >= 0x121f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121f7f0 size=208 callers=0 calls=0
*/
void sub_121f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121f7f0ULL || rel >= 0x121f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121f8c0 size=16 callers=0 calls=0
*/
void sub_121f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121f8c0ULL || rel >= 0x121f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121f8d0 size=32 callers=0 calls=0
*/
void sub_121f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121f8d0ULL || rel >= 0x121f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121f8f0 size=32 callers=0 calls=0
*/
void sub_121f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121f8f0ULL || rel >= 0x121f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121f910 size=1248 callers=1 calls=4
   calls: sub_121efd0, sub_121f1d0, sub_121f3d0, sub_121f5e0
*/
void sub_121f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121f910ULL || rel >= 0x121fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121fdf0 size=144 callers=0 calls=4
   calls: sub_1173020, sub_1174cb0, sub_117bfa0, sub_1278bb0
*/
void sub_121fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121fdf0ULL || rel >= 0x121fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121fe80 size=16 callers=0 calls=0
*/
void sub_121fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121fe80ULL || rel >= 0x121fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121fe90 size=16 callers=0 calls=0
*/
void sub_121fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121fe90ULL || rel >= 0x121fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121fea0 size=16 callers=0 calls=0
*/
void sub_121fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121fea0ULL || rel >= 0x121feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121feb0 size=16 callers=0 calls=0
*/
void sub_121feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121feb0ULL || rel >= 0x121fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121fec0 size=16 callers=0 calls=0
*/
void sub_121fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121fec0ULL || rel >= 0x121fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121fed0 size=16 callers=0 calls=0
*/
void sub_121fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121fed0ULL || rel >= 0x121fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121fee0 size=16 callers=0 calls=0
*/
void sub_121fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121fee0ULL || rel >= 0x121fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

