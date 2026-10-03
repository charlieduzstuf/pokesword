/* main functions 0116e430..0118f3c0 (146 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0116e430 size=80 callers=1 calls=1
   calls: sub_5b9220
*/
void sub_116e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e430ULL || rel >= 0x116e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e480 size=80 callers=1 calls=1
   calls: sub_5b9220
*/
void sub_116e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e480ULL || rel >= 0x116e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e4d0 size=384 callers=1 calls=1
   calls: sub_5a00c0
*/
void sub_116e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e4d0ULL || rel >= 0x116e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e650 size=224 callers=1 calls=1
   calls: sub_5b9220
*/
void sub_116e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e650ULL || rel >= 0x116e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e730 size=128 callers=0 calls=1
   calls: sub_5b5790
*/
void sub_116e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e730ULL || rel >= 0x116e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e7b0 size=16 callers=0 calls=0
*/
void sub_116e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e7b0ULL || rel >= 0x116e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e7c0 size=16 callers=0 calls=0
*/
void sub_116e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e7c0ULL || rel >= 0x116e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e7d0 size=16 callers=0 calls=0
*/
void sub_116e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e7d0ULL || rel >= 0x116e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e7e0 size=80 callers=0 calls=0
*/
void sub_116e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e7e0ULL || rel >= 0x116e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e830 size=16 callers=0 calls=0
*/
void sub_116e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e830ULL || rel >= 0x116e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e840 size=16 callers=0 calls=0
*/
void sub_116e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e840ULL || rel >= 0x116e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e850 size=16 callers=0 calls=0
*/
void sub_116e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e850ULL || rel >= 0x116e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e860 size=144 callers=0 calls=1
   calls: sub_116e170
*/
void sub_116e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e860ULL || rel >= 0x116e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e8f0 size=16 callers=0 calls=0
*/
void sub_116e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e8f0ULL || rel >= 0x116e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e900 size=16 callers=0 calls=0
*/
void sub_116e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e900ULL || rel >= 0x116e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e910 size=16 callers=0 calls=0
*/
void sub_116e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e910ULL || rel >= 0x116e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e920 size=144 callers=0 calls=1
   calls: sub_116e4d0
*/
void sub_116e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e920ULL || rel >= 0x116e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e9b0 size=16 callers=0 calls=0
*/
void sub_116e9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e9b0ULL || rel >= 0x116e9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e9c0 size=16 callers=0 calls=0
*/
void sub_116e9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e9c0ULL || rel >= 0x116e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e9d0 size=16 callers=0 calls=0
*/
void sub_116e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e9d0ULL || rel >= 0x116e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e9e0 size=256 callers=0 calls=1
   calls: sub_5a00c0
*/
void sub_116e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e9e0ULL || rel >= 0x116eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116eae0 size=16 callers=0 calls=0
*/
void sub_116eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116eae0ULL || rel >= 0x116eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116eaf0 size=16 callers=0 calls=0
*/
void sub_116eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116eaf0ULL || rel >= 0x116eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116eb00 size=16 callers=0 calls=0
*/
void sub_116eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116eb00ULL || rel >= 0x116eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116eb10 size=176 callers=0 calls=0
*/
void sub_116eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116eb10ULL || rel >= 0x116ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ebc0 size=16 callers=0 calls=0
*/
void sub_116ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ebc0ULL || rel >= 0x116ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ebd0 size=16 callers=0 calls=0
*/
void sub_116ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ebd0ULL || rel >= 0x116ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ebe0 size=16 callers=0 calls=0
*/
void sub_116ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ebe0ULL || rel >= 0x116ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ebf0 size=800 callers=1 calls=0
*/
void sub_116ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ebf0ULL || rel >= 0x116ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ef10 size=208 callers=2 calls=0
*/
void sub_116ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ef10ULL || rel >= 0x116efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116efe0 size=256 callers=2 calls=1
   calls: sub_59b090
   ref: mouth01
*/
void mouth01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116efe0ULL || rel >= 0x116f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f0e0 size=224 callers=2 calls=0
*/
void sub_116f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f0e0ULL || rel >= 0x116f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f1c0 size=16 callers=22 calls=0
*/
void sub_116f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f1c0ULL || rel >= 0x116f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f1d0 size=416 callers=37 calls=2
   calls: sub_59b0c0, sub_b4a5e0
*/
void sub_116f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f1d0ULL || rel >= 0x116f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f370 size=224 callers=3 calls=2
   calls: sub_59b0c0, sub_b4a5e0
*/
void sub_116f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f370ULL || rel >= 0x116f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f450 size=16 callers=3 calls=0
*/
void sub_116f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f450ULL || rel >= 0x116f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f460 size=224 callers=3 calls=2
   calls: sub_59b0c0, sub_b4a5e0
*/
void sub_116f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f460ULL || rel >= 0x116f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f540 size=112 callers=2 calls=2
   calls: sub_5cf8c0, sub_5e2350
*/
void sub_116f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f540ULL || rel >= 0x116f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f5b0 size=448 callers=2 calls=3
   calls: sub_1113c90, sub_116f770, sub_1c0
*/
void sub_116f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f5b0ULL || rel >= 0x116f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f770 size=320 callers=1 calls=2
   calls: sub_1119870, sub_5cf8f0
*/
void sub_116f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f770ULL || rel >= 0x116f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f8b0 size=224 callers=2 calls=1
   calls: sub_5cf8f0
*/
void sub_116f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f8b0ULL || rel >= 0x116f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116f990 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_116f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116f990ULL || rel >= 0x116fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116fa70 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_116fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116fa70ULL || rel >= 0x116fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116fb50 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_116fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116fb50ULL || rel >= 0x116fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116fbc0 size=240 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_116fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116fbc0ULL || rel >= 0x116fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116fcb0 size=240 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_116fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116fcb0ULL || rel >= 0x116fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116fda0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_116fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116fda0ULL || rel >= 0x116fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116fe10 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_116fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116fe10ULL || rel >= 0x116fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116fe80 size=240 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_116fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116fe80ULL || rel >= 0x116ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ff70 size=240 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_116ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ff70ULL || rel >= 0x1170060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01170060 size=128 callers=1 calls=0
*/
void sub_1170060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1170060ULL || rel >= 0x11700e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011700e0 size=400 callers=1 calls=3
   calls: sub_59bee0, sub_612ef0, sub_967240
   ref: EffHeadCenter01
*/
void EffHeadCenter01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11700e0ULL || rel >= 0x1170270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01170270 size=1136 callers=1 calls=5
   calls: sub_1170940, sub_59a650, sub_607750, sub_65d220, sub_972c70
*/
void sub_1170270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1170270ULL || rel >= 0x11706e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011706e0 size=352 callers=15 calls=5
   calls: sub_59a5a0, sub_59a650, sub_59a670, sub_59a6d0, sub_607750
*/
void sub_11706e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11706e0ULL || rel >= 0x1170840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01170840 size=256 callers=7 calls=3
   calls: sub_59a5c0, sub_59a6f0, sub_607750
*/
void sub_1170840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1170840ULL || rel >= 0x1170940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01170940 size=1232 callers=2 calls=3
   calls: sub_607750, sub_612f70, sub_967240
*/
void sub_1170940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1170940ULL || rel >= 0x1170e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01170e10 size=112 callers=5 calls=1
   calls: sub_11706e0
*/
void sub_1170e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1170e10ULL || rel >= 0x1170e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01170e80 size=400 callers=1 calls=6
   calls: sub_1170940, sub_59a5a0, sub_59a650, sub_59a670, sub_59a6d0, sub_607750
*/
void sub_1170e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1170e80ULL || rel >= 0x1171010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01171010 size=16 callers=1 calls=0
*/
void sub_1171010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1171010ULL || rel >= 0x1171020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01171020 size=160 callers=2 calls=2
   calls: sub_5db1b0, sub_65cd10
*/
void sub_1171020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1171020ULL || rel >= 0x11710c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011710c0 size=16 callers=4 calls=0
*/
void sub_11710c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11710c0ULL || rel >= 0x11710d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011710d0 size=96 callers=0 calls=6
   calls: sub_112e660, sub_112e830, sub_112ea00, sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_11710d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11710d0ULL || rel >= 0x1171130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01171130 size=416 callers=0 calls=6
   calls: sub_112e660, sub_112e830, sub_112ea00, sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_1171130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1171130ULL || rel >= 0x11712d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011712d0 size=144 callers=0 calls=0
*/
void sub_11712d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11712d0ULL || rel >= 0x1171360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01171360 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1171360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1171360ULL || rel >= 0x11713d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011713d0 size=144 callers=0 calls=0
*/
void sub_11713d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11713d0ULL || rel >= 0x1171460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01171460 size=144 callers=0 calls=0
*/
void sub_1171460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1171460ULL || rel >= 0x11714f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011714f0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11714f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11714f0ULL || rel >= 0x1171560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01171560 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1171560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1171560ULL || rel >= 0x11715d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011715d0 size=144 callers=0 calls=0
*/
void sub_11715d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11715d0ULL || rel >= 0x1171660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01171660 size=144 callers=0 calls=0
*/
void sub_1171660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1171660ULL || rel >= 0x11716f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011716f0 size=176 callers=1 calls=1
   calls: sub_5db1b0
*/
void sub_11716f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11716f0ULL || rel >= 0x11717a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011717a0 size=560 callers=0 calls=5
   calls: sub_11719d0, sub_1171b70, sub_1173a70, sub_11742a0, sub_1174640
