/* main functions 011a7150..011c9a30 (148 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 011a7150 size=1088 callers=0 calls=20
   calls: sub_1108910, sub_1109270, sub_1127360, sub_1134fa0, sub_1136f20, sub_113e980, sub_115b870, sub_115bb40, sub_115bdf0, sub_11633e0, sub_116d920, sub_116f1c0
   ... +8 more
*/
void sub_11a7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a7150ULL || rel >= 0x11a7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a7590 size=1120 callers=0 calls=12
   calls: sub_1109270, sub_1127360, sub_11442c0, sub_115bb40, sub_115bbb0, sub_11635b0, sub_1170840, sub_1197110, sub_11971e0, sub_1197470, sub_11a82d0, sub_967240
*/
void sub_11a7590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a7590ULL || rel >= 0x11a79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a79f0 size=576 callers=0 calls=11
   calls: sub_1108910, sub_1127360, sub_1134fa0, sub_11383d0, sub_115ade0, sub_11633e0, sub_116f1c0, sub_116f1d0, sub_1197110, sub_1197210, sub_967240
*/
void sub_11a79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a79f0ULL || rel >= 0x11a7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a7c30 size=16 callers=0 calls=0
*/
void sub_11a7c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a7c30ULL || rel >= 0x11a7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a7c40 size=496 callers=2 calls=8
   calls: sub_1108720, sub_1127360, sub_115b660, sub_1172d30, sub_1174b20, sub_1197180, sub_1197470, sub_bf0820
*/
void sub_11a7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a7c40ULL || rel >= 0x11a7e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a7e30 size=1184 callers=1 calls=7
   calls: sub_113e530, sub_11635b0, sub_1163690, sub_1169720, sub_65d220, sub_972c70, sub_ead150
*/
void sub_11a7e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a7e30ULL || rel >= 0x11a82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a82d0 size=528 callers=1 calls=4
   calls: sub_11097c0, sub_115b660, sub_1197470, sub_bf0820
*/
void sub_11a82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a82d0ULL || rel >= 0x11a84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a84e0 size=16 callers=0 calls=0
*/
void sub_11a84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a84e0ULL || rel >= 0x11a84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a84f0 size=48 callers=0 calls=2
   calls: sub_11971e0, sub_11973a0
*/
void sub_11a84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a84f0ULL || rel >= 0x11a8520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8520 size=416 callers=0 calls=4
   calls: sub_1162de0, sub_1164130, sub_11973a0, sub_967240
*/
void sub_11a8520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8520ULL || rel >= 0x11a86c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a86c0 size=64 callers=0 calls=1
   calls: sub_1164130
*/
void sub_11a86c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a86c0ULL || rel >= 0x11a8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8700 size=96 callers=0 calls=0
*/
void sub_11a8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8700ULL || rel >= 0x11a8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8760 size=96 callers=0 calls=0
*/
void sub_11a8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8760ULL || rel >= 0x11a87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a87c0 size=304 callers=0 calls=0
*/
void sub_11a87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a87c0ULL || rel >= 0x11a88f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a88f0 size=304 callers=0 calls=0
*/
void sub_11a88f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a88f0ULL || rel >= 0x11a8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8a20 size=304 callers=0 calls=0
*/
void sub_11a8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8a20ULL || rel >= 0x11a8b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8b50 size=304 callers=0 calls=0
*/
void sub_11a8b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8b50ULL || rel >= 0x11a8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8c80 size=32 callers=0 calls=0
*/
void sub_11a8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8c80ULL || rel >= 0x11a8ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8ca0 size=16 callers=0 calls=0
*/
void sub_11a8ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8ca0ULL || rel >= 0x11a8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8cb0 size=32 callers=0 calls=0
*/
void sub_11a8cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8cb0ULL || rel >= 0x11a8cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8cd0 size=32 callers=0 calls=0
*/
void sub_11a8cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8cd0ULL || rel >= 0x11a8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8cf0 size=96 callers=0 calls=4
   calls: sub_1160e20, sub_116d920, sub_1197110, sub_11971b0
*/
void sub_11a8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8cf0ULL || rel >= 0x11a8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8d50 size=16 callers=0 calls=0
*/
void sub_11a8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8d50ULL || rel >= 0x11a8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8d60 size=16 callers=0 calls=0
*/
void sub_11a8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8d60ULL || rel >= 0x11a8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8d70 size=16 callers=0 calls=0
*/
void sub_11a8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8d70ULL || rel >= 0x11a8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8d80 size=208 callers=0 calls=0
*/
void sub_11a8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8d80ULL || rel >= 0x11a8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8e50 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11a8e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8e50ULL || rel >= 0x11a8e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a8e90 size=448 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11a8e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a8e90ULL || rel >= 0x11a9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9050 size=192 callers=0 calls=3
   calls: sub_11a6560, sub_59b1f0, sub_59b200
   ref: fi8110_ballthrow01
*/
void fi8110_ballthrow01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9050ULL || rel >= 0x11a9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9110 size=288 callers=0 calls=5
   calls: sub_11a6560, sub_59b090, sub_59b0c0, sub_59b1f0, sub_59b200
   ref: fi_action_trigger
   ref: fi_action_number
*/
void fi_action_trigger_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9110ULL || rel >= 0x11a9230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9230 size=144 callers=0 calls=3
   calls: sub_11a6560, sub_59b250, sub_5b9220
*/
void sub_11a9230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9230ULL || rel >= 0x11a92c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a92c0 size=144 callers=0 calls=3
   calls: sub_11a6560, sub_59b250, sub_5b9220
*/
void sub_11a92c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a92c0ULL || rel >= 0x11a9350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9350 size=240 callers=0 calls=0
*/
void sub_11a9350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9350ULL || rel >= 0x11a9440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9440 size=240 callers=0 calls=0
*/
void sub_11a9440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9440ULL || rel >= 0x11a9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9530 size=240 callers=0 calls=0
*/
void sub_11a9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9530ULL || rel >= 0x11a9620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9620 size=240 callers=0 calls=0
*/
void sub_11a9620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9620ULL || rel >= 0x11a9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9710 size=240 callers=0 calls=0
*/
void sub_11a9710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9710ULL || rel >= 0x11a9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9800 size=32 callers=0 calls=0
*/
void sub_11a9800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9800ULL || rel >= 0x11a9820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9820 size=16 callers=0 calls=0
*/
void sub_11a9820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9820ULL || rel >= 0x11a9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9830 size=32 callers=0 calls=0
*/
void sub_11a9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9830ULL || rel >= 0x11a9850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9850 size=32 callers=0 calls=0
*/
void sub_11a9850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9850ULL || rel >= 0x11a9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9870 size=160 callers=0 calls=0
*/
void sub_11a9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9870ULL || rel >= 0x11a9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9910 size=80 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11a9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9910ULL || rel >= 0x11a9960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9960 size=448 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11a9960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9960ULL || rel >= 0x11a9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9b20 size=208 callers=0 calls=10
   calls: sub_1108720, sub_116cc60, sub_116d920, sub_1172730, sub_1172d80, sub_1197180, sub_11971b0, sub_11973d0, sub_1197470, sub_11aaa70
*/
void sub_11a9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9b20ULL || rel >= 0x11a9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9bf0 size=576 callers=0 calls=10
   calls: sub_113e980, sub_116f460, sub_1172950, sub_1173110, sub_11970d0, sub_1197180, sub_1197210, sub_11aa9c0, sub_11aaa70, sub_612ef0
*/
void sub_11a9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9bf0ULL || rel >= 0x11a9e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011a9e30 size=480 callers=0 calls=10
   calls: sub_11364c0, sub_116d920, sub_1172eb0, sub_1197110, sub_1197180, sub_11971b0, sub_11973d0, sub_11aaa70, sub_11aab00, sub_967240
*/
void sub_11a9e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a9e30ULL || rel >= 0x11aa010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aa010 size=2480 callers=0 calls=33
   calls: sub_1129060, sub_112ea00, sub_11364b0, sub_11364c0, sub_113e980, sub_11635b0, sub_116cce0, sub_116d900, sub_116d920, sub_116ddb0, sub_116e000, sub_11710c0
   ... +21 more
   ref: Pokemon/EffectStart
   ref: @Play_Camp_Throw_Ball
*/
void EffectStart_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aa010ULL || rel >= 0x11aa9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aa9c0 size=176 callers=2 calls=8
   calls: sub_110c910, sub_1134fa0, sub_11719d0, sub_1172690, sub_1174cc0, sub_1197110, sub_1197180, sub_11abfa0
*/
void sub_11aa9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aa9c0ULL || rel >= 0x11aaa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aaa70 size=144 callers=8 calls=4
   calls: sub_1136450, sub_1137070, sub_11441c0, sub_1197110
*/
void sub_11aaa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aaa70ULL || rel >= 0x11aab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aab00 size=480 callers=2 calls=7
   calls: sub_1127360, sub_1144140, sub_115ade0, sub_115b660, sub_11633e0, sub_1197110, sub_967240
*/
void sub_11aab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aab00ULL || rel >= 0x11aace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aace0 size=256 callers=0 calls=9
   calls: sub_1137070, sub_11383d0, sub_1162de0, sub_11719d0, sub_1172d30, sub_1174b20, sub_1197110, sub_1197180, sub_11aaa70
*/
void sub_11aace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aace0ULL || rel >= 0x11aade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aade0 size=96 callers=0 calls=5
   calls: sub_116f1c0, sub_1197140, sub_1197210, sub_11973a0, sub_59a520
*/
void sub_11aade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aade0ULL || rel >= 0x11aae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aae40 size=16 callers=0 calls=0
*/
void sub_11aae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aae40ULL || rel >= 0x11aae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aae50 size=384 callers=0 calls=13
   calls: sub_1129060, sub_1160e20, sub_1162eb0, sub_1164130, sub_116d920, sub_1172950, sub_11729e0, sub_1172fb0, sub_1197110, sub_1197180, sub_11971b0, sub_11aa9c0
   ... +1 more
   ref: Play_Camp_Get_Ball
