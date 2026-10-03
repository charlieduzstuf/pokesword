/* main functions 00766220..00780ec0 (51 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00766220 size=640 callers=10 calls=7
   calls: sub_773210, sub_773370, sub_7734d0, sub_779db0, sub_779f10, sub_77a070, sub_780ca0
*/
void sub_766220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766220ULL || rel >= 0x7664a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007664a0 size=144 callers=46 calls=3
   calls: sub_779db0, sub_77a070, sub_780ca0
*/
void sub_7664a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7664a0ULL || rel >= 0x766530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00766530 size=512 callers=1 calls=4
   calls: sub_773210, sub_779db0, sub_779f10, sub_77a070
*/
void sub_766530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766530ULL || rel >= 0x766730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00766730 size=304 callers=6 calls=6
   calls: sub_773210, sub_773370, sub_7734d0, sub_779db0, sub_779f10, sub_77a070
*/
void sub_766730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766730ULL || rel >= 0x766860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00766860 size=224 callers=10 calls=2
   calls: sub_766730, sub_773210
*/
void sub_766860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766860ULL || rel >= 0x766940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00766940 size=80 callers=4 calls=3
   calls: sub_76bc60, sub_771ff0, sub_774690
*/
void sub_766940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766940ULL || rel >= 0x766990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00766990 size=80 callers=4 calls=3
   calls: sub_76bc60, sub_771ff0, sub_774690
*/
void sub_766990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766990ULL || rel >= 0x7669e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007669e0 size=160 callers=4 calls=5
   calls: sub_76bc60, sub_76bef0, sub_76bf00, sub_771ff0, sub_774690
*/
void sub_7669e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7669e0ULL || rel >= 0x766a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00766a80 size=800 callers=4 calls=0
*/
void sub_766a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766a80ULL || rel >= 0x766da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00766da0 size=432 callers=3 calls=8
   calls: sub_766a80, sub_76be10, sub_76beb0, sub_76bec0, sub_76bed0, sub_76bee0, sub_771ff0, sub_774690
*/
void sub_766da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766da0ULL || rel >= 0x766f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00766f50 size=304 callers=1 calls=7
   calls: sub_766a80, sub_76be10, sub_76beb0, sub_76bed0, sub_76bee0, sub_771ff0, sub_774690
*/
void sub_766f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766f50ULL || rel >= 0x767080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767080 size=16 callers=1 calls=0
*/
void sub_767080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767080ULL || rel >= 0x767090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767090 size=16 callers=2 calls=0
*/
void sub_767090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767090ULL || rel >= 0x7670a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007670a0 size=16 callers=61 calls=0
*/
void sub_7670a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7670a0ULL || rel >= 0x7670b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007670b0 size=16 callers=9 calls=0
*/
void sub_7670b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7670b0ULL || rel >= 0x7670c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007670c0 size=32 callers=0 calls=1
   calls: sub_7747d0
*/
void sub_7670c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7670c0ULL || rel >= 0x7670e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007670e0 size=32 callers=0 calls=1
   calls: sub_7747d0
*/
void sub_7670e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7670e0ULL || rel >= 0x767100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767100 size=48 callers=1 calls=1
   calls: sub_77b590
*/
void sub_767100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767100ULL || rel >= 0x767130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767130 size=48 callers=1 calls=1
   calls: sub_7747d0
*/
void sub_767130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767130ULL || rel >= 0x767160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767160 size=16 callers=20 calls=0
*/
void sub_767160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767160ULL || rel >= 0x767170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767170 size=64 callers=1 calls=2
   calls: sub_774b90, sub_774cd0
*/
void sub_767170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767170ULL || rel >= 0x7671b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007671b0 size=288 callers=1 calls=8
   calls: sub_76bc60, sub_76bc80, sub_771ff0, sub_7726d0, sub_774690, sub_774a50, sub_774b90, sub_774cd0
*/
void sub_7671b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7671b0ULL || rel >= 0x7672d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007672d0 size=240 callers=1 calls=8
   calls: sub_771ff0, sub_774690, sub_774b90, sub_774cd0, sub_77b6e0, sub_77b830, sub_77b980, sub_780620
*/
void sub_7672d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7672d0ULL || rel >= 0x7673c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007673c0 size=112 callers=3 calls=3
   calls: sub_772270, sub_776530, sub_777700
*/
void sub_7673c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7673c0ULL || rel >= 0x767430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767430 size=272 callers=2 calls=16
   calls: sub_76bc60, sub_76bc80, sub_771ff0, sub_772270, sub_774690, sub_776530, sub_777700, sub_77d270, sub_77d510, sub_77db60, sub_77dcb0, sub_77de00
   ... +4 more
*/
void sub_767430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767430ULL || rel >= 0x767540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767540 size=16 callers=2 calls=0
*/
void sub_767540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767540ULL || rel >= 0x767550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767550 size=16 callers=4 calls=0
*/
void sub_767550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767550ULL || rel >= 0x767560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767560 size=16 callers=1 calls=0
*/
void sub_767560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767560ULL || rel >= 0x767570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767570 size=144 callers=8 calls=7
   calls: sub_67bdb0, sub_67c270, sub_76ba80, sub_771ff0, sub_772950, sub_77adb0, sub_77bec0
*/
void sub_767570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767570ULL || rel >= 0x767600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767600 size=112 callers=1 calls=5
   calls: sub_67c270, sub_76a5c0, sub_76ba80, sub_771ff0, sub_775210
*/
void sub_767600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767600ULL || rel >= 0x767670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767670 size=16 callers=4 calls=0
*/
void sub_767670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767670ULL || rel >= 0x767680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767680 size=16 callers=4 calls=0
*/
void sub_767680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767680ULL || rel >= 0x767690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767690 size=48 callers=13 calls=1
   calls: sub_67bdb0
*/
void sub_767690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767690ULL || rel >= 0x7676c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007676c0 size=16 callers=1 calls=0
*/
void sub_7676c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7676c0ULL || rel >= 0x7676d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007676d0 size=16 callers=5 calls=0
*/
void sub_7676d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7676d0ULL || rel >= 0x7676e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007676e0 size=16 callers=9 calls=0
*/
void sub_7676e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7676e0ULL || rel >= 0x7676f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007676f0 size=16 callers=1 calls=0
*/
void sub_7676f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7676f0ULL || rel >= 0x767700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767700 size=16 callers=1 calls=0
*/
void sub_767700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767700ULL || rel >= 0x767710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767710 size=16 callers=1 calls=0
*/
void sub_767710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767710ULL || rel >= 0x767720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767720 size=16 callers=38 calls=0
*/
void sub_767720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767720ULL || rel >= 0x767730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767730 size=64 callers=5 calls=1
   calls: sub_779000
*/
void sub_767730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767730ULL || rel >= 0x767770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767770 size=80 callers=2 calls=2
   calls: sub_7724f0, sub_779000
*/
void sub_767770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767770ULL || rel >= 0x7677c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007677c0 size=80 callers=0 calls=2
   calls: sub_7724f0, sub_779000
*/
void sub_7677c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7677c0ULL || rel >= 0x767810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767810 size=32 callers=3 calls=1
   calls: sub_776670
*/
void sub_767810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767810ULL || rel >= 0x767830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767830 size=32 callers=1 calls=0
*/
void sub_767830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767830ULL || rel >= 0x767850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767850 size=32 callers=3 calls=1
   calls: sub_7767b0
*/
void sub_767850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767850ULL || rel >= 0x767870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767870 size=16 callers=33 calls=0
*/
void sub_767870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767870ULL || rel >= 0x767880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767880 size=32 callers=2 calls=0
*/
void sub_767880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767880ULL || rel >= 0x7678a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007678a0 size=64 callers=2 calls=1
   calls: sub_7779a0
