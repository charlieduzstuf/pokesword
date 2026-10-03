/* main functions 0121fef0..01238370 (152 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0121fef0 size=16 callers=0 calls=0
*/
void sub_121fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121fef0ULL || rel >= 0x121ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121ff00 size=16 callers=0 calls=0
*/
void sub_121ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121ff00ULL || rel >= 0x121ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121ff10 size=16 callers=0 calls=0
*/
void sub_121ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121ff10ULL || rel >= 0x121ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121ff20 size=16 callers=0 calls=0
*/
void sub_121ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121ff20ULL || rel >= 0x121ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121ff30 size=16 callers=0 calls=0
*/
void sub_121ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121ff30ULL || rel >= 0x121ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121ff40 size=16 callers=0 calls=0
*/
void sub_121ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121ff40ULL || rel >= 0x121ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121ff50 size=16 callers=0 calls=0
*/
void sub_121ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121ff50ULL || rel >= 0x121ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121ff60 size=16 callers=0 calls=0
*/
void sub_121ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121ff60ULL || rel >= 0x121ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0121ff70 size=288 callers=0 calls=6
   calls: sub_1172770, sub_1172950, sub_1173090, sub_117dca0, sub_11b2a40, sub_ea8c70
*/
void sub_121ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121ff70ULL || rel >= 0x1220090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220090 size=64 callers=0 calls=0
*/
void sub_1220090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220090ULL || rel >= 0x12200d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012200d0 size=80 callers=0 calls=0
*/
void sub_12200d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12200d0ULL || rel >= 0x1220120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220120 size=48 callers=0 calls=0
*/
void sub_1220120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220120ULL || rel >= 0x1220150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220150 size=160 callers=0 calls=2
   calls: sub_1174a00, sub_1198980
*/
void sub_1220150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220150ULL || rel >= 0x12201f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012201f0 size=16 callers=0 calls=0
*/
void sub_12201f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12201f0ULL || rel >= 0x1220200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220200 size=16 callers=0 calls=0
*/
void sub_1220200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220200ULL || rel >= 0x1220210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220210 size=16 callers=0 calls=0
*/
void sub_1220210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220210ULL || rel >= 0x1220220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220220 size=160 callers=0 calls=2
   calls: sub_1139610, sub_bf05e0
*/
void sub_1220220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220220ULL || rel >= 0x12202c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012202c0 size=16 callers=0 calls=0
*/
void sub_12202c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12202c0ULL || rel >= 0x12202d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012202d0 size=16 callers=0 calls=0
*/
void sub_12202d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12202d0ULL || rel >= 0x12202e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012202e0 size=16 callers=0 calls=0
*/
void sub_12202e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12202e0ULL || rel >= 0x12202f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012202f0 size=384 callers=0 calls=1
   calls: sub_972c70
*/
void sub_12202f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12202f0ULL || rel >= 0x1220470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220470 size=96 callers=0 calls=0
*/
void sub_1220470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220470ULL || rel >= 0x12204d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012204d0 size=96 callers=0 calls=0
*/
void sub_12204d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12204d0ULL || rel >= 0x1220530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220530 size=16 callers=0 calls=0
*/
void sub_1220530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220530ULL || rel >= 0x1220540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220540 size=368 callers=2 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1220540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220540ULL || rel >= 0x12206b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012206b0 size=96 callers=0 calls=0
*/
void sub_12206b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12206b0ULL || rel >= 0x1220710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220710 size=64 callers=0 calls=0
*/
void sub_1220710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220710ULL || rel >= 0x1220750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220750 size=32 callers=0 calls=0
*/
void sub_1220750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220750ULL || rel >= 0x1220770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220770 size=32 callers=0 calls=0
*/
void sub_1220770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220770ULL || rel >= 0x1220790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220790 size=400 callers=2 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1220790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220790ULL || rel >= 0x1220920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220920 size=160 callers=0 calls=0
*/
void sub_1220920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220920ULL || rel >= 0x12209c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012209c0 size=80 callers=0 calls=0
*/
void sub_12209c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12209c0ULL || rel >= 0x1220a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220a10 size=96 callers=0 calls=0
*/
void sub_1220a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220a10ULL || rel >= 0x1220a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220a70 size=96 callers=0 calls=0
*/
void sub_1220a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220a70ULL || rel >= 0x1220ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220ad0 size=96 callers=0 calls=2
   calls: sub_113a690, sub_1160e20
*/
void sub_1220ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220ad0ULL || rel >= 0x1220b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220b30 size=16 callers=0 calls=0
*/
void sub_1220b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220b30ULL || rel >= 0x1220b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220b40 size=16 callers=0 calls=0
*/
void sub_1220b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220b40ULL || rel >= 0x1220b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220b50 size=16 callers=0 calls=0
*/
void sub_1220b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220b50ULL || rel >= 0x1220b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220b60 size=144 callers=0 calls=3
   calls: sub_1174cb0, sub_117bf10, sub_117bfb0
*/
void sub_1220b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220b60ULL || rel >= 0x1220bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220bf0 size=16 callers=0 calls=0
*/
void sub_1220bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220bf0ULL || rel >= 0x1220c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220c00 size=16 callers=0 calls=0
*/
void sub_1220c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220c00ULL || rel >= 0x1220c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220c10 size=16 callers=0 calls=0
*/
void sub_1220c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220c10ULL || rel >= 0x1220c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220c20 size=544 callers=0 calls=10
   calls: sub_1124520, sub_112e3d0, sub_1136950, sub_1139c30, sub_115a6f0, sub_115b710, sub_115bb40, sub_115bc00, sub_11611a0, sub_bf0730
*/
void sub_1220c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220c20ULL || rel >= 0x1220e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220e40 size=16 callers=0 calls=0
*/
void sub_1220e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220e40ULL || rel >= 0x1220e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220e50 size=32 callers=0 calls=0
*/
void sub_1220e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220e50ULL || rel >= 0x1220e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220e70 size=32 callers=0 calls=0
*/
void sub_1220e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220e70ULL || rel >= 0x1220e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220e90 size=80 callers=0 calls=1
   calls: sub_115a6e0
*/
void sub_1220e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220e90ULL || rel >= 0x1220ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220ee0 size=16 callers=0 calls=0
*/
void sub_1220ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220ee0ULL || rel >= 0x1220ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220ef0 size=16 callers=0 calls=0
*/
void sub_1220ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220ef0ULL || rel >= 0x1220f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220f00 size=16 callers=0 calls=0
*/
void sub_1220f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220f00ULL || rel >= 0x1220f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220f10 size=16 callers=0 calls=0
*/
void sub_1220f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220f10ULL || rel >= 0x1220f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220f20 size=16 callers=0 calls=0
*/
void sub_1220f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220f20ULL || rel >= 0x1220f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220f30 size=16 callers=0 calls=0
*/
void sub_1220f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220f30ULL || rel >= 0x1220f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220f40 size=16 callers=0 calls=0
*/
void sub_1220f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220f40ULL || rel >= 0x1220f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01220f50 size=240 callers=0 calls=0
*/
void sub_1220f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1220f50ULL || rel >= 0x1221040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01221040 size=800 callers=0 calls=14
   calls: object, pokecamp_npccamp, sub_10617a0, sub_1115380, sub_1179ec0, sub_1179ed0, sub_1179ee0, sub_1179f00, sub_1179f10, sub_117dca0, sub_117faf0, sub_11802c0
   ... +2 more
*/
void sub_1221040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1221040ULL || rel >= 0x1221360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01221360 size=4032 callers=0 calls=21
   calls: sub_1128e20, sub_112e830, sub_112ea00, sub_1157ef0, sub_1158640, sub_115bc00, sub_1179ee0, sub_117dca0, sub_117faf0, sub_118e5b0, sub_118e6c0, sub_11b5df0
   ... +9 more
   ref: Set_State_Camp_Playground
*/
void Set_State_Camp_Playground_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1221360ULL || rel >= 0x1222320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222320 size=288 callers=1 calls=3
   calls: sub_1191f70, sub_5d99d0, sub_967240
*/
void sub_1222320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222320ULL || rel >= 0x1222440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222440 size=128 callers=0 calls=1
   calls: sub_1370970
*/
void sub_1222440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222440ULL || rel >= 0x12224c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012224c0 size=112 callers=0 calls=0
*/
void sub_12224c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12224c0ULL || rel >= 0x1222530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222530 size=112 callers=0 calls=0
*/
void sub_1222530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222530ULL || rel >= 0x12225a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012225a0 size=112 callers=0 calls=0
*/
void sub_12225a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12225a0ULL || rel >= 0x1222610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222610 size=80 callers=0 calls=1
   calls: sub_115ba20
*/
void sub_1222610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222610ULL || rel >= 0x1222660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222660 size=16 callers=0 calls=0
*/
void sub_1222660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222660ULL || rel >= 0x1222670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222670 size=16 callers=0 calls=0
*/
void sub_1222670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222670ULL || rel >= 0x1222680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222680 size=16 callers=0 calls=0
*/
void sub_1222680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222680ULL || rel >= 0x1222690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222690 size=400 callers=0 calls=2
   calls: sub_1222830, sub_12229e0
