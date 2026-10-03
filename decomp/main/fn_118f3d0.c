/* main functions 0118f3d0..011a70f0 (147 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0118f3d0 size=16 callers=0 calls=0
*/
void sub_118f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f3d0ULL || rel >= 0x118f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f3e0 size=16 callers=0 calls=0
*/
void sub_118f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f3e0ULL || rel >= 0x118f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f3f0 size=128 callers=0 calls=2
   calls: sub_68d710, sub_68d940
   ref: Origin
*/
void Origin_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f3f0ULL || rel >= 0x118f470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f470 size=16 callers=0 calls=0
*/
void sub_118f470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f470ULL || rel >= 0x118f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f480 size=16 callers=0 calls=0
*/
void sub_118f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f480ULL || rel >= 0x118f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f490 size=16 callers=0 calls=0
*/
void sub_118f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f490ULL || rel >= 0x118f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f4a0 size=240 callers=4 calls=1
   calls: sub_11716f0
*/
void sub_118f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f4a0ULL || rel >= 0x118f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f590 size=224 callers=1 calls=1
   calls: sub_1133c90
*/
void sub_118f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f590ULL || rel >= 0x118f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f670 size=240 callers=1 calls=1
   calls: sub_11a6870
*/
void sub_118f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f670ULL || rel >= 0x118f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f760 size=240 callers=1 calls=1
   calls: sub_1192f40
*/
void sub_118f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f760ULL || rel >= 0x118f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f850 size=240 callers=1 calls=1
   calls: sub_119c630
*/
void sub_118f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f850ULL || rel >= 0x118f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f940 size=240 callers=1 calls=1
   calls: sub_11a0f10
*/
void sub_118f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f940ULL || rel >= 0x118fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118fa30 size=240 callers=1 calls=1
   calls: sub_1199b90
*/
void sub_118fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118fa30ULL || rel >= 0x118fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118fb20 size=240 callers=1 calls=1
   calls: sub_11a9910
*/
void sub_118fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118fb20ULL || rel >= 0x118fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118fc10 size=240 callers=1 calls=1
   calls: sub_11a2e00
*/
void sub_118fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118fc10ULL || rel >= 0x118fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118fd00 size=240 callers=1 calls=1
   calls: sub_11b35d0
*/
void sub_118fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118fd00ULL || rel >= 0x118fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118fdf0 size=240 callers=1 calls=1
   calls: sub_119bb00
*/
void sub_118fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118fdf0ULL || rel >= 0x118fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118fee0 size=240 callers=1 calls=1
   calls: sub_11a4360
*/
void sub_118fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118fee0ULL || rel >= 0x118ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118ffd0 size=240 callers=1 calls=1
   calls: sub_11b8090
*/
void sub_118ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118ffd0ULL || rel >= 0x11900c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011900c0 size=240 callers=1 calls=1
   calls: sub_11b7240
*/
void sub_11900c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11900c0ULL || rel >= 0x11901b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011901b0 size=240 callers=1 calls=1
   calls: sub_119fdf0
*/
void sub_11901b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11901b0ULL || rel >= 0x11902a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011902a0 size=240 callers=1 calls=1
   calls: sub_119f190
*/
void sub_11902a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11902a0ULL || rel >= 0x1190390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190390 size=240 callers=1 calls=1
   calls: sub_11a1c40
*/
void sub_1190390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190390ULL || rel >= 0x1190480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190480 size=240 callers=1 calls=1
   calls: sub_11ac4b0
*/
void sub_1190480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190480ULL || rel >= 0x1190570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190570 size=224 callers=1 calls=1
   calls: sub_1129380
*/
void sub_1190570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190570ULL || rel >= 0x1190650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190650 size=288 callers=1 calls=1
   calls: sub_1197960
*/
void sub_1190650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190650ULL || rel >= 0x1190770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190770 size=272 callers=1 calls=2
   calls: sub_115a290, sub_5d99d0
*/
void sub_1190770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190770ULL || rel >= 0x1190880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190880 size=224 callers=3 calls=1
   calls: sub_11926e0
*/
void sub_1190880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190880ULL || rel >= 0x1190960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190960 size=224 callers=3 calls=1
   calls: sub_11b1dd0
*/
void sub_1190960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190960ULL || rel >= 0x1190a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190a40 size=144 callers=0 calls=3
   calls: sub_68d710, sub_68d910, sub_68d940
*/
void sub_1190a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190a40ULL || rel >= 0x1190ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190ad0 size=16 callers=0 calls=0
*/
void sub_1190ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190ad0ULL || rel >= 0x1190ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190ae0 size=16 callers=0 calls=0
*/
void sub_1190ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190ae0ULL || rel >= 0x1190af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190af0 size=16 callers=0 calls=0
*/
void sub_1190af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190af0ULL || rel >= 0x1190b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190b00 size=112 callers=0 calls=1
   calls: sub_68d710
   ref: Origin
*/
void Origin_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190b00ULL || rel >= 0x1190b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190b70 size=16 callers=0 calls=0
*/
void sub_1190b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190b70ULL || rel >= 0x1190b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190b80 size=16 callers=0 calls=0
*/
void sub_1190b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190b80ULL || rel >= 0x1190b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190b90 size=16 callers=0 calls=0
*/
void sub_1190b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190b90ULL || rel >= 0x1190ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190ba0 size=272 callers=1 calls=2
   calls: sub_115a290, sub_5d99d0
*/
void sub_1190ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190ba0ULL || rel >= 0x1190cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190cb0 size=240 callers=2 calls=1
   calls: sub_11a5c50
*/
void sub_1190cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190cb0ULL || rel >= 0x1190da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190da0 size=240 callers=1 calls=1
   calls: sub_11a5280
*/
void sub_1190da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190da0ULL || rel >= 0x1190e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190e90 size=240 callers=1 calls=1
   calls: sub_11b3c00
*/
void sub_1190e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190e90ULL || rel >= 0x1190f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01190f80 size=240 callers=1 calls=1
   calls: sub_11a8e50
*/
void sub_1190f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1190f80ULL || rel >= 0x1191070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191070 size=144 callers=0 calls=3
   calls: sub_68d710, sub_68d910, sub_68d940
*/
void sub_1191070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191070ULL || rel >= 0x1191100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191100 size=16 callers=0 calls=0
*/
void sub_1191100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191100ULL || rel >= 0x1191110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191110 size=16 callers=0 calls=0
*/
void sub_1191110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191110ULL || rel >= 0x1191120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191120 size=16 callers=0 calls=0
*/
void sub_1191120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191120ULL || rel >= 0x1191130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191130 size=112 callers=0 calls=1
   calls: sub_68d710
   ref: Origin
*/
void Origin_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191130ULL || rel >= 0x11911a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011911a0 size=16 callers=0 calls=0
*/
void sub_11911a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11911a0ULL || rel >= 0x11911b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011911b0 size=16 callers=0 calls=0
*/
void sub_11911b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11911b0ULL || rel >= 0x11911c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011911c0 size=16 callers=0 calls=0
*/
void sub_11911c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11911c0ULL || rel >= 0x11911d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011911d0 size=272 callers=1 calls=2
   calls: sub_115a510, sub_5d99d0
*/
void sub_11911d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11911d0ULL || rel >= 0x11912e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011912e0 size=128 callers=0 calls=2
   calls: sub_68d710, sub_68d940
   ref: Origin
*/
void Origin_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11912e0ULL || rel >= 0x1191360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191360 size=16 callers=0 calls=0
*/
void sub_1191360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191360ULL || rel >= 0x1191370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191370 size=16 callers=0 calls=0
*/
void sub_1191370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191370ULL || rel >= 0x1191380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191380 size=16 callers=0 calls=0
*/
void sub_1191380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191380ULL || rel >= 0x1191390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191390 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_1191390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191390ULL || rel >= 0x1191410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191410 size=128 callers=0 calls=2
   calls: sub_68d710, sub_68d940
   ref: Origin
*/
void Origin_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191410ULL || rel >= 0x1191490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191490 size=16 callers=0 calls=0
*/
void sub_1191490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191490ULL || rel >= 0x11914a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011914a0 size=16 callers=0 calls=0
*/
void sub_11914a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11914a0ULL || rel >= 0x11914b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011914b0 size=16 callers=0 calls=0
*/
void sub_11914b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11914b0ULL || rel >= 0x11914c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011914c0 size=272 callers=1 calls=2
   calls: sub_1174180, sub_5d99d0
*/
void sub_11914c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11914c0ULL || rel >= 0x11915d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011915d0 size=240 callers=1 calls=1
   calls: sub_119ea90
*/
void sub_11915d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11915d0ULL || rel >= 0x11916c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011916c0 size=240 callers=1 calls=1
   calls: sub_1198a70
*/
void sub_11916c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11916c0ULL || rel >= 0x11917b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011917b0 size=240 callers=1 calls=1
   calls: sub_1198240
*/
void sub_11917b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11917b0ULL || rel >= 0x11918a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011918a0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_11918a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11918a0ULL || rel >= 0x1191920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191920 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_1191920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191920ULL || rel >= 0x11919a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011919a0 size=512 callers=1 calls=3
   calls: sub_1191ba0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11919a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11919a0ULL || rel >= 0x1191ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191ba0 size=304 callers=2 calls=1
   calls: sub_607750
*/
void sub_1191ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191ba0ULL || rel >= 0x1191cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191cd0 size=48 callers=0 calls=1
   calls: sub_1164130