*/
void sub_7678a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7678a0ULL || rel >= 0x7678e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007678e0 size=80 callers=1 calls=1
   calls: sub_7779a0
*/
void sub_7678e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7678e0ULL || rel >= 0x767930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767930 size=16 callers=8 calls=0
*/
void sub_767930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767930ULL || rel >= 0x767940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767940 size=16 callers=5 calls=0
*/
void sub_767940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767940ULL || rel >= 0x767950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767950 size=112 callers=218 calls=2
   calls: sub_771270, sub_774050
*/
void sub_767950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767950ULL || rel >= 0x7679c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007679c0 size=80 callers=2 calls=2
   calls: sub_771270, sub_774050
*/
void sub_7679c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7679c0ULL || rel >= 0x767a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767a10 size=384 callers=1 calls=14
   calls: sub_67b990, sub_67bdb0, sub_76bb10, sub_76bc60, sub_76bc80, sub_771270, sub_771ff0, sub_772950, sub_774050, sub_774690, sub_77ac60, sub_77adb0
   ... +2 more
*/
void sub_767a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767a10ULL || rel >= 0x767b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767b90 size=176 callers=1 calls=11
   calls: sub_76a5c0, sub_76ba80, sub_771ff0, sub_772950, sub_774050, sub_779480, sub_77ac60, sub_77adb0, sub_77bec0, sub_77d270, sub_77d3c0
*/
void sub_767b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767b90ULL || rel >= 0x767c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767c40 size=336 callers=2 calls=7
   calls: sub_76bc60, sub_76bc80, sub_771ff0, sub_772270, sub_774550, sub_774690, sub_780700
*/
void sub_767c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767c40ULL || rel >= 0x767d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767d90 size=16 callers=4 calls=0
*/
void sub_767d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767d90ULL || rel >= 0x767da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767da0 size=48 callers=0 calls=1
   calls: sub_76a5c0
*/
void sub_767da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767da0ULL || rel >= 0x767dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767dd0 size=112 callers=4 calls=3
   calls: sub_76a5c0, sub_771ff0, sub_782f60
*/
void sub_767dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767dd0ULL || rel >= 0x767e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767e40 size=112 callers=3 calls=3
   calls: sub_76a5c0, sub_771ff0, sub_783700
*/
void sub_767e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767e40ULL || rel >= 0x767eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767eb0 size=112 callers=2 calls=3
   calls: sub_76a5c0, sub_771ff0, sub_783940
*/
void sub_767eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767eb0ULL || rel >= 0x767f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767f20 size=112 callers=3 calls=3
   calls: sub_76a5c0, sub_771ff0, sub_7835b0
*/
void sub_767f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767f20ULL || rel >= 0x767f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00767f90 size=400 callers=3 calls=16
   calls: sub_768120, sub_768270, sub_76bf30, sub_76bfb0, sub_76bfd0, sub_76bfe0, sub_76bff0, sub_771ff0, sub_772130, sub_7726d0, sub_774690, sub_77f740
   ... +4 more
*/
void sub_767f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x767f90ULL || rel >= 0x768120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768120 size=336 callers=2 calls=19
   calls: sub_763a60, sub_76ba80, sub_771ff0, sub_772950, sub_774190, sub_774550, sub_774b90, sub_774cd0, sub_778ac0, sub_7791e0, sub_77adb0, sub_77b1a0
   ... +7 more
*/
void sub_768120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768120ULL || rel >= 0x768270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768270 size=224 callers=14 calls=11
   calls: sub_7683f0, sub_771ff0, sub_774550, sub_774690, sub_774b90, sub_774cd0, sub_7791e0, sub_77b1a0, sub_77b2f0, sub_780520, sub_780620
*/
void sub_768270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768270ULL || rel >= 0x768350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768350 size=160 callers=1 calls=4
   calls: sub_771ff0, sub_774550, sub_774690, sub_77b1a0
*/
void sub_768350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768350ULL || rel >= 0x7683f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007683f0 size=272 callers=1 calls=5
   calls: sub_766530, sub_768500, sub_768890, sub_771ff0, sub_772130
*/
void sub_7683f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7683f0ULL || rel >= 0x768500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768500 size=912 callers=1 calls=2
   calls: sub_768890, sub_773210
*/
void sub_768500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768500ULL || rel >= 0x768890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768890 size=384 callers=7 calls=6
   calls: sub_773210, sub_773370, sub_7734d0, sub_779db0, sub_779f10, sub_780ca0
*/
void sub_768890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768890ULL || rel >= 0x768a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768a10 size=96 callers=4 calls=3
   calls: sub_771ff0, sub_774690, sub_780940
*/
void sub_768a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768a10ULL || rel >= 0x768a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768a70 size=496 callers=1 calls=5
   calls: sub_773210, sub_779db0, sub_779f10, sub_77a070, sub_7807d0
*/
void sub_768a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768a70ULL || rel >= 0x768c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768c60 size=368 callers=1 calls=6
   calls: sub_773210, sub_774690, sub_779db0, sub_77a070, sub_7807d0, sub_780ca0
*/
void sub_768c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768c60ULL || rel >= 0x768dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768dd0 size=64 callers=8 calls=2
   calls: sub_772270, sub_774f50
*/
void sub_768dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768dd0ULL || rel >= 0x768e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768e10 size=64 callers=10 calls=2
   calls: sub_772270, sub_774f50
*/
void sub_768e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768e10ULL || rel >= 0x768e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768e50 size=144 callers=4 calls=4
   calls: sub_772270, sub_774f50, sub_780480, sub_7804c0
*/
void sub_768e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768e50ULL || rel >= 0x768ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768ee0 size=16 callers=5 calls=0
*/
void sub_768ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768ee0ULL || rel >= 0x768ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768ef0 size=16 callers=12 calls=0
*/
void sub_768ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768ef0ULL || rel >= 0x768f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768f00 size=160 callers=71 calls=6
   calls: sub_76bc60, sub_76bc80, sub_771ff0, sub_772130, sub_7726d0, sub_774690
*/
void sub_768f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768f00ULL || rel >= 0x768fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00768fa0 size=160 callers=71 calls=6
   calls: sub_76bc60, sub_76bc80, sub_771ff0, sub_772130, sub_7726d0, sub_774690
*/
void sub_768fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768fa0ULL || rel >= 0x769040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769040 size=16 callers=15 calls=0
*/
void sub_769040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769040ULL || rel >= 0x769050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769050 size=16 callers=43 calls=0
*/
void sub_769050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769050ULL || rel >= 0x769060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769060 size=16 callers=1 calls=0
*/
void sub_769060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769060ULL || rel >= 0x769070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769070 size=48 callers=5 calls=0
*/
void sub_769070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769070ULL || rel >= 0x7690a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007690a0 size=16 callers=6 calls=0
*/
void sub_7690a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7690a0ULL || rel >= 0x7690b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007690b0 size=16 callers=2 calls=0
*/
void sub_7690b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7690b0ULL || rel >= 0x7690c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007690c0 size=32 callers=8 calls=1
   calls: sub_776170
*/
void sub_7690c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7690c0ULL || rel >= 0x7690e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007690e0 size=32 callers=6 calls=1
   calls: sub_776170
*/
void sub_7690e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7690e0ULL || rel >= 0x769100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769100 size=80 callers=4 calls=1
   calls: sub_776170
*/
void sub_769100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769100ULL || rel >= 0x769150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769150 size=80 callers=1 calls=1
   calls: sub_7693e0
*/
void sub_769150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769150ULL || rel >= 0x7691a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007691a0 size=48 callers=2 calls=1
   calls: sub_776170
*/
void sub_7691a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7691a0ULL || rel >= 0x7691d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007691d0 size=112 callers=1 calls=1
   calls: sub_776170
