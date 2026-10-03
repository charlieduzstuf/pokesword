/* main functions 006a5160..006bc9c0 (45 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 006a5160 size=16 callers=0 calls=0
*/
void sub_6a5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5160ULL || rel >= 0x6a5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5170 size=112 callers=0 calls=0
*/
void sub_6a5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5170ULL || rel >= 0x6a51e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a51e0 size=64 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_6a51e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a51e0ULL || rel >= 0x6a5220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5220 size=16 callers=0 calls=0
*/
void sub_6a5220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5220ULL || rel >= 0x6a5230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5230 size=624 callers=806 calls=3
   calls: sub_15b9340, sub_15beab0, sub_6a54a0
*/
void sub_6a5230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5230ULL || rel >= 0x6a54a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a54a0 size=432 callers=166 calls=0
*/
void sub_6a54a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a54a0ULL || rel >= 0x6a5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5650 size=16 callers=0 calls=0
*/
void sub_6a5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5650ULL || rel >= 0x6a5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5660 size=16 callers=0 calls=0
*/
void sub_6a5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5660ULL || rel >= 0x6a5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5670 size=16 callers=0 calls=0
*/
void sub_6a5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5670ULL || rel >= 0x6a5680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5680 size=32 callers=0 calls=0
*/
void sub_6a5680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5680ULL || rel >= 0x6a56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a56a0 size=16 callers=0 calls=0
*/
void sub_6a56a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a56a0ULL || rel >= 0x6a56b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a56b0 size=16 callers=0 calls=0
*/
void sub_6a56b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a56b0ULL || rel >= 0x6a56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a56c0 size=48 callers=0 calls=0
*/
void sub_6a56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a56c0ULL || rel >= 0x6a56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a56f0 size=128 callers=0 calls=0
*/
void sub_6a56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a56f0ULL || rel >= 0x6a5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5770 size=64 callers=1 calls=0
*/
void sub_6a5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5770ULL || rel >= 0x6a57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a57b0 size=80 callers=0 calls=1
   calls: sub_6a6020
*/
void sub_6a57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a57b0ULL || rel >= 0x6a5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5800 size=80 callers=0 calls=1
   calls: sub_6a6020
*/
void sub_6a5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5800ULL || rel >= 0x6a5850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5850 size=176 callers=0 calls=2
   calls: SDK_MW_Nintendo_NEX_UT_4_6_8, sub_15b6dc0
*/
void sub_6a5850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5850ULL || rel >= 0x6a5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5900 size=64 callers=1 calls=0
*/
void sub_6a5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5900ULL || rel >= 0x6a5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5940 size=96 callers=3 calls=0
*/
void sub_6a5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5940ULL || rel >= 0x6a59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a59a0 size=336 callers=1 calls=7
   calls: Result_3, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_1650510, sub_6a3f40, sub_6a6130
*/
void sub_6a59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a59a0ULL || rel >= 0x6a5af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5af0 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a5af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5af0ULL || rel >= 0x6a5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5bd0 size=320 callers=1 calls=7
   calls: Result_3, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_1650360, sub_6a3f40, sub_6a6130
*/
void sub_6a5bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5bd0ULL || rel >= 0x6a5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5d10 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5d10ULL || rel >= 0x6a5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5df0 size=336 callers=1 calls=7
   calls: Result_3, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_1650730, sub_6a3f40, sub_6a6130
*/
void sub_6a5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5df0ULL || rel >= 0x6a5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a5f40 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a5f40ULL || rel >= 0x6a6020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6020 size=64 callers=12 calls=1
   calls: sub_6a6020
*/
void sub_6a6020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6020ULL || rel >= 0x6a6060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6060 size=16 callers=0 calls=0
*/
void sub_6a6060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6060ULL || rel >= 0x6a6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6070 size=48 callers=0 calls=0
*/
void sub_6a6070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6070ULL || rel >= 0x6a60a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a60a0 size=128 callers=0 calls=0
*/
void sub_6a60a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a60a0ULL || rel >= 0x6a6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6120 size=16 callers=23 calls=0
*/
void sub_6a6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6120ULL || rel >= 0x6a6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6130 size=32 callers=21 calls=1
   calls: sub_15b78c0
*/
void sub_6a6130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6130ULL || rel >= 0x6a6150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6150 size=128 callers=0 calls=0
*/
void sub_6a6150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6150ULL || rel >= 0x6a61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a61d0 size=128 callers=0 calls=0
*/
void sub_6a61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a61d0ULL || rel >= 0x6a6250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6250 size=48 callers=1 calls=0
*/
void sub_6a6250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6250ULL || rel >= 0x6a6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6280 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6a6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6280ULL || rel >= 0x6a6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6310 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6a6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6310ULL || rel >= 0x6a63a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a63a0 size=320 callers=0 calls=4
   calls: SDK_MW_Nintendo_NEX_DS_4_6_8, sub_15b6dc0, sub_15cf190, sub_15cf460
*/
void sub_6a63a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a63a0ULL || rel >= 0x6a64e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a64e0 size=80 callers=1 calls=0
*/
void sub_6a64e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a64e0ULL || rel >= 0x6a6530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6530 size=96 callers=2 calls=0
*/
void sub_6a6530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6530ULL || rel >= 0x6a6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6590 size=336 callers=1 calls=6
   calls: Result_3, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6590ULL || rel >= 0x6a66e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a66e0 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a66e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a66e0ULL || rel >= 0x6a67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a67c0 size=336 callers=1 calls=6
   calls: Result_3, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a67c0ULL || rel >= 0x6a6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6910 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6910ULL || rel >= 0x6a69f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a69f0 size=32 callers=0 calls=0
*/
void sub_6a69f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a69f0ULL || rel >= 0x6a6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6a10 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_6a6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6a10ULL || rel >= 0x6a6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6a50 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_6a6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6a50ULL || rel >= 0x6a6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6a90 size=16 callers=0 calls=0
*/
void sub_6a6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6a90ULL || rel >= 0x6a6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6aa0 size=48 callers=0 calls=0
*/
void sub_6a6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6aa0ULL || rel >= 0x6a6ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6ad0 size=128 callers=0 calls=0
*/
void sub_6a6ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6ad0ULL || rel >= 0x6a6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6b50 size=64 callers=1 calls=0
*/
void sub_6a6b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6b50ULL || rel >= 0x6a6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6b90 size=32 callers=0 calls=0
*/
void sub_6a6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6b90ULL || rel >= 0x6a6bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6bb0 size=640 callers=2 calls=2
   calls: sub_15b9390, sub_6a8500
*/
void sub_6a6bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6bb0ULL || rel >= 0x6a6e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6e30 size=64 callers=0 calls=1
   calls: sub_6a6bb0
*/
void sub_6a6e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6e30ULL || rel >= 0x6a6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6e70 size=304 callers=0 calls=2
   calls: SDK_MW_Nintendo_NEX_DS_4_6_8, sub_15b6dc0
*/
void sub_6a6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6e70ULL || rel >= 0x6a6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a6fa0 size=176 callers=9 calls=0
*/
void sub_6a6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a6fa0ULL || rel >= 0x6a7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a7050 size=80 callers=9 calls=0
*/
void sub_6a7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a7050ULL || rel >= 0x6a70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a70a0 size=432 callers=3 calls=6
   calls: Result_3, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a70a0ULL || rel >= 0x6a7250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a7250 size=432 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a7250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a7250ULL || rel >= 0x6a7400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a7400 size=320 callers=3 calls=3
   calls: sub_158c1f0, sub_15b9390, sub_6a7540
*/
void sub_6a7400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a7400ULL || rel >= 0x6a7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a7540 size=432 callers=1 calls=6
   calls: Result_3, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a7540ULL || rel >= 0x6a76f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a76f0 size=128 callers=0 calls=0
*/
void sub_6a76f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a76f0ULL || rel >= 0x6a7770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a7770 size=432 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a7770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a7770ULL || rel >= 0x6a7920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a7920 size=416 callers=2 calls=6
   calls: Result_3, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a7920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a7920ULL || rel >= 0x6a7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a7ac0 size=560 callers=0 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_6a7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a7ac0ULL || rel >= 0x6a7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a7cf0 size=672 callers=1 calls=7
   calls: Result_3, sub_15b9340, sub_15b9390, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a7cf0ULL || rel >= 0x6a7f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a7f90 size=704 callers=0 calls=3
   calls: sub_15b9340, sub_15b9390, sub_6a6120
*/
void sub_6a7f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a7f90ULL || rel >= 0x6a8250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8250 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6a8250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8250ULL || rel >= 0x6a82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a82d0 size=144 callers=0 calls=0
*/
void sub_6a82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a82d0ULL || rel >= 0x6a8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8360 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6a8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8360ULL || rel >= 0x6a83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a83e0 size=16 callers=0 calls=0
*/
void sub_6a83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a83e0ULL || rel >= 0x6a83f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a83f0 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6a83f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a83f0ULL || rel >= 0x6a8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8470 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6a8470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8470ULL || rel >= 0x6a84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a84f0 size=16 callers=0 calls=0
*/
void sub_6a84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a84f0ULL || rel >= 0x6a8500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8500 size=64 callers=8 calls=1
   calls: sub_6a8500