*/
void sub_11717a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11717a0ULL || rel >= 0x11719d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011719d0 size=416 callers=20 calls=1
   calls: sub_bf0820
*/
void sub_11719d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11719d0ULL || rel >= 0x1171b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01171b70 size=400 callers=1 calls=1
   calls: sub_967240
*/
void sub_1171b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1171b70ULL || rel >= 0x1171d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01171d00 size=2448 callers=0 calls=9
   calls: sub_112e580, sub_112e750, sub_112e830, sub_112e920, sub_112ea00, sub_11719d0, sub_11746f0, sub_1174cc0, sub_612f70
*/
void sub_1171d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1171d00ULL || rel >= 0x1172690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172690 size=32 callers=6 calls=0
*/
void sub_1172690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172690ULL || rel >= 0x11726b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011726b0 size=16 callers=2 calls=0
*/
void sub_11726b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11726b0ULL || rel >= 0x11726c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011726c0 size=112 callers=1 calls=0
*/
void sub_11726c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11726c0ULL || rel >= 0x1172730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172730 size=64 callers=9 calls=0
*/
void sub_1172730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172730ULL || rel >= 0x1172770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172770 size=480 callers=3 calls=5
   calls: sub_11719d0, sub_1173a10, sub_1174640, sub_11747e0, sub_967240
*/
void sub_1172770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172770ULL || rel >= 0x1172950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172950 size=112 callers=28 calls=2
   calls: sub_11719d0, sub_1174640
*/
void sub_1172950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172950ULL || rel >= 0x11729c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011729c0 size=32 callers=1 calls=1
   calls: sub_1173a10
*/
void sub_11729c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11729c0ULL || rel >= 0x11729e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011729e0 size=608 callers=2 calls=3
   calls: sub_11719d0, sub_11747e0, sub_967240
*/
void sub_11729e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11729e0ULL || rel >= 0x1172c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172c40 size=240 callers=1 calls=3
   calls: sub_11719d0, sub_11729e0, sub_1174a00
*/
void sub_1172c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172c40ULL || rel >= 0x1172d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172d30 size=80 callers=4 calls=0
*/
void sub_1172d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172d30ULL || rel >= 0x1172d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172d80 size=192 callers=4 calls=2
   calls: sub_11719d0, sub_1174b30
*/
void sub_1172d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172d80ULL || rel >= 0x1172e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172e40 size=112 callers=4 calls=2
   calls: sub_11719d0, sub_1174350
*/
void sub_1172e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172e40ULL || rel >= 0x1172eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172eb0 size=160 callers=4 calls=4
   calls: sub_112e920, sub_11719d0, sub_1174640, sub_1174910
*/
void sub_1172eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172eb0ULL || rel >= 0x1172f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172f50 size=96 callers=2 calls=0
*/
void sub_1172f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172f50ULL || rel >= 0x1172fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01172fb0 size=112 callers=1 calls=2
   calls: sub_1160e20, sub_11719d0
*/
void sub_1172fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1172fb0ULL || rel >= 0x1173020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173020 size=112 callers=2 calls=2
   calls: sub_11719d0, sub_1174cb0
*/
void sub_1173020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173020ULL || rel >= 0x1173090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173090 size=80 callers=3 calls=2
   calls: sub_11719d0, sub_11744a0
*/
void sub_1173090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173090ULL || rel >= 0x11730e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011730e0 size=48 callers=2 calls=0
*/
void sub_11730e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11730e0ULL || rel >= 0x1173110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173110 size=144 callers=1 calls=0
*/
void sub_1173110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173110ULL || rel >= 0x11731a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011731a0 size=224 callers=1 calls=0
*/
void sub_11731a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11731a0ULL || rel >= 0x1173280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173280 size=144 callers=1 calls=0
*/
void sub_1173280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173280ULL || rel >= 0x1173310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173310 size=32 callers=1 calls=0
*/
void sub_1173310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173310ULL || rel >= 0x1173330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173330 size=336 callers=0 calls=0
*/
void sub_1173330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173330ULL || rel >= 0x1173480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173480 size=16 callers=0 calls=0
*/
void sub_1173480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173480ULL || rel >= 0x1173490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173490 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1173490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173490ULL || rel >= 0x1173500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173500 size=16 callers=0 calls=0
*/
void sub_1173500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173500ULL || rel >= 0x1173510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173510 size=16 callers=0 calls=0
*/
void sub_1173510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173510ULL || rel >= 0x1173520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173520 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1173520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173520ULL || rel >= 0x1173590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173590 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1173590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173590ULL || rel >= 0x1173600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173600 size=16 callers=0 calls=0
*/
void sub_1173600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173600ULL || rel >= 0x1173610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173610 size=16 callers=0 calls=0
*/
void sub_1173610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173610ULL || rel >= 0x1173620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173620 size=160 callers=1 calls=0
*/
void sub_1173620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173620ULL || rel >= 0x11736c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011736c0 size=368 callers=0 calls=0
*/
void sub_11736c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11736c0ULL || rel >= 0x1173830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173830 size=352 callers=2 calls=1
   calls: sub_967240
*/
void sub_1173830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173830ULL || rel >= 0x1173990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173990 size=128 callers=4 calls=1
   calls: sub_11742a0
*/
void sub_1173990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173990ULL || rel >= 0x1173a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173a10 size=96 callers=2 calls=1
   calls: sub_11742a0
*/
void sub_1173a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173a10ULL || rel >= 0x1173a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173a70 size=880 callers=1 calls=3
   calls: sub_11742a0, sub_1174640, sub_1174cc0
*/
void sub_1173a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173a70ULL || rel >= 0x1173de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173de0 size=192 callers=0 calls=1
   calls: sub_1173fa0
*/
void sub_1173de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173de0ULL || rel >= 0x1173ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173ea0 size=64 callers=0 calls=0
*/
void sub_1173ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173ea0ULL || rel >= 0x1173ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173ee0 size=64 callers=0 calls=0
*/
void sub_1173ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173ee0ULL || rel >= 0x1173f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173f20 size=64 callers=0 calls=0
*/
void sub_1173f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173f20ULL || rel >= 0x1173f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173f60 size=64 callers=0 calls=0
*/
void sub_1173f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173f60ULL || rel >= 0x1173fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01173fa0 size=480 callers=1 calls=0
*/
void sub_1173fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1173fa0ULL || rel >= 0x1174180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174180 size=288 callers=1 calls=2
   calls: sub_115ff00, sub_5cf8c0
*/
void sub_1174180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174180ULL || rel >= 0x11742a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011742a0 size=176 callers=7 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_11742a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11742a0ULL || rel >= 0x1174350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174350 size=272 callers=3 calls=5
   calls: sub_112e920, sub_1160e20, sub_11744a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1174350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174350ULL || rel >= 0x1174460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174460 size=32 callers=2 calls=0
*/
void sub_1174460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174460ULL || rel >= 0x1174480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174480 size=32 callers=2 calls=0
*/
void sub_1174480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174480ULL || rel >= 0x11744a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011744a0 size=416 callers=2 calls=5
   calls: Stop_Camp_BallAura_MirrorBall_lp_2, sub_112f240, sub_11640e0, sub_1176910, sub_967240
*/
void sub_11744a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11744a0ULL || rel >= 0x1174640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174640 size=176 callers=7 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1174640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174640ULL || rel >= 0x11746f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011746f0 size=240 callers=2 calls=4
   calls: sub_113e9c0, sub_1160d50, sub_5cf8e0, sub_5cf8f0
*/
void sub_11746f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11746f0ULL || rel >= 0x11747e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011747e0 size=304 callers=2 calls=3
   calls: sub_1160e20, sub_5cf8e0, sub_5cf8f0
*/
void sub_11747e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11747e0ULL || rel >= 0x1174910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174910 size=240 callers=1 calls=3
   calls: sub_1160e20, sub_5cf8e0, sub_5cf8f0
*/
void sub_1174910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174910ULL || rel >= 0x1174a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174a00 size=288 callers=5 calls=3
   calls: sub_1160e20, sub_5cf8e0, sub_5cf8f0
*/
void sub_1174a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174a00ULL || rel >= 0x1174b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174b20 size=16 callers=3 calls=0
*/
void sub_1174b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174b20ULL || rel >= 0x1174b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174b30 size=192 callers=2 calls=3
   calls: sub_112ea00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1174b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174b30ULL || rel >= 0x1174bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174bf0 size=192 callers=1 calls=3
   calls: sub_112e830, sub_5cf8e0, sub_5cf8f0
*/
void sub_1174bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174bf0ULL || rel >= 0x1174cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174cb0 size=16 callers=10 calls=0
*/
void sub_1174cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174cb0ULL || rel >= 0x1174cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174cc0 size=32 callers=9 calls=0
*/
void sub_1174cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174cc0ULL || rel >= 0x1174ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174ce0 size=304 callers=0 calls=5
   calls: sub_113e9e0, sub_1160470, sub_1160d50, sub_5cf8e0, sub_5cf8f0
*/
void sub_1174ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174ce0ULL || rel >= 0x1174e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01174e10 size=1504 callers=0 calls=13
   calls: sub_112ee40, sub_112f240, sub_1130c00, sub_115f260, sub_1164060, sub_1164120, sub_1164140, sub_11644f0, sub_1176b10, sub_5cf8e0, sub_5cf8f0, sub_5d99d0
   ... +1 more