*/
void sub_1191cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191cd0ULL || rel >= 0x1191d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191d00 size=16 callers=0 calls=0
*/
void sub_1191d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191d00ULL || rel >= 0x1191d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191d10 size=16 callers=0 calls=0
*/
void sub_1191d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191d10ULL || rel >= 0x1191d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191d20 size=16 callers=0 calls=0
*/
void sub_1191d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191d20ULL || rel >= 0x1191d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191d30 size=336 callers=6 calls=3
   calls: sub_1191e80, sub_5cf8e0, sub_5cf8f0
*/
void sub_1191d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191d30ULL || rel >= 0x1191e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191e80 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_1191e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191e80ULL || rel >= 0x1191f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01191f70 size=224 callers=3 calls=1
   calls: sub_11b53d0
*/
void sub_1191f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1191f70ULL || rel >= 0x1192050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192050 size=256 callers=1 calls=1
   calls: sub_68d230
*/
void sub_1192050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192050ULL || rel >= 0x1192150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192150 size=64 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_1192150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192150ULL || rel >= 0x1192190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192190 size=64 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_1192190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192190ULL || rel >= 0x11921d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011921d0 size=112 callers=0 calls=1
   calls: sub_1192560
*/
void sub_11921d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11921d0ULL || rel >= 0x1192240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192240 size=80 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_1192240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192240ULL || rel >= 0x1192290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192290 size=80 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_1192290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192290ULL || rel >= 0x11922e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011922e0 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_11922e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11922e0ULL || rel >= 0x11923d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011923d0 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_11923d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11923d0ULL || rel >= 0x11924c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011924c0 size=80 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11924c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11924c0ULL || rel >= 0x1192510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192510 size=80 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_1192510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192510ULL || rel >= 0x1192560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192560 size=176 callers=1 calls=1
   calls: sub_607750
*/
void sub_1192560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192560ULL || rel >= 0x1192610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192610 size=208 callers=0 calls=0
*/
void sub_1192610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192610ULL || rel >= 0x11926e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011926e0 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11926e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11926e0ULL || rel >= 0x1192720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192720 size=256 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_1192720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192720ULL || rel >= 0x1192820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192820 size=240 callers=0 calls=0
*/
void sub_1192820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192820ULL || rel >= 0x1192910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192910 size=112 callers=0 calls=1
   calls: sub_113e1f0
*/
void sub_1192910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192910ULL || rel >= 0x1192980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192980 size=240 callers=0 calls=0
*/
void sub_1192980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192980ULL || rel >= 0x1192a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192a70 size=240 callers=0 calls=0
*/
void sub_1192a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192a70ULL || rel >= 0x1192b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192b60 size=112 callers=0 calls=1
   calls: sub_113e1f0
*/
void sub_1192b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192b60ULL || rel >= 0x1192bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192bd0 size=112 callers=0 calls=1
   calls: sub_113e1f0
*/
void sub_1192bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192bd0ULL || rel >= 0x1192c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192c40 size=240 callers=0 calls=0
*/
void sub_1192c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192c40ULL || rel >= 0x1192d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192d30 size=240 callers=0 calls=0
*/
void sub_1192d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192d30ULL || rel >= 0x1192e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192e20 size=16 callers=0 calls=0
*/
void sub_1192e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192e20ULL || rel >= 0x1192e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192e30 size=16 callers=0 calls=0
*/
void sub_1192e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192e30ULL || rel >= 0x1192e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192e40 size=16 callers=0 calls=0
*/
void sub_1192e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192e40ULL || rel >= 0x1192e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192e50 size=16 callers=0 calls=0
*/
void sub_1192e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192e50ULL || rel >= 0x1192e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192e60 size=16 callers=0 calls=0
*/
void sub_1192e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192e60ULL || rel >= 0x1192e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192e70 size=16 callers=0 calls=0
*/
void sub_1192e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192e70ULL || rel >= 0x1192e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192e80 size=16 callers=0 calls=0
*/
void sub_1192e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192e80ULL || rel >= 0x1192e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192e90 size=16 callers=0 calls=0
*/
void sub_1192e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192e90ULL || rel >= 0x1192ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192ea0 size=160 callers=0 calls=0
*/
void sub_1192ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192ea0ULL || rel >= 0x1192f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192f40 size=128 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_1192f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192f40ULL || rel >= 0x1192fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01192fc0 size=1504 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_1192fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1192fc0ULL || rel >= 0x11935a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011935a0 size=192 callers=0 calls=3
   calls: sub_1136fc0, sub_11383d0, sub_1197110
*/
void sub_11935a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11935a0ULL || rel >= 0x1193660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01193660 size=624 callers=0 calls=13
   calls: Play_PV__03d__02d__02d, sub_1108730, sub_1108740, sub_1136c20, sub_1136fc0, sub_1137490, sub_11383d0, sub_116f1d0, sub_1197110, sub_1197210, sub_1197470, sub_762930
   ... +1 more
*/
void sub_1193660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1193660ULL || rel >= 0x11938d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011938d0 size=16 callers=0 calls=0
*/
void sub_11938d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11938d0ULL || rel >= 0x11938e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011938e0 size=928 callers=0 calls=19
   calls: Play_PV__03d__02d__02d, sub_1108730, sub_1108740, sub_1129060, sub_11364c0, sub_1136c20, sub_1137490, sub_1164ee0, sub_116cc60, sub_116d920, sub_116f1d0, sub_1197110
   ... +7 more
*/
void sub_11938e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11938e0ULL || rel >= 0x1193c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01193c80 size=224 callers=0 calls=8
   calls: sub_1136140, sub_1136fc0, sub_1137070, sub_116d920, sub_1195160, sub_1197110, sub_11971b0, sub_11973d0
*/
void sub_1193c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1193c80ULL || rel >= 0x1193d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01193d60 size=64 callers=0 calls=3
   calls: sub_1137070, sub_113e980, sub_1197110
*/
void sub_1193d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1193d60ULL || rel >= 0x1193da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01193da0 size=736 callers=0 calls=14
   calls: sub_11274b0, sub_1132310, sub_11364c0, sub_1137070, sub_11635b0, sub_116cc60, sub_116d920, sub_1170840, sub_1197110, sub_11971b0, sub_11971e0, sub_11973d0
   ... +2 more
*/
void sub_1193da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1193da0ULL || rel >= 0x1194080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01194080 size=1232 callers=0 calls=27
   calls: Play_UI_Emotional_Sleep, sub_1108720, sub_1108740, sub_1127360, sub_1134fa0, sub_1136f20, sub_1136fc0, sub_1137070, sub_113e980, sub_11441c0, sub_115bb40, sub_115bbb0
   ... +15 more
*/
void sub_1194080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1194080ULL || rel >= 0x1194550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01194550 size=720 callers=0 calls=21
   calls: sub_1127360, sub_11274b0, sub_1131f60, sub_1136450, sub_1136fc0, sub_1139c30, sub_115bbb0, sub_115bbc0, sub_116cc60, sub_116cce0, sub_116d920, sub_116e430
   ... +9 more
*/
void sub_1194550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1194550ULL || rel >= 0x1194820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01194820 size=544 callers=0 calls=8
   calls: app_state, sub_1113c90, sub_1163060, sub_116f1c0, sub_1185b30, sub_11971b0, sub_1197210, sub_1c0
*/
void sub_1194820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1194820ULL || rel >= 0x1194a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01194a40 size=416 callers=0 calls=9
   calls: sub_1108740, sub_1109190, sub_11091d0, sub_1134fa0, sub_1137490, sub_11397d0, sub_116f1d0, sub_1197110, sub_1197210
*/
void sub_1194a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1194a40ULL || rel >= 0x1194be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01194be0 size=176 callers=0 calls=3
   calls: sub_1136fc0, sub_11383d0, sub_1197110
*/
void sub_1194be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1194be0ULL || rel >= 0x1194c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01194c90 size=16 callers=0 calls=0
*/
void sub_1194c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1194c90ULL || rel >= 0x1194ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01194ca0 size=800 callers=0 calls=14
   calls: Play_UI_Emotional_Awake, sub_11274b0, sub_1132280, sub_1139a80, sub_113a1a0, sub_11611d0, sub_116cd90, sub_116f1c0, sub_1197110, sub_11971b0, sub_1197210, sub_1306f20
   ... +2 more
*/
void sub_1194ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1194ca0ULL || rel >= 0x1194fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01194fc0 size=304 callers=0 calls=6
   calls: fi_move_speed, sub_11971b0, sub_11973d0, sub_c43ed0, sub_c44310, sub_c44410
*/
void sub_1194fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1194fc0ULL || rel >= 0x11950f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011950f0 size=112 callers=0 calls=4
   calls: sub_11383d0, sub_113a1b0, sub_11611d0, sub_1197110
*/
void sub_11950f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11950f0ULL || rel >= 0x1195160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01195160 size=2112 callers=1 calls=13
   calls: sub_1113c90, sub_1127360, sub_112e830, sub_112ea00, sub_11364b0, sub_1136fc0, sub_115b4a0, sub_11635b0, sub_1169740, sub_1176e00, sub_11969d0, sub_1197110
   ... +1 more
*/
void sub_1195160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1195160ULL || rel >= 0x11959a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011959a0 size=480 callers=2 calls=7
   calls: sub_1108720, sub_112ea00, sub_115b870, sub_11706e0, sub_11971e0, sub_1197470, sub_bf0820
