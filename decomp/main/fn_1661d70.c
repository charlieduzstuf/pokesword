/* main functions 01661d70..01675890 (191 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01661d70 size=32 callers=2 calls=0
*/
void sub_1661d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661d70ULL || rel >= 0x1661d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661d90 size=16 callers=1 calls=0
*/
void sub_1661d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661d90ULL || rel >= 0x1661da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661da0 size=16 callers=1 calls=0
*/
void sub_1661da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661da0ULL || rel >= 0x1661db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661db0 size=16 callers=1 calls=0
*/
void sub_1661db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661db0ULL || rel >= 0x1661dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661dc0 size=16 callers=2 calls=0
*/
void sub_1661dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661dc0ULL || rel >= 0x1661dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661dd0 size=144 callers=12 calls=1
   calls: sub_165e060
*/
void sub_1661dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661dd0ULL || rel >= 0x1661e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661e60 size=32 callers=6 calls=0
*/
void sub_1661e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661e60ULL || rel >= 0x1661e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661e80 size=32 callers=11 calls=0
*/
void sub_1661e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661e80ULL || rel >= 0x1661ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661ea0 size=32 callers=3 calls=0
*/
void sub_1661ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661ea0ULL || rel >= 0x1661ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661ec0 size=16 callers=3 calls=0
*/
void sub_1661ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661ec0ULL || rel >= 0x1661ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661ed0 size=16 callers=1 calls=0
*/
void sub_1661ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661ed0ULL || rel >= 0x1661ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661ee0 size=16 callers=0 calls=0
*/
void sub_1661ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661ee0ULL || rel >= 0x1661ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661ef0 size=368 callers=1 calls=6
   calls: sub_1652bd0, sub_1652c70, sub_165e060, sub_16619b0, sub_1661a70, sub_1716330
*/
void sub_1661ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661ef0ULL || rel >= 0x1662060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662060 size=96 callers=1 calls=3
   calls: sub_1652d30, sub_1716390, sub_17163e0
*/
void sub_1662060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662060ULL || rel >= 0x16620c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016620c0 size=16 callers=48 calls=0
*/
void sub_16620c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16620c0ULL || rel >= 0x16620d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016620d0 size=112 callers=1 calls=2
   calls: sub_165e060, sub_1671070
*/
void sub_16620d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16620d0ULL || rel >= 0x1662140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662140 size=16 callers=2 calls=0
*/
void sub_1662140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662140ULL || rel >= 0x1662150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662150 size=80 callers=1 calls=2
   calls: sub_1670da0, sub_1671e20
*/
void sub_1662150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662150ULL || rel >= 0x16621a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016621a0 size=48 callers=1 calls=1
   calls: sub_1670ea0
*/
void sub_16621a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16621a0ULL || rel >= 0x16621d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016621d0 size=16 callers=22 calls=0
*/
void sub_16621d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16621d0ULL || rel >= 0x16621e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016621e0 size=288 callers=1 calls=5
   calls: IN_ANY_ADDR_d, sub_1652cf0, sub_1652f60, sub_165e060, sub_1671e20
*/
void sub_16621e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16621e0ULL || rel >= 0x1662300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662300 size=16 callers=1 calls=0
*/
void sub_1662300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662300ULL || rel >= 0x1662310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662310 size=16 callers=1 calls=0
*/
void sub_1662310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662310ULL || rel >= 0x1662320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662320 size=16 callers=1 calls=0
*/
void sub_1662320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662320ULL || rel >= 0x1662330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662330 size=16 callers=2 calls=0
*/
void sub_1662330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662330ULL || rel >= 0x1662340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662340 size=16 callers=2 calls=0
*/
void sub_1662340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662340ULL || rel >= 0x1662350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662350 size=16 callers=4 calls=0
*/
void sub_1662350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662350ULL || rel >= 0x1662360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662360 size=16 callers=4 calls=0
*/
void sub_1662360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662360ULL || rel >= 0x1662370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662370 size=32 callers=2 calls=1
   calls: sub_16728e0
*/
void sub_1662370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662370ULL || rel >= 0x1662390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662390 size=16 callers=3 calls=0
*/
void sub_1662390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662390ULL || rel >= 0x16623a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016623a0 size=128 callers=1 calls=3
   calls: sub_1661a90, sub_1661ba0, sub_1679c10
*/
void sub_16623a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16623a0ULL || rel >= 0x1662420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662420 size=80 callers=1 calls=1
   calls: sub_1679d30
*/
void sub_1662420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662420ULL || rel >= 0x1662470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662470 size=96 callers=0 calls=2
   calls: sub_1661af0, sub_1679d30
*/
void sub_1662470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662470ULL || rel >= 0x16624d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016624d0 size=80 callers=0 calls=1
   calls: sub_1661ba0
*/
void sub_16624d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16624d0ULL || rel >= 0x1662520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662520 size=112 callers=1 calls=2
   calls: sub_165e060, sub_1661b30
*/
void sub_1662520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662520ULL || rel >= 0x1662590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662590 size=192 callers=1 calls=2
   calls: sub_165e060, sub_167ad20
*/
void sub_1662590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662590ULL || rel >= 0x1662650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662650 size=16 callers=0 calls=0
*/
void sub_1662650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662650ULL || rel >= 0x1662660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662660 size=32 callers=0 calls=0
*/
void sub_1662660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662660ULL || rel >= 0x1662680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662680 size=16 callers=0 calls=0
*/
void sub_1662680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662680ULL || rel >= 0x1662690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662690 size=32 callers=0 calls=0
*/
void sub_1662690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662690ULL || rel >= 0x16626b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016626b0 size=16 callers=0 calls=0
*/
void sub_16626b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16626b0ULL || rel >= 0x16626c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016626c0 size=16 callers=0 calls=0
*/
void sub_16626c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16626c0ULL || rel >= 0x16626d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016626d0 size=48 callers=2 calls=1
   calls: sub_1724e40
*/
void sub_16626d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16626d0ULL || rel >= 0x1662700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662700 size=16 callers=2 calls=0
*/
void sub_1662700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662700ULL || rel >= 0x1662710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662710 size=48 callers=0 calls=1
   calls: sub_1724e60
*/
void sub_1662710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662710ULL || rel >= 0x1662740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662740 size=16 callers=0 calls=0
*/
void sub_1662740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662740ULL || rel >= 0x1662750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662750 size=16 callers=0 calls=0
*/
void sub_1662750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662750ULL || rel >= 0x1662760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662760 size=48 callers=1 calls=1
   calls: sub_17315f0
*/
void sub_1662760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662760ULL || rel >= 0x1662790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662790 size=16 callers=0 calls=0
*/
void sub_1662790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662790ULL || rel >= 0x16627a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016627a0 size=48 callers=0 calls=1
   calls: sub_1731620
*/
void sub_16627a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16627a0ULL || rel >= 0x16627d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016627d0 size=16 callers=0 calls=0
*/
void sub_16627d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16627d0ULL || rel >= 0x16627e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016627e0 size=16 callers=0 calls=0
*/
void sub_16627e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16627e0ULL || rel >= 0x16627f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016627f0 size=16 callers=0 calls=0
*/
void sub_16627f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16627f0ULL || rel >= 0x1662800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662800 size=16 callers=0 calls=0
*/
void sub_1662800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662800ULL || rel >= 0x1662810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662810 size=16 callers=0 calls=0
*/
void sub_1662810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662810ULL || rel >= 0x1662820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662820 size=16 callers=0 calls=0
*/
void sub_1662820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662820ULL || rel >= 0x1662830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662830 size=16 callers=0 calls=0
*/
void sub_1662830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662830ULL || rel >= 0x1662840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662840 size=16 callers=0 calls=0
*/
void sub_1662840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662840ULL || rel >= 0x1662850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662850 size=16 callers=0 calls=0
*/
void sub_1662850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662850ULL || rel >= 0x1662860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662860 size=16 callers=0 calls=0
*/
void sub_1662860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662860ULL || rel >= 0x1662870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662870 size=16 callers=0 calls=0
*/
void sub_1662870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662870ULL || rel >= 0x1662880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662880 size=16 callers=0 calls=0
*/
void sub_1662880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662880ULL || rel >= 0x1662890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662890 size=16 callers=0 calls=0
*/
void sub_1662890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662890ULL || rel >= 0x16628a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016628a0 size=16 callers=0 calls=0
*/
void sub_16628a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16628a0ULL || rel >= 0x16628b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016628b0 size=16 callers=0 calls=0
*/
void sub_16628b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16628b0ULL || rel >= 0x16628c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016628c0 size=16 callers=0 calls=0
*/
void sub_16628c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16628c0ULL || rel >= 0x16628d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016628d0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_17162d0, sub_17315f0
*/
void sub_16628d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16628d0ULL || rel >= 0x1662920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662920 size=64 callers=0 calls=0
*/
void sub_1662920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662920ULL || rel >= 0x1662960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662960 size=224 callers=0 calls=5
   calls: sub_165e060, sub_1670b60, sub_173d6d0, sub_173d700, sub_173d790
*/
void sub_1662960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662960ULL || rel >= 0x1662a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662a40 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_1663b30, sub_17162d0
*/
void sub_1662a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662a40ULL || rel >= 0x1662a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662a90 size=80 callers=0 calls=0
*/
void sub_1662a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662a90ULL || rel >= 0x1662ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662ae0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_166de90, sub_17162d0
*/
void sub_1662ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662ae0ULL || rel >= 0x1662b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662b30 size=80 callers=0 calls=0
*/
void sub_1662b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662b30ULL || rel >= 0x1662b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662b80 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16a9a20, sub_17162d0
*/
void sub_1662b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662b80ULL || rel >= 0x1662bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662bc0 size=64 callers=0 calls=0
*/
void sub_1662bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662bc0ULL || rel >= 0x1662c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662c00 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16a9070, sub_17162d0
*/
void sub_1662c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662c00ULL || rel >= 0x1662c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662c40 size=64 callers=0 calls=0
*/
void sub_1662c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662c40ULL || rel >= 0x1662c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662c80 size=16 callers=0 calls=0
*/
void sub_1662c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662c80ULL || rel >= 0x1662c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662c90 size=16 callers=0 calls=0
*/
void sub_1662c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662c90ULL || rel >= 0x1662ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662ca0 size=16 callers=0 calls=0
*/
void sub_1662ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662ca0ULL || rel >= 0x1662cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662cb0 size=16 callers=0 calls=0
*/
void sub_1662cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662cb0ULL || rel >= 0x1662cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662cc0 size=16 callers=0 calls=0
*/
void sub_1662cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662cc0ULL || rel >= 0x1662cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662cd0 size=16 callers=0 calls=0
*/
void sub_1662cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662cd0ULL || rel >= 0x1662ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662ce0 size=112 callers=0 calls=3
   calls: sub_1652bd0, sub_169bfc0, sub_17162d0
*/
void sub_1662ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662ce0ULL || rel >= 0x1662d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662d50 size=64 callers=0 calls=0
*/
void sub_1662d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662d50ULL || rel >= 0x1662d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662d90 size=144 callers=0 calls=3
   calls: sub_1652bd0, sub_169df40, sub_17162d0