*/
void sub_1174e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1174e10ULL || rel >= 0x11753f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011753f0 size=3696 callers=0 calls=20
   calls: sub_1128e40, sub_112e660, sub_112e920, sub_112ea00, sub_112f240, sub_11390c0, sub_113daf0, sub_113e9c0, sub_1160d50, sub_1164130, sub_1164150, sub_1172d30
   ... +8 more
   ref: Play_Camp_Get_Ball
*/
void Play_Camp_Get_Ball(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11753f0ULL || rel >= 0x1176260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176260 size=16 callers=4 calls=0
*/
void sub_1176260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176260ULL || rel >= 0x1176270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176270 size=16 callers=1 calls=0
*/
void sub_1176270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176270ULL || rel >= 0x1176280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176280 size=16 callers=1 calls=0
*/
void sub_1176280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176280ULL || rel >= 0x1176290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176290 size=80 callers=1 calls=0
*/
void sub_1176290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176290ULL || rel >= 0x11762e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011762e0 size=176 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11762e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11762e0ULL || rel >= 0x1176390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176390 size=176 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1176390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176390ULL || rel >= 0x1176440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176440 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1176440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176440ULL || rel >= 0x11764f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011764f0 size=176 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11764f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11764f0ULL || rel >= 0x11765a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011765a0 size=176 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11765a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11765a0ULL || rel >= 0x1176650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176650 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1176650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176650ULL || rel >= 0x1176700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176700 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1176700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176700ULL || rel >= 0x11767b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011767b0 size=176 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11767b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11767b0ULL || rel >= 0x1176860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176860 size=176 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1176860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176860ULL || rel >= 0x1176910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176910 size=512 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bf0820
*/
void sub_1176910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176910ULL || rel >= 0x1176b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176b10 size=304 callers=4 calls=1
   calls: sub_bf0820
*/
void sub_1176b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176b10ULL || rel >= 0x1176c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176c40 size=16 callers=0 calls=0
*/
void sub_1176c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176c40ULL || rel >= 0x1176c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176c50 size=16 callers=0 calls=0
*/
void sub_1176c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176c50ULL || rel >= 0x1176c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176c60 size=16 callers=0 calls=0
*/
void sub_1176c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176c60ULL || rel >= 0x1176c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176c70 size=16 callers=0 calls=0
*/
void sub_1176c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176c70ULL || rel >= 0x1176c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176c80 size=208 callers=0 calls=0
*/
void sub_1176c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176c80ULL || rel >= 0x1176d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176d50 size=160 callers=1 calls=2
   calls: sub_1177c20, sub_1178a90
*/
void sub_1176d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176d50ULL || rel >= 0x1176df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176df0 size=16 callers=3 calls=0
*/
void sub_1176df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176df0ULL || rel >= 0x1176e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176e00 size=48 callers=8 calls=1
   calls: sub_112e660
*/
void sub_1176e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176e00ULL || rel >= 0x1176e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176e30 size=416 callers=0 calls=4
   calls: sub_11084b0, sub_1108730, sub_1177da0, sub_967240
*/
void sub_1176e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176e30ULL || rel >= 0x1176fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01176fd0 size=64 callers=0 calls=1
   calls: sub_1178cb0
*/
void sub_1176fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1176fd0ULL || rel >= 0x1177010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01177010 size=1408 callers=0 calls=10
   calls: sub_115f260, sub_1164020, sub_11640a0, sub_1164140, sub_1178b00, sub_1178ea0, sub_5d99d0, sub_672240, sub_967240, sub_b8b370
   ref: pokemon_avoid
   ref: pokemon
*/
void pokemon_avoid(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1177010ULL || rel >= 0x1177590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01177590 size=272 callers=0 calls=0
*/
void sub_1177590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1177590ULL || rel >= 0x11776a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011776a0 size=272 callers=0 calls=0
*/
void sub_11776a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11776a0ULL || rel >= 0x11777b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011777b0 size=16 callers=0 calls=0
*/
void sub_11777b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11777b0ULL || rel >= 0x11777c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011777c0 size=272 callers=0 calls=0
*/
void sub_11777c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11777c0ULL || rel >= 0x11778d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011778d0 size=272 callers=0 calls=0
*/
void sub_11778d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11778d0ULL || rel >= 0x11779e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011779e0 size=16 callers=0 calls=0
*/
void sub_11779e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11779e0ULL || rel >= 0x11779f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011779f0 size=16 callers=0 calls=0
*/
void sub_11779f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11779f0ULL || rel >= 0x1177a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01177a00 size=272 callers=0 calls=0
*/
void sub_1177a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1177a00ULL || rel >= 0x1177b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01177b10 size=272 callers=0 calls=0
*/
void sub_1177b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1177b10ULL || rel >= 0x1177c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01177c20 size=240 callers=1 calls=1
   calls: sub_1107f50
*/
void sub_1177c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1177c20ULL || rel >= 0x1177d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01177d10 size=144 callers=2 calls=3
   calls: sub_5cf8c0, sub_5e2350, sub_b4c060
*/
void sub_1177d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1177d10ULL || rel >= 0x1177da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01177da0 size=608 callers=1 calls=6
   calls: sub_12f9ef0, sub_5cf8e0, sub_5cf8f0, sub_b334c0, sub_b33500, sub_ea0fd0
*/
void sub_1177da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1177da0ULL || rel >= 0x1178000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178000 size=688 callers=1 calls=7
   calls: sub_136b730, sub_136b780, sub_5cf8e0, sub_5cf8f0, sub_b334c0, sub_b334f0, sub_ea0fd0
*/
void sub_1178000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178000ULL || rel >= 0x11782b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011782b0 size=624 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_b334c0, sub_b334e0, sub_ea0fd0
*/
void sub_11782b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11782b0ULL || rel >= 0x1178520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178520 size=256 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b33700
*/
void sub_1178520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178520ULL || rel >= 0x1178620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178620 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1178620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178620ULL || rel >= 0x11786b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011786b0 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11786b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11786b0ULL || rel >= 0x1178740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178740 size=240 callers=0 calls=0
*/
void sub_1178740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178740ULL || rel >= 0x1178830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178830 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1178830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178830ULL || rel >= 0x11788c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011788c0 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11788c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11788c0ULL || rel >= 0x1178950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178950 size=16 callers=0 calls=0
*/
void sub_1178950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178950ULL || rel >= 0x1178960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178960 size=16 callers=0 calls=0
*/
void sub_1178960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178960ULL || rel >= 0x1178970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178970 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1178970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178970ULL || rel >= 0x1178a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178a00 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1178a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178a00ULL || rel >= 0x1178a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178a90 size=112 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_1178a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178a90ULL || rel >= 0x1178b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178b00 size=16 callers=1 calls=0
*/
void sub_1178b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178b00ULL || rel >= 0x1178b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178b10 size=16 callers=3 calls=0
*/
void sub_1178b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178b10ULL || rel >= 0x1178b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178b20 size=16 callers=2 calls=0
*/
void sub_1178b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178b20ULL || rel >= 0x1178b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178b30 size=352 callers=1 calls=3
   calls: sub_967240, sub_b33c60, sub_b4c060
*/
void sub_1178b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178b30ULL || rel >= 0x1178c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178c90 size=32 callers=1 calls=0
*/
void sub_1178c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178c90ULL || rel >= 0x1178cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178cb0 size=144 callers=1 calls=3
   calls: sub_1178d40, sub_b335e0, sub_b4c060
*/
void sub_1178cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178cb0ULL || rel >= 0x1178d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178d40 size=352 callers=5 calls=1
   calls: sub_967240
*/
void sub_1178d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178d40ULL || rel >= 0x1178ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01178ea0 size=848 callers=2 calls=10
   calls: sub_1178d40, sub_11791f0, sub_607750, sub_967240, sub_96ccf0, sub_986bc0, sub_b33760, sub_b33800, sub_b33a30, sub_b4c060
*/
void sub_1178ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1178ea0ULL || rel >= 0x11791f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011791f0 size=480 callers=1 calls=2
   calls: sub_1119140, sub_967240
*/
void sub_11791f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11791f0ULL || rel >= 0x11793d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011793d0 size=384 callers=0 calls=3
   calls: sub_1130d00, sub_1178520, sub_967240
*/
void sub_11793d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11793d0ULL || rel >= 0x1179550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179550 size=144 callers=0 calls=3
   calls: sub_1178d40, sub_b4c060, sub_b98000
*/
void sub_1179550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179550ULL || rel >= 0x11795e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011795e0 size=16 callers=0 calls=0
*/
void sub_11795e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11795e0ULL || rel >= 0x11795f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011795f0 size=112 callers=0 calls=1
   calls: sub_11330d0
*/
void sub_11795f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11795f0ULL || rel >= 0x1179660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179660 size=208 callers=0 calls=0
*/
void sub_1179660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179660ULL || rel >= 0x1179730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179730 size=16 callers=0 calls=0
*/
void sub_1179730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179730ULL || rel >= 0x1179740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179740 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_1179740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179740ULL || rel >= 0x1179830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179830 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_1179830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179830ULL || rel >= 0x1179920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179920 size=208 callers=0 calls=0
*/
void sub_1179920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179920ULL || rel >= 0x11799f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011799f0 size=16 callers=0 calls=0
*/
void sub_11799f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11799f0ULL || rel >= 0x1179a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179a00 size=272 callers=0 calls=1
   calls: sub_b99000
*/
void sub_1179a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179a00ULL || rel >= 0x1179b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179b10 size=64 callers=0 calls=0
*/
void sub_1179b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179b10ULL || rel >= 0x1179b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179b50 size=16 callers=0 calls=0
*/
void sub_1179b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179b50ULL || rel >= 0x1179b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179b60 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_1179b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179b60ULL || rel >= 0x1179ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179ba0 size=32 callers=0 calls=0
*/
void sub_1179ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179ba0ULL || rel >= 0x1179bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179bc0 size=16 callers=0 calls=0
*/
void sub_1179bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179bc0ULL || rel >= 0x1179bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179bd0 size=16 callers=0 calls=0
*/
void sub_1179bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179bd0ULL || rel >= 0x1179be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179be0 size=256 callers=0 calls=4
   calls: sub_618d40, sub_6194a0, sub_c291d0, sub_c51540
*/
void sub_1179be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179be0ULL || rel >= 0x1179ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179ce0 size=32 callers=0 calls=0
*/
void sub_1179ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179ce0ULL || rel >= 0x1179d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179d00 size=16 callers=0 calls=0
*/
void sub_1179d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179d00ULL || rel >= 0x1179d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179d10 size=160 callers=0 calls=0
*/
void sub_1179d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179d10ULL || rel >= 0x1179db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179db0 size=272 callers=1 calls=0
*/
void sub_1179db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179db0ULL || rel >= 0x1179ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179ec0 size=16 callers=21 calls=0
*/
void sub_1179ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179ec0ULL || rel >= 0x1179ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179ed0 size=16 callers=18 calls=0
*/
void sub_1179ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179ed0ULL || rel >= 0x1179ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179ee0 size=16 callers=9 calls=0
*/
void sub_1179ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179ee0ULL || rel >= 0x1179ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179ef0 size=16 callers=3 calls=0
*/
void sub_1179ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179ef0ULL || rel >= 0x1179f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179f00 size=16 callers=3 calls=0
*/
void sub_1179f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179f00ULL || rel >= 0x1179f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179f10 size=32 callers=1 calls=0
*/
void sub_1179f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179f10ULL || rel >= 0x1179f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179f30 size=16 callers=1 calls=0
*/
void sub_1179f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179f30ULL || rel >= 0x1179f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179f40 size=16 callers=1 calls=0
*/
void sub_1179f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179f40ULL || rel >= 0x1179f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179f50 size=16 callers=2 calls=0
*/
void sub_1179f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179f50ULL || rel >= 0x1179f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179f60 size=16 callers=1 calls=0
*/
void sub_1179f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179f60ULL || rel >= 0x1179f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179f70 size=32 callers=3 calls=0
*/
void sub_1179f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179f70ULL || rel >= 0x1179f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179f90 size=48 callers=2 calls=0
*/
void sub_1179f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179f90ULL || rel >= 0x1179fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179fc0 size=16 callers=1 calls=0
*/
void sub_1179fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179fc0ULL || rel >= 0x1179fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01179fd0 size=112 callers=0 calls=0
*/
void sub_1179fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1179fd0ULL || rel >= 0x117a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a040 size=112 callers=0 calls=0
*/
void sub_117a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a040ULL || rel >= 0x117a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a0b0 size=112 callers=0 calls=0
*/
void sub_117a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a0b0ULL || rel >= 0x117a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a120 size=112 callers=0 calls=0
*/
void sub_117a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a120ULL || rel >= 0x117a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a190 size=160 callers=0 calls=0
*/
void sub_117a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a190ULL || rel >= 0x117a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a230 size=336 callers=1 calls=2
   calls: sub_117a4b0, sub_c46830
*/
void sub_117a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a230ULL || rel >= 0x117a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a380 size=304 callers=16 calls=6
   calls: sub_11061d0, sub_1106280, sub_1106320, sub_11063e0, sub_1106cd0, sub_7c19a0
   ref: item_name_hash
   ref: kinomiDataTable
*/
void kinomiDataTable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a380ULL || rel >= 0x117a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a4b0 size=352 callers=2 calls=5
   calls: sub_11061d0, sub_1106200, sub_5dd790, sub_5e26a0, sub_5e2930
*/
void sub_117a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a4b0ULL || rel >= 0x117a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a610 size=32 callers=2 calls=0
*/
void sub_117a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a610ULL || rel >= 0x117a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a630 size=144 callers=1 calls=3
   calls: sub_1106200, sub_1106220, sub_1106f30
*/
void sub_117a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a630ULL || rel >= 0x117a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a6c0 size=80 callers=39 calls=0
*/
void sub_117a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a6c0ULL || rel >= 0x117a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a710 size=304 callers=1 calls=0
*/
void sub_117a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a710ULL || rel >= 0x117a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a840 size=304 callers=1 calls=0
*/
void sub_117a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a840ULL || rel >= 0x117a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a970 size=80 callers=14 calls=0
*/
void sub_117a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a970ULL || rel >= 0x117a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117a9c0 size=304 callers=3 calls=0
*/
void sub_117a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117a9c0ULL || rel >= 0x117aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117aaf0 size=48 callers=2 calls=0
*/
void sub_117aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117aaf0ULL || rel >= 0x117ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117ab20 size=832 callers=1 calls=3
   calls: sub_1157ef0, sub_967240, sub_bf05e0
*/
void sub_117ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117ab20ULL || rel >= 0x117ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117ae60 size=16 callers=5 calls=0
*/
void sub_117ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117ae60ULL || rel >= 0x117ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117ae70 size=48 callers=9 calls=0
*/
void sub_117ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117ae70ULL || rel >= 0x117aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117aea0 size=64 callers=1 calls=0
*/
void sub_117aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117aea0ULL || rel >= 0x117aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117aee0 size=48 callers=4 calls=0
*/
void sub_117aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117aee0ULL || rel >= 0x117af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117af10 size=128 callers=4 calls=0
*/
void sub_117af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117af10ULL || rel >= 0x117af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117af90 size=128 callers=1 calls=0
*/
void sub_117af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117af90ULL || rel >= 0x117b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b010 size=64 callers=3 calls=0
*/
void sub_117b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b010ULL || rel >= 0x117b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b050 size=816 callers=2 calls=3
   calls: kinomiDataTable, sub_11063e0, sub_11065b0
   ref: rare_grade
*/
void rare_grade(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b050ULL || rel >= 0x117b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b380 size=16 callers=1 calls=0
*/
void sub_117b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b380ULL || rel >= 0x117b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b390 size=112 callers=2 calls=3
   calls: foodstuffDataTable, sub_11063e0, sub_11065b0
   ref: rare_grade
*/
void rare_grade_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b390ULL || rel >= 0x117b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b400 size=848 callers=1 calls=3
   calls: kinomiDataTable, sub_11063e0, sub_11065b0
*/
void sub_117b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b400ULL || rel >= 0x117b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b750 size=256 callers=0 calls=2
   calls: sub_115a6e0, sub_115ab80
*/
void sub_117b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b750ULL || rel >= 0x117b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b850 size=16 callers=0 calls=0
*/
void sub_117b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b850ULL || rel >= 0x117b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b860 size=176 callers=0 calls=0
*/
void sub_117b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b860ULL || rel >= 0x117b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b910 size=16 callers=0 calls=0
*/
void sub_117b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b910ULL || rel >= 0x117b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b920 size=16 callers=0 calls=0
*/
void sub_117b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b920ULL || rel >= 0x117b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b930 size=16 callers=0 calls=0
*/
void sub_117b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b930ULL || rel >= 0x117b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b940 size=16 callers=0 calls=0
*/
void sub_117b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b940ULL || rel >= 0x117b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b950 size=16 callers=0 calls=0
*/
void sub_117b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b950ULL || rel >= 0x117b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117b960 size=208 callers=0 calls=0
*/
void sub_117b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117b960ULL || rel >= 0x117ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117ba30 size=336 callers=1 calls=2
   calls: sub_117a4b0, sub_c46830
*/
void sub_117ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117ba30ULL || rel >= 0x117bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117bb80 size=304 callers=1 calls=6
   calls: sub_11061d0, sub_1106280, sub_1106320, sub_11063e0, sub_1106cd0, sub_7c19a0
   ref: item_name_hash
   ref: foodstuffDataTable
*/
void foodstuffDataTable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117bb80ULL || rel >= 0x117bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117bcb0 size=96 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_117bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117bcb0ULL || rel >= 0x117bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117bd10 size=512 callers=0 calls=1
   calls: sub_135a1a0
*/
void sub_117bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117bd10ULL || rel >= 0x117bf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117bf10 size=16 callers=3 calls=0
*/
void sub_117bf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117bf10ULL || rel >= 0x117bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117bf20 size=16 callers=1 calls=0
*/
void sub_117bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117bf20ULL || rel >= 0x117bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117bf30 size=112 callers=1 calls=0
*/
void sub_117bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117bf30ULL || rel >= 0x117bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117bfa0 size=16 callers=2 calls=0
*/
void sub_117bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117bfa0ULL || rel >= 0x117bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117bfb0 size=48 callers=4 calls=0
*/
void sub_117bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117bfb0ULL || rel >= 0x117bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117bfe0 size=80 callers=0 calls=0
*/
void sub_117bfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117bfe0ULL || rel >= 0x117c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c030 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_117c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c030ULL || rel >= 0x117c0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c0a0 size=80 callers=0 calls=0
*/
void sub_117c0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c0a0ULL || rel >= 0x117c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c0f0 size=80 callers=0 calls=0
*/
void sub_117c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c0f0ULL || rel >= 0x117c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c140 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_117c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c140ULL || rel >= 0x117c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c1b0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_117c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c1b0ULL || rel >= 0x117c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c220 size=80 callers=0 calls=0
*/
void sub_117c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c220ULL || rel >= 0x117c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c270 size=80 callers=0 calls=0
*/
void sub_117c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c270ULL || rel >= 0x117c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c2c0 size=96 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_117c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c2c0ULL || rel >= 0x117c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c320 size=640 callers=4 calls=3
   calls: sub_115a6e0, sub_115a6f0, sub_115b9f0
*/
void sub_117c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c320ULL || rel >= 0x117c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c5a0 size=208 callers=0 calls=0
*/
void sub_117c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c5a0ULL || rel >= 0x117c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c670 size=208 callers=0 calls=0
*/
void sub_117c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c670ULL || rel >= 0x117c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c740 size=240 callers=0 calls=0
*/
void sub_117c740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c740ULL || rel >= 0x117c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c830 size=208 callers=0 calls=0
*/
void sub_117c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c830ULL || rel >= 0x117c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c900 size=208 callers=0 calls=0
*/
void sub_117c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c900ULL || rel >= 0x117c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c9d0 size=16 callers=0 calls=0
*/
void sub_117c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c9d0ULL || rel >= 0x117c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c9e0 size=16 callers=0 calls=0
*/
void sub_117c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c9e0ULL || rel >= 0x117c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117c9f0 size=208 callers=0 calls=0
*/
void sub_117c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117c9f0ULL || rel >= 0x117cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117cac0 size=208 callers=0 calls=0
*/
void sub_117cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117cac0ULL || rel >= 0x117cb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117cb90 size=160 callers=0 calls=0
*/
void sub_117cb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117cb90ULL || rel >= 0x117cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117cc30 size=224 callers=1 calls=1
   calls: anonymous
*/
void sub_117cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117cc30ULL || rel >= 0x117cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117cd10 size=496 callers=0 calls=9
   calls: sub_1127d00, sub_1128e40, sub_113f1c0, sub_117cf00, sub_117d200, sub_117d400, sub_117dca0, sub_5cf8e0, sub_5cf8f0
   ref: Play_SceneTransition_Footsteps
*/
void Play_SceneTransition_Footsteps_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117cd10ULL || rel >= 0x117cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117cf00 size=768 callers=1 calls=8
   calls: sub_1158640, sub_1179f30, sub_1179f50, sub_117dca0, sub_117faf0, sub_11804b0, sub_767950, sub_7847d0
*/
void sub_117cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117cf00ULL || rel >= 0x117d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117d200 size=512 callers=1 calls=2
   calls: sub_115ab80, sub_bf0820
*/
void sub_117d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117d200ULL || rel >= 0x117d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117d400 size=1456 callers=1 calls=5
   calls: sub_1127d00, sub_117dca0, sub_1295e70, sub_5cf8e0, sub_5cf8f0
*/
void sub_117d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117d400ULL || rel >= 0x117d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117d9b0 size=304 callers=0 calls=4
   calls: sub_1127fc0, sub_117dca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_117d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117d9b0ULL || rel >= 0x117dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117dae0 size=16 callers=0 calls=0
*/
void sub_117dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117dae0ULL || rel >= 0x117daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117daf0 size=16 callers=0 calls=0
*/
void sub_117daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117daf0ULL || rel >= 0x117db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117db00 size=16 callers=0 calls=0
*/
void sub_117db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117db00ULL || rel >= 0x117db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117db10 size=16 callers=0 calls=0
*/
void sub_117db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117db10ULL || rel >= 0x117db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117db20 size=16 callers=0 calls=0
*/
void sub_117db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117db20ULL || rel >= 0x117db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117db30 size=16 callers=0 calls=0
*/
void sub_117db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117db30ULL || rel >= 0x117db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117db40 size=16 callers=0 calls=0
*/
void sub_117db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117db40ULL || rel >= 0x117db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117db50 size=16 callers=0 calls=0
*/
void sub_117db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117db50ULL || rel >= 0x117db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117db60 size=16 callers=0 calls=0
*/
void sub_117db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117db60ULL || rel >= 0x117db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117db70 size=304 callers=0 calls=0
*/
void sub_117db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117db70ULL || rel >= 0x117dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117dca0 size=304 callers=222 calls=0
*/
void sub_117dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117dca0ULL || rel >= 0x117ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117ddd0 size=144 callers=0 calls=4
   calls: sub_110ca90, sub_1134fa0, sub_1136920, sub_11611a0
*/
void sub_117ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117ddd0ULL || rel >= 0x117de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117de60 size=16 callers=0 calls=0
*/
void sub_117de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117de60ULL || rel >= 0x117de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117de70 size=32 callers=0 calls=0
*/
void sub_117de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117de70ULL || rel >= 0x117de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117de90 size=32 callers=0 calls=0
*/
void sub_117de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117de90ULL || rel >= 0x117deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117deb0 size=16 callers=0 calls=0
*/
void sub_117deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117deb0ULL || rel >= 0x117dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117dec0 size=16 callers=0 calls=0
*/
void sub_117dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117dec0ULL || rel >= 0x117ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117ded0 size=16 callers=0 calls=0
*/
void sub_117ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117ded0ULL || rel >= 0x117dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117dee0 size=16 callers=0 calls=0
*/
void sub_117dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117dee0ULL || rel >= 0x117def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117def0 size=16 callers=0 calls=0
*/
void sub_117def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117def0ULL || rel >= 0x117df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117df00 size=16 callers=0 calls=0
*/
void sub_117df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117df00ULL || rel >= 0x117df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117df10 size=16 callers=0 calls=0
*/
void sub_117df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117df10ULL || rel >= 0x117df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117df20 size=16 callers=0 calls=0
*/
void sub_117df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117df20ULL || rel >= 0x117df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117df30 size=112 callers=0 calls=3
   calls: Play_Camp_ClosenessUp, sub_11611a0, sub_bf05e0
*/
void sub_117df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117df30ULL || rel >= 0x117dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117dfa0 size=16 callers=0 calls=0
*/
void sub_117dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117dfa0ULL || rel >= 0x117dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117dfb0 size=16 callers=0 calls=0
*/
void sub_117dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117dfb0ULL || rel >= 0x117dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117dfc0 size=16 callers=0 calls=0
*/
void sub_117dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117dfc0ULL || rel >= 0x117dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117dfd0 size=208 callers=0 calls=0
*/
void sub_117dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117dfd0ULL || rel >= 0x117e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117e0a0 size=592 callers=1 calls=2
   calls: sub_68ac20, sub_e7c210
*/
void sub_117e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117e0a0ULL || rel >= 0x117e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117e2f0 size=3616 callers=1 calls=35
   calls: sub_11151d0, sub_113ea70, sub_1156f20, sub_1157600, sub_1157610, sub_1173620, sub_1179ec0, sub_117f110, sub_117f400, sub_117f650, sub_117f8a0, sub_117fb10
   ... +23 more
*/
void sub_117e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117e2f0ULL || rel >= 0x117f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117f110 size=752 callers=1 calls=3
   calls: sub_1113c90, sub_1114050, sub_1c0
*/
void sub_117f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117f110ULL || rel >= 0x117f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117f400 size=592 callers=1 calls=3
   calls: sub_1113c90, sub_11808e0, sub_1c0
*/
void sub_117f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117f400ULL || rel >= 0x117f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117f650 size=592 callers=1 calls=3
   calls: sub_1113c90, sub_11809c0, sub_1c0
*/
void sub_117f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117f650ULL || rel >= 0x117f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117f8a0 size=592 callers=1 calls=3
   calls: sub_1113c90, sub_1180ae0, sub_1c0
*/
void sub_117f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117f8a0ULL || rel >= 0x117faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117faf0 size=32 callers=48 calls=0
*/
void sub_117faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117faf0ULL || rel >= 0x117fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117fb10 size=592 callers=1 calls=3
   calls: sub_1113c90, sub_1180df0, sub_1c0
*/
void sub_117fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117fb10ULL || rel >= 0x117fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117fd60 size=592 callers=1 calls=3
   calls: sub_1113c90, sub_1180ed0, sub_1c0
*/
void sub_117fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117fd60ULL || rel >= 0x117ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0117ffb0 size=592 callers=1 calls=3
   calls: sub_1113c90, sub_11820a0, sub_1c0
*/
void sub_117ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117ffb0ULL || rel >= 0x1180200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180200 size=96 callers=1 calls=0
*/
void sub_1180200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180200ULL || rel >= 0x1180260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180260 size=64 callers=1 calls=1
   calls: tipsdata_2
*/
void sub_1180260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180260ULL || rel >= 0x11802a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011802a0 size=16 callers=3 calls=0
*/
void sub_11802a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11802a0ULL || rel >= 0x11802b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011802b0 size=16 callers=1 calls=0
*/
void sub_11802b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11802b0ULL || rel >= 0x11802c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011802c0 size=16 callers=2 calls=0
*/
void sub_11802c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11802c0ULL || rel >= 0x11802d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011802d0 size=16 callers=1 calls=0
*/
void sub_11802d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11802d0ULL || rel >= 0x11802e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011802e0 size=32 callers=5 calls=0
*/
void sub_11802e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11802e0ULL || rel >= 0x1180300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180300 size=96 callers=1 calls=0
*/
void sub_1180300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180300ULL || rel >= 0x1180360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180360 size=32 callers=10 calls=0
*/
void sub_1180360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180360ULL || rel >= 0x1180380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180380 size=144 callers=1 calls=1
   calls: sub_ed32d0
*/
void sub_1180380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180380ULL || rel >= 0x1180410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180410 size=112 callers=3 calls=1
   calls: sub_ed3290
*/
void sub_1180410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180410ULL || rel >= 0x1180480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180480 size=48 callers=1 calls=0
*/
void sub_1180480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180480ULL || rel >= 0x11804b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011804b0 size=32 callers=1 calls=0
*/
void sub_11804b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11804b0ULL || rel >= 0x11804d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011804d0 size=912 callers=0 calls=0
*/
void sub_11804d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11804d0ULL || rel >= 0x1180860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180860 size=16 callers=0 calls=0
*/
void sub_1180860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180860ULL || rel >= 0x1180870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180870 size=16 callers=0 calls=0
*/
void sub_1180870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180870ULL || rel >= 0x1180880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180880 size=16 callers=0 calls=0
*/
void sub_1180880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180880ULL || rel >= 0x1180890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180890 size=16 callers=0 calls=0
*/
void sub_1180890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180890ULL || rel >= 0x11808a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011808a0 size=16 callers=0 calls=0
*/
void sub_11808a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11808a0ULL || rel >= 0x11808b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011808b0 size=16 callers=0 calls=0
*/
void sub_11808b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11808b0ULL || rel >= 0x11808c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011808c0 size=16 callers=0 calls=0
*/
void sub_11808c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11808c0ULL || rel >= 0x11808d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011808d0 size=16 callers=0 calls=0
*/
void sub_11808d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11808d0ULL || rel >= 0x11808e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011808e0 size=224 callers=1 calls=1
   calls: sub_11489c0
*/
void sub_11808e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11808e0ULL || rel >= 0x11809c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011809c0 size=224 callers=1 calls=1
   calls: sub_117bcb0
*/
void sub_11809c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11809c0ULL || rel >= 0x1180aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180aa0 size=64 callers=0 calls=0
*/
void sub_1180aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180aa0ULL || rel >= 0x1180ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180ae0 size=224 callers=1 calls=1
   calls: sub_11855f0
*/
void sub_1180ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180ae0ULL || rel >= 0x1180bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180bc0 size=304 callers=1 calls=1
   calls: sub_118b0f0
*/
void sub_1180bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180bc0ULL || rel >= 0x1180cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180cf0 size=256 callers=1 calls=1
   calls: sub_1164f00
*/
void sub_1180cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180cf0ULL || rel >= 0x1180df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180df0 size=224 callers=1 calls=1
   calls: sub_1169160
*/
void sub_1180df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180df0ULL || rel >= 0x1180ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180ed0 size=224 callers=1 calls=1
   calls: sub_116f540
*/
void sub_1180ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180ed0ULL || rel >= 0x1180fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01180fb0 size=496 callers=1 calls=2
   calls: sub_5cf8c0, sub_5d8ee0
*/
void sub_1180fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1180fb0ULL || rel >= 0x11811a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011811a0 size=1680 callers=0 calls=4
   calls: sub_1181a90, sub_1181d00, sub_5cf8d0, sub_5e2bc0
*/
void sub_11811a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11811a0ULL || rel >= 0x1181830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01181830 size=16 callers=0 calls=0
*/
void sub_1181830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1181830ULL || rel >= 0x1181840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01181840 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_1181840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1181840ULL || rel >= 0x11818f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011818f0 size=16 callers=0 calls=0
*/
void sub_11818f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11818f0ULL || rel >= 0x1181900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01181900 size=16 callers=0 calls=0
*/
void sub_1181900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1181900ULL || rel >= 0x1181910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01181910 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_1181910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1181910ULL || rel >= 0x11819c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011819c0 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_11819c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11819c0ULL || rel >= 0x1181a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01181a70 size=16 callers=0 calls=0
*/
void sub_1181a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1181a70ULL || rel >= 0x1181a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01181a80 size=16 callers=0 calls=0
*/
void sub_1181a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1181a80ULL || rel >= 0x1181a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01181a90 size=624 callers=3 calls=1
   calls: sub_5e2bc0
*/
void sub_1181a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1181a90ULL || rel >= 0x1181d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01181d00 size=464 callers=3 calls=1
   calls: sub_5e2bc0
*/
void sub_1181d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1181d00ULL || rel >= 0x1181ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01181ed0 size=240 callers=1 calls=1
   calls: sub_11ba250
*/
void sub_1181ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1181ed0ULL || rel >= 0x1181fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01181fc0 size=224 callers=1 calls=1
   calls: sub_11bc400
*/
void sub_1181fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1181fc0ULL || rel >= 0x11820a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011820a0 size=224 callers=1 calls=1
   calls: sub_1128c00
*/
void sub_11820a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11820a0ULL || rel >= 0x1182180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182180 size=224 callers=1 calls=1
   calls: sub_1177d10
*/
void sub_1182180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182180ULL || rel >= 0x1182260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182260 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1182260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182260ULL || rel >= 0x11823b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011823b0 size=240 callers=0 calls=0
*/
void sub_11823b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11823b0ULL || rel >= 0x11824a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011824a0 size=240 callers=0 calls=0
*/
void sub_11824a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11824a0ULL || rel >= 0x1182590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182590 size=240 callers=0 calls=0
*/
void sub_1182590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182590ULL || rel >= 0x1182680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182680 size=240 callers=0 calls=0
*/
void sub_1182680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182680ULL || rel >= 0x1182770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182770 size=240 callers=0 calls=0
*/
void sub_1182770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182770ULL || rel >= 0x1182860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182860 size=16 callers=0 calls=0
*/
void sub_1182860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182860ULL || rel >= 0x1182870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182870 size=16 callers=0 calls=0
*/
void sub_1182870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182870ULL || rel >= 0x1182880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182880 size=240 callers=0 calls=0
*/
void sub_1182880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182880ULL || rel >= 0x1182970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182970 size=240 callers=0 calls=0
*/
void sub_1182970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182970ULL || rel >= 0x1182a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182a60 size=224 callers=1 calls=1
   calls: sub_117c2c0
*/
void sub_1182a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182a60ULL || rel >= 0x1182b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182b40 size=208 callers=0 calls=0
*/
void sub_1182b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182b40ULL || rel >= 0x1182c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182c10 size=368 callers=0 calls=0
*/
void sub_1182c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182c10ULL || rel >= 0x1182d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01182d80 size=800 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1182d80ULL || rel >= 0x11830a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011830a0 size=192 callers=1 calls=0
*/
void sub_11830a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11830a0ULL || rel >= 0x1183160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01183160 size=864 callers=0 calls=3
   calls: PokeCampSave_NPCKey_, sub_5cfaf0, sub_5e2bc0
*/
void sub_1183160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1183160ULL || rel >= 0x11834c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011834c0 size=16 callers=0 calls=0
*/
void sub_11834c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11834c0ULL || rel >= 0x11834d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011834d0 size=16 callers=0 calls=0
*/
void sub_11834d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11834d0ULL || rel >= 0x11834e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011834e0 size=16 callers=0 calls=0
*/
void sub_11834e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11834e0ULL || rel >= 0x11834f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011834f0 size=672 callers=1 calls=11
   calls: sub_1119500, sub_1183790, sub_1307dd0, sub_5cf8e0, sub_5cf8f0, sub_5dd790, sub_5e2930, sub_793480, sub_c4ac70, sub_c50b30, sub_d0c0
   ref: common/pokecamp_npccamp.dat
   ref: bin/pokemon_data/pokecamp/npc/
*/
void pokecamp_npccamp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11834f0ULL || rel >= 0x1183790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01183790 size=176 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_1183790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1183790ULL || rel >= 0x1183840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01183840 size=32 callers=1 calls=0
*/
void sub_1183840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1183840ULL || rel >= 0x1183860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01183860 size=16 callers=1 calls=0
*/
void sub_1183860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1183860ULL || rel >= 0x1183870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01183870 size=144 callers=7 calls=1
   calls: sub_13083a0
*/
void sub_1183870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1183870ULL || rel >= 0x1183900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01183900 size=3792 callers=1 calls=17
   calls: sub_11847d0, sub_13083a0, sub_136b500, sub_136b560, sub_136b580, sub_136b780, sub_136b850, sub_67b7e0, sub_7cd960, sub_b3abe0, sub_b4c080, sub_b57170
   ... +5 more
*/
void sub_1183900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1183900ULL || rel >= 0x11847d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011847d0 size=384 callers=2 calls=3
   calls: sub_1308200, sub_67b990, sub_67d450
*/
void sub_11847d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11847d0ULL || rel >= 0x1184950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01184950 size=608 callers=1 calls=5
   calls: PokeCampSave_NPCKey__2, sub_1184bb0, sub_1184fe0, sub_5cfaf0, sub_783bd0
*/
void sub_1184950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1184950ULL || rel >= 0x1184bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01184bb0 size=1072 callers=2 calls=1
   calls: sub_13083a0
*/
void sub_1184bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1184bb0ULL || rel >= 0x1184fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01184fe0 size=848 callers=1 calls=7
   calls: sub_11847d0, sub_1184bb0, sub_763030, sub_767570, sub_767730, sub_767880, sub_76f5d0
*/
void sub_1184fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1184fe0ULL || rel >= 0x1185330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185330 size=192 callers=2 calls=1
   calls: sub_13083a0
*/
void sub_1185330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185330ULL || rel >= 0x11853f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011853f0 size=144 callers=2 calls=1
   calls: sub_13083a0
*/
void sub_11853f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11853f0ULL || rel >= 0x1185480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185480 size=368 callers=1 calls=1
   calls: sub_13083a0
*/
void sub_1185480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185480ULL || rel >= 0x11855f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011855f0 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_11855f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11855f0ULL || rel >= 0x1185640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185640 size=208 callers=0 calls=1
   calls: sub_136b7c0
*/
void sub_1185640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185640ULL || rel >= 0x1185710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185710 size=208 callers=0 calls=1
   calls: sub_136b7c0
*/
void sub_1185710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185710ULL || rel >= 0x11857e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011857e0 size=208 callers=0 calls=1
   calls: sub_136b7c0
*/
void sub_11857e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11857e0ULL || rel >= 0x11858b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011858b0 size=208 callers=0 calls=1
   calls: sub_136b7c0
*/
void sub_11858b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11858b0ULL || rel >= 0x1185980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185980 size=208 callers=0 calls=1
   calls: sub_136b7c0
*/
void sub_1185980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185980ULL || rel >= 0x1185a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185a50 size=208 callers=0 calls=1
   calls: sub_136b7c0
*/
void sub_1185a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185a50ULL || rel >= 0x1185b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185b20 size=16 callers=1 calls=0
*/
void sub_1185b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185b20ULL || rel >= 0x1185b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185b30 size=48 callers=2 calls=0
*/
void sub_1185b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185b30ULL || rel >= 0x1185b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185b60 size=48 callers=1 calls=0
*/
void sub_1185b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185b60ULL || rel >= 0x1185b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185b90 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1185b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185b90ULL || rel >= 0x1185c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185c00 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1185c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185c00ULL || rel >= 0x1185c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185c70 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1185c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185c70ULL || rel >= 0x1185ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185ce0 size=224 callers=1 calls=1
   calls: sub_1185dc0
*/
void sub_1185ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185ce0ULL || rel >= 0x1185dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185dc0 size=448 callers=1 calls=0
*/
void sub_1185dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185dc0ULL || rel >= 0x1185f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01185f80 size=464 callers=0 calls=0
*/
void sub_1185f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1185f80ULL || rel >= 0x1186150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01186150 size=16 callers=1 calls=0
*/
void sub_1186150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1186150ULL || rel >= 0x1186160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01186160 size=832 callers=3 calls=6
   calls: sub_1127360, sub_1136f20, sub_113d860, sub_118a800, sub_118aa30, sub_bf05e0
*/
void sub_1186160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1186160ULL || rel >= 0x11864a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011864a0 size=400 callers=6 calls=5
   calls: sub_1186630, sub_11867f0, sub_1186900, sub_1186ab0, sub_1186db0
*/
void sub_11864a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11864a0ULL || rel >= 0x1186630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01186630 size=448 callers=1 calls=0
*/
void sub_1186630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1186630ULL || rel >= 0x11867f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011867f0 size=272 callers=1 calls=2
   calls: sub_115ba20, sub_115ba30
*/
void sub_11867f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11867f0ULL || rel >= 0x1186900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01186900 size=432 callers=1 calls=6
   calls: sub_112e920, sub_115a6f0, sub_115ba20, sub_115bb40, sub_967240, sub_972c70
*/
void sub_1186900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1186900ULL || rel >= 0x1186ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01186ab0 size=768 callers=1 calls=7
   calls: sub_1108c70, sub_110cab0, sub_110cb40, sub_1176df0, sub_118a4a0, sub_972c70, sub_ead150
*/
void sub_1186ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1186ab0ULL || rel >= 0x1186db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01186db0 size=496 callers=1 calls=3
   calls: sub_112e920, sub_1186fa0, sub_11877b0
*/
void sub_1186db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1186db0ULL || rel >= 0x1186fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01186fa0 size=2064 callers=2 calls=8
   calls: sub_112e920, sub_112ea00, sub_11361b0, sub_1136f20, sub_11386f0, sub_11387b0, sub_967240, sub_972c70
*/
void sub_1186fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1186fa0ULL || rel >= 0x11877b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011877b0 size=1440 callers=1 calls=25
   calls: fi_move_speed, sub_1108ca0, sub_1127360, sub_112e750, sub_112e920, sub_11361a0, sub_1136f20, sub_115ace0, sub_1160e20, sub_11615a0, sub_1176df0, sub_1186fa0
   ... +13 more
*/
void sub_11877b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11877b0ULL || rel >= 0x1187d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01187d50 size=928 callers=1 calls=7
   calls: sub_112e750, sub_112e920, sub_1136f20, sub_1137bd0, sub_113a1c0, sub_972c70, sub_ead150
*/
void sub_1187d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1187d50ULL || rel >= 0x11880f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011880f0 size=928 callers=1 calls=7
   calls: Play_Camp_Sleep, sub_112e750, sub_112e920, sub_1136f20, sub_113a1c0, sub_972c70, sub_ead150
*/
void sub_11880f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11880f0ULL || rel >= 0x1188490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01188490 size=1312 callers=1 calls=3
   calls: sub_112e920, sub_1165340, sub_967240
*/
void sub_1188490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1188490ULL || rel >= 0x11889b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011889b0 size=1584 callers=1 calls=4
   calls: sub_112e920, sub_1165340, sub_967240, sub_972c70
*/
void sub_11889b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11889b0ULL || rel >= 0x1188fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01188fe0 size=928 callers=1 calls=7
   calls: sub_112e750, sub_112e920, sub_1136f20, sub_1137090, sub_113a1c0, sub_972c70, sub_ead150
*/
void sub_1188fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1188fe0ULL || rel >= 0x1189380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01189380 size=928 callers=1 calls=7
   calls: sub_112e750, sub_112e920, sub_1136f20, sub_1137360, sub_113a1c0, sub_972c70, sub_ead150
*/
void sub_1189380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1189380ULL || rel >= 0x1189720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01189720 size=992 callers=1 calls=7
   calls: sub_112e750, sub_112e920, sub_1136f20, sub_11373f0, sub_113a1c0, sub_972c70, sub_ead150
*/
void sub_1189720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1189720ULL || rel >= 0x1189b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01189b00 size=992 callers=1 calls=7
   calls: sub_112e750, sub_112e920, sub_1136f20, sub_1137b30, sub_113a1c0, sub_972c70, sub_ead150
*/
void sub_1189b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1189b00ULL || rel >= 0x1189ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01189ee0 size=368 callers=1 calls=9
   calls: Play_Camp_Sleep_2, sub_1108730, sub_112e750, sub_112e920, sub_1134fa0, sub_1138460, sub_765ab0, sub_972c70, sub_ead150
*/
void sub_1189ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1189ee0ULL || rel >= 0x118a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118a050 size=736 callers=1 calls=9
   calls: Play_Camp_Sleep_2, sub_1108730, sub_112e750, sub_112e920, sub_1134fa0, sub_1136f20, sub_1138460, sub_765ab0, sub_972c70
*/
void sub_118a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118a050ULL || rel >= 0x118a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118a330 size=320 callers=0 calls=0
*/
void sub_118a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118a330ULL || rel >= 0x118a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118a470 size=16 callers=0 calls=0
*/
void sub_118a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118a470ULL || rel >= 0x118a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118a480 size=16 callers=0 calls=0
*/
void sub_118a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118a480ULL || rel >= 0x118a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118a490 size=16 callers=0 calls=0
*/
void sub_118a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118a490ULL || rel >= 0x118a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118a4a0 size=416 callers=1 calls=0
*/
void sub_118a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118a4a0ULL || rel >= 0x118a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118a640 size=448 callers=4 calls=0
*/
void sub_118a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118a640ULL || rel >= 0x118a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118a800 size=560 callers=1 calls=0
*/
void sub_118a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118a800ULL || rel >= 0x118aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118aa30 size=592 callers=1 calls=0
*/
void sub_118aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118aa30ULL || rel >= 0x118ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118ac80 size=592 callers=0 calls=5
   calls: sub_112e750, sub_112e920, sub_1136450, sub_1136f20, sub_972c70
*/
void sub_118ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118ac80ULL || rel >= 0x118aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118aed0 size=16 callers=0 calls=0
*/
void sub_118aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118aed0ULL || rel >= 0x118aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118aee0 size=16 callers=0 calls=0
*/
void sub_118aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118aee0ULL || rel >= 0x118aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118aef0 size=16 callers=0 calls=0
*/
void sub_118aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118aef0ULL || rel >= 0x118af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118af00 size=16 callers=0 calls=0
*/
void sub_118af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118af00ULL || rel >= 0x118af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118af10 size=16 callers=0 calls=0
*/
void sub_118af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118af10ULL || rel >= 0x118af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118af20 size=32 callers=0 calls=0
*/
void sub_118af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118af20ULL || rel >= 0x118af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118af40 size=32 callers=0 calls=0
*/
void sub_118af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118af40ULL || rel >= 0x118af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118af60 size=400 callers=0 calls=0
*/
void sub_118af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118af60ULL || rel >= 0x118b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118b0f0 size=224 callers=1 calls=0
*/
void sub_118b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118b0f0ULL || rel >= 0x118b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118b1d0 size=4448 callers=2 calls=31
   calls: ee003_star_sp, sub_1127360, sub_11319e0, sub_11323a0, sub_1133c40, sub_1157620, sub_115a7e0, sub_1161880, sub_118c330, sub_118f040, sub_118f4a0, sub_118f590
   ... +19 more
*/
void sub_118b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118b1d0ULL || rel >= 0x118c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118c330 size=256 callers=1 calls=2
   calls: sub_1176d50, sub_5d99d0
*/
void sub_118c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118c330ULL || rel >= 0x118c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118c430 size=912 callers=1 calls=14
   calls: sub_1061810, sub_1133c30, sub_1157620, sub_115ba30, sub_115bb50, sub_115be90, sub_115bf40, sub_1161880, sub_118f4a0, sub_1190650, sub_1190770, sub_1190880
   ... +2 more
*/
void sub_118c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118c430ULL || rel >= 0x118c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118c7c0 size=1296 callers=2 calls=18
   calls: ptcl, sub_1061800, sub_11319e0, sub_1133c40, sub_1157620, sub_115ba30, sub_1161880, sub_118ccd0, sub_118f040, sub_118f4a0, sub_1190880, sub_1190960
   ... +6 more
*/
void sub_118c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118c7c0ULL || rel >= 0x118ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118ccd0 size=256 callers=2 calls=2
   calls: sub_1197960, sub_5d99d0
*/
void sub_118ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118ccd0ULL || rel >= 0x118cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118cdd0 size=944 callers=2 calls=15
   calls: ptcl, sub_11319e0, sub_1133c40, sub_1157620, sub_115ba30, sub_1161880, sub_118ccd0, sub_118d180, sub_118f040, sub_118f4a0, sub_1190880, sub_1190960
   ... +3 more
*/
void sub_118cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118cdd0ULL || rel >= 0x118d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118d180 size=256 callers=1 calls=2
   calls: sub_11974b0, sub_5d99d0
*/
void sub_118d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118d180ULL || rel >= 0x118d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118d280 size=1856 callers=2 calls=15
   calls: Ball_02d, sub_11319e0, sub_11319f0, sub_1133c30, sub_1157620, sub_1161880, sub_118d9c0, sub_118f040, sub_11914c0, sub_11915d0, sub_11916c0, sub_11917b0
   ... +3 more
   ref: bin/chara/data/ob/ob0038_00_pball/mdl/ob0038_00.gfbmdl
   ref: bin/appli/pokecamp/game/particle/ef_care/ef_care_ball_end.ptcl
   ref: bin/chara/data/ob/ob0036_00_pball/mdl/ob0036_00.gfbmdl
   ref: bin/chara/data/ob/ob0034_00_pball/mdl/ob0034_00.gfbmdl
   ref: bin/chara/data/ob/ob0035_00_pball/mdl/ob0035_00.gfbmdl
   ref: bin/chara/data/ob/ob0033_00_pball/mdl/ob0033_00.gfbmdl
   ref: bin/chara/data/ob/ob0032_00_pball/mdl/ob0032_00.gfbmdl
   ref: bin/chara/data/ob/ob0037_00_pball/mdl/ob0037_00.gfbmdl
*/
void ob0038_00_gfbmdl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118d280ULL || rel >= 0x118d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118d9c0 size=304 callers=1 calls=3
   calls: sub_1191390, sub_5e6180, sub_d0c0
*/
void sub_118d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118d9c0ULL || rel >= 0x118daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118daf0 size=384 callers=1 calls=7
   calls: sub_1133c30, sub_1157620, sub_115f020, sub_118dc70, sub_118dda0, sub_11b2d00, sub_956130
   ref: bin/chara/data/ob/ob0015_00_psetaria/anm/ob0015_00_field01_nx64.gfbanmcfg
   ref: bin/chara/data/ob/ob0015_00_psetaria/mdl/ob0015_00.gfbmdl
*/
void ob0015_00_gfbmdl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118daf0ULL || rel >= 0x118dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118dc70 size=304 callers=2 calls=3
   calls: sub_11918a0, sub_5e6180, sub_d0c0
*/
void sub_118dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118dc70ULL || rel >= 0x118dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118dda0 size=352 callers=1 calls=2
   calls: sub_112f880, sub_5d99d0
*/
void sub_118dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118dda0ULL || rel >= 0x118df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118df00 size=1408 callers=1 calls=18
   calls: sub_112f880, sub_1133c30, sub_1157620, sub_115f260, sub_1164020, sub_1164120, sub_1164140, sub_11644f0, sub_118e480, sub_11919a0, sub_119de70, sub_119e5f0
   ... +6 more
   ref: bin/archive/field/model/unit_obj_tent01.gfpak
   ref: bin/field/model/unit_obj/unit_obj_tent01/unit_obj_tent01.gfbanmcfg
   ref: object
   ref: bin/field/model/unit_obj/unit_obj_tent01/unit_obj_tent01.gfbmdl
*/
void object(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118df00ULL || rel >= 0x118e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118e480 size=304 callers=1 calls=3
   calls: sub_1191920, sub_5e6180, sub_d0c0
*/
void sub_118e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118e480ULL || rel >= 0x118e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118e5b0 size=272 callers=2 calls=7
   calls: sub_1157620, sub_1191d30, sub_1191f70, sub_11b58b0, sub_5d99d0, sub_618ec0, sub_989700
*/
void sub_118e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118e5b0ULL || rel >= 0x118e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118e6c0 size=336 callers=1 calls=9
   calls: sub_1157620, sub_1191d30, sub_1191f70, sub_1192050, sub_11b5b50, sub_5d99d0, sub_68d630, sub_68d950, sub_68da40
*/
void sub_118e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118e6c0ULL || rel >= 0x118e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118e810 size=864 callers=21 calls=8
   calls: sub_1131b10, sub_1306f20, sub_5dd790, sub_5e2930, sub_5e2bc0, sub_948390, sub_9b4980, sub_9bb100
   ref: bin/archive/battle/effect/ee003_star_sp.gfpak
   ref: bin/archive/app/pokecamp/kw/ptcl.gfpak
   ref: bin/archive/battle/effect/ee003_star.gfpak
*/
void ee003_star_sp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118e810ULL || rel >= 0x118eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118eb70 size=784 callers=6 calls=6
   calls: sub_1131b10, sub_1306f20, sub_5dd790, sub_5e2930, sub_5e2bc0, sub_948390
   ref: bin/archive/app/pokecamp/kw/ptcl.gfpak
*/
void ptcl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118eb70ULL || rel >= 0x118ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118ee80 size=112 callers=0 calls=0
*/
void sub_118ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118ee80ULL || rel >= 0x118eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118eef0 size=112 callers=0 calls=0
*/
void sub_118eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118eef0ULL || rel >= 0x118ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118ef60 size=112 callers=0 calls=0
*/
void sub_118ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118ef60ULL || rel >= 0x118efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118efd0 size=112 callers=0 calls=0
*/
void sub_118efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118efd0ULL || rel >= 0x118f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f040 size=224 callers=4 calls=1
   calls: sub_1131370
*/
void sub_118f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f040ULL || rel >= 0x118f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f120 size=144 callers=0 calls=3
   calls: sub_68d710, sub_68d910, sub_68d940
   ref: EffOverHead01
*/
void EffOverHead01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f120ULL || rel >= 0x118f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f1b0 size=16 callers=0 calls=0
*/
void sub_118f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f1b0ULL || rel >= 0x118f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f1c0 size=16 callers=0 calls=0
*/
void sub_118f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f1c0ULL || rel >= 0x118f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f1d0 size=16 callers=0 calls=0
*/
void sub_118f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f1d0ULL || rel >= 0x118f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f1e0 size=128 callers=0 calls=2
   calls: sub_68d710, sub_68d940
   ref: EffHeadCenter01
*/
void EffHeadCenter01_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f1e0ULL || rel >= 0x118f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f260 size=16 callers=0 calls=0
*/
void sub_118f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f260ULL || rel >= 0x118f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f270 size=16 callers=0 calls=0
*/
void sub_118f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f270ULL || rel >= 0x118f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f280 size=16 callers=0 calls=0
*/
void sub_118f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f280ULL || rel >= 0x118f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f290 size=128 callers=0 calls=2
   calls: sub_68d710, sub_68d940
   ref: EffOverHead01
*/
void EffOverHead01_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f290ULL || rel >= 0x118f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f310 size=16 callers=0 calls=0
*/
void sub_118f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f310ULL || rel >= 0x118f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f320 size=16 callers=0 calls=0
*/
void sub_118f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f320ULL || rel >= 0x118f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f330 size=16 callers=0 calls=0
*/
void sub_118f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f330ULL || rel >= 0x118f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f340 size=128 callers=0 calls=2
   calls: sub_68d710, sub_68d940
   ref: EffCenter01
*/
void EffCenter01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f340ULL || rel >= 0x118f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0118f3c0 size=16 callers=0 calls=0
*/
void sub_118f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x118f3c0ULL || rel >= 0x118f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