*/
void sub_1222690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222690ULL || rel >= 0x1222820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222820 size=16 callers=0 calls=0
*/
void sub_1222820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222820ULL || rel >= 0x1222830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222830 size=432 callers=1 calls=3
   calls: sub_119e200, sub_5cf8e0, sub_5cf8f0
*/
void sub_1222830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222830ULL || rel >= 0x12229e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012229e0 size=48 callers=1 calls=0
*/
void sub_12229e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12229e0ULL || rel >= 0x1222a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222a10 size=16 callers=0 calls=0
*/
void sub_1222a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222a10ULL || rel >= 0x1222a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222a20 size=16 callers=0 calls=0
*/
void sub_1222a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222a20ULL || rel >= 0x1222a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222a30 size=16 callers=0 calls=0
*/
void sub_1222a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222a30ULL || rel >= 0x1222a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222a40 size=16 callers=0 calls=0
*/
void sub_1222a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222a40ULL || rel >= 0x1222a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222a50 size=16 callers=0 calls=0
*/
void sub_1222a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222a50ULL || rel >= 0x1222a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222a60 size=80 callers=0 calls=4
   calls: sub_115b9f0, sub_136b840, sub_d63430, unit_obj_tent01_cloth01_01_01_bld_2
*/
void sub_1222a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222a60ULL || rel >= 0x1222ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222ab0 size=16 callers=0 calls=0
*/
void sub_1222ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222ab0ULL || rel >= 0x1222ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222ac0 size=16 callers=0 calls=0
*/
void sub_1222ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222ac0ULL || rel >= 0x1222ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222ad0 size=16 callers=0 calls=0
*/
void sub_1222ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222ad0ULL || rel >= 0x1222ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222ae0 size=512 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bf0820
*/
void sub_1222ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222ae0ULL || rel >= 0x1222ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222ce0 size=208 callers=0 calls=0
*/
void sub_1222ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222ce0ULL || rel >= 0x1222db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01222db0 size=1088 callers=0 calls=11
   calls: sub_1128e20, sub_1157ef0, sub_117dca0, sub_12118a0, sub_12231f0, sub_1223540, sub_12238b0, sub_972c70, sub_c5ad80, sub_e91100, sub_eeb410
   ref: Set_State_Camp_Eating