*/
void sub_1662d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662d90ULL || rel >= 0x1662e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662e20 size=64 callers=0 calls=0
*/
void sub_1662e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662e20ULL || rel >= 0x1662e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662e60 size=16 callers=0 calls=0
*/
void sub_1662e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662e60ULL || rel >= 0x1662e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662e70 size=16 callers=0 calls=0
*/
void sub_1662e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662e70ULL || rel >= 0x1662e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662e80 size=16 callers=0 calls=0
*/
void sub_1662e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662e80ULL || rel >= 0x1662e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662e90 size=16 callers=0 calls=0
*/
void sub_1662e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662e90ULL || rel >= 0x1662ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662ea0 size=16 callers=0 calls=0
*/
void sub_1662ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662ea0ULL || rel >= 0x1662eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662eb0 size=16 callers=0 calls=0
*/
void sub_1662eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662eb0ULL || rel >= 0x1662ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662ec0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16678d0, sub_17162d0
*/
void sub_1662ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662ec0ULL || rel >= 0x1662f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662f00 size=64 callers=0 calls=0
*/
void sub_1662f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662f00ULL || rel >= 0x1662f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662f40 size=16 callers=0 calls=0
*/
void sub_1662f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662f40ULL || rel >= 0x1662f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662f50 size=16 callers=0 calls=0
*/
void sub_1662f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662f50ULL || rel >= 0x1662f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662f60 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_166ec00, sub_17162d0
*/
void sub_1662f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662f60ULL || rel >= 0x1662fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662fa0 size=64 callers=0 calls=0
*/
void sub_1662fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662fa0ULL || rel >= 0x1662fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01662fe0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_166d3c0, sub_17162d0
*/
void sub_1662fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1662fe0ULL || rel >= 0x1663020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663020 size=64 callers=0 calls=0
*/
void sub_1663020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663020ULL || rel >= 0x1663060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663060 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_166a680, sub_17162d0
*/
void sub_1663060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663060ULL || rel >= 0x16630a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016630a0 size=64 callers=0 calls=0
*/
void sub_16630a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16630a0ULL || rel >= 0x16630e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016630e0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_166b650, sub_17162d0
*/
void sub_16630e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16630e0ULL || rel >= 0x1663120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663120 size=64 callers=0 calls=0
*/
void sub_1663120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663120ULL || rel >= 0x1663160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663160 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_166b0c0, sub_17162d0
*/
void sub_1663160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663160ULL || rel >= 0x16631a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016631a0 size=64 callers=0 calls=0
*/
void sub_16631a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16631a0ULL || rel >= 0x16631e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016631e0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_1667c70, sub_17162d0
*/
void sub_16631e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16631e0ULL || rel >= 0x1663220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663220 size=64 callers=0 calls=0
*/
void sub_1663220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663220ULL || rel >= 0x1663260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663260 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_166a5c0, sub_17162d0
*/
void sub_1663260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663260ULL || rel >= 0x16632a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016632a0 size=64 callers=0 calls=0
*/
void sub_16632a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16632a0ULL || rel >= 0x16632e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016632e0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_166ae70, sub_17162d0
*/
void sub_16632e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16632e0ULL || rel >= 0x1663320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663320 size=64 callers=0 calls=0
*/
void sub_1663320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663320ULL || rel >= 0x1663360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663360 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_166d8a0, sub_17162d0
*/
void sub_1663360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663360ULL || rel >= 0x16633a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016633a0 size=64 callers=0 calls=0
*/
void sub_16633a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16633a0ULL || rel >= 0x16633e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016633e0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_1668f60, sub_17162d0
*/
void sub_16633e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16633e0ULL || rel >= 0x1663420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663420 size=64 callers=0 calls=0
*/
void sub_1663420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663420ULL || rel >= 0x1663460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663460 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_1663600, sub_17162d0
*/
void sub_1663460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663460ULL || rel >= 0x16634b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016634b0 size=64 callers=0 calls=0
*/
void sub_16634b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16634b0ULL || rel >= 0x16634f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016634f0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_1664370, sub_17162d0
*/
void sub_16634f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16634f0ULL || rel >= 0x1663530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663530 size=64 callers=0 calls=0
*/
void sub_1663530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663530ULL || rel >= 0x1663570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663570 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_166cb00, sub_17162d0
*/
void sub_1663570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663570ULL || rel >= 0x16635b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016635b0 size=64 callers=0 calls=0
*/
void sub_16635b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16635b0ULL || rel >= 0x16635f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016635f0 size=16 callers=0 calls=0
*/
void sub_16635f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16635f0ULL || rel >= 0x1663600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663600 size=304 callers=1 calls=3
   calls: sub_1652bd0, sub_16777f0, sub_17162d0
*/
void sub_1663600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663600ULL || rel >= 0x1663730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663730 size=160 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_1663730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663730ULL || rel >= 0x16637d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016637d0 size=144 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16637d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16637d0ULL || rel >= 0x1663860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663860 size=16 callers=0 calls=0
*/
void sub_1663860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663860ULL || rel >= 0x1663870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663870 size=16 callers=0 calls=0
*/
void sub_1663870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663870ULL || rel >= 0x1663880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663880 size=16 callers=0 calls=0
*/
void sub_1663880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663880ULL || rel >= 0x1663890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663890 size=16 callers=0 calls=0
*/
void sub_1663890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663890ULL || rel >= 0x16638a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016638a0 size=16 callers=0 calls=0
*/
void sub_16638a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16638a0ULL || rel >= 0x16638b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016638b0 size=16 callers=0 calls=0
*/
void sub_16638b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16638b0ULL || rel >= 0x16638c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016638c0 size=128 callers=0 calls=0
*/
void sub_16638c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16638c0ULL || rel >= 0x1663940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663940 size=48 callers=0 calls=0
*/
void sub_1663940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663940ULL || rel >= 0x1663970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663970 size=48 callers=0 calls=1
   calls: sub_1677a80
*/
void sub_1663970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663970ULL || rel >= 0x16639a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016639a0 size=16 callers=0 calls=0
*/
void sub_16639a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16639a0ULL || rel >= 0x16639b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016639b0 size=48 callers=0 calls=1
   calls: sub_1677a80
*/
void sub_16639b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16639b0ULL || rel >= 0x16639e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016639e0 size=272 callers=1 calls=3
   calls: sub_1652cf0, sub_1653890, sub_1653b50
*/
void sub_16639e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16639e0ULL || rel >= 0x1663af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663af0 size=64 callers=1 calls=1
   calls: sub_16538d0
*/
void sub_1663af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663af0ULL || rel >= 0x1663b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663b30 size=112 callers=1 calls=2
   calls: sub_1652c70, sub_165ff10
*/
void sub_1663b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663b30ULL || rel >= 0x1663ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663ba0 size=96 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_1663ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663ba0ULL || rel >= 0x1663c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663c00 size=96 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_1663c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663c00ULL || rel >= 0x1663c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663c60 size=112 callers=0 calls=2
   calls: sub_1652d30, sub_165ff30
*/
void sub_1663c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663c60ULL || rel >= 0x1663cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663cd0 size=112 callers=0 calls=2
   calls: sub_1652d30, sub_165ff30
*/
void sub_1663cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663cd0ULL || rel >= 0x1663d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663d40 size=16 callers=1 calls=0
*/
void sub_1663d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663d40ULL || rel >= 0x1663d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663d50 size=16 callers=1 calls=0
*/
void sub_1663d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663d50ULL || rel >= 0x1663d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663d60 size=96 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1663d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663d60ULL || rel >= 0x1663dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663dc0 size=464 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_1663f90
*/
void sub_1663dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663dc0ULL || rel >= 0x1663f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01663f90 size=752 callers=3 calls=11
   calls: IN_ANY_ADDR_d, sub_1652c70, sub_1652d30, sub_1653890, sub_1653b50, sub_165b480, sub_165e060, sub_165e140, sub_165fb30, sub_165fd50, sub_165fd90
*/
void sub_1663f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1663f90ULL || rel >= 0x1664280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01664280 size=16 callers=0 calls=0
*/
void sub_1664280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1664280ULL || rel >= 0x1664290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01664290 size=208 callers=0 calls=4
   calls: sub_1652de0, sub_1652f90, sub_165c9b0, sub_165e060
*/
void sub_1664290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1664290ULL || rel >= 0x1664360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01664360 size=16 callers=0 calls=0
*/
void sub_1664360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1664360ULL || rel >= 0x1664370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01664370 size=304 callers=1 calls=6
   calls: sub_1655080, sub_16777f0, sub_1677bb0, sub_1679c10, sub_1722840, sub_1722860
*/
void sub_1664370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1664370ULL || rel >= 0x16644a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016644a0 size=112 callers=0 calls=3
   calls: sub_1655170, sub_1677a80, sub_1679d30
*/
void sub_16644a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16644a0ULL || rel >= 0x1664510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01664510 size=128 callers=0 calls=3
   calls: sub_1655170, sub_1677a80, sub_1679d30
*/
void sub_1664510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1664510ULL || rel >= 0x1664590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01664590 size=192 callers=0 calls=3
   calls: sub_1655290, sub_1677bb0, sub_1722860
*/
void sub_1664590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1664590ULL || rel >= 0x1664650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01664650 size=320 callers=0 calls=8
   calls: sub_1655190, sub_165e060, sub_16620c0, sub_1662330, sub_16782e0, sub_16786f0, sub_1749820, sub_17499e0
*/
void sub_1664650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1664650ULL || rel >= 0x1664790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01664790 size=2208 callers=0 calls=24
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_165e140, sub_16620c0, sub_16621d0, sub_1662340, sub_1662370, sub_1662390, sub_16710f0, sub_1677bb0, sub_1677d40
   ... +12 more
*/
void sub_1664790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1664790ULL || rel >= 0x1665030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665030 size=80 callers=1 calls=1
   calls: sub_1677bb0
*/
void sub_1665030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665030ULL || rel >= 0x1665080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665080 size=208 callers=0 calls=4
   calls: sub_1655190, sub_165e060, sub_16620c0, sub_1662330
*/
void sub_1665080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665080ULL || rel >= 0x1665150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665150 size=240 callers=0 calls=6
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16620c0, sub_1662340, sub_172be20
*/
void sub_1665150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665150ULL || rel >= 0x1665240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665240 size=304 callers=0 calls=6
   calls: sub_1655190, sub_165e060, sub_16782e0, sub_16786f0, sub_1749820, sub_17499e0
*/
void sub_1665240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665240ULL || rel >= 0x1665370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665370 size=800 callers=0 calls=15
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16620c0, sub_1662370, sub_1662390, sub_1677bb0, sub_1677d40, sub_1678250, sub_16782d0, sub_16782e0, sub_16786f0
   ... +3 more
*/
void sub_1665370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665370ULL || rel >= 0x1665690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665690 size=208 callers=0 calls=6
   calls: sub_1655190, sub_165e060, sub_16620c0, sub_16621d0, sub_1673610, sub_1678310
*/
void sub_1665690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665690ULL || rel >= 0x1665760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665760 size=240 callers=0 calls=7
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16620c0, sub_16621d0, sub_1673660, sub_172be20
*/
void sub_1665760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665760ULL || rel >= 0x1665850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665850 size=208 callers=0 calls=6
   calls: sub_1655190, sub_165e060, sub_16620c0, sub_16621d0, sub_1673610, sub_1678310