*/
void sub_7691d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7691d0ULL || rel >= 0x769240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769240 size=16 callers=7 calls=0
*/
void sub_769240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769240ULL || rel >= 0x769250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769250 size=16 callers=1 calls=0
*/
void sub_769250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769250ULL || rel >= 0x769260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769260 size=16 callers=2 calls=0
*/
void sub_769260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769260ULL || rel >= 0x769270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769270 size=112 callers=0 calls=2
   calls: sub_762700, sub_77a1d0
*/
void sub_769270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769270ULL || rel >= 0x7692e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007692e0 size=80 callers=23 calls=2
   calls: sub_770eb0, sub_770ec0
*/
void sub_7692e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7692e0ULL || rel >= 0x769330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769330 size=80 callers=18 calls=2
   calls: sub_770eb0, sub_770f50
*/
void sub_769330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769330ULL || rel >= 0x769380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769380 size=16 callers=1 calls=0
*/
void sub_769380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769380ULL || rel >= 0x769390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769390 size=16 callers=12 calls=0
*/
void sub_769390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769390ULL || rel >= 0x7693a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007693a0 size=16 callers=1 calls=0
*/
void sub_7693a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7693a0ULL || rel >= 0x7693b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007693b0 size=16 callers=1 calls=0
*/
void sub_7693b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7693b0ULL || rel >= 0x7693c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007693c0 size=32 callers=5 calls=1
   calls: sub_76a5c0
*/
void sub_7693c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7693c0ULL || rel >= 0x7693e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007693e0 size=48 callers=20 calls=1
   calls: sub_76a5c0
*/
void sub_7693e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7693e0ULL || rel >= 0x769410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769410 size=944 callers=0 calls=0
*/
void sub_769410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769410ULL || rel >= 0x7697c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007697c0 size=1936 callers=1 calls=8
   calls: sub_761f70, sub_7693a0, sub_769f50, sub_76a0c0, sub_76ac70, sub_76f430, sub_77fc60, sub_780ae0
*/
void sub_7697c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7697c0ULL || rel >= 0x769f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00769f50 size=368 callers=1 calls=0
*/
void sub_769f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769f50ULL || rel >= 0x76a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076a0c0 size=320 callers=1 calls=1
   calls: sub_5e5560
*/
void sub_76a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a0c0ULL || rel >= 0x76a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076a200 size=960 callers=2 calls=3
   calls: sub_7693b0, sub_76b650, sub_780bd0
*/
void sub_76a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a200ULL || rel >= 0x76a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076a5c0 size=16 callers=36 calls=0
*/
void sub_76a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a5c0ULL || rel >= 0x76a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076a5d0 size=32 callers=0 calls=0
*/
void sub_76a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a5d0ULL || rel >= 0x76a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076a5f0 size=48 callers=0 calls=0
*/
void sub_76a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a5f0ULL || rel >= 0x76a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076a620 size=64 callers=0 calls=0
*/
void sub_76a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a620ULL || rel >= 0x76a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076a660 size=336 callers=0 calls=0
*/
void sub_76a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a660ULL || rel >= 0x76a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076a7b0 size=448 callers=0 calls=1
   calls: sub_1c0
*/
void sub_76a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a7b0ULL || rel >= 0x76a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076a970 size=96 callers=0 calls=0
*/
void sub_76a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a970ULL || rel >= 0x76a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076a9d0 size=96 callers=0 calls=0
*/
void sub_76a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a9d0ULL || rel >= 0x76aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076aa30 size=96 callers=0 calls=0
*/
void sub_76aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76aa30ULL || rel >= 0x76aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076aa90 size=96 callers=0 calls=0
*/
void sub_76aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76aa90ULL || rel >= 0x76aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076aaf0 size=96 callers=0 calls=0
*/
void sub_76aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76aaf0ULL || rel >= 0x76ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ab50 size=96 callers=0 calls=0
*/
void sub_76ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ab50ULL || rel >= 0x76abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076abb0 size=96 callers=0 calls=0
*/
void sub_76abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76abb0ULL || rel >= 0x76ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ac10 size=96 callers=0 calls=0
*/
void sub_76ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ac10ULL || rel >= 0x76ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ac70 size=2528 callers=1 calls=13
   calls: sub_67b990, sub_67c970, sub_76a5c0, sub_76c0c0, sub_76c420, sub_76d2b0, sub_76d610, sub_76d820, sub_76e0f0, sub_76e530, sub_76e840, sub_76eb50
   ... +1 more
*/
void sub_76ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ac70ULL || rel >= 0x76b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076b650 size=1072 callers=1 calls=1
   calls: sub_76d5e0
*/
void sub_76b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76b650ULL || rel >= 0x76ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ba80 size=144 callers=8 calls=4
   calls: sub_67bdb0, sub_67c120, sub_67d080, sub_76c560
*/
void sub_76ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ba80ULL || rel >= 0x76bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bb10 size=112 callers=2 calls=1
   calls: sub_76c560
*/
void sub_76bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bb10ULL || rel >= 0x76bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bb80 size=128 callers=9 calls=2
   calls: sub_76a5c0, sub_76c560
*/
void sub_76bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bb80ULL || rel >= 0x76bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bc00 size=96 callers=8 calls=4
   calls: sub_76c420, sub_76c470, sub_76c490, sub_76c4a0
*/
void sub_76bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bc00ULL || rel >= 0x76bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bc60 size=32 callers=54 calls=0
*/
void sub_76bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bc60ULL || rel >= 0x76bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bc80 size=16 callers=69 calls=0
*/
void sub_76bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bc80ULL || rel >= 0x76bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bc90 size=32 callers=0 calls=0
*/
void sub_76bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bc90ULL || rel >= 0x76bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bcb0 size=32 callers=0 calls=0
*/
void sub_76bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bcb0ULL || rel >= 0x76bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bcd0 size=32 callers=0 calls=0
*/
void sub_76bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bcd0ULL || rel >= 0x76bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bcf0 size=112 callers=1 calls=1
   calls: sub_76c5e0
*/
void sub_76bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bcf0ULL || rel >= 0x76bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bd60 size=144 callers=17 calls=4
   calls: sub_76c4a0, sub_76c5e0, sub_76e3f0, sub_76e570
*/
void sub_76bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bd60ULL || rel >= 0x76bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bdf0 size=32 callers=15 calls=0
*/
void sub_76bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bdf0ULL || rel >= 0x76be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076be10 size=160 callers=8 calls=2
   calls: sub_76d660, sub_76ee40
*/
void sub_76be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76be10ULL || rel >= 0x76beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076beb0 size=16 callers=12 calls=0
*/
void sub_76beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76beb0ULL || rel >= 0x76bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bec0 size=16 callers=10 calls=0
*/
void sub_76bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bec0ULL || rel >= 0x76bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bed0 size=16 callers=25 calls=0
*/
void sub_76bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bed0ULL || rel >= 0x76bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bee0 size=16 callers=4 calls=0
*/
void sub_76bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bee0ULL || rel >= 0x76bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bef0 size=16 callers=2 calls=0
*/
void sub_76bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bef0ULL || rel >= 0x76bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bf00 size=48 callers=1 calls=0
*/
void sub_76bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bf00ULL || rel >= 0x76bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bf30 size=112 callers=8 calls=2
   calls: sub_76d9c0, sub_76f2b0