*/
void sub_11959a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11959a0ULL || rel >= 0x1195b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01195b80 size=64 callers=0 calls=0
*/
void sub_1195b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1195b80ULL || rel >= 0x1195bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01195bc0 size=512 callers=0 calls=9
   calls: sub_11274b0, sub_1132310, sub_116f1c0, sub_1170840, sub_1197110, sub_11971e0, sub_1197210, sub_1306f20, sub_967240
*/
void sub_1195bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1195bc0ULL || rel >= 0x1195dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01195dc0 size=1024 callers=0 calls=18
   calls: sub_1108740, sub_112ea00, sub_1134fa0, sub_1136fc0, sub_113a8c0, sub_1162de0, sub_11635b0, sub_1164130, sub_116d920, sub_116f1c0, sub_116f1d0, sub_1172950
   ... +6 more
*/
void sub_1195dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1195dc0ULL || rel >= 0x11961c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011961c0 size=16 callers=0 calls=0
*/
void sub_11961c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11961c0ULL || rel >= 0x11961d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011961d0 size=240 callers=0 calls=0
*/
void sub_11961d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11961d0ULL || rel >= 0x11962c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011962c0 size=112 callers=0 calls=1
   calls: sub_113e1f0
*/
void sub_11962c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11962c0ULL || rel >= 0x1196330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196330 size=240 callers=0 calls=0
*/
void sub_1196330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196330ULL || rel >= 0x1196420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196420 size=240 callers=0 calls=0
*/
void sub_1196420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196420ULL || rel >= 0x1196510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196510 size=112 callers=0 calls=1
   calls: sub_113e1f0
*/
void sub_1196510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196510ULL || rel >= 0x1196580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196580 size=112 callers=0 calls=1
   calls: sub_113e1f0
*/
void sub_1196580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196580ULL || rel >= 0x11965f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011965f0 size=240 callers=0 calls=0
*/
void sub_11965f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11965f0ULL || rel >= 0x11966e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011966e0 size=240 callers=0 calls=0
*/
void sub_11966e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11966e0ULL || rel >= 0x11967d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011967d0 size=32 callers=0 calls=0
*/
void sub_11967d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11967d0ULL || rel >= 0x11967f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011967f0 size=16 callers=0 calls=0
*/
void sub_11967f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11967f0ULL || rel >= 0x1196800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196800 size=32 callers=0 calls=0
*/
void sub_1196800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196800ULL || rel >= 0x1196820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196820 size=32 callers=0 calls=0
*/
void sub_1196820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196820ULL || rel >= 0x1196840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196840 size=320 callers=0 calls=4
   calls: sub_11611a0, sub_1197110, sub_967240, sub_bf05e0
*/
void sub_1196840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196840ULL || rel >= 0x1196980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196980 size=16 callers=0 calls=0
*/
void sub_1196980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196980ULL || rel >= 0x1196990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196990 size=16 callers=0 calls=0
*/
void sub_1196990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196990ULL || rel >= 0x11969a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011969a0 size=16 callers=0 calls=0
*/
void sub_11969a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11969a0ULL || rel >= 0x11969b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011969b0 size=16 callers=0 calls=0
*/
void sub_11969b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11969b0ULL || rel >= 0x11969c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011969c0 size=16 callers=0 calls=0
*/
void sub_11969c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11969c0ULL || rel >= 0x11969d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011969d0 size=1440 callers=1 calls=1
   calls: sub_972c70
*/
void sub_11969d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11969d0ULL || rel >= 0x1196f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196f70 size=48 callers=0 calls=0
*/
void sub_1196f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196f70ULL || rel >= 0x1196fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196fa0 size=48 callers=0 calls=0
*/
void sub_1196fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196fa0ULL || rel >= 0x1196fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01196fd0 size=208 callers=0 calls=0
*/
void sub_1196fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1196fd0ULL || rel >= 0x11970a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011970a0 size=16 callers=0 calls=0
*/
void sub_11970a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11970a0ULL || rel >= 0x11970b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011970b0 size=16 callers=0 calls=0
*/
void sub_11970b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11970b0ULL || rel >= 0x11970c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011970c0 size=16 callers=0 calls=0
*/
void sub_11970c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11970c0ULL || rel >= 0x11970d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011970d0 size=64 callers=1 calls=3
   calls: sub_11364b0, sub_1162eb0, sub_bf0730
*/
void sub_11970d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11970d0ULL || rel >= 0x1197110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197110 size=48 callers=230 calls=2
   calls: sub_1162eb0, sub_bf0730
*/
void sub_1197110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197110ULL || rel >= 0x1197140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197140 size=64 callers=3 calls=3
   calls: sub_11364b0, sub_1162eb0, sub_bf0730
*/
void sub_1197140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197140ULL || rel >= 0x1197180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197180 size=48 callers=18 calls=2
   calls: sub_1162eb0, sub_bf0730
*/
void sub_1197180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197180ULL || rel >= 0x11971b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011971b0 size=48 callers=101 calls=2
   calls: sub_1162eb0, sub_bf0730
*/
void sub_11971b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11971b0ULL || rel >= 0x11971e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011971e0 size=48 callers=26 calls=2
   calls: sub_1162eb0, sub_bf0730
*/
void sub_11971e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11971e0ULL || rel >= 0x1197210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197210 size=48 callers=58 calls=2
   calls: sub_1162eb0, sub_bf0730
*/
void sub_1197210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197210ULL || rel >= 0x1197240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197240 size=176 callers=2 calls=3
   calls: sub_1136c50, sub_1162eb0, sub_bf0730
*/
void sub_1197240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197240ULL || rel >= 0x11972f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011972f0 size=176 callers=4 calls=3
   calls: sub_1136ce0, sub_1162eb0, sub_bf0730
*/
void sub_11972f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11972f0ULL || rel >= 0x11973a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011973a0 size=48 callers=8 calls=2
   calls: sub_1162eb0, sub_bf0730
*/
void sub_11973a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11973a0ULL || rel >= 0x11973d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011973d0 size=80 callers=23 calls=2
   calls: sub_1162eb0, sub_bf0730
*/
void sub_11973d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11973d0ULL || rel >= 0x1197420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197420 size=80 callers=5 calls=2
   calls: sub_1162eb0, sub_bf0730
*/
void sub_1197420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197420ULL || rel >= 0x1197470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197470 size=64 callers=40 calls=3
   calls: sub_1134fa0, sub_1162eb0, sub_bf0730
*/
void sub_1197470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197470ULL || rel >= 0x11974b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011974b0 size=112 callers=1 calls=1
   calls: sub_1197960
*/
void sub_11974b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11974b0ULL || rel >= 0x1197520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197520 size=368 callers=0 calls=2
   calls: sub_11782b0, sub_967240
*/
void sub_1197520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197520ULL || rel >= 0x1197690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197690 size=288 callers=0 calls=0
*/
void sub_1197690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197690ULL || rel >= 0x11977b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011977b0 size=16 callers=0 calls=0
*/
void sub_11977b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11977b0ULL || rel >= 0x11977c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011977c0 size=16 callers=0 calls=0
*/
void sub_11977c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11977c0ULL || rel >= 0x11977d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011977d0 size=16 callers=0 calls=0
*/
void sub_11977d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11977d0ULL || rel >= 0x11977e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011977e0 size=16 callers=0 calls=0
*/
void sub_11977e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11977e0ULL || rel >= 0x11977f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011977f0 size=16 callers=0 calls=0
*/
void sub_11977f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11977f0ULL || rel >= 0x1197800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197800 size=16 callers=0 calls=0
*/
void sub_1197800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197800ULL || rel >= 0x1197810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197810 size=16 callers=0 calls=0
*/
void sub_1197810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197810ULL || rel >= 0x1197820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197820 size=16 callers=0 calls=0
*/
void sub_1197820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197820ULL || rel >= 0x1197830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197830 size=304 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1197830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197830ULL || rel >= 0x1197960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197960 size=96 callers=5 calls=1
   calls: sub_1178a90
*/
void sub_1197960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197960ULL || rel >= 0x11979c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011979c0 size=368 callers=0 calls=2
   calls: sub_1178000, sub_967240
*/
void sub_11979c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11979c0ULL || rel >= 0x1197b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197b30 size=64 callers=0 calls=2
   calls: player, sub_1178ea0
*/
void sub_1197b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197b30ULL || rel >= 0x1197b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197b70 size=832 callers=1 calls=9
   calls: sub_115f260, sub_1164020, sub_11640a0, sub_1164120, sub_1164140, sub_1178c90, sub_5d99d0, sub_967240, sub_b44bb0
   ref: player