*/
void sub_1665850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665850ULL || rel >= 0x1665920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665920 size=240 callers=0 calls=7
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16620c0, sub_16621d0, sub_1673660, sub_172be20
*/
void sub_1665920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665920ULL || rel >= 0x1665a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665a10 size=272 callers=0 calls=8
   calls: sub_1655190, sub_165e060, sub_16620c0, sub_16621d0, sub_1672e10, sub_16786f0, sub_1749820, sub_17499e0
*/
void sub_1665a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665a10ULL || rel >= 0x1665b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665b20 size=416 callers=0 calls=13
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_165e140, sub_16620c0, sub_16621d0, sub_16735f0, sub_1678560, sub_172be20, sub_1749820, sub_17499e0, sub_1749a80
   ... +1 more
*/
void sub_1665b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665b20ULL || rel >= 0x1665cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665cc0 size=224 callers=0 calls=5
   calls: sub_1655190, sub_165e060, sub_16620c0, sub_16621d0, sub_1673680
*/
void sub_1665cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665cc0ULL || rel >= 0x1665da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01665da0 size=880 callers=0 calls=21
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_165e140, sub_16620c0, sub_16621d0, sub_1662350, sub_1673e40, sub_1673e60, sub_1677bb0, sub_1677d40, sub_1678250
   ... +9 more
*/
void sub_1665da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665da0ULL || rel >= 0x1666110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01666110 size=176 callers=0 calls=2
   calls: sub_1655190, sub_165e060
*/
void sub_1666110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666110ULL || rel >= 0x16661c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016661c0 size=272 callers=0 calls=9
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_1677bb0, sub_16786f0, sub_1722860, sub_172be20, sub_1749820, sub_17499e0
*/
void sub_16661c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16661c0ULL || rel >= 0x16662d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016662d0 size=192 callers=0 calls=3
   calls: sub_1655190, sub_165e060, sub_1677bb0
*/
void sub_16662d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16662d0ULL || rel >= 0x1666390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01666390 size=272 callers=0 calls=9
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_1677bb0, sub_16786f0, sub_1722860, sub_172be20, sub_1749820, sub_17499e0
*/
void sub_1666390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666390ULL || rel >= 0x16664a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016664a0 size=192 callers=1 calls=5
   calls: sub_1655190, sub_165e060, sub_16620c0, sub_16621d0, sub_1673610
*/
void sub_16664a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16664a0ULL || rel >= 0x1666560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01666560 size=240 callers=1 calls=7
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16620c0, sub_16621d0, sub_1673660, sub_172be20
*/
void sub_1666560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666560ULL || rel >= 0x1666650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01666650 size=224 callers=0 calls=5
   calls: sub_1655190, sub_165e060, sub_16620c0, sub_16621d0, sub_1673680
*/
void sub_1666650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666650ULL || rel >= 0x1666730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01666730 size=416 callers=0 calls=9
   calls: sub_16551b0, sub_1655220, sub_165e060, sub_16620c0, sub_16621d0, sub_1673e40, sub_1673e60, sub_1677d40, sub_172be20
*/
void sub_1666730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666730ULL || rel >= 0x16668d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016668d0 size=208 callers=3 calls=5
   calls: sub_1655190, sub_165e060, sub_16620c0, sub_16621d0, sub_1672e10
*/
void sub_16668d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16668d0ULL || rel >= 0x16669a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016669a0 size=144 callers=5 calls=5
   calls: sub_16551b0, sub_165e060, sub_16620c0, sub_16621d0, sub_16735f0
*/
void sub_16669a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16669a0ULL || rel >= 0x1666a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01666a30 size=112 callers=4 calls=2
   calls: sub_1655290, sub_165e060
*/
void sub_1666a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666a30ULL || rel >= 0x1666aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01666aa0 size=880 callers=2 calls=28
   calls: sub_1661d90, sub_1661da0, sub_1661db0, sub_1661dc0, sub_1661e60, sub_1661e80, sub_1661ec0, sub_1661ed0, sub_16620c0, sub_1662350, sub_1662390, sub_1677bb0
   ... +16 more
*/
void sub_1666aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666aa0ULL || rel >= 0x1666e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01666e10 size=128 callers=1 calls=5
   calls: sub_16620c0, sub_16621d0, sub_16710f0, sub_1677bb0, sub_1677d40
*/
void sub_1666e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666e10ULL || rel >= 0x1666e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01666e90 size=496 callers=1 calls=10
   calls: sub_16782f0, sub_1678300, sub_1678310, sub_1678570, sub_16785d0, sub_16785e0, sub_167b940, sub_167b950, sub_167b960, sub_167b970
*/
void sub_1666e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666e90ULL || rel >= 0x1667080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667080 size=128 callers=2 calls=1
   calls: sub_167acf0
*/
void sub_1667080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667080ULL || rel >= 0x1667100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667100 size=80 callers=9 calls=0
*/
void sub_1667100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667100ULL || rel >= 0x1667150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667150 size=368 callers=0 calls=11
   calls: sub_16672c0, sub_16783a0, sub_16784c0, sub_167aed0, sub_167af50, sub_167b070, sub_167b090, sub_169d670, sub_16a56c0, sub_1733e70, sub_174de50
*/
void sub_1667150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667150ULL || rel >= 0x16672c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016672c0 size=352 callers=16 calls=1
   calls: sub_1667640
*/
void sub_16672c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16672c0ULL || rel >= 0x1667420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667420 size=16 callers=13 calls=0
*/
void sub_1667420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667420ULL || rel >= 0x1667430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667430 size=16 callers=14 calls=0
*/
void sub_1667430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667430ULL || rel >= 0x1667440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667440 size=16 callers=4 calls=0
*/
void sub_1667440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667440ULL || rel >= 0x1667450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667450 size=16 callers=3 calls=0
*/
void sub_1667450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667450ULL || rel >= 0x1667460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667460 size=48 callers=1 calls=0
*/
void sub_1667460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667460ULL || rel >= 0x1667490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667490 size=16 callers=3 calls=0
*/
void sub_1667490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667490ULL || rel >= 0x16674a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016674a0 size=16 callers=2 calls=0
*/
void sub_16674a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16674a0ULL || rel >= 0x16674b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016674b0 size=192 callers=0 calls=2
   calls: sub_165e060, sub_1678700
*/
void sub_16674b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16674b0ULL || rel >= 0x1667570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667570 size=16 callers=0 calls=0
*/
void sub_1667570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667570ULL || rel >= 0x1667580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667580 size=64 callers=2 calls=1
   calls: sub_1677bb0
*/
void sub_1667580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667580ULL || rel >= 0x16675c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016675c0 size=16 callers=2 calls=0
*/
void sub_16675c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16675c0ULL || rel >= 0x16675d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016675d0 size=16 callers=0 calls=0
*/
void sub_16675d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16675d0ULL || rel >= 0x16675e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016675e0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16675e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16675e0ULL || rel >= 0x1667640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667640 size=112 callers=12 calls=0
*/
void sub_1667640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667640ULL || rel >= 0x16676b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016676b0 size=16 callers=0 calls=0
*/
void sub_16676b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16676b0ULL || rel >= 0x16676c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016676c0 size=48 callers=0 calls=0
*/
void sub_16676c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16676c0ULL || rel >= 0x16676f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016676f0 size=480 callers=0 calls=2
   calls: sub_165c200, sub_165e060
*/
void sub_16676f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16676f0ULL || rel >= 0x16678d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016678d0 size=80 callers=1 calls=2
   calls: sub_169af30, sub_1749820
*/
void sub_16678d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16678d0ULL || rel >= 0x1667920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667920 size=64 callers=0 calls=1
   calls: sub_17499e0
*/
void sub_1667920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667920ULL || rel >= 0x1667960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667960 size=64 callers=0 calls=2
   calls: sub_169af80, sub_17499e0
*/
void sub_1667960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667960ULL || rel >= 0x16679a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016679a0 size=544 callers=0 calls=10
   calls: ConnectStationJob_SendConnectionRequest_2, sub_1652d30, sub_165e060, sub_165e140, sub_165fd50, sub_1749a80, sub_1749cf0, sub_174a450, sub_174a5e0, sub_174de60
   ref: LanConnectStationJob::TryCurrentAddress