*/
void sub_76bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bf30ULL || rel >= 0x76bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bfa0 size=16 callers=7 calls=0
*/
void sub_76bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bfa0ULL || rel >= 0x76bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bfb0 size=16 callers=7 calls=0
*/
void sub_76bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bfb0ULL || rel >= 0x76bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bfc0 size=16 callers=5 calls=0
*/
void sub_76bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bfc0ULL || rel >= 0x76bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bfd0 size=16 callers=5 calls=0
*/
void sub_76bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bfd0ULL || rel >= 0x76bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bfe0 size=16 callers=1 calls=0
*/
void sub_76bfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bfe0ULL || rel >= 0x76bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076bff0 size=16 callers=1 calls=0
*/
void sub_76bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bff0ULL || rel >= 0x76c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c000 size=16 callers=5 calls=0
*/
void sub_76c000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c000ULL || rel >= 0x76c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c010 size=16 callers=2 calls=0
*/
void sub_76c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c010ULL || rel >= 0x76c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c020 size=64 callers=1 calls=0
*/
void sub_76c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c020ULL || rel >= 0x76c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c060 size=48 callers=2 calls=0
*/
void sub_76c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c060ULL || rel >= 0x76c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c090 size=48 callers=0 calls=0
*/
void sub_76c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c090ULL || rel >= 0x76c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c0c0 size=816 callers=1 calls=6
   calls: s_s_s, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_76a5c0
*/
void sub_76c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c0c0ULL || rel >= 0x76c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c3f0 size=48 callers=0 calls=0
*/
void sub_76c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c3f0ULL || rel >= 0x76c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c420 size=80 callers=21 calls=0
*/
void sub_76c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c420ULL || rel >= 0x76c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c470 size=16 callers=18 calls=0
*/
void sub_76c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c470ULL || rel >= 0x76c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c480 size=16 callers=0 calls=0
*/
void sub_76c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c480ULL || rel >= 0x76c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c490 size=16 callers=1 calls=0
*/
void sub_76c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c490ULL || rel >= 0x76c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c4a0 size=192 callers=19 calls=0
*/
void sub_76c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c4a0ULL || rel >= 0x76c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c560 size=128 callers=5 calls=0
*/
void sub_76c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c560ULL || rel >= 0x76c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c5e0 size=960 callers=35 calls=0
*/
void sub_76c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c5e0ULL || rel >= 0x76c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c9a0 size=64 callers=0 calls=1
   calls: sub_76c5e0
*/
void sub_76c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c9a0ULL || rel >= 0x76c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076c9e0 size=64 callers=0 calls=1
   calls: sub_76c5e0
*/
void sub_76c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c9e0ULL || rel >= 0x76ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ca20 size=32 callers=0 calls=0
*/
void sub_76ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ca20ULL || rel >= 0x76ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ca40 size=384 callers=5 calls=1
   calls: sub_76c5e0
*/
void sub_76ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ca40ULL || rel >= 0x76cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076cbc0 size=48 callers=0 calls=0
*/
void sub_76cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76cbc0ULL || rel >= 0x76cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076cbf0 size=160 callers=1 calls=2
   calls: sub_76a5c0, sub_76d0d0
   ref: %s%s%s
   ref: personal_total.bin
*/
void s_s_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76cbf0ULL || rel >= 0x76cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076cc90 size=192 callers=1 calls=2
   calls: sub_76a5c0, sub_76d0d0
   ref: %s%s%s
   ref: waza%04d.wazabin
*/
void s_s_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76cc90ULL || rel >= 0x76cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076cd50 size=160 callers=1 calls=2
   calls: sub_76a5c0, sub_76d0d0
   ref: %s%s%s
   ref: wazaoboe_total.bin
*/
void s_s_s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76cd50ULL || rel >= 0x76cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076cdf0 size=192 callers=1 calls=2
   calls: sub_76a5c0, sub_76d0d0
   ref: %s%s%s
   ref: grow_%02d.bin
*/
void s_s_s_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76cdf0ULL || rel >= 0x76ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ceb0 size=192 callers=1 calls=2
   calls: sub_76a5c0, sub_76d0d0
   ref: %s%s%s
   ref: tamagowaza_%04d.bin
*/
void s_s_s_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ceb0ULL || rel >= 0x76cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076cf70 size=192 callers=1 calls=2
   calls: sub_76a5c0, sub_76d0d0
   ref: %s%s%s
   ref: evo_%03d.bin
*/
void s_s_s_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76cf70ULL || rel >= 0x76d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d030 size=160 callers=1 calls=2
   calls: sub_76a5c0, sub_76d0d0
   ref: %s%s%s
   ref: item.dat
*/
void s_s_s_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d030ULL || rel >= 0x76d0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d0d0 size=304 callers=28 calls=3
   calls: sub_5e6180, sub_76d200, sub_d0c0
*/
void sub_76d0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d0d0ULL || rel >= 0x76d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d200 size=128 callers=8 calls=1
   calls: sub_d0c0
*/
void sub_76d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d200ULL || rel >= 0x76d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d280 size=48 callers=0 calls=0
*/
void sub_76d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d280ULL || rel >= 0x76d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d2b0 size=816 callers=1 calls=6
   calls: s_s_s_3, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_76a5c0
*/
void sub_76d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d2b0ULL || rel >= 0x76d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d5e0 size=48 callers=1 calls=0
*/
void sub_76d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d5e0ULL || rel >= 0x76d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d610 size=48 callers=6 calls=0
*/
void sub_76d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d610ULL || rel >= 0x76d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d640 size=16 callers=3 calls=0
*/
void sub_76d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d640ULL || rel >= 0x76d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d650 size=16 callers=3 calls=0
*/
void sub_76d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d650ULL || rel >= 0x76d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d660 size=144 callers=3 calls=1
   calls: sub_76c560
*/
void sub_76d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d660ULL || rel >= 0x76d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d6f0 size=80 callers=2 calls=0
*/
void sub_76d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d6f0ULL || rel >= 0x76d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d740 size=16 callers=3 calls=0
*/
void sub_76d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d740ULL || rel >= 0x76d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d750 size=64 callers=0 calls=0
*/
void sub_76d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d750ULL || rel >= 0x76d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d790 size=32 callers=4 calls=0
*/
void sub_76d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d790ULL || rel >= 0x76d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d7b0 size=32 callers=2 calls=0
*/
void sub_76d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d7b0ULL || rel >= 0x76d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d7d0 size=16 callers=0 calls=0
*/
void sub_76d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d7d0ULL || rel >= 0x76d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d7e0 size=16 callers=0 calls=0
*/
void sub_76d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d7e0ULL || rel >= 0x76d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d7f0 size=48 callers=0 calls=0
*/
void sub_76d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d7f0ULL || rel >= 0x76d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d820 size=240 callers=2 calls=0
*/
void sub_76d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d820ULL || rel >= 0x76d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d910 size=64 callers=0 calls=0
*/
void sub_76d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d910ULL || rel >= 0x76d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d950 size=80 callers=0 calls=0
*/
void sub_76d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d950ULL || rel >= 0x76d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d9a0 size=16 callers=3 calls=0
*/
void sub_76d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d9a0ULL || rel >= 0x76d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d9b0 size=16 callers=3 calls=0
*/
void sub_76d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d9b0ULL || rel >= 0x76d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076d9c0 size=672 callers=1 calls=7
   calls: s_s_s_6, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_76a5c0, sub_76c560
*/
void sub_76d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d9c0ULL || rel >= 0x76dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076dc60 size=80 callers=2 calls=0
*/
void sub_76dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76dc60ULL || rel >= 0x76dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076dcb0 size=160 callers=0 calls=0
*/
void sub_76dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76dcb0ULL || rel >= 0x76dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076dd50 size=48 callers=0 calls=0
*/
void sub_76dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76dd50ULL || rel >= 0x76dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076dd80 size=176 callers=0 calls=0
*/
void sub_76dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76dd80ULL || rel >= 0x76de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076de30 size=176 callers=0 calls=0
*/
void sub_76de30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76de30ULL || rel >= 0x76dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076dee0 size=176 callers=0 calls=0
*/
void sub_76dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76dee0ULL || rel >= 0x76df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076df90 size=176 callers=0 calls=0
*/
void sub_76df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76df90ULL || rel >= 0x76e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e040 size=176 callers=0 calls=0
*/
void sub_76e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e040ULL || rel >= 0x76e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e0f0 size=400 callers=1 calls=1
   calls: sub_76e530