*/
void player(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197b70ULL || rel >= 0x1197eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01197eb0 size=480 callers=0 calls=7
   calls: sub_115f260, sub_1164020, sub_11640a0, sub_1164120, sub_1164140, sub_5d99d0, sub_967240
   ref: player
*/
void player_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1197eb0ULL || rel >= 0x1198090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198090 size=16 callers=0 calls=0
*/
void sub_1198090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198090ULL || rel >= 0x11980a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011980a0 size=16 callers=0 calls=0
*/
void sub_11980a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11980a0ULL || rel >= 0x11980b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011980b0 size=16 callers=0 calls=0
*/
void sub_11980b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11980b0ULL || rel >= 0x11980c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011980c0 size=16 callers=0 calls=0
*/
void sub_11980c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11980c0ULL || rel >= 0x11980d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011980d0 size=16 callers=0 calls=0
*/
void sub_11980d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11980d0ULL || rel >= 0x11980e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011980e0 size=16 callers=0 calls=0
*/
void sub_11980e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11980e0ULL || rel >= 0x11980f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011980f0 size=16 callers=0 calls=0
*/
void sub_11980f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11980f0ULL || rel >= 0x1198100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198100 size=16 callers=0 calls=0
*/
void sub_1198100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198100ULL || rel >= 0x1198110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198110 size=304 callers=2 calls=1
   calls: sub_607750
*/
void sub_1198110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198110ULL || rel >= 0x1198240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198240 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_1198240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198240ULL || rel >= 0x1198280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198280 size=160 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_1198280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198280ULL || rel >= 0x1198320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198320 size=208 callers=0 calls=4
   calls: sub_1162eb0, sub_1163770, sub_1174350, sub_1198980
*/
void sub_1198320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198320ULL || rel >= 0x11983f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011983f0 size=96 callers=0 calls=3
   calls: sub_11274b0, sub_1131f60, sub_11633e0
*/
void sub_11983f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11983f0ULL || rel >= 0x1198450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198450 size=16 callers=0 calls=0
*/
void sub_1198450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198450ULL || rel >= 0x1198460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198460 size=240 callers=0 calls=0
*/
void sub_1198460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198460ULL || rel >= 0x1198550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198550 size=240 callers=0 calls=0
*/
void sub_1198550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198550ULL || rel >= 0x1198640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198640 size=240 callers=0 calls=0
*/
void sub_1198640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198640ULL || rel >= 0x1198730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198730 size=240 callers=0 calls=0
*/
void sub_1198730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198730ULL || rel >= 0x1198820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198820 size=240 callers=0 calls=0
*/
void sub_1198820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198820ULL || rel >= 0x1198910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198910 size=32 callers=0 calls=0
*/
void sub_1198910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198910ULL || rel >= 0x1198930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198930 size=16 callers=0 calls=0
*/
void sub_1198930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198930ULL || rel >= 0x1198940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198940 size=32 callers=0 calls=0
*/
void sub_1198940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198940ULL || rel >= 0x1198960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198960 size=32 callers=0 calls=0
*/
void sub_1198960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198960ULL || rel >= 0x1198980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198980 size=240 callers=6 calls=1
   calls: sub_bf0820
*/
void sub_1198980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198980ULL || rel >= 0x1198a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198a70 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_1198a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198a70ULL || rel >= 0x1198ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198ab0 size=160 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_1198ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198ab0ULL || rel >= 0x1198b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01198b50 size=2672 callers=0 calls=21
   calls: sub_1129180, sub_1162eb0, sub_11635b0, sub_1163690, sub_1163860, sub_1163930, sub_1164e40, sub_1174460, sub_1174480, sub_1174a00, sub_1174b20, sub_1174cb0
   ... +9 more
*/
void sub_1198b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1198b50ULL || rel >= 0x11995c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011995c0 size=176 callers=0 calls=7
   calls: sub_112e580, sub_1162eb0, sub_1174460, sub_1174480, sub_1174cb0, sub_1176260, sub_1198980
*/
void sub_11995c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11995c0ULL || rel >= 0x1199670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199670 size=240 callers=0 calls=0
*/
void sub_1199670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199670ULL || rel >= 0x1199760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199760 size=240 callers=0 calls=0
*/
void sub_1199760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199760ULL || rel >= 0x1199850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199850 size=240 callers=0 calls=0
*/
void sub_1199850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199850ULL || rel >= 0x1199940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199940 size=240 callers=0 calls=0
*/
void sub_1199940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199940ULL || rel >= 0x1199a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199a30 size=240 callers=0 calls=0
*/
void sub_1199a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199a30ULL || rel >= 0x1199b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199b20 size=32 callers=0 calls=0
*/
void sub_1199b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199b20ULL || rel >= 0x1199b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199b40 size=16 callers=0 calls=0
*/
void sub_1199b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199b40ULL || rel >= 0x1199b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199b50 size=32 callers=0 calls=0
*/
void sub_1199b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199b50ULL || rel >= 0x1199b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199b70 size=32 callers=0 calls=0
*/
void sub_1199b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199b70ULL || rel >= 0x1199b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199b90 size=112 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_1199b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199b90ULL || rel >= 0x1199c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199c00 size=976 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_1199c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199c00ULL || rel >= 0x1199fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01199fd0 size=528 callers=0 calls=8
   calls: sub_113a4d0, sub_11611d0, sub_1165dc0, sub_1166030, sub_1167780, sub_1167c30, sub_1167c40, sub_1197110
*/
void sub_1199fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1199fd0ULL || rel >= 0x119a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119a1e0 size=336 callers=0 calls=10
   calls: sub_112ea00, sub_11364c0, sub_1137490, sub_113a4d0, sub_1167c10, sub_116cc60, sub_116d920, sub_1197110, sub_11971b0, sub_11973d0
*/
void sub_119a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119a1e0ULL || rel >= 0x119a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119a330 size=336 callers=0 calls=9
   calls: sub_113a4d0, sub_11635b0, sub_116c3e0, sub_116cc60, sub_116d920, sub_1197110, sub_11971b0, sub_1197420, sub_972c70
*/
void sub_119a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119a330ULL || rel >= 0x119a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119a480 size=720 callers=0 calls=12
   calls: sub_113a4d0, sub_113a540, sub_11447b0, sub_1160e20, sub_1165dc0, sub_1165de0, sub_11676c0, sub_1167780, sub_116d900, sub_1197110, sub_11971b0, sub_11973d0
*/
void sub_119a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119a480ULL || rel >= 0x119a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119a750 size=320 callers=0 calls=6
   calls: sub_113a4d0, sub_1160e20, sub_1163060, sub_1165dc0, sub_1165de0, sub_1197110
*/
void sub_119a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119a750ULL || rel >= 0x119a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119a890 size=688 callers=0 calls=13
   calls: sub_1108980, sub_11274b0, sub_1129060, sub_1131f60, sub_1134fa0, sub_113a4d0, sub_11633e0, sub_1167780, sub_116f1c0, sub_116f1d0, sub_1197110, sub_1197210
   ... +1 more
   ref: Play_Camp_Rush
   ref: @Play_Camp_Race
*/
void Play_Camp_Rush(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119a890ULL || rel >= 0x119ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ab40 size=576 callers=0 calls=10
   calls: sub_113a4d0, sub_11635b0, sub_1165dc0, sub_11676c0, sub_1167780, sub_116d920, sub_1197110, sub_11971b0, sub_1197420, sub_972c70
*/
void sub_119ab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ab40ULL || rel >= 0x119ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ad80 size=464 callers=0 calls=12
   calls: sub_11274b0, sub_1132280, sub_113a4d0, sub_113e980, sub_11633e0, sub_116c3e0, sub_116f1c0, sub_1197110, sub_11971b0, sub_1197210, sub_119b370, sub_1306f20
*/
void sub_119ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ad80ULL || rel >= 0x119af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119af50 size=496 callers=0 calls=10
   calls: sub_113a4d0, sub_113a540, sub_1160e20, sub_1165dc0, sub_1165de0, sub_11676c0, sub_1167780, sub_1167c10, sub_1197110, sub_119b370
*/
void sub_119af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119af50ULL || rel >= 0x119b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b140 size=272 callers=0 calls=6
   calls: sub_11274b0, sub_1132280, sub_11611d0, sub_11633e0, sub_1197110, sub_1306f20
*/
void sub_119b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b140ULL || rel >= 0x119b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b250 size=32 callers=0 calls=1
   calls: sub_1197110
*/
void sub_119b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b250ULL || rel >= 0x119b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b270 size=256 callers=0 calls=6
   calls: sub_11274b0, sub_1132280, sub_11633e0, sub_116c3e0, sub_11971b0, sub_1306f20
*/
void sub_119b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b270ULL || rel >= 0x119b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b370 size=352 callers=2 calls=8
   calls: sub_113a4d0, sub_113e530, sub_1167c10, sub_1169730, sub_116d920, sub_1197110, sub_11971b0, sub_11973d0
*/
void sub_119b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b370ULL || rel >= 0x119b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b4d0 size=240 callers=0 calls=0
*/
void sub_119b4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b4d0ULL || rel >= 0x119b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b5c0 size=240 callers=0 calls=0
*/
void sub_119b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b5c0ULL || rel >= 0x119b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b6b0 size=240 callers=0 calls=0
*/
void sub_119b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b6b0ULL || rel >= 0x119b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b7a0 size=240 callers=0 calls=0
*/
void sub_119b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b7a0ULL || rel >= 0x119b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b890 size=240 callers=0 calls=0
*/
void sub_119b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b890ULL || rel >= 0x119b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b980 size=32 callers=0 calls=0
*/
void sub_119b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b980ULL || rel >= 0x119b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b9a0 size=16 callers=0 calls=0
*/
void sub_119b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b9a0ULL || rel >= 0x119b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b9b0 size=32 callers=0 calls=0
*/
void sub_119b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b9b0ULL || rel >= 0x119b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b9d0 size=32 callers=0 calls=0
*/
void sub_119b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b9d0ULL || rel >= 0x119b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119b9f0 size=16 callers=0 calls=0
*/
void sub_119b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b9f0ULL || rel >= 0x119ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ba00 size=16 callers=0 calls=0
*/
void sub_119ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ba00ULL || rel >= 0x119ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ba10 size=16 callers=0 calls=0
*/
void sub_119ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ba10ULL || rel >= 0x119ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ba20 size=16 callers=0 calls=0
*/
void sub_119ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ba20ULL || rel >= 0x119ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ba30 size=208 callers=0 calls=0
*/
void sub_119ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ba30ULL || rel >= 0x119bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119bb00 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_119bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119bb00ULL || rel >= 0x119bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119bb40 size=272 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_119bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119bb40ULL || rel >= 0x119bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119bc50 size=128 callers=0 calls=2
   calls: sub_1163060, sub_11635b0
*/
void sub_119bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119bc50ULL || rel >= 0x119bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119bcd0 size=560 callers=0 calls=2
   calls: sub_1163690, sub_1163860
*/
void sub_119bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119bcd0ULL || rel >= 0x119bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119bf00 size=144 callers=0 calls=7
   calls: sub_1108730, sub_1129060, sub_1164e60, sub_1197110, sub_1197470, sub_5cfad0, sub_765ab0
*/
void sub_119bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119bf00ULL || rel >= 0x119bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119bf90 size=384 callers=0 calls=8
   calls: fi_move_speed, sub_11274b0, sub_1132280, sub_11633e0, sub_116f1c0, sub_11971b0, sub_1197210, sub_1306f20
*/
void sub_119bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119bf90ULL || rel >= 0x119c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c110 size=240 callers=0 calls=0
*/
void sub_119c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c110ULL || rel >= 0x119c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c200 size=240 callers=0 calls=0
*/
void sub_119c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c200ULL || rel >= 0x119c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c2f0 size=240 callers=0 calls=0
*/
void sub_119c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c2f0ULL || rel >= 0x119c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c3e0 size=240 callers=0 calls=0
*/
void sub_119c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c3e0ULL || rel >= 0x119c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c4d0 size=240 callers=0 calls=0
*/
void sub_119c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c4d0ULL || rel >= 0x119c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c5c0 size=32 callers=0 calls=0
*/
void sub_119c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c5c0ULL || rel >= 0x119c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c5e0 size=16 callers=0 calls=0
*/
void sub_119c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c5e0ULL || rel >= 0x119c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c5f0 size=32 callers=0 calls=0
*/
void sub_119c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c5f0ULL || rel >= 0x119c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c610 size=32 callers=0 calls=0
*/
void sub_119c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c610ULL || rel >= 0x119c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c630 size=96 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_119c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c630ULL || rel >= 0x119c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c690 size=528 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_119c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c690ULL || rel >= 0x119c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119c8a0 size=432 callers=0 calls=7
   calls: sub_113a4d0, sub_11635b0, sub_1165dc0, sub_1165de0, sub_1197110, sub_967240, sub_972c70
*/
void sub_119c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119c8a0ULL || rel >= 0x119ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ca50 size=656 callers=0 calls=14
   calls: sub_112ea00, sub_1136250, sub_11364c0, sub_1136c50, sub_113a4d0, sub_113a540, sub_11447b0, sub_11635b0, sub_1167c10, sub_116cc60, sub_116d920, sub_1197110
   ... +2 more
*/
void sub_119ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ca50ULL || rel >= 0x119cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119cce0 size=224 callers=0 calls=4
   calls: sub_113a4d0, sub_113a540, sub_1163060, sub_1197110
*/
void sub_119cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119cce0ULL || rel >= 0x119cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119cdc0 size=816 callers=0 calls=9
   calls: sub_113a4d0, sub_113e980, sub_1161430, sub_1163060, sub_11659b0, sub_1165dc0, sub_1165de0, sub_1197110, sub_119d250
*/
void sub_119cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119cdc0ULL || rel >= 0x119d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d0f0 size=304 callers=0 calls=6
   calls: sub_113a4d0, sub_113e980, sub_1161430, sub_1163060, sub_1165de0, sub_1197110
*/
void sub_119d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d0f0ULL || rel >= 0x119d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d220 size=48 callers=0 calls=1
   calls: sub_1197110
*/
void sub_119d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d220ULL || rel >= 0x119d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d250 size=480 callers=1 calls=9
   calls: sub_1108960, sub_1134fa0, sub_113a4d0, sub_1165010, sub_1165610, sub_1165dc0, sub_1165de0, sub_1167c50, sub_1197110
*/
void sub_119d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d250ULL || rel >= 0x119d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d430 size=240 callers=0 calls=0
*/
void sub_119d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d430ULL || rel >= 0x119d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d520 size=240 callers=0 calls=0
*/
void sub_119d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d520ULL || rel >= 0x119d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d610 size=240 callers=0 calls=0
*/
void sub_119d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d610ULL || rel >= 0x119d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d700 size=240 callers=0 calls=0
*/
void sub_119d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d700ULL || rel >= 0x119d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d7f0 size=240 callers=0 calls=0
*/
void sub_119d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d7f0ULL || rel >= 0x119d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d8e0 size=32 callers=0 calls=0
*/
void sub_119d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d8e0ULL || rel >= 0x119d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d900 size=16 callers=0 calls=0
*/
void sub_119d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d900ULL || rel >= 0x119d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d910 size=32 callers=0 calls=0
*/
void sub_119d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d910ULL || rel >= 0x119d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d930 size=32 callers=0 calls=0
*/
void sub_119d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d930ULL || rel >= 0x119d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d950 size=16 callers=0 calls=0
*/
void sub_119d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d950ULL || rel >= 0x119d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d960 size=16 callers=0 calls=0
*/
void sub_119d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d960ULL || rel >= 0x119d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d970 size=16 callers=0 calls=0
*/
void sub_119d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d970ULL || rel >= 0x119d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d980 size=16 callers=0 calls=0
*/
void sub_119d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d980ULL || rel >= 0x119d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119d990 size=208 callers=0 calls=0
*/
void sub_119d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d990ULL || rel >= 0x119da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119da60 size=368 callers=0 calls=8
   calls: sub_11300b0, sub_1130370, sub_1164020, sub_11640a0, sub_1164120, sub_1164140, sub_11644f0, sub_119dbd0
*/
void sub_119da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119da60ULL || rel >= 0x119dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119dbd0 size=288 callers=1 calls=3
   calls: sub_115f260, sub_5d99d0, sub_967240
*/
void sub_119dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119dbd0ULL || rel >= 0x119dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119dcf0 size=384 callers=1 calls=2
   calls: sub_1130370, sub_614680
   ref: unit_obj_tent01_cloth01_01_01_bld
*/
void unit_obj_tent01_cloth01_01_01_bld_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119dcf0ULL || rel >= 0x119de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119de70 size=160 callers=1 calls=3
   calls: sub_112e750, sub_112e920, sub_972c70
*/
void sub_119de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119de70ULL || rel >= 0x119df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119df10 size=128 callers=0 calls=3
   calls: sub_112e750, sub_112e920, sub_972c70
*/
void sub_119df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119df10ULL || rel >= 0x119df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119df90 size=96 callers=0 calls=0
*/
void sub_119df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119df90ULL || rel >= 0x119dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119dff0 size=96 callers=0 calls=0
*/
void sub_119dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119dff0ULL || rel >= 0x119e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e050 size=16 callers=0 calls=0
*/
void sub_119e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e050ULL || rel >= 0x119e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e060 size=96 callers=0 calls=0
*/
void sub_119e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e060ULL || rel >= 0x119e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e0c0 size=96 callers=0 calls=0
*/
void sub_119e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e0c0ULL || rel >= 0x119e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e120 size=16 callers=0 calls=0
*/
void sub_119e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e120ULL || rel >= 0x119e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e130 size=16 callers=0 calls=0
*/
void sub_119e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e130ULL || rel >= 0x119e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e140 size=96 callers=0 calls=0
*/
void sub_119e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e140ULL || rel >= 0x119e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e1a0 size=96 callers=0 calls=0
*/
void sub_119e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e1a0ULL || rel >= 0x119e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e200 size=304 callers=2 calls=1
   calls: sub_bf0820
*/
void sub_119e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e200ULL || rel >= 0x119e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e330 size=224 callers=0 calls=2
   calls: sub_1127360, sub_967240
*/
void sub_119e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e330ULL || rel >= 0x119e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e410 size=16 callers=0 calls=0
*/
void sub_119e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e410ULL || rel >= 0x119e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e420 size=16 callers=0 calls=0
*/
void sub_119e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e420ULL || rel >= 0x119e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e430 size=16 callers=0 calls=0
*/
void sub_119e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e430ULL || rel >= 0x119e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e440 size=256 callers=2 calls=2
   calls: sub_5d99d0, sub_c52bf0
*/
void sub_119e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e440ULL || rel >= 0x119e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e540 size=160 callers=0 calls=0
*/
void sub_119e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e540ULL || rel >= 0x119e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e5e0 size=16 callers=0 calls=0
*/
void sub_119e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e5e0ULL || rel >= 0x119e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e5f0 size=112 callers=1 calls=0
*/
void sub_119e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e5f0ULL || rel >= 0x119e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e660 size=96 callers=0 calls=0
*/
void sub_119e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e660ULL || rel >= 0x119e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e6c0 size=112 callers=0 calls=1
   calls: sub_112f710
*/
void sub_119e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e6c0ULL || rel >= 0x119e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e730 size=96 callers=0 calls=0
*/
void sub_119e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e730ULL || rel >= 0x119e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e790 size=96 callers=0 calls=0
*/
void sub_119e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e790ULL || rel >= 0x119e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e7f0 size=240 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_119e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e7f0ULL || rel >= 0x119e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e8e0 size=240 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_119e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e8e0ULL || rel >= 0x119e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119e9d0 size=96 callers=0 calls=0
*/
void sub_119e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119e9d0ULL || rel >= 0x119ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ea30 size=96 callers=0 calls=0
*/
void sub_119ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ea30ULL || rel >= 0x119ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ea90 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_119ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ea90ULL || rel >= 0x119ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ead0 size=272 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_119ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ead0ULL || rel >= 0x119ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ebe0 size=128 callers=0 calls=6
   calls: sub_1162eb0, sub_1163860, sub_1163930, sub_1174b30, sub_1174bf0, sub_1198980
*/
void sub_119ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ebe0ULL || rel >= 0x119ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ec60 size=16 callers=0 calls=0
*/
void sub_119ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ec60ULL || rel >= 0x119ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ec70 size=240 callers=0 calls=0
*/
void sub_119ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ec70ULL || rel >= 0x119ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ed60 size=240 callers=0 calls=0
*/
void sub_119ed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ed60ULL || rel >= 0x119ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ee50 size=240 callers=0 calls=0
*/
void sub_119ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ee50ULL || rel >= 0x119ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119ef40 size=240 callers=0 calls=0
*/
void sub_119ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119ef40ULL || rel >= 0x119f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f030 size=240 callers=0 calls=0
*/
void sub_119f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f030ULL || rel >= 0x119f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f120 size=32 callers=0 calls=0
*/
void sub_119f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f120ULL || rel >= 0x119f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f140 size=16 callers=0 calls=0
*/
void sub_119f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f140ULL || rel >= 0x119f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f150 size=32 callers=0 calls=0
*/
void sub_119f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f150ULL || rel >= 0x119f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f170 size=32 callers=0 calls=0
*/
void sub_119f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f170ULL || rel >= 0x119f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f190 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_119f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f190ULL || rel >= 0x119f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f1d0 size=448 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_119f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f1d0ULL || rel >= 0x119f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f390 size=400 callers=0 calls=10
   calls: sub_1136250, sub_1136f20, sub_11390c0, sub_1160e20, sub_1162f90, sub_116cc60, sub_116d920, sub_1197110, sub_11971b0, sub_11972f0
*/
void sub_119f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f390ULL || rel >= 0x119f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f520 size=192 callers=0 calls=5
   calls: sub_1136250, sub_1160e20, sub_116d920, sub_1197110, sub_11971b0
*/
void sub_119f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f520ULL || rel >= 0x119f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f5e0 size=144 callers=0 calls=0
*/
void sub_119f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f5e0ULL || rel >= 0x119f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f670 size=16 callers=0 calls=0
*/
void sub_119f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f670ULL || rel >= 0x119f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f680 size=96 callers=0 calls=5
   calls: sub_113a990, sub_1170840, sub_1197110, sub_1197180, sub_11971e0
*/
void sub_119f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f680ULL || rel >= 0x119f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f6e0 size=496 callers=0 calls=9
   calls: sub_1136250, sub_1136f20, sub_113a940, sub_1160e20, sub_1164130, sub_116d920, sub_1197110, sub_11971b0, sub_967240
*/
void sub_119f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f6e0ULL || rel >= 0x119f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f8d0 size=240 callers=0 calls=0
*/
void sub_119f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f8d0ULL || rel >= 0x119f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119f9c0 size=240 callers=0 calls=0
*/
void sub_119f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119f9c0ULL || rel >= 0x119fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119fab0 size=240 callers=0 calls=0
*/
void sub_119fab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119fab0ULL || rel >= 0x119fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119fba0 size=240 callers=0 calls=0
*/
void sub_119fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119fba0ULL || rel >= 0x119fc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119fc90 size=240 callers=0 calls=0
*/
void sub_119fc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119fc90ULL || rel >= 0x119fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119fd80 size=32 callers=0 calls=0
*/
void sub_119fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119fd80ULL || rel >= 0x119fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119fda0 size=16 callers=0 calls=0
*/
void sub_119fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119fda0ULL || rel >= 0x119fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119fdb0 size=32 callers=0 calls=0
*/
void sub_119fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119fdb0ULL || rel >= 0x119fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119fdd0 size=32 callers=0 calls=0
*/
void sub_119fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119fdd0ULL || rel >= 0x119fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119fdf0 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_119fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119fdf0ULL || rel >= 0x119fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0119fe30 size=528 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_119fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119fe30ULL || rel >= 0x11a0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0040 size=16 callers=0 calls=0
*/
void sub_11a0040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0040ULL || rel >= 0x11a0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0050 size=480 callers=0 calls=5
   calls: sub_112ea00, sub_116d920, sub_11971b0, sub_11973d0, sub_bf0820
*/
void sub_11a0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0050ULL || rel >= 0x11a0230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0230 size=16 callers=0 calls=0
*/
void sub_11a0230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0230ULL || rel >= 0x11a0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0240 size=480 callers=0 calls=6
   calls: sub_1163690, sub_116d920, sub_11971b0, sub_1197420, sub_972c70, sub_ead150
*/
void sub_11a0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0240ULL || rel >= 0x11a0420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0420 size=64 callers=0 calls=2
   calls: sub_11364c0, sub_1197110
*/
void sub_11a0420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0420ULL || rel >= 0x11a0460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0460 size=64 callers=0 calls=3
   calls: app_state, sub_116d920, sub_11971b0
*/
void sub_11a0460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0460ULL || rel >= 0x11a04a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a04a0 size=32 callers=0 calls=1
   calls: sub_1197210
*/
void sub_11a04a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a04a0ULL || rel >= 0x11a04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a04c0 size=1120 callers=0 calls=9
   calls: sub_115b870, sub_1162de0, sub_1164130, sub_116d920, sub_11706e0, sub_11971b0, sub_11971e0, sub_967240, sub_bf0820
*/
void sub_11a04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a04c0ULL || rel >= 0x11a0920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0920 size=240 callers=0 calls=0
*/
void sub_11a0920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0920ULL || rel >= 0x11a0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0a10 size=240 callers=0 calls=0
*/
void sub_11a0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0a10ULL || rel >= 0x11a0b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0b00 size=240 callers=0 calls=0
*/
void sub_11a0b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0b00ULL || rel >= 0x11a0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0bf0 size=240 callers=0 calls=0
*/
void sub_11a0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0bf0ULL || rel >= 0x11a0ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0ce0 size=240 callers=0 calls=0
*/
void sub_11a0ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0ce0ULL || rel >= 0x11a0dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0dd0 size=32 callers=0 calls=0
*/
void sub_11a0dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0dd0ULL || rel >= 0x11a0df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0df0 size=16 callers=0 calls=0
*/
void sub_11a0df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0df0ULL || rel >= 0x11a0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0e00 size=32 callers=0 calls=0
*/
void sub_11a0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0e00ULL || rel >= 0x11a0e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0e20 size=32 callers=0 calls=0
*/
void sub_11a0e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0e20ULL || rel >= 0x11a0e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0e40 size=208 callers=0 calls=0
*/
void sub_11a0e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0e40ULL || rel >= 0x11a0f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0f10 size=80 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11a0f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0f10ULL || rel >= 0x11a0f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a0f60 size=528 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11a0f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a0f60ULL || rel >= 0x11a1170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1170 size=192 callers=0 calls=6
   calls: app_state, sub_113a4d0, sub_113a540, sub_113a5d0, sub_1197110, sub_11971b0
*/
void sub_11a1170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1170ULL || rel >= 0x11a1230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1230 size=560 callers=0 calls=10
   calls: sub_1129060, sub_113a4d0, sub_113e980, sub_1161280, sub_11659b0, sub_1165dc0, sub_1165de0, sub_1167c10, sub_1167c40, sub_1197110
   ref: @Play_Camp_Battle
*/
void Play_Camp_Battle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1230ULL || rel >= 0x11a1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1460 size=112 callers=0 calls=2
   calls: sub_113a4d0, sub_1197110
*/
void sub_11a1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1460ULL || rel >= 0x11a14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a14d0 size=288 callers=0 calls=8
   calls: Play_Camp_ClosenessUp, sub_1137490, sub_113e980, sub_116cc60, sub_116f1c0, sub_1197110, sub_11971b0, sub_1197210
*/
void sub_11a14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a14d0ULL || rel >= 0x11a15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a15f0 size=224 callers=0 calls=5
   calls: Play_Camp_ClosenessUp, sub_1137490, sub_116cc60, sub_1197110, sub_11971b0
*/
void sub_11a15f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a15f0ULL || rel >= 0x11a16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a16d0 size=48 callers=0 calls=1
   calls: sub_1197210
*/
void sub_11a16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a16d0ULL || rel >= 0x11a1700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1700 size=32 callers=0 calls=1
   calls: sub_1197210
*/
void sub_11a1700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1700ULL || rel >= 0x11a1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1720 size=240 callers=0 calls=0
*/
void sub_11a1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1720ULL || rel >= 0x11a1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1810 size=240 callers=0 calls=0
*/
void sub_11a1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1810ULL || rel >= 0x11a1900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1900 size=240 callers=0 calls=0
*/
void sub_11a1900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1900ULL || rel >= 0x11a19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a19f0 size=240 callers=0 calls=0
*/
void sub_11a19f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a19f0ULL || rel >= 0x11a1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1ae0 size=240 callers=0 calls=0
*/
void sub_11a1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1ae0ULL || rel >= 0x11a1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1bd0 size=32 callers=0 calls=0
*/
void sub_11a1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1bd0ULL || rel >= 0x11a1bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1bf0 size=16 callers=0 calls=0
*/
void sub_11a1bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1bf0ULL || rel >= 0x11a1c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1c00 size=32 callers=0 calls=0
*/
void sub_11a1c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1c00ULL || rel >= 0x11a1c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1c20 size=32 callers=0 calls=0
*/
void sub_11a1c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1c20ULL || rel >= 0x11a1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1c40 size=80 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11a1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1c40ULL || rel >= 0x11a1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1c90 size=16 callers=0 calls=0
*/
void sub_11a1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1c90ULL || rel >= 0x11a1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1ca0 size=32 callers=0 calls=1
   calls: sub_11971e0
*/
void sub_11a1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1ca0ULL || rel >= 0x11a1cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1cc0 size=448 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11a1cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1cc0ULL || rel >= 0x11a1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a1e80 size=688 callers=0 calls=15
   calls: app_state, sub_1127360, sub_112ea00, sub_1136fc0, sub_115b9d0, sub_115bbc0, sub_1163060, sub_116f1d0, sub_11706e0, sub_1172690, sub_1197110, sub_11971b0
   ... +3 more
*/
void sub_11a1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a1e80ULL || rel >= 0x11a2130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2130 size=480 callers=0 calls=13
   calls: sub_11364c0, sub_1136fc0, sub_11635b0, sub_116f1c0, sub_11706e0, sub_1170840, sub_1172730, sub_1172d80, sub_1197110, sub_1197180, sub_11971e0, sub_1197210
   ... +1 more
*/
void sub_11a2130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2130ULL || rel >= 0x11a2310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2310 size=144 callers=0 calls=6
   calls: sub_1108740, sub_1134fa0, sub_116f1c0, sub_116f1d0, sub_1197110, sub_1197210
*/
void sub_11a2310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2310ULL || rel >= 0x11a23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a23a0 size=1040 callers=0 calls=22
   calls: sub_11091d0, sub_1109ad0, sub_1109b00, sub_11274b0, sub_11323f0, sub_1134fa0, sub_11361a0, sub_11364c0, sub_11365b0, sub_1136fc0, sub_1137490, sub_11397d0
   ... +10 more
*/
void sub_11a23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a23a0ULL || rel >= 0x11a27b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a27b0 size=240 callers=0 calls=0
*/
void sub_11a27b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a27b0ULL || rel >= 0x11a28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a28a0 size=240 callers=0 calls=0
*/
void sub_11a28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a28a0ULL || rel >= 0x11a2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2990 size=240 callers=0 calls=0
*/
void sub_11a2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2990ULL || rel >= 0x11a2a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2a80 size=240 callers=0 calls=0
*/
void sub_11a2a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2a80ULL || rel >= 0x11a2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2b70 size=240 callers=0 calls=0
*/
void sub_11a2b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2b70ULL || rel >= 0x11a2c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2c60 size=32 callers=0 calls=0
*/
void sub_11a2c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2c60ULL || rel >= 0x11a2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2c80 size=16 callers=0 calls=0
*/
void sub_11a2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2c80ULL || rel >= 0x11a2c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2c90 size=32 callers=0 calls=0
*/
void sub_11a2c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2c90ULL || rel >= 0x11a2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2cb0 size=32 callers=0 calls=0
*/
void sub_11a2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2cb0ULL || rel >= 0x11a2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2cd0 size=48 callers=0 calls=0
*/
void sub_11a2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2cd0ULL || rel >= 0x11a2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2d00 size=16 callers=0 calls=0
*/
void sub_11a2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2d00ULL || rel >= 0x11a2d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2d10 size=16 callers=0 calls=0
*/
void sub_11a2d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2d10ULL || rel >= 0x11a2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2d20 size=16 callers=0 calls=0
*/
void sub_11a2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2d20ULL || rel >= 0x11a2d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2d30 size=208 callers=0 calls=0
*/
void sub_11a2d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2d30ULL || rel >= 0x11a2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2e00 size=80 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11a2e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2e00ULL || rel >= 0x11a2e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a2e50 size=1504 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11a2e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a2e50ULL || rel >= 0x11a3430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3430 size=112 callers=0 calls=3
   calls: sub_11095a0, sub_113e980, sub_1197470
*/
void sub_11a3430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3430ULL || rel >= 0x11a34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a34a0 size=144 callers=0 calls=5
   calls: sub_11098a0, sub_1137490, sub_113e980, sub_1197110, sub_1197470
*/
void sub_11a34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a34a0ULL || rel >= 0x11a3530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3530 size=176 callers=0 calls=6
   calls: sub_1109870, sub_1109d80, sub_1137490, sub_113e980, sub_1197110, sub_1197470
*/
void sub_11a3530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3530ULL || rel >= 0x11a35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a35e0 size=96 callers=0 calls=5
   calls: sub_1109b30, sub_11398f0, sub_113e980, sub_1197110, sub_1197470
*/
void sub_11a35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a35e0ULL || rel >= 0x11a3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3640 size=80 callers=0 calls=3
   calls: sub_1109c80, sub_113e980, sub_1197470
*/
void sub_11a3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3640ULL || rel >= 0x11a3690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3690 size=80 callers=0 calls=3
   calls: sub_1109c80, sub_113e980, sub_1197470
*/
void sub_11a3690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3690ULL || rel >= 0x11a36e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a36e0 size=64 callers=0 calls=1
   calls: sub_113e980
*/
void sub_11a36e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a36e0ULL || rel >= 0x11a3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3720 size=64 callers=0 calls=1
   calls: sub_113e980
*/
void sub_11a3720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3720ULL || rel >= 0x11a3760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3760 size=96 callers=0 calls=3
   calls: sub_1137490, sub_113e980, sub_1197110
*/
void sub_11a3760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3760ULL || rel >= 0x11a37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a37c0 size=160 callers=0 calls=5
   calls: sub_1139c00, sub_113e980, sub_116ccd0, sub_1197110, sub_11971b0
*/
void sub_11a37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a37c0ULL || rel >= 0x11a3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3860 size=176 callers=0 calls=3
   calls: Play_UI_Emotional_Sleep, sub_113e980, sub_1197110
*/
void sub_11a3860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3860ULL || rel >= 0x11a3910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3910 size=256 callers=0 calls=5
   calls: sub_113ea00, sub_116cd90, sub_11971b0, sub_11a3c10, sub_5cfad0
*/
void sub_11a3910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3910ULL || rel >= 0x11a3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3a10 size=256 callers=0 calls=8
   calls: sub_1129060, sub_116f1c0, sub_116f1d0, sub_1170e80, sub_1171010, sub_1197110, sub_11971e0, sub_1197210
   ref: @Play_Camp_RandomLook
*/
void Play_Camp_RandomLook(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3a10ULL || rel >= 0x11a3b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3b10 size=80 callers=0 calls=2
   calls: sub_116cc60, sub_11971b0
*/
void sub_11a3b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3b10ULL || rel >= 0x11a3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3b60 size=80 callers=0 calls=2
   calls: sub_116cc60, sub_11971b0
*/
void sub_11a3b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3b60ULL || rel >= 0x11a3bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3bb0 size=80 callers=0 calls=2
   calls: sub_116cc60, sub_11971b0
*/
void sub_11a3bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3bb0ULL || rel >= 0x11a3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3c00 size=16 callers=0 calls=0
*/
void sub_11a3c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3c00ULL || rel >= 0x11a3c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3c10 size=224 callers=1 calls=3
   calls: sub_113e980, sub_11971b0, walk_turn
*/
void sub_11a3c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3c10ULL || rel >= 0x11a3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3cf0 size=240 callers=0 calls=0
*/
void sub_11a3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3cf0ULL || rel >= 0x11a3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3de0 size=112 callers=0 calls=1
   calls: sub_113e1f0
*/
void sub_11a3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3de0ULL || rel >= 0x11a3e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3e50 size=240 callers=0 calls=0
*/
void sub_11a3e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3e50ULL || rel >= 0x11a3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a3f40 size=240 callers=0 calls=0
*/
void sub_11a3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a3f40ULL || rel >= 0x11a4030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4030 size=112 callers=0 calls=1
   calls: sub_113e1f0
*/
void sub_11a4030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4030ULL || rel >= 0x11a40a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a40a0 size=112 callers=0 calls=1
   calls: sub_113e1f0
*/
void sub_11a40a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a40a0ULL || rel >= 0x11a4110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4110 size=240 callers=0 calls=0
*/
void sub_11a4110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4110ULL || rel >= 0x11a4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4200 size=240 callers=0 calls=0
*/
void sub_11a4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4200ULL || rel >= 0x11a42f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a42f0 size=32 callers=0 calls=0
*/
void sub_11a42f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a42f0ULL || rel >= 0x11a4310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4310 size=16 callers=0 calls=0
*/
void sub_11a4310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4310ULL || rel >= 0x11a4320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4320 size=32 callers=0 calls=0
*/
void sub_11a4320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4320ULL || rel >= 0x11a4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4340 size=32 callers=0 calls=0
*/
void sub_11a4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4340ULL || rel >= 0x11a4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4360 size=80 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11a4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4360ULL || rel >= 0x11a43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a43b0 size=624 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11a43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a43b0ULL || rel >= 0x11a4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4620 size=16 callers=0 calls=0
*/
void sub_11a4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4620ULL || rel >= 0x11a4630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4630 size=288 callers=0 calls=7
   calls: sub_1137490, sub_116cc60, sub_116d920, sub_1197110, sub_11971b0, sub_1197240, sub_11973d0
*/
void sub_11a4630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4630ULL || rel >= 0x11a4750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4750 size=16 callers=0 calls=0
*/
void sub_11a4750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4750ULL || rel >= 0x11a4760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4760 size=240 callers=0 calls=8
   calls: sub_113c4b0, sub_116df70, sub_116f1d0, sub_1197110, sub_11971b0, sub_1197210, sub_11973d0, sub_11a4a10
*/
void sub_11a4760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4760ULL || rel >= 0x11a4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4850 size=320 callers=0 calls=7
   calls: sub_11091d0, sub_1137490, sub_11397d0, sub_113c3d0, sub_113c430, sub_1197110, sub_1197470
*/
void sub_11a4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4850ULL || rel >= 0x11a4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4990 size=16 callers=0 calls=0
*/
void sub_11a4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4990ULL || rel >= 0x11a49a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a49a0 size=16 callers=0 calls=0
*/
void sub_11a49a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a49a0ULL || rel >= 0x11a49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a49b0 size=96 callers=0 calls=7
   calls: sub_116d920, sub_116df70, sub_116f1d0, sub_1197110, sub_11971b0, sub_1197210, sub_11973a0
*/
void sub_11a49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a49b0ULL || rel >= 0x11a4a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4a10 size=224 callers=1 calls=6
   calls: sub_1137490, sub_113c3d0, sub_113c430, sub_116f1d0, sub_1197110, sub_1197210
*/
void sub_11a4a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4a10ULL || rel >= 0x11a4af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4af0 size=256 callers=0 calls=6
   calls: sub_1160e20, sub_1164130, sub_116d920, sub_1197110, sub_11971b0, sub_11973a0
*/
void sub_11a4af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4af0ULL || rel >= 0x11a4bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4bf0 size=240 callers=0 calls=0
*/
void sub_11a4bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4bf0ULL || rel >= 0x11a4ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4ce0 size=240 callers=0 calls=0
*/
void sub_11a4ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4ce0ULL || rel >= 0x11a4dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4dd0 size=240 callers=0 calls=0
*/
void sub_11a4dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4dd0ULL || rel >= 0x11a4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4ec0 size=240 callers=0 calls=0
*/
void sub_11a4ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4ec0ULL || rel >= 0x11a4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a4fb0 size=240 callers=0 calls=0
*/
void sub_11a4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a4fb0ULL || rel >= 0x11a50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a50a0 size=32 callers=0 calls=0
*/
void sub_11a50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a50a0ULL || rel >= 0x11a50c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a50c0 size=16 callers=0 calls=0
*/
void sub_11a50c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a50c0ULL || rel >= 0x11a50d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a50d0 size=32 callers=0 calls=0
*/
void sub_11a50d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a50d0ULL || rel >= 0x11a50f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a50f0 size=32 callers=0 calls=0
*/
void sub_11a50f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a50f0ULL || rel >= 0x11a5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5110 size=112 callers=0 calls=5
   calls: sub_1160e20, sub_116d920, sub_1197110, sub_11971b0, sub_11973a0
*/
void sub_11a5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5110ULL || rel >= 0x11a5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5180 size=16 callers=0 calls=0
*/
void sub_11a5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5180ULL || rel >= 0x11a5190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5190 size=16 callers=0 calls=0
*/
void sub_11a5190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5190ULL || rel >= 0x11a51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a51a0 size=16 callers=0 calls=0
*/
void sub_11a51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a51a0ULL || rel >= 0x11a51b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a51b0 size=208 callers=0 calls=0
*/
void sub_11a51b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a51b0ULL || rel >= 0x11a5280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5280 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11a5280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5280ULL || rel >= 0x11a52c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a52c0 size=160 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11a52c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a52c0ULL || rel >= 0x11a5360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5360 size=16 callers=0 calls=0
*/
void sub_11a5360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5360ULL || rel >= 0x11a5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5370 size=400 callers=0 calls=5
   calls: sub_11274b0, sub_1131f60, sub_11632b0, sub_1306f20, sub_967240
*/
void sub_11a5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5370ULL || rel >= 0x11a5500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5500 size=400 callers=0 calls=5
   calls: sub_11274b0, sub_1132310, sub_11632b0, sub_1306f20, sub_967240
*/
void sub_11a5500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5500ULL || rel >= 0x11a5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5690 size=240 callers=0 calls=0
*/
void sub_11a5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5690ULL || rel >= 0x11a5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5780 size=240 callers=0 calls=0
*/
void sub_11a5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5780ULL || rel >= 0x11a5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5870 size=240 callers=0 calls=0
*/
void sub_11a5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5870ULL || rel >= 0x11a5960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5960 size=240 callers=0 calls=0
*/
void sub_11a5960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5960ULL || rel >= 0x11a5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5a50 size=240 callers=0 calls=0
*/
void sub_11a5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5a50ULL || rel >= 0x11a5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5b40 size=32 callers=0 calls=0
*/
void sub_11a5b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5b40ULL || rel >= 0x11a5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5b60 size=16 callers=0 calls=0
*/
void sub_11a5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5b60ULL || rel >= 0x11a5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5b70 size=32 callers=0 calls=0
*/
void sub_11a5b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5b70ULL || rel >= 0x11a5b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5b90 size=32 callers=0 calls=0
*/
void sub_11a5b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5b90ULL || rel >= 0x11a5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5bb0 size=160 callers=0 calls=0
*/
void sub_11a5bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5bb0ULL || rel >= 0x11a5c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5c50 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11a5c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5c50ULL || rel >= 0x11a5c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5c90 size=160 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11a5c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5c90ULL || rel >= 0x11a5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5d30 size=368 callers=0 calls=5
   calls: sub_115ab80, sub_115b4a0, sub_11a6560, sub_11a6660, sub_59a650
*/
void sub_11a5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5d30ULL || rel >= 0x11a5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5ea0 size=48 callers=0 calls=1
   calls: sub_11a6560
*/
void sub_11a5ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5ea0ULL || rel >= 0x11a5ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5ed0 size=64 callers=0 calls=1
   calls: sub_11a6560
*/
void sub_11a5ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5ed0ULL || rel >= 0x11a5f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a5f10 size=240 callers=0 calls=0
*/
void sub_11a5f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a5f10ULL || rel >= 0x11a6000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6000 size=240 callers=0 calls=0
*/
void sub_11a6000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6000ULL || rel >= 0x11a60f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a60f0 size=240 callers=0 calls=0
*/
void sub_11a60f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a60f0ULL || rel >= 0x11a61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a61e0 size=240 callers=0 calls=0
*/
void sub_11a61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a61e0ULL || rel >= 0x11a62d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a62d0 size=240 callers=0 calls=0
*/
void sub_11a62d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a62d0ULL || rel >= 0x11a63c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a63c0 size=32 callers=0 calls=0
*/
void sub_11a63c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a63c0ULL || rel >= 0x11a63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a63e0 size=16 callers=0 calls=0
*/
void sub_11a63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a63e0ULL || rel >= 0x11a63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a63f0 size=32 callers=0 calls=0
*/
void sub_11a63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a63f0ULL || rel >= 0x11a6410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6410 size=32 callers=0 calls=0
*/
void sub_11a6410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6410ULL || rel >= 0x11a6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6430 size=96 callers=0 calls=0
*/
void sub_11a6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6430ULL || rel >= 0x11a6490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6490 size=16 callers=0 calls=0
*/
void sub_11a6490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6490ULL || rel >= 0x11a64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a64a0 size=16 callers=0 calls=0
*/
void sub_11a64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a64a0ULL || rel >= 0x11a64b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a64b0 size=16 callers=0 calls=0
*/
void sub_11a64b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a64b0ULL || rel >= 0x11a64c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a64c0 size=160 callers=0 calls=0
*/
void sub_11a64c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a64c0ULL || rel >= 0x11a6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6560 size=256 callers=10 calls=3
   calls: sub_11632b0, sub_967240, sub_b44bb0
*/
void sub_11a6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6560ULL || rel >= 0x11a6660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6660 size=368 callers=11 calls=2
   calls: sub_11632b0, sub_607750
*/
void sub_11a6660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6660ULL || rel >= 0x11a67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a67d0 size=160 callers=0 calls=0
*/
void sub_11a67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a67d0ULL || rel >= 0x11a6870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6870 size=96 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11a6870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6870ULL || rel >= 0x11a68d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a68d0 size=976 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11a68d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a68d0ULL || rel >= 0x11a6ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6ca0 size=128 callers=0 calls=6
   calls: app_state, sub_1137070, sub_11383d0, sub_1197110, sub_11971b0, sub_ead150
*/
void sub_11a6ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6ca0ULL || rel >= 0x11a6d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6d20 size=272 callers=0 calls=8
   calls: sub_1109270, sub_113e980, sub_116d920, sub_1170840, sub_11971b0, sub_11971e0, sub_1197470, sub_11a7c40
*/
void sub_11a6d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6d20ULL || rel >= 0x11a6e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6e30 size=192 callers=0 calls=3
   calls: sub_116d920, sub_11971b0, sub_1197240
*/
void sub_11a6e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6e30ULL || rel >= 0x11a6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a6ef0 size=512 callers=0 calls=10
   calls: Play_Camp_ClosenessUp, sub_1109270, sub_1109320, sub_1109870, sub_1137490, sub_113e980, sub_11635b0, sub_1197110, sub_1197470, sub_11a7e30
*/
void sub_11a6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a6ef0ULL || rel >= 0x11a70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a70f0 size=96 callers=0 calls=2
   calls: sub_11973a0, sub_11a7c40
*/
void sub_11a70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a70f0ULL || rel >= 0x11a7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