*/
void sub_6a8500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8500ULL || rel >= 0x6a8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8540 size=16 callers=0 calls=0
*/
void sub_6a8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8540ULL || rel >= 0x6a8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8550 size=48 callers=0 calls=0
*/
void sub_6a8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8550ULL || rel >= 0x6a8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8580 size=320 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_6a8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8580ULL || rel >= 0x6a86c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a86c0 size=128 callers=0 calls=0
*/
void sub_6a86c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a86c0ULL || rel >= 0x6a8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8740 size=48 callers=1 calls=0
*/
void sub_6a8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8740ULL || rel >= 0x6a8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8770 size=80 callers=0 calls=0
*/
void sub_6a8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8770ULL || rel >= 0x6a87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a87c0 size=80 callers=0 calls=0
*/
void sub_6a87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a87c0ULL || rel >= 0x6a8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8810 size=480 callers=0 calls=7
   calls: sub_159d190, sub_15b6dc0, sub_15b7a70, sub_15b7b20, sub_15cf190, sub_15cf460, sub_6a8ff0
*/
void sub_6a8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8810ULL || rel >= 0x6a89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a89f0 size=112 callers=1 calls=0
*/
void sub_6a89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a89f0ULL || rel >= 0x6a8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8a60 size=96 callers=2 calls=0
*/
void sub_6a8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8a60ULL || rel >= 0x6a8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8ac0 size=336 callers=1 calls=7
   calls: Result_3, sub_15a1080, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a8ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8ac0ULL || rel >= 0x6a8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8c10 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8c10ULL || rel >= 0x6a8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8cf0 size=352 callers=1 calls=7
   calls: Result_3, sub_15a1280, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8cf0ULL || rel >= 0x6a8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8e50 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a8e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8e50ULL || rel >= 0x6a8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8f30 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_6a8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8f30ULL || rel >= 0x6a8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8f70 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_6a8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8f70ULL || rel >= 0x6a8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8fb0 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_6a8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8fb0ULL || rel >= 0x6a8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a8ff0 size=64 callers=38 calls=1
   calls: sub_6a8ff0
*/
void sub_6a8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8ff0ULL || rel >= 0x6a9030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9030 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6a9030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9030ULL || rel >= 0x6a90b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a90b0 size=128 callers=0 calls=0
*/
void sub_6a90b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a90b0ULL || rel >= 0x6a9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9130 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6a9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9130ULL || rel >= 0x6a91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a91b0 size=16 callers=0 calls=0
*/
void sub_6a91b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a91b0ULL || rel >= 0x6a91c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a91c0 size=48 callers=0 calls=0
*/
void sub_6a91c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a91c0ULL || rel >= 0x6a91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a91f0 size=128 callers=0 calls=0
*/
void sub_6a91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a91f0ULL || rel >= 0x6a9270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9270 size=48 callers=1 calls=0
*/
void sub_6a9270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9270ULL || rel >= 0x6a92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a92a0 size=80 callers=0 calls=0
*/
void sub_6a92a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a92a0ULL || rel >= 0x6a92f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a92f0 size=80 callers=0 calls=0
*/
void sub_6a92f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a92f0ULL || rel >= 0x6a9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9340 size=496 callers=0 calls=3
   calls: sub_159d190, sub_15b6dc0, sub_6a9530
*/
void sub_6a9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9340ULL || rel >= 0x6a9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9530 size=272 callers=7 calls=4
   calls: sub_15b7a70, sub_15b7b20, sub_15cf190, sub_6a8ff0
*/
void sub_6a9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9530ULL || rel >= 0x6a9640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9640 size=176 callers=1 calls=0
*/
void sub_6a9640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9640ULL || rel >= 0x6a96f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a96f0 size=96 callers=5 calls=0
*/
void sub_6a96f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a96f0ULL || rel >= 0x6a9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9750 size=336 callers=1 calls=7
   calls: Result_3, sub_15a16f0, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9750ULL || rel >= 0x6a98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a98a0 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a98a0ULL || rel >= 0x6a9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9980 size=336 callers=1 calls=7
   calls: Result_3, sub_15a1910, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9980ULL || rel >= 0x6a9ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9ad0 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a9ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9ad0ULL || rel >= 0x6a9bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9bb0 size=336 callers=1 calls=7
   calls: Result_3, sub_15a14f0, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a9bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9bb0ULL || rel >= 0x6a9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9d00 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a9d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9d00ULL || rel >= 0x6a9de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9de0 size=336 callers=1 calls=7
   calls: Result_3, sub_15a1b10, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6a9de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9de0ULL || rel >= 0x6a9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006a9f30 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6a9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a9f30ULL || rel >= 0x6aa010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa010 size=928 callers=1 calls=10
   calls: Result_3, sub_15a1d30, sub_15b9340, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
   ref: %02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x
*/
void f_02x_02x_02x_02x_02x_02x_02x_02x_02x_02x_02x_02x_02x_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa010ULL || rel >= 0x6aa3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa3b0 size=272 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6aa3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa3b0ULL || rel >= 0x6aa4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa4c0 size=48 callers=0 calls=0
*/
void sub_6aa4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa4c0ULL || rel >= 0x6aa4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa4f0 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_6aa4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa4f0ULL || rel >= 0x6aa530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa530 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_6aa530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa530ULL || rel >= 0x6aa570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa570 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_6aa570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa570ULL || rel >= 0x6aa5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa5b0 size=128 callers=0 calls=0
*/
void sub_6aa5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa5b0ULL || rel >= 0x6aa630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa630 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6aa630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa630ULL || rel >= 0x6aa6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa6b0 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6aa6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa6b0ULL || rel >= 0x6aa730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa730 size=208 callers=9 calls=1
   calls: sub_15b9390
*/
void sub_6aa730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa730ULL || rel >= 0x6aa800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa800 size=48 callers=0 calls=1
   calls: sub_6aa730
*/
void sub_6aa800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa800ULL || rel >= 0x6aa830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa830 size=48 callers=0 calls=1
   calls: sub_6aa730
*/
void sub_6aa830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa830ULL || rel >= 0x6aa860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa860 size=48 callers=0 calls=0
*/
void sub_6aa860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa860ULL || rel >= 0x6aa890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa890 size=64 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6aa890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa890ULL || rel >= 0x6aa8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa8d0 size=64 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6aa8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa8d0ULL || rel >= 0x6aa910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa910 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_6aa910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa910ULL || rel >= 0x6aa960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa960 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_6aa960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa960ULL || rel >= 0x6aa9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa9b0 size=16 callers=0 calls=0
*/
void sub_6aa9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa9b0ULL || rel >= 0x6aa9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa9c0 size=48 callers=0 calls=0
*/
void sub_6aa9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa9c0ULL || rel >= 0x6aa9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aa9f0 size=128 callers=0 calls=0
*/
void sub_6aa9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aa9f0ULL || rel >= 0x6aaa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aaa70 size=80 callers=1 calls=0
*/
void sub_6aaa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aaa70ULL || rel >= 0x6aaac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aaac0 size=240 callers=1 calls=1
   calls: sub_15b9390
*/
void sub_6aaac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aaac0ULL || rel >= 0x6aabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aabb0 size=48 callers=0 calls=1
   calls: sub_6aaac0
*/
void sub_6aabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aabb0ULL || rel >= 0x6aabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aabe0 size=512 callers=0 calls=3
   calls: sub_15ae4c0, sub_15b6dc0, sub_6abc20
*/
void sub_6aabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aabe0ULL || rel >= 0x6aade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aade0 size=160 callers=1 calls=0
*/
void sub_6aade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aade0ULL || rel >= 0x6aae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aae80 size=96 callers=5 calls=0
*/
void sub_6aae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aae80ULL || rel >= 0x6aaee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aaee0 size=336 callers=1 calls=7
   calls: Result_3, sub_15aebd0, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6aaee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aaee0ULL || rel >= 0x6ab030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab030 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6ab030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab030ULL || rel >= 0x6ab110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab110 size=336 callers=1 calls=7
   calls: Result_3, sub_15ae980, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6ab110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab110ULL || rel >= 0x6ab260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab260 size=240 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6ab260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab260ULL || rel >= 0x6ab350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab350 size=336 callers=1 calls=7
   calls: Result_3, sub_15ae590, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6ab350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab350ULL || rel >= 0x6ab4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab4a0 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6ab4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab4a0ULL || rel >= 0x6ab580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab580 size=336 callers=1 calls=7
   calls: Result_3, sub_15ae790, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6ab580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab580ULL || rel >= 0x6ab6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab6d0 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6ab6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab6d0ULL || rel >= 0x6ab7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab7b0 size=336 callers=1 calls=7
   calls: Result_3, sub_15aedd0, sub_15b9340, sub_15ca0c0, sub_15caa30, sub_6a3f40, sub_6a6130