*/
void sub_76e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e0f0ULL || rel >= 0x76e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e280 size=192 callers=0 calls=0
*/
void sub_76e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e280ULL || rel >= 0x76e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e340 size=176 callers=0 calls=0
*/
void sub_76e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e340ULL || rel >= 0x76e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e3f0 size=144 callers=1 calls=2
   calls: sub_76e7d0, sub_76e810
*/
void sub_76e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e3f0ULL || rel >= 0x76e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e480 size=176 callers=0 calls=2
   calls: sub_76e7d0, sub_76e810
*/
void sub_76e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e480ULL || rel >= 0x76e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e530 size=32 callers=2 calls=0
*/
void sub_76e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e530ULL || rel >= 0x76e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e550 size=16 callers=0 calls=0
*/
void sub_76e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e550ULL || rel >= 0x76e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e560 size=16 callers=0 calls=0
*/
void sub_76e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e560ULL || rel >= 0x76e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e570 size=608 callers=1 calls=6
   calls: s_s_s_4, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_76a5c0
*/
void sub_76e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e570ULL || rel >= 0x76e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e7d0 size=64 callers=2 calls=0
*/
void sub_76e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e7d0ULL || rel >= 0x76e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e810 size=16 callers=3 calls=0
*/
void sub_76e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e810ULL || rel >= 0x76e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e820 size=32 callers=0 calls=0
*/
void sub_76e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e820ULL || rel >= 0x76e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e840 size=400 callers=1 calls=1
   calls: sub_76c420
*/
void sub_76e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e840ULL || rel >= 0x76e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076e9d0 size=192 callers=0 calls=0
*/
void sub_76e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e9d0ULL || rel >= 0x76ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ea90 size=192 callers=0 calls=0
*/
void sub_76ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ea90ULL || rel >= 0x76eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076eb50 size=384 callers=1 calls=1
   calls: sub_76d610
*/
void sub_76eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76eb50ULL || rel >= 0x76ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ecd0 size=192 callers=0 calls=0
*/
void sub_76ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ecd0ULL || rel >= 0x76ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ed90 size=176 callers=0 calls=0
*/
void sub_76ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ed90ULL || rel >= 0x76ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076ee40 size=176 callers=1 calls=3
   calls: sub_76d640, sub_76d650, sub_76d6f0
*/
void sub_76ee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ee40ULL || rel >= 0x76eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076eef0 size=208 callers=0 calls=3
   calls: sub_76d640, sub_76d650, sub_76d6f0
*/
void sub_76eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76eef0ULL || rel >= 0x76efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076efc0 size=384 callers=1 calls=1
   calls: sub_76d820
*/
void sub_76efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76efc0ULL || rel >= 0x76f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f140 size=192 callers=0 calls=0
*/
void sub_76f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f140ULL || rel >= 0x76f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f200 size=176 callers=0 calls=0
*/
void sub_76f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f200ULL || rel >= 0x76f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f2b0 size=176 callers=1 calls=3
   calls: sub_76d9a0, sub_76d9b0, sub_76dc60
*/
void sub_76f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f2b0ULL || rel >= 0x76f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f360 size=208 callers=0 calls=3
   calls: sub_76d9a0, sub_76d9b0, sub_76dc60
*/
void sub_76f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f360ULL || rel >= 0x76f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f430 size=16 callers=1 calls=0
*/
void sub_76f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f430ULL || rel >= 0x76f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f440 size=80 callers=40 calls=1
   calls: sub_761fb0
*/
void sub_76f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f440ULL || rel >= 0x76f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f490 size=192 callers=4 calls=3
   calls: sub_768ef0, sub_770860, sub_770cd0
*/
void sub_76f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f490ULL || rel >= 0x76f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f550 size=128 callers=27 calls=6
   calls: sub_7621d0, sub_7628f0, sub_763a60, sub_7692e0, sub_76f490, sub_770da0
*/
void sub_76f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f550ULL || rel >= 0x76f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f5d0 size=128 callers=15 calls=6
   calls: sub_7624c0, sub_7628f0, sub_763a60, sub_7692e0, sub_76f490, sub_770da0
*/
void sub_76f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f5d0ULL || rel >= 0x76f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f650 size=112 callers=6 calls=3
   calls: sub_761fb0, sub_76f490, sub_770fe0
*/
void sub_76f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f650ULL || rel >= 0x76f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f6c0 size=64 callers=45 calls=1
   calls: sub_770fe0
*/
void sub_76f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f6c0ULL || rel >= 0x76f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f700 size=144 callers=3 calls=7
   calls: sub_761fb0, sub_7628f0, sub_762b70, sub_763a60, sub_7692e0, sub_76f490, sub_770da0
*/
void sub_76f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f700ULL || rel >= 0x76f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f790 size=16 callers=0 calls=0
*/
void sub_76f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f790ULL || rel >= 0x76f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f7a0 size=16 callers=0 calls=0
*/
void sub_76f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f7a0ULL || rel >= 0x76f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f7b0 size=16 callers=0 calls=0
*/
void sub_76f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f7b0ULL || rel >= 0x76f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f7c0 size=16 callers=0 calls=0
*/
void sub_76f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f7c0ULL || rel >= 0x76f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f7d0 size=16 callers=56 calls=0
*/
void sub_76f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f7d0ULL || rel >= 0x76f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f7e0 size=16 callers=38 calls=0
*/
void sub_76f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f7e0ULL || rel >= 0x76f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f7f0 size=16 callers=21 calls=0
*/
void sub_76f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f7f0ULL || rel >= 0x76f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f800 size=80 callers=0 calls=5
   calls: sub_7628f0, sub_762d30, sub_763a60, sub_7692e0, sub_770da0
*/
void sub_76f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f800ULL || rel >= 0x76f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f850 size=192 callers=2 calls=0
*/
void sub_76f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f850ULL || rel >= 0x76f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f910 size=128 callers=1 calls=1
   calls: sub_76f990
*/
void sub_76f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f910ULL || rel >= 0x76f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076f990 size=320 callers=2 calls=2
   calls: sub_76fad0, sub_770290
*/
void sub_76f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f990ULL || rel >= 0x76fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0076fad0 size=1984 callers=1 calls=12
   calls: sub_7693c0, sub_7693e0, sub_76bc60, sub_76bc80, sub_770470, sub_770540, sub_770610, sub_770a30, sub_7803f0, sub_780410, sub_780440, sub_780520
*/
void sub_76fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76fad0ULL || rel >= 0x770290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770290 size=480 callers=1 calls=35
   calls: sub_76a5c0, sub_76bd60, sub_76bdf0, sub_770c10, sub_770c30, sub_770c50, sub_777c20, sub_777fd0, sub_778ac0, sub_778d60, sub_778eb0, sub_779000
   ... +23 more
*/
void sub_770290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770290ULL || rel >= 0x770470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770470 size=208 callers=2 calls=0
*/
void sub_770470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770470ULL || rel >= 0x770540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770540 size=208 callers=1 calls=3
   calls: sub_770470, sub_7805e0, sub_780600
*/
void sub_770540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770540ULL || rel >= 0x770610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770610 size=592 callers=2 calls=1
   calls: sub_7693e0
*/
void sub_770610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770610ULL || rel >= 0x770860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770860 size=176 callers=1 calls=0
*/
void sub_770860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770860ULL || rel >= 0x770910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770910 size=288 callers=1 calls=7
   calls: sub_762da0, sub_762e50, sub_7634d0, sub_765ad0, sub_768120, sub_769060, sub_76f650