*/
void Play_Camp_Get_Ball_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aae50ULL || rel >= 0x11aafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aafd0 size=96 callers=0 calls=0
*/
void sub_11aafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aafd0ULL || rel >= 0x11ab030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab030 size=96 callers=0 calls=0
*/
void sub_11ab030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab030ULL || rel >= 0x11ab090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab090 size=304 callers=0 calls=0
*/
void sub_11ab090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab090ULL || rel >= 0x11ab1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab1c0 size=304 callers=0 calls=0
*/
void sub_11ab1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab1c0ULL || rel >= 0x11ab2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab2f0 size=304 callers=0 calls=0
*/
void sub_11ab2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab2f0ULL || rel >= 0x11ab420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab420 size=304 callers=0 calls=0
*/
void sub_11ab420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab420ULL || rel >= 0x11ab550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab550 size=32 callers=0 calls=0
*/
void sub_11ab550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab550ULL || rel >= 0x11ab570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab570 size=16 callers=0 calls=0
*/
void sub_11ab570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab570ULL || rel >= 0x11ab580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab580 size=32 callers=0 calls=0
*/
void sub_11ab580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab580ULL || rel >= 0x11ab5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab5a0 size=32 callers=0 calls=0
*/
void sub_11ab5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab5a0ULL || rel >= 0x11ab5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab5c0 size=512 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bf0820
*/
void sub_11ab5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab5c0ULL || rel >= 0x11ab7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab7c0 size=16 callers=0 calls=0
*/
void sub_11ab7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab7c0ULL || rel >= 0x11ab7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab7d0 size=16 callers=0 calls=0
*/
void sub_11ab7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab7d0ULL || rel >= 0x11ab7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab7e0 size=16 callers=0 calls=0
*/
void sub_11ab7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab7e0ULL || rel >= 0x11ab7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab7f0 size=16 callers=0 calls=0
*/
void sub_11ab7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab7f0ULL || rel >= 0x11ab800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab800 size=80 callers=0 calls=3
   calls: sub_116d920, sub_11971b0, sub_11973d0
*/
void sub_11ab800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab800ULL || rel >= 0x11ab850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab850 size=16 callers=0 calls=0
*/
void sub_11ab850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab850ULL || rel >= 0x11ab860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab860 size=48 callers=0 calls=0
*/
void sub_11ab860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab860ULL || rel >= 0x11ab890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab890 size=48 callers=0 calls=0
*/
void sub_11ab890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab890ULL || rel >= 0x11ab8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab8c0 size=80 callers=0 calls=3
   calls: sub_116d920, sub_11971b0, sub_11973d0
*/
void sub_11ab8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab8c0ULL || rel >= 0x11ab910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab910 size=16 callers=0 calls=0
*/
void sub_11ab910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab910ULL || rel >= 0x11ab920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab920 size=48 callers=0 calls=0
*/
void sub_11ab920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab920ULL || rel >= 0x11ab950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab950 size=48 callers=0 calls=0
*/
void sub_11ab950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab950ULL || rel >= 0x11ab980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ab980 size=1216 callers=0 calls=8
   calls: Play_Camp_ClosenessUp, sub_1129060, sub_112ea00, sub_11719d0, sub_1172690, sub_1172eb0, sub_1172f50, sub_1197110
   ref: Play_Camp_Throw_Ball
