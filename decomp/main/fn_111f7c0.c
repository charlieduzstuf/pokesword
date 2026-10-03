/* main functions 0111f7c0..0113a690 (143 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0111f7c0 size=672 callers=0 calls=6
   calls: sub_1113c90, sub_111ea30, sub_11583c0, sub_116f8b0, sub_11c0850, sub_1c0
*/
void sub_111f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111f7c0ULL || rel >= 0x111fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111fa60 size=1808 callers=0 calls=20
   calls: sub_111ea30, sub_1120170, sub_11250f0, sub_1125210, sub_1125330, sub_1125450, sub_1125570, sub_1125690, sub_11257b0, sub_11258d0, sub_1125a20, sub_1125b70
   ... +8 more
*/
void sub_111fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111fa60ULL || rel >= 0x1120170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01120170 size=1296 callers=1 calls=12
   calls: sub_111ea30, sub_1157ef0, sub_1158640, sub_1179ec0, sub_1179ed0, sub_117faf0, sub_1186160, sub_11864a0, sub_118b1d0, sub_11b9140, sub_11ba0a0, sub_11c0a20
*/
void sub_1120170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1120170ULL || rel >= 0x1120680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01120680 size=592 callers=0 calls=10
   calls: sub_111ea30, sub_1128e20, sub_1157d70, sub_1157e10, sub_1180410, sub_11c0990, sub_14dbff0, sub_14e16a0, sub_c44310, sub_c44410
   ref: Set_State_Camp_Off