*/
void sub_770910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770910ULL || rel >= 0x770a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770a30 size=32 callers=1 calls=0
*/
void sub_770a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770a30ULL || rel >= 0x770a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770a50 size=160 callers=366 calls=0
*/
void sub_770a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770a50ULL || rel >= 0x770af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770af0 size=144 callers=368 calls=0
*/
void sub_770af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770af0ULL || rel >= 0x770b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770b80 size=144 callers=364 calls=0
*/
void sub_770b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770b80ULL || rel >= 0x770c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770c10 size=32 callers=5 calls=0
*/
void sub_770c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770c10ULL || rel >= 0x770c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770c30 size=16 callers=1 calls=0
*/
void sub_770c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770c30ULL || rel >= 0x770c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770c40 size=16 callers=0 calls=0
*/
void sub_770c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770c40ULL || rel >= 0x770c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770c50 size=128 callers=2 calls=2
   calls: sub_770a50, sub_770af0
*/
void sub_770c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770c50ULL || rel >= 0x770cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770cd0 size=16 callers=4 calls=0
*/
void sub_770cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770cd0ULL || rel >= 0x770ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770ce0 size=16 callers=75 calls=0
*/
void sub_770ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770ce0ULL || rel >= 0x770cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770cf0 size=176 callers=0 calls=2
   calls: sub_770a50, sub_770af0
*/
void sub_770cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770cf0ULL || rel >= 0x770da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770da0 size=272 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_770da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770da0ULL || rel >= 0x770eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770eb0 size=16 callers=4 calls=0
*/
void sub_770eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770eb0ULL || rel >= 0x770ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770ec0 size=144 callers=2 calls=2
   calls: sub_770a50, sub_770b80
*/
void sub_770ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770ec0ULL || rel >= 0x770f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770f50 size=144 callers=1 calls=2
   calls: sub_770a50, sub_770af0
*/
void sub_770f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770f50ULL || rel >= 0x770fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770fe0 size=16 callers=2 calls=0
*/
void sub_770fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770fe0ULL || rel >= 0x770ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00770ff0 size=304 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_770ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770ff0ULL || rel >= 0x771120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771120 size=16 callers=2 calls=0
*/
void sub_771120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771120ULL || rel >= 0x771130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771130 size=16 callers=0 calls=0
*/
void sub_771130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771130ULL || rel >= 0x771140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771140 size=272 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_771140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771140ULL || rel >= 0x771250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771250 size=16 callers=0 calls=0
*/
void sub_771250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771250ULL || rel >= 0x771260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771260 size=16 callers=0 calls=0
*/
void sub_771260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771260ULL || rel >= 0x771270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771270 size=16 callers=3 calls=0
*/
void sub_771270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771270ULL || rel >= 0x771280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771280 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_771280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771280ULL || rel >= 0x7713d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007713d0 size=336 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7713d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7713d0ULL || rel >= 0x771520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771520 size=304 callers=6 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_771520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771520ULL || rel >= 0x771650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771650 size=304 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_771650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771650ULL || rel >= 0x771780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771780 size=304 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_771780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771780ULL || rel >= 0x7718b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007718b0 size=304 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7718b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7718b0ULL || rel >= 0x7719e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007719e0 size=304 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7719e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7719e0ULL || rel >= 0x771b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771b10 size=304 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_771b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771b10ULL || rel >= 0x771c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771c40 size=304 callers=15 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_771c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771c40ULL || rel >= 0x771d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771d70 size=304 callers=24 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_771d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771d70ULL || rel >= 0x771ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771ea0 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_771ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771ea0ULL || rel >= 0x771ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00771ff0 size=320 callers=88 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_771ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x771ff0ULL || rel >= 0x772130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00772130 size=320 callers=9 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_772130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x772130ULL || rel >= 0x772270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00772270 size=320 callers=8 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_772270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x772270ULL || rel >= 0x7723b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007723b0 size=320 callers=19 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7723b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7723b0ULL || rel >= 0x7724f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007724f0 size=480 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7724f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7724f0ULL || rel >= 0x7726d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007726d0 size=320 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7726d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7726d0ULL || rel >= 0x772810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00772810 size=320 callers=14 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_772810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x772810ULL || rel >= 0x772950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00772950 size=320 callers=8 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_772950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x772950ULL || rel >= 0x772a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00772a90 size=320 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_772a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x772a90ULL || rel >= 0x772bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00772bd0 size=320 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_772bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x772bd0ULL || rel >= 0x772d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00772d10 size=320 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_772d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x772d10ULL || rel >= 0x772e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00772e50 size=320 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_772e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x772e50ULL || rel >= 0x772f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00772f90 size=320 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_772f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x772f90ULL || rel >= 0x7730d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007730d0 size=320 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7730d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7730d0ULL || rel >= 0x773210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00773210 size=352 callers=71 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_773210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x773210ULL || rel >= 0x773370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00773370 size=352 callers=8 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_773370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x773370ULL || rel >= 0x7734d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007734d0 size=352 callers=15 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7734d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7734d0ULL || rel >= 0x773630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00773630 size=352 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_773630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x773630ULL || rel >= 0x773790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00773790 size=320 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_773790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x773790ULL || rel >= 0x7738d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007738d0 size=320 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7738d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7738d0ULL || rel >= 0x773a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00773a10 size=320 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_773a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x773a10ULL || rel >= 0x773b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00773b50 size=320 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_773b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x773b50ULL || rel >= 0x773c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00773c90 size=320 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_773c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x773c90ULL || rel >= 0x773dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00773dd0 size=320 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_773dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x773dd0ULL || rel >= 0x773f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00773f10 size=320 callers=8 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_773f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x773f10ULL || rel >= 0x774050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774050 size=320 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774050ULL || rel >= 0x774190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774190 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774190ULL || rel >= 0x7742d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007742d0 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7742d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7742d0ULL || rel >= 0x774410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774410 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774410ULL || rel >= 0x774550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774550 size=320 callers=5 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774550ULL || rel >= 0x774690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774690 size=320 callers=65 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774690ULL || rel >= 0x7747d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007747d0 size=320 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7747d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7747d0ULL || rel >= 0x774910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774910 size=320 callers=10 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774910ULL || rel >= 0x774a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774a50 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774a50ULL || rel >= 0x774b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774b90 size=320 callers=6 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774b90ULL || rel >= 0x774cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774cd0 size=320 callers=6 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774cd0ULL || rel >= 0x774e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774e10 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774e10ULL || rel >= 0x774f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00774f50 size=320 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_774f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x774f50ULL || rel >= 0x775090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00775090 size=384 callers=0 calls=5
   calls: sub_67be60, sub_770a50, sub_770af0, sub_770b80, sub_772950
*/
void sub_775090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x775090ULL || rel >= 0x775210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00775210 size=384 callers=1 calls=6
   calls: sub_67c120, sub_76ba80, sub_770a50, sub_770af0, sub_770b80, sub_772950
*/
void sub_775210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x775210ULL || rel >= 0x775390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00775390 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_775390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x775390ULL || rel >= 0x7754d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007754d0 size=336 callers=0 calls=4
   calls: sub_67be60, sub_770a50, sub_770af0, sub_770b80
*/
void sub_7754d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7754d0ULL || rel >= 0x775620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00775620 size=336 callers=0 calls=4
   calls: sub_67c120, sub_770a50, sub_770af0, sub_770b80