*/
void Play_Camp_Throw_Ball(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ab980ULL || rel >= 0x11abe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011abe40 size=64 callers=0 calls=0
*/
void sub_11abe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11abe40ULL || rel >= 0x11abe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011abe80 size=48 callers=0 calls=0
*/
void sub_11abe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11abe80ULL || rel >= 0x11abeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011abeb0 size=32 callers=0 calls=0
*/
void sub_11abeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11abeb0ULL || rel >= 0x11abed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011abed0 size=208 callers=0 calls=0
*/
void sub_11abed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11abed0ULL || rel >= 0x11abfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011abfa0 size=336 callers=1 calls=1
   calls: sub_116bb10
*/
void sub_11abfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11abfa0ULL || rel >= 0x11ac0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ac0f0 size=736 callers=0 calls=4
   calls: sub_762930, sub_762940, sub_7670a0, sub_9fccc0
   ref: bin/pokemon_data/pokecamp/ball/
   ref: poke_ball_%04d_%02d_0.bin
   ref: poke_ball_%04d_00_0.bin
   ref: poke_ball_%04d_00_%01d.bin
   ref: poke_ball_%04d_%02d_%01d.bin
*/
void unnamed_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ac0f0ULL || rel >= 0x11ac3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ac3d0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_11ac3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ac3d0ULL || rel >= 0x11ac490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ac490 size=32 callers=0 calls=0
*/
void sub_11ac490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ac490ULL || rel >= 0x11ac4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ac4b0 size=160 callers=2 calls=2
   calls: sub_1162c30, sub_11afaf0
*/
void sub_11ac4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ac4b0ULL || rel >= 0x11ac550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ac550 size=176 callers=0 calls=4
   calls: sub_11365d0, sub_1136fc0, sub_116f1d0, sub_1197110
*/
void sub_11ac550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ac550ULL || rel >= 0x11ac600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ac600 size=64 callers=0 calls=4
   calls: sub_11365d0, sub_1170840, sub_1197110, sub_11971e0
*/
void sub_11ac600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ac600ULL || rel >= 0x11ac640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ac640 size=1152 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11ac640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ac640ULL || rel >= 0x11acac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011acac0 size=512 callers=0 calls=15
   calls: sub_1108a50, sub_1127360, sub_1136fc0, sub_113c6a0, sub_115b870, sub_115b9e0, sub_115bbc0, sub_116cc60, sub_11706e0, sub_1170e10, sub_1197110, sub_11971b0
   ... +3 more
*/
void sub_11acac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11acac0ULL || rel >= 0x11accc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011accc0 size=912 callers=0 calls=16
   calls: sub_1108a50, sub_1127360, sub_11365d0, sub_1136fc0, sub_1137490, sub_115b9e0, sub_115bbc0, sub_116f1d0, sub_1170e10, sub_1197110, sub_11971e0, sub_11973d0
   ... +4 more
*/
void sub_11accc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11accc0ULL || rel >= 0x11ad050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ad050 size=1760 callers=0 calls=29
   calls: Play_Camp_ClosenessUp, sub_1108a50, sub_1127360, sub_1129060, sub_11365d0, sub_1136fc0, sub_1137490, sub_113c6a0, sub_113e980, sub_115b870, sub_115b9e0, sub_115bbc0
   ... +17 more
   ref: Pokemon/EffectStart
   ref: @Play_Camp_PlayingHit
*/
void EffectStart_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ad050ULL || rel >= 0x11ad730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ad730 size=48 callers=0 calls=1
   calls: sub_113e980
*/
void sub_11ad730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ad730ULL || rel >= 0x11ad760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ad760 size=80 callers=0 calls=3
   calls: sub_113e980, sub_116c3e0, sub_11971b0
*/
void sub_11ad760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ad760ULL || rel >= 0x11ad7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ad7b0 size=1312 callers=0 calls=23
   calls: sub_1127360, sub_11365d0, sub_1136fc0, sub_1137490, sub_113e980, sub_115b9e0, sub_115bbc0, sub_11635b0, sub_1163690, sub_116cc60, sub_116d920, sub_116f1d0
   ... +11 more
*/
void sub_11ad7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ad7b0ULL || rel >= 0x11adcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011adcd0 size=256 callers=0 calls=10
   calls: sub_11364b0, sub_11364c0, sub_11635b0, sub_116cc60, sub_116d920, sub_1176e00, sub_1197110, sub_11971b0, sub_11973d0, sub_11aea20
*/
void sub_11adcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11adcd0ULL || rel >= 0x11addd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011addd0 size=176 callers=0 calls=7
   calls: Play_Camp_ClosenessUp, sub_11364c0, sub_116c3e0, sub_1197110, sub_11971b0, sub_11ae6b0, sub_11aea20
*/
void sub_11addd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11addd0ULL || rel >= 0x11ade80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ade80 size=112 callers=0 calls=5
   calls: sub_11365d0, sub_116cc60, sub_116f1d0, sub_1197110, sub_11971b0
*/
void sub_11ade80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ade80ULL || rel >= 0x11adef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011adef0 size=464 callers=0 calls=9
   calls: sub_1137490, sub_113c6a0, sub_115b870, sub_1161280, sub_116cc60, sub_11706e0, sub_1197110, sub_11971b0, sub_11971e0
*/
void sub_11adef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11adef0ULL || rel >= 0x11ae0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ae0c0 size=1184 callers=0 calls=18
   calls: sub_11091d0, sub_1127360, sub_1136fc0, sub_1137490, sub_11397d0, sub_113c6a0, sub_115b870, sub_115b9e0, sub_115bbc0, sub_1162de0, sub_11706e0, sub_1170e10
   ... +6 more
*/
void sub_11ae0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ae0c0ULL || rel >= 0x11ae560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ae560 size=336 callers=0 calls=8
   calls: sub_11365d0, sub_113c6a0, sub_115b870, sub_1162de0, sub_116f1d0, sub_11706e0, sub_1197110, sub_11971e0
*/
void sub_11ae560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ae560ULL || rel >= 0x11ae6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ae6b0 size=880 callers=6 calls=7
   calls: sub_1127360, sub_1136fc0, sub_115b9e0, sub_115bbc0, sub_11635b0, sub_1197110, sub_11aef30
*/
void sub_11ae6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ae6b0ULL || rel >= 0x11aea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aea20 size=1296 callers=2 calls=7
   calls: sub_1127360, sub_112e830, sub_112ea00, sub_1136fc0, sub_11635b0, sub_1163860, sub_1197110
*/
void sub_11aea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aea20ULL || rel >= 0x11aef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011aef30 size=2112 callers=1 calls=13
   calls: sub_1127360, sub_112e830, sub_112ea00, sub_11364b0, sub_1136fc0, sub_115b4a0, sub_115b9e0, sub_115bbc0, sub_11635b0, sub_1176e00, sub_1197110, sub_11b2a60
   ... +1 more
*/
void sub_11aef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11aef30ULL || rel >= 0x11af770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011af770 size=224 callers=4 calls=1
   calls: sub_11b17f0
*/
void sub_11af770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11af770ULL || rel >= 0x11af850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011af850 size=592 callers=0 calls=0
*/
void sub_11af850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11af850ULL || rel >= 0x11afaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011afaa0 size=16 callers=0 calls=0
*/
void sub_11afaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11afaa0ULL || rel >= 0x11afab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011afab0 size=16 callers=0 calls=0
*/
void sub_11afab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11afab0ULL || rel >= 0x11afac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011afac0 size=16 callers=0 calls=0
*/
void sub_11afac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11afac0ULL || rel >= 0x11afad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011afad0 size=16 callers=0 calls=0
*/
void sub_11afad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11afad0ULL || rel >= 0x11afae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011afae0 size=16 callers=0 calls=0
*/
void sub_11afae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11afae0ULL || rel >= 0x11afaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011afaf0 size=240 callers=2 calls=1
   calls: sub_11afbe0
*/
void sub_11afaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11afaf0ULL || rel >= 0x11afbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011afbe0 size=2224 callers=1 calls=4
   calls: sub_11b0490, sub_11b0690, sub_11b0890, sub_11b0aa0
*/
void sub_11afbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11afbe0ULL || rel >= 0x11b0490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b0490 size=512 callers=2 calls=0
*/
void sub_11b0490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b0490ULL || rel >= 0x11b0690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b0690 size=512 callers=2 calls=0
*/
void sub_11b0690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b0690ULL || rel >= 0x11b0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b0890 size=528 callers=2 calls=0
*/
void sub_11b0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b0890ULL || rel >= 0x11b0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b0aa0 size=528 callers=2 calls=0
*/
void sub_11b0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b0aa0ULL || rel >= 0x11b0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b0cb0 size=32 callers=0 calls=0
*/
void sub_11b0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b0cb0ULL || rel >= 0x11b0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b0cd0 size=16 callers=0 calls=0
*/
void sub_11b0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b0cd0ULL || rel >= 0x11b0ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b0ce0 size=32 callers=0 calls=0
*/
void sub_11b0ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b0ce0ULL || rel >= 0x11b0d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b0d00 size=32 callers=0 calls=0
*/
void sub_11b0d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b0d00ULL || rel >= 0x11b0d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b0d20 size=1968 callers=0 calls=28
   calls: Play_Camp_PlayingHit, sub_1127360, sub_11274b0, sub_112ea00, sub_1131f60, sub_11364b0, sub_1136fc0, sub_113c6a0, sub_113d860, sub_115b9e0, sub_115bbc0, sub_115c910
   ... +16 more
   ref: EffCenter01
*/
void EffCenter01_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b0d20ULL || rel >= 0x11b14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b14d0 size=16 callers=0 calls=0
*/
void sub_11b14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b14d0ULL || rel >= 0x11b14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b14e0 size=288 callers=1 calls=2
   calls: sub_11b1600, sub_1c0
*/
void sub_11b14e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b14e0ULL || rel >= 0x11b1600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b1600 size=304 callers=1 calls=0
*/
void sub_11b1600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b1600ULL || rel >= 0x11b1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b1730 size=16 callers=0 calls=0
*/
void sub_11b1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b1730ULL || rel >= 0x11b1740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b1740 size=16 callers=0 calls=0
*/
void sub_11b1740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b1740ULL || rel >= 0x11b1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b1750 size=112 callers=0 calls=1
   calls: sub_11633e0
*/
void sub_11b1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b1750ULL || rel >= 0x11b17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b17c0 size=16 callers=0 calls=0
*/
void sub_11b17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b17c0ULL || rel >= 0x11b17d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b17d0 size=16 callers=0 calls=0
*/
void sub_11b17d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b17d0ULL || rel >= 0x11b17e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b17e0 size=16 callers=0 calls=0
*/
void sub_11b17e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b17e0ULL || rel >= 0x11b17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b17f0 size=1248 callers=1 calls=4
   calls: sub_11b0490, sub_11b0690, sub_11b0890, sub_11b0aa0
*/
void sub_11b17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b17f0ULL || rel >= 0x11b1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b1cd0 size=256 callers=0 calls=0
*/
void sub_11b1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b1cd0ULL || rel >= 0x11b1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b1dd0 size=192 callers=2 calls=2
   calls: sub_11afaf0, sub_5db1b0
*/
void sub_11b1dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b1dd0ULL || rel >= 0x11b1e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b1e90 size=2992 callers=0 calls=14
   calls: sub_1128e40, sub_112e830, sub_112ea00, sub_11af770, sub_13576a0, sub_13576d0, sub_65d220, sub_971950, sub_972c70, sub_ea3d10, sub_ea3d20, sub_ea4800
   ... +2 more
   ref: Play_Camp_SwingBell
*/
void Play_Camp_SwingBell(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b1e90ULL || rel >= 0x11b2a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b2a40 size=32 callers=18 calls=0
*/
void sub_11b2a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b2a40ULL || rel >= 0x11b2a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b2a60 size=320 callers=11 calls=0
*/
void sub_11b2a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b2a60ULL || rel >= 0x11b2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b2ba0 size=352 callers=3 calls=5
   calls: sub_59a7b0, sub_59bee0, sub_619060, sub_b44bb0, sub_ea3d20
*/
void sub_11b2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b2ba0ULL || rel >= 0x11b2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b2d00 size=256 callers=1 calls=3
   calls: sub_59a7b0, sub_b44bb0, sub_ea3d20
*/
void sub_11b2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b2d00ULL || rel >= 0x11b2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b2e00 size=192 callers=1 calls=0
*/
void sub_11b2e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b2e00ULL || rel >= 0x11b2ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b2ec0 size=208 callers=2 calls=3
   calls: sub_59a7b0, sub_b44bb0, sub_ea3d20
*/
void sub_11b2ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b2ec0ULL || rel >= 0x11b2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b2f90 size=48 callers=1 calls=0
*/
void sub_11b2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b2f90ULL || rel >= 0x11b2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b2fc0 size=368 callers=1 calls=6
   calls: sub_1128e40, sub_59b090, sub_59b0c0, sub_59b1f0, sub_59b200, sub_b44bb0
   ref: Play_Camp_PlayingHit
   ref: fi_action_trigger
   ref: fi_action_number
*/
void Play_Camp_PlayingHit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b2fc0ULL || rel >= 0x11b3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3130 size=576 callers=0 calls=0
*/
void sub_11b3130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3130ULL || rel >= 0x11b3370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3370 size=16 callers=0 calls=0
*/
void sub_11b3370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3370ULL || rel >= 0x11b3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3380 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11b3380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3380ULL || rel >= 0x11b3430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3430 size=16 callers=0 calls=0
*/
void sub_11b3430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3430ULL || rel >= 0x11b3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3440 size=16 callers=0 calls=0
*/
void sub_11b3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3440ULL || rel >= 0x11b3450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3450 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11b3450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3450ULL || rel >= 0x11b3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3500 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11b3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3500ULL || rel >= 0x11b35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b35b0 size=16 callers=0 calls=0
*/
void sub_11b35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b35b0ULL || rel >= 0x11b35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b35c0 size=16 callers=0 calls=0
*/
void sub_11b35c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b35c0ULL || rel >= 0x11b35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b35d0 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11b35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b35d0ULL || rel >= 0x11b3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3610 size=160 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11b3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3610ULL || rel >= 0x11b36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b36b0 size=48 callers=0 calls=2
   calls: sub_116cc60, sub_11971b0
*/
void sub_11b36b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b36b0ULL || rel >= 0x11b36e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b36e0 size=240 callers=0 calls=0
*/
void sub_11b36e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b36e0ULL || rel >= 0x11b37d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b37d0 size=240 callers=0 calls=0
*/
void sub_11b37d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b37d0ULL || rel >= 0x11b38c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b38c0 size=240 callers=0 calls=0
*/
void sub_11b38c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b38c0ULL || rel >= 0x11b39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b39b0 size=240 callers=0 calls=0
*/
void sub_11b39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b39b0ULL || rel >= 0x11b3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3aa0 size=240 callers=0 calls=0
*/
void sub_11b3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3aa0ULL || rel >= 0x11b3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3b90 size=32 callers=0 calls=0
*/
void sub_11b3b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3b90ULL || rel >= 0x11b3bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3bb0 size=16 callers=0 calls=0
*/
void sub_11b3bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3bb0ULL || rel >= 0x11b3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3bc0 size=32 callers=0 calls=0
*/
void sub_11b3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3bc0ULL || rel >= 0x11b3be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3be0 size=32 callers=0 calls=0
*/
void sub_11b3be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3be0ULL || rel >= 0x11b3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3c00 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11b3c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3c00ULL || rel >= 0x11b3c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3c40 size=352 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11b3c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3c40ULL || rel >= 0x11b3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3da0 size=48 callers=0 calls=1
   calls: sub_113e980
*/
void sub_11b3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3da0ULL || rel >= 0x11b3dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b3dd0 size=1872 callers=0 calls=16
   calls: sub_11274b0, sub_1131f60, sub_113e530, sub_115a6f0, sub_11635b0, sub_1163690, sub_1169720, sub_11a6560, sub_11a6660, sub_11b4f50, sub_1306f20, sub_59b170
   ... +4 more
   ref: fi8000_cookwait01
*/
void fi8000_cookwait01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b3dd0ULL || rel >= 0x11b4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4520 size=16 callers=0 calls=0
*/
void sub_11b4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4520ULL || rel >= 0x11b4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4530 size=288 callers=0 calls=6
   calls: sub_115ba20, sub_1191d30, sub_11a6560, sub_11a6660, sub_11b64f0, sub_967240
*/
void sub_11b4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4530ULL || rel >= 0x11b4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4650 size=992 callers=0 calls=13
   calls: sub_11274b0, sub_1131f60, sub_115ba20, sub_1191d30, sub_11a6560, sub_11a6660, sub_11b4f50, sub_11b64f0, sub_1306f20, sub_59b170, sub_59b1a0, sub_967240
   ... +1 more
   ref: fi8000_cookwait01
*/
void fi8000_cookwait01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4650ULL || rel >= 0x11b4a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4a30 size=240 callers=0 calls=0
*/
void sub_11b4a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4a30ULL || rel >= 0x11b4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4b20 size=240 callers=0 calls=0
*/
void sub_11b4b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4b20ULL || rel >= 0x11b4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4c10 size=240 callers=0 calls=0
*/
void sub_11b4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4c10ULL || rel >= 0x11b4d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4d00 size=240 callers=0 calls=0
*/
void sub_11b4d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4d00ULL || rel >= 0x11b4df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4df0 size=240 callers=0 calls=0
*/
void sub_11b4df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4df0ULL || rel >= 0x11b4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4ee0 size=32 callers=0 calls=0
*/
void sub_11b4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4ee0ULL || rel >= 0x11b4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4f00 size=16 callers=0 calls=0
*/
void sub_11b4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4f00ULL || rel >= 0x11b4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4f10 size=32 callers=0 calls=0
*/
void sub_11b4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4f10ULL || rel >= 0x11b4f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4f30 size=32 callers=0 calls=0
*/
void sub_11b4f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4f30ULL || rel >= 0x11b4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b4f50 size=512 callers=3 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_11b4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b4f50ULL || rel >= 0x11b5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b5150 size=16 callers=0 calls=0
*/
void sub_11b5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b5150ULL || rel >= 0x11b5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b5160 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_11b5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b5160ULL || rel >= 0x11b5190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b5190 size=16 callers=0 calls=0
*/
void sub_11b5190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b5190ULL || rel >= 0x11b51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b51a0 size=16 callers=0 calls=0
*/
void sub_11b51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b51a0ULL || rel >= 0x11b51b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b51b0 size=16 callers=0 calls=0
*/
void sub_11b51b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b51b0ULL || rel >= 0x11b51c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b51c0 size=112 callers=0 calls=2
   calls: sub_65cd70, sub_65cd90
*/
void sub_11b51c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b51c0ULL || rel >= 0x11b5230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b5230 size=16 callers=0 calls=0
*/
void sub_11b5230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b5230ULL || rel >= 0x11b5240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b5240 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_11b5240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b5240ULL || rel >= 0x11b5280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b5280 size=32 callers=0 calls=0
*/
void sub_11b5280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b5280ULL || rel >= 0x11b52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b52a0 size=16 callers=0 calls=0
*/
void sub_11b52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b52a0ULL || rel >= 0x11b52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b52b0 size=16 callers=0 calls=0
*/
void sub_11b52b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b52b0ULL || rel >= 0x11b52c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b52c0 size=112 callers=0 calls=2
   calls: sub_65cd70, sub_65cd90
*/
void sub_11b52c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b52c0ULL || rel >= 0x11b5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b5330 size=160 callers=0 calls=0
*/
void sub_11b5330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b5330ULL || rel >= 0x11b53d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b53d0 size=272 callers=2 calls=3
   calls: sub_11b54e0, sub_5db1b0, sub_65d700
*/
void sub_11b53d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b53d0ULL || rel >= 0x11b54e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b54e0 size=480 callers=1 calls=0
*/
void sub_11b54e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b54e0ULL || rel >= 0x11b56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b56c0 size=480 callers=0 calls=0
*/
void sub_11b56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b56c0ULL || rel >= 0x11b58a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b58a0 size=16 callers=0 calls=0
*/
void sub_11b58a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b58a0ULL || rel >= 0x11b58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b58b0 size=672 callers=1 calls=4
   calls: sub_11b6aa0, sub_11b6cb0, sub_619060, sub_967240
*/
void sub_11b58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b58b0ULL || rel >= 0x11b5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b5b50 size=672 callers=1 calls=4
   calls: sub_11b6e70, sub_11b7080, sub_68da60, sub_967240
*/
void sub_11b5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b5b50ULL || rel >= 0x11b5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b5df0 size=896 callers=1 calls=1
   calls: sub_967240
*/
void sub_11b5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b5df0ULL || rel >= 0x11b6170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6170 size=896 callers=1 calls=1
   calls: sub_967240
*/
void sub_11b6170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6170ULL || rel >= 0x11b64f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b64f0 size=672 callers=3 calls=3
   calls: sub_619060, sub_68da60, sub_967240
*/
void sub_11b64f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b64f0ULL || rel >= 0x11b6790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6790 size=368 callers=0 calls=0
*/
void sub_11b6790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6790ULL || rel >= 0x11b6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6900 size=16 callers=0 calls=0
*/
void sub_11b6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6900ULL || rel >= 0x11b6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6910 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11b6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6910ULL || rel >= 0x11b6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6980 size=16 callers=0 calls=0
*/
void sub_11b6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6980ULL || rel >= 0x11b6990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6990 size=16 callers=0 calls=0
*/
void sub_11b6990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6990ULL || rel >= 0x11b69a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b69a0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11b69a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b69a0ULL || rel >= 0x11b6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6a10 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11b6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6a10ULL || rel >= 0x11b6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6a80 size=16 callers=0 calls=0
*/
void sub_11b6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6a80ULL || rel >= 0x11b6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6a90 size=16 callers=0 calls=0
*/
void sub_11b6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6a90ULL || rel >= 0x11b6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6aa0 size=528 callers=1 calls=1
   calls: sub_11b6cb0
*/
void sub_11b6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6aa0ULL || rel >= 0x11b6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6cb0 size=448 callers=2 calls=1
   calls: sub_967240
*/
void sub_11b6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6cb0ULL || rel >= 0x11b6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b6e70 size=528 callers=1 calls=1
   calls: sub_11b7080
*/
void sub_11b6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b6e70ULL || rel >= 0x11b7080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7080 size=448 callers=2 calls=1
   calls: sub_967240
*/
void sub_11b7080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7080ULL || rel >= 0x11b7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7240 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11b7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7240ULL || rel >= 0x11b7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7280 size=160 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11b7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7280ULL || rel >= 0x11b7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7320 size=336 callers=0 calls=10
   calls: camp_delicious_2, sub_11361a0, sub_116cce0, sub_116f1d0, sub_116f370, sub_116f450, sub_116f460, sub_1197110, sub_1197210, sub_5b9220
*/
void sub_11b7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7320ULL || rel >= 0x11b7470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7470 size=784 callers=0 calls=10
   calls: fi_move_speed, sub_112e3e0, sub_1163930, sub_1164130, sub_1197110, sub_11971b0, sub_5cf8e0, sub_5cf8f0, sub_967240, sub_bf0820
*/
void sub_11b7470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7470ULL || rel >= 0x11b7780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7780 size=768 callers=0 calls=9
   calls: sub_112e3e0, sub_1139900, sub_1164130, sub_116f1d0, sub_1197110, sub_1197210, sub_5cf8f0, sub_967240, sub_bf0820
*/
void sub_11b7780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7780ULL || rel >= 0x11b7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7a80 size=16 callers=0 calls=0
*/
void sub_11b7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7a80ULL || rel >= 0x11b7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7a90 size=16 callers=0 calls=0
*/
void sub_11b7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7a90ULL || rel >= 0x11b7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7aa0 size=240 callers=0 calls=0
*/
void sub_11b7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7aa0ULL || rel >= 0x11b7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7b90 size=240 callers=0 calls=0
*/
void sub_11b7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7b90ULL || rel >= 0x11b7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7c80 size=240 callers=0 calls=0
*/
void sub_11b7c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7c80ULL || rel >= 0x11b7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7d70 size=240 callers=0 calls=0
*/
void sub_11b7d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7d70ULL || rel >= 0x11b7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7e60 size=240 callers=0 calls=0
*/
void sub_11b7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7e60ULL || rel >= 0x11b7f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7f50 size=32 callers=0 calls=0
*/
void sub_11b7f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7f50ULL || rel >= 0x11b7f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7f70 size=16 callers=0 calls=0
*/
void sub_11b7f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7f70ULL || rel >= 0x11b7f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7f80 size=32 callers=0 calls=0
*/
void sub_11b7f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7f80ULL || rel >= 0x11b7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7fa0 size=32 callers=0 calls=0
*/
void sub_11b7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7fa0ULL || rel >= 0x11b7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b7fc0 size=208 callers=0 calls=0
*/
void sub_11b7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b7fc0ULL || rel >= 0x11b8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8090 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_11b8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8090ULL || rel >= 0x11b80d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b80d0 size=160 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_11b80d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b80d0ULL || rel >= 0x11b8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8170 size=16 callers=0 calls=0
*/
void sub_11b8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8170ULL || rel >= 0x11b8180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8180 size=112 callers=0 calls=9
   calls: sub_1136250, sub_1137070, sub_116d920, sub_116f1c0, sub_1172e40, sub_1197110, sub_1197180, sub_11971b0, sub_1197210
*/
void sub_11b8180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8180ULL || rel >= 0x11b81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b81f0 size=240 callers=0 calls=0
*/
void sub_11b81f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b81f0ULL || rel >= 0x11b82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b82e0 size=240 callers=0 calls=0
*/
void sub_11b82e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b82e0ULL || rel >= 0x11b83d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b83d0 size=240 callers=0 calls=0
*/
void sub_11b83d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b83d0ULL || rel >= 0x11b84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b84c0 size=240 callers=0 calls=0
*/
void sub_11b84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b84c0ULL || rel >= 0x11b85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b85b0 size=240 callers=0 calls=0
*/
void sub_11b85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b85b0ULL || rel >= 0x11b86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b86a0 size=32 callers=0 calls=0
*/
void sub_11b86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b86a0ULL || rel >= 0x11b86c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b86c0 size=16 callers=0 calls=0
*/
void sub_11b86c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b86c0ULL || rel >= 0x11b86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b86d0 size=32 callers=0 calls=0
*/
void sub_11b86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b86d0ULL || rel >= 0x11b86f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b86f0 size=32 callers=0 calls=0
*/
void sub_11b86f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b86f0ULL || rel >= 0x11b8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8710 size=208 callers=0 calls=0
*/
void sub_11b8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8710ULL || rel >= 0x11b87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b87e0 size=352 callers=0 calls=4
   calls: sub_1128e40, sub_1130c00, sub_1130c10, sub_612f70
   ref: Play_Camp_SwingBell
*/
void Play_Camp_SwingBell_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b87e0ULL || rel >= 0x11b8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8940 size=256 callers=0 calls=6
   calls: sub_11300b0, sub_1130370, sub_1130380, sub_59a7a0, sub_612ef0, sub_619060
   ref: PartsB
*/
void PartsB(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8940ULL || rel >= 0x11b8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8a40 size=64 callers=0 calls=1
   calls: sub_1130340
*/
void sub_11b8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8a40ULL || rel >= 0x11b8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8a80 size=16 callers=0 calls=0
*/
void sub_11b8a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8a80ULL || rel >= 0x11b8a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8a90 size=112 callers=0 calls=1
   calls: sub_112f710
*/
void sub_11b8a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8a90ULL || rel >= 0x11b8b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8b00 size=16 callers=0 calls=0
*/
void sub_11b8b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8b00ULL || rel >= 0x11b8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8b10 size=16 callers=0 calls=0
*/
void sub_11b8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8b10ULL || rel >= 0x11b8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8b20 size=240 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11b8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8b20ULL || rel >= 0x11b8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8c10 size=240 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11b8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8c10ULL || rel >= 0x11b8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8d00 size=16 callers=0 calls=0
*/
void sub_11b8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8d00ULL || rel >= 0x11b8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8d10 size=16 callers=0 calls=0
*/
void sub_11b8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8d10ULL || rel >= 0x11b8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8d20 size=16 callers=0 calls=0
*/
void sub_11b8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8d20ULL || rel >= 0x11b8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8d30 size=16 callers=0 calls=0
*/
void sub_11b8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8d30ULL || rel >= 0x11b8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8d40 size=16 callers=0 calls=0
*/
void sub_11b8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8d40ULL || rel >= 0x11b8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8d50 size=16 callers=0 calls=0
*/
void sub_11b8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8d50ULL || rel >= 0x11b8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8d60 size=112 callers=0 calls=1
   calls: sub_11b8ff0
*/
void sub_11b8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8d60ULL || rel >= 0x11b8dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8dd0 size=16 callers=0 calls=0
*/
void sub_11b8dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8dd0ULL || rel >= 0x11b8de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8de0 size=16 callers=0 calls=0
*/
void sub_11b8de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8de0ULL || rel >= 0x11b8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8df0 size=240 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11b8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8df0ULL || rel >= 0x11b8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8ee0 size=240 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11b8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8ee0ULL || rel >= 0x11b8fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8fd0 size=16 callers=0 calls=0
*/
void sub_11b8fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8fd0ULL || rel >= 0x11b8fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8fe0 size=16 callers=0 calls=0
*/
void sub_11b8fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8fe0ULL || rel >= 0x11b8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b8ff0 size=176 callers=5 calls=1
   calls: sub_bf0820
*/
void sub_11b8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b8ff0ULL || rel >= 0x11b90a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b90a0 size=160 callers=1 calls=0
*/
void sub_11b90a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b90a0ULL || rel >= 0x11b9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b9140 size=2256 callers=2 calls=9
   calls: sub_11b9a10, sub_11b9bb0, sub_11b9db0, sub_11b9f10, sub_12fa460, sub_1350f70, sub_76f5d0, sub_7847d0, sub_ead150
*/
void sub_11b9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b9140ULL || rel >= 0x11b9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b9a10 size=416 callers=1 calls=2
   calls: sub_115a750, sub_bf0820
*/
void sub_11b9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b9a10ULL || rel >= 0x11b9bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b9bb0 size=512 callers=1 calls=2
   calls: sub_115ab80, sub_bf0820
*/
void sub_11b9bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b9bb0ULL || rel >= 0x11b9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b9db0 size=336 callers=4 calls=1
   calls: sub_1367a30
*/
void sub_11b9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b9db0ULL || rel >= 0x11b9f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b9f00 size=16 callers=1 calls=0
*/
void sub_11b9f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b9f00ULL || rel >= 0x11b9f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011b9f10 size=400 callers=1 calls=0
*/
void sub_11b9f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11b9f10ULL || rel >= 0x11ba0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba0a0 size=16 callers=2 calls=0
*/
void sub_11ba0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba0a0ULL || rel >= 0x11ba0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba0b0 size=16 callers=0 calls=0
*/
void sub_11ba0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba0b0ULL || rel >= 0x11ba0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba0c0 size=16 callers=0 calls=0
*/
void sub_11ba0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba0c0ULL || rel >= 0x11ba0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba0d0 size=16 callers=0 calls=0
*/
void sub_11ba0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba0d0ULL || rel >= 0x11ba0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba0e0 size=112 callers=0 calls=3
   calls: sub_1108960, sub_1134fa0, sub_bf05e0
*/
void sub_11ba0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba0e0ULL || rel >= 0x11ba150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba150 size=16 callers=0 calls=0
*/
void sub_11ba150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba150ULL || rel >= 0x11ba160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba160 size=16 callers=0 calls=0
*/
void sub_11ba160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba160ULL || rel >= 0x11ba170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba170 size=16 callers=0 calls=0
*/
void sub_11ba170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba170ULL || rel >= 0x11ba180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba180 size=208 callers=0 calls=0
*/
void sub_11ba180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba180ULL || rel >= 0x11ba250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba250 size=1008 callers=1 calls=1
   calls: sub_11bb970
*/
void sub_11ba250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba250ULL || rel >= 0x11ba640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba640 size=16 callers=1 calls=0
*/
void sub_11ba640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba640ULL || rel >= 0x11ba650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba650 size=16 callers=1 calls=0
*/
void sub_11ba650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba650ULL || rel >= 0x11ba660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ba660 size=1376 callers=2 calls=6
   calls: sub_113a8c0, sub_1157ef0, sub_1161550, sub_11babc0, sub_11baf30, sub_bf0820
*/
void sub_11ba660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba660ULL || rel >= 0x11babc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011babc0 size=880 callers=1 calls=10
   calls: sub_110c3e0, sub_1134fa0, sub_1136450, sub_113a1c0, sub_113a530, sub_113a6e0, sub_115b660, sub_11bbe20, sub_967240, sub_bf0820
*/
void sub_11babc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11babc0ULL || rel >= 0x11baf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011baf30 size=144 callers=1 calls=4
   calls: sub_1108a50, sub_1134fa0, sub_113c3e0, sub_113c420
*/
void sub_11baf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11baf30ULL || rel >= 0x11bafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bafc0 size=112 callers=0 calls=0
*/
void sub_11bafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bafc0ULL || rel >= 0x11bb030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb030 size=112 callers=0 calls=0
*/
void sub_11bb030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb030ULL || rel >= 0x11bb0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb0a0 size=112 callers=0 calls=0
*/
void sub_11bb0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb0a0ULL || rel >= 0x11bb110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb110 size=112 callers=0 calls=0
*/
void sub_11bb110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb110ULL || rel >= 0x11bb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb180 size=352 callers=0 calls=4
   calls: sub_1108a50, sub_1134fa0, sub_11611a0, sub_bf0730
*/
void sub_11bb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb180ULL || rel >= 0x11bb2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb2e0 size=16 callers=0 calls=0
*/
void sub_11bb2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb2e0ULL || rel >= 0x11bb2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb2f0 size=16 callers=0 calls=0
*/
void sub_11bb2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb2f0ULL || rel >= 0x11bb300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb300 size=16 callers=0 calls=0
*/
void sub_11bb300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb300ULL || rel >= 0x11bb310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb310 size=256 callers=0 calls=0
*/
void sub_11bb310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb310ULL || rel >= 0x11bb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb410 size=208 callers=0 calls=0
*/
void sub_11bb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb410ULL || rel >= 0x11bb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb4e0 size=368 callers=0 calls=0
*/
void sub_11bb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb4e0ULL || rel >= 0x11bb650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb650 size=800 callers=0 calls=1
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
void skybox_01_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb650ULL || rel >= 0x11bb970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bb970 size=176 callers=1 calls=0
*/
void sub_11bb970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bb970ULL || rel >= 0x11bba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bba20 size=752 callers=0 calls=12
   calls: sub_1119500, sub_11bbd10, sub_1c0, sub_5cf8e0, sub_5cf8f0, sub_5cfaf0, sub_5dd790, sub_5e2930, sub_5e6770, sub_5e7a30, sub_793480, sub_c50b30
   ref: bin/pokemon_data/pokecamp/monohiroi/
*/
void unnamed_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bba20ULL || rel >= 0x11bbd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bbd10 size=240 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_11bbd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bbd10ULL || rel >= 0x11bbe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bbe00 size=32 callers=0 calls=0
*/
void sub_11bbe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bbe00ULL || rel >= 0x11bbe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bbe20 size=672 callers=1 calls=0
*/
void sub_11bbe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bbe20ULL || rel >= 0x11bc0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bc0c0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_11bc0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bc0c0ULL || rel >= 0x11bc190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bc190 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_11bc190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bc190ULL || rel >= 0x11bc260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bc260 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_11bc260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bc260ULL || rel >= 0x11bc330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bc330 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_11bc330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bc330ULL || rel >= 0x11bc400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bc400 size=432 callers=2 calls=3
   calls: sub_11bc5b0, sub_11bdc40, sub_5e2350
*/
void sub_11bc400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bc400ULL || rel >= 0x11bc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bc5b0 size=528 callers=1 calls=0
*/
void sub_11bc5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bc5b0ULL || rel >= 0x11bc7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bc7c0 size=272 callers=0 calls=2
   calls: sub_11bc8d0, sub_11bca90
*/
void sub_11bc7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bc7c0ULL || rel >= 0x11bc8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bc8d0 size=448 callers=3 calls=3
   calls: sub_104ffc0, sub_11be900, sub_6aeb70
*/
void sub_11bc8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bc8d0ULL || rel >= 0x11bca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bca90 size=256 callers=1 calls=0
*/
void sub_11bca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bca90ULL || rel >= 0x11bcb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcb90 size=16 callers=0 calls=0
*/
void sub_11bcb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcb90ULL || rel >= 0x11bcba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcba0 size=16 callers=0 calls=0
*/
void sub_11bcba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcba0ULL || rel >= 0x11bcbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcbb0 size=16 callers=0 calls=0
*/
void sub_11bcbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcbb0ULL || rel >= 0x11bcbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcbc0 size=16 callers=0 calls=0
*/
void sub_11bcbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcbc0ULL || rel >= 0x11bcbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcbd0 size=16 callers=0 calls=0
*/
void sub_11bcbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcbd0ULL || rel >= 0x11bcbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcbe0 size=16 callers=0 calls=0
*/
void sub_11bcbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcbe0ULL || rel >= 0x11bcbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcbf0 size=16 callers=0 calls=0
*/
void sub_11bcbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcbf0ULL || rel >= 0x11bcc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcc00 size=432 callers=1 calls=4
   calls: sub_1050000, sub_11bddd0, sub_11be7a0, sub_6aea40
*/
void sub_11bcc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcc00ULL || rel >= 0x11bcdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcdb0 size=64 callers=4 calls=2
   calls: sub_11be780, sub_11be790
*/
void sub_11bcdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcdb0ULL || rel >= 0x11bcdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcdf0 size=336 callers=2 calls=2
   calls: sub_1052c50, sub_11bcf40
*/
void sub_11bcdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcdf0ULL || rel >= 0x11bcf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bcf40 size=624 callers=9 calls=3
   calls: sub_1061810, sub_1061a40, sub_11be150
*/
void sub_11bcf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bcf40ULL || rel >= 0x11bd1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd1b0 size=16 callers=7 calls=0
*/
void sub_11bd1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd1b0ULL || rel >= 0x11bd1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd1c0 size=16 callers=3 calls=0
*/
void sub_11bd1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd1c0ULL || rel >= 0x11bd1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd1d0 size=224 callers=1 calls=0
*/
void sub_11bd1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd1d0ULL || rel >= 0x11bd2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd2b0 size=80 callers=4 calls=0
*/
void sub_11bd2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd2b0ULL || rel >= 0x11bd300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd300 size=64 callers=4 calls=0
*/
void sub_11bd300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd300ULL || rel >= 0x11bd340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd340 size=64 callers=4 calls=0
*/
void sub_11bd340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd340ULL || rel >= 0x11bd380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd380 size=304 callers=0 calls=1
   calls: sub_11bdb10
*/
void sub_11bd380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd380ULL || rel >= 0x11bd4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd4b0 size=1040 callers=0 calls=13
   calls: sub_1052ca0, sub_1052de0, sub_10617c0, sub_1063e60, sub_106e4e0, sub_106eae0, sub_10759a0, sub_10759c0, sub_1076180, sub_1076260, sub_1078410, sub_11bcf40
   ... +1 more
*/
void sub_11bd4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd4b0ULL || rel >= 0x11bd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd8c0 size=16 callers=0 calls=0
*/
void sub_11bd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd8c0ULL || rel >= 0x11bd8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd8d0 size=16 callers=0 calls=0
*/
void sub_11bd8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd8d0ULL || rel >= 0x11bd8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd8e0 size=16 callers=0 calls=0
*/
void sub_11bd8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd8e0ULL || rel >= 0x11bd8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd8f0 size=96 callers=0 calls=0
*/
void sub_11bd8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd8f0ULL || rel >= 0x11bd950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd950 size=96 callers=0 calls=0
*/
void sub_11bd950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd950ULL || rel >= 0x11bd9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bd9b0 size=240 callers=0 calls=0
*/
void sub_11bd9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bd9b0ULL || rel >= 0x11bdaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bdaa0 size=16 callers=0 calls=0
*/
void sub_11bdaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bdaa0ULL || rel >= 0x11bdab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bdab0 size=16 callers=0 calls=0
*/
void sub_11bdab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bdab0ULL || rel >= 0x11bdac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bdac0 size=16 callers=0 calls=0
*/
void sub_11bdac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bdac0ULL || rel >= 0x11bdad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bdad0 size=16 callers=0 calls=0
*/
void sub_11bdad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bdad0ULL || rel >= 0x11bdae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bdae0 size=16 callers=0 calls=0
*/
void sub_11bdae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bdae0ULL || rel >= 0x11bdaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bdaf0 size=16 callers=0 calls=0
*/
void sub_11bdaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bdaf0ULL || rel >= 0x11bdb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bdb00 size=16 callers=0 calls=0
*/
void sub_11bdb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bdb00ULL || rel >= 0x11bdb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bdb10 size=304 callers=2 calls=0
*/
void sub_11bdb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bdb10ULL || rel >= 0x11bdc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bdc40 size=400 callers=2 calls=0
*/
void sub_11bdc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bdc40ULL || rel >= 0x11bddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bddd0 size=240 callers=1 calls=1
   calls: sub_11be490
*/
void sub_11bddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bddd0ULL || rel >= 0x11bdec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bdec0 size=656 callers=0 calls=0
*/
void sub_11bdec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bdec0ULL || rel >= 0x11be150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be150 size=672 callers=1 calls=1
   calls: sub_11bdc40
*/
void sub_11be150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be150ULL || rel >= 0x11be3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be3f0 size=160 callers=0 calls=0
*/
void sub_11be3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be3f0ULL || rel >= 0x11be490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be490 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_11be490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be490ULL || rel >= 0x11be500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be500 size=80 callers=0 calls=0
*/
void sub_11be500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be500ULL || rel >= 0x11be550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be550 size=80 callers=0 calls=0
*/
void sub_11be550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be550ULL || rel >= 0x11be5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be5a0 size=80 callers=0 calls=0
*/
void sub_11be5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be5a0ULL || rel >= 0x11be5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be5f0 size=80 callers=0 calls=0
*/
void sub_11be5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be5f0ULL || rel >= 0x11be640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be640 size=80 callers=0 calls=0
*/
void sub_11be640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be640ULL || rel >= 0x11be690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be690 size=80 callers=0 calls=0
*/
void sub_11be690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be690ULL || rel >= 0x11be6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be6e0 size=80 callers=0 calls=0
*/
void sub_11be6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be6e0ULL || rel >= 0x11be730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be730 size=80 callers=0 calls=0
*/
void sub_11be730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be730ULL || rel >= 0x11be780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be780 size=16 callers=1 calls=0
*/
void sub_11be780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be780ULL || rel >= 0x11be790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be790 size=16 callers=1 calls=0
*/
void sub_11be790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be790ULL || rel >= 0x11be7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be7a0 size=352 callers=1 calls=2
   calls: sub_104dfb0, sub_6aea40
*/
void sub_11be7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be7a0ULL || rel >= 0x11be900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be900 size=208 callers=1 calls=2
   calls: sub_104dfd0, sub_6aeb70
*/
void sub_11be900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be900ULL || rel >= 0x11be9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be9d0 size=16 callers=0 calls=0
*/
void sub_11be9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be9d0ULL || rel >= 0x11be9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be9e0 size=16 callers=0 calls=0
*/
void sub_11be9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be9e0ULL || rel >= 0x11be9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011be9f0 size=16 callers=0 calls=0
*/
void sub_11be9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11be9f0ULL || rel >= 0x11bea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bea00 size=240 callers=0 calls=0
*/
void sub_11bea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bea00ULL || rel >= 0x11beaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011beaf0 size=16 callers=0 calls=0
*/
void sub_11beaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11beaf0ULL || rel >= 0x11beb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011beb00 size=16 callers=0 calls=0
*/
void sub_11beb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11beb00ULL || rel >= 0x11beb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011beb10 size=160 callers=0 calls=0
*/
void sub_11beb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11beb10ULL || rel >= 0x11bebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bebb0 size=208 callers=1 calls=1
   calls: anonymous
*/
void sub_11bebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bebb0ULL || rel >= 0x11bec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bec80 size=976 callers=0 calls=11
   calls: sub_1127d00, sub_1128e40, sub_115bfa0, sub_1179ec0, sub_1179ee0, sub_117dca0, sub_117faf0, sub_14214e0, sub_5cf8e0, sub_5cf8f0, sub_bf0820
   ref: Play_UI_Camp_Notice
*/
void Play_UI_Camp_Notice(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bec80ULL || rel >= 0x11bf050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf050 size=816 callers=0 calls=7
   calls: sub_1127d00, sub_1179ec0, sub_1179ee0, sub_117dca0, sub_117faf0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11bf050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf050ULL || rel >= 0x11bf380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf380 size=416 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_11bf380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf380ULL || rel >= 0x11bf520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf520 size=16 callers=0 calls=0
*/
void sub_11bf520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf520ULL || rel >= 0x11bf530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf530 size=16 callers=0 calls=0
*/
void sub_11bf530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf530ULL || rel >= 0x11bf540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf540 size=16 callers=0 calls=0
*/
void sub_11bf540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf540ULL || rel >= 0x11bf550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf550 size=16 callers=0 calls=0
*/
void sub_11bf550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf550ULL || rel >= 0x11bf560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf560 size=16 callers=0 calls=0
*/
void sub_11bf560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf560ULL || rel >= 0x11bf570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf570 size=16 callers=0 calls=0
*/
void sub_11bf570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf570ULL || rel >= 0x11bf580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf580 size=16 callers=0 calls=0
*/
void sub_11bf580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf580ULL || rel >= 0x11bf590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf590 size=16 callers=0 calls=0
*/
void sub_11bf590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf590ULL || rel >= 0x11bf5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf5a0 size=304 callers=0 calls=0
*/
void sub_11bf5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf5a0ULL || rel >= 0x11bf6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf6d0 size=208 callers=0 calls=0
*/
void sub_11bf6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf6d0ULL || rel >= 0x11bf7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf7a0 size=192 callers=2 calls=1
   calls: anonymous
*/
void sub_11bf7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf7a0ULL || rel >= 0x11bf860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bf860 size=1680 callers=1 calls=6
   calls: sub_1128e20, sub_112e830, sub_112ea00, sub_117dca0, sub_972c70, sub_bf0820
   ref: Set_State_Camp_Playground
*/
void Set_State_Camp_Playground(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bf860ULL || rel >= 0x11bfef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bfef0 size=192 callers=0 calls=3
   calls: sub_11c0030, sub_c43ed0, sub_c44310
*/
void sub_11bfef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bfef0ULL || rel >= 0x11bffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011bffb0 size=128 callers=1 calls=2
   calls: sub_c43ed0, sub_c44310
*/
void sub_11bffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11bffb0ULL || rel >= 0x11c0030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0030 size=368 callers=2 calls=4
   calls: sub_1127fc0, sub_117dca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11c0030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0030ULL || rel >= 0x11c01a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c01a0 size=304 callers=1 calls=4
   calls: sub_1127d00, sub_117dca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11c01a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c01a0ULL || rel >= 0x11c02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c02d0 size=16 callers=0 calls=0
*/
void sub_11c02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c02d0ULL || rel >= 0x11c02e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c02e0 size=16 callers=0 calls=0
*/
void sub_11c02e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c02e0ULL || rel >= 0x11c02f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c02f0 size=16 callers=0 calls=0
*/
void sub_11c02f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c02f0ULL || rel >= 0x11c0300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0300 size=16 callers=0 calls=0
*/
void sub_11c0300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0300ULL || rel >= 0x11c0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0310 size=16 callers=0 calls=0
*/
void sub_11c0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0310ULL || rel >= 0x11c0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0320 size=16 callers=0 calls=0
*/
void sub_11c0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0320ULL || rel >= 0x11c0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0330 size=16 callers=0 calls=0
*/
void sub_11c0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0330ULL || rel >= 0x11c0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0340 size=16 callers=0 calls=0
*/
void sub_11c0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0340ULL || rel >= 0x11c0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0350 size=304 callers=0 calls=0
*/
void sub_11c0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0350ULL || rel >= 0x11c0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0480 size=208 callers=0 calls=0
*/
void sub_11c0480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0480ULL || rel >= 0x11c0550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0550 size=688 callers=1 calls=0
*/
void sub_11c0550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0550ULL || rel >= 0x11c0800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0800 size=80 callers=1 calls=0
*/
void sub_11c0800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0800ULL || rel >= 0x11c0850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0850 size=80 callers=1 calls=0
*/
void sub_11c0850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0850ULL || rel >= 0x11c08a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c08a0 size=160 callers=1 calls=0
*/
void sub_11c08a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c08a0ULL || rel >= 0x11c0940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0940 size=80 callers=1 calls=0
*/
void sub_11c0940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0940ULL || rel >= 0x11c0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0990 size=144 callers=1 calls=0
*/
void sub_11c0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0990ULL || rel >= 0x11c0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0a20 size=80 callers=1 calls=0
*/
void sub_11c0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0a20ULL || rel >= 0x11c0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0a70 size=160 callers=6 calls=0
*/
void sub_11c0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0a70ULL || rel >= 0x11c0b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0b10 size=224 callers=6 calls=0
*/
void sub_11c0b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0b10ULL || rel >= 0x11c0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0bf0 size=80 callers=0 calls=1
   calls: sub_1121790
*/
void sub_11c0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0bf0ULL || rel >= 0x11c0c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0c40 size=80 callers=0 calls=1
   calls: sub_1121790
*/
void sub_11c0c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0c40ULL || rel >= 0x11c0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0c90 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_11c0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0c90ULL || rel >= 0x11c0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0d40 size=80 callers=0 calls=1
   calls: sub_1121790
*/
void sub_11c0d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0d40ULL || rel >= 0x11c0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0d90 size=80 callers=0 calls=1
   calls: sub_1121790
*/
void sub_11c0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0d90ULL || rel >= 0x11c0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0de0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_11c0de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0de0ULL || rel >= 0x11c0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0e90 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_11c0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0e90ULL || rel >= 0x11c0f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0f40 size=80 callers=0 calls=1
   calls: sub_1121790
*/
void sub_11c0f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0f40ULL || rel >= 0x11c0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0f90 size=80 callers=0 calls=1
   calls: sub_1121790
*/
void sub_11c0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0f90ULL || rel >= 0x11c0fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c0fe0 size=208 callers=1 calls=1
   calls: anonymous
*/
void sub_11c0fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c0fe0ULL || rel >= 0x11c10b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c10b0 size=560 callers=0 calls=13
   calls: sub_106e4e0, sub_1115590, sub_1128e20, sub_1128e40, sub_117dca0, sub_1180410, sub_11c12e0, sub_11c1730, sub_11c3950, sub_11c43c0, sub_11c4eb0, sub_11c5080
   ... +1 more
   ref: Set_State_Camp_Cooking
   ref: Play_bgm_or_st_sys06
*/
void Set_State_Camp_Cooking(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c10b0ULL || rel >= 0x11c12e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c12e0 size=1104 callers=1 calls=5
   calls: nn_ldn_SetStationAcceptPolicy, sub_113c6a0, sub_115bfb0, sub_115bfd0, sub_117dca0
*/
void sub_11c12e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c12e0ULL || rel >= 0x11c1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c1730 size=8736 callers=1 calls=69
   calls: sub_1061810, sub_112e3e0, sub_113c6a0, sub_115ba20, sub_1173990, sub_1179ed0, sub_117a6c0, sub_117a970, sub_117aaf0, sub_117dca0, sub_117faf0, sub_11c5e60
   ... +57 more
*/
void sub_11c1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c1730ULL || rel >= 0x11c3950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c3950 size=2672 callers=1 calls=9
   calls: sub_117dca0, sub_11c6060, sub_11c98d0, sub_11e7e70, sub_11e8b30, sub_5d99d0, sub_986200, sub_c39c40, sub_ea9cc0
*/
void sub_11c3950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c3950ULL || rel >= 0x11c43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c43c0 size=2800 callers=1 calls=10
   calls: sub_1061810, sub_117a970, sub_117dca0, sub_11c62c0, sub_11c9a30, sub_11eedb0, sub_11f0110, sub_986200, sub_c39c40, sub_ea9cc0
*/
void sub_11c43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c43c0ULL || rel >= 0x11c4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c4eb0 size=464 callers=1 calls=4
   calls: sub_113c6a0, sub_1157ef0, sub_115bc10, sub_117dca0
*/
void sub_11c4eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c4eb0ULL || rel >= 0x11c5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c5080 size=320 callers=2 calls=2
   calls: sub_1157ef0, sub_117dca0
*/
void sub_11c5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c5080ULL || rel >= 0x11c51c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c51c0 size=1616 callers=0 calls=18
   calls: sd8014_magocoro, sub_1127d00, sub_1127fc0, sub_113c6a0, sub_115ba20, sub_117a6c0, sub_117dca0, sub_11bd1b0, sub_11c6c10, sub_11c6e50, sub_11c7130, sub_11e8b30
   ... +6 more
*/
void sub_11c51c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c51c0ULL || rel >= 0x11c5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c5810 size=400 callers=0 calls=7
   calls: sub_1128e40, sub_1157860, sub_117dca0, sub_11c5080, sub_11c59a0, sub_11c73f0, sub_11c78d0
   ref: Stop_bgm_or_st_sys06
*/
void Stop_bgm_or_st_sys06(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c5810ULL || rel >= 0x11c59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c59a0 size=416 callers=1 calls=2
   calls: nn_ldn_SetStationAcceptPolicy, sub_117dca0
*/
void sub_11c59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c59a0ULL || rel >= 0x11c5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c5b40 size=800 callers=0 calls=12
   calls: nn_ldn_CreateNetwork_2, sub_113c6a0, sub_115ab80, sub_117a6c0, sub_117aea0, sub_117b400, sub_117dca0, sub_11c65c0, sub_11c6c10, sub_11c7e80, sub_11de050, sub_11dec80
*/
void sub_11c5b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c5b40ULL || rel >= 0x11c5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c5e60 size=512 callers=1 calls=8
   calls: sub_1157620, sub_115f260, sub_1164020, sub_11640a0, sub_1164120, sub_1164140, sub_117dca0, sub_5d99d0
*/
void sub_11c5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c5e60ULL || rel >= 0x11c6060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6060 size=608 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_11c6060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6060ULL || rel >= 0x11c62c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c62c0 size=768 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_11c62c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c62c0ULL || rel >= 0x11c65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c65c0 size=576 callers=1 calls=4
   calls: rare_grade, rare_grade_2, sub_117b380, sub_117dca0
*/
void sub_11c65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c65c0ULL || rel >= 0x11c6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6800 size=608 callers=0 calls=0
*/
void sub_11c6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6800ULL || rel >= 0x11c6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6a60 size=16 callers=0 calls=0
*/
void sub_11c6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6a60ULL || rel >= 0x11c6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6a70 size=16 callers=0 calls=0
*/
void sub_11c6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6a70ULL || rel >= 0x11c6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6a80 size=16 callers=0 calls=0
*/
void sub_11c6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6a80ULL || rel >= 0x11c6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6a90 size=16 callers=0 calls=0
*/
void sub_11c6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6a90ULL || rel >= 0x11c6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6aa0 size=16 callers=0 calls=0
*/
void sub_11c6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6aa0ULL || rel >= 0x11c6ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6ab0 size=16 callers=0 calls=0
*/
void sub_11c6ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6ab0ULL || rel >= 0x11c6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6ac0 size=16 callers=0 calls=0
*/
void sub_11c6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6ac0ULL || rel >= 0x11c6ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6ad0 size=16 callers=0 calls=0
*/
void sub_11c6ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6ad0ULL || rel >= 0x11c6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6ae0 size=304 callers=0 calls=0
*/
void sub_11c6ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6ae0ULL || rel >= 0x11c6c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6c10 size=336 callers=4 calls=3
   calls: sub_11c6d60, sub_5cf8e0, sub_5cf8f0
*/
void sub_11c6c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6c10ULL || rel >= 0x11c6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6d60 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11c6d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6d60ULL || rel >= 0x11c6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c6e50 size=736 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_11c6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c6e50ULL || rel >= 0x11c7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7130 size=336 callers=1 calls=3
   calls: sub_11c7280, sub_5cf8e0, sub_5cf8f0
*/
void sub_11c7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7130ULL || rel >= 0x11c7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7280 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11c7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7280ULL || rel >= 0x11c7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7370 size=16 callers=0 calls=0
*/
void sub_11c7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7370ULL || rel >= 0x11c7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7380 size=16 callers=0 calls=0
*/
void sub_11c7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7380ULL || rel >= 0x11c7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7390 size=16 callers=0 calls=0
*/
void sub_11c7390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7390ULL || rel >= 0x11c73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c73a0 size=16 callers=0 calls=0
*/
void sub_11c73a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c73a0ULL || rel >= 0x11c73b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c73b0 size=16 callers=0 calls=0
*/
void sub_11c73b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c73b0ULL || rel >= 0x11c73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c73c0 size=16 callers=0 calls=0
*/
void sub_11c73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c73c0ULL || rel >= 0x11c73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c73d0 size=16 callers=0 calls=0
*/
void sub_11c73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c73d0ULL || rel >= 0x11c73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c73e0 size=16 callers=0 calls=0
*/
void sub_11c73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c73e0ULL || rel >= 0x11c73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c73f0 size=944 callers=4 calls=3
   calls: sub_11c77a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11c73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c73f0ULL || rel >= 0x11c77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c77a0 size=304 callers=7 calls=1
   calls: sub_607750
*/
void sub_11c77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c77a0ULL || rel >= 0x11c78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c78d0 size=928 callers=4 calls=3
   calls: sub_11c7c70, sub_5cf8e0, sub_5cf8f0
*/
void sub_11c78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c78d0ULL || rel >= 0x11c7c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7c70 size=304 callers=11 calls=1
   calls: sub_607750
*/
void sub_11c7c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7c70ULL || rel >= 0x11c7da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7da0 size=176 callers=0 calls=5
   calls: sub_110c890, sub_1134fa0, sub_113a3b0, sub_116a750, sub_bf05e0
*/
void sub_11c7da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7da0ULL || rel >= 0x11c7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7e50 size=16 callers=0 calls=0
*/
void sub_11c7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7e50ULL || rel >= 0x11c7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7e60 size=16 callers=0 calls=0
*/
void sub_11c7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7e60ULL || rel >= 0x11c7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7e70 size=16 callers=0 calls=0
*/
void sub_11c7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7e70ULL || rel >= 0x11c7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7e80 size=336 callers=7 calls=3
   calls: sub_11c7fd0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11c7e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7e80ULL || rel >= 0x11c7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c7fd0 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11c7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c7fd0ULL || rel >= 0x11c80c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c80c0 size=224 callers=1 calls=1
   calls: sub_11f1bc0
*/
void sub_11c80c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c80c0ULL || rel >= 0x11c81a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c81a0 size=224 callers=1 calls=1
   calls: sub_11dbb20
*/
void sub_11c81a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c81a0ULL || rel >= 0x11c8280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c8280 size=224 callers=1 calls=1
   calls: sub_11da940
*/
void sub_11c8280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c8280ULL || rel >= 0x11c8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c8360 size=304 callers=0 calls=4
   calls: sub_1127d00, sub_117dca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11c8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c8360ULL || rel >= 0x11c8490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c8490 size=16 callers=0 calls=0
*/
void sub_11c8490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c8490ULL || rel >= 0x11c84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c84a0 size=16 callers=0 calls=0
*/
void sub_11c84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c84a0ULL || rel >= 0x11c84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c84b0 size=16 callers=0 calls=0
*/
void sub_11c84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c84b0ULL || rel >= 0x11c84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c84c0 size=224 callers=1 calls=1
   calls: sub_11e4700
*/
void sub_11c84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c84c0ULL || rel >= 0x11c85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c85a0 size=288 callers=1 calls=2
   calls: sub_112e3e0, sub_5db1b0
*/
void sub_11c85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c85a0ULL || rel >= 0x11c86c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c86c0 size=224 callers=1 calls=1
   calls: sub_11cb0b0
*/
void sub_11c86c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c86c0ULL || rel >= 0x11c87a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c87a0 size=256 callers=1 calls=2
   calls: sub_11d0390, sub_5d99d0
*/
void sub_11c87a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c87a0ULL || rel >= 0x11c88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c88a0 size=256 callers=1 calls=2
   calls: sub_11d2b90, sub_5d99d0
*/
void sub_11c88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c88a0ULL || rel >= 0x11c89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c89a0 size=224 callers=1 calls=1
   calls: sub_11d9be0
*/
void sub_11c89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c89a0ULL || rel >= 0x11c8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c8a80 size=224 callers=1 calls=1
   calls: sub_11cc8b0
*/
void sub_11c8a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c8a80ULL || rel >= 0x11c8b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c8b60 size=224 callers=1 calls=1
   calls: sub_11cd790
*/
void sub_11c8b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c8b60ULL || rel >= 0x11c8c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c8c40 size=224 callers=1 calls=1
   calls: sub_11ca6d0
*/
void sub_11c8c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c8c40ULL || rel >= 0x11c8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c8d20 size=224 callers=1 calls=1
   calls: sub_11d8900
*/
void sub_11c8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c8d20ULL || rel >= 0x11c8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c8e00 size=224 callers=1 calls=1
   calls: sub_11d7780
*/
void sub_11c8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c8e00ULL || rel >= 0x11c8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c8ee0 size=256 callers=1 calls=2
   calls: sub_11d6430, sub_5d99d0
*/
void sub_11c8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c8ee0ULL || rel >= 0x11c8fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c8fe0 size=256 callers=1 calls=2
   calls: sub_11d5240, sub_5d99d0
*/
void sub_11c8fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c8fe0ULL || rel >= 0x11c90e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c90e0 size=32 callers=0 calls=0
*/
void sub_11c90e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c90e0ULL || rel >= 0x11c9100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9100 size=16 callers=0 calls=0
*/
void sub_11c9100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9100ULL || rel >= 0x11c9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9110 size=32 callers=0 calls=0
*/
void sub_11c9110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9110ULL || rel >= 0x11c9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9130 size=32 callers=0 calls=0
*/
void sub_11c9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9130ULL || rel >= 0x11c9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9150 size=736 callers=33 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_11c9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9150ULL || rel >= 0x11c9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9430 size=736 callers=31 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_11c9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9430ULL || rel >= 0x11c9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9710 size=368 callers=32 calls=3
   calls: sub_11c7c70, sub_5cf8e0, sub_5cf8f0
*/
void sub_11c9710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9710ULL || rel >= 0x11c9880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9880 size=32 callers=0 calls=1
   calls: sub_1174350
*/
void sub_11c9880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9880ULL || rel >= 0x11c98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c98a0 size=16 callers=0 calls=0
*/
void sub_11c98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c98a0ULL || rel >= 0x11c98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c98b0 size=16 callers=0 calls=0
*/
void sub_11c98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c98b0ULL || rel >= 0x11c98c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c98c0 size=16 callers=0 calls=0
*/
void sub_11c98c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c98c0ULL || rel >= 0x11c98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c98d0 size=224 callers=1 calls=1
   calls: sub_11e78a0
*/
void sub_11c98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c98d0ULL || rel >= 0x11c99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c99b0 size=80 callers=0 calls=1
   calls: sub_11c7e80
*/
void sub_11c99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c99b0ULL || rel >= 0x11c9a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9a00 size=16 callers=0 calls=0
*/
void sub_11c9a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9a00ULL || rel >= 0x11c9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9a10 size=16 callers=0 calls=0
*/
void sub_11c9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9a10ULL || rel >= 0x11c9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9a20 size=16 callers=0 calls=0
*/
void sub_11c9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9a20ULL || rel >= 0x11c9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9a30 size=272 callers=1 calls=2
   calls: sub_11ee520, sub_5d99d0
*/
void sub_11c9a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9a30ULL || rel >= 0x11c9b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