*/
void sub_6ab7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab7b0ULL || rel >= 0x6ab900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab900 size=224 callers=0 calls=1
   calls: sub_6a6120
*/
void sub_6ab900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab900ULL || rel >= 0x6ab9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab9e0 size=16 callers=0 calls=0
*/
void sub_6ab9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab9e0ULL || rel >= 0x6ab9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ab9f0 size=128 callers=0 calls=0
*/
void sub_6ab9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ab9f0ULL || rel >= 0x6aba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aba70 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6aba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aba70ULL || rel >= 0x6abaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abaf0 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6abaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abaf0ULL || rel >= 0x6abb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abb70 size=48 callers=0 calls=0
*/
void sub_6abb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abb70ULL || rel >= 0x6abba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abba0 size=64 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6abba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abba0ULL || rel >= 0x6abbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abbe0 size=64 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_6abbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abbe0ULL || rel >= 0x6abc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abc20 size=496 callers=32 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_6abc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abc20ULL || rel >= 0x6abe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abe10 size=16 callers=0 calls=0
*/
void sub_6abe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abe10ULL || rel >= 0x6abe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abe20 size=16 callers=0 calls=0
*/
void sub_6abe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abe20ULL || rel >= 0x6abe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abe30 size=48 callers=0 calls=0
*/
void sub_6abe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abe30ULL || rel >= 0x6abe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abe60 size=128 callers=0 calls=0
*/
void sub_6abe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abe60ULL || rel >= 0x6abee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abee0 size=240 callers=24 calls=2
   calls: sub_165e060, sub_165e140
*/
void sub_6abee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abee0ULL || rel >= 0x6abfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006abfd0 size=112 callers=1 calls=0
*/
void sub_6abfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6abfd0ULL || rel >= 0x6ac040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ac040 size=64 callers=1 calls=0
*/
void sub_6ac040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ac040ULL || rel >= 0x6ac080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ac080 size=416 callers=0 calls=2
   calls: sub_165e060, sub_6abee0
*/
void sub_6ac080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ac080ULL || rel >= 0x6ac220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ac220 size=112 callers=1 calls=3
   calls: sub_1652210, sub_16578d0, sub_173db30
*/
void sub_6ac220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ac220ULL || rel >= 0x6ac290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ac290 size=64 callers=19 calls=1
   calls: sub_173db30
*/
void sub_6ac290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ac290ULL || rel >= 0x6ac2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ac2d0 size=96 callers=13 calls=1
   calls: sub_173db30
*/
void sub_6ac2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ac2d0ULL || rel >= 0x6ac330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ac330 size=96 callers=2 calls=1
   calls: sub_173db30
*/
void sub_6ac330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ac330ULL || rel >= 0x6ac390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ac390 size=96 callers=2 calls=1
   calls: sub_173db30
*/
void sub_6ac390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ac390ULL || rel >= 0x6ac3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ac3f0 size=320 callers=1 calls=10
   calls: pia_session_heap, sub_165e140, sub_1722420, sub_17224d0, sub_1729340, sub_6ac530, sub_6ac610, sub_6ace20, sub_6acf50, sub_6ad0b0
*/
void sub_6ac3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ac3f0ULL || rel >= 0x6ac530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ac530 size=224 callers=1 calls=10
   calls: pia_common_heap, sub_16524a0, sub_1652720, sub_16527d0, sub_16528d0, sub_1657640, sub_165c7f0, sub_165d660, sub_165d900, sub_165e140
*/
void sub_6ac530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ac530ULL || rel >= 0x6ac610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ac610 size=1184 callers=1 calls=17
   calls: BroadcastReliableProtocol_send_buffer_num, ReliableProtocol_send_buffer_num, pia_transport_heap, sub_1651490, sub_1651670, sub_165e140, sub_1736280, sub_1736330, sub_1738030, sub_173d6d0, sub_173d700, sub_173d790
   ... +5 more
*/
void sub_6ac610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ac610ULL || rel >= 0x6acab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006acab0 size=176 callers=1 calls=8
   calls: sub_1652670, sub_16577b0, sub_165c910, sub_165d780, sub_1722590, sub_1729e20, sub_6acb60, sub_6acda0
*/
void sub_6acab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6acab0ULL || rel >= 0x6acb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006acb60 size=576 callers=1 calls=7
   calls: sub_1651580, sub_1737f70, sub_173d9d0, sub_173db30, sub_173f440, sub_1742770, sub_174d230
*/
void sub_6acb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6acb60ULL || rel >= 0x6acda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006acda0 size=112 callers=1 calls=6
   calls: sub_1662060, sub_16620c0, sub_1662300, sub_1688e10, sub_1688eb0, sub_16c6060
*/
void sub_6acda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6acda0ULL || rel >= 0x6ace10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ace10 size=16 callers=0 calls=0
*/
void sub_6ace10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ace10ULL || rel >= 0x6ace20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ace20 size=304 callers=1 calls=6
   calls: pia_nex_heap, sub_165e140, sub_16c3f90, sub_16c4050, sub_16c5ca0, sub_16d6b00
*/
void sub_6ace20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ace20ULL || rel >= 0x6acf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006acf50 size=352 callers=1 calls=8
   calls: pia_local_heap, sub_165e140, sub_167bc70, sub_167bd30, sub_167c410, sub_1688ce0, sub_1688f50, sub_6a0ec0
*/
void sub_6acf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6acf50ULL || rel >= 0x6ad0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad0b0 size=432 callers=1 calls=13
   calls: pia_lan_heap, sub_1652c70, sub_1652cf0, sub_1652d30, sub_1652d50, sub_165e140, sub_1661900, sub_16619c0, sub_1661ef0, sub_16620c0, sub_16621e0, sub_1662760
   ... +1 more
*/
void sub_6ad0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad0b0ULL || rel >= 0x6ad260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad260 size=16 callers=0 calls=0
*/
void sub_6ad260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad260ULL || rel >= 0x6ad270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad270 size=16 callers=0 calls=0
*/
void sub_6ad270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad270ULL || rel >= 0x6ad280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad280 size=16 callers=0 calls=0
*/
void sub_6ad280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad280ULL || rel >= 0x6ad290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad290 size=32 callers=0 calls=0
*/
void sub_6ad290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad290ULL || rel >= 0x6ad2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad2b0 size=16 callers=0 calls=0
*/
void sub_6ad2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad2b0ULL || rel >= 0x6ad2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad2c0 size=128 callers=0 calls=0
*/
void sub_6ad2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad2c0ULL || rel >= 0x6ad340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad340 size=320 callers=0 calls=2
   calls: sub_6b1560, sub_6b77a0
*/
void sub_6ad340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad340ULL || rel >= 0x6ad480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad480 size=272 callers=1 calls=1
   calls: sub_6af840
*/
void sub_6ad480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad480ULL || rel >= 0x6ad590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad590 size=928 callers=1 calls=2
   calls: sub_6afa20, sub_6b6550
*/
void sub_6ad590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad590ULL || rel >= 0x6ad930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad930 size=160 callers=1 calls=4
   calls: p1frXqxmeCZWFv0X, sub_172c520, sub_172ca20, sub_6ae0d0
*/
void sub_6ad930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad930ULL || rel >= 0x6ad9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ad9d0 size=816 callers=0 calls=3
   calls: sub_16b0030, sub_174de50, sub_6ad480
*/
void sub_6ad9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ad9d0ULL || rel >= 0x6add00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006add00 size=976 callers=1 calls=7
   calls: sub_1652940, sub_1652950, sub_165bc90, sub_165bea0, sub_6a0d40, sub_6aee10, sub_6af060
   ref: p1frXqxmeCZWFv0X