*/
void Set_State_Camp_Eating(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1222db0ULL || rel >= 0x12231f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012231f0 size=848 callers=1 calls=8
   calls: sub_1113c90, sub_111b250, sub_11308b0, sub_1157620, sub_117dca0, sub_12291c0, sub_12292c0, sub_1c0
*/
void sub_12231f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12231f0ULL || rel >= 0x1223540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01223540 size=880 callers=1 calls=13
   calls: sub_110c6a0, sub_1148c40, sub_117dca0, sub_122b8a0, sub_598de0, sub_5d99d0, sub_5e2bc0, sub_618ec0, sub_986200, sub_989700, sub_b8b050, sub_c52c40
   ... +1 more
*/
void sub_1223540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1223540ULL || rel >= 0x12238b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012238b0 size=448 callers=1 calls=6
   calls: sub_117dca0, sub_618ec0, sub_65cd70, sub_65cd90, sub_986200, sub_989700
*/
void sub_12238b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12238b0ULL || rel >= 0x1223a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01223a70 size=48 callers=0 calls=0
*/
void sub_1223a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1223a70ULL || rel >= 0x1223aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01223aa0 size=1888 callers=0 calls=10
   calls: sub_1157ef0, sub_1179ec0, sub_1179ed0, sub_117ae60, sub_117dca0, sub_117faf0, sub_1180360, sub_1205b60, sub_12104b0, sub_1222ae0
*/
void sub_1223aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1223aa0ULL || rel >= 0x1224200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01224200 size=4128 callers=0 calls=17
   calls: sub_1127360, sub_1133c30, sub_113a3b0, sub_1157ef0, sub_115ab80, sub_115ba20, sub_115bb40, sub_1179ee0, sub_117dca0, sub_117faf0, sub_122b210, sub_1449b60
   ... +5 more
   ref: sd8015_camp
*/
void sd8015_camp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1224200ULL || rel >= 0x1225220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01225220 size=3136 callers=0 calls=14
   calls: meal_eat_strat_stop, sub_1108730, sub_1133c30, sub_1134fa0, sub_1157ef0, sub_117dca0, sub_1225e60, sub_13a4f20, sub_65d700, sub_67b990, sub_762930, sub_967240
   ... +2 more
   ref: sd8016_eat
*/
void sd8016_eat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1225220ULL || rel >= 0x1225e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01225e60 size=480 callers=3 calls=0
*/
void sub_1225e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1225e60ULL || rel >= 0x1226040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01226040 size=704 callers=1 calls=13
   calls: camp_meal_state, fi_move_speed, sub_112e750, sub_112e920, sub_11361a0, sub_11364b0, sub_113aeb0, sub_113af20, sub_116c6b0, sub_11b4f50, sub_1229780, sub_967240
   ... +1 more
   ref: meal_eat_strat_stop
*/
void meal_eat_strat_stop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1226040ULL || rel >= 0x1226300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01226300 size=480 callers=0 calls=2
   calls: sub_c1b030, sub_c39c40
*/
void sub_1226300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1226300ULL || rel >= 0x12264e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012264e0 size=160 callers=0 calls=3
   calls: sub_1128e40, sub_c1bcb0, sub_c43ed0
   ref: Play_Camp_Eating_OverView
*/
void Play_Camp_Eating_OverView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12264e0ULL || rel >= 0x1226580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01226580 size=16 callers=0 calls=0
*/
void sub_1226580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1226580ULL || rel >= 0x1226590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01226590 size=16 callers=0 calls=0
*/
void sub_1226590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1226590ULL || rel >= 0x12265a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012265a0 size=544 callers=0 calls=8
   calls: sub_110c6a0, sub_1148c50, sub_11577e0, sub_117dca0, sub_967240, sub_b336a0, sub_b4c060, sub_c1bd10
*/
void sub_12265a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12265a0ULL || rel >= 0x12267c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012267c0 size=1840 callers=0 calls=25
   calls: demo_data, loc_ob_Robj01, loc_ob_Robj01_2, sub_110c6a0, sub_11156b0, sub_1127d00, sub_1127fc0, sub_1130c00, sub_1148c50, sub_117dca0, sub_1226ef0, sub_1227300
   ... +13 more
*/
void sub_12267c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12267c0ULL || rel >= 0x1226ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01226ef0 size=512 callers=1 calls=3
   calls: sub_1157ef0, sub_115ab80, sub_117dca0
*/
void sub_1226ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1226ef0ULL || rel >= 0x12270f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012270f0 size=528 callers=1 calls=6
   calls: sub_59bee0, sub_5d99d0, sub_5dc0a0, sub_607750, sub_967240, sub_b447b0
   ref: loc_ob_Robj01
*/
void loc_ob_Robj01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12270f0ULL || rel >= 0x1227300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01227300 size=1168 callers=2 calls=7
   calls: sub_1127d00, sub_1127fc0, sub_117dca0, sub_5cf8e0, sub_5cf8f0, sub_bc64a0, sub_bc64e0
*/
void sub_1227300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1227300ULL || rel >= 0x1227790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01227790 size=944 callers=1 calls=10
   calls: sub_117dca0, sub_59bee0, sub_5d99d0, sub_5dc0a0, sub_607750, sub_967240, sub_b33760, sub_b33c60, sub_b447b0, sub_b4c060
   ref: loc_ob_Robj01
*/
void loc_ob_Robj01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1227790ULL || rel >= 0x1227b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01227b40 size=368 callers=1 calls=2
   calls: sub_113c6a0, sub_115ab80
*/
void sub_1227b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1227b40ULL || rel >= 0x1227cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01227cb0 size=1264 callers=2 calls=14
   calls: sub_117dca0, sub_5cf8e0, sub_5cf8f0, sub_619060, sub_96c590, sub_96ccf0, sub_c79200, sub_d28300, sub_ed29e0, sub_ed32f0, sub_ed34f0, sub_ed3e60
   ... +2 more
*/
void sub_1227cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1227cb0ULL || rel >= 0x12281a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012281a0 size=208 callers=1 calls=4
   calls: sub_59bee0, sub_619060, sub_b33640, sub_b4c060
*/
void sub_12281a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12281a0ULL || rel >= 0x1228270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01228270 size=608 callers=0 calls=8
   calls: sub_1127fc0, sub_117dca0, sub_12284d0, sub_1228980, sub_12fa580, sub_5cf8e0, sub_5cf8f0, sub_c44410
*/
void sub_1228270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1228270ULL || rel >= 0x12284d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012284d0 size=1200 callers=1 calls=24
   calls: sub_1108730, sub_1134fa0, sub_1179ef0, sub_1179f70, sub_1179f90, sub_117dca0, sub_117faf0, sub_136e8b0, sub_1370690, sub_13706d0, sub_1370760, sub_5c63d0
   ... +12 more
*/
void sub_12284d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12284d0ULL || rel >= 0x1228980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01228980 size=1344 callers=1 calls=12
   calls: sub_1157ef0, sub_1158640, sub_117aee0, sub_117af10, sub_117dca0, sub_1180480, sub_763030, sub_764b40, sub_767770, sub_7678a0, sub_767950, sub_7847d0
*/
void sub_1228980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1228980ULL || rel >= 0x1228ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01228ec0 size=768 callers=0 calls=6
   calls: sub_1127d00, sub_1158640, sub_117dca0, sub_5cf8e0, sub_5cf8f0, sub_c44310
*/
void sub_1228ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1228ec0ULL || rel >= 0x12291c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012291c0 size=256 callers=1 calls=2
   calls: sub_1197960, sub_5d99d0
*/
void sub_12291c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12291c0ULL || rel >= 0x12292c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012292c0 size=800 callers=1 calls=5
   calls: sub_986200, sub_b334c0, sub_b334e0, sub_b4c060, sub_c39c40
*/
void sub_12292c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12292c0ULL || rel >= 0x12295e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012295e0 size=416 callers=2 calls=1
   calls: sub_1204dd0
*/
void sub_12295e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12295e0ULL || rel >= 0x1229780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01229780 size=864 callers=1 calls=4
   calls: sub_122c050, sub_5cf8e0, sub_5cf8f0, sub_967240
*/
void sub_1229780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1229780ULL || rel >= 0x1229ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01229ae0 size=80 callers=0 calls=1
   calls: sub_113af70
*/
void sub_1229ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1229ae0ULL || rel >= 0x1229b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01229b30 size=960 callers=0 calls=15
   calls: camp_meal_mode, sub_11361a0, sub_11364b0, sub_113aeb0, sub_116cce0, sub_1178b10, sub_59b1d0, sub_59b250, sub_5b9220, sub_5b93c0, sub_967240, sub_b44bb0
   ... +3 more
*/
void sub_1229b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1229b30ULL || rel >= 0x1229ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01229ef0 size=448 callers=0 calls=3
   calls: sub_1157ef0, sub_117ae60, sub_117dca0
*/
void sub_1229ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1229ef0ULL || rel >= 0x122a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a0b0 size=256 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_122a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a0b0ULL || rel >= 0x122a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a1b0 size=16 callers=0 calls=0
*/
void sub_122a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a1b0ULL || rel >= 0x122a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a1c0 size=16 callers=0 calls=0
*/
void sub_122a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a1c0ULL || rel >= 0x122a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a1d0 size=16 callers=0 calls=0
*/
void sub_122a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a1d0ULL || rel >= 0x122a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a1e0 size=16 callers=0 calls=0
*/
void sub_122a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a1e0ULL || rel >= 0x122a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a1f0 size=16 callers=0 calls=0
*/
void sub_122a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a1f0ULL || rel >= 0x122a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a200 size=16 callers=0 calls=0
*/
void sub_122a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a200ULL || rel >= 0x122a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a210 size=16 callers=0 calls=0
*/
void sub_122a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a210ULL || rel >= 0x122a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a220 size=16 callers=0 calls=0
*/
void sub_122a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a220ULL || rel >= 0x122a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a230 size=304 callers=0 calls=0
*/
void sub_122a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a230ULL || rel >= 0x122a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a360 size=32 callers=0 calls=0
*/
void sub_122a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a360ULL || rel >= 0x122a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a380 size=16 callers=0 calls=0
*/
void sub_122a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a380ULL || rel >= 0x122a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a390 size=32 callers=0 calls=0
*/
void sub_122a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a390ULL || rel >= 0x122a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a3b0 size=32 callers=0 calls=0
*/
void sub_122a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a3b0ULL || rel >= 0x122a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a3d0 size=16 callers=0 calls=0
*/
void sub_122a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a3d0ULL || rel >= 0x122a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a3e0 size=16 callers=0 calls=0
*/
void sub_122a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a3e0ULL || rel >= 0x122a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a3f0 size=16 callers=0 calls=0
*/
void sub_122a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a3f0ULL || rel >= 0x122a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a400 size=16 callers=0 calls=0
*/
void sub_122a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a400ULL || rel >= 0x122a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a410 size=16 callers=0 calls=0
*/
void sub_122a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a410ULL || rel >= 0x122a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a420 size=16 callers=0 calls=0
*/
void sub_122a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a420ULL || rel >= 0x122a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a430 size=16 callers=0 calls=0
*/
void sub_122a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a430ULL || rel >= 0x122a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a440 size=16 callers=0 calls=0
*/
void sub_122a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a440ULL || rel >= 0x122a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a450 size=400 callers=0 calls=2
   calls: sub_122a5f0, sub_122a840
*/
void sub_122a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a450ULL || rel >= 0x122a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a5e0 size=16 callers=0 calls=0
*/
void sub_122a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a5e0ULL || rel >= 0x122a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a5f0 size=592 callers=1 calls=3
   calls: sub_11b8ff0, sub_5cf8e0, sub_5cf8f0
*/
void sub_122a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a5f0ULL || rel >= 0x122a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a840 size=48 callers=1 calls=0
*/
void sub_122a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a840ULL || rel >= 0x122a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a870 size=16 callers=0 calls=0
*/
void sub_122a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a870ULL || rel >= 0x122a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a880 size=16 callers=0 calls=0
*/
void sub_122a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a880ULL || rel >= 0x122a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a890 size=16 callers=0 calls=0
*/
void sub_122a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a890ULL || rel >= 0x122a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a8a0 size=16 callers=0 calls=0
*/
void sub_122a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a8a0ULL || rel >= 0x122a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a8b0 size=16 callers=0 calls=0
*/
void sub_122a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a8b0ULL || rel >= 0x122a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a8c0 size=16 callers=0 calls=0
*/
void sub_122a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a8c0ULL || rel >= 0x122a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a8d0 size=16 callers=0 calls=0
*/
void sub_122a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a8d0ULL || rel >= 0x122a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a8e0 size=16 callers=0 calls=0
*/
void sub_122a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a8e0ULL || rel >= 0x122a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a8f0 size=16 callers=0 calls=0
*/
void sub_122a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a8f0ULL || rel >= 0x122a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a900 size=64 callers=0 calls=1
   calls: sub_115bc00
*/
void sub_122a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a900ULL || rel >= 0x122a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a940 size=16 callers=0 calls=0
*/
void sub_122a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a940ULL || rel >= 0x122a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a950 size=16 callers=0 calls=0
*/
void sub_122a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a950ULL || rel >= 0x122a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a960 size=16 callers=0 calls=0
*/
void sub_122a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a960ULL || rel >= 0x122a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a970 size=80 callers=0 calls=1
   calls: sub_1136910
*/
void sub_122a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a970ULL || rel >= 0x122a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a9c0 size=16 callers=0 calls=0
*/
void sub_122a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a9c0ULL || rel >= 0x122a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a9d0 size=16 callers=0 calls=0
*/
void sub_122a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a9d0ULL || rel >= 0x122a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a9e0 size=16 callers=0 calls=0
*/
void sub_122a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a9e0ULL || rel >= 0x122a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122a9f0 size=32 callers=0 calls=0
*/
void sub_122a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122a9f0ULL || rel >= 0x122aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122aa10 size=16 callers=0 calls=0
*/
void sub_122aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122aa10ULL || rel >= 0x122aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122aa20 size=16 callers=0 calls=0
*/
void sub_122aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122aa20ULL || rel >= 0x122aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122aa30 size=16 callers=0 calls=0
*/
void sub_122aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122aa30ULL || rel >= 0x122aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122aa40 size=464 callers=0 calls=2
   calls: sub_122ac20, sub_967240
*/
void sub_122aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122aa40ULL || rel >= 0x122ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ac10 size=16 callers=0 calls=0
*/
void sub_122ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ac10ULL || rel >= 0x122ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ac20 size=528 callers=2 calls=0
*/
void sub_122ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ac20ULL || rel >= 0x122ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ae30 size=16 callers=0 calls=0
*/
void sub_122ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ae30ULL || rel >= 0x122ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ae40 size=16 callers=0 calls=0
*/
void sub_122ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ae40ULL || rel >= 0x122ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ae50 size=576 callers=0 calls=3
   calls: sub_115a6e0, sub_122ac20, sub_967240
*/
void sub_122ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ae50ULL || rel >= 0x122b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b090 size=16 callers=0 calls=0
*/
void sub_122b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b090ULL || rel >= 0x122b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b0a0 size=16 callers=0 calls=0
*/
void sub_122b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b0a0ULL || rel >= 0x122b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b0b0 size=16 callers=0 calls=0
*/
void sub_122b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b0b0ULL || rel >= 0x122b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b0c0 size=288 callers=0 calls=1
   calls: sub_11e0db0
*/
void sub_122b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b0c0ULL || rel >= 0x122b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b1e0 size=16 callers=0 calls=0
*/
void sub_122b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b1e0ULL || rel >= 0x122b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b1f0 size=16 callers=0 calls=0
*/
void sub_122b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b1f0ULL || rel >= 0x122b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b200 size=16 callers=0 calls=0
*/
void sub_122b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b200ULL || rel >= 0x122b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b210 size=512 callers=1 calls=3
   calls: sub_11b8ff0, sub_5cf8e0, sub_5cf8f0
*/
void sub_122b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b210ULL || rel >= 0x122b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b410 size=224 callers=0 calls=2
   calls: sub_113a3b0, sub_bf05e0
*/
void sub_122b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b410ULL || rel >= 0x122b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b4f0 size=16 callers=0 calls=0
*/
void sub_122b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b4f0ULL || rel >= 0x122b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b500 size=16 callers=0 calls=0
*/
void sub_122b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b500ULL || rel >= 0x122b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b510 size=16 callers=0 calls=0
*/
void sub_122b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b510ULL || rel >= 0x122b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b520 size=16 callers=0 calls=0
*/
void sub_122b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b520ULL || rel >= 0x122b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b530 size=16 callers=0 calls=0
*/
void sub_122b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b530ULL || rel >= 0x122b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b540 size=16 callers=0 calls=0
*/
void sub_122b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b540ULL || rel >= 0x122b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b550 size=16 callers=0 calls=0
*/
void sub_122b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b550ULL || rel >= 0x122b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b560 size=16 callers=0 calls=0
*/
void sub_122b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b560ULL || rel >= 0x122b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b570 size=16 callers=0 calls=0
*/
void sub_122b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b570ULL || rel >= 0x122b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b580 size=16 callers=0 calls=0
*/
void sub_122b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b580ULL || rel >= 0x122b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b590 size=16 callers=0 calls=0
*/
void sub_122b590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b590ULL || rel >= 0x122b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b5a0 size=16 callers=0 calls=0
*/
void sub_122b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b5a0ULL || rel >= 0x122b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b5b0 size=16 callers=0 calls=0
*/
void sub_122b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b5b0ULL || rel >= 0x122b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b5c0 size=16 callers=0 calls=0
*/
void sub_122b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b5c0ULL || rel >= 0x122b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b5d0 size=16 callers=0 calls=0
*/
void sub_122b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b5d0ULL || rel >= 0x122b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b5e0 size=16 callers=0 calls=0
*/
void sub_122b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b5e0ULL || rel >= 0x122b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b5f0 size=16 callers=0 calls=0
*/
void sub_122b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b5f0ULL || rel >= 0x122b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b600 size=16 callers=0 calls=0
*/
void sub_122b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b600ULL || rel >= 0x122b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b610 size=16 callers=0 calls=0
*/
void sub_122b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b610ULL || rel >= 0x122b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b620 size=32 callers=0 calls=1
   calls: sub_11611a0
*/
void sub_122b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b620ULL || rel >= 0x122b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b640 size=16 callers=0 calls=0
*/
void sub_122b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b640ULL || rel >= 0x122b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b650 size=16 callers=0 calls=0
*/
void sub_122b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b650ULL || rel >= 0x122b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b660 size=16 callers=0 calls=0
*/
void sub_122b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b660ULL || rel >= 0x122b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b670 size=64 callers=0 calls=1
   calls: sub_115ba20
*/
void sub_122b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b670ULL || rel >= 0x122b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b6b0 size=16 callers=0 calls=0
*/
void sub_122b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b6b0ULL || rel >= 0x122b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b6c0 size=16 callers=0 calls=0
*/
void sub_122b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b6c0ULL || rel >= 0x122b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b6d0 size=16 callers=0 calls=0
*/
void sub_122b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b6d0ULL || rel >= 0x122b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b6e0 size=176 callers=0 calls=2
   calls: sub_113a3b0, sub_bf05e0
*/
void sub_122b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b6e0ULL || rel >= 0x122b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b790 size=16 callers=0 calls=0
*/
void sub_122b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b790ULL || rel >= 0x122b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b7a0 size=16 callers=0 calls=0
*/
void sub_122b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b7a0ULL || rel >= 0x122b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b7b0 size=16 callers=0 calls=0
*/
void sub_122b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b7b0ULL || rel >= 0x122b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b7c0 size=176 callers=0 calls=2
   calls: sub_113a3b0, sub_bf05e0
*/
void sub_122b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b7c0ULL || rel >= 0x122b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b870 size=16 callers=0 calls=0
*/
void sub_122b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b870ULL || rel >= 0x122b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b880 size=16 callers=0 calls=0
*/
void sub_122b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b880ULL || rel >= 0x122b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b890 size=16 callers=0 calls=0
*/
void sub_122b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b890ULL || rel >= 0x122b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b8a0 size=256 callers=3 calls=2
   calls: sub_5d99d0, sub_c52bf0
*/
void sub_122b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b8a0ULL || rel >= 0x122b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b9a0 size=64 callers=0 calls=1
   calls: sub_7651c0
*/
void sub_122b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b9a0ULL || rel >= 0x122b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b9e0 size=16 callers=0 calls=0
*/
void sub_122b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b9e0ULL || rel >= 0x122b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122b9f0 size=16 callers=0 calls=0
*/
void sub_122b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122b9f0ULL || rel >= 0x122ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ba00 size=16 callers=0 calls=0
*/
void sub_122ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ba00ULL || rel >= 0x122ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ba10 size=64 callers=0 calls=1
   calls: sub_7651c0
*/
void sub_122ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ba10ULL || rel >= 0x122ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ba50 size=16 callers=0 calls=0
*/
void sub_122ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ba50ULL || rel >= 0x122ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ba60 size=16 callers=0 calls=0
*/
void sub_122ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ba60ULL || rel >= 0x122ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ba70 size=16 callers=0 calls=0
*/
void sub_122ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ba70ULL || rel >= 0x122ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ba80 size=48 callers=0 calls=1
   calls: sub_765640
*/
void sub_122ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ba80ULL || rel >= 0x122bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bab0 size=16 callers=0 calls=0
*/
void sub_122bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bab0ULL || rel >= 0x122bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bac0 size=16 callers=0 calls=0
*/
void sub_122bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bac0ULL || rel >= 0x122bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bad0 size=16 callers=0 calls=0
*/
void sub_122bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bad0ULL || rel >= 0x122bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bae0 size=16 callers=0 calls=0
*/
void sub_122bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bae0ULL || rel >= 0x122baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122baf0 size=16 callers=0 calls=0
*/
void sub_122baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122baf0ULL || rel >= 0x122bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bb00 size=16 callers=0 calls=0
*/
void sub_122bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bb00ULL || rel >= 0x122bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bb10 size=16 callers=0 calls=0
*/
void sub_122bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bb10ULL || rel >= 0x122bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bb20 size=352 callers=0 calls=2
   calls: sub_115a6e0, sub_115ab80
*/
void sub_122bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bb20ULL || rel >= 0x122bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bc80 size=16 callers=0 calls=0
*/
void sub_122bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bc80ULL || rel >= 0x122bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bc90 size=432 callers=0 calls=11
   calls: sub_1108730, sub_1108830, sub_1108a00, sub_1108a70, sub_110ca50, sub_1134fa0, sub_117aee0, sub_117af10, sub_117dca0, sub_764b40, sub_bf05e0
*/
void sub_122bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bc90ULL || rel >= 0x122be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122be40 size=16 callers=0 calls=0
*/
void sub_122be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122be40ULL || rel >= 0x122be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122be50 size=32 callers=0 calls=0
*/
void sub_122be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122be50ULL || rel >= 0x122be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122be70 size=32 callers=0 calls=0
*/
void sub_122be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122be70ULL || rel >= 0x122be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122be90 size=32 callers=0 calls=0
*/
void sub_122be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122be90ULL || rel >= 0x122beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122beb0 size=32 callers=0 calls=0
*/
void sub_122beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122beb0ULL || rel >= 0x122bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bed0 size=80 callers=0 calls=1
   calls: sub_11611a0
*/
void sub_122bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bed0ULL || rel >= 0x122bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bf20 size=16 callers=0 calls=0
*/
void sub_122bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bf20ULL || rel >= 0x122bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bf30 size=16 callers=0 calls=0
*/
void sub_122bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bf30ULL || rel >= 0x122bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bf40 size=16 callers=0 calls=0
*/
void sub_122bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bf40ULL || rel >= 0x122bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bf50 size=64 callers=0 calls=0
*/
void sub_122bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bf50ULL || rel >= 0x122bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bf90 size=64 callers=0 calls=0
*/
void sub_122bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bf90ULL || rel >= 0x122bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122bfd0 size=64 callers=0 calls=0
*/
void sub_122bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122bfd0ULL || rel >= 0x122c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122c010 size=64 callers=0 calls=0
*/
void sub_122c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122c010ULL || rel >= 0x122c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122c050 size=368 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_122c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122c050ULL || rel >= 0x122c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122c1c0 size=1968 callers=0 calls=11
   calls: sub_113af90, sub_1204dd0, sub_12295e0, sub_122c9b0, sub_59bee0, sub_5d99d0, sub_612ef0, sub_612f70, sub_634540, sub_967240, sub_986200
   ref: EffOverHead01
   ref: EffEye%02d
   ref: EffMouth%02d
*/
void EffOverHead01_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122c1c0ULL || rel >= 0x122c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122c970 size=64 callers=0 calls=0
*/
void sub_122c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122c970ULL || rel >= 0x122c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122c9b0 size=240 callers=1 calls=1
   calls: sub_634110
*/
void sub_122c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122c9b0ULL || rel >= 0x122caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122caa0 size=80 callers=0 calls=0
*/
void sub_122caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122caa0ULL || rel >= 0x122caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122caf0 size=32 callers=0 calls=0
*/
void sub_122caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122caf0ULL || rel >= 0x122cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cb10 size=16 callers=0 calls=0
*/
void sub_122cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cb10ULL || rel >= 0x122cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cb20 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_122cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cb20ULL || rel >= 0x122cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cb50 size=16 callers=0 calls=0
*/
void sub_122cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cb50ULL || rel >= 0x122cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cb60 size=16 callers=0 calls=0
*/
void sub_122cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cb60ULL || rel >= 0x122cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cb70 size=16 callers=0 calls=0
*/
void sub_122cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cb70ULL || rel >= 0x122cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cb80 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_122cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cb80ULL || rel >= 0x122cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cbb0 size=48 callers=0 calls=0
*/
void sub_122cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cbb0ULL || rel >= 0x122cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cbe0 size=16 callers=0 calls=0
*/
void sub_122cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cbe0ULL || rel >= 0x122cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cbf0 size=32 callers=0 calls=0
*/
void sub_122cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cbf0ULL || rel >= 0x122cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cc10 size=32 callers=0 calls=0
*/
void sub_122cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cc10ULL || rel >= 0x122cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cc30 size=64 callers=0 calls=1
   calls: sub_619060
*/
void sub_122cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cc30ULL || rel >= 0x122cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cc70 size=16 callers=0 calls=0
*/
void sub_122cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cc70ULL || rel >= 0x122cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cc80 size=16 callers=0 calls=0
*/
void sub_122cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cc80ULL || rel >= 0x122cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cc90 size=16 callers=0 calls=0
*/
void sub_122cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cc90ULL || rel >= 0x122cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cca0 size=112 callers=0 calls=2
   calls: sub_1136910, sub_1160e20
*/
void sub_122cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cca0ULL || rel >= 0x122cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cd10 size=16 callers=0 calls=0
*/
void sub_122cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cd10ULL || rel >= 0x122cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cd20 size=16 callers=0 calls=0
*/
void sub_122cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cd20ULL || rel >= 0x122cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cd30 size=16 callers=0 calls=0
*/
void sub_122cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cd30ULL || rel >= 0x122cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122cd40 size=256 callers=0 calls=1
   calls: sub_972c70
*/
void sub_122cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122cd40ULL || rel >= 0x122ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ce40 size=512 callers=0 calls=8
   calls: sub_117dca0, sub_1180300, sub_1180360, sub_120f7f0, sub_1211060, sub_122d880, sub_68f670, sub_969e30
*/
void sub_122ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ce40ULL || rel >= 0x122d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d040 size=160 callers=0 calls=2
   calls: sub_117dca0, sub_1211280
*/
void sub_122d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d040ULL || rel >= 0x122d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d0e0 size=144 callers=0 calls=2
   calls: sub_117dca0, sub_1211400
*/
void sub_122d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d0e0ULL || rel >= 0x122d170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d170 size=400 callers=0 calls=10
   calls: sub_10619f0, sub_1179ec0, sub_1179ed0, sub_117dca0, sub_117faf0, sub_11802e0, sub_1180360, sub_120f990, sub_e51c00, sub_e51c10
*/
void sub_122d170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d170ULL || rel >= 0x122d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d300 size=160 callers=0 calls=2
   calls: sub_117dca0, sub_1211430
*/
void sub_122d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d300ULL || rel >= 0x122d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d3a0 size=912 callers=0 calls=9
   calls: sub_10617a0, sub_10617c0, sub_1157ef0, sub_1158640, sub_1165030, sub_117dca0, sub_11864a0, sub_e51c00, sub_e51c10
*/
void sub_122d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d3a0ULL || rel >= 0x122d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d730 size=112 callers=0 calls=0
*/
void sub_122d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d730ULL || rel >= 0x122d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d7a0 size=112 callers=0 calls=0
*/
void sub_122d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d7a0ULL || rel >= 0x122d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d810 size=112 callers=0 calls=0
*/
void sub_122d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d810ULL || rel >= 0x122d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d880 size=224 callers=1 calls=1
   calls: sub_120f5e0
*/
void sub_122d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d880ULL || rel >= 0x122d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d960 size=80 callers=0 calls=1
   calls: sub_1136f20
*/
void sub_122d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d960ULL || rel >= 0x122d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d9b0 size=16 callers=0 calls=0
*/
void sub_122d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d9b0ULL || rel >= 0x122d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d9c0 size=16 callers=0 calls=0
*/
void sub_122d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d9c0ULL || rel >= 0x122d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d9d0 size=16 callers=0 calls=0
*/
void sub_122d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d9d0ULL || rel >= 0x122d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d9e0 size=16 callers=0 calls=0
*/
void sub_122d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d9e0ULL || rel >= 0x122d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122d9f0 size=16 callers=0 calls=0
*/
void sub_122d9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d9f0ULL || rel >= 0x122da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122da00 size=16 callers=0 calls=0
*/
void sub_122da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122da00ULL || rel >= 0x122da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122da10 size=16 callers=0 calls=0
*/
void sub_122da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122da10ULL || rel >= 0x122da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122da20 size=208 callers=0 calls=0
*/
void sub_122da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122da20ULL || rel >= 0x122daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122daf0 size=640 callers=0 calls=10
   calls: sub_113f1c0, sub_1165020, sub_1179ec0, sub_1179ed0, sub_1179ef0, sub_1179f00, sub_117dca0, sub_117faf0, sub_11b9f00, sub_11ba640
*/
void sub_122daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122daf0ULL || rel >= 0x122dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122dd70 size=160 callers=0 calls=2
   calls: sub_117dca0, sub_11ba650
*/
void sub_122dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122dd70ULL || rel >= 0x122de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122de10 size=576 callers=0 calls=8
   calls: sub_10617a0, sub_113f1b0, sub_113f1c0, sub_1157ef0, sub_1165170, sub_117dca0, sub_11802e0, sub_11ba660
*/
void sub_122de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122de10ULL || rel >= 0x122e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e050 size=160 callers=0 calls=2
   calls: sub_113f1c0, sub_117dca0
*/
void sub_122e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e050ULL || rel >= 0x122e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e0f0 size=112 callers=0 calls=0
*/
void sub_122e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e0f0ULL || rel >= 0x122e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e160 size=112 callers=0 calls=0
*/
void sub_122e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e160ULL || rel >= 0x122e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e1d0 size=112 callers=0 calls=0
*/
void sub_122e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e1d0ULL || rel >= 0x122e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e240 size=224 callers=0 calls=5
   calls: sub_112e920, sub_112ea00, sub_11364b0, sub_11611a0, sub_1176e00
*/
void sub_122e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e240ULL || rel >= 0x122e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e320 size=16 callers=0 calls=0
*/
void sub_122e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e320ULL || rel >= 0x122e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e330 size=16 callers=0 calls=0
*/
void sub_122e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e330ULL || rel >= 0x122e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e340 size=16 callers=0 calls=0
*/
void sub_122e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e340ULL || rel >= 0x122e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e350 size=208 callers=0 calls=0
*/
void sub_122e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e350ULL || rel >= 0x122e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e420 size=160 callers=0 calls=2
   calls: sub_117dca0, sub_122e830
*/
void sub_122e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e420ULL || rel >= 0x122e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e4c0 size=160 callers=0 calls=2
   calls: sub_117dca0, sub_122eba0
*/
void sub_122e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e4c0ULL || rel >= 0x122e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e560 size=16 callers=0 calls=0
*/
void sub_122e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e560ULL || rel >= 0x122e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e570 size=160 callers=0 calls=2
   calls: sub_117dca0, sub_122e9a0
*/
void sub_122e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e570ULL || rel >= 0x122e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e610 size=112 callers=0 calls=0
*/
void sub_122e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e610ULL || rel >= 0x122e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e680 size=112 callers=0 calls=0
*/
void sub_122e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e680ULL || rel >= 0x122e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e6f0 size=112 callers=0 calls=0
*/
void sub_122e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e6f0ULL || rel >= 0x122e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e760 size=208 callers=0 calls=0
*/
void sub_122e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e760ULL || rel >= 0x122e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e830 size=368 callers=1 calls=1
   calls: sub_ea7620
*/
void sub_122e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e830ULL || rel >= 0x122e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122e9a0 size=512 callers=2 calls=2
   calls: sub_ea77b0, sub_ea8c70
*/
void sub_122e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e9a0ULL || rel >= 0x122eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122eba0 size=32 callers=1 calls=0
*/
void sub_122eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122eba0ULL || rel >= 0x122ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122ebc0 size=1008 callers=0 calls=11
   calls: sub_10617a0, sub_10617c0, sub_1179ec0, sub_1179ed0, sub_117dca0, sub_117faf0, sub_11bcdf0, sub_11bd1c0, sub_11bd1d0, sub_1231b50, sub_e7b5e0
*/
void sub_122ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122ebc0ULL || rel >= 0x122efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122efb0 size=864 callers=0 calls=6
   calls: sub_1120930, sub_1157ef0, sub_1158640, sub_117dca0, sub_122f310, sub_967240
*/
void sub_122efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122efb0ULL || rel >= 0x122f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122f310 size=304 callers=6 calls=1
   calls: sub_c39c40
*/
void sub_122f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122f310ULL || rel >= 0x122f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122f440 size=16 callers=0 calls=0
*/
void sub_122f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122f440ULL || rel >= 0x122f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122f450 size=432 callers=0 calls=5
   calls: sub_1157ef0, sub_117dca0, sub_122f770, sub_122fcf0, sub_1230050
*/
void sub_122f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122f450ULL || rel >= 0x122f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122f600 size=16 callers=0 calls=0
*/
void sub_122f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122f600ULL || rel >= 0x122f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122f610 size=352 callers=0 calls=3
   calls: sub_117dca0, sub_11bc8d0, sub_1231b50
*/
void sub_122f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122f610ULL || rel >= 0x122f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122f770 size=1408 callers=1 calls=9
   calls: sub_1061800, sub_1127360, sub_1157ef0, sub_1158640, sub_1158a40, sub_115a710, sub_115a730, sub_117c320, sub_117dca0
*/
void sub_122f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122f770ULL || rel >= 0x122fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0122fcf0 size=864 callers=1 calls=3
   calls: sub_1157ef0, sub_1158640, sub_117dca0
*/
void sub_122fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122fcf0ULL || rel >= 0x1230050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01230050 size=1088 callers=1 calls=10
   calls: sub_111b4b0, sub_1127360, sub_1158a40, sub_1158c10, sub_115ab80, sub_117c320, sub_117dca0, sub_11bd300, sub_11bd340, sub_1230490
*/
void sub_1230050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1230050ULL || rel >= 0x1230490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01230490 size=464 callers=2 calls=4
   calls: sub_111dd50, sub_117dca0, sub_118c7c0, sub_122f310
*/
void sub_1230490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1230490ULL || rel >= 0x1230660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01230660 size=720 callers=0 calls=9
   calls: sub_1061890, sub_111b4b0, sub_1120d00, sub_1157ef0, sub_117dca0, sub_122f310, sub_1230490, sub_1230930, sub_1230ca0
*/
void sub_1230660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1230660ULL || rel >= 0x1230930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01230930 size=880 callers=1 calls=2
   calls: sub_1233180, sub_1233400
*/
void sub_1230930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1230930ULL || rel >= 0x1230ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01230ca0 size=224 callers=2 calls=1
   calls: sub_12335e0
*/
void sub_1230ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1230ca0ULL || rel >= 0x1230d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01230d80 size=832 callers=0 calls=6
   calls: sub_1120d00, sub_1158830, sub_117dca0, sub_122f310, sub_1230ca0, sub_12310c0
*/
void sub_1230d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1230d80ULL || rel >= 0x12310c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012310c0 size=1104 callers=1 calls=2
   calls: sub_1233180, sub_1233400
*/
void sub_12310c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12310c0ULL || rel >= 0x1231510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231510 size=656 callers=0 calls=4
   calls: sub_1231b50, sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1231510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231510ULL || rel >= 0x12317a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012317a0 size=16 callers=0 calls=0
*/
void sub_12317a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12317a0ULL || rel >= 0x12317b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012317b0 size=16 callers=0 calls=0
*/
void sub_12317b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12317b0ULL || rel >= 0x12317c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012317c0 size=16 callers=0 calls=0
*/
void sub_12317c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12317c0ULL || rel >= 0x12317d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012317d0 size=320 callers=0 calls=2
   calls: sub_11bd300, sub_11bd340
*/
void sub_12317d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12317d0ULL || rel >= 0x1231910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231910 size=16 callers=0 calls=0
*/
void sub_1231910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231910ULL || rel >= 0x1231920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231920 size=16 callers=0 calls=0
*/
void sub_1231920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231920ULL || rel >= 0x1231930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231930 size=16 callers=0 calls=0
*/
void sub_1231930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231930ULL || rel >= 0x1231940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231940 size=80 callers=0 calls=1
   calls: sub_115ba20
*/
void sub_1231940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231940ULL || rel >= 0x1231990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231990 size=16 callers=0 calls=0
*/
void sub_1231990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231990ULL || rel >= 0x12319a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012319a0 size=16 callers=0 calls=0
*/
void sub_12319a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12319a0ULL || rel >= 0x12319b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012319b0 size=16 callers=0 calls=0
*/
void sub_12319b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12319b0ULL || rel >= 0x12319c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012319c0 size=352 callers=0 calls=4
   calls: sub_1120930, sub_115ba20, sub_122f310, sub_967240
*/
void sub_12319c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12319c0ULL || rel >= 0x1231b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231b20 size=16 callers=0 calls=0
*/
void sub_1231b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231b20ULL || rel >= 0x1231b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231b30 size=16 callers=0 calls=0
*/
void sub_1231b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231b30ULL || rel >= 0x1231b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231b40 size=16 callers=0 calls=0
*/
void sub_1231b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231b40ULL || rel >= 0x1231b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231b50 size=400 callers=6 calls=0
*/
void sub_1231b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231b50ULL || rel >= 0x1231ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231ce0 size=96 callers=0 calls=1
   calls: sub_11308b0
*/
void sub_1231ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231ce0ULL || rel >= 0x1231d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231d40 size=16 callers=0 calls=0
*/
void sub_1231d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231d40ULL || rel >= 0x1231d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231d50 size=16 callers=0 calls=0
*/
void sub_1231d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231d50ULL || rel >= 0x1231d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231d60 size=16 callers=0 calls=0
*/
void sub_1231d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231d60ULL || rel >= 0x1231d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231d70 size=432 callers=0 calls=2
   calls: sub_11243d0, sub_1231f30
*/
void sub_1231d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231d70ULL || rel >= 0x1231f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231f20 size=16 callers=0 calls=0
*/
void sub_1231f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231f20ULL || rel >= 0x1231f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231f30 size=96 callers=1 calls=0
*/
void sub_1231f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231f30ULL || rel >= 0x1231f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231f90 size=16 callers=0 calls=0
*/
void sub_1231f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231f90ULL || rel >= 0x1231fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231fa0 size=16 callers=0 calls=0
*/
void sub_1231fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231fa0ULL || rel >= 0x1231fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231fb0 size=16 callers=0 calls=0
*/
void sub_1231fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231fb0ULL || rel >= 0x1231fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231fc0 size=16 callers=0 calls=0
*/
void sub_1231fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231fc0ULL || rel >= 0x1231fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231fd0 size=16 callers=0 calls=0
*/
void sub_1231fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231fd0ULL || rel >= 0x1231fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01231fe0 size=432 callers=0 calls=2
   calls: sub_11243d0, sub_12321a0
*/
void sub_1231fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1231fe0ULL || rel >= 0x1232190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232190 size=16 callers=0 calls=0
*/
void sub_1232190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232190ULL || rel >= 0x12321a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012321a0 size=96 callers=1 calls=0
*/
void sub_12321a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12321a0ULL || rel >= 0x1232200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232200 size=16 callers=0 calls=0
*/
void sub_1232200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232200ULL || rel >= 0x1232210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232210 size=16 callers=0 calls=0
*/
void sub_1232210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232210ULL || rel >= 0x1232220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232220 size=16 callers=0 calls=0
*/
void sub_1232220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232220ULL || rel >= 0x1232230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232230 size=16 callers=0 calls=0
*/
void sub_1232230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232230ULL || rel >= 0x1232240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232240 size=16 callers=0 calls=0
*/
void sub_1232240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232240ULL || rel >= 0x1232250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232250 size=288 callers=0 calls=4
   calls: sub_1130c20, sub_113d860, sub_1161770, sub_bf05e0
*/
void sub_1232250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232250ULL || rel >= 0x1232370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232370 size=16 callers=0 calls=0
*/
void sub_1232370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232370ULL || rel >= 0x1232380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232380 size=624 callers=0 calls=9
   calls: sub_11274b0, sub_1128e40, sub_112e660, sub_1130c20, sub_1131f60, sub_116f5b0, sub_11cdcf0, sub_1306f20, sub_967240
   ref: Play_Camp_Entry
*/
void Play_Camp_Entry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232380ULL || rel >= 0x12325f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012325f0 size=64 callers=0 calls=0
*/
void sub_12325f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12325f0ULL || rel >= 0x1232630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232630 size=112 callers=0 calls=2
   calls: sub_1120930, sub_122f310
*/
void sub_1232630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232630ULL || rel >= 0x12326a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012326a0 size=64 callers=0 calls=0
*/
void sub_12326a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12326a0ULL || rel >= 0x12326e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012326e0 size=48 callers=0 calls=0
*/
void sub_12326e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12326e0ULL || rel >= 0x1232710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232710 size=32 callers=0 calls=0
*/
void sub_1232710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232710ULL || rel >= 0x1232730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232730 size=48 callers=0 calls=0
*/
void sub_1232730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232730ULL || rel >= 0x1232760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232760 size=32 callers=0 calls=0
*/
void sub_1232760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232760ULL || rel >= 0x1232780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232780 size=16 callers=0 calls=0
*/
void sub_1232780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232780ULL || rel >= 0x1232790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232790 size=16 callers=0 calls=0
*/
void sub_1232790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232790ULL || rel >= 0x12327a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012327a0 size=112 callers=0 calls=3
   calls: sub_115a6e0, sub_115ba20, sub_115bb40
*/
void sub_12327a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12327a0ULL || rel >= 0x1232810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232810 size=16 callers=0 calls=0
*/
void sub_1232810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232810ULL || rel >= 0x1232820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232820 size=16 callers=0 calls=0
*/
void sub_1232820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232820ULL || rel >= 0x1232830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232830 size=16 callers=0 calls=0
*/
void sub_1232830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232830ULL || rel >= 0x1232840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232840 size=256 callers=0 calls=7
   calls: sub_1136f20, sub_1137070, sub_11383d0, sub_1139180, sub_113a1a0, sub_1160e20, sub_11611d0
*/
void sub_1232840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232840ULL || rel >= 0x1232940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232940 size=16 callers=0 calls=0
*/
void sub_1232940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232940ULL || rel >= 0x1232950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232950 size=16 callers=0 calls=0
*/
void sub_1232950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232950ULL || rel >= 0x1232960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232960 size=16 callers=0 calls=0
*/
void sub_1232960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232960ULL || rel >= 0x1232970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232970 size=208 callers=0 calls=4
   calls: sub_1136f20, sub_1139180, sub_113a1a0, sub_113a940
*/
void sub_1232970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232970ULL || rel >= 0x1232a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232a40 size=16 callers=0 calls=0
*/
void sub_1232a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232a40ULL || rel >= 0x1232a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232a50 size=16 callers=0 calls=0
*/
void sub_1232a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232a50ULL || rel >= 0x1232a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232a60 size=16 callers=0 calls=0
*/
void sub_1232a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232a60ULL || rel >= 0x1232a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232a70 size=64 callers=0 calls=1
   calls: sub_115a710
*/
void sub_1232a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232a70ULL || rel >= 0x1232ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232ab0 size=16 callers=0 calls=0
*/
void sub_1232ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232ab0ULL || rel >= 0x1232ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232ac0 size=16 callers=0 calls=0
*/
void sub_1232ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232ac0ULL || rel >= 0x1232ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232ad0 size=16 callers=0 calls=0
*/
void sub_1232ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232ad0ULL || rel >= 0x1232ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232ae0 size=1104 callers=0 calls=7
   calls: sub_11274b0, sub_112e660, sub_1131f60, sub_1136f20, sub_11cdcf0, sub_1306f20, sub_967240
*/
void sub_1232ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232ae0ULL || rel >= 0x1232f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232f30 size=16 callers=0 calls=0
*/
void sub_1232f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232f30ULL || rel >= 0x1232f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232f40 size=128 callers=0 calls=2
   calls: sub_1128e40, sub_11577e0
   ref: Play_Camp_Entry
*/
void Play_Camp_Entry_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232f40ULL || rel >= 0x1232fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01232fc0 size=112 callers=0 calls=0
*/
void sub_1232fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232fc0ULL || rel >= 0x1233030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01233030 size=112 callers=0 calls=0
*/
void sub_1233030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1233030ULL || rel >= 0x12330a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012330a0 size=48 callers=0 calls=0
*/
void sub_12330a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12330a0ULL || rel >= 0x12330d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012330d0 size=16 callers=0 calls=0
*/
void sub_12330d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12330d0ULL || rel >= 0x12330e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012330e0 size=16 callers=0 calls=0
*/
void sub_12330e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12330e0ULL || rel >= 0x12330f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012330f0 size=96 callers=0 calls=1
   calls: sub_11308b0
*/
void sub_12330f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12330f0ULL || rel >= 0x1233150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01233150 size=16 callers=0 calls=0
*/
void sub_1233150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1233150ULL || rel >= 0x1233160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01233160 size=16 callers=0 calls=0
*/
void sub_1233160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1233160ULL || rel >= 0x1233170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01233170 size=16 callers=0 calls=0
*/
void sub_1233170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1233170ULL || rel >= 0x1233180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01233180 size=640 callers=2 calls=0
*/
void sub_1233180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1233180ULL || rel >= 0x1233400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01233400 size=480 callers=2 calls=0
*/
void sub_1233400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1233400ULL || rel >= 0x12335e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012335e0 size=1248 callers=1 calls=4
   calls: sub_1233ac0, sub_1233cc0, sub_1233ec0, sub_12340d0
*/
void sub_12335e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12335e0ULL || rel >= 0x1233ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01233ac0 size=512 callers=1 calls=0
*/
void sub_1233ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1233ac0ULL || rel >= 0x1233cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01233cc0 size=512 callers=1 calls=0
*/
void sub_1233cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1233cc0ULL || rel >= 0x1233ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01233ec0 size=528 callers=1 calls=0
*/
void sub_1233ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1233ec0ULL || rel >= 0x12340d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012340d0 size=528 callers=1 calls=0
*/
void sub_12340d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12340d0ULL || rel >= 0x12342e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012342e0 size=432 callers=0 calls=2
   calls: sub_11243d0, sub_12344a0
*/
void sub_12342e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12342e0ULL || rel >= 0x1234490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234490 size=16 callers=0 calls=0
*/
void sub_1234490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234490ULL || rel >= 0x12344a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012344a0 size=80 callers=1 calls=0
*/
void sub_12344a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12344a0ULL || rel >= 0x12344f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012344f0 size=16 callers=0 calls=0
*/
void sub_12344f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12344f0ULL || rel >= 0x1234500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234500 size=16 callers=0 calls=0
*/
void sub_1234500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234500ULL || rel >= 0x1234510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234510 size=16 callers=0 calls=0
*/
void sub_1234510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234510ULL || rel >= 0x1234520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234520 size=16 callers=0 calls=0
*/
void sub_1234520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234520ULL || rel >= 0x1234530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234530 size=16 callers=0 calls=0
*/
void sub_1234530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234530ULL || rel >= 0x1234540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234540 size=272 callers=0 calls=4
   calls: sub_115a6e0, sub_115ab80, sub_115ba20, sub_115bb40
*/
void sub_1234540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234540ULL || rel >= 0x1234650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234650 size=16 callers=0 calls=0
*/
void sub_1234650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234650ULL || rel >= 0x1234660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234660 size=144 callers=0 calls=1
   calls: sub_1157860
*/
void sub_1234660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234660ULL || rel >= 0x12346f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012346f0 size=16 callers=0 calls=0
*/
void sub_12346f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12346f0ULL || rel >= 0x1234700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234700 size=16 callers=0 calls=0
*/
void sub_1234700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234700ULL || rel >= 0x1234710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234710 size=16 callers=0 calls=0
*/
void sub_1234710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234710ULL || rel >= 0x1234720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234720 size=16 callers=0 calls=0
*/
void sub_1234720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234720ULL || rel >= 0x1234730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234730 size=16 callers=0 calls=0
*/
void sub_1234730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234730ULL || rel >= 0x1234740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234740 size=208 callers=0 calls=0
*/
void sub_1234740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234740ULL || rel >= 0x1234810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234810 size=640 callers=0 calls=6
   calls: sub_1127d00, sub_115bfa0, sub_117dca0, sub_5cf8e0, sub_5cf8f0, sub_bf0820
*/
void sub_1234810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234810ULL || rel >= 0x1234a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234a90 size=176 callers=0 calls=2
   calls: sub_117dca0, sub_127db90
*/
void sub_1234a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234a90ULL || rel >= 0x1234b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234b40 size=16 callers=0 calls=0
*/
void sub_1234b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234b40ULL || rel >= 0x1234b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234b50 size=16 callers=0 calls=0
*/
void sub_1234b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234b50ULL || rel >= 0x1234b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234b60 size=16 callers=0 calls=0
*/
void sub_1234b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234b60ULL || rel >= 0x1234b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234b70 size=16 callers=0 calls=0
*/
void sub_1234b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234b70ULL || rel >= 0x1234b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234b80 size=16 callers=0 calls=0
*/
void sub_1234b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234b80ULL || rel >= 0x1234b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234b90 size=16 callers=0 calls=0
*/
void sub_1234b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234b90ULL || rel >= 0x1234ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234ba0 size=16 callers=0 calls=0
*/
void sub_1234ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234ba0ULL || rel >= 0x1234bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234bb0 size=16 callers=0 calls=0
*/
void sub_1234bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234bb0ULL || rel >= 0x1234bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234bc0 size=16 callers=0 calls=0
*/
void sub_1234bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234bc0ULL || rel >= 0x1234bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234bd0 size=304 callers=0 calls=0
*/
void sub_1234bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234bd0ULL || rel >= 0x1234d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234d00 size=208 callers=0 calls=0
*/
void sub_1234d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234d00ULL || rel >= 0x1234dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234dd0 size=512 callers=0 calls=5
   calls: sub_120fe00, sub_1214fa0, sub_1216310, sub_1216380, sub_1234fd0
*/
void sub_1234dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234dd0ULL || rel >= 0x1234fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01234fd0 size=416 callers=2 calls=1
   calls: sub_1216380
*/
void sub_1234fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1234fd0ULL || rel >= 0x1235170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235170 size=128 callers=0 calls=0
*/
void sub_1235170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235170ULL || rel >= 0x12351f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012351f0 size=112 callers=0 calls=1
   calls: sub_1217300
*/
void sub_12351f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12351f0ULL || rel >= 0x1235260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235260 size=128 callers=0 calls=0
*/
void sub_1235260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235260ULL || rel >= 0x12352e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012352e0 size=128 callers=0 calls=0
*/
void sub_12352e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12352e0ULL || rel >= 0x1235360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235360 size=112 callers=0 calls=1
   calls: sub_1217300
*/
void sub_1235360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235360ULL || rel >= 0x12353d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012353d0 size=112 callers=0 calls=1
   calls: sub_1217300
*/
void sub_12353d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12353d0ULL || rel >= 0x1235440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235440 size=144 callers=0 calls=0
*/
void sub_1235440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235440ULL || rel >= 0x12354d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012354d0 size=144 callers=0 calls=0
*/
void sub_12354d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12354d0ULL || rel >= 0x1235560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235560 size=160 callers=0 calls=0
*/
void sub_1235560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235560ULL || rel >= 0x1235600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235600 size=352 callers=2 calls=0
*/
void sub_1235600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235600ULL || rel >= 0x1235760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235760 size=16 callers=0 calls=0
*/
void sub_1235760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235760ULL || rel >= 0x1235770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235770 size=592 callers=0 calls=9
   calls: sub_1127fc0, sub_120fb90, sub_12164a0, sub_12165b0, sub_12165d0, sub_1235c80, sub_1235e20, sub_5cf8e0, sub_5cf8f0
*/
void sub_1235770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235770ULL || rel >= 0x12359c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012359c0 size=160 callers=0 calls=0
*/
void sub_12359c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12359c0ULL || rel >= 0x1235a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235a60 size=160 callers=0 calls=0
*/
void sub_1235a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235a60ULL || rel >= 0x1235b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235b00 size=32 callers=0 calls=1
   calls: sub_1235600
*/
void sub_1235b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235b00ULL || rel >= 0x1235b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235b20 size=32 callers=0 calls=1
   calls: sub_1235600
*/
void sub_1235b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235b20ULL || rel >= 0x1235b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235b40 size=160 callers=0 calls=0
*/
void sub_1235b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235b40ULL || rel >= 0x1235be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235be0 size=160 callers=0 calls=0
*/
void sub_1235be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235be0ULL || rel >= 0x1235c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235c80 size=416 callers=3 calls=1
   calls: sub_1216380
*/
void sub_1235c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235c80ULL || rel >= 0x1235e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235e20 size=416 callers=3 calls=1
   calls: sub_1216380
*/
void sub_1235e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235e20ULL || rel >= 0x1235fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01235fc0 size=160 callers=0 calls=0
*/
void sub_1235fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1235fc0ULL || rel >= 0x1236060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236060 size=352 callers=2 calls=0
*/
void sub_1236060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236060ULL || rel >= 0x12361c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012361c0 size=1136 callers=0 calls=6
   calls: sub_1127fc0, sub_1216380, sub_12164a0, sub_12165d0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12361c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12361c0ULL || rel >= 0x1236630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236630 size=160 callers=0 calls=0
*/
void sub_1236630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236630ULL || rel >= 0x12366d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012366d0 size=160 callers=0 calls=0
*/
void sub_12366d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12366d0ULL || rel >= 0x1236770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236770 size=32 callers=0 calls=1
   calls: sub_1236060
*/
void sub_1236770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236770ULL || rel >= 0x1236790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236790 size=32 callers=0 calls=1
   calls: sub_1236060
*/
void sub_1236790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236790ULL || rel >= 0x12367b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012367b0 size=160 callers=0 calls=0
*/
void sub_12367b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12367b0ULL || rel >= 0x1236850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236850 size=160 callers=0 calls=0
*/
void sub_1236850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236850ULL || rel >= 0x12368f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012368f0 size=160 callers=0 calls=0
*/
void sub_12368f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12368f0ULL || rel >= 0x1236990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236990 size=352 callers=2 calls=0
*/
void sub_1236990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236990ULL || rel >= 0x1236af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236af0 size=576 callers=0 calls=8
   calls: sub_1127fc0, sub_120feb0, sub_12164a0, sub_12165b0, sub_1235c80, sub_1236ff0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1236af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236af0ULL || rel >= 0x1236d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236d30 size=160 callers=0 calls=0
*/
void sub_1236d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236d30ULL || rel >= 0x1236dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236dd0 size=160 callers=0 calls=0
*/
void sub_1236dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236dd0ULL || rel >= 0x1236e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236e70 size=32 callers=0 calls=1
   calls: sub_1236990
*/
void sub_1236e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236e70ULL || rel >= 0x1236e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236e90 size=32 callers=0 calls=1
   calls: sub_1236990
*/
void sub_1236e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236e90ULL || rel >= 0x1236eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236eb0 size=160 callers=0 calls=0
*/
void sub_1236eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236eb0ULL || rel >= 0x1236f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236f50 size=160 callers=0 calls=0
*/
void sub_1236f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236f50ULL || rel >= 0x1236ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01236ff0 size=416 callers=2 calls=1
   calls: sub_1216380
*/
void sub_1236ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236ff0ULL || rel >= 0x1237190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237190 size=160 callers=0 calls=0
*/
void sub_1237190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237190ULL || rel >= 0x1237230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237230 size=352 callers=2 calls=0
*/
void sub_1237230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237230ULL || rel >= 0x1237390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237390 size=320 callers=0 calls=8
   calls: sub_1127d00, sub_1210250, sub_12163d0, sub_12164a0, sub_12165b0, sub_12165c0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1237390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237390ULL || rel >= 0x12374d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012374d0 size=288 callers=0 calls=4
   calls: sub_1127fc0, sub_12164a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12374d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12374d0ULL || rel >= 0x12375f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012375f0 size=16 callers=0 calls=0
*/
void sub_12375f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12375f0ULL || rel >= 0x1237600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237600 size=160 callers=0 calls=0
*/
void sub_1237600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237600ULL || rel >= 0x12376a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012376a0 size=160 callers=0 calls=0
*/
void sub_12376a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12376a0ULL || rel >= 0x1237740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237740 size=32 callers=0 calls=1
   calls: sub_1237230
*/
void sub_1237740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237740ULL || rel >= 0x1237760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237760 size=32 callers=0 calls=1
   calls: sub_1237230
*/
void sub_1237760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237760ULL || rel >= 0x1237780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237780 size=160 callers=0 calls=0
*/
void sub_1237780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237780ULL || rel >= 0x1237820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237820 size=160 callers=0 calls=0
*/
void sub_1237820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237820ULL || rel >= 0x12378c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012378c0 size=160 callers=0 calls=0
*/
void sub_12378c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12378c0ULL || rel >= 0x1237960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237960 size=352 callers=2 calls=0
*/
void sub_1237960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237960ULL || rel >= 0x1237ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237ac0 size=576 callers=0 calls=8
   calls: sub_1127fc0, sub_120ff00, sub_12164a0, sub_12165b0, sub_1235c80, sub_1235e20, sub_5cf8e0, sub_5cf8f0
*/
void sub_1237ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237ac0ULL || rel >= 0x1237d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237d00 size=160 callers=0 calls=0
*/
void sub_1237d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237d00ULL || rel >= 0x1237da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237da0 size=160 callers=0 calls=0
*/
void sub_1237da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237da0ULL || rel >= 0x1237e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237e40 size=32 callers=0 calls=1
   calls: sub_1237960
*/
void sub_1237e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237e40ULL || rel >= 0x1237e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237e60 size=32 callers=0 calls=1
   calls: sub_1237960
*/
void sub_1237e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237e60ULL || rel >= 0x1237e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237e80 size=160 callers=0 calls=0
*/
void sub_1237e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237e80ULL || rel >= 0x1237f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237f20 size=160 callers=0 calls=0
*/
void sub_1237f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237f20ULL || rel >= 0x1237fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01237fc0 size=160 callers=0 calls=0
*/
void sub_1237fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1237fc0ULL || rel >= 0x1238060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238060 size=352 callers=2 calls=0
*/
void sub_1238060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238060ULL || rel >= 0x12381c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012381c0 size=48 callers=0 calls=2
   calls: sub_12163d0, sub_12164a0
*/
void sub_12381c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12381c0ULL || rel >= 0x12381f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012381f0 size=16 callers=0 calls=0
*/
void sub_12381f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12381f0ULL || rel >= 0x1238200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238200 size=16 callers=0 calls=0
*/
void sub_1238200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238200ULL || rel >= 0x1238210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238210 size=160 callers=0 calls=0
*/
void sub_1238210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238210ULL || rel >= 0x12382b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012382b0 size=160 callers=0 calls=0
*/
void sub_12382b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12382b0ULL || rel >= 0x1238350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238350 size=32 callers=0 calls=1
   calls: sub_1238060
*/
void sub_1238350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238350ULL || rel >= 0x1238370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238370 size=32 callers=0 calls=1
   calls: sub_1238060
*/
void sub_1238370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238370ULL || rel >= 0x1238390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