*/
void LanConnectStationJob_TryCurrentAddress(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16679a0ULL || rel >= 0x1667bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667bc0 size=160 callers=0 calls=3
   calls: sub_1652d30, sub_165fd50, sub_1749cf0
   ref: ConnectStationJob::SendConnectionRequest
*/
void ConnectStationJob_SendConnectionRequest(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667bc0ULL || rel >= 0x1667c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667c60 size=16 callers=0 calls=0
*/
void sub_1667c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667c60ULL || rel >= 0x1667c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667c70 size=96 callers=1 calls=1
   calls: sub_1723b00
*/
void sub_1667c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667c70ULL || rel >= 0x1667cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667cd0 size=16 callers=0 calls=0
*/
void sub_1667cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667cd0ULL || rel >= 0x1667ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667ce0 size=48 callers=0 calls=1
   calls: sub_1723b80
*/
void sub_1667ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667ce0ULL || rel >= 0x1667d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667d10 size=416 callers=0 calls=7
   calls: sub_165e060, sub_165e140, sub_16620c0, sub_1662350, sub_1666e10, sub_1678590, sub_16785b0
   ref: LanMatchJoinSessionJob::JoinMatchmakeSession
*/
void LanMatchJoinSessionJob_JoinMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667d10ULL || rel >= 0x1667eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01667eb0 size=432 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_165e140, sub_172be20
   ref: LanMatchJoinSessionJob::WaitJoinMatchmake
   ref: nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure
*/
void LanMatchJoinSessionJob_WaitJoinMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1667eb0ULL || rel >= 0x1668060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668060 size=304 callers=0 calls=5
   calls: sub_1655110, sub_1655220, sub_165e060, sub_1724c60, sub_172e100
   ref: LanMatchJoinSessionJob::GetStationLocation
*/
void LanMatchJoinSessionJob_GetStationLocation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668060ULL || rel >= 0x1668190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668190 size=384 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_172be20
   ref: nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure
   ref: LanMatchJoinSessionJob::LeaveMatchmakeSession
   ref: LanMatchJoinSessionJob::WaitGetStationLocation
*/
void LanMatchJoinSessionJob_LeaveMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668190ULL || rel >= 0x1668310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668310 size=256 callers=0 calls=3
   calls: sub_165e140, sub_172be20, sub_172e100
   ref: LanMatchJoinSessionJob::CompleteFailure
   ref: nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure
   ref: LanMatchJoinSessionJob::WaitLeaveMatchmakeSession
*/
void LanMatchJoinSessionJob_CompleteFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668310ULL || rel >= 0x1668410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668410 size=288 callers=0 calls=2
   calls: sub_165e060, sub_165e140
   ref: JoinSessionJob::MeshStartup
   ref: LanMatchJoinSessionJob::LeaveMatchmakeSession
*/
void JoinSessionJob_MeshStartup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668410ULL || rel >= 0x1668530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668530 size=400 callers=0 calls=2
   calls: sub_165e140, sub_172be20
   ref: LanMatchJoinSessionJob::WaitRequestSessionInfo
   ref: lan::LanMatchJoinSessionJob::CompleteFailure
   ref: LanMatchJoinSessionJob::LeaveMesh
*/
void LanMatchJoinSessionJob_LeaveMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668530ULL || rel >= 0x16686c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016686c0 size=224 callers=0 calls=2
   calls: sub_165e140, sub_16a65e0
   ref: LanMatchJoinSessionJob::CompleteProcess
   ref: LanMatchJoinSessionJob::LeaveMesh
*/
void LanMatchJoinSessionJob_LeaveMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16686c0ULL || rel >= 0x16687a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016687a0 size=560 callers=0 calls=5
   calls: sub_165c6b0, sub_165e140, sub_16a7ec0, sub_172be20, sub_1735840
   ref: LanMatchJoinSessionJob::WaitForRetryJoinMatchmakeSession
   ref: nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure
   ref: LanMatchJoinSessionJob::MeshCleanup
*/
void LanMatchJoinSessionJob_MeshCleanup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16687a0ULL || rel >= 0x16689d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016689d0 size=432 callers=0 calls=5
   calls: sub_165e140, sub_172be20, sub_1749820, sub_1749960, sub_17499e0
   ref: LanMatchJoinSessionJob::JoinMatchmakeSession
   ref: nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure
   ref: LanMatchJoinSessionJob::MeshCleanup
*/
void LanMatchJoinSessionJob_MeshCleanup_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16689d0ULL || rel >= 0x1668b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668b80 size=400 callers=0 calls=5
   calls: sub_165c6b0, sub_165e140, sub_16a7ec0, sub_172be20, sub_1735840
   ref: LanMatchJoinSessionJob::WaitForRetryJoinMatchmakeSession
   ref: nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure
   ref: LanMatchJoinSessionJob::MeshCleanup
*/
void LanMatchJoinSessionJob_MeshCleanup_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668b80ULL || rel >= 0x1668d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668d10 size=32 callers=0 calls=0
   ref: LanMatchJoinSessionJob::LeaveMatchmakeSession
*/
void LanMatchJoinSessionJob_LeaveMatchmakeSession_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668d10ULL || rel >= 0x1668d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668d30 size=192 callers=0 calls=3
   calls: sub_165e140, sub_172be20, sub_172e100
   ref: LanMatchJoinSessionJob::CompleteFailure
*/
void LanMatchJoinSessionJob_CompleteFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668d30ULL || rel >= 0x1668df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668df0 size=224 callers=0 calls=5
   calls: sub_165c6b0, sub_16620c0, sub_1662360, sub_16a7ec0, sub_16a8010
*/
void sub_1668df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668df0ULL || rel >= 0x1668ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668ed0 size=96 callers=0 calls=2
   calls: sub_165e140, sub_1724d60
*/
void sub_1668ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668ed0ULL || rel >= 0x1668f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668f30 size=16 callers=0 calls=0
*/
void sub_1668f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668f30ULL || rel >= 0x1668f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668f40 size=16 callers=0 calls=0
*/
void sub_1668f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668f40ULL || rel >= 0x1668f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668f50 size=16 callers=0 calls=0
*/
void sub_1668f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668f50ULL || rel >= 0x1668f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668f60 size=64 callers=1 calls=1
   calls: sub_1724f20
*/
void sub_1668f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668f60ULL || rel >= 0x1668fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668fa0 size=64 callers=0 calls=1
   calls: sub_17499e0
*/
void sub_1668fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668fa0ULL || rel >= 0x1668fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01668fe0 size=64 callers=0 calls=2
   calls: sub_1724ff0, sub_17499e0
*/
void sub_1668fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1668fe0ULL || rel >= 0x1669020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669020 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1669020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669020ULL || rel >= 0x1669080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669080 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1669080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669080ULL || rel >= 0x16690e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016690e0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16690e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16690e0ULL || rel >= 0x1669140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669140 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1669140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669140ULL || rel >= 0x16691a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016691a0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16691a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16691a0ULL || rel >= 0x1669200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669200 size=416 callers=0 calls=5
   calls: sub_16580b0, sub_16580c0, sub_16580f0, sub_16581f0, sub_165e060
   ref: LanMatchJointSessionJob::CallSessionEvent
*/
void LanMatchJointSessionJob_CallSessionEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669200ULL || rel >= 0x16693a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016693a0 size=240 callers=0 calls=1
   calls: sub_1725280
   ref: LanMatchJointSessionJob::WaitNextSessionId
   ref: LanMatchJointSessionJob::StartRandomMatchmake
   ref: LanMatchJointSessionJob::SendInvitationAsCompanion
   ref: LanMatchJointSessionJob::SendAnswerToInvitation
   ref: LanMatchJointSessionJob::StartJoinMatchmakeSession
*/
void LanMatchJointSessionJob_WaitNextSessionId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16693a0ULL || rel >= 0x1669490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669490 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1669490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669490ULL || rel >= 0x16694f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016694f0 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::StartUpdateSessionKey
*/
void LanMatchJointSessionJob_StartUpdateSessionKey(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16694f0ULL || rel >= 0x16695b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016695b0 size=32 callers=0 calls=0
   ref: LanMatchJointSessionJob::WaitJoinMatchmakeSession
*/
void LanMatchJointSessionJob_WaitJoinMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16695b0ULL || rel >= 0x16695d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016695d0 size=32 callers=0 calls=0
   ref: LanMatchJointSessionJob::WaitRandomMatchmake
*/
void LanMatchJointSessionJob_WaitRandomMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16695d0ULL || rel >= 0x16695f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016695f0 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::WaitForAnswerToInvitation
*/
void LanMatchJointSessionJob_WaitForAnswerToInvitation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16695f0ULL || rel >= 0x16696b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016696b0 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::WaitNextSessionId
*/
void LanMatchJointSessionJob_WaitNextSessionId_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16696b0ULL || rel >= 0x1669770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669770 size=176 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
*/
void sub_1669770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669770ULL || rel >= 0x1669820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669820 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::SendNextSessionId
*/
void LanMatchJointSessionJob_SendNextSessionId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669820ULL || rel >= 0x16698e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016698e0 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::WaitCompanionStationPrepared
*/
void LanMatchJointSessionJob_WaitCompanionStationPrepared(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16698e0ULL || rel >= 0x16699a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016699a0 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::SendNextSessionId
*/
void LanMatchJointSessionJob_SendNextSessionId_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16699a0ULL || rel >= 0x1669a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669a60 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::StartLeavePreviousMesh
*/
void LanMatchJointSessionJob_StartLeavePreviousMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669a60ULL || rel >= 0x1669b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669b20 size=32 callers=0 calls=0
   ref: LanMatchJointSessionJob::WaitLeavePreviousMesh
*/
void LanMatchJointSessionJob_WaitLeavePreviousMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669b20ULL || rel >= 0x1669b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669b40 size=32 callers=0 calls=0
   ref: LanMatchJointSessionJob::WaitUpdateSessionKey
*/
void LanMatchJointSessionJob_WaitUpdateSessionKey(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669b40ULL || rel >= 0x1669b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669b60 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::SendPreparedForMigrateSession
*/
void LanMatchJointSessionJob_SendPreparedForMigrateSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669b60ULL || rel >= 0x1669c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669c20 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::WaitUntilLeaderLeavesMesh
*/
void LanMatchJointSessionJob_WaitUntilLeaderLeavesMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669c20ULL || rel >= 0x1669ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669ce0 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::StartLeavePreviousMesh
*/
void LanMatchJointSessionJob_StartLeavePreviousMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669ce0ULL || rel >= 0x1669da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669da0 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::StartLeavePreviousMatchmakeSession
*/
void LanMatchJointSessionJob_StartLeavePreviousMatchmakeSessi(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669da0ULL || rel >= 0x1669e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669e60 size=32 callers=0 calls=0
   ref: LanMatchJointSessionJob::WaitLeavePreviousMatchmakeSession
*/
void LanMatchJointSessionJob_WaitLeavePreviousMatchmakeSessio(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669e60ULL || rel >= 0x1669e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669e80 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::MeshRestart
*/
void LanMatchJointSessionJob_MeshRestart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669e80ULL || rel >= 0x1669f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669f40 size=64 callers=0 calls=0
   ref: LanMatchJointSessionJob::StartGetNextMeshHostStationLocation
   ref: LanMatchJointSessionJob::StartCreateNextMesh
*/
void LanMatchJointSessionJob_StartCreateNextMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669f40ULL || rel >= 0x1669f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669f80 size=32 callers=0 calls=0
   ref: LanMatchJointSessionJob::WaitCreateNextMesh
*/
void LanMatchJointSessionJob_WaitCreateNextMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669f80ULL || rel >= 0x1669fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669fa0 size=32 callers=0 calls=0
   ref: LanMatchJointSessionJob::WaitGetNextMeshHostStationLocation
*/
void LanMatchJointSessionJob_WaitGetNextMeshHostStationLocati(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669fa0ULL || rel >= 0x1669fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01669fc0 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::WaitCompanionStation
*/
void LanMatchJointSessionJob_WaitCompanionStation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1669fc0ULL || rel >= 0x166a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a080 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::WaitHostStationId
*/
void LanMatchJointSessionJob_WaitHostStationId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a080ULL || rel >= 0x166a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a140 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::StartJoinNextMesh
*/
void LanMatchJointSessionJob_StartJoinNextMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a140ULL || rel >= 0x166a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a200 size=32 callers=0 calls=0
   ref: LanMatchJointSessionJob::WaitJoinNextMesh
*/
void LanMatchJointSessionJob_WaitJoinNextMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a200ULL || rel >= 0x166a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a220 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::WaitCompanionStation
*/
void LanMatchJointSessionJob_WaitCompanionStation_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a220ULL || rel >= 0x166a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a2e0 size=192 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_17259c0, sub_172be20
   ref: LanMatchJointSessionJob::ProcessComplete
*/
void LanMatchJointSessionJob_ProcessComplete(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a2e0ULL || rel >= 0x166a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a3a0 size=144 callers=0 calls=3
   calls: sub_16551b0, sub_165e060, sub_17255e0
*/
void sub_166a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a3a0ULL || rel >= 0x166a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a430 size=16 callers=0 calls=0
*/
void sub_166a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a430ULL || rel >= 0x166a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a440 size=16 callers=0 calls=0
*/
void sub_166a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a440ULL || rel >= 0x166a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a450 size=16 callers=0 calls=0
*/
void sub_166a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a450ULL || rel >= 0x166a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a460 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_166a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a460ULL || rel >= 0x166a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a4c0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_166a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a4c0ULL || rel >= 0x166a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a520 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_166a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a520ULL || rel >= 0x166a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a580 size=16 callers=0 calls=0
*/
void sub_166a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a580ULL || rel >= 0x166a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a590 size=16 callers=0 calls=0
*/
void sub_166a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a590ULL || rel >= 0x166a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a5a0 size=16 callers=0 calls=0
*/
void sub_166a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a5a0ULL || rel >= 0x166a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a5b0 size=16 callers=0 calls=0
*/
void sub_166a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a5b0ULL || rel >= 0x166a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a5c0 size=48 callers=1 calls=1
   calls: sub_1726390
*/
void sub_166a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a5c0ULL || rel >= 0x166a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a5f0 size=16 callers=0 calls=0
*/
void sub_166a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a5f0ULL || rel >= 0x166a600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a600 size=48 callers=0 calls=1
   calls: sub_17263e0
*/
void sub_166a600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a600ULL || rel >= 0x166a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a630 size=48 callers=0 calls=0
*/
void sub_166a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a630ULL || rel >= 0x166a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a660 size=16 callers=0 calls=0
*/
void sub_166a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a660ULL || rel >= 0x166a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a670 size=16 callers=0 calls=0
*/
void sub_166a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a670ULL || rel >= 0x166a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a680 size=112 callers=1 calls=1
   calls: sub_1722980
*/
void sub_166a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a680ULL || rel >= 0x166a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a6f0 size=16 callers=0 calls=0
*/
void sub_166a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a6f0ULL || rel >= 0x166a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a700 size=48 callers=0 calls=1
   calls: sub_17229e0
*/
void sub_166a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a700ULL || rel >= 0x166a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a730 size=256 callers=0 calls=5
   calls: sub_165e060, sub_1661ec0, sub_1666aa0, sub_1723380, sub_172e150
   ref: LanMatchCreateSessionJob::CreateMatchmakeSession
*/
void LanMatchCreateSessionJob_CreateMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a730ULL || rel >= 0x166a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a830 size=352 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_165e140, sub_172be20
   ref: LanMatchCreateSessionJob::WaitCreateMatchmake
   ref: nn::pia::lan::LanMatchCreateSessionJob::CompleteFailure
*/
void LanMatchCreateSessionJob_WaitCreateMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a830ULL || rel >= 0x166a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166a990 size=400 callers=0 calls=7
   calls: sub_1655220, sub_165e060, sub_17231d0, sub_172c170, sub_172e0d0, sub_172e0e0, sub_172e100
   ref: CreateSessionJob::MeshStartup
*/
void CreateSessionJob_MeshStartup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166a990ULL || rel >= 0x166ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ab20 size=192 callers=0 calls=3
   calls: sub_165e140, sub_1667580, sub_172be20
   ref: CreateSessionJob::CompleteProcess
   ref: LanMatchCreateSessionJob::CompleteFailure
*/
void CreateSessionJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ab20ULL || rel >= 0x166abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166abe0 size=64 callers=0 calls=1
   calls: sub_165e140
   ref: LanMatchCreateSessionJob::UnregisterGathering
*/
void LanMatchCreateSessionJob_UnregisterGathering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166abe0ULL || rel >= 0x166ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ac20 size=304 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_165e140, sub_172be20
   ref: nn::pia::lan::LanMatchCreateSessionJob::CompleteFailure
   ref: LanMatchCreateSessionJob::WaitUnregisterGathering
*/
void LanMatchCreateSessionJob_WaitUnregisterGathering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ac20ULL || rel >= 0x166ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ad50 size=224 callers=0 calls=5
   calls: sub_1655220, sub_165e060, sub_165e140, sub_172be20, sub_172e100
*/
void sub_166ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ad50ULL || rel >= 0x166ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ae30 size=48 callers=0 calls=1
   calls: sub_1723250
*/
void sub_166ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ae30ULL || rel >= 0x166ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ae60 size=16 callers=0 calls=0
*/
void sub_166ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ae60ULL || rel >= 0x166ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ae70 size=48 callers=1 calls=1
   calls: sub_1723400
*/
void sub_166ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ae70ULL || rel >= 0x166aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166aea0 size=16 callers=0 calls=0
*/
void sub_166aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166aea0ULL || rel >= 0x166aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166aeb0 size=48 callers=0 calls=1
   calls: sub_1723440
*/
void sub_166aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166aeb0ULL || rel >= 0x166aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166aee0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_166aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166aee0ULL || rel >= 0x166af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166af40 size=32 callers=0 calls=0
   ref: LanMatchDestroySessionJob::MeshCleanup
*/
void LanMatchDestroySessionJob_MeshCleanup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166af40ULL || rel >= 0x166af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166af60 size=32 callers=0 calls=0
   ref: LanMatchDestroySessionJob::UnregisterCurrentMatchmakeSession
*/
void LanMatchDestroySessionJob_UnregisterCurrentMatchmakeSess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166af60ULL || rel >= 0x166af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166af80 size=160 callers=0 calls=0
   ref: DestroySessionJob::SendMonitoringData
   ref: LanMatchDestroySessionJob::WaitUnregisterCurrentMatchmakeSession
*/
void DestroySessionJob_SendMonitoringData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166af80ULL || rel >= 0x166b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b020 size=128 callers=0 calls=1
   calls: sub_172e100
   ref: DestroySessionJob::SendMonitoringData
*/
void DestroySessionJob_SendMonitoringData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b020ULL || rel >= 0x166b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b0a0 size=16 callers=0 calls=0
*/
void sub_166b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b0a0ULL || rel >= 0x166b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b0b0 size=16 callers=0 calls=0
*/
void sub_166b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b0b0ULL || rel >= 0x166b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b0c0 size=64 callers=1 calls=2
   calls: sub_1655080, sub_1722610
*/
void sub_166b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b0c0ULL || rel >= 0x166b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b100 size=64 callers=0 calls=1
   calls: sub_1655170
*/
void sub_166b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b100ULL || rel >= 0x166b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b140 size=64 callers=0 calls=2
   calls: sub_1655170, sub_1722650
*/
void sub_166b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b140ULL || rel >= 0x166b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b180 size=160 callers=0 calls=2
   calls: sub_165e060, sub_1667080
   ref: LanMatchBrowseMatchmakeJob::BrowseMatchmake
*/
void LanMatchBrowseMatchmakeJob_BrowseMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b180ULL || rel >= 0x166b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b220 size=288 callers=0 calls=2
   calls: sub_1655220, sub_165e060
   ref: LanMatchBrowseMatchmakeJob::WaitBrowseMatchmake
*/
void LanMatchBrowseMatchmakeJob_WaitBrowseMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b220ULL || rel >= 0x166b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b340 size=288 callers=0 calls=3
   calls: sub_1655220, sub_165e060, sub_1667100
   ref: session::BrowseMatchmakeJob::CompleteProcess
*/
void session_BrowseMatchmakeJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b340ULL || rel >= 0x166b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b460 size=160 callers=0 calls=1
   calls: sub_165e060
   ref: LanMatchBrowseMatchmakeJob::WaitRequestSessionInfo
*/
void LanMatchBrowseMatchmakeJob_WaitRequestSessionInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b460ULL || rel >= 0x166b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b500 size=272 callers=0 calls=2
   calls: sub_1655220, sub_165e060
   ref: session::BrowseMatchmakeJob::CompleteProcess
*/
void session_BrowseMatchmakeJob_CompleteProcess_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b500ULL || rel >= 0x166b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b610 size=48 callers=0 calls=1
   calls: sub_1667100
*/
void sub_166b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b610ULL || rel >= 0x166b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b640 size=16 callers=0 calls=0
*/
void sub_166b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b640ULL || rel >= 0x166b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b650 size=80 callers=1 calls=2
   calls: sub_1655080, sub_17279d0
*/
void sub_166b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b650ULL || rel >= 0x166b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b6a0 size=64 callers=0 calls=1
   calls: sub_1655170
*/
void sub_166b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b6a0ULL || rel >= 0x166b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b6e0 size=64 callers=0 calls=2
   calls: sub_1655170, sub_1727a50
*/
void sub_166b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b6e0ULL || rel >= 0x166b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b720 size=352 callers=0 calls=6
   calls: sub_165e060, sub_1661ec0, sub_1666aa0, sub_1667080, sub_1723380, sub_172e150
   ref: LanMatchRandomMatchmakeJob::RandomMatchmake
*/
void LanMatchRandomMatchmakeJob_RandomMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b720ULL || rel >= 0x166b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166b880 size=400 callers=0 calls=5
   calls: sub_1655220, sub_165e060, sub_165e140, sub_1667100, sub_172be20
   ref: nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure
   ref: LanMatchRandomMatchmakeJob::WaitRandomMatchmake
*/
void LanMatchRandomMatchmakeJob_WaitRandomMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166b880ULL || rel >= 0x166ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ba10 size=352 callers=0 calls=6
   calls: sub_1655220, sub_165e060, sub_1667100, sub_1729140, sub_172e0d0, sub_172e100
   ref: RandomMatchmakeJob::MeshStartup
*/
void RandomMatchmakeJob_MeshStartup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ba10ULL || rel >= 0x166bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166bb70 size=192 callers=0 calls=3
   calls: sub_165e140, sub_1667580, sub_172be20
   ref: RandomMatchmakeJob::CompleteProcess
   ref: LanMatchRandomMatchmakeJob::CompleteFailure
*/
void RandomMatchmakeJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166bb70ULL || rel >= 0x166bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166bc30 size=192 callers=0 calls=3
   calls: sub_165e140, sub_1667100, sub_172be20
   ref: LanMatchRandomMatchmakeJob::UnregisterGathering
   ref: nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure
*/
void LanMatchRandomMatchmakeJob_UnregisterGathering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166bc30ULL || rel >= 0x166bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166bcf0 size=336 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_165e140, sub_172be20
   ref: nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure
   ref: LanMatchRandomMatchmakeJob::WaitUnregisterGathering
*/
void LanMatchRandomMatchmakeJob_WaitUnregisterGathering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166bcf0ULL || rel >= 0x166be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166be40 size=368 callers=0 calls=2
   calls: sub_165e140, sub_172be20
   ref: LanMatchRandomMatchmakeJob::LeaveMesh
   ref: LanMatchRandomMatchmakeJob::CompleteFailure
   ref: LanMatchRandomMatchmakeJob::WaitRequestSessionInfo
*/
void LanMatchRandomMatchmakeJob_LeaveMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166be40ULL || rel >= 0x166bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166bfb0 size=320 callers=0 calls=4
   calls: sub_165e140, sub_1667490, sub_16a65e0, sub_1735840
   ref: LanMatchRandomMatchmakeJob::LeaveMesh
   ref: LanMatchRandomMatchmakeJob::RandomMatchmake
   ref: LanMatchRandomMatchmakeJob::CompleteProcess
*/
void LanMatchRandomMatchmakeJob_LeaveMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166bfb0ULL || rel >= 0x166c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166c0f0 size=624 callers=0 calls=8
   calls: sub_165c6b0, sub_165e140, sub_1667100, sub_1667490, sub_16674a0, sub_16a7ec0, sub_172be20, sub_1735840
   ref: nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure
   ref: LanMatchRandomMatchmakeJob::WaitForRetryRandomMatchmake
   ref: LanMatchRandomMatchmakeJob::RandomMatchmake
   ref: LanMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void LanMatchRandomMatchmakeJob_RandomMatchmake_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166c0f0ULL || rel >= 0x166c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166c360 size=320 callers=0 calls=3
   calls: sub_165e140, sub_1667100, sub_172be20
   ref: nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure
   ref: LanMatchRandomMatchmakeJob::RandomMatchmake
   ref: LanMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void LanMatchRandomMatchmakeJob_RandomMatchmake_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166c360ULL || rel >= 0x166c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166c4a0 size=336 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_165e140, sub_172be20
   ref: LanMatchRandomMatchmakeJob::WaitLeaveMatchmakeSession
   ref: nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure
*/
void LanMatchRandomMatchmakeJob_WaitLeaveMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166c4a0ULL || rel >= 0x166c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166c5f0 size=464 callers=0 calls=8
   calls: sub_165c6b0, sub_165e140, sub_1667100, sub_1667490, sub_16674a0, sub_16a7ec0, sub_172be20, sub_1735840
   ref: nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure
   ref: LanMatchRandomMatchmakeJob::WaitForRetryRandomMatchmake
   ref: LanMatchRandomMatchmakeJob::RandomMatchmake
   ref: LanMatchRandomMatchmakeJob::LeaveMatchmakeSession
*/
void LanMatchRandomMatchmakeJob_RandomMatchmake_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166c5f0ULL || rel >= 0x166c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166c7c0 size=240 callers=0 calls=5
   calls: sub_1655220, sub_165e060, sub_165e140, sub_172be20, sub_172e100
*/
void sub_166c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166c7c0ULL || rel >= 0x166c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166c8b0 size=240 callers=0 calls=5
   calls: sub_1655220, sub_165e060, sub_165e140, sub_172be20, sub_172e100
*/
void sub_166c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166c8b0ULL || rel >= 0x166c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166c9a0 size=256 callers=0 calls=5
   calls: sub_165c6b0, sub_16620c0, sub_1662360, sub_16a7ec0, sub_16a8010
*/
void sub_166c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166c9a0ULL || rel >= 0x166caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166caa0 size=48 callers=0 calls=1
   calls: sub_1667100
*/
void sub_166caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166caa0ULL || rel >= 0x166cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166cad0 size=16 callers=0 calls=0
*/
void sub_166cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166cad0ULL || rel >= 0x166cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166cae0 size=16 callers=0 calls=0
*/
void sub_166cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166cae0ULL || rel >= 0x166caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166caf0 size=16 callers=0 calls=0
*/
void sub_166caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166caf0ULL || rel >= 0x166cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166cb00 size=64 callers=1 calls=1
   calls: sub_17273b0
*/
void sub_166cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166cb00ULL || rel >= 0x166cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166cb40 size=16 callers=0 calls=0
*/
void sub_166cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166cb40ULL || rel >= 0x166cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166cb50 size=16 callers=0 calls=0
*/
void sub_166cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166cb50ULL || rel >= 0x166cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166cb60 size=1296 callers=0 calls=12
   calls: sub_165bea0, sub_165c5e0, sub_165e060, sub_165e140, sub_16620c0, sub_16620d0, sub_1662310, sub_16a6090, sub_171e0e0, sub_171e1e0, sub_17276d0, sub_6af650
*/
void sub_166cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166cb60ULL || rel >= 0x166d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d070 size=16 callers=0 calls=0
*/
void sub_166d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d070ULL || rel >= 0x166d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d080 size=112 callers=0 calls=1
   calls: sub_165e060
*/
void sub_166d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d080ULL || rel >= 0x166d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d0f0 size=16 callers=4 calls=0
*/
void sub_166d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d0f0ULL || rel >= 0x166d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d100 size=48 callers=0 calls=1
   calls: sub_1727660
*/
void sub_166d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d100ULL || rel >= 0x166d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d130 size=80 callers=0 calls=4
   calls: sub_16620c0, sub_1662140, sub_1662320, sub_1727660
*/
void sub_166d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d130ULL || rel >= 0x166d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d180 size=16 callers=0 calls=0
*/
void sub_166d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d180ULL || rel >= 0x166d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d190 size=176 callers=0 calls=2
   calls: sub_16b02f0, sub_174de50
*/
void sub_166d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d190ULL || rel >= 0x166d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d240 size=144 callers=0 calls=2
   calls: sub_16b00e0, sub_174de50
*/
void sub_166d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d240ULL || rel >= 0x166d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d2d0 size=16 callers=0 calls=0
*/
void sub_166d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d2d0ULL || rel >= 0x166d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d2e0 size=32 callers=0 calls=0
*/
void sub_166d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d2e0ULL || rel >= 0x166d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d300 size=32 callers=0 calls=0
*/
void sub_166d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d300ULL || rel >= 0x166d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d320 size=32 callers=0 calls=0
*/
void sub_166d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d320ULL || rel >= 0x166d340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d340 size=16 callers=0 calls=0
*/
void sub_166d340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d340ULL || rel >= 0x166d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d350 size=32 callers=0 calls=0
*/
void sub_166d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d350ULL || rel >= 0x166d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d370 size=16 callers=0 calls=0
*/
void sub_166d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d370ULL || rel >= 0x166d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d380 size=16 callers=0 calls=0
*/
void sub_166d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d380ULL || rel >= 0x166d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d390 size=16 callers=0 calls=0
*/
void sub_166d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d390ULL || rel >= 0x166d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d3a0 size=16 callers=0 calls=0
*/
void sub_166d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d3a0ULL || rel >= 0x166d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d3b0 size=16 callers=0 calls=0
*/
void sub_166d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d3b0ULL || rel >= 0x166d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d3c0 size=48 callers=1 calls=1
   calls: sub_16a3b70
*/
void sub_166d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d3c0ULL || rel >= 0x166d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d3f0 size=16 callers=0 calls=0
*/
void sub_166d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d3f0ULL || rel >= 0x166d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d400 size=48 callers=0 calls=1
   calls: sub_16a3bd0
*/
void sub_166d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d400ULL || rel >= 0x166d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d430 size=1120 callers=0 calls=3
   calls: sub_16a5480, sub_16a7a50, sub_16a7ea0
*/
void sub_166d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d430ULL || rel >= 0x166d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d890 size=16 callers=0 calls=0
*/
void sub_166d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d890ULL || rel >= 0x166d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d8a0 size=64 callers=1 calls=1
   calls: sub_1735df0
*/
void sub_166d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d8a0ULL || rel >= 0x166d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d8e0 size=16 callers=0 calls=0
*/
void sub_166d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d8e0ULL || rel >= 0x166d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d8f0 size=48 callers=0 calls=1
   calls: sub_1735e30
*/
void sub_166d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d8f0ULL || rel >= 0x166d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d920 size=208 callers=0 calls=3
   calls: sub_165e060, sub_1666e90, sub_1667420
   ref: LanMatchUpdateSessionSettingJob::UpdateSessionSetting
*/
void LanMatchUpdateSessionSettingJob_UpdateSessionSetting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d920ULL || rel >= 0x166d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166d9f0 size=336 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_16664a0, sub_172be20
   ref: LanMatchUpdateSessionSettingJob::WaitUpdateSessionSetting
*/
void LanMatchUpdateSessionSettingJob_WaitUpdateSessionSetting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d9f0ULL || rel >= 0x166db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166db40 size=48 callers=0 calls=1
   calls: sub_1736030
*/
void sub_166db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166db40ULL || rel >= 0x166db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166db70 size=416 callers=0 calls=4
   calls: sub_1655220, sub_165e060, sub_1666560, sub_172be20
   ref: UpdateSessionSettingJob::CompleteProcess
*/
void UpdateSessionSettingJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166db70ULL || rel >= 0x166dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166dd10 size=16 callers=0 calls=0
*/
void sub_166dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166dd10ULL || rel >= 0x166dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166dd20 size=80 callers=0 calls=0
   ref: JoinMeshJob::SetupLocalPlayerInfo
*/
void JoinMeshJob_SetupLocalPlayerInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166dd20ULL || rel >= 0x166dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166dd70 size=16 callers=0 calls=0
*/
void sub_166dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166dd70ULL || rel >= 0x166dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166dd80 size=48 callers=0 calls=1
   calls: sub_169e170
*/
void sub_166dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166dd80ULL || rel >= 0x166ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ddb0 size=32 callers=0 calls=0
   ref: JoinMeshJob::CompleteProcess
*/
void JoinMeshJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ddb0ULL || rel >= 0x166ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ddd0 size=128 callers=0 calls=1
   calls: sub_165e060
   ref: CreateMeshJob::SetupLocalPlayerInfo
*/
void CreateMeshJob_SetupLocalPlayerInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ddd0ULL || rel >= 0x166de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166de50 size=16 callers=0 calls=0
*/
void sub_166de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166de50ULL || rel >= 0x166de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166de60 size=48 callers=0 calls=1
   calls: sub_169c000
*/
void sub_166de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166de60ULL || rel >= 0x166de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166de90 size=192 callers=1 calls=2
   calls: sub_1652c70, sub_165ff10
*/
void sub_166de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166de90ULL || rel >= 0x166df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166df50 size=192 callers=2 calls=1
   calls: sub_1652d30
*/
void sub_166df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166df50ULL || rel >= 0x166e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e010 size=16 callers=0 calls=0
*/
void sub_166e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e010ULL || rel >= 0x166e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e020 size=48 callers=0 calls=1
   calls: sub_166df50
*/
void sub_166e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e020ULL || rel >= 0x166e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e050 size=48 callers=0 calls=1
   calls: sub_166df50
*/
void sub_166e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e050ULL || rel >= 0x166e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e080 size=16 callers=0 calls=0
*/
void sub_166e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e080ULL || rel >= 0x166e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e090 size=16 callers=1 calls=0
*/
void sub_166e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e090ULL || rel >= 0x166e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e0a0 size=336 callers=0 calls=4
   calls: sub_1652cf0, sub_16538d0, sub_165e060, sub_174de50
*/
void sub_166e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e0a0ULL || rel >= 0x166e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e1f0 size=16 callers=0 calls=0
*/
void sub_166e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e1f0ULL || rel >= 0x166e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e200 size=224 callers=0 calls=4
   calls: sub_1652de0, sub_1652f90, sub_165c9b0, sub_165e060
*/
void sub_166e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e200ULL || rel >= 0x166e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e2e0 size=16 callers=0 calls=0
*/
void sub_166e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e2e0ULL || rel >= 0x166e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e2f0 size=1696 callers=0 calls=10
   calls: sub_1652c70, sub_1652cf0, sub_1652d30, sub_1653860, sub_1653890, sub_165e060, sub_165e140, sub_1660970, sub_166e990, sub_174de50
*/
void sub_166e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e2f0ULL || rel >= 0x166e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166e990 size=512 callers=3 calls=4
   calls: sub_165b3c0, sub_165b5f0, sub_165e060, sub_165e140
*/
void sub_166e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166e990ULL || rel >= 0x166eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166eb90 size=16 callers=0 calls=0
*/
void sub_166eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166eb90ULL || rel >= 0x166eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166eba0 size=16 callers=0 calls=0
*/
void sub_166eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166eba0ULL || rel >= 0x166ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ebb0 size=16 callers=0 calls=0
*/
void sub_166ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ebb0ULL || rel >= 0x166ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ebc0 size=16 callers=0 calls=0
*/
void sub_166ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ebc0ULL || rel >= 0x166ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ebd0 size=16 callers=0 calls=0
*/
void sub_166ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ebd0ULL || rel >= 0x166ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ebe0 size=16 callers=0 calls=0
*/
void sub_166ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ebe0ULL || rel >= 0x166ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ebf0 size=16 callers=0 calls=0
*/
void sub_166ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ebf0ULL || rel >= 0x166ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ec00 size=96 callers=1 calls=2
   calls: sub_1655080, sub_16b57a0
*/
void sub_166ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ec00ULL || rel >= 0x166ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ec60 size=64 callers=0 calls=1
   calls: sub_1655170
*/
void sub_166ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ec60ULL || rel >= 0x166eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166eca0 size=64 callers=0 calls=2
   calls: sub_1655170, sub_16b5860
*/
void sub_166eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166eca0ULL || rel >= 0x166ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ece0 size=112 callers=0 calls=1
   calls: sub_16a7a50
   ref: LanProcessHostMigrationJob::LanCleanupOldHostInfo
   ref: LanProcessHostMigrationJob::LanDecideNextHost
*/
void LanProcessHostMigrationJob_LanDecideNextHost(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ece0ULL || rel >= 0x166ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ed50 size=176 callers=0 calls=1
   calls: sub_16b5ca0
   ref: LanProcessHostMigrationJob::LanPrepareForBecomingHost
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::WaitNewHostGreeting
*/
void LanProcessHostMigrationJob_WaitNewHostGreeting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ed50ULL || rel >= 0x166ee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ee00 size=224 callers=0 calls=3
   calls: sub_16a5480, sub_16a7a50, sub_16b5ca0
   ref: LanProcessHostMigrationJob::LanPrepareForBecomingHost
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::WaitNewHostGreeting
*/
void LanProcessHostMigrationJob_WaitNewHostGreeting_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ee00ULL || rel >= 0x166eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166eee0 size=128 callers=0 calls=6
   calls: sub_1655110, sub_16620c0, sub_16621d0, sub_1672910, sub_16b5dc0, sub_16b5e60
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::SendGreetingMessage
*/
void LanProcessHostMigrationJob_SendGreetingMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166eee0ULL || rel >= 0x166ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ef60 size=192 callers=0 calls=2
   calls: sub_165c6b0, sub_16a7a50
   ref: LanProcessHostMigrationJob::LanCleanupOldHostInfoOnMultiCandidate
   ref: LanProcessHostMigrationJob::LanMakeHostCandidateRanking
*/
void LanProcessHostMigrationJob_LanMakeHostCandidateRanking(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ef60ULL || rel >= 0x166f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166f020 size=96 callers=0 calls=0
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::LanSendRankDecision
*/
void LanProcessHostMigrationJob_LanSendRankDecision(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166f020ULL || rel >= 0x166f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166f080 size=128 callers=0 calls=1
   calls: sub_16b71b0
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::LanSendRankDecision
*/
void LanProcessHostMigrationJob_LanSendRankDecision_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166f080ULL || rel >= 0x166f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166f100 size=768 callers=0 calls=6
   calls: sub_165c6b0, sub_16a5480, sub_16a77c0, sub_16a7ea0, sub_16a7ec0, sub_16af560
   ref: LanProcessHostMigrationJob::LanWaitRankDecision
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: ProcessHostMigrationJob::HostMigrationFailure
*/
void ProcessHostMigrationJob_HostMigrationFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166f100ULL || rel >= 0x166f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166f400 size=448 callers=0 calls=1
   calls: sub_16a77c0
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::WaitNewHostGreeting
   ref: LanProcessHostMigrationJob::LanGetMatchMakingClientHost
*/
void LanProcessHostMigrationJob_WaitNewHostGreeting_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166f400ULL || rel >= 0x166f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166f5c0 size=384 callers=0 calls=4
   calls: sub_1655110, sub_16668d0, sub_1667420, sub_16a77c0
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: ProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::LanWaitMatchMakingClientHost
   ref: LanProcessHostMigrationJob::LanCheckMatchMakingClientHost
*/
void ProcessHostMigrationJob_HostMigrationFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166f5c0ULL || rel >= 0x166f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166f740 size=896 callers=0 calls=5
   calls: sub_165c6b0, sub_16669a0, sub_1666a30, sub_16a77c0, sub_16b7af0
   ref: LanProcessHostMigrationJob::LanCheckOldHostDisconnection
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::WaitNewHostGreeting
   ref: LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti
*/
void LanProcessHostMigrationJob_WaitNewHostGreeting_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166f740ULL || rel >= 0x166fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166fac0 size=336 callers=0 calls=3
   calls: sub_16669a0, sub_1666a30, sub_16a77c0
   ref: LanProcessHostMigrationJob::LanCheckOldHostDisconnection
   ref: LanProcessHostMigrationJob::LanPrepareForBecomingHost
   ref: LanProcessHostMigrationJob::HostMigrationFailure
*/
void LanProcessHostMigrationJob_HostMigrationFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166fac0ULL || rel >= 0x166fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166fc10 size=880 callers=0 calls=5
   calls: sub_1655110, sub_165c6b0, sub_16668d0, sub_1667420, sub_16a77c0
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::WaitNewHostGreeting
   ref: LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti
   ref: LanProcessHostMigrationJob::LanWaitCheckOldHostDisconnection
*/
void LanProcessHostMigrationJob_WaitNewHostGreeting_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166fc10ULL || rel >= 0x166ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0166ff80 size=144 callers=0 calls=3
   calls: sub_165c6b0, sub_1670010, sub_16a7ea0
   ref: LanProcessHostMigrationJob::LanPrepareForBecomingHost
*/
void LanProcessHostMigrationJob_LanPrepareForBecomingHost(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166ff80ULL || rel >= 0x1670010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670010 size=608 callers=3 calls=2
   calls: sub_16a8380, sub_16c1160
*/
void sub_1670010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670010ULL || rel >= 0x1670270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670270 size=128 callers=0 calls=5
   calls: sub_1655290, sub_16669a0, sub_1666a30, sub_1670010, sub_16b6d30
*/
void sub_1670270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670270ULL || rel >= 0x16702f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016702f0 size=176 callers=0 calls=1
   calls: sub_1670010
   ref: LanProcessHostMigrationJob::LanSendRankDecision
*/
void LanProcessHostMigrationJob_LanSendRankDecision_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16702f0ULL || rel >= 0x16703a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016703a0 size=96 callers=0 calls=1
   calls: sub_165c6b0
   ref: LanProcessHostMigrationJob::LanGetMatchMakingClientHostLastConfirmation
*/
void LanProcessHostMigrationJob_LanGetMatchMakingClientHostLa(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16703a0ULL || rel >= 0x1670400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670400 size=320 callers=0 calls=4
   calls: sub_1655110, sub_16668d0, sub_1667420, sub_16a77c0
   ref: LanProcessHostMigrationJob::LanWaitMatchMakingClientHostLastConfirmation
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: ProcessHostMigrationJob::HostMigrationFailure
*/
void ProcessHostMigrationJob_HostMigrationFailure_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670400ULL || rel >= 0x1670540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670540 size=560 callers=0 calls=10
   calls: sub_1655110, sub_16620c0, sub_16621d0, sub_1662360, sub_16669a0, sub_1666a30, sub_1673610, sub_16a77c0, sub_16a7ea0, sub_174de60
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::LanWaitSendUpdateSessionMessage
*/
void LanProcessHostMigrationJob_HostMigrationFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670540ULL || rel >= 0x1670770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670770 size=288 callers=0 calls=6
   calls: sub_16620c0, sub_16621d0, sub_1667430, sub_1673660, sub_16a77c0, sub_172e0d0
   ref: ProcessHostMigrationJob::SendMigrationFinish
   ref: LanProcessHostMigrationJob::HostMigrationFailure
*/
void ProcessHostMigrationJob_SendMigrationFinish(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670770ULL || rel >= 0x1670890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670890 size=352 callers=0 calls=2
   calls: sub_16669a0, sub_16a77c0
   ref: LanProcessHostMigrationJob::LanPrepareForBecomingHost
   ref: LanProcessHostMigrationJob::HostMigrationFailure
   ref: LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti
*/
void LanProcessHostMigrationJob_HostMigrationFailure_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670890ULL || rel >= 0x16709f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016709f0 size=16 callers=0 calls=0
*/
void sub_16709f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16709f0ULL || rel >= 0x1670a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670a00 size=16 callers=0 calls=0
*/
void sub_1670a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670a00ULL || rel >= 0x1670a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670a10 size=16 callers=0 calls=0
*/
void sub_1670a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670a10ULL || rel >= 0x1670a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670a20 size=16 callers=0 calls=0
*/
void sub_1670a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670a20ULL || rel >= 0x1670a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670a30 size=16 callers=0 calls=0
*/
void sub_1670a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670a30ULL || rel >= 0x1670a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670a40 size=288 callers=1 calls=4
   calls: sub_1653bb0, sub_165fb70, sub_165fd40, sub_165fd50
*/
void sub_1670a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670a40ULL || rel >= 0x1670b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670b60 size=304 callers=1 calls=11
   calls: sub_1652940, sub_1652c70, sub_1655080, sub_165fb30, sub_165fb70, sub_16609d0, sub_16620c0, sub_1662150, sub_1663d40, sub_173cf60, sub_174e350
*/
void sub_1670b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670b60ULL || rel >= 0x1670c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670c90 size=224 callers=1 calls=9
   calls: sub_1652d30, sub_1655170, sub_1660a30, sub_16620c0, sub_1662140, sub_16621a0, sub_1663d50, sub_166e090, sub_174e350
*/
void sub_1670c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670c90ULL || rel >= 0x1670d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670d70 size=48 callers=0 calls=1
   calls: sub_1670c90
*/
void sub_1670d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670d70ULL || rel >= 0x1670da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670da0 size=256 callers=1 calls=5
   calls: sub_1652bd0, sub_165af60, sub_165e060, sub_1675d30, sub_17162d0
*/
void sub_1670da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670da0ULL || rel >= 0x1670ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670ea0 size=128 callers=1 calls=2
   calls: sub_165af80, sub_1716390
*/
void sub_1670ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670ea0ULL || rel >= 0x1670f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670f20 size=192 callers=0 calls=4
   calls: sub_1655110, sub_165c600, sub_165c6b0, sub_165fb70
*/
void sub_1670f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670f20ULL || rel >= 0x1670fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01670fe0 size=144 callers=0 calls=1
   calls: sub_1655290
*/
void sub_1670fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1670fe0ULL || rel >= 0x1671070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01671070 size=64 callers=1 calls=0
*/
void sub_1671070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1671070ULL || rel >= 0x16710b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016710b0 size=64 callers=0 calls=0
*/
void sub_16710b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16710b0ULL || rel >= 0x16710f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016710f0 size=240 callers=3 calls=7
   calls: sub_1652940, sub_165e060, sub_1667430, sub_16675c0, sub_16711f0, sub_16785c0, sub_1727940
*/
void sub_16710f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16710f0ULL || rel >= 0x16711e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016711e0 size=16 callers=6 calls=0
*/
void sub_16711e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16711e0ULL || rel >= 0x16711f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016711f0 size=336 callers=1 calls=4
   calls: sub_165e060, sub_1660cb0, sub_1660cc0, sub_1660f00
*/
void sub_16711f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16711f0ULL || rel >= 0x1671340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01671340 size=16 callers=1 calls=0
*/
void sub_1671340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1671340ULL || rel >= 0x1671350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01671350 size=1056 callers=0 calls=18
   calls: sub_1652c70, sub_1652d30, sub_16551b0, sub_1655220, sub_1655290, sub_165c600, sub_165c6b0, sub_165e060, sub_165fb30, sub_165fd90, sub_1667430, sub_16710f0
   ... +6 more
*/
void sub_1671350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1671350ULL || rel >= 0x1671770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01671770 size=400 callers=1 calls=5
   calls: sub_1674160, sub_1674eb0, sub_1674f90, sub_173ab40, sub_173ab60
*/
void sub_1671770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1671770ULL || rel >= 0x1671900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01671900 size=944 callers=5 calls=10
   calls: IN_ANY_ADDR_d, sub_165e140, sub_1667430, sub_16757e0, sub_1675890, sub_171e0e0, sub_171e1e0, sub_173c720, sub_173caa0, sub_173ef10
*/
void sub_1671900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1671900ULL || rel >= 0x1671cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01671cb0 size=368 callers=1 calls=9
   calls: IN_ANY_ADDR_d, sub_1652d30, sub_165fb30, sub_165fd90, sub_1675af0, sub_1675b50, sub_173c720, sub_173caa0, sub_173ef10
*/
void sub_1671cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1671cb0ULL || rel >= 0x1671e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01671e20 size=512 callers=2 calls=8
   calls: IN_ANY_ADDR_d, sub_1652cf0, sub_1652d50, sub_1652d90, sub_1652de0, sub_1652f60, sub_1652f90, sub_165e060
*/
void sub_1671e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1671e20ULL || rel >= 0x1672020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01672020 size=64 callers=0 calls=1
   calls: sub_16538d0
*/
void sub_1672020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1672020ULL || rel >= 0x1672060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01672060 size=720 callers=0 calls=16
   calls: LanMatchmakeUpdateJob_Update, sub_1652940, sub_1652f60, sub_1655850, sub_165c9b0, sub_165e060, sub_165e140, sub_165ff70, sub_165ffe0, sub_1663d60, sub_1672330, sub_171e0e0
   ... +4 more
*/
void sub_1672060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1672060ULL || rel >= 0x1672330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01672330 size=1200 callers=1 calls=21
   calls: sub_1652c70, sub_1652ca0, sub_1652d30, sub_165af90, sub_165b040, sub_165b0f0, sub_165e060, sub_165e140, sub_16639e0, sub_1673e80, sub_1673ff0, sub_1749820
   ... +9 more
*/
void sub_1672330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1672330ULL || rel >= 0x16727e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016727e0 size=176 callers=0 calls=5
   calls: sub_165b040, sub_165bba0, sub_165ffd0, sub_1663af0, sub_16767e0
*/
void sub_16727e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16727e0ULL || rel >= 0x1672890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01672890 size=16 callers=0 calls=0
*/
void sub_1672890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1672890ULL || rel >= 0x16728a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016728a0 size=16 callers=0 calls=0
*/
void sub_16728a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16728a0ULL || rel >= 0x16728b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016728b0 size=48 callers=0 calls=1
   calls: sub_174de60
*/
void sub_16728b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16728b0ULL || rel >= 0x16728e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016728e0 size=48 callers=1 calls=1
   calls: sub_174de60
*/
void sub_16728e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16728e0ULL || rel >= 0x1672910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01672910 size=528 callers=1 calls=12
   calls: sub_1652d30, sub_165fb30, sub_165fd90, sub_1667420, sub_1667430, sub_1672b20, sub_16786f0, sub_16a6fb0, sub_16a80b0, sub_172d380, sub_1749d80, sub_174de60
*/
void sub_1672910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1672910ULL || rel >= 0x1672b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01672b20 size=752 callers=5 calls=9
   calls: IN_ANY_ADDR_d, sub_1667420, sub_16752f0, sub_1675370, sub_173c720, sub_173caa0, sub_173ef10, sub_17499e0, sub_174de60
*/
void sub_1672b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1672b20ULL || rel >= 0x1672e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01672e10 size=160 callers=2 calls=6
   calls: sub_1655110, sub_1655190, sub_165c600, sub_165c6b0, sub_1672eb0, sub_16a6fb0
*/
void sub_1672e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1672e10ULL || rel >= 0x1672eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01672eb0 size=1856 callers=1 calls=10
   calls: IN_ANY_ADDR_d, sub_1652d30, sub_165fb30, sub_165fd90, sub_1667420, sub_1675080, sub_16750e0, sub_173c720, sub_173caa0, sub_173ef10
*/
void sub_1672eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1672eb0ULL || rel >= 0x16735f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016735f0 size=32 callers=2 calls=0
*/
void sub_16735f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16735f0ULL || rel >= 0x1673610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01673610 size=80 callers=4 calls=2
   calls: sub_1655110, sub_1655190
*/
void sub_1673610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1673610ULL || rel >= 0x1673660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01673660 size=32 callers=4 calls=0
*/
void sub_1673660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1673660ULL || rel >= 0x1673680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01673680 size=128 callers=2 calls=5
   calls: sub_1655110, sub_1655190, sub_165c600, sub_165c6b0, sub_1673700
*/
void sub_1673680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1673680ULL || rel >= 0x1673700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01673700 size=1856 callers=1 calls=10
   calls: IN_ANY_ADDR_d, sub_1652d30, sub_165fb30, sub_165fd90, sub_1667420, sub_1675580, sub_16755e0, sub_173c720, sub_173caa0, sub_173ef10
*/
void sub_1673700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1673700ULL || rel >= 0x1673e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01673e40 size=32 callers=2 calls=0
*/
void sub_1673e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1673e40ULL || rel >= 0x1673e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01673e60 size=16 callers=3 calls=0
*/
void sub_1673e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1673e60ULL || rel >= 0x1673e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01673e70 size=16 callers=0 calls=0
*/
void sub_1673e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1673e70ULL || rel >= 0x1673e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01673e80 size=368 callers=1 calls=7
   calls: sub_1652de0, sub_1652f90, sub_1653150, sub_1660a50, sub_1660cb0, sub_1660cc0, sub_1660f00
*/
void sub_1673e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1673e80ULL || rel >= 0x1673ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01673ff0 size=368 callers=1 calls=7
   calls: sub_1652de0, sub_1652f90, sub_1653150, sub_1660a50, sub_1660cb0, sub_1660cc0, sub_1660f00
*/
void sub_1673ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1673ff0ULL || rel >= 0x1674160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674160 size=192 callers=1 calls=2
   calls: sub_1675af0, sub_1675bf0
*/
void sub_1674160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674160ULL || rel >= 0x1674220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674220 size=304 callers=0 calls=6
   calls: IN_ANY_ADDR_d, sub_1667420, sub_1672b20, sub_1675020, sub_16751d0, sub_16a80b0
*/
void sub_1674220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674220ULL || rel >= 0x1674350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674350 size=560 callers=0 calls=14
   calls: IN_ANY_ADDR_d, sub_1653890, sub_16551b0, sub_165e060, sub_1667420, sub_1667430, sub_1675280, sub_1675470, sub_16786f0, sub_172d380, sub_17499e0, sub_1749ce0
   ... +2 more
*/
void sub_1674350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674350ULL || rel >= 0x1674580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674580 size=320 callers=0 calls=7
   calls: IN_ANY_ADDR_d, sub_1667420, sub_1671900, sub_1675520, sub_16756d0, sub_16a6fb0, sub_16a80b0
*/
void sub_1674580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674580ULL || rel >= 0x16746c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016746c0 size=624 callers=0 calls=10
   calls: IN_ANY_ADDR_d, sub_16551b0, sub_165e060, sub_1667420, sub_1667430, sub_1667440, sub_1670a40, sub_1675780, sub_16759e0, sub_16a6fb0
*/
void sub_16746c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16746c0ULL || rel >= 0x1674930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674930 size=64 callers=1 calls=1
   calls: sub_1660a40
*/
void sub_1674930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674930ULL || rel >= 0x1674970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674970 size=288 callers=2 calls=4
   calls: sub_1656e10, sub_1656e20, sub_16571e0, sub_165e060
*/
void sub_1674970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674970ULL || rel >= 0x1674a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674a90 size=320 callers=2 calls=4
   calls: sub_165e060, sub_1660cb0, sub_1660cc0, sub_1660f00
*/
void sub_1674a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674a90ULL || rel >= 0x1674bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674bd0 size=304 callers=2 calls=4
   calls: sub_165e060, sub_1660cb0, sub_1660cc0, sub_1660f00
*/
void sub_1674bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674bd0ULL || rel >= 0x1674d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674d00 size=368 callers=0 calls=7
   calls: sub_1652de0, sub_1652f90, sub_1653150, sub_1660a50, sub_1660cb0, sub_1660cc0, sub_1660f00
*/
void sub_1674d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674d00ULL || rel >= 0x1674e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674e70 size=16 callers=3 calls=0
*/
void sub_1674e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674e70ULL || rel >= 0x1674e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674e80 size=16 callers=0 calls=0
*/
void sub_1674e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674e80ULL || rel >= 0x1674e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674e90 size=16 callers=0 calls=0
*/
void sub_1674e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674e90ULL || rel >= 0x1674ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674ea0 size=16 callers=0 calls=0
*/
void sub_1674ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674ea0ULL || rel >= 0x1674eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674eb0 size=48 callers=1 calls=0
*/
void sub_1674eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674eb0ULL || rel >= 0x1674ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674ee0 size=160 callers=5 calls=1
   calls: sub_165e060
*/
void sub_1674ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674ee0ULL || rel >= 0x1674f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674f80 size=16 callers=0 calls=0
*/
void sub_1674f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674f80ULL || rel >= 0x1674f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01674f90 size=144 callers=6 calls=1
   calls: sub_165e060
*/
void sub_1674f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1674f90ULL || rel >= 0x1675020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675020 size=96 callers=1 calls=0
*/
void sub_1675020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675020ULL || rel >= 0x1675080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675080 size=96 callers=1 calls=0
*/
void sub_1675080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675080ULL || rel >= 0x16750e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016750e0 size=224 callers=1 calls=2
   calls: sub_165e060, sub_1674ee0
*/
void sub_16750e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16750e0ULL || rel >= 0x16751c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016751c0 size=16 callers=0 calls=0
*/
void sub_16751c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16751c0ULL || rel >= 0x16751d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016751d0 size=176 callers=1 calls=2
   calls: sub_165e060, sub_1674f90
*/
void sub_16751d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16751d0ULL || rel >= 0x1675280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675280 size=112 callers=1 calls=1
   calls: sub_1749820
*/
void sub_1675280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675280ULL || rel >= 0x16752f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016752f0 size=128 callers=1 calls=1
   calls: sub_17498a0
*/
void sub_16752f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16752f0ULL || rel >= 0x1675370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675370 size=256 callers=1 calls=4
   calls: sub_165e060, sub_165e140, sub_1674ee0, sub_1749fd0
*/
void sub_1675370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675370ULL || rel >= 0x1675470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675470 size=176 callers=1 calls=4
   calls: sub_165e060, sub_165e140, sub_1674f90, sub_174a210
*/
void sub_1675470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675470ULL || rel >= 0x1675520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675520 size=96 callers=1 calls=0
*/
void sub_1675520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675520ULL || rel >= 0x1675580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675580 size=96 callers=1 calls=0
*/
void sub_1675580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675580ULL || rel >= 0x16755e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016755e0 size=224 callers=1 calls=2
   calls: sub_165e060, sub_1674ee0
*/
void sub_16755e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16755e0ULL || rel >= 0x16756c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016756c0 size=16 callers=0 calls=0
*/
void sub_16756c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16756c0ULL || rel >= 0x16756d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016756d0 size=176 callers=1 calls=2
   calls: sub_165e060, sub_1674f90
*/
void sub_16756d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16756d0ULL || rel >= 0x1675780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675780 size=96 callers=1 calls=0
*/
void sub_1675780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675780ULL || rel >= 0x16757e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016757e0 size=176 callers=1 calls=0
*/
void sub_16757e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16757e0ULL || rel >= 0x1675890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675890 size=320 callers=1 calls=2
   calls: sub_165e060, sub_1674ee0
*/
void sub_1675890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675890ULL || rel >= 0x16759d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