*/
void p1frXqxmeCZWFv0X(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6add00ULL || rel >= 0x6ae0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae0d0 size=1008 callers=1 calls=5
   calls: sub_6a0d40, sub_6b0780, sub_6b3790, sub_6c6280, sub_6c8e30
*/
void sub_6ae0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae0d0ULL || rel >= 0x6ae4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae4c0 size=112 callers=2 calls=2
   calls: sub_172c5a0, sub_172ca30
*/
void sub_6ae4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae4c0ULL || rel >= 0x6ae530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae530 size=112 callers=1 calls=1
   calls: sub_6a0e90
*/
void sub_6ae530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae530ULL || rel >= 0x6ae5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae5a0 size=32 callers=3 calls=0
*/
void sub_6ae5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae5a0ULL || rel >= 0x6ae5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae5c0 size=96 callers=1 calls=1
   calls: sub_6a0e90
*/
void sub_6ae5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae5c0ULL || rel >= 0x6ae620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae620 size=32 callers=1 calls=0
*/
void sub_6ae620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae620ULL || rel >= 0x6ae640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae640 size=32 callers=3 calls=0
*/
void sub_6ae640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae640ULL || rel >= 0x6ae660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae660 size=96 callers=1 calls=1
   calls: sub_6a0e90
*/
void sub_6ae660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae660ULL || rel >= 0x6ae6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae6c0 size=32 callers=3 calls=0
*/
void sub_6ae6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae6c0ULL || rel >= 0x6ae6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae6e0 size=32 callers=1 calls=0
*/
void sub_6ae6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae6e0ULL || rel >= 0x6ae700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae700 size=32 callers=1 calls=0
*/
void sub_6ae700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae700ULL || rel >= 0x6ae720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae720 size=80 callers=1 calls=1
   calls: sub_6b6f50
*/
void sub_6ae720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae720ULL || rel >= 0x6ae770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae770 size=32 callers=12 calls=0
*/
void sub_6ae770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae770ULL || rel >= 0x6ae790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae790 size=32 callers=14 calls=0
*/
void sub_6ae790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae790ULL || rel >= 0x6ae7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae7b0 size=32 callers=12 calls=0
*/
void sub_6ae7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae7b0ULL || rel >= 0x6ae7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae7d0 size=32 callers=12 calls=0
*/
void sub_6ae7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae7d0ULL || rel >= 0x6ae7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae7f0 size=32 callers=14 calls=0
*/
void sub_6ae7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae7f0ULL || rel >= 0x6ae810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae810 size=16 callers=1 calls=0
*/
void sub_6ae810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae810ULL || rel >= 0x6ae820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae820 size=32 callers=1 calls=0
*/
void sub_6ae820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae820ULL || rel >= 0x6ae840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae840 size=48 callers=0 calls=0
*/
void sub_6ae840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae840ULL || rel >= 0x6ae870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae870 size=16 callers=5 calls=0
*/
void sub_6ae870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae870ULL || rel >= 0x6ae880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae880 size=16 callers=1 calls=0
*/
void sub_6ae880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae880ULL || rel >= 0x6ae890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae890 size=320 callers=21 calls=1
   calls: sub_6afc50
*/
void sub_6ae890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae890ULL || rel >= 0x6ae9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ae9d0 size=96 callers=85 calls=1
   calls: sub_174de70
*/
void sub_6ae9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae9d0ULL || rel >= 0x6aea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aea30 size=16 callers=0 calls=0
*/
void sub_6aea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aea30ULL || rel >= 0x6aea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aea40 size=304 callers=20 calls=0
*/
void sub_6aea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aea40ULL || rel >= 0x6aeb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aeb70 size=384 callers=23 calls=0
*/
void sub_6aeb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aeb70ULL || rel >= 0x6aecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aecf0 size=16 callers=0 calls=0
*/
void sub_6aecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aecf0ULL || rel >= 0x6aed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aed00 size=128 callers=1 calls=4
   calls: sub_6b2bd0, sub_6c2090, sub_6c2450, sub_6c27d0
*/
void sub_6aed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aed00ULL || rel >= 0x6aed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aed80 size=16 callers=0 calls=0
*/
void sub_6aed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aed80ULL || rel >= 0x6aed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aed90 size=32 callers=2 calls=0
*/
void sub_6aed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aed90ULL || rel >= 0x6aedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aedb0 size=16 callers=3 calls=0
*/
void sub_6aedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aedb0ULL || rel >= 0x6aedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aedc0 size=16 callers=3 calls=0
*/
void sub_6aedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aedc0ULL || rel >= 0x6aedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aedd0 size=16 callers=4 calls=0
*/
void sub_6aedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aedd0ULL || rel >= 0x6aede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aede0 size=16 callers=3 calls=0
*/
void sub_6aede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aede0ULL || rel >= 0x6aedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aedf0 size=16 callers=5 calls=0
*/
void sub_6aedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aedf0ULL || rel >= 0x6aee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aee00 size=16 callers=1 calls=0
*/
void sub_6aee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aee00ULL || rel >= 0x6aee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aee10 size=592 callers=1 calls=0
*/
void sub_6aee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aee10ULL || rel >= 0x6af060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af060 size=592 callers=1 calls=1
   calls: sub_1652940
*/
void sub_6af060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af060ULL || rel >= 0x6af2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af2b0 size=656 callers=0 calls=0
*/
void sub_6af2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af2b0ULL || rel >= 0x6af540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af540 size=16 callers=0 calls=0
*/
void sub_6af540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af540ULL || rel >= 0x6af550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af550 size=16 callers=0 calls=0
*/
void sub_6af550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af550ULL || rel >= 0x6af560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af560 size=112 callers=0 calls=0
*/
void sub_6af560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af560ULL || rel >= 0x6af5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af5d0 size=16 callers=0 calls=0
*/
void sub_6af5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af5d0ULL || rel >= 0x6af5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af5e0 size=112 callers=0 calls=0
*/
void sub_6af5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af5e0ULL || rel >= 0x6af650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af650 size=64 callers=40 calls=0
*/
void sub_6af650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af650ULL || rel >= 0x6af690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af690 size=16 callers=0 calls=0
*/
void sub_6af690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af690ULL || rel >= 0x6af6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af6a0 size=16 callers=0 calls=0
*/
void sub_6af6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af6a0ULL || rel >= 0x6af6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af6b0 size=400 callers=0 calls=2
   calls: sub_165c200, sub_165e060
*/
void sub_6af6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af6b0ULL || rel >= 0x6af840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006af840 size=480 callers=1 calls=0
*/
void sub_6af840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af840ULL || rel >= 0x6afa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006afa20 size=560 callers=1 calls=0
*/
void sub_6afa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6afa20ULL || rel >= 0x6afc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006afc50 size=480 callers=4 calls=0
*/
void sub_6afc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6afc50ULL || rel >= 0x6afe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006afe30 size=352 callers=0 calls=0
*/
void sub_6afe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6afe30ULL || rel >= 0x6aff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006aff90 size=528 callers=0 calls=0
*/
void sub_6aff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aff90ULL || rel >= 0x6b01a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b01a0 size=128 callers=0 calls=0
*/
void sub_6b01a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b01a0ULL || rel >= 0x6b0220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b0220 size=1232 callers=3 calls=0
*/
void sub_6b0220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b0220ULL || rel >= 0x6b06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b06f0 size=112 callers=9 calls=0
*/
void sub_6b06f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b06f0ULL || rel >= 0x6b0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b0760 size=32 callers=21 calls=0
*/
void sub_6b0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b0760ULL || rel >= 0x6b0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b0780 size=16 callers=51 calls=0
*/
void sub_6b0780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b0780ULL || rel >= 0x6b0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b0790 size=960 callers=0 calls=2
   calls: sub_6b0b60, sub_6b3350
*/
void sub_6b0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b0790ULL || rel >= 0x6b0b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b0b50 size=16 callers=31 calls=0
*/
void sub_6b0b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b0b50ULL || rel >= 0x6b0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b0b60 size=368 callers=128 calls=1
   calls: sub_6b3350
*/
void sub_6b0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b0b60ULL || rel >= 0x6b0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b0cd0 size=224 callers=14 calls=0
*/
void sub_6b0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b0cd0ULL || rel >= 0x6b0db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b0db0 size=576 callers=0 calls=1
   calls: sub_6b0b60
*/
void sub_6b0db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b0db0ULL || rel >= 0x6b0ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b0ff0 size=16 callers=0 calls=0
*/
void sub_6b0ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b0ff0ULL || rel >= 0x6b1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1000 size=608 callers=1 calls=4
   calls: sub_165e060, sub_172ccd0, sub_6abee0, sub_6b1260
*/
void sub_6b1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1000ULL || rel >= 0x6b1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1260 size=400 callers=1 calls=1
   calls: sub_6ac040
*/
void sub_6b1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1260ULL || rel >= 0x6b13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b13f0 size=144 callers=16 calls=2
   calls: sub_165e060, sub_172ccd0
*/
void sub_6b13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b13f0ULL || rel >= 0x6b1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1480 size=16 callers=0 calls=0
*/
void sub_6b1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1480ULL || rel >= 0x6b1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1490 size=32 callers=4 calls=0
*/
void sub_6b1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1490ULL || rel >= 0x6b14b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b14b0 size=128 callers=0 calls=1
   calls: sub_172be20
*/
void sub_6b14b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b14b0ULL || rel >= 0x6b1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1530 size=48 callers=0 calls=1
   calls: sub_172be60
*/
void sub_6b1530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1530ULL || rel >= 0x6b1560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1560 size=208 callers=1 calls=1
   calls: sub_172be60
*/
void sub_6b1560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1560ULL || rel >= 0x6b1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1630 size=256 callers=9 calls=0
*/
void sub_6b1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1630ULL || rel >= 0x6b1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1730 size=32 callers=0 calls=0
*/
void sub_6b1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1730ULL || rel >= 0x6b1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1750 size=32 callers=0 calls=0
*/
void sub_6b1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1750ULL || rel >= 0x6b1770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1770 size=160 callers=0 calls=1
   calls: sub_172a3f0
*/
void sub_6b1770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1770ULL || rel >= 0x6b1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1810 size=32 callers=0 calls=0
*/
void sub_6b1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1810ULL || rel >= 0x6b1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1830 size=96 callers=0 calls=1
   calls: sub_172b620
*/
void sub_6b1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1830ULL || rel >= 0x6b1890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1890 size=176 callers=0 calls=2
   calls: sub_172b780, sub_172b7b0
*/
void sub_6b1890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1890ULL || rel >= 0x6b1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1940 size=32 callers=0 calls=0
*/
void sub_6b1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1940ULL || rel >= 0x6b1960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1960 size=32 callers=0 calls=0
*/
void sub_6b1960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1960ULL || rel >= 0x6b1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1980 size=64 callers=0 calls=1
   calls: sub_172a680
*/
void sub_6b1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1980ULL || rel >= 0x6b19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b19c0 size=144 callers=0 calls=2
   calls: sub_172ba40, sub_172bd80
*/
void sub_6b19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b19c0ULL || rel >= 0x6b1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1a50 size=208 callers=0 calls=3
   calls: sub_172bae0, sub_172bb10, sub_172bd80
*/
void sub_6b1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1a50ULL || rel >= 0x6b1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1b20 size=192 callers=0 calls=2
   calls: sub_165e060, sub_172ccd0
*/
void sub_6b1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1b20ULL || rel >= 0x6b1be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1be0 size=192 callers=0 calls=2
   calls: sub_165e060, sub_172ccd0
*/
void sub_6b1be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1be0ULL || rel >= 0x6b1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1ca0 size=176 callers=0 calls=2
   calls: sub_165e060, sub_172ccd0
*/
void sub_6b1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1ca0ULL || rel >= 0x6b1d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1d50 size=208 callers=0 calls=2
   calls: sub_165e060, sub_172ccd0
*/
void sub_6b1d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1d50ULL || rel >= 0x6b1e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1e20 size=176 callers=0 calls=2
   calls: sub_165e060, sub_172ccd0
*/
void sub_6b1e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1e20ULL || rel >= 0x6b1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1ed0 size=208 callers=0 calls=2
   calls: sub_165e060, sub_172ccd0
*/
void sub_6b1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1ed0ULL || rel >= 0x6b1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b1fa0 size=336 callers=0 calls=3
   calls: sub_165e060, sub_172b280, sub_172ccd0
*/
void sub_6b1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1fa0ULL || rel >= 0x6b20f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b20f0 size=192 callers=0 calls=2
   calls: sub_165e060, sub_172ccd0
*/
void sub_6b20f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b20f0ULL || rel >= 0x6b21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b21b0 size=16 callers=0 calls=0
*/
void sub_6b21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b21b0ULL || rel >= 0x6b21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b21c0 size=112 callers=0 calls=2
   calls: sub_165e060, sub_6abee0
*/
void sub_6b21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b21c0ULL || rel >= 0x6b2230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2230 size=176 callers=0 calls=2
   calls: sub_165e060, sub_172ccd0
*/
void sub_6b2230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2230ULL || rel >= 0x6b22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b22e0 size=224 callers=0 calls=3
   calls: sub_165e060, sub_172be60, sub_172ccd0
*/
void sub_6b22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b22e0ULL || rel >= 0x6b23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b23c0 size=64 callers=0 calls=1
   calls: sub_172afb0
*/
void sub_6b23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b23c0ULL || rel >= 0x6b2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2400 size=48 callers=0 calls=1
   calls: sub_172aef0
*/
void sub_6b2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2400ULL || rel >= 0x6b2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2430 size=64 callers=0 calls=1
   calls: sub_172b610
*/
void sub_6b2430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2430ULL || rel >= 0x6b2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2470 size=48 callers=0 calls=1
   calls: sub_172b550
*/
void sub_6b2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2470ULL || rel >= 0x6b24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b24a0 size=416 callers=1 calls=1
   calls: sub_6abfd0
*/
void sub_6b24a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b24a0ULL || rel >= 0x6b2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2640 size=432 callers=3 calls=2
   calls: sub_165e060, sub_6abee0
*/
void sub_6b2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2640ULL || rel >= 0x6b27f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b27f0 size=288 callers=3 calls=2
   calls: sub_6b0b60, sub_6b31c0
*/
void sub_6b27f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b27f0ULL || rel >= 0x6b2910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2910 size=512 callers=0 calls=1
   calls: sub_6b3530
*/
void sub_6b2910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2910ULL || rel >= 0x6b2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2b10 size=192 callers=4 calls=1
   calls: sub_172b280
*/
void sub_6b2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2b10ULL || rel >= 0x6b2bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2bd0 size=64 callers=1 calls=0
*/
void sub_6b2bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2bd0ULL || rel >= 0x6b2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2c10 size=16 callers=0 calls=0
*/
void sub_6b2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2c10ULL || rel >= 0x6b2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2c20 size=16 callers=0 calls=0
*/
void sub_6b2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2c20ULL || rel >= 0x6b2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2c30 size=192 callers=0 calls=0
*/
void sub_6b2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2c30ULL || rel >= 0x6b2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2cf0 size=624 callers=2 calls=0
*/
void sub_6b2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2cf0ULL || rel >= 0x6b2f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2f60 size=16 callers=0 calls=0
*/
void sub_6b2f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2f60ULL || rel >= 0x6b2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2f70 size=16 callers=0 calls=0
*/
void sub_6b2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2f70ULL || rel >= 0x6b2f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2f80 size=16 callers=0 calls=0
*/
void sub_6b2f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2f80ULL || rel >= 0x6b2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2f90 size=16 callers=0 calls=0
*/
void sub_6b2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2f90ULL || rel >= 0x6b2fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2fa0 size=16 callers=0 calls=0
*/
void sub_6b2fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2fa0ULL || rel >= 0x6b2fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2fb0 size=16 callers=0 calls=0
*/
void sub_6b2fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2fb0ULL || rel >= 0x6b2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2fc0 size=16 callers=0 calls=0
*/
void sub_6b2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2fc0ULL || rel >= 0x6b2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2fd0 size=16 callers=0 calls=0
*/
void sub_6b2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2fd0ULL || rel >= 0x6b2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2fe0 size=16 callers=0 calls=0
*/
void sub_6b2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2fe0ULL || rel >= 0x6b2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b2ff0 size=16 callers=0 calls=0
*/
void sub_6b2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b2ff0ULL || rel >= 0x6b3000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3000 size=16 callers=0 calls=0
   ref: LeaveSession
*/
void LeaveSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3000ULL || rel >= 0x6b3010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3010 size=16 callers=0 calls=0
*/
void sub_6b3010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3010ULL || rel >= 0x6b3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3020 size=16 callers=0 calls=0
   ref: StartSession
*/
void StartSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3020ULL || rel >= 0x6b3030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3030 size=16 callers=0 calls=0
*/
void sub_6b3030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3030ULL || rel >= 0x6b3040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3040 size=16 callers=0 calls=0
   ref: CleanupSession
*/
void CleanupSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3040ULL || rel >= 0x6b3050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3050 size=16 callers=0 calls=0
*/
void sub_6b3050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3050ULL || rel >= 0x6b3060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3060 size=16 callers=0 calls=0
*/
void sub_6b3060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3060ULL || rel >= 0x6b3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3070 size=16 callers=0 calls=0
   ref: CloseSession
*/
void CloseSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3070ULL || rel >= 0x6b3080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3080 size=16 callers=0 calls=0
*/
void sub_6b3080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3080ULL || rel >= 0x6b3090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3090 size=16 callers=0 calls=0
   ref: ExecSuccess
*/
void ExecSuccess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3090ULL || rel >= 0x6b30a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b30a0 size=16 callers=0 calls=0
*/
void sub_6b30a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b30a0ULL || rel >= 0x6b30b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b30b0 size=16 callers=0 calls=0
   ref: ExecCancel
*/
void ExecCancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b30b0ULL || rel >= 0x6b30c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b30c0 size=16 callers=0 calls=0
*/
void sub_6b30c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b30c0ULL || rel >= 0x6b30d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b30d0 size=16 callers=0 calls=0
   ref: ExecTimeout
*/
void ExecTimeout(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b30d0ULL || rel >= 0x6b30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b30e0 size=16 callers=0 calls=0
*/
void sub_6b30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b30e0ULL || rel >= 0x6b30f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b30f0 size=16 callers=0 calls=0
   ref: IndexSelectSession
*/
void IndexSelectSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b30f0ULL || rel >= 0x6b3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3100 size=16 callers=0 calls=0
*/
void sub_6b3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3100ULL || rel >= 0x6b3110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3110 size=16 callers=0 calls=0
   ref: NotifyErrorFunc
*/
void NotifyErrorFunc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3110ULL || rel >= 0x6b3120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3120 size=16 callers=0 calls=0
*/
void sub_6b3120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3120ULL || rel >= 0x6b3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3130 size=16 callers=0 calls=0
   ref: WaitMemberConnection
*/
void WaitMemberConnection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3130ULL || rel >= 0x6b3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3140 size=16 callers=0 calls=0
*/
void sub_6b3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3140ULL || rel >= 0x6b3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3150 size=16 callers=0 calls=0
   ref: CancelJoinRandomSession
*/
void CancelJoinRandomSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3150ULL || rel >= 0x6b3160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3160 size=16 callers=0 calls=0
*/
void sub_6b3160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3160ULL || rel >= 0x6b3170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3170 size=16 callers=0 calls=0
   ref: CancelJoinSession
*/
void CancelJoinSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3170ULL || rel >= 0x6b3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3180 size=16 callers=0 calls=0
*/
void sub_6b3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3180ULL || rel >= 0x6b3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3190 size=16 callers=0 calls=0
*/
void sub_6b3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3190ULL || rel >= 0x6b31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b31a0 size=16 callers=0 calls=0
*/
void sub_6b31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b31a0ULL || rel >= 0x6b31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b31b0 size=16 callers=0 calls=0
   ref: NullFunc
*/
void NullFunc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b31b0ULL || rel >= 0x6b31c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b31c0 size=400 callers=1 calls=0
*/
void sub_6b31c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b31c0ULL || rel >= 0x6b3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3350 size=480 callers=3 calls=0
*/
void sub_6b3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3350ULL || rel >= 0x6b3530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3530 size=480 callers=44 calls=0
*/
void sub_6b3530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3530ULL || rel >= 0x6b3710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3710 size=128 callers=0 calls=0
*/
void sub_6b3710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3710ULL || rel >= 0x6b3790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3790 size=576 callers=1 calls=1
   calls: sub_6b0220
*/
void sub_6b3790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3790ULL || rel >= 0x6b39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b39d0 size=272 callers=0 calls=5
   calls: sub_6b06f0, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b1630
*/
void sub_6b39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b39d0ULL || rel >= 0x6b3ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3ae0 size=224 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b1630
*/
void sub_6b3ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3ae0ULL || rel >= 0x6b3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3bc0 size=240 callers=0 calls=4
   calls: sub_6b06f0, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6b3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3bc0ULL || rel >= 0x6b3cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3cb0 size=240 callers=0 calls=4
   calls: sub_6b06f0, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6b3cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3cb0ULL || rel >= 0x6b3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3da0 size=224 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b1630
*/
void sub_6b3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3da0ULL || rel >= 0x6b3e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b3e80 size=512 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b0cd0
*/
void sub_6b3e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b3e80ULL || rel >= 0x6b4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4080 size=240 callers=0 calls=4
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6b4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4080ULL || rel >= 0x6b4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4170 size=208 callers=0 calls=4
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6b4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4170ULL || rel >= 0x6b4240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4240 size=192 callers=0 calls=3
   calls: sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6b4240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4240ULL || rel >= 0x6b4300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4300 size=128 callers=0 calls=7
   calls: sub_172ade0, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b0cd0, sub_6b1000, sub_6b1490
*/
void sub_6b4300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4300ULL || rel >= 0x6b4380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4380 size=16 callers=0 calls=0
*/
void sub_6b4380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4380ULL || rel >= 0x6b4390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4390 size=48 callers=0 calls=0
*/
void sub_6b4390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4390ULL || rel >= 0x6b43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b43c0 size=96 callers=0 calls=1
   calls: sub_172aef0
*/
void sub_6b43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b43c0ULL || rel >= 0x6b4420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4420 size=1088 callers=0 calls=19
   calls: sub_1652940, sub_1661a90, sub_1661af0, sub_1661d70, sub_1661dd0, sub_1661ea0, sub_16623a0, sub_1662420, sub_1662520, sub_1662590, sub_1679c10, sub_1679d30
   ... +7 more
   ref: p1frXqxmeCZWFv0X
*/
void p1frXqxmeCZWFv0X_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4420ULL || rel >= 0x6b4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4860 size=208 callers=0 calls=2
   calls: sub_172aef0, sub_172af20
*/
void sub_6b4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4860ULL || rel >= 0x6b4930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4930 size=624 callers=0 calls=6
   calls: sub_1679c10, sub_1679d30, sub_1679f00, sub_1679fa0, sub_172b050, sub_1733d80
*/
void sub_6b4930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4930ULL || rel >= 0x6b4ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4ba0 size=432 callers=0 calls=7
   calls: sub_172b1c0, sub_172b1f0, sub_172b280, sub_6c2020, sub_6c2090, sub_6c2810, sub_6c5860
*/
void sub_6b4ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4ba0ULL || rel >= 0x6b4d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4d50 size=48 callers=0 calls=0
*/
void sub_6b4d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4d50ULL || rel >= 0x6b4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4d80 size=96 callers=0 calls=1
   calls: sub_172b550
*/
void sub_6b4d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4d80ULL || rel >= 0x6b4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4de0 size=176 callers=0 calls=6
   calls: sub_16626d0, sub_1662700, sub_1724e80, sub_1724ee0, sub_172b460, sub_6b2b10
*/
void sub_6b4de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4de0ULL || rel >= 0x6b4e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4e90 size=208 callers=0 calls=2
   calls: sub_172b550, sub_172b580
*/
void sub_6b4e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4e90ULL || rel >= 0x6b4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4f60 size=48 callers=0 calls=0
*/
void sub_6b4f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4f60ULL || rel >= 0x6b4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b4f90 size=816 callers=0 calls=16
   calls: sub_16626d0, sub_1662700, sub_1679c10, sub_1679d30, sub_1724e80, sub_1724ee0, sub_172b050, sub_172b1c0, sub_172b1f0, sub_172b280, sub_172b460, sub_172b550
   ... +4 more
*/
void sub_6b4f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b4f90ULL || rel >= 0x6b52c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b52c0 size=400 callers=0 calls=8
   calls: sub_1661a90, sub_1661af0, sub_1661bf0, sub_1661d70, sub_1661dd0, sub_1661ea0, sub_1723370, sub_172b2a0
*/
void sub_6b52c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b52c0ULL || rel >= 0x6b5450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b5450 size=208 callers=0 calls=2
   calls: sub_172b3a0, sub_172b3d0
*/
void sub_6b5450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b5450ULL || rel >= 0x6b5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b5520 size=160 callers=0 calls=4
   calls: sub_167b870, sub_167b8d0, sub_167b990, sub_172bc60
*/
void sub_6b5520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b5520ULL || rel >= 0x6b55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b55c0 size=176 callers=0 calls=2
   calls: sub_172bcc0, sub_172bcf0
*/
void sub_6b55c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b55c0ULL || rel >= 0x6b5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b5670 size=64 callers=0 calls=1
   calls: sub_6aede0
*/
void sub_6b5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b5670ULL || rel >= 0x6b56b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b56b0 size=144 callers=0 calls=3
   calls: sub_6b13f0, sub_6b5740, sub_6b6a90
*/
void sub_6b56b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b56b0ULL || rel >= 0x6b5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b5740 size=352 callers=8 calls=0
*/
void sub_6b5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b5740ULL || rel >= 0x6b58a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b58a0 size=1152 callers=0 calls=5
   calls: sub_6b0cd0, sub_6b13f0, sub_6b3530, sub_6b5740, sub_6b7650
*/
void sub_6b58a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b58a0ULL || rel >= 0x6b5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b5d20 size=1344 callers=0 calls=2
   calls: sub_6b2640, sub_6b27f0
*/
void sub_6b5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b5d20ULL || rel >= 0x6b6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6260 size=48 callers=0 calls=1
   calls: sub_6b0b60
*/
void sub_6b6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6260ULL || rel >= 0x6b6290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6290 size=176 callers=0 calls=0
*/
void sub_6b6290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6290ULL || rel >= 0x6b6340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6340 size=192 callers=0 calls=1
   calls: sub_6b2cf0
*/
void sub_6b6340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6340ULL || rel >= 0x6b6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6400 size=16 callers=0 calls=0
*/
void sub_6b6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6400ULL || rel >= 0x6b6410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6410 size=16 callers=0 calls=0
   ref: RandomSession
*/
void RandomSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6410ULL || rel >= 0x6b6420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6420 size=16 callers=0 calls=0
*/
void sub_6b6420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6420ULL || rel >= 0x6b6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6430 size=16 callers=0 calls=0
   ref: SearchSession
*/
void SearchSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6430ULL || rel >= 0x6b6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6440 size=16 callers=0 calls=0
   ref: JoinSession
*/
void JoinSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6440ULL || rel >= 0x6b6450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6450 size=16 callers=0 calls=0
*/
void sub_6b6450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6450ULL || rel >= 0x6b6460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6460 size=16 callers=0 calls=0
   ref: BrowseJoinSession
*/
void BrowseJoinSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6460ULL || rel >= 0x6b6470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6470 size=16 callers=0 calls=0
*/
void sub_6b6470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6470ULL || rel >= 0x6b6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6480 size=16 callers=0 calls=0
   ref: CreateSession
*/
void CreateSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6480ULL || rel >= 0x6b6490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6490 size=16 callers=0 calls=0
*/
void sub_6b6490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6490ULL || rel >= 0x6b64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b64a0 size=16 callers=0 calls=0
   ref: UpdateSettingSession
*/
void UpdateSettingSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b64a0ULL || rel >= 0x6b64b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b64b0 size=16 callers=0 calls=0
*/
void sub_6b64b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b64b0ULL || rel >= 0x6b64c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b64c0 size=16 callers=0 calls=0
   ref: CheckBlock
*/
void CheckBlock(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b64c0ULL || rel >= 0x6b64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b64d0 size=128 callers=0 calls=0
*/
void sub_6b64d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b64d0ULL || rel >= 0x6b6550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6550 size=640 callers=1 calls=2
   calls: sub_5e2350, sub_65d700
*/
void sub_6b6550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6550ULL || rel >= 0x6b67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b67d0 size=352 callers=0 calls=2
   calls: sub_6b6930, sub_6b90e0
*/
void sub_6b67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b67d0ULL || rel >= 0x6b6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6930 size=272 callers=6 calls=3
   calls: sub_6aeb70, sub_6b90e0, sub_6b9260
*/
void sub_6b6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6930ULL || rel >= 0x6b6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6a40 size=16 callers=0 calls=0
*/
void sub_6b6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6a40ULL || rel >= 0x6b6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6a50 size=16 callers=0 calls=0
*/
void sub_6b6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6a50ULL || rel >= 0x6b6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6a60 size=16 callers=0 calls=0
*/
void sub_6b6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6a60ULL || rel >= 0x6b6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6a70 size=16 callers=0 calls=0
*/
void sub_6b6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6a70ULL || rel >= 0x6b6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6a80 size=16 callers=0 calls=0
*/
void sub_6b6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6a80ULL || rel >= 0x6b6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6a90 size=736 callers=3 calls=8
   calls: sub_6ae890, sub_6aea40, sub_6b6930, sub_6b6d70, sub_6b9030, sub_6b90e0, sub_6b92c0, sub_6be8b0
*/
void sub_6b6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6a90ULL || rel >= 0x6b6d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6d70 size=480 callers=2 calls=4
   calls: sub_16b0030, sub_174de50, sub_6b87e0, sub_6b9da0
*/
void sub_6b6d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6d70ULL || rel >= 0x6b6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b6f50 size=1024 callers=1 calls=6
   calls: sub_6ae870, sub_6b6930, sub_6b7350, sub_6b7520, sub_6b9560, sub_6b9d40
*/
void sub_6b6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b6f50ULL || rel >= 0x6b7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7350 size=464 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_6b7820, sub_6c1030
*/
void sub_6b7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7350ULL || rel >= 0x6b7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7520 size=304 callers=2 calls=4
   calls: sub_65da00, sub_65daf0, sub_6b78f0, sub_6c15c0
*/
void sub_6b7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7520ULL || rel >= 0x6b7650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7650 size=16 callers=12 calls=0
*/
void sub_6b7650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7650ULL || rel >= 0x6b7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7660 size=16 callers=2 calls=0
*/
void sub_6b7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7660ULL || rel >= 0x6b7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7670 size=304 callers=0 calls=1
   calls: sub_6b8610
*/
void sub_6b7670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7670ULL || rel >= 0x6b77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b77a0 size=80 callers=1 calls=0
*/
void sub_6b77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b77a0ULL || rel >= 0x6b77f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b77f0 size=48 callers=0 calls=0
*/
void sub_6b77f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b77f0ULL || rel >= 0x6b7820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7820 size=208 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_6b89b0, sub_6b8ad0
*/
void sub_6b7820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7820ULL || rel >= 0x6b78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b78f0 size=208 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_6b8d70, sub_6b8e80
*/
void sub_6b78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b78f0ULL || rel >= 0x6b79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b79c0 size=80 callers=0 calls=0
*/
void sub_6b79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b79c0ULL || rel >= 0x6b7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7a10 size=80 callers=0 calls=0
*/
void sub_6b7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7a10ULL || rel >= 0x6b7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7a60 size=80 callers=0 calls=0
*/
void sub_6b7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7a60ULL || rel >= 0x6b7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7ab0 size=80 callers=0 calls=0
*/
void sub_6b7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7ab0ULL || rel >= 0x6b7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7b00 size=448 callers=0 calls=2
   calls: sub_6b6d70, sub_6b9f50
*/
void sub_6b7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7b00ULL || rel >= 0x6b7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7cc0 size=16 callers=0 calls=0
*/
void sub_6b7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7cc0ULL || rel >= 0x6b7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7cd0 size=240 callers=0 calls=0
*/
void sub_6b7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7cd0ULL || rel >= 0x6b7dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7dc0 size=16 callers=0 calls=0
*/
void sub_6b7dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7dc0ULL || rel >= 0x6b7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7dd0 size=16 callers=0 calls=0
*/
void sub_6b7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7dd0ULL || rel >= 0x6b7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7de0 size=160 callers=0 calls=0
*/
void sub_6b7de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7de0ULL || rel >= 0x6b7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7e80 size=160 callers=0 calls=0
*/
void sub_6b7e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7e80ULL || rel >= 0x6b7f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b7f20 size=240 callers=0 calls=0
*/
void sub_6b7f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b7f20ULL || rel >= 0x6b8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8010 size=16 callers=0 calls=0
*/
void sub_6b8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8010ULL || rel >= 0x6b8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8020 size=480 callers=0 calls=6
   calls: gflnet3_message_lite_2, sub_65da00, sub_65daf0, sub_6c01e0, sub_6c1160, sub_6c16f0
*/
void sub_6b8020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8020ULL || rel >= 0x6b8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8200 size=160 callers=0 calls=0
*/
void sub_6b8200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8200ULL || rel >= 0x6b82a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b82a0 size=160 callers=0 calls=0
*/
void sub_6b82a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b82a0ULL || rel >= 0x6b8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8340 size=16 callers=0 calls=0
*/
void sub_6b8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8340ULL || rel >= 0x6b8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8350 size=16 callers=0 calls=0
*/
void sub_6b8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8350ULL || rel >= 0x6b8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8360 size=160 callers=0 calls=0
*/
void sub_6b8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8360ULL || rel >= 0x6b8400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8400 size=160 callers=0 calls=0
*/
void sub_6b8400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8400ULL || rel >= 0x6b84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b84a0 size=16 callers=0 calls=0
*/
void sub_6b84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b84a0ULL || rel >= 0x6b84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b84b0 size=160 callers=0 calls=0
*/
void sub_6b84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b84b0ULL || rel >= 0x6b8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8550 size=16 callers=0 calls=0
*/
void sub_6b8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8550ULL || rel >= 0x6b8560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8560 size=160 callers=0 calls=0
*/
void sub_6b8560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8560ULL || rel >= 0x6b8600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8600 size=16 callers=0 calls=0
*/
void sub_6b8600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8600ULL || rel >= 0x6b8610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8610 size=464 callers=2 calls=0
*/
void sub_6b8610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8610ULL || rel >= 0x6b87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b87e0 size=464 callers=1 calls=0
*/
void sub_6b87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b87e0ULL || rel >= 0x6b89b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b89b0 size=288 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_6b8c00
*/
void sub_6b89b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b89b0ULL || rel >= 0x6b8ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8ad0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_6c01e0, sub_6c0480, sub_6c1030, sub_6c14f0, sub_c70
*/
void sub_6b8ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8ad0ULL || rel >= 0x6b8c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8c00 size=368 callers=2 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_6b8c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8c00ULL || rel >= 0x6b8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8d70 size=272 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_6b8c00
*/
void sub_6b8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8d70ULL || rel >= 0x6b8e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8e80 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_6c01e0, sub_6c0480, sub_6c15c0, sub_6c1a80, sub_c70
*/
void sub_6b8e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8e80ULL || rel >= 0x6b8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b8fb0 size=128 callers=0 calls=0
*/
void sub_6b8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b8fb0ULL || rel >= 0x6b9030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b9030 size=176 callers=3 calls=1
   calls: sub_6ba5a0
*/
void sub_6b9030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b9030ULL || rel >= 0x6b90e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b90e0 size=384 callers=12 calls=0
*/
void sub_6b90e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b90e0ULL || rel >= 0x6b9260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b9260 size=96 callers=6 calls=0
*/
void sub_6b9260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b9260ULL || rel >= 0x6b92c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b92c0 size=672 callers=3 calls=3
   calls: sub_5e2350, sub_6bab40, sub_6be8b0
*/
void sub_6b92c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b92c0ULL || rel >= 0x6b9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b9560 size=944 callers=3 calls=4
   calls: sub_6ae890, sub_6b9910, sub_6b9a20, sub_6ba6a0
*/
void sub_6b9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b9560ULL || rel >= 0x6b9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b9910 size=272 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_6ba1e0, sub_6bc530
*/
void sub_6b9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b9910ULL || rel >= 0x6b9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b9a20 size=800 callers=1 calls=9
   calls: sub_65da00, sub_65daf0, sub_6bb3f0, sub_6bbc20, sub_6bce50, sub_6bd240, sub_6bd8a0, sub_6bdb90, sub_c70
*/
void sub_6b9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b9a20ULL || rel >= 0x6b9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b9d40 size=96 callers=5 calls=0
*/
void sub_6b9d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b9d40ULL || rel >= 0x6b9da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b9da0 size=432 callers=1 calls=2
   calls: sub_6bab40, sub_6bb230
*/
void sub_6b9da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b9da0ULL || rel >= 0x6b9f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006b9f50 size=656 callers=2 calls=0
*/
void sub_6b9f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b9f50ULL || rel >= 0x6ba1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ba1e0 size=208 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_6bb3f0, sub_6bb510
*/
void sub_6ba1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ba1e0ULL || rel >= 0x6ba2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ba2b0 size=272 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_6ba3c0, sub_6bc9c0
*/
void sub_6ba2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ba2b0ULL || rel >= 0x6ba3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ba3c0 size=208 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_6bb3f0, sub_6bb7b0
*/
void sub_6ba3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ba3c0ULL || rel >= 0x6ba490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ba490 size=112 callers=0 calls=1
   calls: sub_6ba2b0
*/
void sub_6ba490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ba490ULL || rel >= 0x6ba500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ba500 size=80 callers=0 calls=0
*/
void sub_6ba500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ba500ULL || rel >= 0x6ba550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ba550 size=80 callers=0 calls=0
*/
void sub_6ba550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ba550ULL || rel >= 0x6ba5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ba5a0 size=256 callers=1 calls=0
*/
void sub_6ba5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ba5a0ULL || rel >= 0x6ba6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ba6a0 size=400 callers=16 calls=0
*/
void sub_6ba6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ba6a0ULL || rel >= 0x6ba830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ba830 size=784 callers=0 calls=0
*/
void sub_6ba830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ba830ULL || rel >= 0x6bab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bab40 size=448 callers=2 calls=0
*/
void sub_6bab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bab40ULL || rel >= 0x6bad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bad00 size=160 callers=0 calls=0
*/
void sub_6bad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bad00ULL || rel >= 0x6bada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bada0 size=528 callers=0 calls=7
   calls: gflnet3_message_lite_2, sub_65da00, sub_65daf0, sub_6bc650, sub_6bcae0, sub_6bcf70, sub_6bd8a0
*/
void sub_6bada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bada0ULL || rel >= 0x6bafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bafb0 size=160 callers=0 calls=0
*/
void sub_6bafb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bafb0ULL || rel >= 0x6bb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bb050 size=160 callers=0 calls=0
*/
void sub_6bb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bb050ULL || rel >= 0x6bb0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bb0f0 size=160 callers=0 calls=0
*/
void sub_6bb0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bb0f0ULL || rel >= 0x6bb190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bb190 size=160 callers=0 calls=0
*/
void sub_6bb190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bb190ULL || rel >= 0x6bb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bb230 size=448 callers=13 calls=0
*/
void sub_6bb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bb230ULL || rel >= 0x6bb3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bb3f0 size=288 callers=4 calls=3
   calls: sub_65da00, sub_65daf0, sub_6bb640
*/
void sub_6bb3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bb3f0ULL || rel >= 0x6bb510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bb510 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_6bc530, sub_6bc920, sub_6bd8a0, sub_6bdb90, sub_c70
*/
void sub_6bb510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bb510ULL || rel >= 0x6bb640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bb640 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_6bb640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bb640ULL || rel >= 0x6bb7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bb7b0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_6bc9c0, sub_6bcdb0, sub_6bd8a0, sub_6bdb90, sub_c70
*/
void sub_6bb7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bb7b0ULL || rel >= 0x6bb8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bb8e0 size=272 callers=0 calls=4
   calls: sub_65da00, sub_65daf0, sub_6bba00, sub_6bce50
*/
void sub_6bb8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bb8e0ULL || rel >= 0x6bb9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bb9f0 size=16 callers=0 calls=0
*/
void sub_6bb9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bb9f0ULL || rel >= 0x6bba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bba00 size=208 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_6bb3f0, sub_6bbad0
*/
void sub_6bba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bba00ULL || rel >= 0x6bbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bbad0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_6bce50, sub_6bd240, sub_6bd8a0, sub_6bdb90, sub_c70
*/
void sub_6bbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bbad0ULL || rel >= 0x6bbc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bbc00 size=16 callers=0 calls=0
*/
void sub_6bbc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bbc00ULL || rel >= 0x6bbc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bbc10 size=16 callers=0 calls=0
*/
void sub_6bbc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bbc10ULL || rel >= 0x6bbc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bbc20 size=384 callers=1 calls=0
*/
void sub_6bbc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bbc20ULL || rel >= 0x6bbda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bbda0 size=736 callers=0 calls=0
*/
void sub_6bbda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bbda0ULL || rel >= 0x6bc080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc080 size=128 callers=0 calls=0
*/
void sub_6bc080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc080ULL || rel >= 0x6bc100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc100 size=400 callers=0 calls=9
   calls: gflnet3_ping_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: ping.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
   ref: CHECK failed: file != NULL: 
*/
void gflnet3_ping(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc100ULL || rel >= 0x6bc290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc290 size=272 callers=11 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: ping.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_ping_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc290ULL || rel >= 0x6bc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc3a0 size=176 callers=0 calls=0
*/
void sub_6bc3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc3a0ULL || rel >= 0x6bc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc450 size=224 callers=0 calls=4
   calls: gflnet3_message_4, gflnet3_ping_2, sub_6fff50, sub_7007d0
*/
void sub_6bc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc450ULL || rel >= 0x6bc530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc530 size=32 callers=4 calls=0
*/
void sub_6bc530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc530ULL || rel >= 0x6bc550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc550 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_ping_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc550ULL || rel >= 0x6bc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc580 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6bc580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc580ULL || rel >= 0x6bc5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc5e0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6bc5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc5e0ULL || rel >= 0x6bc640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc640 size=16 callers=0 calls=0
*/
void sub_6bc640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc640ULL || rel >= 0x6bc650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc650 size=64 callers=3 calls=1
   calls: gflnet3_ping_2
*/
void sub_6bc650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc650ULL || rel >= 0x6bc690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc690 size=96 callers=0 calls=2
   calls: sub_6bc6f0, sub_c70
*/
void sub_6bc690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc690ULL || rel >= 0x6bc6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc6f0 size=32 callers=1 calls=0
*/
void sub_6bc6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc6f0ULL || rel >= 0x6bc710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc710 size=16 callers=0 calls=0
*/
void sub_6bc710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc710ULL || rel >= 0x6bc720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc720 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_6bc720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc720ULL || rel >= 0x6bc7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc7c0 size=16 callers=0 calls=0
*/
void sub_6bc7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc7c0ULL || rel >= 0x6bc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc7d0 size=16 callers=0 calls=0
*/
void sub_6bc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc7d0ULL || rel >= 0x6bc7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc7e0 size=16 callers=1 calls=0
*/
void sub_6bc7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc7e0ULL || rel >= 0x6bc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc7f0 size=224 callers=0 calls=2
   calls: gflnet3_generated_message_util, gflnet3_ping_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_ping_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc7f0ULL || rel >= 0x6bc8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc8d0 size=80 callers=0 calls=0
*/
void sub_6bc8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc8d0ULL || rel >= 0x6bc920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc920 size=32 callers=1 calls=0
*/
void sub_6bc920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc920ULL || rel >= 0x6bc940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc940 size=16 callers=0 calls=0
*/
void sub_6bc940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc940ULL || rel >= 0x6bc950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc950 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6bc950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc950ULL || rel >= 0x6bc9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bc9c0 size=32 callers=4 calls=0
*/
void sub_6bc9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc9c0ULL || rel >= 0x6bc9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