*/
void sub_775620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x775620ULL || rel >= 0x775770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00775770 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_775770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x775770ULL || rel >= 0x7758b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007758b0 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7758b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7758b0ULL || rel >= 0x7759f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007759f0 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7759f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7759f0ULL || rel >= 0x775b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00775b30 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_775b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x775b30ULL || rel >= 0x775c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00775c70 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_775c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x775c70ULL || rel >= 0x775db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00775db0 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_775db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x775db0ULL || rel >= 0x775ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00775ef0 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_775ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x775ef0ULL || rel >= 0x776030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00776030 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_776030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x776030ULL || rel >= 0x776170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00776170 size=320 callers=6 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_776170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x776170ULL || rel >= 0x7762b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007762b0 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7762b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7762b0ULL || rel >= 0x7763f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007763f0 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7763f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7763f0ULL || rel >= 0x776530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00776530 size=320 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_776530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x776530ULL || rel >= 0x776670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00776670 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_776670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x776670ULL || rel >= 0x7767b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007767b0 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7767b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7767b0ULL || rel >= 0x7768f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007768f0 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7768f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7768f0ULL || rel >= 0x776a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00776a40 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_776a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x776a40ULL || rel >= 0x776b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00776b90 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_776b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x776b90ULL || rel >= 0x776ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00776ce0 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_776ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x776ce0ULL || rel >= 0x776e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00776e30 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_776e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x776e30ULL || rel >= 0x776f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00776f70 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_776f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x776f70ULL || rel >= 0x7770b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007770b0 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7770b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7770b0ULL || rel >= 0x7771f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007771f0 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7771f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7771f0ULL || rel >= 0x777330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00777330 size=336 callers=0 calls=4
   calls: sub_67be60, sub_770a50, sub_770af0, sub_770b80
*/
void sub_777330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777330ULL || rel >= 0x777480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00777480 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_777480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777480ULL || rel >= 0x7775c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007775c0 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7775c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7775c0ULL || rel >= 0x777700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00777700 size=320 callers=2 calls=4
   calls: sub_67c270, sub_770a50, sub_770af0, sub_770b80
*/
void sub_777700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777700ULL || rel >= 0x777840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00777840 size=352 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_777840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777840ULL || rel >= 0x7779a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007779a0 size=320 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7779a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7779a0ULL || rel >= 0x777ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00777ae0 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_777ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777ae0ULL || rel >= 0x777c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00777c20 size=272 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_777c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777c20ULL || rel >= 0x777d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00777d30 size=32 callers=2 calls=0
*/
void sub_777d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777d30ULL || rel >= 0x777d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00777d50 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_777d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777d50ULL || rel >= 0x777ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00777ea0 size=304 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_777ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777ea0ULL || rel >= 0x777fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00777fd0 size=304 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_777fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777fd0ULL || rel >= 0x778100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00778100 size=304 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_778100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778100ULL || rel >= 0x778230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00778230 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_778230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778230ULL || rel >= 0x778380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00778380 size=304 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_778380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778380ULL || rel >= 0x7784b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007784b0 size=304 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7784b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7784b0ULL || rel >= 0x7785e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007785e0 size=304 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7785e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7785e0ULL || rel >= 0x778710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00778710 size=304 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_778710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778710ULL || rel >= 0x778840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00778840 size=304 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_778840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778840ULL || rel >= 0x778970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00778970 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_778970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778970ULL || rel >= 0x778ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00778ac0 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_778ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778ac0ULL || rel >= 0x778c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00778c10 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_778c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778c10ULL || rel >= 0x778d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00778d60 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_778d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778d60ULL || rel >= 0x778eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00778eb0 size=336 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_778eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778eb0ULL || rel >= 0x779000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00779000 size=480 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_779000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x779000ULL || rel >= 0x7791e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007791e0 size=336 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7791e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7791e0ULL || rel >= 0x779330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00779330 size=336 callers=5 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_779330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x779330ULL || rel >= 0x779480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00779480 size=336 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_779480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x779480ULL || rel >= 0x7795d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007795d0 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7795d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7795d0ULL || rel >= 0x779720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00779720 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_779720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x779720ULL || rel >= 0x779870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00779870 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_779870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x779870ULL || rel >= 0x7799c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007799c0 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_7799c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7799c0ULL || rel >= 0x779b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00779b10 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_779b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x779b10ULL || rel >= 0x779c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00779c60 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_779c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x779c60ULL || rel >= 0x779db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00779db0 size=352 callers=29 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_779db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x779db0ULL || rel >= 0x779f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00779f10 size=352 callers=21 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_779f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x779f10ULL || rel >= 0x77a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077a070 size=352 callers=28 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77a070ULL || rel >= 0x77a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077a1d0 size=352 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77a1d0ULL || rel >= 0x77a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077a330 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77a330ULL || rel >= 0x77a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077a480 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77a480ULL || rel >= 0x77a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077a5d0 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77a5d0ULL || rel >= 0x77a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077a720 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77a720ULL || rel >= 0x77a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077a870 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77a870ULL || rel >= 0x77a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077a9c0 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77a9c0ULL || rel >= 0x77ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077ab10 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77ab10ULL || rel >= 0x77ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077ac60 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77ac60ULL || rel >= 0x77adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077adb0 size=336 callers=7 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77adb0ULL || rel >= 0x77af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077af00 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77af00ULL || rel >= 0x77b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077b050 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77b050ULL || rel >= 0x77b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077b1a0 size=336 callers=5 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77b1a0ULL || rel >= 0x77b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077b2f0 size=336 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77b2f0ULL || rel >= 0x77b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077b440 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77b440ULL || rel >= 0x77b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077b590 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77b590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77b590ULL || rel >= 0x77b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077b6e0 size=336 callers=4 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77b6e0ULL || rel >= 0x77b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077b830 size=336 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77b830ULL || rel >= 0x77b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077b980 size=336 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77b980ULL || rel >= 0x77bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077bad0 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77bad0ULL || rel >= 0x77bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077bc20 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77bc20ULL || rel >= 0x77bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077bd70 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77bd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77bd70ULL || rel >= 0x77bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077bec0 size=336 callers=6 calls=4
   calls: sub_67c120, sub_770a50, sub_770af0, sub_770b80
*/
void sub_77bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77bec0ULL || rel >= 0x77c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077c010 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77c010ULL || rel >= 0x77c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077c160 size=336 callers=0 calls=4
   calls: sub_67c120, sub_770a50, sub_770af0, sub_770b80
*/
void sub_77c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77c160ULL || rel >= 0x77c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077c2b0 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77c2b0ULL || rel >= 0x77c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077c400 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77c400ULL || rel >= 0x77c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077c550 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77c550ULL || rel >= 0x77c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077c6a0 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77c6a0ULL || rel >= 0x77c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077c7f0 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77c7f0ULL || rel >= 0x77c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077c940 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77c940ULL || rel >= 0x77ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077ca90 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77ca90ULL || rel >= 0x77cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077cbe0 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77cbe0ULL || rel >= 0x77cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077cd30 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77cd30ULL || rel >= 0x77ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077ce80 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77ce80ULL || rel >= 0x77cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077cfd0 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77cfd0ULL || rel >= 0x77d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077d120 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77d120ULL || rel >= 0x77d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077d270 size=336 callers=3 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77d270ULL || rel >= 0x77d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077d3c0 size=336 callers=2 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77d3c0ULL || rel >= 0x77d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077d510 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77d510ULL || rel >= 0x77d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077d660 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77d660ULL || rel >= 0x77d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077d7a0 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77d7a0ULL || rel >= 0x77d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077d8e0 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77d8e0ULL || rel >= 0x77da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077da20 size=320 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77da20ULL || rel >= 0x77db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077db60 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77db60ULL || rel >= 0x77dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077dcb0 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77dcb0ULL || rel >= 0x77de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077de00 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77de00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77de00ULL || rel >= 0x77df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077df50 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77df50ULL || rel >= 0x77e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077e0a0 size=336 callers=1 calls=4
   calls: sub_67c120, sub_770a50, sub_770af0, sub_770b80