*/
void Set_State_Camp_Off(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1120680ULL || rel >= 0x11208d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011208d0 size=96 callers=1 calls=0
*/
void sub_11208d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11208d0ULL || rel >= 0x1120930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01120930 size=656 callers=3 calls=7
   calls: sub_111ea30, sub_11274b0, sub_1131f60, sub_1157ef0, sub_1186160, sub_11864a0, sub_1306f20
*/
void sub_1120930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1120930ULL || rel >= 0x1120bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01120bc0 size=320 callers=1 calls=0
*/
void sub_1120bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1120bc0ULL || rel >= 0x1120d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01120d00 size=16 callers=2 calls=0
*/
void sub_1120d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1120d00ULL || rel >= 0x1120d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01120d10 size=624 callers=0 calls=4
   calls: sub_1121790, sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1120d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1120d10ULL || rel >= 0x1120f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01120f80 size=16 callers=0 calls=0
*/
void sub_1120f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1120f80ULL || rel >= 0x1120f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01120f90 size=112 callers=0 calls=1
   calls: sub_1121ab0
*/
void sub_1120f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1120f90ULL || rel >= 0x1121000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121000 size=16 callers=0 calls=0
*/
void sub_1121000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121000ULL || rel >= 0x1121010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121010 size=16 callers=0 calls=0
*/
void sub_1121010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121010ULL || rel >= 0x1121020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121020 size=240 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1121020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121020ULL || rel >= 0x1121110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121110 size=240 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1121110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121110ULL || rel >= 0x1121200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121200 size=16 callers=0 calls=0
*/
void sub_1121200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121200ULL || rel >= 0x1121210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121210 size=16 callers=0 calls=0
*/
void sub_1121210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121210ULL || rel >= 0x1121220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121220 size=64 callers=0 calls=0
*/
void sub_1121220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121220ULL || rel >= 0x1121260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121260 size=64 callers=0 calls=0
*/
void sub_1121260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121260ULL || rel >= 0x11212a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011212a0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_11212a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11212a0ULL || rel >= 0x1121320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121320 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1121320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121320ULL || rel >= 0x1121490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121490 size=96 callers=0 calls=1
   calls: sub_11216b0
*/
void sub_1121490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121490ULL || rel >= 0x11214f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011214f0 size=16 callers=0 calls=0
*/
void sub_11214f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11214f0ULL || rel >= 0x1121500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121500 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1121500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121500ULL || rel >= 0x11215a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011215a0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_11215a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11215a0ULL || rel >= 0x1121660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121660 size=16 callers=0 calls=0
*/
void sub_1121660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121660ULL || rel >= 0x1121670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121670 size=16 callers=0 calls=0
*/
void sub_1121670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121670ULL || rel >= 0x1121680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121680 size=16 callers=0 calls=0
*/
void sub_1121680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121680ULL || rel >= 0x1121690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121690 size=32 callers=0 calls=0
*/
void sub_1121690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121690ULL || rel >= 0x11216b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011216b0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_11216b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11216b0ULL || rel >= 0x1121790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121790 size=800 callers=7 calls=0
*/
void sub_1121790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121790ULL || rel >= 0x1121ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121ab0 size=176 callers=1 calls=1
   calls: sub_c39c40
*/
void sub_1121ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121ab0ULL || rel >= 0x1121b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121b60 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1121b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121b60ULL || rel >= 0x1121c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121c50 size=240 callers=1 calls=2
   calls: sub_1121d40, sub_e7b660
*/
void sub_1121c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121c50ULL || rel >= 0x1121d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121d40 size=224 callers=1 calls=3
   calls: sub_1121e20, sub_7c2da0, sub_e7b5e0
*/
void sub_1121d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121d40ULL || rel >= 0x1121e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121e20 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1121e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121e20ULL || rel >= 0x1121f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121f10 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1121f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121f10ULL || rel >= 0x1121f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01121f90 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1121f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1121f90ULL || rel >= 0x1122100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122100 size=96 callers=0 calls=1
   calls: sub_1122320
*/
void sub_1122100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122100ULL || rel >= 0x1122160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122160 size=16 callers=0 calls=0
*/
void sub_1122160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122160ULL || rel >= 0x1122170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122170 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1122170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122170ULL || rel >= 0x1122210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122210 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1122210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122210ULL || rel >= 0x11222d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011222d0 size=16 callers=0 calls=0
*/
void sub_11222d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11222d0ULL || rel >= 0x11222e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011222e0 size=16 callers=0 calls=0
*/
void sub_11222e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11222e0ULL || rel >= 0x11222f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011222f0 size=16 callers=0 calls=0
*/
void sub_11222f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11222f0ULL || rel >= 0x1122300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122300 size=32 callers=0 calls=0
*/
void sub_1122300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122300ULL || rel >= 0x1122320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122320 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1122320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122320ULL || rel >= 0x1122400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122400 size=240 callers=1 calls=1
   calls: sub_c39c40
*/
void sub_1122400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122400ULL || rel >= 0x11224f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011224f0 size=256 callers=1 calls=2
   calls: sub_11225f0, sub_11c0b10
*/
void sub_11224f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11224f0ULL || rel >= 0x11225f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011225f0 size=224 callers=1 calls=3
   calls: sub_11226d0, sub_7c2da0, sub_e7b5e0
*/
void sub_11225f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11225f0ULL || rel >= 0x11226d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011226d0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_11226d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11226d0ULL || rel >= 0x11227c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011227c0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_11227c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11227c0ULL || rel >= 0x1122840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122840 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1122840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122840ULL || rel >= 0x11229b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011229b0 size=96 callers=0 calls=1
   calls: sub_1122bd0
*/
void sub_11229b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11229b0ULL || rel >= 0x1122a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122a10 size=16 callers=0 calls=0
*/
void sub_1122a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122a10ULL || rel >= 0x1122a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122a20 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1122a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122a20ULL || rel >= 0x1122ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122ac0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1122ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122ac0ULL || rel >= 0x1122b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122b80 size=16 callers=0 calls=0
*/
void sub_1122b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122b80ULL || rel >= 0x1122b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122b90 size=16 callers=0 calls=0
*/
void sub_1122b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122b90ULL || rel >= 0x1122ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122ba0 size=16 callers=0 calls=0
*/
void sub_1122ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122ba0ULL || rel >= 0x1122bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122bb0 size=32 callers=0 calls=0
*/
void sub_1122bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122bb0ULL || rel >= 0x1122bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122bd0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1122bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122bd0ULL || rel >= 0x1122cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122cb0 size=112 callers=0 calls=0
*/
void sub_1122cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122cb0ULL || rel >= 0x1122d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122d20 size=16 callers=0 calls=0
*/
void sub_1122d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122d20ULL || rel >= 0x1122d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122d30 size=16 callers=0 calls=0
*/
void sub_1122d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122d30ULL || rel >= 0x1122d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122d40 size=16 callers=0 calls=0
*/
void sub_1122d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122d40ULL || rel >= 0x1122d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122d50 size=16 callers=0 calls=0
*/
void sub_1122d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122d50ULL || rel >= 0x1122d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122d60 size=16 callers=0 calls=0
*/
void sub_1122d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122d60ULL || rel >= 0x1122d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122d70 size=16 callers=0 calls=0
*/
void sub_1122d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122d70ULL || rel >= 0x1122d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122d80 size=16 callers=0 calls=0
*/
void sub_1122d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122d80ULL || rel >= 0x1122d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122d90 size=112 callers=0 calls=0
*/
void sub_1122d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122d90ULL || rel >= 0x1122e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122e00 size=112 callers=0 calls=0
*/
void sub_1122e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122e00ULL || rel >= 0x1122e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122e70 size=112 callers=0 calls=0
*/
void sub_1122e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122e70ULL || rel >= 0x1122ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122ee0 size=112 callers=0 calls=0
*/
void sub_1122ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122ee0ULL || rel >= 0x1122f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122f50 size=112 callers=0 calls=0
*/
void sub_1122f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122f50ULL || rel >= 0x1122fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01122fc0 size=112 callers=0 calls=0
*/
void sub_1122fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1122fc0ULL || rel >= 0x1123030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123030 size=1280 callers=1 calls=2
   calls: sub_5cf8c0, sub_5e2350
*/
void sub_1123030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123030ULL || rel >= 0x1123530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123530 size=128 callers=0 calls=2
   calls: sub_1123940, sub_5cf8d0
*/
void sub_1123530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123530ULL || rel >= 0x11235b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011235b0 size=128 callers=0 calls=2
   calls: sub_1123940, sub_5cf8d0
*/
void sub_11235b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11235b0ULL || rel >= 0x1123630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123630 size=240 callers=0 calls=0
*/
void sub_1123630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123630ULL || rel >= 0x1123720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123720 size=128 callers=0 calls=2
   calls: sub_1123940, sub_5cf8d0
*/
void sub_1123720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123720ULL || rel >= 0x11237a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011237a0 size=128 callers=0 calls=2
   calls: sub_1123940, sub_5cf8d0
*/
void sub_11237a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11237a0ULL || rel >= 0x1123820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123820 size=16 callers=0 calls=0
*/
void sub_1123820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123820ULL || rel >= 0x1123830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123830 size=16 callers=0 calls=0
*/
void sub_1123830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123830ULL || rel >= 0x1123840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123840 size=128 callers=0 calls=2
   calls: sub_1123940, sub_5cf8d0
*/
void sub_1123840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123840ULL || rel >= 0x11238c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011238c0 size=128 callers=0 calls=2
   calls: sub_1123940, sub_5cf8d0
*/
void sub_11238c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11238c0ULL || rel >= 0x1123940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123940 size=528 callers=6 calls=0
*/
void sub_1123940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123940ULL || rel >= 0x1123b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123b50 size=224 callers=1 calls=1
   calls: sub_1202090
*/
void sub_1123b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123b50ULL || rel >= 0x1123c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123c30 size=224 callers=1 calls=1
   calls: sub_1205600
*/
void sub_1123c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123c30ULL || rel >= 0x1123d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123d10 size=400 callers=0 calls=2
   calls: sub_1123eb0, sub_1124100
*/
void sub_1123d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123d10ULL || rel >= 0x1123ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123ea0 size=16 callers=0 calls=0
*/
void sub_1123ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123ea0ULL || rel >= 0x1123eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01123eb0 size=592 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bf0820
*/
void sub_1123eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1123eb0ULL || rel >= 0x1124100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124100 size=48 callers=1 calls=0
*/
void sub_1124100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124100ULL || rel >= 0x1124130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124130 size=16 callers=0 calls=0
*/
void sub_1124130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124130ULL || rel >= 0x1124140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124140 size=16 callers=0 calls=0
*/
void sub_1124140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124140ULL || rel >= 0x1124150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124150 size=16 callers=0 calls=0
*/
void sub_1124150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124150ULL || rel >= 0x1124160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124160 size=16 callers=0 calls=0
*/
void sub_1124160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124160ULL || rel >= 0x1124170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124170 size=16 callers=0 calls=0
*/
void sub_1124170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124170ULL || rel >= 0x1124180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124180 size=96 callers=0 calls=1
   calls: sub_11308b0
*/
void sub_1124180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124180ULL || rel >= 0x11241e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011241e0 size=16 callers=0 calls=0
*/
void sub_11241e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11241e0ULL || rel >= 0x11241f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011241f0 size=16 callers=0 calls=0
*/
void sub_11241f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11241f0ULL || rel >= 0x1124200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124200 size=16 callers=0 calls=0
*/
void sub_1124200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124200ULL || rel >= 0x1124210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124210 size=432 callers=0 calls=2
   calls: sub_11243d0, sub_1124610
*/
void sub_1124210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124210ULL || rel >= 0x11243c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011243c0 size=16 callers=0 calls=0
*/
void sub_11243c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11243c0ULL || rel >= 0x11243d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011243d0 size=336 callers=5 calls=3
   calls: sub_1124520, sub_5cf8e0, sub_5cf8f0
*/
void sub_11243d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11243d0ULL || rel >= 0x1124520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124520 size=240 callers=8 calls=1
   calls: sub_bf0820
*/
void sub_1124520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124520ULL || rel >= 0x1124610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124610 size=96 callers=1 calls=0
*/
void sub_1124610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124610ULL || rel >= 0x1124670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124670 size=16 callers=0 calls=0
*/
void sub_1124670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124670ULL || rel >= 0x1124680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124680 size=16 callers=0 calls=0
*/
void sub_1124680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124680ULL || rel >= 0x1124690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124690 size=16 callers=0 calls=0
*/
void sub_1124690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124690ULL || rel >= 0x11246a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011246a0 size=16 callers=0 calls=0
*/
void sub_11246a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11246a0ULL || rel >= 0x11246b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011246b0 size=16 callers=0 calls=0
*/
void sub_11246b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11246b0ULL || rel >= 0x11246c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011246c0 size=80 callers=0 calls=2
   calls: sub_115ba30, sub_115bb40
*/
void sub_11246c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11246c0ULL || rel >= 0x1124710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124710 size=16 callers=0 calls=0
*/
void sub_1124710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124710ULL || rel >= 0x1124720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124720 size=16 callers=0 calls=0
*/
void sub_1124720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124720ULL || rel >= 0x1124730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124730 size=16 callers=0 calls=0
*/
void sub_1124730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124730ULL || rel >= 0x1124740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124740 size=400 callers=0 calls=2
   calls: sub_11243d0, sub_11248e0
*/
void sub_1124740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124740ULL || rel >= 0x11248d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011248d0 size=16 callers=0 calls=0
*/
void sub_11248d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11248d0ULL || rel >= 0x11248e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011248e0 size=48 callers=1 calls=0
*/
void sub_11248e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11248e0ULL || rel >= 0x1124910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124910 size=16 callers=0 calls=0
*/
void sub_1124910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124910ULL || rel >= 0x1124920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124920 size=16 callers=0 calls=0
*/
void sub_1124920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124920ULL || rel >= 0x1124930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124930 size=16 callers=0 calls=0
*/
void sub_1124930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124930ULL || rel >= 0x1124940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124940 size=16 callers=0 calls=0
*/
void sub_1124940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124940ULL || rel >= 0x1124950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124950 size=16 callers=0 calls=0
*/
void sub_1124950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124950ULL || rel >= 0x1124960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124960 size=64 callers=0 calls=1
   calls: sub_115ba20
*/
void sub_1124960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124960ULL || rel >= 0x11249a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011249a0 size=16 callers=0 calls=0
*/
void sub_11249a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11249a0ULL || rel >= 0x11249b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011249b0 size=16 callers=0 calls=0
*/
void sub_11249b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11249b0ULL || rel >= 0x11249c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011249c0 size=16 callers=0 calls=0
*/
void sub_11249c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11249c0ULL || rel >= 0x11249d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011249d0 size=112 callers=0 calls=3
   calls: sub_115a720, sub_115ba30, sub_115bb40
*/
void sub_11249d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11249d0ULL || rel >= 0x1124a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124a40 size=16 callers=0 calls=0
*/
void sub_1124a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124a40ULL || rel >= 0x1124a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124a50 size=16 callers=0 calls=0
*/
void sub_1124a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124a50ULL || rel >= 0x1124a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124a60 size=16 callers=0 calls=0
*/
void sub_1124a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124a60ULL || rel >= 0x1124a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124a70 size=96 callers=0 calls=1
   calls: sub_11308b0
*/
void sub_1124a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124a70ULL || rel >= 0x1124ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124ad0 size=16 callers=0 calls=0
*/
void sub_1124ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124ad0ULL || rel >= 0x1124ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124ae0 size=16 callers=0 calls=0
*/
void sub_1124ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124ae0ULL || rel >= 0x1124af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124af0 size=16 callers=0 calls=0
*/
void sub_1124af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124af0ULL || rel >= 0x1124b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124b00 size=64 callers=0 calls=1
   calls: sub_1130c00
*/
void sub_1124b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124b00ULL || rel >= 0x1124b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124b40 size=16 callers=0 calls=0
*/
void sub_1124b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124b40ULL || rel >= 0x1124b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124b50 size=16 callers=0 calls=0
*/
void sub_1124b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124b50ULL || rel >= 0x1124b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124b60 size=16 callers=0 calls=0
*/
void sub_1124b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124b60ULL || rel >= 0x1124b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124b70 size=400 callers=0 calls=2
   calls: sub_1124d10, sub_1124f60
*/
void sub_1124b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124b70ULL || rel >= 0x1124d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124d00 size=16 callers=0 calls=0
*/
void sub_1124d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124d00ULL || rel >= 0x1124d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124d10 size=592 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bf0820
*/
void sub_1124d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124d10ULL || rel >= 0x1124f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124f60 size=48 callers=1 calls=0
*/
void sub_1124f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124f60ULL || rel >= 0x1124f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124f90 size=16 callers=0 calls=0
*/
void sub_1124f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124f90ULL || rel >= 0x1124fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124fa0 size=16 callers=0 calls=0
*/
void sub_1124fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124fa0ULL || rel >= 0x1124fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124fb0 size=16 callers=0 calls=0
*/
void sub_1124fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124fb0ULL || rel >= 0x1124fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124fc0 size=16 callers=0 calls=0
*/
void sub_1124fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124fc0ULL || rel >= 0x1124fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124fd0 size=16 callers=0 calls=0
*/
void sub_1124fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124fd0ULL || rel >= 0x1124fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01124fe0 size=64 callers=0 calls=1
   calls: sub_11611a0
*/
void sub_1124fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124fe0ULL || rel >= 0x1125020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125020 size=16 callers=0 calls=0
*/
void sub_1125020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125020ULL || rel >= 0x1125030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125030 size=16 callers=0 calls=0
*/
void sub_1125030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125030ULL || rel >= 0x1125040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125040 size=16 callers=0 calls=0
*/
void sub_1125040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125040ULL || rel >= 0x1125050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125050 size=112 callers=0 calls=2
   calls: sub_1139e80, sub_bf05e0
*/
void sub_1125050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125050ULL || rel >= 0x11250c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011250c0 size=16 callers=0 calls=0
*/
void sub_11250c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11250c0ULL || rel >= 0x11250d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011250d0 size=16 callers=0 calls=0
*/
void sub_11250d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11250d0ULL || rel >= 0x11250e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011250e0 size=16 callers=0 calls=0
*/
void sub_11250e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11250e0ULL || rel >= 0x11250f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011250f0 size=288 callers=1 calls=1
   calls: sub_11bf7a0
*/
void sub_11250f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11250f0ULL || rel >= 0x1125210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125210 size=288 callers=1 calls=1
   calls: sub_1202bf0
*/
void sub_1125210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125210ULL || rel >= 0x1125330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125330 size=288 callers=1 calls=1
   calls: sub_1217600
*/
void sub_1125330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125330ULL || rel >= 0x1125450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125450 size=288 callers=1 calls=1
   calls: sub_11fdbc0
*/
void sub_1125450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125450ULL || rel >= 0x1125570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125570 size=288 callers=1 calls=1
   calls: sub_11f89f0
*/
void sub_1125570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125570ULL || rel >= 0x1125690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125690 size=288 callers=1 calls=1
   calls: sub_11fb5d0
*/
void sub_1125690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125690ULL || rel >= 0x11257b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011257b0 size=288 callers=1 calls=1
   calls: sub_11f7ba0
*/
void sub_11257b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11257b0ULL || rel >= 0x11258d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011258d0 size=336 callers=1 calls=1
   calls: sub_1214ed0
*/
void sub_11258d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11258d0ULL || rel >= 0x1125a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125a20 size=336 callers=1 calls=1
   calls: sub_1214ed0
*/
void sub_1125a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125a20ULL || rel >= 0x1125b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125b70 size=336 callers=1 calls=1
   calls: sub_1214ed0
*/
void sub_1125b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125b70ULL || rel >= 0x1125cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125cc0 size=288 callers=1 calls=1
   calls: sub_12062d0
*/
void sub_1125cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125cc0ULL || rel >= 0x1125de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125de0 size=288 callers=1 calls=1
   calls: sub_11c0fe0
*/
void sub_1125de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125de0ULL || rel >= 0x1125f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01125f00 size=400 callers=1 calls=2
   calls: anonymous, sub_13a4980
*/
void sub_1125f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1125f00ULL || rel >= 0x1126090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126090 size=288 callers=1 calls=1
   calls: sub_11bebb0
*/
void sub_1126090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126090ULL || rel >= 0x11261b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011261b0 size=288 callers=1 calls=1
   calls: sub_11f72c0
*/
void sub_11261b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11261b0ULL || rel >= 0x11262d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011262d0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_11262d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11262d0ULL || rel >= 0x1126410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126410 size=288 callers=1 calls=1
   calls: sub_117cc30
*/
void sub_1126410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126410ULL || rel >= 0x1126530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126530 size=432 callers=0 calls=2
   calls: sub_11266f0, sub_1126840
*/
void sub_1126530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126530ULL || rel >= 0x11266e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011266e0 size=16 callers=0 calls=0
*/
void sub_11266e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11266e0ULL || rel >= 0x11266f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011266f0 size=336 callers=4 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bf0730
*/
void sub_11266f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11266f0ULL || rel >= 0x1126840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126840 size=96 callers=1 calls=0
*/
void sub_1126840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126840ULL || rel >= 0x11268a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011268a0 size=16 callers=0 calls=0
*/
void sub_11268a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11268a0ULL || rel >= 0x11268b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011268b0 size=16 callers=0 calls=0
*/
void sub_11268b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11268b0ULL || rel >= 0x11268c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011268c0 size=16 callers=0 calls=0
*/
void sub_11268c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11268c0ULL || rel >= 0x11268d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011268d0 size=16 callers=0 calls=0
*/
void sub_11268d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11268d0ULL || rel >= 0x11268e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011268e0 size=16 callers=0 calls=0
*/
void sub_11268e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11268e0ULL || rel >= 0x11268f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011268f0 size=448 callers=0 calls=3
   calls: sub_1136f20, sub_1157860, sub_967240
*/
void sub_11268f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11268f0ULL || rel >= 0x1126ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126ab0 size=16 callers=0 calls=0
*/
void sub_1126ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126ab0ULL || rel >= 0x1126ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126ac0 size=16 callers=0 calls=0
*/
void sub_1126ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126ac0ULL || rel >= 0x1126ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126ad0 size=16 callers=0 calls=0
*/
void sub_1126ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126ad0ULL || rel >= 0x1126ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126ae0 size=416 callers=0 calls=2
   calls: sub_11308b0, sub_967240
*/
void sub_1126ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126ae0ULL || rel >= 0x1126c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126c80 size=16 callers=0 calls=0
*/
void sub_1126c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126c80ULL || rel >= 0x1126c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126c90 size=16 callers=0 calls=0
*/
void sub_1126c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126c90ULL || rel >= 0x1126ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126ca0 size=16 callers=0 calls=0
*/
void sub_1126ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126ca0ULL || rel >= 0x1126cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126cb0 size=448 callers=0 calls=2
   calls: sub_1126e80, sub_11270d0
*/
void sub_1126cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126cb0ULL || rel >= 0x1126e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126e70 size=16 callers=0 calls=0
*/
void sub_1126e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126e70ULL || rel >= 0x1126e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01126e80 size=592 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bf0820
*/
void sub_1126e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1126e80ULL || rel >= 0x11270d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011270d0 size=384 callers=1 calls=2
   calls: sub_1126e80, sub_1127260
*/
void sub_11270d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11270d0ULL || rel >= 0x1127250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127250 size=16 callers=0 calls=0
*/
void sub_1127250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127250ULL || rel >= 0x1127260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127260 size=64 callers=1 calls=0
*/
void sub_1127260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127260ULL || rel >= 0x11272a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011272a0 size=16 callers=0 calls=0
*/
void sub_11272a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11272a0ULL || rel >= 0x11272b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011272b0 size=16 callers=0 calls=0
*/
void sub_11272b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11272b0ULL || rel >= 0x11272c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011272c0 size=16 callers=0 calls=0
*/
void sub_11272c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11272c0ULL || rel >= 0x11272d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011272d0 size=16 callers=0 calls=0
*/
void sub_11272d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11272d0ULL || rel >= 0x11272e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011272e0 size=16 callers=0 calls=0
*/
void sub_11272e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11272e0ULL || rel >= 0x11272f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011272f0 size=16 callers=0 calls=0
*/
void sub_11272f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11272f0ULL || rel >= 0x1127300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127300 size=16 callers=0 calls=0
*/
void sub_1127300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127300ULL || rel >= 0x1127310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127310 size=32 callers=0 calls=0
*/
void sub_1127310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127310ULL || rel >= 0x1127330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127330 size=16 callers=0 calls=0
*/
void sub_1127330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127330ULL || rel >= 0x1127340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127340 size=16 callers=0 calls=0
*/
void sub_1127340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127340ULL || rel >= 0x1127350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127350 size=16 callers=0 calls=0
*/
void sub_1127350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127350ULL || rel >= 0x1127360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127360 size=336 callers=43 calls=3
   calls: sub_1124520, sub_5cf8e0, sub_5cf8f0
*/
void sub_1127360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127360ULL || rel >= 0x11274b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011274b0 size=336 callers=57 calls=3
   calls: sub_1127600, sub_5cf8e0, sub_5cf8f0
*/
void sub_11274b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11274b0ULL || rel >= 0x1127600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127600 size=240 callers=4 calls=1
   calls: sub_bf0820
*/
void sub_1127600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127600ULL || rel >= 0x11276f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011276f0 size=400 callers=0 calls=2
   calls: sub_11266f0, sub_1127890
*/
void sub_11276f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11276f0ULL || rel >= 0x1127880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127880 size=16 callers=0 calls=0
*/
void sub_1127880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127880ULL || rel >= 0x1127890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127890 size=48 callers=1 calls=0
*/
void sub_1127890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127890ULL || rel >= 0x11278c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011278c0 size=16 callers=0 calls=0
*/
void sub_11278c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11278c0ULL || rel >= 0x11278d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011278d0 size=16 callers=0 calls=0
*/
void sub_11278d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11278d0ULL || rel >= 0x11278e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011278e0 size=16 callers=0 calls=0
*/
void sub_11278e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11278e0ULL || rel >= 0x11278f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011278f0 size=16 callers=0 calls=0
*/
void sub_11278f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11278f0ULL || rel >= 0x1127900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127900 size=16 callers=0 calls=0
*/
void sub_1127900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127900ULL || rel >= 0x1127910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127910 size=448 callers=0 calls=3
   calls: sub_1136f20, sub_1186160, sub_967240
*/
void sub_1127910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127910ULL || rel >= 0x1127ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127ad0 size=16 callers=0 calls=0
*/
void sub_1127ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127ad0ULL || rel >= 0x1127ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127ae0 size=16 callers=0 calls=0
*/
void sub_1127ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127ae0ULL || rel >= 0x1127af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127af0 size=16 callers=0 calls=0
*/
void sub_1127af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127af0ULL || rel >= 0x1127b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127b00 size=96 callers=0 calls=2
   calls: sub_115b9f0, sub_11611a0
*/
void sub_1127b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127b00ULL || rel >= 0x1127b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127b60 size=16 callers=0 calls=0
*/
void sub_1127b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127b60ULL || rel >= 0x1127b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127b70 size=16 callers=0 calls=0
*/
void sub_1127b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127b70ULL || rel >= 0x1127b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127b80 size=16 callers=0 calls=0
*/
void sub_1127b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127b80ULL || rel >= 0x1127b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127b90 size=368 callers=1 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1127b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127b90ULL || rel >= 0x1127d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127d00 size=704 callers=136 calls=1
   calls: sub_1127fc0
*/
void sub_1127d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127d00ULL || rel >= 0x1127fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01127fc0 size=464 callers=98 calls=0
*/
void sub_1127fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1127fc0ULL || rel >= 0x1128190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128190 size=96 callers=0 calls=0
*/
void sub_1128190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128190ULL || rel >= 0x11281f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011281f0 size=64 callers=0 calls=0
*/
void sub_11281f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11281f0ULL || rel >= 0x1128230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128230 size=32 callers=0 calls=0
*/
void sub_1128230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128230ULL || rel >= 0x1128250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128250 size=32 callers=0 calls=0
*/
void sub_1128250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128250ULL || rel >= 0x1128270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128270 size=208 callers=0 calls=0
*/
void sub_1128270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128270ULL || rel >= 0x1128340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128340 size=256 callers=14 calls=2
   calls: sub_ea3d10, sub_ea4760
*/
void sub_1128340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128340ULL || rel >= 0x1128440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128440 size=96 callers=4 calls=1
   calls: sub_11284a0
*/
void sub_1128440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128440ULL || rel >= 0x11284a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011284a0 size=272 callers=5 calls=2
   calls: sub_ea3d10, sub_ea4760
*/
void sub_11284a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11284a0ULL || rel >= 0x11285b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011285b0 size=272 callers=5 calls=2
   calls: sub_ea3d10, sub_ea4760
*/
void sub_11285b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11285b0ULL || rel >= 0x11286c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011286c0 size=272 callers=2 calls=2
   calls: sub_ea3d10, sub_ea4780
*/
void sub_11286c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11286c0ULL || rel >= 0x11287d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011287d0 size=272 callers=2 calls=2
   calls: sub_ea3d10, sub_ea4780
*/
void sub_11287d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11287d0ULL || rel >= 0x11288e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011288e0 size=256 callers=1 calls=2
   calls: sub_ea3d10, sub_ea4740
*/
void sub_11288e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11288e0ULL || rel >= 0x11289e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011289e0 size=272 callers=1 calls=2
   calls: sub_ea3d10, sub_ea4740
*/
void sub_11289e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11289e0ULL || rel >= 0x1128af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128af0 size=272 callers=1 calls=2
   calls: sub_ea3d10, sub_ea4740
*/
void sub_1128af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128af0ULL || rel >= 0x1128c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128c00 size=64 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1128c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128c00ULL || rel >= 0x1128c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128c40 size=80 callers=0 calls=0
*/
void sub_1128c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128c40ULL || rel >= 0x1128c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128c90 size=80 callers=0 calls=0
*/
void sub_1128c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128c90ULL || rel >= 0x1128ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128ce0 size=80 callers=0 calls=0
*/
void sub_1128ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128ce0ULL || rel >= 0x1128d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128d30 size=80 callers=0 calls=0
*/
void sub_1128d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128d30ULL || rel >= 0x1128d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128d80 size=80 callers=0 calls=0
*/
void sub_1128d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128d80ULL || rel >= 0x1128dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128dd0 size=80 callers=0 calls=0
*/
void sub_1128dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128dd0ULL || rel >= 0x1128e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128e20 size=32 callers=6 calls=0
*/
void sub_1128e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128e20ULL || rel >= 0x1128e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128e40 size=112 callers=62 calls=2
   calls: sub_1128eb0, sub_794330
*/
void sub_1128e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128e40ULL || rel >= 0x1128eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01128eb0 size=432 callers=4 calls=2
   calls: sub_1113c90, sub_1c0
*/
void sub_1128eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1128eb0ULL || rel >= 0x1129060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129060 size=176 callers=21 calls=8
   calls: sub_1128eb0, sub_11296c0, sub_11364b0, sub_1136c20, sub_1136c40, sub_1178b20, sub_794040, sub_b843f0
*/
void sub_1129060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129060ULL || rel >= 0x1129110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129110 size=112 callers=2 calls=3
   calls: sub_1128eb0, sub_112f410, sub_794040
*/
void sub_1129110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129110ULL || rel >= 0x1129180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129180 size=112 callers=1 calls=3
   calls: sub_1128eb0, sub_1176280, sub_794040
*/
void sub_1129180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129180ULL || rel >= 0x11291f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011291f0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_11291f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11291f0ULL || rel >= 0x1129260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129260 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1129260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129260ULL || rel >= 0x11292d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011292d0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_11292d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11292d0ULL || rel >= 0x1129340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129340 size=64 callers=0 calls=0
*/
void sub_1129340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129340ULL || rel >= 0x1129380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129380 size=336 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_1129380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129380ULL || rel >= 0x11294d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011294d0 size=48 callers=1 calls=0
*/
void sub_11294d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11294d0ULL || rel >= 0x1129500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129500 size=448 callers=0 calls=2
   calls: sub_762930, sub_762940
   ref: Play_PV_%03d_%02d_00
   ref: PM%03dVC
*/
void PM_03dVC(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129500ULL || rel >= 0x11296c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011296c0 size=656 callers=1 calls=3
   calls: sub_5cfad0, sub_793f30, sub_794040
*/
void sub_11296c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11296c0ULL || rel >= 0x1129950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129950 size=224 callers=0 calls=3
   calls: sub_1129a30, sub_59b250, sub_5b9220
*/
void sub_1129950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129950ULL || rel >= 0x1129a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129a30 size=624 callers=1 calls=3
   calls: sub_5b9220, sub_5cfad0, sub_793f30
*/
void sub_1129a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129a30ULL || rel >= 0x1129ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129ca0 size=704 callers=53 calls=1
   calls: sub_112dc30
*/
void sub_1129ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129ca0ULL || rel >= 0x1129f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01129f60 size=704 callers=75 calls=1
   calls: sub_112dc30
*/
void sub_1129f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1129f60ULL || rel >= 0x112a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112a220 size=848 callers=12 calls=1
   calls: sub_112e000
*/
void sub_112a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112a220ULL || rel >= 0x112a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112a570 size=4464 callers=0 calls=3
   calls: sub_1129ca0, sub_1129f60, sub_112a220
   ref: kw33_moveA01
   ref: @Play_Camp_Eat_reaction_03
   ref: PM025_30
   ref: ba02_roar01
   ref: @Play_Camp_ComeNear06
   ref: PM025_16
   ref: PM025_32
   ref: kw33_moveC01
*/
void Play_UI_Emotional_Hungry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112a570ULL || rel >= 0x112b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112b6e0 size=4464 callers=0 calls=3
   calls: sub_1129ca0, sub_1129f60, sub_112a220
   ref: kw33_moveA01
   ref: @Play_Camp_Eat_reaction_03
   ref: ba02_roar01
   ref: @Play_Camp_ComeNear06
   ref: PM025_95
   ref: kw33_moveC01
   ref: @Play_Camp_ComeNear01
   ref: PM025_73
*/
void Play_UI_Emotional_Hungry_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112b6e0ULL || rel >= 0x112c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112c850 size=4128 callers=0 calls=3
   calls: sub_1129ca0, sub_1129f60, sub_112a220
   ref: kw33_moveA01
   ref: @Play_Camp_Eat_reaction_03
   ref: ba02_roar01
   ref: @Play_Camp_ComeNear06
   ref: PM133_36
   ref: PM133_45
   ref: kw33_moveC01
   ref: @Play_Camp_ComeNear01
*/
void Play_UI_Emotional_Hungry_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112c850ULL || rel >= 0x112d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112d870 size=512 callers=0 calls=0
*/
void sub_112d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112d870ULL || rel >= 0x112da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112da70 size=16 callers=0 calls=0
*/
void sub_112da70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112da70ULL || rel >= 0x112da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112da80 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_112da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112da80ULL || rel >= 0x112daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112daf0 size=16 callers=0 calls=0
*/
void sub_112daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112daf0ULL || rel >= 0x112db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112db00 size=16 callers=0 calls=0
*/
void sub_112db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112db00ULL || rel >= 0x112db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112db10 size=16 callers=0 calls=0
*/
void sub_112db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112db10ULL || rel >= 0x112db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112db20 size=16 callers=0 calls=0
*/
void sub_112db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112db20ULL || rel >= 0x112db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112db30 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_112db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112db30ULL || rel >= 0x112dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112dba0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_112dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112dba0ULL || rel >= 0x112dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112dc10 size=16 callers=0 calls=0
*/
void sub_112dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112dc10ULL || rel >= 0x112dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112dc20 size=16 callers=0 calls=0
*/
void sub_112dc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112dc20ULL || rel >= 0x112dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112dc30 size=272 callers=2 calls=0
*/
void sub_112dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112dc30ULL || rel >= 0x112dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112dd40 size=704 callers=0 calls=0
*/
void sub_112dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112dd40ULL || rel >= 0x112e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e000 size=272 callers=1 calls=0
*/
void sub_112e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e000ULL || rel >= 0x112e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e110 size=704 callers=0 calls=0
*/
void sub_112e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e110ULL || rel >= 0x112e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e3d0 size=16 callers=30 calls=0
*/
void sub_112e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e3d0ULL || rel >= 0x112e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e3e0 size=64 callers=96 calls=0
*/
void sub_112e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e3e0ULL || rel >= 0x112e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e420 size=128 callers=0 calls=0
*/
void sub_112e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e420ULL || rel >= 0x112e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e4a0 size=128 callers=0 calls=0
*/
void sub_112e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e4a0ULL || rel >= 0x112e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e520 size=32 callers=0 calls=0
*/
void sub_112e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e520ULL || rel >= 0x112e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e540 size=32 callers=0 calls=0
*/
void sub_112e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e540ULL || rel >= 0x112e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e560 size=16 callers=0 calls=0
*/
void sub_112e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e560ULL || rel >= 0x112e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e570 size=16 callers=0 calls=0
*/
void sub_112e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e570ULL || rel >= 0x112e580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e580 size=224 callers=9 calls=1
   calls: sub_967240
*/
void sub_112e580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e580ULL || rel >= 0x112e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e660 size=240 callers=14 calls=1
   calls: sub_967240
*/
void sub_112e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e660ULL || rel >= 0x112e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e750 size=224 callers=34 calls=1
   calls: sub_967240
*/
void sub_112e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e750ULL || rel >= 0x112e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e830 size=240 callers=43 calls=1
   calls: sub_967240
*/
void sub_112e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e830ULL || rel >= 0x112e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112e920 size=224 callers=53 calls=1
   calls: sub_967240
*/
void sub_112e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e920ULL || rel >= 0x112ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112ea00 size=240 callers=130 calls=1
   calls: sub_967240
*/
void sub_112ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112ea00ULL || rel >= 0x112eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112eaf0 size=16 callers=23 calls=0
*/
void sub_112eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112eaf0ULL || rel >= 0x112eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112eb00 size=16 callers=0 calls=0
*/
void sub_112eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112eb00ULL || rel >= 0x112eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112eb10 size=480 callers=1 calls=2
   calls: sub_112f7c0, sub_793d10
   ref: Ball%02d
*/
void Ball_02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112eb10ULL || rel >= 0x112ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112ecf0 size=336 callers=0 calls=3
   calls: sub_1129110, sub_112ee50, sub_793de0
   ref: Stop_Camp_BallAura_MirrorBall_lp
*/
void Stop_Camp_BallAura_MirrorBall_lp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112ecf0ULL || rel >= 0x112ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112ee40 size=16 callers=2 calls=0
*/
void sub_112ee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112ee40ULL || rel >= 0x112ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112ee50 size=928 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_112ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112ee50ULL || rel >= 0x112f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f1f0 size=16 callers=0 calls=0
*/
void sub_112f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f1f0ULL || rel >= 0x112f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f200 size=16 callers=0 calls=0
*/
void sub_112f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f200ULL || rel >= 0x112f210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f210 size=16 callers=0 calls=0
*/
void sub_112f210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f210ULL || rel >= 0x112f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f220 size=16 callers=0 calls=0
*/
void sub_112f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f220ULL || rel >= 0x112f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f230 size=16 callers=0 calls=0
*/
void sub_112f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f230ULL || rel >= 0x112f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f240 size=16 callers=6 calls=0
*/
void sub_112f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f240ULL || rel >= 0x112f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f250 size=448 callers=8 calls=8
   calls: sub_11274b0, sub_1129110, sub_1130370, sub_1131f60, sub_1132310, sub_5cfad0, sub_619060, sub_967240
   ref: Stop_Camp_BallAura_MirrorBall_lp
   ref: Play_Camp_BallAura_MirrorBall_lp
*/
void Stop_Camp_BallAura_MirrorBall_lp_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f250ULL || rel >= 0x112f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f410 size=16 callers=1 calls=0
*/
void sub_112f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f410ULL || rel >= 0x112f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f420 size=64 callers=0 calls=2
   calls: sub_112ea00, sub_1130b50
*/
void sub_112f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f420ULL || rel >= 0x112f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f460 size=96 callers=0 calls=3
   calls: Stop_Camp_BallAura_MirrorBall_lp_2, sub_11300b0, sub_1130370
*/
void sub_112f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f460ULL || rel >= 0x112f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f4c0 size=112 callers=0 calls=1
   calls: sub_112f710
*/
void sub_112f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f4c0ULL || rel >= 0x112f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f530 size=240 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_112f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f530ULL || rel >= 0x112f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f620 size=240 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_112f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f620ULL || rel >= 0x112f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f710 size=176 callers=3 calls=1
   calls: sub_bf0820
*/
void sub_112f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f710ULL || rel >= 0x112f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f7c0 size=192 callers=1 calls=2
   calls: sub_112f880, sub_c46830
*/
void sub_112f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f7c0ULL || rel >= 0x112f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112f880 size=784 callers=3 calls=1
   calls: sub_5db1b0
*/
void sub_112f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f880ULL || rel >= 0x112fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112fb90 size=240 callers=0 calls=1
   calls: sub_5e2930
*/
void sub_112fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112fb90ULL || rel >= 0x112fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0112fc80 size=1040 callers=1 calls=6
   calls: sub_1130390, sub_5e2930, sub_5e39e0, sub_5e6280, sub_96a5a0, sub_b77710
*/
void sub_112fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112fc80ULL || rel >= 0x1130090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130090 size=32 callers=0 calls=0
*/
void sub_1130090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130090ULL || rel >= 0x11300b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011300b0 size=336 callers=3 calls=5
   calls: sub_1130200, sub_598de0, sub_618ec0, sub_967240, sub_b8ae40
*/
void sub_11300b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11300b0ULL || rel >= 0x1130200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130200 size=304 callers=1 calls=3
   calls: sub_5d99d0, sub_967240, sub_b8b050
*/
void sub_1130200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130200ULL || rel >= 0x1130330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130330 size=16 callers=0 calls=0
*/
void sub_1130330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130330ULL || rel >= 0x1130340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130340 size=48 callers=1 calls=1
   calls: sub_619060
*/
void sub_1130340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130340ULL || rel >= 0x1130370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130370 size=16 callers=6 calls=0
*/
void sub_1130370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130370ULL || rel >= 0x1130380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130380 size=16 callers=1 calls=0
*/
void sub_1130380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130380ULL || rel >= 0x1130390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130390 size=256 callers=4 calls=1
   calls: sub_5e3870
*/
void sub_1130390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130390ULL || rel >= 0x1130490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130490 size=16 callers=0 calls=0
*/
void sub_1130490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130490ULL || rel >= 0x11304a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011304a0 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11304a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11304a0ULL || rel >= 0x1130550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130550 size=16 callers=0 calls=0
*/
void sub_1130550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130550ULL || rel >= 0x1130560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130560 size=16 callers=0 calls=0
*/
void sub_1130560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130560ULL || rel >= 0x1130570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130570 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1130570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130570ULL || rel >= 0x1130620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130620 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1130620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130620ULL || rel >= 0x11306d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011306d0 size=16 callers=0 calls=0
*/
void sub_11306d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11306d0ULL || rel >= 0x11306e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011306e0 size=16 callers=0 calls=0
*/
void sub_11306e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11306e0ULL || rel >= 0x11306f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011306f0 size=240 callers=0 calls=2
   calls: sub_112fc80, sub_5e3870
*/
void sub_11306f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11306f0ULL || rel >= 0x11307e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011307e0 size=16 callers=0 calls=0
*/
void sub_11307e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11307e0ULL || rel >= 0x11307f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011307f0 size=16 callers=0 calls=0
*/
void sub_11307f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11307f0ULL || rel >= 0x1130800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130800 size=16 callers=0 calls=0
*/
void sub_1130800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130800ULL || rel >= 0x1130810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130810 size=32 callers=0 calls=0
*/
void sub_1130810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130810ULL || rel >= 0x1130830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130830 size=16 callers=0 calls=0
*/
void sub_1130830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130830ULL || rel >= 0x1130840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130840 size=16 callers=0 calls=0
*/
void sub_1130840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130840ULL || rel >= 0x1130850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130850 size=16 callers=0 calls=0
*/
void sub_1130850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130850ULL || rel >= 0x1130860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130860 size=32 callers=0 calls=0
*/
void sub_1130860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130860ULL || rel >= 0x1130880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130880 size=16 callers=0 calls=0
*/
void sub_1130880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130880ULL || rel >= 0x1130890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130890 size=16 callers=0 calls=0
*/
void sub_1130890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130890ULL || rel >= 0x11308a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011308a0 size=16 callers=0 calls=0
*/
void sub_11308a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11308a0ULL || rel >= 0x11308b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011308b0 size=128 callers=6 calls=0
*/
void sub_11308b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11308b0ULL || rel >= 0x1130930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130930 size=544 callers=1 calls=4
   calls: sub_1131110, sub_5cf8e0, sub_5cf8f0, sub_967240
*/
void sub_1130930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130930ULL || rel >= 0x1130b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130b50 size=16 callers=2 calls=0
*/
void sub_1130b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130b50ULL || rel >= 0x1130b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130b60 size=160 callers=0 calls=0
*/
void sub_1130b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130b60ULL || rel >= 0x1130c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130c00 size=16 callers=9 calls=0
*/
void sub_1130c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130c00ULL || rel >= 0x1130c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130c10 size=16 callers=1 calls=0
*/
void sub_1130c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130c10ULL || rel >= 0x1130c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130c20 size=48 callers=6 calls=0
*/
void sub_1130c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130c20ULL || rel >= 0x1130c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130c50 size=96 callers=0 calls=1
   calls: sub_1130930
*/
void sub_1130c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130c50ULL || rel >= 0x1130cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130cb0 size=80 callers=0 calls=0
*/
void sub_1130cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130cb0ULL || rel >= 0x1130d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130d00 size=16 callers=1 calls=0
*/
void sub_1130d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130d00ULL || rel >= 0x1130d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130d10 size=16 callers=3 calls=0
*/
void sub_1130d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130d10ULL || rel >= 0x1130d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130d20 size=208 callers=0 calls=0
*/
void sub_1130d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130d20ULL || rel >= 0x1130df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130df0 size=16 callers=0 calls=0
*/
void sub_1130df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130df0ULL || rel >= 0x1130e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130e00 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1130e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130e00ULL || rel >= 0x1130e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130e70 size=208 callers=0 calls=0
*/
void sub_1130e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130e70ULL || rel >= 0x1130f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130f40 size=16 callers=0 calls=0
*/
void sub_1130f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130f40ULL || rel >= 0x1130f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130f50 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1130f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130f50ULL || rel >= 0x1130fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01130fc0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1130fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130fc0ULL || rel >= 0x1131030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131030 size=208 callers=0 calls=0
*/
void sub_1131030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131030ULL || rel >= 0x1131100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131100 size=16 callers=0 calls=0
*/
void sub_1131100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131100ULL || rel >= 0x1131110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131110 size=352 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_1131110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131110ULL || rel >= 0x1131270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131270 size=208 callers=0 calls=0
*/
void sub_1131270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131270ULL || rel >= 0x1131340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131340 size=16 callers=0 calls=0
*/
void sub_1131340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131340ULL || rel >= 0x1131350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131350 size=16 callers=0 calls=0
*/
void sub_1131350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131350ULL || rel >= 0x1131360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131360 size=16 callers=0 calls=0
*/
void sub_1131360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131360ULL || rel >= 0x1131370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131370 size=288 callers=2 calls=5
   calls: sub_1131490, sub_11315f0, sub_1131790, sub_5db1b0, sub_969e30
*/
void sub_1131370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131370ULL || rel >= 0x1131490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131490 size=352 callers=1 calls=0
*/
void sub_1131490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131490ULL || rel >= 0x11315f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011315f0 size=416 callers=1 calls=2
   calls: sub_1131da0, sub_1133180
*/
void sub_11315f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11315f0ULL || rel >= 0x1131790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131790 size=592 callers=1 calls=0
*/
void sub_1131790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131790ULL || rel >= 0x11319e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011319e0 size=16 callers=4 calls=0
*/
void sub_11319e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11319e0ULL || rel >= 0x11319f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011319f0 size=288 callers=2 calls=2
   calls: sub_1131b10, sub_5e2bc0
*/
void sub_11319f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11319f0ULL || rel >= 0x1131b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131b10 size=656 callers=3 calls=4
   calls: sub_1130d10, sub_1131da0, sub_1133180, sub_1133410
*/
void sub_1131b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131b10ULL || rel >= 0x1131da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131da0 size=448 callers=5 calls=1
   calls: sub_5e2bc0
*/
void sub_1131da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131da0ULL || rel >= 0x1131f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01131f60 size=448 callers=28 calls=5
   calls: sub_1132120, sub_1133630, sub_17c1b70, sub_68d950, sub_68da30
*/
void sub_1131f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131f60ULL || rel >= 0x1132120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132120 size=352 callers=2 calls=0
*/
void sub_1132120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132120ULL || rel >= 0x1132280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132280 size=144 callers=7 calls=1
   calls: sub_68d9b0
*/
void sub_1132280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132280ULL || rel >= 0x1132310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132310 size=144 callers=16 calls=1
   calls: sub_68d9f0
*/
void sub_1132310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132310ULL || rel >= 0x11323a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011323a0 size=80 callers=6 calls=0
*/
void sub_11323a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11323a0ULL || rel >= 0x11323f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011323f0 size=368 callers=1 calls=1
   calls: sub_11337f0
*/
void sub_11323f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11323f0ULL || rel >= 0x1132560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132560 size=320 callers=0 calls=3
   calls: sub_1130b50, sub_1132120, sub_68d9f0
*/
void sub_1132560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132560ULL || rel >= 0x11326a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011326a0 size=512 callers=0 calls=4
   calls: sub_1133c30, sub_5e2930, sub_68f670, sub_96bb80
*/
void sub_11326a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11326a0ULL || rel >= 0x11328a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011328a0 size=320 callers=0 calls=3
   calls: sub_1130d10, sub_59bee0, sub_967240
*/
void sub_11328a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11328a0ULL || rel >= 0x11329e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011329e0 size=400 callers=0 calls=6
   calls: sub_1130d10, sub_5d99d0, sub_68d630, sub_68da40, sub_967240, sub_98eec0
*/
void sub_11329e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11329e0ULL || rel >= 0x1132b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132b70 size=192 callers=0 calls=4
   calls: sub_1131da0, sub_17c1b90, sub_68d9f0, sub_68da30
*/
void sub_1132b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132b70ULL || rel >= 0x1132c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132c30 size=16 callers=0 calls=0
*/
void sub_1132c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132c30ULL || rel >= 0x1132c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132c40 size=496 callers=0 calls=1
   calls: sub_1131da0
*/
void sub_1132c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132c40ULL || rel >= 0x1132e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132e30 size=16 callers=0 calls=0
*/
void sub_1132e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132e30ULL || rel >= 0x1132e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132e40 size=112 callers=0 calls=1
   calls: sub_11330d0
*/
void sub_1132e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132e40ULL || rel >= 0x1132eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132eb0 size=16 callers=0 calls=0
*/
void sub_1132eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132eb0ULL || rel >= 0x1132ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132ec0 size=16 callers=0 calls=0
*/
void sub_1132ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132ec0ULL || rel >= 0x1132ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132ed0 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_1132ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132ed0ULL || rel >= 0x1132fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01132fc0 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_1132fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132fc0ULL || rel >= 0x11330b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011330b0 size=16 callers=0 calls=0
*/
void sub_11330b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11330b0ULL || rel >= 0x11330c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011330c0 size=16 callers=0 calls=0
*/
void sub_11330c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11330c0ULL || rel >= 0x11330d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011330d0 size=176 callers=2 calls=1
   calls: sub_607750
*/
void sub_11330d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11330d0ULL || rel >= 0x1133180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133180 size=656 callers=4 calls=0
*/
void sub_1133180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133180ULL || rel >= 0x1133410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133410 size=544 callers=1 calls=2
   calls: sub_1131da0, sub_1133180
*/
void sub_1133410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133410ULL || rel >= 0x1133630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133630 size=448 callers=1 calls=0
*/
void sub_1133630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133630ULL || rel >= 0x11337f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011337f0 size=800 callers=1 calls=0
*/
void sub_11337f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11337f0ULL || rel >= 0x1133b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133b10 size=240 callers=0 calls=3
   calls: sub_5e2930, sub_5e3870, sub_96bb80
*/
void sub_1133b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133b10ULL || rel >= 0x1133c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133c00 size=16 callers=0 calls=0
*/
void sub_1133c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133c00ULL || rel >= 0x1133c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133c10 size=16 callers=0 calls=0
*/
void sub_1133c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133c10ULL || rel >= 0x1133c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133c20 size=16 callers=0 calls=0
*/
void sub_1133c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133c20ULL || rel >= 0x1133c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133c30 size=16 callers=13 calls=0
*/
void sub_1133c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133c30ULL || rel >= 0x1133c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133c40 size=16 callers=3 calls=0
*/
void sub_1133c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133c40ULL || rel >= 0x1133c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133c50 size=64 callers=0 calls=0
*/
void sub_1133c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133c50ULL || rel >= 0x1133c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133c90 size=688 callers=2 calls=7
   calls: sub_1133f40, sub_113d1e0, sub_113d2d0, sub_115ff00, sub_116bb90, sub_116ef10, sub_1170060
*/
void sub_1133c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133c90ULL || rel >= 0x1133f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01133f40 size=352 callers=1 calls=0
*/
void sub_1133f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133f40ULL || rel >= 0x11340a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011340a0 size=48 callers=0 calls=1
   calls: sub_11340d0
*/
void sub_11340a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11340a0ULL || rel >= 0x11340d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011340d0 size=288 callers=1 calls=3
   calls: sub_113d780, sub_5d99d0, sub_967240
*/
void sub_11340d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11340d0ULL || rel >= 0x11341f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011341f0 size=2688 callers=0 calls=28
   calls: EffHeadCenter01_2, EffectStart, mouth01, sub_1108730, sub_110c850, sub_110c8d0, sub_110c950, sub_11274b0, sub_11294d0, sub_1130c00, sub_1134c70, sub_1134e80
   ... +16 more
   ref: turn_start_duration
   ref: EffCenter01
   ref: EffMouth01
   ref: turn_end_duration
   ref: turn_start_offset
   ref: EffHeadCenter%02d
*/
void turn_start_duration(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11341f0ULL || rel >= 0x1134c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01134c70 size=528 callers=4 calls=5
   calls: sub_113e7a0, sub_1164130, sub_5cf8e0, sub_5cf8f0, sub_967240
*/
void sub_1134c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1134c70ULL || rel >= 0x1134e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01134e80 size=288 callers=1 calls=8
   calls: sub_1108730, sub_1127360, sub_115a6f0, sub_115ba10, sub_115f6b0, sub_115f700, sub_768ef0, sub_784760
*/
void sub_1134e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1134e80ULL || rel >= 0x1134fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01134fa0 size=16 callers=195 calls=0
*/
void sub_1134fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1134fa0ULL || rel >= 0x1134fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01134fb0 size=320 callers=0 calls=9
   calls: sub_11350f0, sub_11355e0, sub_1135a30, sub_1160470, sub_11611a0, sub_1161550, sub_1170270, sub_5cf8e0, sub_5cf8f0
*/
void sub_1134fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1134fb0ULL || rel >= 0x11350f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011350f0 size=1264 callers=1 calls=9
   calls: fi_move_speed_3, sub_112e830, sub_112e920, sub_112ea00, sub_11365e0, sub_116c4d0, sub_116deb0, sub_116df70, sub_972c70
*/
void sub_11350f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11350f0ULL || rel >= 0x11355e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011355e0 size=1104 callers=1 calls=11
   calls: sub_112e750, sub_112e830, sub_112ea00, sub_11362c0, sub_116c4d0, sub_116ddb0, sub_116deb0, sub_116df70, sub_65d220, sub_971950, sub_972c70
*/
void sub_11355e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11355e0ULL || rel >= 0x1135a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01135a30 size=384 callers=1 calls=6
   calls: sub_1134c70, sub_1136390, sub_115f6b0, sub_1164120, sub_116d900, sub_116db10
*/
void sub_1135a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1135a30ULL || rel >= 0x1135bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01135bb0 size=320 callers=0 calls=6
   calls: sub_112e920, sub_1135cf0, sub_1135fd0, sub_11611a0, sub_1161550, sub_11710c0
*/
void sub_1135bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1135bb0ULL || rel >= 0x1135cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01135cf0 size=736 callers=1 calls=5
   calls: sub_116c4d0, sub_116d900, sub_116deb0, sub_116df70, sub_11710c0
*/
void sub_1135cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1135cf0ULL || rel >= 0x1135fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01135fd0 size=368 callers=1 calls=4
   calls: sub_113e1f0, sub_1160ce0, sub_1160d50, sub_1162d40
*/
void sub_1135fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1135fd0ULL || rel >= 0x1136140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136140 size=96 callers=2 calls=2
   calls: sub_116c4d0, sub_116deb0
*/
void sub_1136140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136140ULL || rel >= 0x11361a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011361a0 size=16 callers=17 calls=0
*/
void sub_11361a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11361a0ULL || rel >= 0x11361b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011361b0 size=160 callers=2 calls=3
   calls: sub_112ea00, sub_11365e0, sub_972c70
*/
void sub_11361b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11361b0ULL || rel >= 0x1136250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136250 size=112 callers=5 calls=2
   calls: sub_116c4d0, sub_116deb0
*/
void sub_1136250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136250ULL || rel >= 0x11362c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011362c0 size=208 callers=1 calls=3
   calls: sub_1178b10, sub_59b250, sub_5b92f0
*/
void sub_11362c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11362c0ULL || rel >= 0x1136390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136390 size=192 callers=7 calls=2
   calls: sub_113e9c0, sub_1160d50
*/
void sub_1136390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136390ULL || rel >= 0x1136450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136450 size=96 callers=14 calls=1
   calls: sub_115f6b0
*/
void sub_1136450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136450ULL || rel >= 0x11364b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011364b0 size=16 callers=14 calls=0
*/
void sub_11364b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11364b0ULL || rel >= 0x11364c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011364c0 size=16 callers=11 calls=0
*/
void sub_11364c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11364c0ULL || rel >= 0x11364d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011364d0 size=224 callers=2 calls=2
   calls: sub_110c950, sub_116bb10
*/
void sub_11364d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11364d0ULL || rel >= 0x11365b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011365b0 size=16 callers=1 calls=0
*/
void sub_11365b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11365b0ULL || rel >= 0x11365c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011365c0 size=16 callers=2 calls=0
*/
void sub_11365c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11365c0ULL || rel >= 0x11365d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011365d0 size=16 callers=15 calls=0
*/
void sub_11365d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11365d0ULL || rel >= 0x11365e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011365e0 size=816 callers=2 calls=8
   calls: sub_112e750, sub_112e830, sub_11364d0, sub_116c4d0, sub_116deb0, sub_116df70, sub_971950, sub_9733f0
*/
void sub_11365e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11365e0ULL || rel >= 0x1136910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136910 size=16 callers=49 calls=0
*/
void sub_1136910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136910ULL || rel >= 0x1136920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136920 size=48 callers=1 calls=1
   calls: sub_1108730
*/
void sub_1136920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136920ULL || rel >= 0x1136950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136950 size=656 callers=13 calls=4
   calls: sub_112e660, sub_112e830, sub_112ea00, sub_612f70
*/
void sub_1136950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136950ULL || rel >= 0x1136be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136be0 size=48 callers=1 calls=1
   calls: sub_110c990
*/
void sub_1136be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136be0ULL || rel >= 0x1136c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136c10 size=16 callers=1 calls=0
*/
void sub_1136c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136c10ULL || rel >= 0x1136c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136c20 size=32 callers=5 calls=1
   calls: sub_1178b20
*/
void sub_1136c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136c20ULL || rel >= 0x1136c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136c40 size=16 callers=1 calls=0
*/
void sub_1136c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136c40ULL || rel >= 0x1136c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136c50 size=144 callers=2 calls=1
   calls: sub_112ea00
*/
void sub_1136c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136c50ULL || rel >= 0x1136ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136ce0 size=576 callers=1 calls=2
   calls: sub_112e830, sub_112ea00
*/
void sub_1136ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136ce0ULL || rel >= 0x1136f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136f20 size=80 callers=45 calls=1
   calls: sub_115f6b0
*/
void sub_1136f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136f20ULL || rel >= 0x1136f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136f70 size=80 callers=1 calls=0
*/
void sub_1136f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136f70ULL || rel >= 0x1136fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01136fc0 size=80 callers=31 calls=1
   calls: sub_115f6b0
*/
void sub_1136fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136fc0ULL || rel >= 0x1137010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01137010 size=96 callers=1 calls=0
*/
void sub_1137010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137010ULL || rel >= 0x1137070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01137070 size=32 callers=12 calls=0
*/
void sub_1137070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137070ULL || rel >= 0x1137090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01137090 size=144 callers=1 calls=1
   calls: sub_1137120
*/
void sub_1137090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137090ULL || rel >= 0x1137120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01137120 size=576 callers=4 calls=7
   calls: fi_move_speed, sub_1127360, sub_1144730, sub_115ade0, sub_115f6b0, sub_1160e20, sub_967240
*/
void sub_1137120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137120ULL || rel >= 0x1137360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01137360 size=144 callers=1 calls=1
   calls: sub_1137120
*/
void sub_1137360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137360ULL || rel >= 0x11373f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011373f0 size=160 callers=1 calls=2
   calls: sub_1137490, sub_11378f0
*/
void sub_11373f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11373f0ULL || rel >= 0x1137490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01137490 size=1120 callers=31 calls=8
   calls: sub_11274b0, sub_1129060, sub_1131f60, sub_1132310, sub_1164e00, sub_1306f20, sub_5cfad0, sub_967240
*/
void sub_1137490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137490ULL || rel >= 0x11378f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011378f0 size=576 callers=8 calls=7
   calls: fi_move_speed, sub_1127360, sub_1144730, sub_115ade0, sub_115f6b0, sub_1160e20, sub_967240
*/
void sub_11378f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11378f0ULL || rel >= 0x1137b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01137b30 size=160 callers=1 calls=2
   calls: sub_1137490, sub_11378f0
*/
void sub_1137b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137b30ULL || rel >= 0x1137bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01137bd0 size=496 callers=1 calls=8
   calls: sub_11091d0, sub_11274b0, sub_1131f60, sub_11378f0, sub_116d7e0, sub_116f1d0, sub_1306f20, sub_967240
*/
void sub_1137bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137bd0ULL || rel >= 0x1137dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01137dc0 size=736 callers=1 calls=11
   calls: sub_11091d0, sub_11274b0, sub_1129060, sub_1131f60, sub_11378f0, sub_116f1d0, sub_1306f20, sub_59a4f0, sub_967240, sub_b44bb0, to_kw21_sleepA01
   ref: @Play_Camp_Sleep
*/
void Play_Camp_Sleep(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137dc0ULL || rel >= 0x11380a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011380a0 size=816 callers=2 calls=13
   calls: sub_11091d0, sub_11274b0, sub_1129060, sub_1131f60, sub_115f6b0, sub_1160e20, sub_116f1c0, sub_116f1d0, sub_1306f20, sub_59a4f0, sub_967240, sub_b44bb0
   ... +1 more
   ref: @Play_Camp_Sleep
*/
void Play_Camp_Sleep_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11380a0ULL || rel >= 0x11383d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011383d0 size=144 callers=10 calls=1
   calls: sub_115f6b0
*/
void sub_11383d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11383d0ULL || rel >= 0x1138460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01138460 size=656 callers=2 calls=8
   calls: sub_11274b0, sub_1131f60, sub_115f6b0, sub_1160e20, sub_1306f20, sub_59a4f0, sub_967240, sub_b44bb0
*/
void sub_1138460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1138460ULL || rel >= 0x11386f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011386f0 size=192 callers=1 calls=3
   calls: sub_1137490, sub_115f6b0, sub_1160e20
*/
void sub_11386f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11386f0ULL || rel >= 0x11387b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011387b0 size=224 callers=1 calls=6
   calls: sub_1136950, sub_115f6b0, sub_1160e20, sub_116f1d0, sub_11706e0, sub_bf05e0
*/
void sub_11387b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11387b0ULL || rel >= 0x1138890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01138890 size=544 callers=2 calls=10
   calls: kw20_drowse01_Enabled_4, sub_11091d0, sub_11274b0, sub_1129060, sub_1131f60, sub_1160e20, sub_116f1c0, sub_116f1d0, sub_1306f20, sub_967240
   ref: Play_UI_Emotional_Sleep
*/
void Play_UI_Emotional_Sleep(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1138890ULL || rel >= 0x1138ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01138ab0 size=448 callers=1 calls=7
   calls: kw20_drowse01_Enabled_3, sub_11274b0, sub_1129060, sub_1132280, sub_116f1c0, sub_1306f20, sub_967240
   ref: Play_UI_Emotional_Awake
*/
void Play_UI_Emotional_Awake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1138ab0ULL || rel >= 0x1138c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01138c70 size=1104 callers=7 calls=17
   calls: Play_Camp_recover, sub_1108730, sub_1109190, sub_1127360, sub_1144140, sub_1144240, sub_115ade0, sub_115b4a0, sub_115f6b0, sub_115f700, sub_1160e20, sub_1161430
   ... +5 more
*/
void sub_1138c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1138c70ULL || rel >= 0x11390c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011390c0 size=192 callers=4 calls=2
   calls: sub_115f6b0, sub_115f700
*/
void sub_11390c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11390c0ULL || rel >= 0x1139180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139180 size=16 callers=7 calls=0
*/
void sub_1139180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139180ULL || rel >= 0x1139190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139190 size=528 callers=2 calls=8
   calls: sub_1108730, sub_11274b0, sub_1129060, sub_1131f60, sub_115f6b0, sub_1306f20, sub_765ac0, sub_967240
   ref: Play_Camp_recover
*/
void Play_Camp_recover(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139190ULL || rel >= 0x11393a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011393a0 size=624 callers=3 calls=7
   calls: sub_1127360, sub_11441c0, sub_115b300, sub_115f6b0, sub_115f700, sub_1160e20, sub_967240
*/
void sub_11393a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11393a0ULL || rel >= 0x1139610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139610 size=256 callers=1 calls=8
   calls: sub_1139720, sub_113e9c0, sub_1160d50, sub_1160e20, sub_1161430, sub_1172730, sub_1172950, sub_1172f50
*/
void sub_1139610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139610ULL || rel >= 0x1139710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139710 size=16 callers=6 calls=0
*/
void sub_1139710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139710ULL || rel >= 0x1139720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139720 size=176 callers=7 calls=3
   calls: sub_1139c30, sub_113e9c0, sub_1160d60
*/
void sub_1139720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139720ULL || rel >= 0x11397d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011397d0 size=288 callers=15 calls=3
   calls: sub_113e1f0, sub_1160cf0, sub_1161280
*/
void sub_11397d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11397d0ULL || rel >= 0x11398f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011398f0 size=16 callers=2 calls=0
*/
void sub_11398f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11398f0ULL || rel >= 0x1139900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139900 size=384 callers=1 calls=4
   calls: sub_11274b0, sub_11323a0, sub_1306f20, sub_967240
*/
void sub_1139900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139900ULL || rel >= 0x1139a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139a80 size=384 callers=1 calls=4
   calls: sub_11274b0, sub_1132310, sub_1306f20, sub_967240
*/
void sub_1139a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139a80ULL || rel >= 0x1139c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139c00 size=48 callers=1 calls=0
*/
void sub_1139c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139c00ULL || rel >= 0x1139c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139c30 size=592 callers=7 calls=4
   calls: sub_113c6a0, sub_115f6b0, sub_115f700, sub_967240
*/
void sub_1139c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139c30ULL || rel >= 0x1139e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139e80 size=16 callers=2 calls=0
*/
void sub_1139e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139e80ULL || rel >= 0x1139e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139e90 size=128 callers=9 calls=2
   calls: sub_113e9c0, sub_1160d60
*/
void sub_1139e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139e90ULL || rel >= 0x1139f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01139f10 size=576 callers=1 calls=7
   calls: fi_move_speed, sub_1127360, sub_1144730, sub_115ade0, sub_115f6b0, sub_1160e20, sub_967240
*/
void sub_1139f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139f10ULL || rel >= 0x113a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a150 size=80 callers=0 calls=1
   calls: sub_1160e20
*/
void sub_113a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a150ULL || rel >= 0x113a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a1a0 size=16 callers=9 calls=0
*/
void sub_113a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a1a0ULL || rel >= 0x113a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a1b0 size=16 callers=1 calls=0
*/
void sub_113a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a1b0ULL || rel >= 0x113a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a1c0 size=496 callers=7 calls=4
   calls: sub_113c6a0, sub_115f6b0, sub_115f700, sub_967240
*/
void sub_113a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a1c0ULL || rel >= 0x113a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a3b0 size=32 callers=8 calls=1
   calls: sub_1108730
*/
void sub_113a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a3b0ULL || rel >= 0x113a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a3d0 size=256 callers=3 calls=2
   calls: sub_115f6b0, sub_1160e20
*/
void sub_113a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a3d0ULL || rel >= 0x113a4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a4d0 size=96 callers=24 calls=1
   calls: sub_1165d10
*/
void sub_113a4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a4d0ULL || rel >= 0x113a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a530 size=16 callers=3 calls=0
*/
void sub_113a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a530ULL || rel >= 0x113a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a540 size=16 callers=6 calls=0
*/
void sub_113a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a540ULL || rel >= 0x113a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a550 size=32 callers=2 calls=0
*/
void sub_113a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a550ULL || rel >= 0x113a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a570 size=16 callers=1 calls=0
*/
void sub_113a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a570ULL || rel >= 0x113a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a580 size=80 callers=6 calls=1
   calls: sub_1165d10
*/
void sub_113a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a580ULL || rel >= 0x113a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a5d0 size=16 callers=1 calls=0
*/
void sub_113a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a5d0ULL || rel >= 0x113a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a5e0 size=96 callers=1 calls=2
   calls: sub_1160e20, sub_1165d10
*/
void sub_113a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a5e0ULL || rel >= 0x113a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a640 size=80 callers=2 calls=2
   calls: sub_113e9c0, sub_1160d50
*/
void sub_113a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a640ULL || rel >= 0x113a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0113a690 size=80 callers=3 calls=2
   calls: sub_113e9c0, sub_1160d50
*/
void sub_113a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a690ULL || rel >= 0x113a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