*/
void sub_77e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77e0a0ULL || rel >= 0x77e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077e1f0 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77e1f0ULL || rel >= 0x77e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077e340 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77e340ULL || rel >= 0x77e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077e490 size=448 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77e490ULL || rel >= 0x77e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077e650 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77e650ULL || rel >= 0x77e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077e7a0 size=336 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77e7a0ULL || rel >= 0x77e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077e8f0 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77e8f0ULL || rel >= 0x77ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077ea40 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77ea40ULL || rel >= 0x77eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077eb90 size=608 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77eb90ULL || rel >= 0x77edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077edf0 size=608 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77edf0ULL || rel >= 0x77f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077f050 size=688 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77f050ULL || rel >= 0x77f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077f300 size=432 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77f300ULL || rel >= 0x77f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077f4b0 size=320 callers=0 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77f4b0ULL || rel >= 0x77f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077f5f0 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77f5f0ULL || rel >= 0x77f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077f740 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77f740ULL || rel >= 0x77f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077f890 size=320 callers=8 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77f890ULL || rel >= 0x77f9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077f9d0 size=336 callers=1 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77f9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77f9d0ULL || rel >= 0x77fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077fb20 size=320 callers=15 calls=3
   calls: sub_770a50, sub_770af0, sub_770b80
*/
void sub_77fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77fb20ULL || rel >= 0x77fc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077fc60 size=176 callers=1 calls=1
   calls: sub_76a5c0
*/
void sub_77fc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77fc60ULL || rel >= 0x77fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077fd10 size=96 callers=18 calls=2
   calls: sub_76bd60, sub_76bdf0
*/
void sub_77fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77fd10ULL || rel >= 0x77fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077fd70 size=80 callers=0 calls=0
*/
void sub_77fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77fd70ULL || rel >= 0x77fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077fdc0 size=128 callers=0 calls=0
*/
void sub_77fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77fdc0ULL || rel >= 0x77fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077fe40 size=128 callers=0 calls=0
*/
void sub_77fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77fe40ULL || rel >= 0x77fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077fec0 size=128 callers=0 calls=0
*/
void sub_77fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77fec0ULL || rel >= 0x77ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077ff40 size=128 callers=0 calls=0
*/
void sub_77ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77ff40ULL || rel >= 0x77ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0077ffc0 size=128 callers=0 calls=0
*/
void sub_77ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77ffc0ULL || rel >= 0x780040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780040 size=128 callers=0 calls=0
*/
void sub_780040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780040ULL || rel >= 0x7800c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007800c0 size=192 callers=0 calls=0
*/
void sub_7800c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7800c0ULL || rel >= 0x780180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780180 size=128 callers=0 calls=0
*/
void sub_780180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780180ULL || rel >= 0x780200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780200 size=192 callers=0 calls=0
*/
void sub_780200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780200ULL || rel >= 0x7802c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007802c0 size=128 callers=0 calls=0
*/
void sub_7802c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7802c0ULL || rel >= 0x780340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780340 size=128 callers=0 calls=0
*/
void sub_780340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780340ULL || rel >= 0x7803c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007803c0 size=48 callers=0 calls=0
*/
void sub_7803c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7803c0ULL || rel >= 0x7803f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007803f0 size=32 callers=4 calls=0
*/
void sub_7803f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7803f0ULL || rel >= 0x780410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780410 size=48 callers=1 calls=0
*/
void sub_780410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780410ULL || rel >= 0x780440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780440 size=64 callers=1 calls=0
*/
void sub_780440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780440ULL || rel >= 0x780480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780480 size=64 callers=1 calls=0
*/
void sub_780480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780480ULL || rel >= 0x7804c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007804c0 size=96 callers=2 calls=0
*/
void sub_7804c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7804c0ULL || rel >= 0x780520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780520 size=96 callers=3 calls=2
   calls: sub_76bc60, sub_76bc80
*/
void sub_780520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780520ULL || rel >= 0x780580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780580 size=48 callers=0 calls=0
*/
void sub_780580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780580ULL || rel >= 0x7805b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007805b0 size=48 callers=0 calls=0
*/
void sub_7805b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7805b0ULL || rel >= 0x7805e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007805e0 size=32 callers=1 calls=0
*/
void sub_7805e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7805e0ULL || rel >= 0x780600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780600 size=32 callers=1 calls=0
*/
void sub_780600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780600ULL || rel >= 0x780620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780620 size=80 callers=5 calls=2
   calls: sub_76bc60, sub_76bc80
*/
void sub_780620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780620ULL || rel >= 0x780670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780670 size=112 callers=0 calls=0
*/
void sub_780670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780670ULL || rel >= 0x7806e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007806e0 size=32 callers=0 calls=0
*/
void sub_7806e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7806e0ULL || rel >= 0x780700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780700 size=176 callers=1 calls=0
*/
void sub_780700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780700ULL || rel >= 0x7807b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007807b0 size=32 callers=0 calls=0
*/
void sub_7807b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7807b0ULL || rel >= 0x7807d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007807d0 size=48 callers=7 calls=0
*/
void sub_7807d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7807d0ULL || rel >= 0x780800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780800 size=208 callers=0 calls=0
*/
void sub_780800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780800ULL || rel >= 0x7808d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007808d0 size=64 callers=1 calls=0
*/
void sub_7808d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7808d0ULL || rel >= 0x780910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780910 size=48 callers=1 calls=0
*/
void sub_780910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780910ULL || rel >= 0x780940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780940 size=320 callers=1 calls=0
*/
void sub_780940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780940ULL || rel >= 0x780a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780a80 size=96 callers=0 calls=0
*/
void sub_780a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780a80ULL || rel >= 0x780ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780ae0 size=240 callers=1 calls=2
   calls: sub_7814e0, sub_7816b0
*/
void sub_780ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780ae0ULL || rel >= 0x780bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780bd0 size=96 callers=1 calls=0
*/
void sub_780bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780bd0ULL || rel >= 0x780c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780c30 size=48 callers=4 calls=1
   calls: sub_7816f0
*/
void sub_780c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780c30ULL || rel >= 0x780c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780c60 size=64 callers=39 calls=1
   calls: sub_7816f0
*/
void sub_780c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780c60ULL || rel >= 0x780ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780ca0 size=112 callers=29 calls=2
   calls: sub_7816f0, sub_7819a0
*/
void sub_780ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780ca0ULL || rel >= 0x780d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780d10 size=48 callers=13 calls=2
   calls: sub_7816f0, sub_781880
*/
void sub_780d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780d10ULL || rel >= 0x780d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780d40 size=48 callers=37 calls=1
   calls: sub_7816f0
*/
void sub_780d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780d40ULL || rel >= 0x780d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780d70 size=48 callers=13 calls=1
   calls: sub_7816f0
*/
void sub_780d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780d70ULL || rel >= 0x780da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780da0 size=48 callers=21 calls=1
   calls: sub_7816f0
*/
void sub_780da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780da0ULL || rel >= 0x780dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780dd0 size=48 callers=1 calls=1
   calls: sub_7816f0
*/
void sub_780dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780dd0ULL || rel >= 0x780e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780e00 size=48 callers=6 calls=2
   calls: sub_7816f0, sub_7818e0
*/
void sub_780e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780e00ULL || rel >= 0x780e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780e30 size=48 callers=6 calls=1
   calls: sub_7816f0
*/
void sub_780e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780e30ULL || rel >= 0x780e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780e60 size=48 callers=23 calls=1
   calls: sub_7816f0
*/
void sub_780e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780e60ULL || rel >= 0x780e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780e90 size=48 callers=2 calls=1
   calls: sub_7816f0
*/
void sub_780e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780e90ULL || rel >= 0x780ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780ec0 size=64 callers=33 calls=2
   calls: sub_7816f0, sub_781880
*/
void sub_780ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780ec0ULL || rel >= 0x780f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

